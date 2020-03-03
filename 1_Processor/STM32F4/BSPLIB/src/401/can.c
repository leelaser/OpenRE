/***********************************************************************************************************************
* Copyright (c) Hands Free Team. All rights reserved.
* Contact:  QQ Exchange Group -- 521037187
*
* LICENSING TERMS:
* The Hands Free is licensed generally under a permissive 3-clause BSD license.
* Contributions are requiredto be made under the same license.
*
* History: 
* <author>      <time>      <version>      <desc>
* mawenke       2015.10.1   V1.0           creat this file
*
* Description: 
***********************************************************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif 

#include "can.h"
#include "nvic.h"

/***********************************************************************************************************************
* Function:     void HF_CAN_Init(CAN_TypeDef *CANx , uint8_t GPIO_AF)
*
* Scope:        public
*
* Description:  CAN initialization
*
* Arguments:
*
* Return:
*
* Cpu_Time:  
*
* History:
***********************************************************************************************************************/
void HF_CAN_Init(uint8_t CAN_Channel , uint8_t GPIO_AF)
{

}	

/***********************************************************************************************************************
* Function:     void Can_Tx_Message(void)
*
* Scope:        public
*
* Description:  CAN Send one Message
*
* Arguments:
*
* Return:
*
* Cpu_Time:  
*
* History:
***********************************************************************************************************************/
void HF_CANTX_Message(uint8_t CAN_Channel , uint8_t StdId  , uint8_t ExtId  ,  uint8_t *TxBuf , uint8_t Length)
{   

}

#ifdef __cplusplus
}
#endif

