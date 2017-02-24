# THIS FILE IS AUTOMATICALLY GENERATED
# Project: Z:\Users\iLyngklip\Dropbox\AAU\4. Semester\Digital-Design\MM1\Design02.cydsn\Design02.cyprj
# Date: Thu, 23 Feb 2017 12:10:12 GMT
#set_units -time ns
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/clk_sync}] -edges {1 96001 192001} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_clock -name {Clock_1(fixed-function)} -period 4000000 -waveform {0 41.6666666666667} [get_pins {ClockBlock/dclk_glb_ff_0}]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for Z:\Users\iLyngklip\Dropbox\AAU\4. Semester\Digital-Design\MM1\Design02.cydsn\TopDesign\TopDesign.cysch
# Project: Z:\Users\iLyngklip\Dropbox\AAU\4. Semester\Digital-Design\MM1\Design02.cydsn\Design02.cyprj
# Date: Thu, 23 Feb 2017 12:10:09 GMT
