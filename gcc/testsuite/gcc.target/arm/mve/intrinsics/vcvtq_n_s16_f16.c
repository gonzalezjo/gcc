/* { dg-do compile  } */
/* { dg-require-effective-target arm_v8_1m_mve_fp_ok } */
/* { dg-add-options arm_v8_1m_mve_fp } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

int16x8_t
foo (float16x8_t a)
{
  return vcvtq_n_s16_f16 (a, 1);
}

/* { dg-final { scan-assembler "vcvt.s16.f16"  }  } */
