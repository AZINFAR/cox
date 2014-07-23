//*****************************************************************************
//
//! \file spi.h
//! \brief Prototypes for the SPI Driver.
//! \version V2.1.1.0
//! \date 12/27/2011
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
//! THE POSPIBILITY OF SUCH DAMAGE.
//
//*****************************************************************************

#ifndef __SPI_H__
#define __SPI_H__

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
//! \addtogroup SPI
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup M051_SPI
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xSPI_Ints xSPI Interrupts
//! Values that can be passed to SPIIntEnable, SPIIntDisable, and SPIIntFlagClear
//! as the ulIntFlags parameter, and returned from SPIIntFlagGet.
//! @{
//
//*****************************************************************************

//
//! All Error Interrupt Mask
//
#define SPI_INT_EOT             0x00010000
#define SPI_INT_3WIRE           0x00000800
 
//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup M051_SPI_Config M051 SPI Configure
//! Values that can be passed to SPIConfig.
//! @{
//
//*****************************************************************************

//
//! polarity 0,
//! Tx changed at rising edge
//! Rx latched at rising edge
//
#define SPI_FORMAT_MODE_0       0x00000000  

//
//! Moto Format, polarity 0, phase 0  M0
//! Tx changed at falling edge
//! Rx latched at rising edge
//
#define SPI_FORMAT_MODE_1       0x00000004  

//
//! Moto Format, polarity 0, phase 1  M1
//! Tx changed at rising edge
//! Rx latched at falling edge
//
#define SPI_FORMAT_MODE_2       0x00000002  

//
//! polarity 0
//! Tx changed at falling edge
//! Rx latched at falling edge
//
#define SPI_FORMAT_MODE_3       0x00000006  

//
//! polarity 1
//! Tx changed at rising edge
//! Rx latched at rising edge
//
#define SPI_FORMAT_MODE_4       0x00000800  

//
//! Moto Format, polarity 1, phase 1  M4
//! Tx changed at falling edge
//! Rx latched at rising edge
//
#define SPI_FORMAT_MODE_5       0x00000804  

//
//! Moto Format, polarity 1, phase 0  M3
//! Tx changed at rising edge
//! Rx latched at falling edge
//
#define SPI_FORMAT_MODE_6       0x00000802  

//
//! polarity 1
//! Tx changed at falling edge
//! Rx latched at falling edge
//
#define SPI_FORMAT_MODE_7       0x00000806 

//
//�� SPI master
//
#define SPI_MODE_MASTER         0x00000000  

//
//! SPI slave
//
#define SPI_MODE_SLAVE          0x00040000

//
//! SPI MSB First
//
#define SPI_MSB_FIRST           0x00000000  

//
//! SPI LSB First
//
#define SPI_LSB_FIRST           0x00000400  

//
//! data width 1 bit
//
#define SPI_DATA_WIDTH1         0x00000008

//
//! data width 2 bit
//
#define SPI_DATA_WIDTH2         0x00000010  

//
//! data width 3 bit
//
#define SPI_DATA_WIDTH3         0x00000018  

//
//! data width 4 bit
//
#define SPI_DATA_WIDTH4         0x00000020  

//
//! data width 5 bit
//
#define SPI_DATA_WIDTH5         0x00000028  

//
//! data width 6 bit
//
#define SPI_DATA_WIDTH6         0x00000030 

//
//! data width 7 bit
//
#define SPI_DATA_WIDTH7         0x00000038 

//
//! data width 8 bit
//
#define SPI_DATA_WIDTH8         0x00000040  

//
//! data width 9 bit
//
#define SPI_DATA_WIDTH9         0x00000048  

//
//! data width 10 bit
//
#define SPI_DATA_WIDTH10        0x00000050  

//
//! data width 11 bit
//
#define SPI_DATA_WIDTH11        0x00000058  

//
//! data width 12 bit
//
#define SPI_DATA_WIDTH12        0x00000060  

//
//! data width 13 bit
//
#define SPI_DATA_WIDTH13        0x00000068  

