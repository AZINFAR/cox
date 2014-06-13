\page xRTC_page xRTC page 

[TOC]




xRTC document
======
��ƪ������Ҫ���⣬CoX.RTC�Ĺ淶��������
- �����
    - ���������壿
    - �����ĸ�API��
    - ��������ʽ
    - ��������ϵ�е�ʵ�����
- API����
    - ����ԭ��
    - ��Ҫʵ�ֵĹ��ܺ�ÿ������������
    - ����֮������Ӧ�ã����ܣ�
 
xRTC Interrupt Type  {#xRTC_INT_Type_md}
================
������������жϵ����ͣ�����RTC��˵���ж����������ͣ�ʱ���жϣ�CoX������ж϶���Ϊһ�룩�������жϺ�����жϡ�
��������ʽΪ�̶��ĺ����ƣ� 
 - \ref xRTC_INT_SECOND  
 - \ref xRTC_INT_ALARM 
 - \ref xRTC_INT_OVERFLOW
 
��������� API \ref xRTCIntEnable() �� API \ref xRTCIntDisable() �� ulIntType������
��Щϵ��ʵ�������������ܣ�Ȼ����Щϵ��ֻ��ǰ�������ܣ������Ǹ���ϵ�е�ʵ�ֵ������

|  xRTC Interrupts |LPC17xx|STM32F1xx|NUC1xx/NUC2xx/M051/Mini51|KLx      |HT32F125x|HT32F175x|
|:----------------:|:-----:|:-------:|:-----------------------:|:-------:|:-------:|:-------:|
|  xRTC_INT_SECOND |**Y**  |  **Y**  |          **Y**          |  **Y**  |  **Y**  |  **Y**  |
|  xRTC_INT_ALARM  |**Y**  |  **Y**  |          **Y**          |  **Y**  |  **Y**  |  **Y**  |
|xRTC_INT_OVERFLOW | *N*   |  **Y**  |           *N*           |  **Y**  |  **Y**  |  **Y**  |


xRTC Interrupt Event   {#xRTC_INT_Event_md}
========
����������жϵ��¼�����RTC����ʱ ������������ж� ��ǰ�� �ж�Դ ��ʲô��
�ж��¼������ͣ���������һ�¡�
��������ʽΪ�̶��ĺ����ƣ� 
 - \ref xRTC_EVENT_SECOND  
 - \ref xRTC_EVENT_ALARM 
 - \ref xRTC_EVENT_OVERFLOW

������ڻص�������ʹ�ã����ж��Ѿ��������ж�Դ��

��Щϵ��ʵ�������������ܣ�Ȼ����Щϵ��ֻ��ǰ�������ܣ������Ǹ���ϵ�е�ʵ�ֵ������

|  xRTC Event        |LPC17xx|STM32F1xx|NUC1xx/NUC2xx/M051/Mini51|KLx      |HT32F125x|HT32F175x|
|:------------------:|:-----:|:-------:|:-----------------------:|:-------:|:-------:|:-------:|
|  xRTC_EVENT_SECOND |**Y**  |  **Y**  |          **Y**          |  **Y**  |  **Y**  |  **Y**  |
|  xRTC_EVENT_ALARM  |**Y**  |  **Y**  |          **Y**          |  **Y**  |  **Y**  |  **Y**  |
|xRTC_EVENT_OVERFLOW | *N*   |  **Y**  |           *N*           |  **Y**  |  **Y**  |  **Y**  |


xRTC Day Week    {#xRTC_Day_Week_md}
========
��������ڶ������ڣ�ö�� ������ �� ������

��������ʽΪ�̶��ĺ����ƣ� 
 - \ref xRTC_WEEK_SUNDAY  
 - \ref xRTC_WEEK_MONDAY 
 - \ref xRTC_WEEK_TUESDAY
 - \ref xRTC_WEEK_WEDNESDAY
 - \ref xRTC_WEEK_THURSDAY
 - \ref xRTC_WEEK_FRIDAY
 - \ref xRTC_WEEK_SATURDAY

����콫��Ϊ xtTime.ulWDay �������� ���� \ref xRTCTimeRead(), \ref xRTCTimeWrite()

|  tTime.ulWDay            |         All Series     |
|--------------------------|------------------------|
|  xRTC_WEEK_SUNDAY        |            Y           |
|  xRTC_WEEK_MONDAY        |            Y           |
|  xRTC_WEEK_TUESDAY       |            Y           |
|  xRTC_WEEK_WEDNESDAY     |            Y           |
|  xRTC_WEEK_THURSDAY      |            Y           |
|  xRTC_WEEK_FRIDAY        |            Y           |
|  xRTC_WEEK_SATURDAY      |            Y           |


xRTC Year Offset     {#xRTC_Year_Offset_md}
=======

������Щ RTC ʵ���Ͼ���һ�� 32 λ�ļ�����������Ϊ�˽�����������ת��Ϊ�����ʱ�䣬��Ҫ
һ��ת�����̣��� 32 λ�����ܱ�ʾ��������ޣ�����ܱ�ʾ136��ࣩ������Ϊ���ܱ�ʾ��ǰ����������2014��
��Ҫ����һ�� �̶�ƫ���������磬ƫ����Ϊ2000���򵱼���ֵΪ14��ʱ����ʾ2014��1��1��0ʱ0��0�롣
���ƫ�ƽ�Ӱ�� 32 λ�ļ����� ����RTC��ʱ����ڷ�Χ��

��������ʽΪ�̶��ĺ����ƣ� 
 - \ref xRTC_YEAR_OFFSET

ʱ��ĵ��ڷ�Ϊ   xRTC_YEAR_OFFSET <= time <= xRTC_YEAR_OFFSET+136

CoX ������һ��Ĭ��ֵΪ2000

�����Ǹ���ϵ�е�ʵ�����
|  xRTC_Year_Offset        | LPC17xx |STM32F1xx|NUC1xx/NUC2xx/M051/Mini51|KLx      |HT32F125x|HT32F175x|
|--------------------------|---------|:-------:|:-----------------------:|:-------:|:-------:|:-------:|
|  xRTC_YEAR_OFFSET        |    N    |  **Y**  |          **Y**          |  **Y**  |  **Y**  |  **Y**  |


xRTC Time Type     {#xRTC_Time_Type_md}
======
������ ��ǰʱ�� �� ���� ���ӵ�ʱ���������÷�ʽһ�������� ����һ��������ʾ����ǰ������ʲô�������������� ʱ�� �������ӣ���

��������ʽΪ�̶��ĺ����ƣ� 
 - \ref xRTC_TIME_CURRENT
 - \ref xRTC_TIME_ALARM

|  ulTimeAlarm             |         All Series     |
|--------------------------|------------------------|
|  xRTC_TIME_CURRENT       |            Y           |
|  xRTC_TIME_ALARM         |            Y           |


xRTC Exported Types    {#xRTC_Exported_Types_md}  
==========
CoX ΪRTC������һ�� xtime �Ľṹ�壬�ýṹ���������� ʱ��� ������ ʱ���� �����ڡ�


xRTC API   {#xRTC_Exported_APIs_md}
=====

|      xRTC API            |         All Series     |
|--------------------------|------------------------|
| \ref xRTCTimeInit        |            Y           |
| \ref xRTCTimeRead        |            Y           |
| \ref xRTCTimeWrite       |            Y           |
| \ref xRTCIntEnable       |            Y           |
| \ref xRTCIntCallbackInit |            Y           |
| \ref xRTCIntDisable      |            Y           |
| \ref xRTCStart           |            Y           |
| \ref xRTCStop            |            Y           |

\note  xRTCTimeInit ��ʵ�ֵ�ʱ��Ҫ��RTC ��ʱ�� �жϼ������Ϊһ�롣

\note ��Щϵ�� ����Ҫ xRTCStart �� xRTCStop����ô ������������ʵ�ּ��ɡ�



~~~{.c}
xtTime  tTime1;
unsigned long xRTCCallback(void *pvCBData, 
                                       unsigned long ulEvent,
                                       unsigned long ulMsgParam,
                                       void *pvMsgData)
{
    if(ulMsgParam & xRTC_EVENT_SECOND)
    {
        xRTCTimeRead(&tTime1, xRTC_TIME_CURRENT);
        printf("RTC interrupt\r\n");
    }
    return 0;
}
void RTCTickInt()
{
    xSysCtlPeripheralReset(xSYSCTL_PERIPH_RTC);
    xSysCtlPeripheralEnable(xSYSCTL_PERIPH_RTC);  

    xRTCTimeInit();
    
    tTime1.ulSecond = 40;     
    
    tTime1.ulMinute = 20; 
    
    tTime1.ulHour = 17; 
    
    tTime1.ulMDay = 11;  
    
    tTime1.ulMonth = 8;   
    
    tTime1.ulYear = 2011;    
    
    tTime1.ulWDay = 3;   

    
    //
    // Writes current time to corresponding register.
    //
    xRTCTimeWrite(&tTime1, xRTC_TIME_CURRENT);
    
   
    xRTCIntCallbackInit(xRTCCallback);
    
    //
    // Enables tick interrupt.
    //
    xRTCIntEnable(RTC_INT_TIME_TICK);
    
    xIntEnable(INT_RTC);

    while(1);
    
}
~~~

