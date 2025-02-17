/* { dg-do compile  } */
/* { dg-require-effective-target arm_v8_1m_mve_fp_ok } */
/* { dg-add-options arm_v8_1m_mve_fp } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

int32x4_t
foo (int32x4_t a)
{
  return vabsq_s32 (a);
}

/* { dg-final { scan-assembler "vabs.s32"  }  } */

int32x4_t
foo1 (int32x4_t a)
{
  return vabsq (a);
}

/* { dg-final { scan-assembler "vabs.s32"  }  } */
