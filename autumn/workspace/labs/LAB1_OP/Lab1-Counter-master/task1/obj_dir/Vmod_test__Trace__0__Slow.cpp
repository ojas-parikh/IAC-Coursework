// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmod_test__Syms.h"


VL_ATTR_COLD void Vmod_test___024root__trace_init_sub__TOP__0(Vmod_test___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root__trace_init_sub__TOP__0\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("mod_test", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"value_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"value_q2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmod_test___024root__trace_init_top(Vmod_test___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root__trace_init_top\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmod_test___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmod_test___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmod_test___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmod_test___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmod_test___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmod_test___024root__trace_register(Vmod_test___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root__trace_register\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmod_test___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmod_test___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmod_test___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmod_test___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmod_test___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root__trace_const_0\n"); );
    // Init
    Vmod_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmod_test___024root*>(voidSelf);
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vmod_test___024root__trace_full_0_sub_0(Vmod_test___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmod_test___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root__trace_full_0\n"); );
    // Init
    Vmod_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmod_test___024root*>(voidSelf);
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmod_test___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmod_test___024root__trace_full_0_sub_0(Vmod_test___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod_test___024root__trace_full_0_sub_0\n"); );
    Vmod_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk_i));
    bufp->fullBit(oldp+2,(vlSelfRef.rst_i));
    bufp->fullCData(oldp+3,(vlSelfRef.value_i),8);
    bufp->fullCData(oldp+4,(vlSelfRef.value_o),8);
    bufp->fullCData(oldp+5,(vlSelfRef.mod_test__DOT__value_q),8);
    bufp->fullCData(oldp+6,(vlSelfRef.mod_test__DOT__value_q2),8);
}
