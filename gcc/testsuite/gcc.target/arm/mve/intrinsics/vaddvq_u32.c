/* { dg-do compile  } */
/* { dg-require-effective-target arm_v8_1m_mve_ok } */
/* { dg-add-options arm_v8_1m_mve } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

uint32_t
foo (uint32x4_t a)
{
    return vaddvq_u32 (a);
}

/* { dg-final { scan-assembler "vaddv.u32"  }  } */

uint32_t
foo1 (uint32x4_t a)
{
    return vaddvq (a);
}

/* { dg-final { scan-assembler "vaddv.u32"  }  } */
