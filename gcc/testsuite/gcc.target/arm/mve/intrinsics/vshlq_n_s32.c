/* { dg-do compile  } */
/* { dg-require-effective-target arm_v8_1m_mve_ok } */
/* { dg-add-options arm_v8_1m_mve } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

int32x4_t
foo (int32x4_t a)
{
  return vshlq_n_s32 (a, 16);
}

/* { dg-final { scan-assembler "vshl.s32"  }  } */

int32x4_t
foo1 (int32x4_t a)
{
  return vshlq_n (a, 16);
}

/* { dg-final { scan-assembler "vshl.s32"  }  } */
