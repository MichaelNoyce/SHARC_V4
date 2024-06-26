/**
  @page HASH_SHA224SHA256_DMA  HASH digest calculation using SHA224 and SHA256 example with DMA transfer.
  
  @verbatim
  ******************************************************************************
  * @file    HASH/HASH_SHA224SHA256_DMA/readme.txt
  * @author  MCD Application Team
  * @brief   Description of the HASH digest calculation using SHA224 and SHA256 example with DMA transfer.
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
  @endverbatim

@par Example Description 

How to use the HASH peripheral to hash data with SHA224 and SHA256 algorithms.

In this example, DMA is used to transfer data from internal RAM to HASH peripheral.
The SHA224 message digest length is 28 bytes and the SHA256 message digest length 
is 32 bytes.

The expected HASH digests (for SHA224 and SHA256) are already computed using an online
HASH tool. Those values are compared to those computed by the HASH peripheral.

When SHA224 (respectively SHA256) digest computation is successful, LED1 (resp. LED2) is turned on.
In case of digest computation or initialization issue, LED3 is turned on. 

@note Care must be taken when using HAL_Delay(), this function provides accurate delay (in milliseconds)
      based on variable incremented in SysTick ISR. This implies that if HAL_Delay() is called from
      a peripheral ISR process, then the SysTick interrupt must have higher priority (numerically lower)
      than the peripheral interrupt. Otherwise the caller ISR process will be blocked.
      To change the SysTick interrupt priority you have to use HAL_NVIC_SetPriority() function.
      
@note The application needs to ensure that the SysTick time base is always set to 1 millisecond
      to have correct HAL operation.


@par Directory contents 

  - HASH/HASH_SHA224SHA256_DMA/Inc/stm32l4xx_hal_conf.h    HAL configuration file
  - HASH/HASH_SHA224SHA256_DMA/Inc/stm32l4xx_it.h          Interrupt handlers header file
  - HASH/HASH_SHA224SHA256_DMA/Inc/main.h                  Header for main.c module  
  - HASH/HASH_SHA224SHA256_DMA/Src/stm32l4xx_it.c          Interrupt handlers
  - HASH/HASH_SHA224SHA256_DMA/Src/main.c                  Main program
  - HASH/HASH_SHA224SHA256_DMA/Src/stm32l4xx_hal_msp.c     HAL MSP module
  - HASH/HASH_SHA224SHA256_DMA/Src/system_stm32l4xx.c      STM32L4xx system source file


@par Hardware and Software environment

    - This example runs on STM32L4S5xx devices.
  
    - This example has been tested with a STM32L4S5xx mounted on a 
    Nucleo (144 pins) board and can be easily tailored to any other supported 
    device and development board.

@par How to use it ? 

In order to make the program work, you must do the following :
 - Open your preferred toolchain 
 - Rebuild all files and load your image into target memory
 - Run the example 


 */
 