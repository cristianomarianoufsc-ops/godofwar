#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_117438
// Address: 0x117438 - 0x117450
void entry_117438_0x117450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_117438_0x117450");
#endif

    ctx->pc = 0x117438u;

    // 0x117438: 0xe48c0034  swc1        $f12, 0x34($a0)
    ctx->pc = 0x117438u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x11743c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x11743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x117440: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x117440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x117444: 0x3e00008  jr          $ra
    ctx->pc = 0x117444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117444u;
            // 0x117448: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11744Cu;
    // 0x11744c: 0x0  nop
    ctx->pc = 0x11744cu;
    // NOP
}
