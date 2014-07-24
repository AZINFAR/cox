//*****************************************************************************
//
//! \file adc.h
//! \brief Defines and Macros for ADC API.
//! \version V2.1.1.0
//! \date 7/16/2014
//! \author CooCox
//! \copy
//!
//! Copyright (c)  2011, CooCox 
//! All rights reserved.
//! 
//! Redistribution and use in source and binary forms, with or without 
//! modification, are permitted provided that the following conditions 
//! are met: 
//! 
//!     * Redistributions of source code must retain the above copyright 
//! notice, this list of conditions and the following disclaimer. 
//!     * Redistributions in binary form must reproduce the above copyright
//! notice, this list of conditions and the following disclaimer in the
//! documentation and/or other materials provided with the distribution. 
//!     * Neither the name of the <ORGANIZATION> nor the names of its 
//! contributors may be used to endorse or promote products derived 
//! from this software without specific prior written permission. 
//! 
//! THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//! AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
//! IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//! ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE 
//! LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
//! CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
//! SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//! INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
//! CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
//! ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
//! THE POSSIBILITY OF SUCH DAMAGE.
//
//*****************************************************************************

#ifndef __ADC_H__
#define __ADC_H__

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

//*****************************************************************************
//
//! \addtogroup CoX_Peripheral_Lib
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup ADC
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup AU9110_ADC
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup AU9110_ADC_Comp_IDs AU9110 ADC Comparator ID
//! \brief ADC digital comparator ID/index
//! @{
//
//*****************************************************************************

//
// Analog Comparator 0
//
#define ADC_COMP_0              0

//
// Analog Comparator 1
//
#define ADC_COMP_1              1

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup AU9110_ADC_Comp_Conditions AU9110 ADC Comparator Interrupt Condition
//! \brief Conditions when the digital comparator generate and interrupt.
//! @{
//
//*****************************************************************************

//
//! Compare condition is less than
//
#define ADC_COMP_LESS_THAN      0x00000000

//
//! Compare condition is greater or equal
//
#define ADC_COMP_GREATER_EQUAL  0x00000004

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup AU9110_ADC_Exported_APIs AU9110 ADC API
//! \brief AU9110 ADC API Reference
//! @{
//
//*****************************************************************************
extern void ADCClockDiv(unsigned long ulBase, unsigned long ulClkDiv);
extern void ADCDEControl(unsigned long ulBase, unsigned long ulOSR,
		                 unsigned long ulGAIN);

extern void ADCEnable(unsigned long ulBase);
extern void ADCDisable(unsigned long ulBase);

extern void ADCIntEnable(unsigned long ulBase, unsigned long ulIntFlags);
extern void ADCIntDisable(unsigned long ulBase, unsigned long ulIntFlags);
extern void ADCIntCallbackInit(unsigned long ulBase, xtEventCallback pfnCallback);

extern unsigned long ADCDataGet(unsigned long ulBase, unsigned long ulChannel);

extern void ADCPDMAEnable(unsigned long ulBase);
extern void ADCPDMADisable(unsigned long ulBase);

extern void ADCCompDataSet(unsigned long ulBase, unsigned long ulComp,
                           unsigned long ulCompData, unsigned long ulMatchCnt);
extern void ADCCompConditionSet(unsigned long ulBase, unsigned long ulComp,
		                        unsigned long ulCompCondition);
extern void ADCCompEnable(unsigned long ulBase, unsigned long ulComp);
extern void ADCCompDisable(unsigned long ulBase, unsigned long ulComp);
extern void ADCCompIntEnable(unsigned long ulBase, unsigned long ulComp);
extern void ADCCompIntDisable(unsigned long ulBase, unsigned long ulComp);
extern void ADCCompIntCallbackInit(unsigned long ulBase, unsigned long ulComp,
		                   xtEventCallback pfnCallback);

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __xADC_H__

