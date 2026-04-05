#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0022bf30
// Address: 0x22bf30 - 0x22bf48
void FUN_0022bf30_0x22bf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022bf30_0x22bf30");
#endif

    ctx->pc = 0x22bf30u;

    // 0x22bf30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x22bf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x22bf34: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x22bf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x22bf38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x22bf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x22bf3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22bf3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf40: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x22bf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x22bf44: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22bf44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
