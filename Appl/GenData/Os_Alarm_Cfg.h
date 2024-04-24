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
 *              File: Os_Alarm_Cfg.h
 *   Generation Time: 2024-04-24 20:24:38
 *           Project: TC387BSW_VCTR - Version 1.1
 *          Delivery: CBD1900005_D02
 *      Tool Version: DaVinci Configurator  5.19.50 SP3
 *
 *
 *********************************************************************************************************************/

#ifndef OS_ALARM_CFG_H
# define OS_ALARM_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! Defines whether any alarm has a Callback action (STD_ON) or not (STD_OFF) */
# define OS_CFG_ALARM_CALLBACK_USED                     (STD_OFF)

/*! Defines whether any alarm has an ActivateTask action (STD_ON) or not (STD_OFF) */
# define OS_CFG_ALARM_ACTIVATETASK_USED                 (STD_ON)

/*! Defines whether any alarm has a SetEvent action (STD_ON) or not (STD_OFF) */
# define OS_CFG_ALARM_SETEVENT_USED                     (STD_OFF)

/*! Defines whether any alarm has an IncrementCounter action (STD_ON) or not (STD_OFF) */
# define OS_CFG_ALARM_INCREMENTCOUNTER_USED             (STD_OFF)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_ALARM_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Alarm_Cfg.h
 *********************************************************************************************************************/
