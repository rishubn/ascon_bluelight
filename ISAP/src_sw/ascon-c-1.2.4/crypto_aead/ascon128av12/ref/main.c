 
#include <stdio.h>
#include <stdint.h>
#include "crypto_aead.h"
#include <string.h>

#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))


uint8_t* str2byte(char* str)
{
    if(str == NULL) 
       return NULL;

    size_t slength = strlen(str);
    if((slength % 2) != 0) // must be even
       return NULL;

    size_t dlength = slength / 2;

    uint8_t* data = malloc(dlength);
    memset(data, 0, dlength);

    size_t index = 0;
    while (index < slength) {
        char c = str[index];
        int value = 0;
        if(c >= '0' && c <= '9')
          value = (c - '0');
        else if (c >= 'A' && c <= 'F') 
          value = (10 + (c - 'A'));
        else if (c >= 'a' && c <= 'f')
          value = (10 + (c - 'a'));
        else {
          free(data);
          return NULL;
        }

        data[(index/2)] += value << (((index + 1) % 2) * 4);

        index++;
    }

    return data;
}

//function could be used to read from test_vectors file
int read_tv()
{
    uint8_t *ct;

    uint8_t *key;
    uint8_t *npub;
    uint8_t *ad;
    uint8_t *pt;
    uint8_t *tag;

    int pt_len;
    int ad_len;
    int ct_len;
    int dec;
    FILE *fptr;
    char buffer[1024];
    int decrypt = 0;
    if((fptr = fopen("test_vectors.txt", "r")) == NULL)
    {
        printf("Can't open file\n");
        return 1;
    }
    char name[1024];
    char value[1024];
    while(fgets(buffer, 1024, fptr) != NULL)
    {
        
        if(buffer[0] == '#')
        {
            printf("\n\n%s\n", buffer);
        }
        else
        {
            memset(name, 0, 1024);
            memset(value, 0, 1024);
            sscanf(buffer, " %[0-9a-zA-Z] = %[0-9a-zA-Z][^\n]", name, value);
            printf("%s : %s\n", name, value);
              
            switch(name[0])
            {
                case 'd':
                    decrypt = 1;
                    break;
                case 'k':
                    key = str2byte(value);
                    break;
                case 'n':
                    npub = str2byte(value);
                    break;
                case 'a':
                    ad_len = (int)(strlen(value) / 2);
                    ad = str2byte(value);
                    break;
                case 'p':
                    pt_len = (int)(strlen(value) / 2);
                    pt = str2byte(value);
                    break;
                case 'c':
                    ct_len = (int)(strlen(value) / 2);
                    ct = str2byte(value);
                    break;
                case 't':
                    tag = str2byte(value);
                    if(decrypt)
                    {
                        int pt_len = NELEMS(pt) + 0x20;
                        crypto_aead_decrypt(pt, &pt_len,0, ct, ct_len+0x20, ad, ad_len, npub, key);
                    }
                    else
                    {
                       int ct_len = NELEMS(ct);
                       crypto_aead_encrypt(ct, &ct_len, pt, pt_len, ad, ad_len, 0, npub, key);
                    }
                    break;
                default:
                    break;
            }
        }
    }


    int i;
    printf("\n");
    for(i = 0; i < 16; i++)
    {
        printf("%02x",ct[i]);
    }
    printf("\n");

    return 0;
}

int main()
{


    uint8_t key[32] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F};
    uint8_t key1[16] = {0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F};
    uint8_t npub[16] = {0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F};
    uint8_t npub1[12] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B};
    uint8_t pt[16] = {0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F};
    uint8_t ad[32] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F};
    uint8_t tag[16]= {0x52,0xCD,0x28,0xFD,0xD9,0x17,0x4F,0x2C,0xDA,0x37,0x97,0xAD,0x6F,0xE8,0x2C,0x93};
    uint8_t ct[32]; // = {0xBA};
    int key_length;
    int npub_length;
    int ad_length = 0;
    int pt_length = 0;
    int ct_length = 32;
    int tag_length;

    read_tv();
}
