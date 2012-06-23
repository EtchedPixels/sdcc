//
// Register Declarations for Microchip 16C782 Processor
//
//
// This header file was automatically generated by:
//
// inc2h.pl
//
// Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
//
// SDCC is licensed under the GNU Public license (GPL) v2. Note that
// this license covers the code to the compiler and other executables,
// but explicitly does not cover any code or objects generated by sdcc.
//
// For pic device libraries and header files which are derived from
// Microchip header (.inc) and linker script (.lkr) files Microchip
// requires that "The header files should state that they are only to be
// used with authentic Microchip devices" which makes them incompatible
// with the GPL. Pic device libraries and header files are located at
// non-free/lib and non-free/include directories respectively.
// Sdcc should be run with the --use-non-free command line option in
// order to include non-free header files and libraries.
//
// See http://sdcc.sourceforge.net/ for the latest information on sdcc.
//
// 
#ifndef P16C782_H
#define P16C782_H

//
// Register addresses.
//
#define INDF_ADDR       0x0000
#define TMR0_ADDR       0x0001
#define PCL_ADDR        0x0002
#define STATUS_ADDR     0x0003
#define FSR_ADDR        0x0004
#define PORTA_ADDR      0x0005
#define PORTB_ADDR      0x0006
#define PCLATH_ADDR     0x000A
#define INTCON_ADDR     0x000B
#define PIR1_ADDR       0x000C
#define TMR1_ADDR       0x000E
#define TMR1L_ADDR      0x000E
#define TMR1H_ADDR      0x000F
#define T1CON_ADDR      0x0010
#define ADRES_ADDR      0x001E
#define ADCON0_ADDR     0x001F
#define OPTION_REG_ADDR 0x0081
#define TRISA_ADDR      0x0085
#define TRISB_ADDR      0x0086
#define PIE1_ADDR       0x008C
#define PCON_ADDR       0x008E
#define WPUB_ADDR       0x0095
#define IOCB_ADDR       0x0096
#define REFCON_ADDR     0x009B
#define LVDCON_ADDR     0x009C
#define ANSEL_ADDR      0x009D
#define ADCON1_ADDR     0x009F
#define PMDATL_ADDR     0x010C
#define PMADRL_ADDR     0x010D
#define PMDATH_ADDR     0x010E
#define PMADRH_ADDR     0x010F
#define CALCON_ADDR     0x0110
#define PSMCCON0_ADDR   0x0111
#define PSMCCON1_ADDR   0x0112
#define CM1CON0_ADDR    0x0119
#define CM2CON0_ADDR    0x011A
#define CM2CON1_ADDR    0x011B
#define OPACON_ADDR     0x011C
#define DAC_ADDR        0x011E
#define DACON0_ADDR     0x011F
#define PMCON1_ADDR     0x018C

//
// Memory organization.
//



//         LIST

//==========================================================================
//  MPASM PIC16C782 processor include
//
//  (c) Copyright 1999-2012 Microchip Technology, All rights reserved
//==========================================================================

//         NOLIST

//==========================================================================
//  This header file defines configurations, registers, and other useful
//  bits of information for the PIC16C782 microcontroller.  These names
//  are taken to match the data sheets as closely as possible.
//
//  Note that the processor must be selected before this file is included.
//  The processor may be selected the following ways:
//
//       1. Command line switch:
//               C:\MPASM MYFILE.ASM /PIC16C782
//       2. LIST directive in the source file
//               LIST   P=PIC16C782
//       3. Processor Type entry in the MPASM full-screen interface
//       4. Setting the processor in the MPLAB Project Dialog
//==========================================================================

//==========================================================================
//
//       Verify Processor
//
//==========================================================================
//        IFNDEF __16C782
//            MESSG "Processor-header file mismatch.  Verify selected processor."
//         ENDIF



//==========================================================================
//
//       Register Definitions
//
//==========================================================================

#define W                    0x0000
#define F                    0x0001

//----- Register Files -----------------------------------------------------

//-----Bank0------------------
extern __sfr  __at (INDF_ADDR)                    INDF;
extern __sfr  __at (TMR0_ADDR)                    TMR0;
extern __sfr  __at (PCL_ADDR)                     PCL;
extern __sfr  __at (STATUS_ADDR)                  STATUS;
extern __sfr  __at (FSR_ADDR)                     FSR;
extern __sfr  __at (PORTA_ADDR)                   PORTA;
extern __sfr  __at (PORTB_ADDR)                   PORTB;
extern __sfr  __at (PCLATH_ADDR)                  PCLATH;
extern __sfr  __at (INTCON_ADDR)                  INTCON;
extern __sfr  __at (PIR1_ADDR)                    PIR1;
extern __sfr  __at (TMR1_ADDR)                    TMR1;
extern __sfr  __at (TMR1L_ADDR)                   TMR1L;
extern __sfr  __at (TMR1H_ADDR)                   TMR1H;
extern __sfr  __at (T1CON_ADDR)                   T1CON;
extern __sfr  __at (ADRES_ADDR)                   ADRES;
extern __sfr  __at (ADCON0_ADDR)                  ADCON0;

