#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00121688
// Address: 0x121688 - 0x121698
void FUN_00121688_0x121688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00121688_0x121688");
#endif

    ctx->pc = 0x121688u;

    // 0x121688: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x121688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12168c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x12168cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x121690: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x121690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x121694: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x121694u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
