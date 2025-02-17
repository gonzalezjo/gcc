/* { dg-do compile  } */
/* { dg-require-effective-target arm_v8_1m_mve_ok } */
/* { dg-add-options arm_v8_1m_mve } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

int16_t
foo (int16_t a, int16x8_t b)
{
  return vminvq_s16 (a, b);
}

/* { dg-final { scan-assembler "vminv.s16"  }  } */

int16_t
foo1 (int16_t a, int16x8_t b)
{
  return vminvq (a, b);
}

/* { dg-final { scan-assembler "vminv.s16"  }  } */
