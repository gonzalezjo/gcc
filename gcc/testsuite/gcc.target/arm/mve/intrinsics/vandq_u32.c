/* { dg-do compile  } */
/* { dg-require-effective-target arm_v8_1m_mve_ok } */
/* { dg-add-options arm_v8_1m_mve } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

uint32x4_t
foo (uint32x4_t a, uint32x4_t b)
{
  return vandq_u32 (a, b);
}

/* { dg-final { scan-assembler "vand"  }  } */

uint32x4_t
foo1 (uint32x4_t a, uint32x4_t b)
{
  return vandq (a, b);
}

/* { dg-final { scan-assembler "vand"  }  } */
