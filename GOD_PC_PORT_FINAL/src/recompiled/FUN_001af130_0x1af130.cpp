#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001af130
// Address: 0x1af130 - 0x1af144
void FUN_001af130_0x1af130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af130_0x1af130");
#endif

    ctx->pc = 0x1af130u;

    // 0x1af130: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1af130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1af134: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1af134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1af138: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1af138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1af13c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x1af13cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af140: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1af140u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
}
