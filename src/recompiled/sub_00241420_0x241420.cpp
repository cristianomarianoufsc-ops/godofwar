#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00241420
// Address: 0x241420 - 0x241458
void sub_00241420_0x241420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241420_0x241420");
#endif

    ctx->pc = 0x241420u;

    // 0x241420: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x241420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x241424: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x241424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x241428: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x241428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x24142c: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x24142cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x241430: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x241430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x241434: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x241434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x241438: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x241438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x24143c: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x24143cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    // 0x241440: 0xe7ac0038  swc1        $f12, 0x38($sp)
    ctx->pc = 0x241440u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x241444: 0xe7ae003c  swc1        $f14, 0x3C($sp)
    ctx->pc = 0x241444u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x241448: 0xe7b00040  swc1        $f16, 0x40($sp)
    ctx->pc = 0x241448u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24144c: 0xe7b20044  swc1        $f18, 0x44($sp)
    ctx->pc = 0x24144cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x241450: 0x3e00008  jr          $ra
    ctx->pc = 0x241450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241450u;
            // 0x241454: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241458u;
}