//-----Bank1------------------
extern __sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
extern __sfr  __at (TRISA_ADDR)                   TRISA;
extern __sfr  __at (TRISB_ADDR)                   TRISB;
extern __sfr  __at (PIE1_ADDR)                    PIE1;
extern __sfr  __at (PCON_ADDR)                    PCON;
extern __sfr  __at (WPUB_ADDR)                    WPUB;
extern __sfr  __at (IOCB_ADDR)                    IOCB;
extern __sfr  __at (REFCON_ADDR)                  REFCON;
extern __sfr  __at (LVDCON_ADDR)                  LVDCON;
extern __sfr  __at (ANSEL_ADDR)                   ANSEL;
extern __sfr  __at (ADCON1_ADDR)                  ADCON1;

//-----Bank2------------------
extern __sfr  __at (PMDATL_ADDR)                  PMDATL;
extern __sfr  __at (PMADRL_ADDR)                  PMADRL;
extern __sfr  __at (PMDATH_ADDR)                  PMDATH;
extern __sfr  __at (PMADRH_ADDR)                  PMADRH;
extern __sfr  __at (CALCON_ADDR)                  CALCON;
extern __sfr  __at (PSMCCON0_ADDR)                PSMCCON0;
extern __sfr  __at (PSMCCON1_ADDR)                PSMCCON1;
extern __sfr  __at (CM1CON0_ADDR)                 CM1CON0;
extern __sfr  __at (CM2CON0_ADDR)                 CM2CON0;
extern __sfr  __at (CM2CON1_ADDR)                 CM2CON1;
extern __sfr  __at (OPACON_ADDR)                  OPACON;
extern __sfr  __at (DAC_ADDR)                     DAC;
extern __sfr  __at (DACON0_ADDR)                  DACON0;

//-----Bank3------------------
extern __sfr  __at (PMCON1_ADDR)                  PMCON1;

//----- STATUS Bits -----------------------------------------------------



//----- PORTA Bits -----------------------------------------------------


//----- PORTB Bits -----------------------------------------------------


//----- INTCON Bits -----------------------------------------------------


//----- PIR1 Bits -----------------------------------------------------


//----- T1CON Bits -----------------------------------------------------



//----- ADCON0 Bits -----------------------------------------------------





//----- OPTION_REG Bits -----------------------------------------------------



//----- TRISA Bits -----------------------------------------------------


//----- TRISB Bits -----------------------------------------------------


//----- PIE1 Bits -----------------------------------------------------


//----- PCON Bits -----------------------------------------------------



//----- WPUB Bits -----------------------------------------------------


//----- IOCB Bits -----------------------------------------------------


//----- REFCON Bits -----------------------------------------------------



//----- LVDCON Bits -----------------------------------------------------



//----- ANSEL Bits -----------------------------------------------------


//----- ADCON1 Bits -----------------------------------------------------


//----- CALCON Bits -----------------------------------------------------


//----- PSMCCON0 Bits -----------------------------------------------------


//----- PSMCCON1 Bits -----------------------------------------------------





//----- CM1CON0 Bits -----------------------------------------------------



//----- CM2CON0 Bits -----------------------------------------------------



//----- CM2CON1 Bits -----------------------------------------------------


//----- OPACON Bits -----------------------------------------------------


//----- DAC Bits -----------------------------------------------------


//----- DACON0 Bits -----------------------------------------------------



//----- PMCON1 Bits -----------------------------------------------------




//==========================================================================
//
//       RAM Definitions
//
//==========================================================================
//        __MAXRAM  H'01FF'
//        __BADRAM  H'0007'-H'0009'
//        __BADRAM  H'000D'
//        __BADRAM  H'0011'-H'001D'
//        __BADRAM  H'0087'-H'0089'
//        __BADRAM  H'008D'
//        __BADRAM  H'008F'-H'0094'
//        __BADRAM  H'0097'-H'009A'
//        __BADRAM  H'009E'
//        __BADRAM  H'00C0'-H'00EF'
//        __BADRAM  H'0105'
//        __BADRAM  H'0107'-H'0109'
//        __BADRAM  H'0113'-H'0118'
//        __BADRAM  H'011D'
//        __BADRAM  H'0120'-H'016F'
//        __BADRAM  H'0185'
//        __BADRAM  H'0187'-H'0189'
//        __BADRAM  H'018D'-H'01EF'

//==========================================================================
//
//       Configuration Bits
//
//   NAME            Address
//   CONFIG1           2007h
//
//==========================================================================

// The following is an assignment of address values for all of the
// configuration registers for the purpose of table reads
#define _CONFIG1             0x2007

