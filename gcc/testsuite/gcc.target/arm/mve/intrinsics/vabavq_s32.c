/* { dg-do compile  } */
/* { dg-require-effective-target arm_v8_1m_mve_ok } */
/* { dg-add-options arm_v8_1m_mve } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

uint32_t
foo (uint32_t a, int32x4_t b, int32x4_t c)
{
  return vabavq_s32 (a, b, c);
}

/* { dg-final { scan-assembler "vabav.s32"  }  } */

uint32_t
foo1 (uint32_t a, int32x4_t b, int32x4_t c)
{
  return vabavq (a, b, c);
}

/* { dg-final { scan-assembler "vabav.s32"  }  } */
