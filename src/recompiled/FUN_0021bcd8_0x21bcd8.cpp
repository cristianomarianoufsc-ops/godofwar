#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0021bcd8
// Address: 0x21bcd8 - 0x21bce8
void FUN_0021bcd8_0x21bcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021bcd8_0x21bcd8");
#endif

    ctx->pc = 0x21bcd8u;

    // 0x21bcd8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x21bcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x21bcdc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21bcdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x21bce0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x21bce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21bce4: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x21bce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
}
