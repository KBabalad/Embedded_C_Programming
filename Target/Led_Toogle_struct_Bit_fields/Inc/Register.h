/*
 * Register.h
 *
 *  Created on: Nov 30, 2020
 *      Author: babal
 *
 * This header files might include the Registers which we will be using for
 * programming various peripherals on STM32 F407G Development Board.
 * The main reason for creating these header files is that it will be very much user
 * friendly where the user will be having access to various peripheral registers
 * to build the API's on top of them.
 */

#ifndef REGISTER_H_
#define REGISTER_H_
#include<stdint.h>

typedef struct
{
	uint32_t gpio_a_en:1;
	uint32_t gpio_b_en:1;
	uint32_t gpio_c_en:1;
	uint32_t gpio_d_en:1;
	uint32_t gpio_e_en:1;
	uint32_t gpio_f_en:1;
	uint32_t gpio_g_en:1;
	uint32_t gpio_h_en:1;
	uint32_t gpio_i_en:1;
	uint32_t reserved_1:3;
	uint32_t crc_en:1;
	uint32_t reserved_2:5;
	uint32_t bk_ps_ram_en:1;
	uint32_t reserved_3:1;
	uint32_t ccm_data_ram_en:1;
	uint32_t dma1_en:1;
	uint32_t dma2_en:1;
	uint32_t reserved_4:1;
	uint32_t eth_mac_en:1;
	uint32_t eth_mac_tx_en:1;
	uint32_t eth_mac_rx_en:1;
	uint32_t otg_hs_en:1;
	uint32_t otg_hss_ul_pi_en:1;
	uint32_t reserved_5:1;
}RCC_AHB1ENR_t;


typedef struct
{
	uint32_t pin_0:2;
	uint32_t pin_1:2;
	uint32_t pin_2:2;
	uint32_t pin_3:2;
	uint32_t pin_4:2;
	uint32_t pin_5:2;
	uint32_t pin_6:2;
	uint32_t pin_7:2;
	uint32_t pin_8:2;
	uint32_t pin_9:2;
	uint32_t pin_10:2;
	uint32_t pin_11:2;
	uint32_t pin_12:2;
	uint32_t pin_13:2;
	uint32_t pin_14:2;
	uint32_t pin_15:2;
}GPIOx_MODER_t;



typedef struct
{
	uint32_t odr_0:1;
	uint32_t odr_1:1;
	uint32_t odr_2:1;
	uint32_t odr_3:1;
	uint32_t odr_4:1;
	uint32_t odr_5:1;
	uint32_t odr_6:1;
	uint32_t odr_7:1;
	uint32_t odr_8:1;
	uint32_t odr_9:1;
	uint32_t odr_10:1;
	uint32_t odr_11:1;
	uint32_t odr_12:1;
	uint32_t odr_13:1;
	uint32_t odr_14:1;
	uint32_t odr_15:1;
	uint32_t reserved:16;
}GPIOx_ODR_t;


#endif /* REGISTER_H_ */