//----- CONFIG1 Options --------------------------------------------------
#define _FOSC_LP             0x3FF8    // LP oscillator
#define _LP_OSC              0x3FF8    // LP oscillator
#define _FOSC_XT             0x3FF9    // XT oscillator
#define _XT_OSC              0x3FF9    // XT oscillator
#define _FOSC_HS             0x3FFA    // HS oscillator
#define _HS_OSC              0x3FFA    // HS oscillator
#define _FOSC_EXTCLK         0x3FFB    // EC I/O
#define _EXTCLK_OSC          0x3FFB    // EC I/O
#define _FOSC_INTRCIO        0x3FFC    // INTRC, OSC2 is I/O
#define _INTRC_OSC_NOCLKOUT  0x3FFC    // INTRC, OSC2 is I/O
#define _FOSC_INTRCCLK       0x3FFD    // INTRC, clockout on OSC2
#define _INTRC_OSC_CLKOUT    0x3FFD    // INTRC, clockout on OSC2
#define _FOSC_ER_NOCLKOUT    0x3FFE    // RC I/O
#define _ER_OSC_NOCLKOUT     0x3FFE    // RC I/O
#define _FOSC_ER_CLKOUT      0x3FFF    // RC CLKOUT
#define _ER_OSC_CLKOUT       0x3FFF    // RC CLKOUT

#define _WDTE_OFF            0x3FF7    // WDT disabled
#define _WDT_OFF             0x3FF7    // WDT disabled
#define _WDTE_ON             0x3FFF    // WDT enabled
#define _WDT_ON              0x3FFF    // WDT enabled

#define _PWRTE_ON            0x3FEF    // PWRT enabled
#define _PWRTE_OFF           0x3FFF    // PWRT disabled

#define _MCLRE_OFF           0x3FDF    // Internal
#define _MCLRE_ON            0x3FFF    // External

#define _BOREN_OFF           0x3FBF    // BOR disabled
#define _BODEN_OFF           0x3FBF    // BOR disabled
#define _BOREN_ON            0x3FFF    // BOR enabled
#define _BODEN_ON            0x3FFF    // BOR enabled

#define _CP_ALL              0x0CFF    // All memory is code protected
#define _CP_OFF              0x3FFF    // Code protection off

#define _BODENV_45           0x33FF    // VBOR set to 4.5V
#define _VBOR_45             0x33FF    // VBOR set to 4.5V
#define _BODENV_42           0x37FF    // VBOR set to 4.2V
#define _VBOR_42             0x37FF    // VBOR set to 4.2V
#define _BODENV_27           0x3BFF    // VBOR set to 2.7V
#define _VBOR_27             0x3BFF    // VBOR set to 2.7V
#define _BODENV_25           0x3FFF    // VBOR set to 2.5V
#define _VBOR_25             0x3FFF    // VBOR set to 2.5V


//----- IDLOC Equates --------------------------------------------------
#define _IDLOC0              0x2000
#define _IDLOC1              0x2001
#define _IDLOC2              0x2002
#define _IDLOC3              0x2003

//         LIST

// ----- ADCON0 bits --------------------
typedef union {
  struct {
    unsigned char ADON:1;
    unsigned char CHS3:1;
    unsigned char GO_NOT_DONE:1;
    unsigned char CHS0:1;
    unsigned char CHS1:1;
    unsigned char CHS2:1;
    unsigned char ADCS0:1;
    unsigned char ADCS1:1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char GO:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char NOT_DONE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char GO_DONE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __ADCON0bits_t;
extern volatile __ADCON0bits_t __at(ADCON0_ADDR) ADCON0bits;

// ----- ADCON1 bits --------------------
typedef union {
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char VCFG0:1;
    unsigned char VCFG1:1;
    unsigned char :1;
    unsigned char :1;
  };
} __ADCON1bits_t;
extern volatile __ADCON1bits_t __at(ADCON1_ADDR) ADCON1bits;

// ----- ANSEL bits --------------------
typedef union {
  struct {
    unsigned char ANS0:1;
    unsigned char ANS1:1;
    unsigned char ANS2:1;
    unsigned char ANS3:1;
    unsigned char ANS4:1;
    unsigned char ANS5:1;
    unsigned char ANS6:1;
    unsigned char ANS7:1;
  };
} __ANSELbits_t;
extern volatile __ANSELbits_t __at(ANSEL_ADDR) ANSELbits;

// ----- CALCON bits --------------------
typedef union {
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char CALREF:1;
    unsigned char CALERR:1;
    unsigned char CAL:1;
  };
} __CALCONbits_t;
extern volatile __CALCONbits_t __at(CALCON_ADDR) CALCONbits;

// ----- CM1CON0 bits --------------------
typedef union {
  struct {
    unsigned char C1CH0:1;
    unsigned char C1CH1:1;
    unsigned char C1R:1;
    unsigned char C1SP:1;
    unsigned char C1POL:1;
    unsigned char C1OE:1;
    unsigned char C1OUT:1;
    unsigned char C1ON:1;
  };
} __CM1CON0bits_t;
extern volatile __CM1CON0bits_t __at(CM1CON0_ADDR) CM1CON0bits;

