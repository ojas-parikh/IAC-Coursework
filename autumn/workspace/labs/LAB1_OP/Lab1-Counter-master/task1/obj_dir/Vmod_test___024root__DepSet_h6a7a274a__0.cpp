// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmod_test.h for the primary calling header

#include "Vmod_test__pch.h"
#include "Vmod_test__Syms.h"
#include "Vmod_test___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmod_test___024root___dump_triggers__act(Vmod_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vmod_test___024root___eval_triggers__act(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___eval_triggers__act\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk_i) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmod_test___024root___dump_triggers__act(vlSelf);
    }
#endif
}
