/*
 * main.c
 *
 *  Created on: ٢٠‏/٠٨‏/٢٠٢٣
 *      Author: abdul
 */

#include "typedef.h"
#include "DIO_interface.h"
#include "LCD_config.h"
#include "LCD_interface.h"
#include <util/delay.h>

int main()
{
	char name[] = "Hi, I'm Abdullah Eid";
	LCD_VidInit();
	LCD_VidSendString(name);

	_delay_ms(2000);
	LCD_VidClear();
	LCD_VidSendString("Age : ");
	int x = 20;
	LCD_VidSendint(x);



}
