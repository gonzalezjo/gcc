/* { dg-do compile  } */
/* { dg-require-effective-target arm_v8_1m_mve_ok } */
/* { dg-add-options arm_v8_1m_mve } */
/* { dg-additional-options "-O2" } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

int16x8_t
foo (int16x8_t a, int16_t b)
{
  return vsubq_n_s16 (a, b);
}

/* { dg-final { scan-assembler "vsub.i16"  }  } */

int16x8_t
foo1 (int16x8_t a, int16_t b)
{
  return vsubq (a, b);
}

/* { dg-final { scan-assembler "vsub.i16"  }  } */
