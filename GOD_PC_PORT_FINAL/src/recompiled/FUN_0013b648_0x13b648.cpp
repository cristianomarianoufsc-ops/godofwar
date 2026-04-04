#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0013b648
// Address: 0x13b648 - 0x13b668
void FUN_0013b648_0x13b648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013b648_0x13b648");
#endif

    ctx->pc = 0x13b648u;

    // 0x13b648: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x13b648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x13b64c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x13b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x13b650: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x13b650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x13b654: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13b654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b658: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x13b658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x13b65c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13b65cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b660: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x13b660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x13b664: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13b664u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
