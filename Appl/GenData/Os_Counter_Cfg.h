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
 *              File: Os_Counter_Cfg.h
 *   Generation Time: 2024-04-25 18:21:31
 *           Project: TC387BSW_VCTR - Version 1.1
 *          Delivery: CBD1900005_D02
 *      Tool Version: DaVinci Configurator  5.19.50 SP3
 *
 *
 *********************************************************************************************************************/

#ifndef OS_COUNTER_CFG_H 
# define OS_COUNTER_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! Defines whether any counter uses SW increment (STD_ON) or not (STD_OFF) */
# define OS_CFG_COUNTER_SW_USED                  (STD_OFF)

/*! Defines whether any counter uses PIT (STD_ON) or not (STD_OFF) */
# define OS_CFG_COUNTER_PIT_USED                 (STD_OFF)

/*! Defines whether any counter uses High Resolution (STD_ON) or not (STD_OFF) */
# define OS_CFG_COUNTER_HRT_USED                 (STD_OFF)

/*! Defines whether any counter uses FRT as PIT (STD_ON) or not (STD_OFF) */
# define OS_CFG_COUNTER_PFRT_USED                (STD_ON)

/*! Number of counter jobs: SystemTimer */
# define OS_CFG_NUM_COUNTER_SYSTEMTIMER_JOBS     (2uL)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_COUNTER_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Counter_Cfg.h
 *********************************************************************************************************************/
