/* { dg-do compile  } */
/* { dg-require-effective-target arm_v8_1m_mve_ok } */
/* { dg-add-options arm_v8_1m_mve } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

uint32x4_t
foo (uint64_t a, uint64_t b)
{
  return vcreateq_u32 (a, b);
}

/* { dg-final { scan-assembler "vmov"  }  } */
