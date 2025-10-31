// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmod_test.h for the primary calling header

#ifndef VERILATED_VMOD_TEST___024ROOT_H_
#define VERILATED_VMOD_TEST___024ROOT_H_  // guard

#include "verilated.h"


class Vmod_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmod_test___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(value_i,7,0);
    VL_OUT8(value_o,7,0);
    CData/*7:0*/ mod_test__DOT__value_q;
    CData/*7:0*/ mod_test__DOT__value_q2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmod_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmod_test___024root(Vmod_test__Syms* symsp, const char* v__name);
    ~Vmod_test___024root();
    VL_UNCOPYABLE(Vmod_test___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
