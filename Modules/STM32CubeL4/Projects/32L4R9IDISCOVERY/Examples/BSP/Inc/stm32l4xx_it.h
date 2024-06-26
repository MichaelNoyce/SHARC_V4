/**
  ******************************************************************************
  * @file    stm32l4xx_it.h
  * @author  MCD Application Team
  * @brief   This file contains the headers of the interrupt handlers.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32L4xx_IT_H
#define __STM32L4xx_IT_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

void NMI_Handler(void);
void HardFault_Handler(void);
void MemManage_Handler(void);
void BusFault_Handler(void);
void UsageFault_Handler(void);
void SVC_Handler(void);
void DebugMon_Handler(void);
void PendSV_Handler(void);
void SysTick_Handler(void);
void EXTI1_IRQHandler(void);
void EXTI15_10_IRQHandler(void);
void SAI1_IRQHandler(void);
void DMA2_Channel1_IRQHandler(void);
void DMA2_Channel2_IRQHandler(void);
void DMA2_Channel3_IRQHandler(void);
void DMA2_Channel6_IRQHandler(void);
void DMA1_Channel4_IRQHandler(void);
void DMA1_Channel5_IRQHandler(void);
void DMA2D_IRQHandler(void);
void DSI_IRQHandler(void);
void LTDC_IRQHandler(void);
void LTDC_ER_IRQHandler(void);
void SDMMC1_IRQHandler(void);
void DCMI_IRQHandler(void);
#if defined(LCD_DIMMING)
void RTC_WKUP_IRQHandler(void);
void TIM3_IRQHandler(void);
#endif /* defined(LCD_DIMMING) */

#ifdef __cplusplus
}
#endif

#endif /* __STM32L4xx_IT_H */

