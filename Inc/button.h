/*
 * button.h
 *
 *  Created on: Nov 4, 2022
 *      Author: PC
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "global.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

int isButton1Pressed();

void getKeyInput1();

int isButton2Pressed();

void getKeyInput2();

int isButton3Pressed();

void getKeyInput3();

#endif /* INC_BUTTON_H_ */
