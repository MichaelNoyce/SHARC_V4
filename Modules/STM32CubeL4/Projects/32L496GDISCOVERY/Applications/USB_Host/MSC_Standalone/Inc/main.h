/**
  ******************************************************************************
  * @file    USB_Host/HID_Standalone/Inc/main.h 
  * @author  MCD Application Team
  * @brief   Header for main.c module
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
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stdio.h"
#include "usbh_core.h"
#include "stm32l496g_discovery.h"
#include "stm32l496g_discovery_lcd.h"
#include "stm32l496g_discovery_io.h"
#include "lcd_log.h"
#include "usbh_msc.h" 
#include "ff.h"
#include "ff_gen_drv.h"
#include "usbh_diskio_dma.h"


/* Exported types ------------------------------------------------------------*/
typedef enum {
  MSC_DEMO_IDLE = 0,
  MSC_DEMO_WAIT,  
  MSC_DEMO_FILE_OPERATIONS,
  MSC_DEMO_EXPLORER,
  MSC_REENUMERATE,  
}MSC_Demo_State;

typedef struct _DemoStateMachine {
  __IO MSC_Demo_State state;
  __IO uint8_t        select;
}MSC_DEMO_StateMachine;

typedef enum {
  APPLICATION_IDLE = 0,
  APPLICATION_READY,    
  APPLICATION_DISCONNECT,
}MSC_ApplicationTypeDef;

extern USBH_HandleTypeDef hUSBHost;
extern FATFS USBH_fatfs;
extern MSC_ApplicationTypeDef Appli_state;

/* Exported constants --------------------------------------------------------*/

/* Use MSI clock automatically trimmed by LSE as USB clock */
#define USB_USE_LSE_MSI_CLOCK   

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
FRESULT Explore_Disk(char *path, uint8_t recu_level);
void MSC_File_Operations(void);
void Toggle_Leds(void);
void Menu_Init(void);
void MSC_MenuProcess(void);
#endif /* __MAIN_H */

