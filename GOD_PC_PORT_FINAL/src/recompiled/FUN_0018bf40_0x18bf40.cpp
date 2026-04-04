#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0018bf40
// Address: 0x18bf40 - 0x18bf60
void FUN_0018bf40_0x18bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018bf40_0x18bf40");
#endif

    ctx->pc = 0x18bf40u;

    // 0x18bf40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18bf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18bf44: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x18bf48: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18bf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18bf4c: 0x24429b68  addiu       $v0, $v0, -0x6498
    ctx->pc = 0x18bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941544));
    // 0x18bf50: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18bf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18bf54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18bf54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf58: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x18bf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x18bf5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18bf5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
}
