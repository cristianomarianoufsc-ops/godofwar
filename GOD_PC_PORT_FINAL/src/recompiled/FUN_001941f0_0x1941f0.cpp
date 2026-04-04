#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001941f0
// Address: 0x1941f0 - 0x1941fc
void FUN_001941f0_0x1941f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001941f0_0x1941f0");
#endif

    ctx->pc = 0x1941f0u;

    // 0x1941f0: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x1941f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
    // 0x1941f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1941f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1941f8: 0x7fb20440  sq          $s2, 0x440($sp)
    ctx->pc = 0x1941f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 18));
}
