# THIS FILE IS AUTOMATICALLY GENERATED
# Project: Z:\Users\iLyngklip\Dropbox\AAU\4. Semester\Digital-Design\USB HID\Stuff works.cydsn\Stuff works.cyprj
# Date: Sun, 26 Feb 2017 15:08:59 GMT
#set_units -time ns
create_clock -name {yAksen_theACLK(routed)} -period 545.45454545454538 -waveform {0 272.727272727273} [list [get_pins {ClockBlock/dclk_0}]]
create_clock -name {xAksen_theACLK(routed)} -period 545.45454545454538 -waveform {0 272.727272727273} [list [get_pins {ClockBlock/dclk_1}]]
create_clock -name {CyILO} -period 10000 -waveform {0 5000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 30.3030303030303 -waveform {0 15.1515151515152} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 30.3030303030303 -waveform {0 15.1515151515152} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_clock -name {CyScBoostClk} -period 90.9090909090909 -waveform {0 30.3030303030303} [list [get_pins {ClockBlock/aclk_glb_0}]]
create_generated_clock -name {yAksen_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 19 37} -nominal_period 545.45454545454538 [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {xAksen_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 19 37} -nominal_period 545.45454545454538 [list [get_pins {ClockBlock/dclk_glb_1}]]


# Component constraints for Z:\Users\iLyngklip\Dropbox\AAU\4. Semester\Digital-Design\USB HID\Stuff works.cydsn\TopDesign\TopDesign.cysch
# Project: Z:\Users\iLyngklip\Dropbox\AAU\4. Semester\Digital-Design\USB HID\Stuff works.cydsn\Stuff works.cyprj
# Date: Sun, 26 Feb 2017 15:08:55 GMT