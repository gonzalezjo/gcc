/* { dg-do compile  } */
/* { dg-require-effective-target arm_v8_1m_mve_ok } */
/* { dg-add-options arm_v8_1m_mve } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

uint32x4_t
foo (uint16x8_t a, uint16x8_t b)
{
  return vmullbq_int_u16 (a, b);
}

/* { dg-final { scan-assembler "vmullb.u16"  }  } */

uint32x4_t
foo1 (uint16x8_t a, uint16x8_t b)
{
  return vmullbq_int (a, b);
}

/* { dg-final { scan-assembler "vmullb.u16"  }  } */
