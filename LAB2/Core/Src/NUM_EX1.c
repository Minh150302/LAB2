///*
// * NUM_EX1.c
// *
// *  Created on: Oct 8, 2023
// *      Author: Huy Minh
// */
//
//#include "NUM_EX1.h"
//
//void EX1_RUN(){
//	switch(EN_STATUS){
//	case INIT:
//		EN_STATUS = NUM2;
//		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
//		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
//		display7SEG(1);
//	case NUM1:
//		display7SEG(1);
//		if(timer1_flag == 1){
//			  HAL_GPIO_TogglePin(EN0_GPIO_Port, EN0_Pin);
//			  HAL_GPIO_TogglePin(EN1_GPIO_Port, EN1_Pin);
//			  setTimer1(50);
//			  EN_STATUS = NUM2;
//		}
//	case NUM2:
//		display7SEG(2);
//		if(timer1_flag == 1){
//			  HAL_GPIO_TogglePin(EN0_GPIO_Port, EN0_Pin);
//			  HAL_GPIO_TogglePin(EN1_GPIO_Port, EN1_Pin);
//			  setTimer1(50);
//			  EN_STATUS = NUM2;
//		}
//
//	default:
//
//		break;
//	}
//}
