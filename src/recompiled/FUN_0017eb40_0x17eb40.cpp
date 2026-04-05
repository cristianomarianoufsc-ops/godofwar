#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0017eb40
// Address: 0x17eb40 - 0x17eb50
void FUN_0017eb40_0x17eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017eb40_0x17eb40");
#endif

    ctx->pc = 0x17eb40u;

    // 0x17eb40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17eb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17eb44: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x17eb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x17eb48: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x17eb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x17eb4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17eb4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
