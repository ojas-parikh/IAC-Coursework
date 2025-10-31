// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmod_test__Syms.h"


void Vmod_test___024root__trace_chg_0_sub_0(Vmod_test___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmod_test___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root__trace_chg_0\n"); );
    // Init
    Vmod_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmod_test___024root*>(voidSelf);
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmod_test___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmod_test___024root__trace_chg_0_sub_0(Vmod_test___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root__trace_chg_0_sub_0\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk_i));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_i));
    bufp->chgCData(oldp+2,(vlSelfRef.value_i),8);
    bufp->chgCData(oldp+3,(vlSelfRef.value_o),8);
    bufp->chgCData(oldp+4,(vlSelfRef.mod_test__DOT__value_q),8);
    bufp->chgCData(oldp+5,(vlSelfRef.mod_test__DOT__value_q2),8);
}

void Vmod_test___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root__trace_cleanup\n"); );
    // Init
    Vmod_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmod_test___024root*>(voidSelf);
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
