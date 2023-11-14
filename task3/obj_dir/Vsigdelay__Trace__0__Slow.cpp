// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsigdelay__Syms.h"


VL_ATTR_COLD void Vsigdelay___024root__trace_init_sub__TOP__0(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBit(c+9,"wr", false,-1);
    tracep->declBit(c+10,"rd", false,-1);
    tracep->declBus(c+11,"incr", false,-1, 8,0);
    tracep->declBus(c+12,"offset", false,-1, 8,0);
    tracep->declBus(c+13,"mic_signal", false,-1, 7,0);
    tracep->declBus(c+14,"delayed_signal", false,-1, 7,0);
    tracep->pushNamePrefix("sigdelay ");
    tracep->declBus(c+16,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+17,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBit(c+9,"wr", false,-1);
    tracep->declBit(c+10,"rd", false,-1);
    tracep->declBus(c+11,"incr", false,-1, 8,0);
    tracep->declBus(c+12,"offset", false,-1, 8,0);
    tracep->declBus(c+13,"mic_signal", false,-1, 7,0);
    tracep->declBus(c+14,"delayed_signal", false,-1, 7,0);
    tracep->declBus(c+1,"write_address", false,-1, 8,0);
    tracep->declBus(c+2,"read_address", false,-1, 8,0);
    tracep->pushNamePrefix("delaycounter ");
    tracep->declBus(c+16,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBus(c+11,"incr", false,-1, 8,0);
    tracep->declBus(c+2,"count", false,-1, 8,0);
    tracep->declBus(c+1,"count_with_load", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delayram ");
    tracep->declBus(c+16,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+17,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+9,"wr_en", false,-1);
    tracep->declBit(c+10,"rd_en", false,-1);
    tracep->declBus(c+3,"wr_addr", false,-1, 7,0);
    tracep->declBus(c+4,"rd_addr", false,-1, 7,0);
    tracep->declBus(c+15,"din", false,-1, 8,0);
    tracep->declBus(c+5,"dout", false,-1, 8,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_init_top(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_init_top\n"); );
    // Body
    Vsigdelay___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsigdelay___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsigdelay___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsigdelay___024root__trace_register(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsigdelay___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsigdelay___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsigdelay___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_full_top_0\n"); );
    // Init
    Vsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsigdelay___024root*>(voidSelf);
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsigdelay___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->sigdelay__DOT__write_address),9);
    bufp->fullSData(oldp+2,(vlSelf->sigdelay__DOT__read_address),9);
    bufp->fullCData(oldp+3,((0xffU & (IData)(vlSelf->sigdelay__DOT__write_address))),8);
    bufp->fullCData(oldp+4,((0xffU & (IData)(vlSelf->sigdelay__DOT__read_address))),8);
    bufp->fullSData(oldp+5,(vlSelf->sigdelay__DOT____Vcellout__delayram__dout),9);
    bufp->fullBit(oldp+6,(vlSelf->clk));
    bufp->fullBit(oldp+7,(vlSelf->rst));
    bufp->fullBit(oldp+8,(vlSelf->en));
    bufp->fullBit(oldp+9,(vlSelf->wr));
    bufp->fullBit(oldp+10,(vlSelf->rd));
    bufp->fullSData(oldp+11,(vlSelf->incr),9);
    bufp->fullSData(oldp+12,(vlSelf->offset),9);
    bufp->fullCData(oldp+13,(vlSelf->mic_signal),8);
    bufp->fullCData(oldp+14,(vlSelf->delayed_signal),8);
    bufp->fullSData(oldp+15,(vlSelf->mic_signal),9);
    bufp->fullIData(oldp+16,(9U),32);
    bufp->fullIData(oldp+17,(8U),32);
}
