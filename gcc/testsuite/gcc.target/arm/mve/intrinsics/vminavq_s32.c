/* { dg-do compile  } */
/* { dg-require-effective-target arm_v8_1m_mve_ok } */
/* { dg-add-options arm_v8_1m_mve } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

uint32_t
foo (uint32_t a, int32x4_t b)
{
  return vminavq_s32 (a, b);
}

/* { dg-final { scan-assembler "vminav.s32"  }  } */

uint32_t
foo1 (uint32_t a, int32x4_t b)
{
  return vminavq (a, b);
}

/* { dg-final { scan-assembler "vminav.s32"  }  } */
