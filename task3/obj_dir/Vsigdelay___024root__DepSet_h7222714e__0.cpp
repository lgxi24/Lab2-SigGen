// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsigdelay.h for the primary calling header

#include "verilated.h"

#include "Vsigdelay___024root.h"

VL_INLINE_OPT void Vsigdelay___024root___sequent__TOP__0(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vdly__sigdelay__DOT__read_address;
    CData/*7:0*/ __Vdlyvdim0__sigdelay__DOT__delayram__DOT__ram_array__v0;
    SData/*8:0*/ __Vdlyvval__sigdelay__DOT__delayram__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__sigdelay__DOT__delayram__DOT__ram_array__v0;
    // Body
    __Vdly__sigdelay__DOT__read_address = vlSelf->sigdelay__DOT__read_address;
    __Vdlyvset__sigdelay__DOT__delayram__DOT__ram_array__v0 = 0U;
    if (vlSelf->rd) {
        vlSelf->sigdelay__DOT____Vcellout__delayram__dout 
            = vlSelf->sigdelay__DOT__delayram__DOT__ram_array
            [(0xffU & (IData)(vlSelf->sigdelay__DOT__read_address))];
    }
    if (vlSelf->wr) {
        __Vdlyvval__sigdelay__DOT__delayram__DOT__ram_array__v0 
            = vlSelf->mic_signal;
        __Vdlyvset__sigdelay__DOT__delayram__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__sigdelay__DOT__delayram__DOT__ram_array__v0 
            = (0xffU & (IData)(vlSelf->sigdelay__DOT__write_address));
    }
    if (__Vdlyvset__sigdelay__DOT__delayram__DOT__ram_array__v0) {
        vlSelf->sigdelay__DOT__delayram__DOT__ram_array[__Vdlyvdim0__sigdelay__DOT__delayram__DOT__ram_array__v0] 
            = __Vdlyvval__sigdelay__DOT__delayram__DOT__ram_array__v0;
    }
    vlSelf->delayed_signal = (0xffU & (IData)(vlSelf->sigdelay__DOT____Vcellout__delayram__dout));
    __Vdly__sigdelay__DOT__read_address = ((IData)(vlSelf->rst)
                                            ? 0U : 
                                           (0x1ffU 
                                            & ((IData)(vlSelf->sigdelay__DOT__read_address) 
                                               + (IData)(vlSelf->en))));
    vlSelf->sigdelay__DOT__write_address = (0x1ffU 
                                            & (((IData)(vlSelf->sigdelay__DOT__read_address) 
                                                + (IData)(vlSelf->incr)) 
                                               + (IData)(vlSelf->en)));
    vlSelf->sigdelay__DOT__read_address = __Vdly__sigdelay__DOT__read_address;
}

void Vsigdelay___024root___eval(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsigdelay___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vsigdelay___024root___eval_debug_assertions(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->wr & 0xfeU))) {
        Verilated::overWidthError("wr");}
    if (VL_UNLIKELY((vlSelf->rd & 0xfeU))) {
        Verilated::overWidthError("rd");}
    if (VL_UNLIKELY((vlSelf->incr & 0xfe00U))) {
        Verilated::overWidthError("incr");}
    if (VL_UNLIKELY((vlSelf->offset & 0xfe00U))) {
        Verilated::overWidthError("offset");}
}
#endif  // VL_DEBUG
