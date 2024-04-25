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
 *              File: Os_Link_Core0_Stacks.lsl
 *   Generation Time: 2024-04-25 18:21:31
 *           Project: TC387BSW_VCTR - Version 1.1
 *          Delivery: CBD1900005_D02
 *      Tool Version: DaVinci Configurator  5.19.50 SP3
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  STACK SECTIONS
 *********************************************************************************************************************/

#if defined ( OS_LINK_KERNEL_STACKS )
group OS_CORE0_STACKS_GROUP(ordered, contiguous, fill)
{

/* Stack: OsCore0_Error (1024 Byte) */
group OS_STACK_OSCORE0_ERROR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
{
  select "[.]bss.OS_STACK_OSCORE0_ERROR_VAR_NOINIT";
}
"_OS_STACK_OSCORE0_ERROR_VAR_NOINIT_START" = "_lc_gb_OS_STACK_OSCORE0_ERROR_VAR_NOINIT_GROUP";
"_OS_STACK_OSCORE0_ERROR_VAR_NOINIT_END" = "_lc_ge_OS_STACK_OSCORE0_ERROR_VAR_NOINIT_GROUP" - 1;
"_OS_STACK_OSCORE0_ERROR_VAR_NOINIT_LIMIT" = "_lc_ge_OS_STACK_OSCORE0_ERROR_VAR_NOINIT_GROUP";

/* Stack: OsCore0_Init (1024 Byte) */
group OS_STACK_OSCORE0_INIT_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
{
  select "[.]bss.OS_STACK_OSCORE0_INIT_VAR_NOINIT";
}
"_OS_STACK_OSCORE0_INIT_VAR_NOINIT_START" = "_lc_gb_OS_STACK_OSCORE0_INIT_VAR_NOINIT_GROUP";
"_OS_STACK_OSCORE0_INIT_VAR_NOINIT_END" = "_lc_ge_OS_STACK_OSCORE0_INIT_VAR_NOINIT_GROUP" - 1;
"_OS_STACK_OSCORE0_INIT_VAR_NOINIT_LIMIT" = "_lc_ge_OS_STACK_OSCORE0_INIT_VAR_NOINIT_GROUP";

/* Stack: OsCore0_Isr_Core (1024 Byte) */
group OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
{
  select "[.]bss.OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT";
}
"_OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_START" = "_lc_gb_OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_GROUP";
"_OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_END" = "_lc_ge_OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_GROUP" - 1;
"_OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_LIMIT" = "_lc_ge_OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_GROUP";

/* Stack: OsCore0_Kernel (1024 Byte) */
group OS_STACK_OSCORE0_KERNEL_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
{
  select "[.]bss.OS_STACK_OSCORE0_KERNEL_VAR_NOINIT";
}
"_OS_STACK_OSCORE0_KERNEL_VAR_NOINIT_START" = "_lc_gb_OS_STACK_OSCORE0_KERNEL_VAR_NOINIT_GROUP";
"_OS_STACK_OSCORE0_KERNEL_VAR_NOINIT_END" = "_lc_ge_OS_STACK_OSCORE0_KERNEL_VAR_NOINIT_GROUP" - 1;
"_OS_STACK_OSCORE0_KERNEL_VAR_NOINIT_LIMIT" = "_lc_ge_OS_STACK_OSCORE0_KERNEL_VAR_NOINIT_GROUP";

/* Stack: OsCore0_Task_Prio15 (1024 Byte) */
group OS_STACK_OSCORE0_TASK_PRIO15_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
{
  select "[.]bss.OS_STACK_OSCORE0_TASK_PRIO15_VAR_NOINIT";
}
"_OS_STACK_OSCORE0_TASK_PRIO15_VAR_NOINIT_START" = "_lc_gb_OS_STACK_OSCORE0_TASK_PRIO15_VAR_NOINIT_GROUP";
"_OS_STACK_OSCORE0_TASK_PRIO15_VAR_NOINIT_END" = "_lc_ge_OS_STACK_OSCORE0_TASK_PRIO15_VAR_NOINIT_GROUP" - 1;
"_OS_STACK_OSCORE0_TASK_PRIO15_VAR_NOINIT_LIMIT" = "_lc_ge_OS_STACK_OSCORE0_TASK_PRIO15_VAR_NOINIT_GROUP";

/* Stack: OsCore0_Task_Prio4294967295 (1024 Byte) */
group OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
{
  select "[.]bss.OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT";
}
"_OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_START" = "_lc_gb_OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_GROUP";
"_OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_END" = "_lc_ge_OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_GROUP" - 1;
"_OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_LIMIT" = "_lc_ge_OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_GROUP";

} /* OS_CORE0_STACKS_GROUP */
"_OS_CORE0_STACKS_START" = "_lc_gb_OS_CORE0_STACKS_GROUP";
"_OS_CORE0_STACKS_END" = "_lc_ge_OS_CORE0_STACKS_GROUP" - 1;
"_OS_CORE0_STACKS_LIMIT" = "_lc_ge_OS_CORE0_STACKS_GROUP";
"_OS_CORE0_STACKS_END_ALIAS" = (("_lc_ge_OS_CORE0_STACKS_GROUP")&~0xF0000000)|0xD0000000;
"_OS_CORE0_STACKS_LIMIT_ALIAS" = (("_lc_ge_OS_CORE0_STACKS_GROUP")&~0xF0000000)|0xD0000000;

#endif

#ifdef OS_LINK_KERNEL_STACKS
# undef OS_LINK_KERNEL_STACKS
#endif


