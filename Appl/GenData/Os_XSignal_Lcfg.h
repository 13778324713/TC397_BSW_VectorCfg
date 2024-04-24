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
 *              File: Os_XSignal_Lcfg.h
 *   Generation Time: 2024-04-24 15:26:32
 *           Project: TC387BSW_VCTR - Version 1.1
 *          Delivery: CBD1900005_D02
 *      Tool Version: DaVinci Configurator  5.19.50 SP3
 *
 *
 *********************************************************************************************************************/

#ifndef OS_XSIGNAL_LCFG_H
# define OS_XSIGNAL_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_XSignal_Types.h"

/* Os kernel module dependencies */
# include "Os_Error_Types.h"
# include "OsInt.h"

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

/*! Cross-core function identifiers. */
typedef enum
{
  /* USED */
  OS_XSIGFUNCTIONIDX_USEDCOUNT = 0,
  /* UNUSED */
  XSigFunctionIdx_ActivateTask = 0,
  XSigFunctionIdx_CancelAlarm = 1,
  XSigFunctionIdx_ControlIdle = 2,
  XSigFunctionIdx_GetAlarm = 3,
  XSigFunctionIdx_GetApplicationState = 4,
  XSigFunctionIdx_GetCounterValue = 5,
  XSigFunctionIdx_GetErrorHookStackUsage = 6,
  XSigFunctionIdx_GetEvent = 7,
  XSigFunctionIdx_GetISRStackUsage = 8,
  XSigFunctionIdx_GetKernelStackUsage = 9,
  XSigFunctionIdx_GetProtectionHookStackUsage = 10,
  XSigFunctionIdx_GetScheduleTableStatus = 11,
  XSigFunctionIdx_GetShutdownHookStackUsage = 12,
  XSigFunctionIdx_GetStartupHookStackUsage = 13,
  XSigFunctionIdx_GetTaskStackUsage = 14,
  XSigFunctionIdx_GetTaskState = 15,
  XSigFunctionIdx_HookCallCallback = 16,
  XSigFunctionIdx_NextScheduleTable = 17,
  XSigFunctionIdx_SetAbsAlarm = 18,
  XSigFunctionIdx_SetEvent = 19,
  XSigFunctionIdx_SetRelAlarm = 20,
  XSigFunctionIdx_ShutdownAllCores = 21,
  XSigFunctionIdx_StartScheduleTableAbs = 22,
  XSigFunctionIdx_StartScheduleTableRel = 23,
  XSigFunctionIdx_StopScheduleTable = 24,
  XSigFunctionIdx_TerminateApplication = 25,
  OS_XSIGFUNCTIONIDX_COUNT = 26
} Os_XSigFunctionIdx;


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! X-Signal used services map. */
extern CONST(OSServiceIdType, OS_CONST) OsCfg_XSig_ServiceMap[OS_XSIGFUNCTIONIDX_USEDCOUNT + 1u];                       /* PRQA S 4521 */ /* MD_Os_Rule10.1_4521 */

# define OS_STOP_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_XSIGNAL_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_XSignal_Lcfg.h
 *********************************************************************************************************************/
