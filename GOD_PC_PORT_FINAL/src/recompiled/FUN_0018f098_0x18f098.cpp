#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0018f098
// Address: 0x18f098 - 0x18f0b0
void FUN_0018f098_0x18f098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f098_0x18f098");
#endif

    ctx->pc = 0x18f098u;

    // 0x18f098: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x18f098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x18f09c: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x18f09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x18f0a0: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x18f0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x18f0a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18f0a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f0a8: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x18f0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x18f0ac: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x18f0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
}