// ----- CM2CON0 bits --------------------
typedef union {
  struct {
    unsigned char C2CH0:1;
    unsigned char C2CH1:1;
    unsigned char C2R:1;
    unsigned char C2SP:1;
    unsigned char C2POL:1;
    unsigned char C2OE:1;
    unsigned char C2OUT:1;
    unsigned char C2ON:1;
  };
} __CM2CON0bits_t;
extern volatile __CM2CON0bits_t __at(CM2CON0_ADDR) CM2CON0bits;

// ----- CM2CON1 bits --------------------
typedef union {
  struct {
    unsigned char C2SYNC:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char MC2OUT:1;
    unsigned char MC1OUT:1;
  };
} __CM2CON1bits_t;
extern volatile __CM2CON1bits_t __at(CM2CON1_ADDR) CM2CON1bits;

// ----- DAC bits --------------------
typedef union {
  struct {
    unsigned char DA0:1;
    unsigned char DA1:1;
    unsigned char DA2:1;
    unsigned char DA3:1;
    unsigned char DA4:1;
    unsigned char DA5:1;
    unsigned char DA6:1;
    unsigned char DA7:1;
  };
} __DACbits_t;
extern volatile __DACbits_t __at(DAC_ADDR) DACbits;

// ----- DACON0 bits --------------------
typedef union {
  struct {
    unsigned char DARS0:1;
    unsigned char DARS1:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char DAOE:1;
    unsigned char DAON:1;
  };
} __DACON0bits_t;
extern volatile __DACON0bits_t __at(DACON0_ADDR) DACON0bits;

// ----- INTCON bits --------------------
typedef union {
  struct {
    unsigned char RBIF:1;
    unsigned char INTF:1;
    unsigned char T0IF:1;
    unsigned char RBIE:1;
    unsigned char INTE:1;
    unsigned char T0IE:1;
    unsigned char PEIE:1;
    unsigned char GIE:1;
  };
} __INTCONbits_t;
extern volatile __INTCONbits_t __at(INTCON_ADDR) INTCONbits;

// ----- IOCB bits --------------------
typedef union {
  struct {
    unsigned char IOCB0:1;
    unsigned char IOCB1:1;
    unsigned char IOCB2:1;
    unsigned char IOCB3:1;
    unsigned char IOCB4:1;
    unsigned char IOCB5:1;
    unsigned char IOCB6:1;
    unsigned char IOCB7:1;
  };
} __IOCBbits_t;
extern volatile __IOCBbits_t __at(IOCB_ADDR) IOCBbits;

// ----- LVDCON bits --------------------
typedef union {
  struct {
    unsigned char LV0:1;
    unsigned char LV1:1;
    unsigned char LV2:1;
    unsigned char LV3:1;
    unsigned char LVDEN:1;
    unsigned char BGST:1;
    unsigned char :1;
    unsigned char :1;
  };
} __LVDCONbits_t;
extern volatile __LVDCONbits_t __at(LVDCON_ADDR) LVDCONbits;

// ----- OPACON bits --------------------
typedef union {
  struct {
    unsigned char GBWP:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char CMPEN:1;
    unsigned char OPAON:1;
  };
} __OPACONbits_t;
extern volatile __OPACONbits_t __at(OPACON_ADDR) OPACONbits;

// ----- OPTION_REG bits --------------------
typedef union {
  struct {
    unsigned char PS0:1;
    unsigned char PS1:1;
    unsigned char PS2:1;
    unsigned char PSA:1;
    unsigned char T0SE:1;
    unsigned char T0CS:1;
    unsigned char INTEDG:1;
    unsigned char NOT_RBPU:1;
  };
} __OPTION_REGbits_t;
extern volatile __OPTION_REGbits_t __at(OPTION_REG_ADDR) OPTION_REGbits;

