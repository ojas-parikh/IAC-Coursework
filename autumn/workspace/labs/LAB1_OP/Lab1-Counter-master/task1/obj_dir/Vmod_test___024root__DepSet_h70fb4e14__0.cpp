// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmod_test.h for the primary calling header

#include "Vmod_test__pch.h"
#include "Vmod_test___024root.h"

void Vmod_test___024root___eval_act(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___eval_act\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmod_test___024root___nba_sequent__TOP__0(Vmod_test___024root* vlSelf);

void Vmod_test___024root___eval_nba(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___eval_nba\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmod_test___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmod_test___024root___nba_sequent__TOP__0(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___nba_sequent__TOP__0\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.rst_i)))) {
        vlSelfRef.mod_test__DOT__value_q2 = vlSelfRef.mod_test__DOT__value_q;
    }
    vlSelfRef.value_o = vlSelfRef.mod_test__DOT__value_q2;
    vlSelfRef.mod_test__DOT__value_q = ((IData)(vlSelfRef.rst_i)
                                         ? 0U : (IData)(vlSelfRef.value_i));
}

void Vmod_test___024root___eval_triggers__act(Vmod_test___024root* vlSelf);

bool Vmod_test___024root___eval_phase__act(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___eval_phase__act\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmod_test___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmod_test___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmod_test___024root___eval_phase__nba(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___eval_phase__nba\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmod_test___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmod_test___024root___dump_triggers__nba(Vmod_test___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmod_test___024root___dump_triggers__act(Vmod_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vmod_test___024root___eval(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___eval\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmod_test___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/mod_test.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmod_test___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/mod_test.sv", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmod_test___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmod_test___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmod_test___024root___eval_debug_assertions(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___eval_debug_assertions\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY(((vlSelfRef.rst_i & 0xfeU)))) {
        Verilated::overWidthError("rst_i");}
}
#endif  // VL_DEBUG
