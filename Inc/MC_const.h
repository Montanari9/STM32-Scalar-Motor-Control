/******************** (C) COPYRIGHT 2007 STMicroelectronics ********************
* File Name          : MC_const.h
* Author             : IMS Systems Lab 
* Date First Issued  : 11/28/2007
* Description        : provides constants shared by all modules
********************************************************************************
* History:
* 11/28/07 v1.0
* 05/29/08 v2.0
********************************************************************************
* THE PRESENT SOFTWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
* AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH SOFTWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*
* THIS SOURCE CODE IS PROTECTED BY A LICENSE.
* FOR MORE INFORMATION PLEASE CAREFULLY READ THE LICENSE AGREEMENT FILE LOCATED
* IN THE ROOT DIRECTORY OF THIS FIRMWARE PACKAGE.
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MC_CONST_H
#define __MC_CONST_H

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

#define divSQRT_3	(int16_t) 0x49E6    /* 1/sqrt(3) in q1.15 format=0.5773315*/
#define OFFSET 		64	/* Offset for cos(Theta)=sin_cos_Table[index_sin+offset]*/
#define SQRT_3		1.732051
#define PI          3.1416

//to be deleted if not used by anyone
#define q0dot5            ((int16_t) 0x4000)       		//0.5 in 1.5
#define qSqrtd2           ((int16_t) 0x6ED9) 			//sqrt3/2 in 1.15
#define	qSqrt_inverse            0x5A11		        //sqrt(3)* Vdc_invT
#define	qSqrtd2_inverse          0x2D0f		        //(sqrt(3))/2* Vdc_invT
#define	q3d2_inverse             0x4E0C			    //3/2* Vdc_invT

#define CLOSED_LOOP             (uint32_t)0x01
#define FIRST_TIME_ALIGNMENT    (uint32_t)0x02
#define SPEED_FEEDBACK          (uint32_t)0x04
#define SPEED_FDBK_TIMED_OUT    (uint32_t)0x08

#define OVERHEAT                (uint32_t)0x100
#define OVER_CURRENT            (uint32_t)0x200
#define OVER_VOLTAGE            (uint32_t)0x400
#define UNDER_VOLTAGE           (uint32_t)0x800

#define TURN_ON                 (uint8_t)0x01
#define TURN_POT                (uint8_t)0x02
#define TURN_OFF                (uint8_t)0x03

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
/* Exported variables ------------------------------------------------------- */

#define SIN_COS_TABLE {0x0000,0x0324,0x0648,0x096A,0x0C8C,0x0FAB,0x12C8,0x15E2,\
0x18F9,0x1C0B,0x1F1A,0x2223,0x2528,0x2826,0x2B1F,0x2E11,0x30FB,0x33DF,0x36BA,\
0x398C,0x3C56,0x3F17,0x41CE,0x447A,0x471C,0x49B4,0x4C3F,0x4EBF,0x5133,0x539B,\
0x55F5,0x5842,0x5A82,0x5CB3,0x5ED7,0x60EB,0x62F1,0x64E8,0x66CF,0x68A6,0x6A6D,\
0x6C23,0x6DC9,0x6F5E,0x70E2,0x7254,0x73B5,0x7504,0x7641,0x776B,0x7884,0x7989,\
0x7A7C,0x7B5C,0x7C29,0x7CE3,0x7D89,0x7E1D,0x7E9C,0x7F09,0x7F61,0x7FA6,0x7FD8,\
0x7FF5,0x7FFF,0x7FF5,0x7FD8,0x7FA6,0x7F61,0x7F09,0x7E9C,0x7E1D,0x7D89,0x7CE3,\
0x7C29,0x7B5C,0x7A7C,0x7989,0x7884,0x776B,0x7641,0x7504,0x73B5,0x7254,0x70E2,\
0x6F5E,0x6DC9,0x6C23,0x6A6D,0x68A6,0x66CF,0x64E8,0x62F1,0x60EB,0x5ED7,0x5CB3,\
0x5A82,0x5842,0x55F5,0x539B,0x5133,0x4EBF,0x4C3F,0x49B4,0x471C,0x447A,0x41CE,\
0x3F17,0x3C56,0x398C,0x36BA,0x33DF,0x30FB,0x2E11,0x2B1F,0x2826,0x2528,0x2223,\
0x1F1A,0x1C0B,0x18F9,0x15E2,0x12C8,0x0FAB,0x0C8C,0x096A,0x0648,0x0324,0x0000,\
0xFCDC,0xF9B8,0xF696,0xF374,0xF055,0xED38,0xEA1E,0xE707,0xE3F5,0xE0E6,0xDDDD,\
0xDAD8,0xD7DA,0xD4E1,0xD1EF,0xCF05,0xCC21,0xC946,0xC674,0xC3AA,0xC0E9,0xBE32,\
0xBB86,0xB8E4,0xB64C,0xB3C1,0xB141,0xAECD,0xAC65,0xAA0B,0xA7BE,0xA57E,0xA34D,\
0xA129,0x9F15,0x9D0F,0x9B18,0x9931,0x975A,0x9593,0x93DD,0x9237,0x90A2,0x8F1E,\
0x8DAC,0x8C4B,0x8AFC,0x89BF,0x8895,0x877C,0x8677,0x8584,0x84A4,0x83D7,0x831D,\
0x8277,0x81E3,0x8164,0x80F7,0x809F,0x805A,0x8028,0x800B,0x8001,0x800B,0x8028,\
0x805A,0x809F,0x80F7,0x8164,0x81E3,0x8277,0x831D,0x83D7,0x84A4,0x8584,0x8677,\
0x877C,0x8895,0x89BF,0x8AFC,0x8C4B,0x8DAC,0x8F1E,0x90A2,0x9237,0x93DD,0x9593,\
0x975A,0x9931,0x9B18,0x9D0F,0x9F15,0xA129,0xA34D,0xA57E,0xA7BE,0xAA0B,0xAC65,\
0xAECD,0xB141,0xB3C1,0xB64C,0xB8E4,0xBB86,0xBE32,0xC0E9,0xC3AA,0xC674,0xC946,\
0xCC21,0xCF05,0xD1EF,0xD4E1,0xD7DA,0xDAD8,0xDDDD,0xE0E6,0xE3F5,0xE707,0xEA1E,\
0xED38,0xF055,0xF374,0xF696,0xF9B8,0xFCDC}

#endif /* __MC_CONST_H */
/******************* (C) COPYRIGHT 2007 STMicroelectronics *****END OF FILE****/
