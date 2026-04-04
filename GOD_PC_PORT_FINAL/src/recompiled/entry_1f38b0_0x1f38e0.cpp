#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f38b0
// Address: 0x1f38b0 - 0x1f38e0
void entry_1f38b0_0x1f38e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f38b0_0x1f38e0");
#endif

    ctx->pc = 0x1f38b0u;

    // 0x1f38b0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1f38b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f38b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F38B4u;
    {
        const bool branch_taken_0x1f38b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F38B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F38B4u;
            // 0x1f38b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f38b4) {
            ctx->pc = 0x1F38D0u;
            goto label_1f38d0;
        }
    }
    ctx->pc = 0x1F38BCu;
    // 0x1f38bc: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1f38bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f38c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f38c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f38c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f38c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f38c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F38C8u;
    {
        const bool branch_taken_0x1f38c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f38c8) {
            ctx->pc = 0x1F38D4u;
            goto label_1f38d4;
        }
    }
    ctx->pc = 0x1F38D0u;
label_1f38d0:
    // 0x1f38d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f38d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f38d4:
    // 0x1f38d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F38D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F38D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F38D4u;
            // 0x1f38d8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F38D0u: goto label_1f38d0;
            case 0x1F38D4u: goto label_1f38d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F38DCu;
    // 0x1f38dc: 0x0  nop
    ctx->pc = 0x1f38dcu;
    // NOP
}