// ----- PCON bits --------------------
typedef union {
  struct {
    unsigned char NOT_BOR:1;
    unsigned char NOT_POR:1;
    unsigned char :1;
    unsigned char OSCF:1;
    unsigned char WDTON:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char NOT_BO:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PCONbits_t;
extern volatile __PCONbits_t __at(PCON_ADDR) PCONbits;

// ----- PIE1 bits --------------------
typedef union {
  struct {
    unsigned char TMR1IE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char C1IE:1;
    unsigned char C2IE:1;
    unsigned char ADIE:1;
    unsigned char LVDIE:1;
  };
} __PIE1bits_t;
extern volatile __PIE1bits_t __at(PIE1_ADDR) PIE1bits;

// ----- PIR1 bits --------------------
typedef union {
  struct {
    unsigned char TMR1IF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char C1IF:1;
    unsigned char C2IF:1;
    unsigned char ADIF:1;
    unsigned char LVDIF:1;
  };
} __PIR1bits_t;
extern volatile __PIR1bits_t __at(PIR1_ADDR) PIR1bits;

// ----- PMCON1 bits --------------------
typedef union {
  struct {
    unsigned char RD:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PMCON1bits_t;
extern volatile __PMCON1bits_t __at(PMCON1_ADDR) PMCON1bits;

// ----- PORTA bits --------------------
typedef union {
  struct {
    unsigned char RA0:1;
    unsigned char RA1:1;
    unsigned char RA2:1;
    unsigned char RA3:1;
    unsigned char RA4:1;
    unsigned char RA5:1;
    unsigned char RA6:1;
    unsigned char RA7:1;
  };
} __PORTAbits_t;
extern volatile __PORTAbits_t __at(PORTA_ADDR) PORTAbits;

// ----- PORTB bits --------------------
typedef union {
  struct {
    unsigned char RB0:1;
    unsigned char RB1:1;
    unsigned char RB2:1;
    unsigned char RB3:1;
    unsigned char RB4:1;
    unsigned char RB5:1;
    unsigned char RB6:1;
    unsigned char RB7:1;
  };
} __PORTBbits_t;
extern volatile __PORTBbits_t __at(PORTB_ADDR) PORTBbits;

// ----- PSMCCON0 bits --------------------
typedef union {
  struct {
    unsigned char DC0:1;
    unsigned char DC1:1;
    unsigned char MAXDC0:1;
    unsigned char MAXDC1:1;
    unsigned char MINDC0:1;
    unsigned char MINDC1:1;
    unsigned char SMCCL0:1;
    unsigned char SMCCL1:1;
  };
} __PSMCCON0bits_t;
extern volatile __PSMCCON0bits_t __at(PSMCCON0_ADDR) PSMCCON0bits;

// ----- PSMCCON1 bits --------------------
typedef union {
  struct {
    unsigned char SMCCS:1;
    unsigned char PWM_NOT_PSM:1;
    unsigned char SMCOM:1;
    unsigned char SCEN:1;
    unsigned char :1;
    unsigned char S1BPOL:1;
    unsigned char S1APOL:1;
    unsigned char SMCON:1;
  };
  struct {
    unsigned char :1;
    unsigned char PWM:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char PSM:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char NOT_PSM:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PSMCCON1bits_t;
extern volatile __PSMCCON1bits_t __at(PSMCCON1_ADDR) PSMCCON1bits;

// ----- REFCON bits --------------------
typedef union {
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char VROE:1;
    unsigned char VREN:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char VREFOE:1;
    unsigned char VREFEN:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __REFCONbits_t;
extern volatile __REFCONbits_t __at(REFCON_ADDR) REFCONbits;

// ----- STATUS bits --------------------
typedef union {
  struct {
    unsigned char C:1;
    unsigned char DC:1;
    unsigned char Z:1;
    unsigned char NOT_PD:1;
    unsigned char NOT_TO:1;
    unsigned char RP0:1;
    unsigned char RP1:1;
    unsigned char IRP:1;
  };
} __STATUSbits_t;
extern volatile __STATUSbits_t __at(STATUS_ADDR) STATUSbits;

// ----- T1CON bits --------------------
typedef union {
  struct {
    unsigned char TMR1ON:1;
    unsigned char TMR1CS:1;
    unsigned char NOT_T1SYNC:1;
    unsigned char T1OSCEN:1;
    unsigned char T1CKPS0:1;
    unsigned char T1CKPS1:1;
    unsigned char TMR1GE:1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char T1INSYNC:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __T1CONbits_t;
extern volatile __T1CONbits_t __at(T1CON_ADDR) T1CONbits;

// ----- TRISA bits --------------------
typedef union {
  struct {
    unsigned char TRISA0:1;
    unsigned char TRISA1:1;
    unsigned char TRISA2:1;
    unsigned char TRISA3:1;
    unsigned char TRISA4:1;
    unsigned char TRISA5:1;
    unsigned char TRISA6:1;
    unsigned char TRISA7:1;
  };
} __TRISAbits_t;
extern volatile __TRISAbits_t __at(TRISA_ADDR) TRISAbits;

// ----- TRISB bits --------------------
typedef union {
  struct {
    unsigned char TRISB0:1;
    unsigned char TRISB1:1;
    unsigned char TRISB2:1;
    unsigned char TRISB3:1;
    unsigned char TRISB4:1;
    unsigned char TRISB5:1;
    unsigned char TRISB6:1;
    unsigned char TRISB7:1;
  };
} __TRISBbits_t;
extern volatile __TRISBbits_t __at(TRISB_ADDR) TRISBbits;

// ----- WPUB bits --------------------
typedef union {
  struct {
    unsigned char WPUB0:1;
    unsigned char WPUB1:1;
    unsigned char WPUB2:1;
    unsigned char WPUB3:1;
    unsigned char WPUB4:1;
    unsigned char WPUB5:1;
    unsigned char WPUB6:1;
    unsigned char WPUB7:1;
  };
} __WPUBbits_t;
extern volatile __WPUBbits_t __at(WPUB_ADDR) WPUBbits;


#ifndef NO_BIT_DEFINES

#define ADON                 ADCON0bits.ADON                /* bit 0 */
#define CHS3                 ADCON0bits.CHS3                /* bit 1 */
#define GO                   ADCON0bits.GO                  /* bit 2 */
#define GO_DONE              ADCON0bits.GO_DONE             /* bit 2 */
#define GO_NOT_DONE          ADCON0bits.GO_NOT_DONE         /* bit 2 */
#define NOT_DONE             ADCON0bits.NOT_DONE            /* bit 2 */
#define CHS0                 ADCON0bits.CHS0                /* bit 3 */
#define CHS1                 ADCON0bits.CHS1                /* bit 4 */
#define CHS2                 ADCON0bits.CHS2                /* bit 5 */
#define ADCS0                ADCON0bits.ADCS0               /* bit 6 */
#define ADCS1                ADCON0bits.ADCS1               /* bit 7 */

#define VCFG0                ADCON1bits.VCFG0               /* bit 4 */
#define VCFG1                ADCON1bits.VCFG1               /* bit 5 */

#define ANS0                 ANSELbits.ANS0                 /* bit 0 */
#define ANS1                 ANSELbits.ANS1                 /* bit 1 */
#define ANS2                 ANSELbits.ANS2                 /* bit 2 */
#define ANS3                 ANSELbits.ANS3                 /* bit 3 */
#define ANS4                 ANSELbits.ANS4                 /* bit 4 */
#define ANS5                 ANSELbits.ANS5                 /* bit 5 */
#define ANS6                 ANSELbits.ANS6                 /* bit 6 */
#define ANS7                 ANSELbits.ANS7                 /* bit 7 */

#define CALREF               CALCONbits.CALREF              /* bit 5 */
#define CALERR               CALCONbits.CALERR              /* bit 6 */
#define CAL                  CALCONbits.CAL                 /* bit 7 */

#define C1CH0                CM1CON0bits.C1CH0              /* bit 0 */
#define C1CH1                CM1CON0bits.C1CH1              /* bit 1 */
#define C1R                  CM1CON0bits.C1R                /* bit 2 */
#define C1SP                 CM1CON0bits.C1SP               /* bit 3 */
#define C1POL                CM1CON0bits.C1POL              /* bit 4 */
#define C1OE                 CM1CON0bits.C1OE               /* bit 5 */
#define C1OUT                CM1CON0bits.C1OUT              /* bit 6 */
#define C1ON                 CM1CON0bits.C1ON               /* bit 7 */

#define C2CH0                CM2CON0bits.C2CH0              /* bit 0 */
#define C2CH1                CM2CON0bits.C2CH1              /* bit 1 */
#define C2R                  CM2CON0bits.C2R                /* bit 2 */
#define C2SP                 CM2CON0bits.C2SP               /* bit 3 */
#define C2POL                CM2CON0bits.C2POL              /* bit 4 */
#define C2OE                 CM2CON0bits.C2OE               /* bit 5 */
#define C2OUT                CM2CON0bits.C2OUT              /* bit 6 */
#define C2ON                 CM2CON0bits.C2ON               /* bit 7 */

#define C2SYNC               CM2CON1bits.C2SYNC             /* bit 0 */
#define MC2OUT               CM2CON1bits.MC2OUT             /* bit 6 */
#define MC1OUT               CM2CON1bits.MC1OUT             /* bit 7 */

#define DARS0                DACON0bits.DARS0               /* bit 0 */
#define DARS1                DACON0bits.DARS1               /* bit 1 */
#define DAOE                 DACON0bits.DAOE                /* bit 6 */
#define DAON                 DACON0bits.DAON                /* bit 7 */

#define DA0                  DACbits.DA0                    /* bit 0 */
#define DA1                  DACbits.DA1                    /* bit 1 */
#define DA2                  DACbits.DA2                    /* bit 2 */
#define DA3                  DACbits.DA3                    /* bit 3 */
#define DA4                  DACbits.DA4                    /* bit 4 */
#define DA5                  DACbits.DA5                    /* bit 5 */
#define DA6                  DACbits.DA6                    /* bit 6 */
#define DA7                  DACbits.DA7                    /* bit 7 */

#define RBIF                 INTCONbits.RBIF                /* bit 0 */
#define INTF                 INTCONbits.INTF                /* bit 1 */
#define T0IF                 INTCONbits.T0IF                /* bit 2 */
#define RBIE                 INTCONbits.RBIE                /* bit 3 */
#define INTE                 INTCONbits.INTE                /* bit 4 */
#define T0IE                 INTCONbits.T0IE                /* bit 5 */
#define PEIE                 INTCONbits.PEIE                /* bit 6 */
#define GIE                  INTCONbits.GIE                 /* bit 7 */

#define IOCB0                IOCBbits.IOCB0                 /* bit 0 */
#define IOCB1                IOCBbits.IOCB1                 /* bit 1 */
#define IOCB2                IOCBbits.IOCB2                 /* bit 2 */
#define IOCB3                IOCBbits.IOCB3                 /* bit 3 */
#define IOCB4                IOCBbits.IOCB4                 /* bit 4 */
#define IOCB5                IOCBbits.IOCB5                 /* bit 5 */
#define IOCB6                IOCBbits.IOCB6                 /* bit 6 */
#define IOCB7                IOCBbits.IOCB7                 /* bit 7 */

#define LV0                  LVDCONbits.LV0                 /* bit 0 */
#define LV1                  LVDCONbits.LV1                 /* bit 1 */
#define LV2                  LVDCONbits.LV2                 /* bit 2 */
#define LV3                  LVDCONbits.LV3                 /* bit 3 */
#define LVDEN                LVDCONbits.LVDEN               /* bit 4 */
#define BGST                 LVDCONbits.BGST                /* bit 5 */

#define GBWP                 OPACONbits.GBWP                /* bit 0 */
#define CMPEN                OPACONbits.CMPEN               /* bit 6 */
#define OPAON                OPACONbits.OPAON               /* bit 7 */

#define PS0                  OPTION_REGbits.PS0             /* bit 0 */
#define PS1                  OPTION_REGbits.PS1             /* bit 1 */
#define PS2                  OPTION_REGbits.PS2             /* bit 2 */
#define PSA                  OPTION_REGbits.PSA             /* bit 3 */
#define T0SE                 OPTION_REGbits.T0SE            /* bit 4 */
#define T0CS                 OPTION_REGbits.T0CS            /* bit 5 */
#define INTEDG               OPTION_REGbits.INTEDG          /* bit 6 */
#define NOT_RBPU             OPTION_REGbits.NOT_RBPU        /* bit 7 */

#define NOT_BO               PCONbits.NOT_BO                /* bit 0 */
#define NOT_BOR              PCONbits.NOT_BOR               /* bit 0 */
#define NOT_POR              PCONbits.NOT_POR               /* bit 1 */
#define OSCF                 PCONbits.OSCF                  /* bit 3 */
#define WDTON                PCONbits.WDTON                 /* bit 4 */

#define TMR1IE               PIE1bits.TMR1IE                /* bit 0 */
#define C1IE                 PIE1bits.C1IE                  /* bit 4 */
#define C2IE                 PIE1bits.C2IE                  /* bit 5 */
#define ADIE                 PIE1bits.ADIE                  /* bit 6 */
#define LVDIE                PIE1bits.LVDIE                 /* bit 7 */

#define TMR1IF               PIR1bits.TMR1IF                /* bit 0 */
#define C1IF                 PIR1bits.C1IF                  /* bit 4 */
#define C2IF                 PIR1bits.C2IF                  /* bit 5 */
#define ADIF                 PIR1bits.ADIF                  /* bit 6 */
#define LVDIF                PIR1bits.LVDIF                 /* bit 7 */

#define RD                   PMCON1bits.RD                  /* bit 0 */

#define RA0                  PORTAbits.RA0                  /* bit 0 */
#define RA1                  PORTAbits.RA1                  /* bit 1 */
#define RA2                  PORTAbits.RA2                  /* bit 2 */
#define RA3                  PORTAbits.RA3                  /* bit 3 */
#define RA4                  PORTAbits.RA4                  /* bit 4 */
#define RA5                  PORTAbits.RA5                  /* bit 5 */
#define RA6                  PORTAbits.RA6                  /* bit 6 */
#define RA7                  PORTAbits.RA7                  /* bit 7 */

#define RB0                  PORTBbits.RB0                  /* bit 0 */
#define RB1                  PORTBbits.RB1                  /* bit 1 */
#define RB2                  PORTBbits.RB2                  /* bit 2 */
#define RB3                  PORTBbits.RB3                  /* bit 3 */
#define RB4                  PORTBbits.RB4                  /* bit 4 */
#define RB5                  PORTBbits.RB5                  /* bit 5 */
#define RB6                  PORTBbits.RB6                  /* bit 6 */
#define RB7                  PORTBbits.RB7                  /* bit 7 */

#define DC0                  PSMCCON0bits.DC0               /* bit 0 */
#define DC1                  PSMCCON0bits.DC1               /* bit 1 */
#define MAXDC0               PSMCCON0bits.MAXDC0            /* bit 2 */
#define MAXDC1               PSMCCON0bits.MAXDC1            /* bit 3 */
#define MINDC0               PSMCCON0bits.MINDC0            /* bit 4 */
#define MINDC1               PSMCCON0bits.MINDC1            /* bit 5 */
#define SMCCL0               PSMCCON0bits.SMCCL0            /* bit 6 */
#define SMCCL1               PSMCCON0bits.SMCCL1            /* bit 7 */

#define SMCCS                PSMCCON1bits.SMCCS             /* bit 0 */
#define NOT_PSM              PSMCCON1bits.NOT_PSM           /* bit 1 */
#define PSM                  PSMCCON1bits.PSM               /* bit 1 */
#define PWM                  PSMCCON1bits.PWM               /* bit 1 */
#define PWM_NOT_PSM          PSMCCON1bits.PWM_NOT_PSM       /* bit 1 */
#define SMCOM                PSMCCON1bits.SMCOM             /* bit 2 */
#define SCEN                 PSMCCON1bits.SCEN              /* bit 3 */
#define S1BPOL               PSMCCON1bits.S1BPOL            /* bit 5 */
#define S1APOL               PSMCCON1bits.S1APOL            /* bit 6 */
#define SMCON                PSMCCON1bits.SMCON             /* bit 7 */

#define VREFOE               REFCONbits.VREFOE              /* bit 2 */
#define VROE                 REFCONbits.VROE                /* bit 2 */
#define VREFEN               REFCONbits.VREFEN              /* bit 3 */
#define VREN                 REFCONbits.VREN                /* bit 3 */

#define C                    STATUSbits.C                   /* bit 0 */
#define DC                   STATUSbits.DC                  /* bit 1 */
#define Z                    STATUSbits.Z                   /* bit 2 */
#define NOT_PD               STATUSbits.NOT_PD              /* bit 3 */
#define NOT_TO               STATUSbits.NOT_TO              /* bit 4 */
#define RP0                  STATUSbits.RP0                 /* bit 5 */
#define RP1                  STATUSbits.RP1                 /* bit 6 */
#define IRP                  STATUSbits.IRP                 /* bit 7 */

#define TMR1ON               T1CONbits.TMR1ON               /* bit 0 */
#define TMR1CS               T1CONbits.TMR1CS               /* bit 1 */
#define NOT_T1SYNC           T1CONbits.NOT_T1SYNC           /* bit 2 */
#define T1INSYNC             T1CONbits.T1INSYNC             /* bit 2 */
#define T1OSCEN              T1CONbits.T1OSCEN              /* bit 3 */
#define T1CKPS0              T1CONbits.T1CKPS0              /* bit 4 */
#define T1CKPS1              T1CONbits.T1CKPS1              /* bit 5 */
#define TMR1GE               T1CONbits.TMR1GE               /* bit 6 */

#define TRISA0               TRISAbits.TRISA0               /* bit 0 */
#define TRISA1               TRISAbits.TRISA1               /* bit 1 */
#define TRISA2               TRISAbits.TRISA2               /* bit 2 */
#define TRISA3               TRISAbits.TRISA3               /* bit 3 */
#define TRISA4               TRISAbits.TRISA4               /* bit 4 */
#define TRISA5               TRISAbits.TRISA5               /* bit 5 */
#define TRISA6               TRISAbits.TRISA6               /* bit 6 */
#define TRISA7               TRISAbits.TRISA7               /* bit 7 */

#define TRISB0               TRISBbits.TRISB0               /* bit 0 */
#define TRISB1               TRISBbits.TRISB1               /* bit 1 */
#define TRISB2               TRISBbits.TRISB2               /* bit 2 */
#define TRISB3               TRISBbits.TRISB3               /* bit 3 */
#define TRISB4               TRISBbits.TRISB4               /* bit 4 */
#define TRISB5               TRISBbits.TRISB5               /* bit 5 */
#define TRISB6               TRISBbits.TRISB6               /* bit 6 */
#define TRISB7               TRISBbits.TRISB7               /* bit 7 */

#define WPUB0                WPUBbits.WPUB0                 /* bit 0 */
#define WPUB1                WPUBbits.WPUB1                 /* bit 1 */
#define WPUB2                WPUBbits.WPUB2                 /* bit 2 */
#define WPUB3                WPUBbits.WPUB3                 /* bit 3 */
#define WPUB4                WPUBbits.WPUB4                 /* bit 4 */
#define WPUB5                WPUBbits.WPUB5                 /* bit 5 */
#define WPUB6                WPUBbits.WPUB6                 /* bit 6 */
#define WPUB7                WPUBbits.WPUB7                 /* bit 7 */
#endif /* NO_BIT_DEFINES */

#ifndef NO_LEGACY_NAMES
#define ADCON0_bits          ADCON0bits
#define ADCON1_bits          ADCON1bits
#define ANSEL_bits           ANSELbits
#define CALCON_bits          CALCONbits
#define CM1CON0_bits         CM1CON0bits
#define CM2CON0_bits         CM2CON0bits
#define CM2CON1_bits         CM2CON1bits
#define DAC_bits             DACbits
#define DACON0_bits          DACON0bits
#define INTCON_bits          INTCONbits
#define IOCB_bits            IOCBbits
#define LVDCON_bits          LVDCONbits
#define OPACON_bits          OPACONbits
#define OPTION_REG_bits      OPTION_REGbits
#define PCON_bits            PCONbits
#define PIE1_bits            PIE1bits
#define PIR1_bits            PIR1bits
#define PMCON1_bits          PMCON1bits
#define PORTA_bits           PORTAbits
#define PORTB_bits           PORTBbits
#define PSMCCON0_bits        PSMCCON0bits
#define PSMCCON1_bits        PSMCCON1bits
#define REFCON_bits          REFCONbits
#define STATUS_bits          STATUSbits
#define T1CON_bits           T1CONbits
#define TRISA_bits           TRISAbits
#define TRISB_bits           TRISBbits
#define WPUB_bits            WPUBbits
#endif /* NO_LEGACY_NAMES */

#endif
