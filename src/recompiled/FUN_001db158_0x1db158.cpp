#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001db158
// Address: 0x1db158 - 0x1db164
void FUN_001db158_0x1db158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001db158_0x1db158");
#endif

    ctx->pc = 0x1db158u;

    // 0x1db158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1db158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1db15c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db160: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1db160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
