#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00120498
// Address: 0x120498 - 0x1204a4
void FUN_00120498_0x120498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00120498_0x120498");
#endif

    ctx->pc = 0x120498u;

    // 0x120498: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x120498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12049c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12049cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1204a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1204a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
}
