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
 *              File: Os_Trace_Cfg.h
 *   Generation Time: 2024-04-24 15:26:32
 *           Project: TC387BSW_VCTR - Version 1.1
 *          Delivery: CBD1900005_D02
 *      Tool Version: DaVinci Configurator  5.19.50 SP3
 *
 *
 *********************************************************************************************************************/

#ifndef OS_TRACE_CFG_H
# define OS_TRACE_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! Defines whether ORTI is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_ORTI                             (STD_OFF)

/*! Defines whether ORTI tracing is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_ORTI_ADDITIONAL                  (STD_OFF)

/*! Defines whether Vector timing hooks are active (STD_ON) or not (STD_OFF). */
# define OS_CFG_OSTIMINGHOOKS                    (STD_OFF)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_TRACE_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Trace_Cfg.h
 *********************************************************************************************************************/