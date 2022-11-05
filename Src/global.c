/*
 * global.c
 *
 *  Created on: Nov 5, 2022
 *      Author: PC
 */


#include "global.h"
#include "timer.h"
#include "button.h"
#include "main.h"

int counter = 9;

int status = INIT;

void display7SEG(int num)
{
	if(num == 0)
	{
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port, LED7_1_Pin, GPIO_PIN_RESET) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port, LED7_2_Pin, GPIO_PIN_RESET) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port, LED7_3_Pin, GPIO_PIN_RESET) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port, LED7_4_Pin, GPIO_PIN_RESET) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port, LED7_5_Pin, GPIO_PIN_RESET) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port, LED7_6_Pin, GPIO_PIN_RESET) ;
		HAL_GPIO_WritePin ( LED7_7_GPIO_Port, LED7_7_Pin, GPIO_PIN_SET) ;
	}
	else if (num == 1)
	{
		HAL_GPIO_WritePin ( LED7_1_GPIO_Port, LED7_1_Pin, GPIO_PIN_SET) ;
		HAL_GPIO_WritePin ( LED7_2_GPIO_Port, LED7_2_Pin, GPIO_PIN_RESET) ;
		HAL_GPIO_WritePin ( LED7_3_GPIO_Port, LED7_3_Pin, GPIO_PIN_RESET) ;
		HAL_GPIO_WritePin ( LED7_4_GPIO_Port, LED7_4_Pin, GPIO_PIN_SET) ;
		HAL_GPIO_WritePin ( LED7_5_GPIO_Port, LED7_5_Pin, GPIO_PIN_SET) ;
		HAL_GPIO_WritePin ( LED7_6_GPIO_Port, LED7_6_Pin, GPIO_PIN_SET) ;
		HAL_GPIO_WritePin ( LED7_7_GPIO_Port, LED7_7_Pin, GPIO_PIN_SET) ;
	}
	else if (num == 2)
		{
			HAL_GPIO_WritePin ( LED7_1_GPIO_Port, LED7_1_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_2_GPIO_Port, LED7_2_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_3_GPIO_Port, LED7_3_Pin, GPIO_PIN_SET) ;
			HAL_GPIO_WritePin ( LED7_4_GPIO_Port, LED7_4_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_5_GPIO_Port, LED7_5_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_6_GPIO_Port, LED7_6_Pin, GPIO_PIN_SET) ;
			HAL_GPIO_WritePin ( LED7_7_GPIO_Port, LED7_7_Pin, GPIO_PIN_RESET) ;
		}
	else if (num == 3)
		{
			HAL_GPIO_WritePin ( LED7_1_GPIO_Port, LED7_1_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_2_GPIO_Port, LED7_2_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_3_GPIO_Port, LED7_3_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_4_GPIO_Port, LED7_4_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_5_GPIO_Port, LED7_5_Pin, GPIO_PIN_SET) ;
			HAL_GPIO_WritePin ( LED7_6_GPIO_Port, LED7_6_Pin, GPIO_PIN_SET) ;
			HAL_GPIO_WritePin ( LED7_7_GPIO_Port, LED7_7_Pin, GPIO_PIN_RESET) ;
		}
	else if (num == 4)
		{
			HAL_GPIO_WritePin ( LED7_1_GPIO_Port, LED7_1_Pin, GPIO_PIN_SET) ;
			HAL_GPIO_WritePin ( LED7_2_GPIO_Port, LED7_2_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_3_GPIO_Port, LED7_3_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_4_GPIO_Port, LED7_4_Pin, GPIO_PIN_SET) ;
			HAL_GPIO_WritePin ( LED7_5_GPIO_Port, LED7_5_Pin, GPIO_PIN_SET) ;
			HAL_GPIO_WritePin ( LED7_6_GPIO_Port, LED7_6_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_7_GPIO_Port, LED7_7_Pin, GPIO_PIN_RESET) ;
		}
	else if (num == 5)
		{
			HAL_GPIO_WritePin ( LED7_1_GPIO_Port, LED7_1_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_2_GPIO_Port, LED7_2_Pin, GPIO_PIN_SET) ;
			HAL_GPIO_WritePin ( LED7_3_GPIO_Port, LED7_3_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_4_GPIO_Port, LED7_4_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_5_GPIO_Port, LED7_5_Pin, GPIO_PIN_SET) ;
			HAL_GPIO_WritePin ( LED7_6_GPIO_Port, LED7_6_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_7_GPIO_Port, LED7_7_Pin, GPIO_PIN_RESET) ;
		}
	else if (num == 6)
			{
				HAL_GPIO_WritePin ( LED7_1_GPIO_Port, LED7_1_Pin, GPIO_PIN_RESET) ;
				HAL_GPIO_WritePin ( LED7_2_GPIO_Port, LED7_2_Pin, GPIO_PIN_SET) ;
				HAL_GPIO_WritePin ( LED7_3_GPIO_Port, LED7_3_Pin, GPIO_PIN_RESET) ;
				HAL_GPIO_WritePin ( LED7_4_GPIO_Port, LED7_4_Pin, GPIO_PIN_RESET) ;
				HAL_GPIO_WritePin ( LED7_5_GPIO_Port, LED7_5_Pin, GPIO_PIN_RESET) ;
				HAL_GPIO_WritePin ( LED7_6_GPIO_Port, LED7_6_Pin, GPIO_PIN_RESET) ;
				HAL_GPIO_WritePin ( LED7_7_GPIO_Port, LED7_7_Pin, GPIO_PIN_RESET) ;
			}
	else if (num == 7)
		{
			HAL_GPIO_WritePin ( LED7_1_GPIO_Port, LED7_1_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_2_GPIO_Port, LED7_2_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_3_GPIO_Port, LED7_3_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_4_GPIO_Port, LED7_4_Pin, GPIO_PIN_SET) ;
			HAL_GPIO_WritePin ( LED7_5_GPIO_Port, LED7_5_Pin, GPIO_PIN_SET) ;
			HAL_GPIO_WritePin ( LED7_6_GPIO_Port, LED7_6_Pin, GPIO_PIN_SET) ;
			HAL_GPIO_WritePin ( LED7_7_GPIO_Port, LED7_7_Pin, GPIO_PIN_SET) ;
		}
	else if (num == 8)
		{
			HAL_GPIO_WritePin ( LED7_1_GPIO_Port, LED7_1_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_2_GPIO_Port, LED7_2_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_3_GPIO_Port, LED7_3_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_4_GPIO_Port, LED7_4_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_5_GPIO_Port, LED7_5_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_6_GPIO_Port, LED7_6_Pin, GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( LED7_7_GPIO_Port, LED7_7_Pin, GPIO_PIN_RESET) ;
		}
	else if (num == 9)
			{
				HAL_GPIO_WritePin ( LED7_1_GPIO_Port, LED7_1_Pin, GPIO_PIN_RESET) ;
				HAL_GPIO_WritePin ( LED7_2_GPIO_Port, LED7_2_Pin, GPIO_PIN_RESET) ;
				HAL_GPIO_WritePin ( LED7_3_GPIO_Port, LED7_3_Pin, GPIO_PIN_RESET) ;
				HAL_GPIO_WritePin ( LED7_4_GPIO_Port, LED7_4_Pin, GPIO_PIN_RESET) ;
				HAL_GPIO_WritePin ( LED7_5_GPIO_Port, LED7_5_Pin, GPIO_PIN_SET) ;
				HAL_GPIO_WritePin ( LED7_6_GPIO_Port, LED7_6_Pin, GPIO_PIN_RESET) ;
				HAL_GPIO_WritePin ( LED7_7_GPIO_Port, LED7_7_Pin, GPIO_PIN_RESET) ;
			}

}
;


