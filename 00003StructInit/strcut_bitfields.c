/*
 * strcut_bitfields.c
 *
 *  Created on: Nov 29, 2020
 *      Author: babal
 *
 * In this program we are going to understand how to optimize memory consumed by the structure by using bitfields.
 */

/*
 * extracting_a_packet.c
 *
 *  Created on: Nov 29, 2020
 *      Author: babal
 */

#include<stdio.h>
#include<stdint.h>

uint32_t received_packet;

struct Packet
{
 uint32_t crc:2;
 uint32_t status:1;
 uint32_t payload:12;
 uint32_t battery:3;
 uint32_t sensor:3;
 uint32_t long_addr:8;
 uint32_t short_addr:2;
 uint32_t addr_mode:1;
};

int main()
{
	struct Packet pack_data;
	printf("Enter the packet contents:");
	scanf("%X",&received_packet);
	pack_data.crc  = (uint8_t) (received_packet & 0x3);
	pack_data.status  = (uint8_t) ((received_packet >>1)&(0x1));
	pack_data.payload  = (uint16_t) ((received_packet>>3)&(0xFFF));
	pack_data.battery  = (uint8_t) ((received_packet>>15)&(0x7));
	pack_data.sensor  = (uint8_t) ((received_packet>>18) &(0x7));
	pack_data.long_addr  = (uint8_t) ((received_packet>>21)&(0xFF));
	pack_data.short_addr  = (uint8_t) ((received_packet>>29)&(0x3));
	pack_data.addr_mode  = (uint8_t) ((received_packet>>30)&(0x1));

	printf("crc: %#X \n", pack_data.crc);
	printf("status: %#X \n", pack_data.status);
	printf("pay load: %#X \n", pack_data.payload);
	printf("battery: %#X \n", pack_data.battery);
	printf("sensor: %#X \n", pack_data.sensor);
	printf("long_addr: %#X \n", pack_data.long_addr);
	printf("short_addr: %#X \n", pack_data.short_addr);
	printf("addr_mode: %#X \n", pack_data.addr_mode);
	printf("the size of the structure is %d",sizeof(struct Packet)); // we should receive the output has exact 4 bytes
	getchar();
}