//
//! data width 14 bit
//
#define SPI_DATA_WIDTH14        0x00000070  

//
//! data width 15 bit
//
#define SPI_DATA_WIDTH15        0x00000078  

//
//! data width 16 bit
//
#define SPI_DATA_WIDTH16        0x00000080  

//
//! data width 17 bit
//
#define SPI_DATA_WIDTH17        0x00000088  

//
//! data width 18 bit
//
#define SPI_DATA_WIDTH18        0x00000090  

//
//! data width 19 bit
//
#define SPI_DATA_WIDTH19        0x00000098  

//
//! data width 20 bit
//
#define SPI_DATA_WIDTH20        0x000000A0  

//
//! data width 21 bit
//
#define SPI_DATA_WIDTH21        0x000000A8  

//
//! data width 22 bit
//
#define SPI_DATA_WIDTH22        0x000000B0  

//
//! data width 23 bit
//
#define SPI_DATA_WIDTH23        0x000000B8  

//
//! data width 24 bit
//
#define SPI_DATA_WIDTH24        0x000000C0  

//
//! data width 25 bit
//
#define SPI_DATA_WIDTH25        0x000000C8  

//
//! data width 26 bit
//
#define SPI_DATA_WIDTH26        0x000000D0  

//
//! data width 27 bit
//
#define SPI_DATA_WIDTH27        0x000000D8  

//
//! data width 28 bit
//
#define SPI_DATA_WIDTH28        0x000000E0  

//
//! data width 29 bit
//
#define SPI_DATA_WIDTH29        0x000000E8  

//
//! data width 30 bit
//
#define SPI_DATA_WIDTH30        0x000000F0  

//
//! data width 31 bit
//
#define SPI_DATA_WIDTH31        0x000000F8  

//
//! data width 32 bit
//
#define SPI_DATA_WIDTH32        0x00000000

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup M051_SPI_SlaveSel_Config M051 SPI Slave Select Configure
//! Values that can be passed to SPIAutoSSEnable() SPISSSet()  SPISSClear()
//! SPISSConfig().
//! @{
//
//*****************************************************************************

#define SPI_SS_HARDWARE         0x00000008
#define SPI_SS_SOFTWARE         0x00000000

//
//! No Slave Pin Select
//
#define SPI_SS_NONE             0x00000000 

//
//! SPISSx0
//
#define SPI_SS0                 0x00000001 

//
//! The input slave select signal is edge-trigger.
//
#define SPI_SS_EDGE_TRIGGER     0x00000000  

//
//! The slave select signal will be level-trigger.
//
#define SPI_SS_LEVEL_TRIGGER    0x00000010  

//
//! SPISSx0/1 is active at low-level falling-edge
//
#define SPI_SS_ACTIVE_LOW_FALLING                                             \
                                0x00000000  

//
//! SPISSx0/1 is active at high-level rising-edge
//
#define SPI_SS_ACTIVE_HIGH_RISING                                             \
                                0x00000004  

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup M051_SPI_FIFOStatus M051 SPI FIFO Status
//! Values that can be passed to SPIFIFOStatusGet().
//! @{
//
//*****************************************************************************

//
//! Received FIFO_EMPTY STATUS
//
#define SPI_CNTRL_RX_EMPTY      0x01000000

//
//! Received FIFO_FULL STATUS
//
#define SPI_CNTRL_RX_FULL       0x02000000  

//
//! Transmitted FIFO_EMPTY STATUS
//
#define SPI_CNTRL_TX_EMPTY      0x04000000  

//
//! Transmitted FIFO_FULL STATUS
//
#define SPI_CNTRL_TX_FULL       0x08000000   

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup M051_SPI_ByteReorder M051 SPI Byte Reorder
//! Values that can be passed to SPIByteReorderSet().
//! @{
//
//*****************************************************************************

//
//! Disable both byte reorder and byte suspend functions.
//
#define SPI_BYTE_REORDER_SUSPEND_DISABLE                                      \
                                0x00000000  
