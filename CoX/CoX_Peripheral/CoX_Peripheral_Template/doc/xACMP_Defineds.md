\page xACMP_page xACMP page 

[TOC]

xACMP document
======
��ƪ������Ҫ���⣬CoX.ACMP�Ĺ淶��������
- �����
    - ���������壿
    - �����ĸ�API��
    - ��������ʽ
    - ��������ϵ�е�ʵ�����
- API����
    - ����ԭ��
    - ��Ҫʵ�ֵĹ��ܺ�ÿ������������
    - ����֮������Ӧ�ã����ܣ�

xACMP Positive Source Tab            {#xACMP_Positive_Src_md}
==============
- ���ﶨ�����ACMP���������ѹ��ģʽ������:
    - \ref xACMP_ASRCP_PIN
    - \ref xACMP_ASRCP_REF
- ���� xACMP_ASRCP_REF �Ƿ�ǿ�����ͣ�
	
Source \ Series   | LPC17xx | STM32F1xx | Mini51 | M051 | NUC1xx | NUC122 | NUC123 | NUC2xx | KLx | HT32F125x | HT32F175x |   
----------------- | --------| ----------| -------| -----| -------| -------| -------| -------| ----| ----------| ----------|
xACMP_ASRCP_PIN   |  **N**  |   **Y**   |  **Y** | **Y**|  **Y** |  **Y** |  **Y** |  **Y** |**Y**|   **Y**   |   **Y**   |
xACMP_ASRCP_REF   |  **N**  |   **Y**   |  **N** | **N**|  **N** |  **N** |  **N** |  **N** |**N**|   **N**   |   **N**   |

xACMP Negative Source Tab         {#xACMP_Negative_Src_md}
==============
- ���ﶨ�����ACMP���������ѹ��ģʽ������:
    - \ref xACMP_ASRCN_PIN
    - \ref xACMP_ASRCN_REF
- ���� xACMP_ASRCN_REF �Ƿ�ǿ�����ͣ�
	
  Source\Series   | LPC17xx | STM32F1xx | Mini51 | M051 | NUC1xx | NUC122 | NUC123 | NUC2xx | KLx | HT32F125x | HT32F175x |   
----------------- | --------| ----------| -------| -----| -------| -------| -------| -------| ----| ----------| ----------|
xACMP_ASRCN_PIN   |  **N**  |   **Y**   |  **Y** | **Y**|  **Y** |  **Y** |  **Y** |  **Y** |**Y**|   **Y**   |   **Y**   |
xACMP_ASRCN_REF   |  **N**  |   **Y**   |  **Y** | **Y**|  **Y** |  **Y** |  **Y** |  **Y** |**N**|   **N**   |   **N**   |

xACMP Internal Refrence Voltage Tab         {#xACMP_Int_Ref_Volt_md}
==============
- ���ﶨ�����ACMP�ڲ��ο���ѹ�Ĵ�С����ʽ:
    - \ref xACMP_REF_*V 
- Here is a list of the Vref.Values of Vref like xACMP_REF_*V, can be:
    - \ref xACMP_REF_?V - Example 2V
    - \ref xACMP_REF_?_?V - Example 2.1V
    - \ref xACMP_REF_?_??V - Example 2.13V
    - \ref xACMP_REF_?_???V - Example 1.375V
    - \ref xACMP_REF_?_????V - Example 1.2375V��
	
  Source\Series   |     LPC17xx    |    STM32F1xx   |      Mini51     |        M051    |      NUC1xx    |      NUC122    |      NUC123    |      NUC2xx    |        KLx     |    HT32F125x   |    HT32F175x   |   
----------------- | ---------------| ---------------| ----------------| ---------------| ---------------| ---------------| ---------------| ---------------| ---------------| ---------------| ---------------|
xACMP_REF_*V      |      **N**     | xACMP_REF_1_2V | xACMP_REF_1_35V | xACMP_REF_1_2V | xACMP_REF_1_2V | xACMP_REF_1_2V | xACMP_REF_1_2V | xACMP_REF_1_2V | xACMP_REF_1_2V | xACMP_REF_1_2V | xACMP_REF_1_2V |

xACMP Comparator IDs Tab         {#xACMP_Comparator_IDs_md}
==============
- ���ﶨ�����ACMP�Ƚ�ͨ����������:
    - \ref xACMP_0
    - \ref xACMP_1
	
IDs\Series | LPC17xx | STM32F1xx | Mini51 | M051 | NUC1xx | NUC122 | NUC123 | NUC2xx | KLx | HT32F125x | HT32F175x |   
-----------| --------| ----------| -------| -----| -------| -------| -------| -------| ----| ----------| ----------|
xACMP_0    |  **N**  |   **Y**   |  **Y** | **Y**|  **Y** |  **Y** |  **Y** |  **Y** |**Y**|   **Y**   |   **Y**   |
xACMP_1    |  **N**  |   **Y**   |  **Y** | **Y**|  **Y** |  **Y** |  **Y** |  **Y** |**Y**|   **Y**   |   **Y**   |
