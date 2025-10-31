// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmod_test__pch.h"
#include "Vmod_test.h"
#include "Vmod_test___024root.h"

// FUNCTIONS
Vmod_test__Syms::~Vmod_test__Syms()
{
}

Vmod_test__Syms::Vmod_test__Syms(VerilatedContext* contextp, const char* namep, Vmod_test* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(18);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(0);
    _vm_contextp__->timeprecision(0);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
