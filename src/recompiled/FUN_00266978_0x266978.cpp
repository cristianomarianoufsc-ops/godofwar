#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00266978
// Address: 0x266978 - 0x266988
void FUN_00266978_0x266978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00266978_0x266978");
#endif

    ctx->pc = 0x266978u;

    // 0x266978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x266978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26697c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x26697cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266980: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x266980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x266984: 0x240203f7  addiu       $v0, $zero, 0x3F7
    ctx->pc = 0x266984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
}
