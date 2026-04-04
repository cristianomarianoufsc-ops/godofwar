#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f3f40
// Address: 0x1f3f40 - 0x1f3f70
void entry_1f3f40_0x1f3f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f3f40_0x1f3f70");
#endif

    ctx->pc = 0x1f3f40u;

    // 0x1f3f40: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f3f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f3f44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3f48: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1f3f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1f3f4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f3f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f3f50: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1f3f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1f3f54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3f58: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x1f3f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1f3f5c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1f3f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1f3f60: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x1f3f60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1f3f64: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3F64u;
            // 0x1f3f68: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3F6Cu;
    // 0x1f3f6c: 0x0  nop
    ctx->pc = 0x1f3f6cu;
    // NOP
}
