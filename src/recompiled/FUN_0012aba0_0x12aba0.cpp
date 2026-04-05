#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0012aba0
// Address: 0x12aba0 - 0x12abb0
void FUN_0012aba0_0x12aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012aba0_0x12aba0");
#endif

    ctx->pc = 0x12aba0u;

    // 0x12aba0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12aba4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x12aba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x12aba8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x12aba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x12abac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x12abacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
