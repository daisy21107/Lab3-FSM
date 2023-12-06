#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f *.vcd

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace topclk.sv --exe topclk_tb.cpp


# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vtopclk.mk Vtopclk

# run executable simulation file
echo "\nRunning simulation"
obj_dir/Vtopclk
echo "\nSimulation completed"

