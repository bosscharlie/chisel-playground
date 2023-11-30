// headers
#include <memory>
#include <verilated.h>
#include "VGCD.h"
#include "verilated_vcd_c.h"

int gcd(int a, int b) {
    int r;
    while(b>0) {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

double sc_time_stamp() { return 0; }

int main(int argc, char** argv) {

    if (false && argc && argv) {}
    // Create logs/ directory in case we have traces to put under it
    Verilated::mkdir("logs");

    // Creare context
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    // Create trace object
    VerilatedVcdC* tfp = new VerilatedVcdC;

    // Generate wave outputs
    contextp->traceEverOn(true);

    // Pass arguments so Verilated code can see them, e.g. $value$plusargs
    contextp->commandArgs(argc, argv);

    // VGCD* dut = new VGCD{contextp};
    const std::unique_ptr<VGCD> dut{new VGCD{contextp.get(), "GCD"}};

    dut->trace(tfp, 2);// Trace levels of hierarchy
    tfp->open("/local/liuziang/wave.vcd");

    // Set initial values
    dut->clock = 0;
    dut->io_value1 = 0;
    dut->io_value2 = 0;
    dut->io_loadingValues = 0;
    // num of tests
    int cnt = 0;

    while(cnt<100) {
        contextp->timeInc(1);
        // Toggle a clock
        dut->clock = !dut->clock;
        // Response to posedge in verilog, set value at negedge in verilator
        if(!dut->clock) {
            if(dut->io_outputValid){
                dut->io_value1 = rand()%5+1;
                dut->io_value2 = rand()%5+1;
                dut->io_loadingValues = 1;
            }else{
                dut->io_loadingValues = 0;
            }
        }
        // Evaluate model
        dut->eval();
        if(dut->clock && dut->io_outputValid){
            cnt++;
            if(cnt==1)
                continue;
            assert(gcd(dut->io_value1,dut->io_value2)==dut->io_outputGCD);
            VL_PRINTF("[test_round: %d]value1:%d, value2:%d, out:%d, expected:%d \n",cnt,dut->io_value1, dut->io_value2, dut->io_outputGCD, gcd(dut->io_value1,dut->io_value2));
        }
        tfp->dump(contextp->time());
    }
    tfp->close();
    dut->final();
    return 0;
}