#include "Vsystem.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "../vbuddy.cpp" // include vbuddy code
#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env)
{
    int simcyc; // simulation clock count
    int tick;   // each clk cycle has two ticks for two edges

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vsystem *top = new Vsystem;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("system.vcd");

    // init Vbuddy
    if (vbdOpen() != 1)
        return (-1);
    vbdHeader("L3T4:F1Lights");
    // vbdSetMode(1); // Flag mode set to one-shot

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 0;
    top->en = 0;
    top->N = vbdValue();
    top->trigger = 0;

    // run simulation for MAX_SIM_CYC clock cycles
    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {
        top->trigger = vbdFlag();

        // dump variables into VCD file and toggle clock
        for (tick = 0; tick < 2; tick++)
        {
            tfp->dump(2 * simcyc + tick);
            top->clk = !top->clk;
            top->eval();
        }

        vbdBar(top->data_out & 0xFF);

        // set up input signals of testbench
        top->rst = (simcyc < 2); // assert reset for 1st cycle
        top->en = (simcyc > 2);
        top->N = vbdValue();
        vbdCycle(simcyc);

        /*flag = vbdFlag();
        if (flag_p != flag)
        {
            top->en = 1;
        }

        // dump variables into VCD file and toggle clock
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(2 * i + clk); // unit is in ps!!!
            top->clk = !top->clk;
            top->eval();
        }
        vbdBar(top->data_out & 0xFF);

        top->en = 0;
        flag_p = flag;*/

        if (Verilated::gotFinish() || vbdGetkey() == 'q')
            exit(0);
    }

    vbdClose(); // ++++
    tfp->close();
    exit(0);
}
// N  = 36 seems to be the correct value for this however