/* Register definitions for pic16f716.
 * This file was automatically generated by:
 *   inc2h.pl V1.6
 *   Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
 */
#include <pic16f716.h>

data __at (INDF_ADDR) volatile char      INDF;
sfr  __at (TMR0_ADDR)                    TMR0;
data __at (PCL_ADDR) volatile char       PCL;
sfr  __at (STATUS_ADDR)                  STATUS;
sfr  __at (FSR_ADDR)                     FSR;
sfr  __at (PORTA_ADDR)                   PORTA;
sfr  __at (PORTB_ADDR)                   PORTB;
sfr  __at (DATACCP_ADDR)                 DATACCP;
sfr  __at (PCLATH_ADDR)                  PCLATH;
sfr  __at (INTCON_ADDR)                  INTCON;
sfr  __at (PIR1_ADDR)                    PIR1;
sfr  __at (TMR1L_ADDR)                   TMR1L;
sfr  __at (TMR1H_ADDR)                   TMR1H;
sfr  __at (T1CON_ADDR)                   T1CON;
sfr  __at (TMR2_ADDR)                    TMR2;
sfr  __at (T2CON_ADDR)                   T2CON;
sfr  __at (CCPR1L_ADDR)                  CCPR1L;
sfr  __at (CCPR1H_ADDR)                  CCPR1H;
sfr  __at (CCP1CON_ADDR)                 CCP1CON;
sfr  __at (PWM1CON_ADDR)                 PWM1CON;
sfr  __at (ECCPAS_ADDR)                  ECCPAS;
sfr  __at (ADRES_ADDR)                   ADRES;
sfr  __at (ADCON0_ADDR)                  ADCON0;
sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
sfr  __at (TRISA_ADDR)                   TRISA;
sfr  __at (TRISB_ADDR)                   TRISB;
sfr  __at (TRISCP_ADDR)                  TRISCP;
sfr  __at (PIE1_ADDR)                    PIE1;
sfr  __at (PCON_ADDR)                    PCON;
sfr  __at (PR2_ADDR)                     PR2;
sfr  __at (ADCON1_ADDR)                  ADCON1;

// 
// bitfield definitions
// 
volatile __ADCON0_bits_t __at(ADCON0_ADDR) ADCON0_bits;
volatile __ADCON1_bits_t __at(ADCON1_ADDR) ADCON1_bits;
volatile __CCP1CON_bits_t __at(CCP1CON_ADDR) CCP1CON_bits;
volatile __ECCPAS_bits_t __at(ECCPAS_ADDR) ECCPAS_bits;
volatile __INTCON_bits_t __at(INTCON_ADDR) INTCON_bits;
volatile __OPTION_REG_bits_t __at(OPTION_REG_ADDR) OPTION_REG_bits;
volatile __PCON_bits_t __at(PCON_ADDR) PCON_bits;
volatile __PIE1_bits_t __at(PIE1_ADDR) PIE1_bits;
volatile __PIR1_bits_t __at(PIR1_ADDR) PIR1_bits;
volatile __PORTB_bits_t __at(PORTB_ADDR) PORTB_bits;
volatile __PWM1CON_bits_t __at(PWM1CON_ADDR) PWM1CON_bits;
volatile __STATUS_bits_t __at(STATUS_ADDR) STATUS_bits;
volatile __T1CON_bits_t __at(T1CON_ADDR) T1CON_bits;
volatile __T2CON_bits_t __at(T2CON_ADDR) T2CON_bits;
volatile __TRISB_bits_t __at(TRISB_ADDR) TRISB_bits;