void fsm_simple_button_run(){
	display7SEG(counter);
	if (isButton1Pressed())
		{
		HAL_GPIO_TogglePin(RED_GPIO_Port, RED_Pin);
		counter = 0 ;
		setTimer1(100);
		}
	if (isButton2Pressed())
		{
		HAL_GPIO_TogglePin(RED_GPIO_Port, RED_Pin);
			counter++;
			if (counter>=10)
				{
				counter = 0;
				}
			status = INC;
			setTimer1(100);
		}
	if (isButton3Pressed())
		{
		HAL_GPIO_TogglePin(RED_GPIO_Port, RED_Pin);
			counter--;
			if (counter<0)
				counter = 9;
			status = DEC;
			setTimer1(100);
		}
	switch(status){
		case INIT:
			status = NONE;
			setTimer1(100);
			break;
		case INC:
			if (timer1_flag == 1)
				{
				status = NONE;
				setTimer1(100);
				}
			break;
		case DEC:
			if (timer1_flag == 1)
				{
				status = NONE;
				setTimer1(100);
				}
			break;
		case NONE:
			if (timer1_flag == 1)
			{
				counter--;
			}
			break;
		}

	if (timer1_flag == 1)
		{
		HAL_GPIO_TogglePin(RED_GPIO_Port, RED_Pin);
		if (counter<0)
			{
			counter = 0;
			}
		status = NONE;
		setTimer1(100);
		}

}
;
