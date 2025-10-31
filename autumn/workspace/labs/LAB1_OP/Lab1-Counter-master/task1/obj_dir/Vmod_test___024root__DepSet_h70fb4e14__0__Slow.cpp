// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmod_test.h for the primary calling header

#include "Vmod_test__pch.h"
#include "Vmod_test___024root.h"

VL_ATTR_COLD void Vmod_test___024root___eval_static(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___eval_static\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
}

VL_ATTR_COLD void Vmod_test___024root___eval_initial(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___eval_initial\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmod_test___024root___eval_final(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___eval_final\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmod_test___024root___dump_triggers__stl(Vmod_test___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmod_test___024root___eval_phase__stl(Vmod_test___024root* vlSelf);

VL_ATTR_COLD void Vmod_test___024root___eval_settle(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___eval_settle\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmod_test___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/mod_test.sv", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmod_test___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmod_test___024root___dump_triggers__stl(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___dump_triggers__stl\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmod_test___024root___stl_sequent__TOP__0(Vmod_test___024root* vlSelf);

VL_ATTR_COLD void Vmod_test___024root___eval_stl(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___eval_stl\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmod_test___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmod_test___024root___stl_sequent__TOP__0(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___stl_sequent__TOP__0\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.value_o = vlSelfRef.mod_test__DOT__value_q2;
}

VL_ATTR_COLD void Vmod_test___024root___eval_triggers__stl(Vmod_test___024root* vlSelf);

VL_ATTR_COLD bool Vmod_test___024root___eval_phase__stl(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___eval_phase__stl\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmod_test___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmod_test___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmod_test___024root___dump_triggers__act(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___dump_triggers__act\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmod_test___024root___dump_triggers__nba(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___dump_triggers__nba\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmod_test___024root___ctor_var_reset(Vmod_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root___ctor_var_reset\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->value_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13558074551596604115ull);
    vlSelf->value_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5582427182909782969ull);
    vlSelf->mod_test__DOT__value_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11946467843198746343ull);
    vlSelf->mod_test__DOT__value_q2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1193509618855916355ull);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12668644789224949103ull);
}
