#ifndef _ADF4351_H_
#define _ADF4351_H_
#include "main.h"

#define  ADF4351_CLK_1              HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1, GPIO_PIN_SET)
#define  ADF4351_CLK_0              HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1, GPIO_PIN_RESET)
#define  ADF4351_OUTPUT_DATA_1      HAL_GPIO_WritePin(GPIOB,GPIO_PIN_15, GPIO_PIN_SET)
#define  ADF4351_OUTPUT_DATA_0      HAL_GPIO_WritePin(GPIOB,GPIO_PIN_15, GPIO_PIN_RESET)
#define  ADF4351_INPUT_DATA         HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_15)
#define  ADF4351_LE_1               HAL_GPIO_WritePin(GPIOB,GPIO_PIN_14, GPIO_PIN_SET)
#define  ADF4351_LE_0               HAL_GPIO_WritePin(GPIOB,GPIO_PIN_14, GPIO_PIN_RESET)
#define  ADF4351_CE_1               HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13, GPIO_PIN_SET)
#define  ADF4351_CE_0               HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13, GPIO_PIN_RESET)

#define ADF4351_R4_PWR_N4DBM 0x00000000
#define ADF4351_R4_PWR_N1DBM 0x00000008
#define ADF4351_R4_PWR_2DBM 0x00000010
#define ADF4351_R4_PWR_5DBM 0x00000018
#define ADF4351_R4_PWR_MASK ADF4351_R4_PWR_5DBM

void ADF4351Init(void);
void ReadToADF4351(uint8_t count, uint8_t *buf);
void WriteToADF4351(uint8_t count, uint8_t *buf);
void WriteOneRegToADF4351(uint32_t Regster);
void ADF4351_Init_some(void);
void ADF4351WriteFreq(float Fre);		//	(xx.x) M Hz    35M-4.4GHz
#endif

