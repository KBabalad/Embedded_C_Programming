/*
 * struct_in_Union.c
 *
 *  Created on: Nov 29, 2020
 *      Author: babal
 *
 * In this program we are going to see how we can efficiently write a code which can actullay store the bitfields instead
 * of bit shifting everytime and using a bigger code size.
 *
 * This solution is writing a structure inside a union, the thought here is the union refers to the same memory.
 * If we are definiing a structure member inside union and use bitfields it will use the exact same memory and bit size
 * as the packet data
 */
#include<stdio.h>
#include<stdint.h>


union Packet
{
	uint32_t Packet_value;
	struct
	{
	 uint32_t crc:2;
	 uint32_t status:1;
	 uint32_t payload:12;
	 uint32_t battery:3;
	 uint32_t sensor:3;
	 uint32_t long_addr:8;
	 uint32_t short_addr:2;
	 uint32_t addr_mode:1;
	}packet_fields;
};

int main()
{
	union Packet pack_data;
	printf("Enter the packet contents:");
	scanf("%X",&pack_data.Packet_value);


	printf("crc: %#X \n", pack_data.packet_fields.crc);
	printf("status: %#X \n", pack_data.packet_fields.status);
	printf("pay load: %#X \n", pack_data.packet_fields.payload);
	printf("battery: %#X \n", pack_data.packet_fields.battery);
	printf("sensor: %#X \n", pack_data.packet_fields.sensor);
	printf("long_addr: %#X \n", pack_data.packet_fields.long_addr);
	printf("short_addr: %#X \n", pack_data.packet_fields.short_addr);
	printf("addr_mode: %#X \n", pack_data.packet_fields.addr_mode);
	printf("the size of the union is %d",sizeof(union Packet)); // we should receive the output has exact 4 bytes
	getchar();
}


