// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsigdelay__Syms.h"


void Vsigdelay___024root__trace_chg_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsigdelay___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_chg_top_0\n"); );
    // Init
    Vsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsigdelay___024root*>(voidSelf);
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsigdelay___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsigdelay___024root__trace_chg_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->sigdelay__DOT__write_address),9);
        bufp->chgSData(oldp+1,(vlSelf->sigdelay__DOT__read_address),9);
        bufp->chgCData(oldp+2,((0xffU & (IData)(vlSelf->sigdelay__DOT__write_address))),8);
        bufp->chgCData(oldp+3,((0xffU & (IData)(vlSelf->sigdelay__DOT__read_address))),8);
        bufp->chgSData(oldp+4,(vlSelf->sigdelay__DOT____Vcellout__delayram__dout),9);
    }
    bufp->chgBit(oldp+5,(vlSelf->clk));
    bufp->chgBit(oldp+6,(vlSelf->rst));
    bufp->chgBit(oldp+7,(vlSelf->en));
    bufp->chgBit(oldp+8,(vlSelf->wr));
    bufp->chgBit(oldp+9,(vlSelf->rd));
    bufp->chgSData(oldp+10,(vlSelf->incr),9);
    bufp->chgSData(oldp+11,(vlSelf->offset),9);
    bufp->chgCData(oldp+12,(vlSelf->mic_signal),8);
    bufp->chgCData(oldp+13,(vlSelf->delayed_signal),8);
    bufp->chgSData(oldp+14,(vlSelf->mic_signal),9);
}

void Vsigdelay___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_cleanup\n"); );
    // Init
    Vsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsigdelay___024root*>(voidSelf);
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
