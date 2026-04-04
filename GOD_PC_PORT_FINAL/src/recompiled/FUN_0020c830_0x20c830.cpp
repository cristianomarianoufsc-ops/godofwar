#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0020c830
// Address: 0x20c830 - 0x20c844
void FUN_0020c830_0x20c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020c830_0x20c830");
#endif

    ctx->pc = 0x20c830u;

    // 0x20c830: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20c830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20c834: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20c834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20c838: 0x8c42bde0  lw          $v0, -0x4220($v0)
    ctx->pc = 0x20c838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950368)));
    // 0x20c83c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x20c83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x20c840: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x20c840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
}