//
//! Enable byte reorder function and insert a byte suspend interval
//
#define SPI_BYTE_REORDER_SUSPEND                                              \
                                0x00000001  

//
//! Enable byte reorder function, but disable byte suspend function.
//
#define SPI_BYTE_REORDER        0x00000002  

//
//! Disable byte reorder function, but insert a suspend interval
//
#define SPI_BYTE_SUSPEND        0x00000003  

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup M051_SPI_Exported_APIs  M051 SPI API
//! \brief M051 SPI API Reference
//! @{
//
//*****************************************************************************

extern void SPIConfig(unsigned long ulBase, unsigned long ulBitRate,                      
                      unsigned long ulConfig);
extern unsigned long SPISingleDataReadWrite(unsigned long ulBase, 
                                            unsigned long ulWData);
extern unsigned char SPIBitLengthGet(unsigned long ulBase);
extern void SPIDataRead(unsigned long ulBase, void *pulRData, 
                        unsigned long ulLen);
extern void SPIBurstDataRead(unsigned long ulBase, unsigned long *pulData);
extern unsigned long SPIRxRegisterGet(unsigned long ulBase, 
                                      unsigned long *pulData, 
                                      unsigned long ulCount);
extern void SPIDataWrite(unsigned long ulBase, void *pulWData, 
                         unsigned long ulLen);
extern void SPIBurstDataWrite(unsigned long ulBase, unsigned long *pulData);
extern unsigned long SPITxRegisterSet(unsigned long ulBase, 
                                      unsigned long *pulData, 
                                      unsigned long ulCount);
extern void SPIBitGoBusySet(unsigned long ulBase);
extern void SPIBitGoBusyClear(unsigned long ulBase);
extern void SPIIntEnable(unsigned long ulBase, unsigned long ulIntFlags);
extern void SPIIntCallbackInit(unsigned long ulBase, 
                               xtEventCallback xtSPICallback);
extern void SPIIntDisable(unsigned long ulBase, unsigned long ulIntFlags);
extern xtBoolean SPIIntFlagGet(unsigned long ulBase, unsigned long ulIntFlags);
extern void SPIIntFlagClear(unsigned long ulBase, unsigned long ulIntFlags);
extern void SPIAutoSSEnable(unsigned long ulBase, unsigned long ulSlaveSel);
extern void SPIAutoSSDisable(unsigned long ulBase);
extern void SPISSSet(unsigned long ulBase, unsigned long ulSlaveSel);
extern void SPISSClear(unsigned long ulBase, unsigned long ulSlaveSel);
extern void SPISSConfig(unsigned long ulBase, unsigned long ulSSTriggerMode,
                        unsigned long ulSSActType);
extern xtBoolean SPILevelTriggerStatusGet(unsigned long ulBase);
extern xtBoolean SPIIsBusy(unsigned long ulBase);
extern xtBoolean SPIIsRxEmpty(unsigned long ulBase);
extern xtBoolean SPIIsRxFull(unsigned long ulBase);
extern xtBoolean SPIIsTxEmpty(unsigned long ulBase);
extern xtBoolean SPIIsTxFull(unsigned long ulBase);
extern unsigned long SPIFIFOStatusGet(unsigned long ulBase);
extern void SPIByteReorderSet(unsigned long ulBase, 
                              unsigned long ulByteReorder);
extern void SPIVariableClockSet(unsigned long ulBase, unsigned long ulPattern, 
                                xtBoolean xtEnable, unsigned long ulClock1, 
                                unsigned long ulClock2);
extern void SPIDivOneFunction(unsigned long ulBase, xtBoolean xtEnable);
extern void SPI3WireFunction(unsigned long ulBase, xtBoolean xtEnable);
extern void SPI3WireAbort(unsigned long ulBase);
extern void SPI3WireStartIntEnable(unsigned long ulBase);
extern void SPI3WireStartIntDisable(unsigned long ulBase);
extern unsigned long SPI3WireStartIntFlagGet(unsigned long ulBase);
extern void SPI3WireStartIntFlagClear(unsigned long ulBase);

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

#endif // __xSPI_H__


