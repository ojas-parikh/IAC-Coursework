// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmod_test.h for the primary calling header

#include "Vmod_test__pch.h"
#include "Vmod_test__Syms.h"
#include "Vmod_test___024root.h"

void Vmod_test___024root___ctor_var_reset(Vmod_test___024root* vlSelf);

Vmod_test___024root::Vmod_test___024root(Vmod_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmod_test___024root___ctor_var_reset(this);
}

void Vmod_test___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmod_test___024root::~Vmod_test___024root() {
}
