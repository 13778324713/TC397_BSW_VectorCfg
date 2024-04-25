// TASKING VX-toolset for TriCore
// Eclipse project linker script file
//
#if defined(__PROC_TC39X__)
#include "tc39x.lsl"
derivative my_tc39x extends tc39x
{
}
#else
#include <cpu.lsl>
#endif

/* ------------ User action required ------------------------- */
/* Please define which cores are used by your OS configuration */
#define CORE0_IS_ASR
#define CORE1_IS_ASR
#define CORE2_IS_ASR
#define CORE3_IS_ASR
#define CORE4_IS_ASR
#define CORE5_IS_ASR
/* ----------------------------------------------------------- */

section_layout mpe:tc0:linear
{
//  #include "DSPR_Core0.lsl"
//  #include "DSPR_Core1.lsl"
//  #include "DSPR_Core2.lsl"
//  #include "DSPR_Core3.lsl"
//  #include "DSPR_Core4.lsl"
//  #include "DSPR_Core5.lsl"

#if defined(__PROC_TC39XB__)
  group OSCodeConst( run_addr = mem:mpe:pflash1 )
#else
  group OSCodeConst( ordered, run_addr = 0x80110000 )
#endif
  {
    #if defined(CORE0_IS_ASR)
     #define OS_LINK_INTVEC_CODE
     #define OS_LINK_EXCVEC_CODE
     #define OS_LINK_CALLOUT_CODE
     #define OS_LINK_CONST
      #include ".\Appl\GenData\Os_Link_Core0.lsl"
    #endif
    #define OS_LINK_CODE
    #define OS_LINK_CALLOUT_CODE
     #include ".\Appl\GenData\Os_Link.lsl"
  } 
}

memory xram_8_a (tag="on-board")
{
    mau = 8;
    type = ram;
    size = 1M;
    map cached(dest=bus:mpe:sri, dest_offset=0x88000000, size=1M);
    map not_cached(dest=bus:mpe:sri, dest_offset=0xa8000000, size=1M, reserved);
}
