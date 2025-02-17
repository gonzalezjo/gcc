/* { dg-do compile  } */
/* { dg-require-effective-target arm_v8_1m_mve_ok } */
/* { dg-add-options arm_v8_1m_mve } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

uint32x4_t
foo (uint16x8_t a)
{
    return vmovlbq_u16 (a);
}

/* { dg-final { scan-assembler "vmovlb.u16"  }  } */

uint32x4_t
foo1 (uint16x8_t a)
{
    return vmovlbq (a);
}

/* { dg-final { scan-assembler "vmovlb.u16"  }  } */
