/*
 * main.h
 *
 *  Created on: Mar 21, 2020
 *      Author: carlo
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>


typedef struct
{
	uint32_t gpioa_en:1;
	uint32_t gpiob_en:1;
	uint32_t gpioc_en:1;
	uint32_t gpiod_en:1;
	uint32_t gpioe_en:1;
	uint32_t gpiof_en:1;
	uint32_t gpiog_en:1;
	uint32_t gpioh_en:1;
	uint32_t reserved:4;
	uint32_t crc_en:1;
	uint32_t reserved2:5;
	uint32_t bkp_sramen:1;
	uint32_t reserved3:2;
	uint32_t dma1_en:1;
	uint32_t dma2_en:1;
	uint32_t reserved4:6;
	uint32_t otghs_en:1;
	uint32_t otghsulpi_en:1;
	uint32_t reservde5:1;
} RCC_AHB1ENR_t;

typedef struct
{
	uint32_t mode0:2;
	uint32_t mode1:2;
	uint32_t mode2:2;
	uint32_t mode3:2;
	uint32_t mode4:2;
	uint32_t mode5:2;
	uint32_t mode6:2;
	uint32_t mode7:2;
	uint32_t mode8:2;
	uint32_t mode9:2;
	uint32_t mode10:2;
	uint32_t mode11:2;
	uint32_t mode12:2;
	uint32_t mode13:2;
	uint32_t mode14:2;
	uint32_t mode15:2;
} GPIOx_MODE_t;


typedef struct
{
	uint32_t odr0:1;
	uint32_t odr1:1;
	uint32_t odr2:1;
	uint32_t odr3:1;
	uint32_t odr4:1;
	uint32_t odr5:1;
	uint32_t odr6:1;
	uint32_t odr7:1;
	uint32_t odr8:1;
	uint32_t odr9:1;
	uint32_t odr10:1;
	uint32_t odr11:1;
	uint32_t odr12:1;
	uint32_t odr13:1;
	uint32_t odr14:1;
	uint32_t odr15:1;
	uint32_t reserved:16;
} GPIOx_ODR_t;

#endif /* MAIN_H_ */
