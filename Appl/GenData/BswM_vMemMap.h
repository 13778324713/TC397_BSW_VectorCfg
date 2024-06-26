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
 *            Module: BswM
 *           Program: MSR_Vector_SLP4
 *          Customer: Huizhou Desay SV Automotive Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397 
 *    License Scope : The usage is restricted to CBD1900005_D02
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: BswM_vMemMap.h
 *   Generation Time: 2024-04-24 17:50:18
 *           Project: TC387BSW_VCTR - Version 1.1
 *          Delivery: CBD1900005_D02
 *      Tool Version: DaVinci Configurator  5.19.50 SP3
 *
 *       Description: This File is a template for the MemMap.h 
 *                    This file has to be extended with the memory section defines required for your module.
 *
 *********************************************************************************************************************/




/**********************************************************************************************************************
 *   BSWM START
 **********************************************************************************************************************/

# define MEMMAP_ERROR

/*****************  CODE sections   **********************************************************************************/  

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BSWM_START_SEC_CODE>
 *********************************************************************************************************************/
#ifdef  BSWM_START_SEC_CODE
  #undef BSWM_START_SEC_CODE   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define START_SEC_CODE
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BSWM_STOP_SEC_CODE>
 *********************************************************************************************************************/
#ifdef  BSWM_STOP_SEC_CODE
  #undef BSWM_STOP_SEC_CODE   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define STOP_SEC_CODE
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/*****************  CONST sections   *********************************************************************************/  

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BSWM_START_SEC_CONST_UNSPECIFIED>
 *********************************************************************************************************************/
#ifdef  BSWM_START_SEC_CONST_UNSPECIFIED
  #undef BSWM_START_SEC_CONST_UNSPECIFIED   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define START_SEC_CONST_UNSPECIFIED
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BSWM_STOP_SEC_CONST_UNSPECIFIED>
 *********************************************************************************************************************/
#ifdef  BSWM_STOP_SEC_CONST_UNSPECIFIED
  #undef BSWM_STOP_SEC_CONST_UNSPECIFIED   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define STOP_SEC_CONST
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/*****************  VAR sections   ***********************************************************************************/  

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BSWM_START_SEC_VAR_NOINIT_16BIT>
 *********************************************************************************************************************/
#ifdef  BSWM_START_SEC_VAR_NOINIT_16BIT
  #undef BSWM_START_SEC_VAR_NOINIT_16BIT   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define START_SEC_VAR_NOINIT_16BIT
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BSWM_START_SEC_VAR_NOINIT_8BIT>
 *********************************************************************************************************************/
#ifdef  BSWM_START_SEC_VAR_NOINIT_8BIT
  #undef BSWM_START_SEC_VAR_NOINIT_8BIT   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define START_SEC_VAR_NOINIT_8BIT
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED>
 *********************************************************************************************************************/
#ifdef  BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
  #undef BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BSWM_STOP_SEC_VAR_NOINIT_16BIT>
 *********************************************************************************************************************/
#ifdef  BSWM_STOP_SEC_VAR_NOINIT_16BIT
  #undef BSWM_STOP_SEC_VAR_NOINIT_16BIT   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define STOP_SEC_VAR
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BSWM_STOP_SEC_VAR_NOINIT_8BIT>
 *********************************************************************************************************************/
#ifdef  BSWM_STOP_SEC_VAR_NOINIT_8BIT
  #undef BSWM_STOP_SEC_VAR_NOINIT_8BIT   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define STOP_SEC_VAR
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED>
 *********************************************************************************************************************/
#ifdef  BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
  #undef BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define STOP_SEC_VAR
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

#include "MemMap_Common.h"
/**********************************************************************************************************************
 *   BSWM END
 **********************************************************************************************************************/



