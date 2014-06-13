\page xint_page xint page 

[TOC]







CoX xlowlayer Int template              {#xlowlayerBaseInt}
========
CoX xlowlayer Int template��ȡ��һ��ARM Cortex MCUͨ��ǿ�����͵��ж�ID�����ﲻ��չʾ������ͨ��ǿ�������ж�ID��ͬʱҲ�ֱ��г��˸���ϵ��MCU��ӵ�е��жϼ���ID��ŷ�Χ��

> **NOTE:**
>
> �����ID��ŷ�Χ��ָ�������ID��ŵķ�Χ��


# GPIO Int Table               {#GPIOIntTemplate}

���¼�����չʾ�˸�ϵ��GPIO�ж�IDģ�壨n��A��G��, ͬʱҲչʾ�����еĸ���CoXϵ�е�GPIO Port Int�ֲ������
xINT_GPIOn| LPC17xx  | STM32F1xx|  Mini51  | M051     
----------|----------|----------|----------|----------
xINT_GPIOA|xINT_GPIOA|xINT_GPIOA|xINT_GPIOA|xINT_GPIOA
...       |xINT_GPIOC|...       |...       |...       
xINT_GPIOG|...       |xINT_GPIOG|xINT_GPIOF|xINT_GPIOF

xINT_GPIOn| NUC1xx   | NUC122   | NUC123   | NUC2xx 
----------|----------|----------|----------|----------
xINT_GPIOA|xINT_GPIOA|xINT_GPIOA|xINT_GPIOA <br> ... <br> xINT_GPIOD|xINT_GPIOA <br> ... <br> xINT_GPIOD
...       |...       |...       |xINT_GPIOF|xINT_GPIOF 
xINT_GPIOG|xINT_GPIOE|xINT_GPIOD|...       |...       

xINT_GPIOn| KLX      | HT32F125x| HT32F175x      
----------|----------|----------|----------
xINT_GPIOA|xINT_GPIOA|xINT_GPIOA|xINT_GPIOA
...       |xINT_GPIOD|xINT_GPIOB|...       
xINT_GPIOG|...       |...       |xINT_GPIOE


# EINT Int Table               {#EINTIntTemplate}

���¼�����չʾ�˸�ϵ��EINT�ж�IDģ�壨n��0��15��, ͬʱҲչʾ�����еĸ���CoXϵ�е�EINT Int�ֲ������
xINT_EINTn| LPC17xx  | STM32F1xx|  Mini51  | M051     
----------|----------|----------|----------|----------
xINT_EINT0|xINT_EINT0|xINT_EINT0|xINT_EINT0|xINT_EINT0
...       |...       |...       |xINT_EINT1|xINT_EINT1
xINT_EINT15|xINT_EINT3|xINT_EINT4|...       |...       

xINT_EINTn| NUC1xx   | NUC122   | NUC123   | NUC2xx 
----------|----------|----------|----------|----------
xINT_EINT0|xINT_EINT0|xINT_EINT0|xINT_EINT0|xINT_EINT0
...       |xINT_EINT1|xINT_EINT1|xINT_EINT1|xINT_EINT1 
xINT_EINT15|...       |...       |...       |...       

xINT_EINTn| KLX      | HT32F125x| HT32F175x      
----------|----------|----------|----------
xINT_EINT0|xINT_EINT0|xINT_EINT0|xINT_EINT0
...       |xINT_EINT3|xINT_EINT1|...       
xINT_EINT15|...       |...       |xINT_EINT15


# PWM Int Table               {#PWMIntTemplate}

���¼�����չʾ�˸�ϵ��PWM�ж�IDģ�壨n��A��C��, ͬʱҲչʾ�����еĸ���CoXϵ�е�PWM Int�ֲ���� ��
xINT_PWMn| LPC17xx  | STM32F1xx|  Mini51  | M051     
---------|----------|----------|----------|----------
xINT_PWMA|xINT_PWMA |xINT_PWMA |xINT_PWMA |xINT_PWMA
...      |...       |xINT_PWMB |...       |xINT_PWMB
xINT_PWMC|...       |...       |...       |...      

xINT_PWMn| NUC1xx   | NUC122   | NUC123   | NUC2xx 
---------|----------|----------|----------|----------
xINT_PWMA|xINT_PWMA |xINT_PWMA |xINT_PWMA |xINT_PWMA
...      |xINT_PWMB |...       |...       |xINT_PWMB 
xINT_PWMC|...       |...       |...       |...       

xINT_PWMn| KLX      | HT32F125x| HT32F175x
---------|----------|----------|----------
xINT_PWMA|xINT_PWMA |...       |...       
...      |xINT_PWMB |...       |...       
xINT_PWMC|xINT_PWMC |...       |...       

# DMA Int Table               {#DMAIntTemplate}

���¼�����չʾ�˸�ϵ��DMA�ж�IDģ�壨n��0��2��, ͬʱҲչʾ�����еĸ���CoXϵ�е�DMA Int�ֲ���� ��
xINT_DMAn | LPC17xx  | STM32F1xx|  Mini51  | M051     
----------|----------|----------|----------|----------
xINT_DMA0 |xINT_DMA0 |...       |...       |...       
xINT_DMA1 |...       |xINT_DMA1 |...       |...       
xINT_DMA2 |...       |xINT_DMA2 |...       |...       

xINT_DMAn | NUC1xx   | NUC122   | NUC123   | NUC2xx 
----------|----------|----------|----------|----------
xINT_DMA0 |xINT_DMA0 |...       |xINT_DMA0 |xINT_DMA0
xINT_DMA1 |...       |...       |...       |...       
xINT_DMA2 |...       |...       |...       |...       

xINT_DMAn | KLX      | HT32F125x| HT32F175x      
----------|----------|----------|----------
xINT_DMA0 |xINT_DMA0 |...       |xINT_DMA0
xINT_DMA1 |...       |...       |...       
xINT_DMA2 |...       |...       |...       

# QEI Int Table               {#QEIIntTemplate}

���¼�����չʾ�˸�ϵ��QEI�ж�IDģ��, ͬʱҲչʾ�����еĸ���CoXϵ�е�QEI Int�ֲ���� ��
xINT_QEI| LPC17xx  | STM32F1xx|  Mini51  | M051     
---------|----------|----------|----------|----------
xINT_QEI|xINT_QEI |...       |...       |...       

xINT_QEI| NUC1xx   | NUC122   | NUC123   | NUC2xx 
---------|----------|----------|----------|----------
xINT_QEI|xINT_QEI |xINT_QEI |...      |...       
   

xINT_QEI| KLX      | HT32F125x| HT32F175x
---------|----------|----------|----------
xINT_QEI|...       |...       |...      

# UART Int Table               {#UARTIntTemplate}

���¼�����չʾ�˸�ϵ��UART�ж�IDģ�壨n��0��5��, ͬʱҲչʾ�����еĸ���CoXϵ�е�UART Int�ֲ��� ����
xINT_UARTn | LPC17xx  | STM32F1xx|  Mini51  | M051     
----------|----------|----------|----------|----------
xINT_UART0 |xINT_UART0 |xINT_UART1 |xINT_UART0 |xINT_UART0 
...       |...       |...       |...       |xINT_UART1   
xINT_UART5 |xINT_UART3 |xINT_UART5 |...       |...       

xINT_UARTn | NUC1xx   | NUC122   | NUC123   | NUC2xx 
----------|----------|----------|----------|----------
xINT_UART0 |xINT_UART0 |xINT_UART0|xINT_UART0|xINT_UART0
...       |...       |xINT_UART1 |xINT_UART1|xINT_UART1 
xINT_UART5 |xINT_UART2|...       |...       |...       

xINT_UARTn | KLX      | HT32F125x| HT32F175x      
----------|----------|----------|----------
xINT_UART0 |xINT_UART0 |xINT_UART0|xINT_UART0
...       |...       |...       |xINT_UART1
xINT_UART5 |xINT_UART2|...       |...       


# I2C Int Table               {#I2CIntTemplate}

���¼�����չʾ�˸�ϵ��I2C�ж�IDģ�壨n��0��2��, ͬʱҲչʾ�����еĸ���CoXϵ�е�I2C Int�ֲ���� ��
xINT_I2Cn | LPC17xx  | STM32F1xx|  Mini51  | M051     
----------|----------|----------|----------|----------
xINT_I2C0 |xINT_I2C0 |...       |xINT_I2C0 |xINT_I2C0 
xINT_I2C1 |xINT_I2C1 |xINT_I2C1 |...       |...        
xINT_I2C2 |xINT_I2C2 |xINT_I2C2 |...       |...       

xINT_I2Cn | NUC1xx   | NUC122   | NUC123   | NUC2xx 
----------|----------|----------|----------|----------
xINT_I2C0 |xINT_I2C0 |xINT_I2C0 |xINT_I2C0 |xINT_I2C0
xINT_I2C1 |xINT_I2C1 |...       |xINT_I2C1 |xINT_I2C1 
xINT_I2C2 |...       |...       | ...      |...       

xINT_I2Cn | KLX      | HT32F125x| HT32F175x      
----------|----------|----------|----------
xINT_I2C0 |xINT_I2C0 |xINT_I2C0 |xINT_I2C0
xINT_I2C1 |xINT_I2C1 |...       |xINT_I2C1
xINT_I2C2 |...       |...       |...        


# SPI Int Table               {#SPIIntTemplate}

���¼�����չʾ�˸�ϵ��SPI�ж�IDģ�壨n��0��3��, ͬʱҲչʾ�����еĸ���CoXϵ�е�SPI Int�ֲ���� ��
xINT_SPIn | LPC17xx  | STM32F1xx|  Mini51  | M051     
----------|----------|----------|----------|----------
xINT_SPI0 |xINT_SPI0 |...       |xINT_SPI0 |xINT_SPI0 
xINT_SPI1 |...       |xINT_SPI1 |...       |xINT_SPI1  
xINT_SPI2 |...       |xINT_SPI2 |...       |...       
xINT_SPI3 |...       |xINT_SPI3 |...       |...       

xINT_SPIn | NUC1xx   | NUC122   | NUC123   | NUC2xx 
----------|----------|----------|----------|----------
xINT_SPI0 |xINT_SPI0 |xINT_SPI0 |xINT_SPI0 |xINT_SPI0
xINT_SPI1 |xINT_SPI1 |xINT_SPI1 |xINT_SPI1 |xINT_SPI1 
xINT_SPI2 |xINT_SPI2 |...       |xINT_SPI2 |xINT_SPI2 
xINT_SPI3 |xINT_SPI3 |...       |...       |xINT_SPI3

xINT_SPIn | KLX      | HT32F125x| HT32F175x      
----------|----------|----------|----------
xINT_SPI0 |xINT_SPI0 |xINT_SPI0 |xINT_SPI0
xINT_SPI1 |xINT_SPI1 |...       |xINT_SPI1
xINT_SPI2 |...       |...       |...       
xINT_SPI3 |...       |...       |...      

# CAN Int Table               {#CANIntTemplate}

���¼�����չʾ�˸�ϵ��CAN�ж�IDģ�壨n��0��1��, ͬʱҲչʾ�����еĸ���CoXϵ�е�CAN Int�ֲ���� ��
xINT_CANn | LPC17xx  | STM32F1xx|  Mini51  | M051     
----------|----------|----------|----------|----------
xINT_CAN0 |xINT_CAN0 |xINT_CAN0 |xINT_CAN0 |xINT_CAN0 
xINT_CAN1 |...       |xINT_CAN1 |...       |xINT_CAN1    

xINT_CANn | NUC1xx   | NUC122   | NUC123   | NUC2xx 
----------|----------|----------|----------|----------
xINT_CAN0 |xINT_CAN0 |...       |...       |...       
xINT_CAN1 |...       |...       |...       |...       

xINT_CANn | KLX      | HT32F125x| HT32F175x      
----------|----------|----------|----------
xINT_CAN0 |...       |...       |...       
xINT_CAN1 |...       |...       |...       


# I2S Int Table               {#I2SIntTemplate}

���¼�����չʾ�˸�ϵ��I2S�ж�IDģ�壨n��0��1��, ͬʱҲչʾ�����еĸ���CoXϵ�е�I2S Int�ֲ���� ��
xINT_I2Sn | LPC17xx  | STM32F1xx|  Mini51  | M051     
----------|----------|----------|----------|----------
xINT_I2S0 |xINT_I2S0 |...       |...       |...       
xINT_I2S1 |...       |...       |...       |...         

xINT_I2Sn | NUC1xx   | NUC122   | NUC123   | NUC2xx 
----------|----------|----------|----------|----------
xINT_I2S0 |xINT_I2S0 |...       |xINT_I2S0 |...       
xINT_I2S1 |...       |...       |...       |...       

xINT_I2Sn | KLX      | HT32F125x| HT32F175x      
----------|----------|----------|----------
xINT_I2S0 |...       |...       |...       
xINT_I2S1 |...       |...       |...       

# USB Int Table               {#USBIntTemplate}

���¼�����չʾ�˸�ϵ��USB�ж�IDģ�壨�ֱ�ΪUSB���豸�ʹ��豸��, ͬʱҲչʾ�����еĸ���CoXϵ�� ��USB Int�ֲ������
xINT_USBn | LPC17xx  | STM32F1xx|  Mini51  | M051     
----------|----------|----------|----------|----------
xINT_USBD |xINT_USBD |xINT_USBD |...       |...       
xINT_USBH |xINT_USBH |xINT_USBH |...       |...         

xINT_USBn | NUC1xx   | NUC122   | NUC123   | NUC2xx 
----------|----------|----------|----------|----------
xINT_USBD |...       |...       |...       |...       
xINT_USBH |...       |...       |...       |...       

xINT_USBn | KLX      | HT32F125x| HT32F175x      
----------|----------|----------|----------
xINT_USBD |...       |...       |...       
xINT_USBH |...       |...       |...       



# ADC0 Int Table               {#ADC0IntTemplate}

���¼�����չʾ�˸�ϵ��ADC0�ж�IDģ��, ͬʱҲչʾ�����еĸ���CoXϵ�е�ADC Int�ֲ���� ��
xINT_ADCn| LPC17xx  | STM32F1xx|  Mini51  | M051     
---------|----------|----------|----------|----------
xINT_ADC0|xINT_ADC0 |xINT_ADC0 |xINT_ADC0 |xINT_ADC0 

xINT_ADCn| NUC1xx   | NUC122   | NUC123   | NUC2xx 
---------|----------|----------|----------|----------
xINT_ADC0|xINT_ADC0 |...       |...       |xINT_ADC0 
   

xINT_ADCn| KLX      | HT32F125x| HT32F175x
---------|----------|----------|----------
xINT_ADC0|xINT_ADC0 |xINT_ADC0 |xINT_ADC0   


# DAC0 Int Table               {#DAC0IntTemplate}

���¼�����չʾ�˸�ϵ��DAC0�ж�IDģ��, ͬʱҲչʾ�����еĸ���CoXϵ�е�DAC Int�ֲ���� ��
xINT_DACn| LPC17xx  | STM32F1xx|  Mini51  | M051     
---------|----------|----------|----------|----------
xINT_DAC0|...       |...       |...       |...       

xINT_DACn| NUC1xx   | NUC122   | NUC123   | NUC2xx 
---------|----------|----------|----------|----------
xINT_DAC0|...       |...       |...       |...       
   

xINT_DACn| KLX      | HT32F125x| HT32F175x
---------|----------|----------|----------
xINT_DAC0|...       |...       |...       
 
# ACMP0 Int Table               {#ACMP0IntTemplate}

���¼�����չʾ�˸�ϵ��ACMP0�ж�IDģ��, ͬʱҲչʾ�����еĸ���CoXϵ�е�ACMP Int�ֲ���� ��
xINT_ACMPn| LPC17xx  | STM32F1xx|  Mini51  | M051     
---------|----------|----------|----------|----------
xINT_ACMP0|...       |...       |xINT_ACMP0 |xINT_ACMP0 

xINT_ACMPn| NUC1xx   | NUC122   | NUC123   | NUC2xx 
---------|----------|----------|----------|----------
xINT_ACMP0|xINT_ACMP0 |...       |...       |xINT_ACMP0 
   

xINT_ACMPn| KLX      | HT32F125x| HT32F175x
---------|----------|----------|----------
xINT_ACMP0|xINT_ACMP0 |xINT_ACMP0 |xINT_ACMP0
