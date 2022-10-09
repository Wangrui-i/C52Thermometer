#ifndef _SHT30_H
#define _SHT30_H

#ifndef _IIC_H
#include "IIC.h"
#endif // !_IIC_H

#ifndef _CRC8_H
#include "CRC8.h"
#endif // !_CRC8_H

/// <summary>
/// SHT30 ��ʼ����ǰ��������IIC��ʼ��
/// </summary>
void SHT30_Init();

/// <summary>
/// SHT30 ���ݶ�ȡ�봦��
/// </summary>
/// <returns></returns>
bit SHT30_DataProcess();

/// <summary>
/// SHT30 ԭʼ����(ʵ��ΪSHT_30_RAW_Data[6])
/// </summary>
extern unsigned char SHT30_RAW_Data[7];

/// <summary>
/// SHT 30 �¶�
/// </summary>
extern float SHT30_T;

/// <summary>
/// SHT 30 ʪ��
/// </summary>
extern float SHT30_RH;

#endif // !_SHT30_H