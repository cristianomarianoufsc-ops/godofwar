#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001af898
// Address: 0x1af898 - 0x1af8a8
void FUN_001af898_0x1af898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af898_0x1af898");
#endif

    ctx->pc = 0x1af898u;

    // 0x1af898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af89c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1af89cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1af8a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af8a4: 0x24a3ffdf  addiu       $v1, $a1, -0x21
    ctx->pc = 0x1af8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967263));
}
