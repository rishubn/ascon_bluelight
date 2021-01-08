set INTERFACE_REPO "../LWC_tb"
set TOP_LEVEL_NAME LWC_TB
set STOP_AT_FAULT True
set CUSTOM_DO_FILE "wave.do"

# ----------------------------------------
# Set implementation files
set src_vhdl [subst {
    "../gen_rtl/FIFOL1.v"
    "../gen_rtl/mkAsconCC.v"
    "../gen_rtl/lwc.v"
}]

# ----------------------------------------
# Set simulation files
set tb_vhdl [subst {
    "$INTERFACE_REPO/NIST_LWAPI_pkg.vhd"
    "$INTERFACE_REPO/fwft_fifo.vhd"
    "$INTERFACE_REPO/LWC_TB_compatibility_pkg.vhd"
    "$INTERFACE_REPO/$TOP_LEVEL_NAME.vhd"
}]

# ----------------------------------------
# Python interface for creating a distro
proc get_src {src}  {return $src}

# ----------------------------------------
# Create compilation libs
proc ensure_lib { lib } { if ![file isdirectory $lib] { vlib $lib } }
ensure_lib          ./libs/
ensure_lib          ./libs/work/
vmap       work     ./libs/work/

# ----------------------------------------
# Compile implementation files
alias imp_com {
    echo "imp_com"
    foreach f $src_vhdl {vlog -quiet -work work $f}
}

# ----------------------------------------
# Compile simulation files
alias sim_com {
    echo "sim_com"
    foreach f $tb_vhdl {vcom -quiet -work work $f}
}

# ----------------------------------------
# Compile simulation files
alias com {
    echo "com"
    imp_com
    sim_com
}

# ----------------------------------------
# Add wave form and run
alias run_wave {
    echo "\[exec\] run_wave"
    add wave -ports -radix hexadecimal sim:/lwc_tb/uut/ascon/*
    add wave -internals -radix hexadecimal sim:/lwc_tb/uut/ascon/*
    # Configure wave panelsim:/lwc_tb/uut/Inst_Cipher/Pyjamask_AEAD_1/PyjamaskBlockCipherCore_1/RoundKeyGenerator_1
    configure wave -namecolwidth 180
    configure wave -valuecolwidth 200
    configure wave -signalnamewidth 1
    configure wave -timelineunits ns
    WaveRestoreZoom {0 ps} {2000 ns}
    configure wave -justifyvalue right
    configure wave -rowmargin 8
    configure wave -childrowmargin 5
}


# ----------------------------------------
# Compile all the design files and elaborate the top level design with -novopt
alias ldd {
    com
    set run_do_file [file isfile $CUSTOM_DO_FILE]
    if {$run_do_file == 1} {
        vsim -t ps -L work $TOP_LEVEL_NAME -do $CUSTOM_DO_FILE  -gG_STOP_AT_FAULT=$STOP_AT_FAULT
    } else {
      vsim -t ps -L work $TOP_LEVEL_NAME -gG_STOP_AT_FAULT=$STOP_AT_FAULT
      run_wave
    }
    run 500 us
}

alias r {
    com
    restart -force 
    run 2000 ns
}

# ----------------------------------------
# Print out user commmand line aliases
alias h {
    echo "List Of Command Line Aliases"
    echo
    echo "imp_com                       -- Compile implementation files"
    echo
    echo "sim_com                       -- Compile simulation files"
    echo
    echo "com                           -- Compile files in the correct order"
    echo
    echo "ldd                           -- Compile and run"
    echo
}
h
