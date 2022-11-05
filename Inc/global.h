/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: PC
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

#define INIT 0
#define RES 1
#define INC 2
#define DEC 3
#define NONE 4

extern int status;
extern int counter;

void fsm_simple_button_run();

#endif /* INC_GLOBAL_H_ */
