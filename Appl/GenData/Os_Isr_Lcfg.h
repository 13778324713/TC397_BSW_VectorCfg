/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Os
 *           Program: MSR_Vector_SLP4
 *          Customer: Huizhou Desay SV Automotive Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397 
 *    License Scope : The usage is restricted to CBD1900005_D02
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Isr_Lcfg.h
 *   Generation Time: 2024-04-25 18:21:31
 *           Project: TC387BSW_VCTR - Version 1.1
 *          Delivery: CBD1900005_D02
 *      Tool Version: DaVinci Configurator  5.19.50 SP3
 *
 *
 *********************************************************************************************************************/

#ifndef OS_ISR_LCFG_H
# define OS_ISR_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Isr_Types.h"

/* Os kernel module dependencies */
# include "Os_Lcfg.h"
# include "Os_Timer_Types.h"
# include "Os_XSignal_Types.h"

/* Os hal dependencies */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! ISR configuration data: CounterIsr_SystemTimer */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_CounterIsr_SystemTimer_HwConfig;
extern CONST(Os_TimerIsrConfigType, OS_CONST) OsCfg_Isr_CounterIsr_SystemTimer;

# define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Object reference table for category 2 ISRs. */
extern CONSTP2CONST(Os_IsrConfigType, OS_CONST, OS_CONST) OsCfg_IsrRefs[OS_ISRID_COUNT + 1];  /* PRQA S 4521 */ /* MD_Os_Rule10.1_4521 */

# define OS_STOP_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_ISR_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Isr_Lcfg.h
 *********************************************************************************************************************/
