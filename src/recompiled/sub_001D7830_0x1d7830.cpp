#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D7830
// Address: 0x1d7830 - 0x1d78b0
void sub_001D7830_0x1d7830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7830_0x1d7830");
#endif

    ctx->pc = 0x1d7830u;

    // 0x1d7830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7834: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d7834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d783c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d783cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7840: 0xc44102a4  lwc1        $f1, 0x2A4($v0)
    ctx->pc = 0x1d7840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7844: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d7844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7848: 0x0  nop
    ctx->pc = 0x1d7848u;
    // NOP
    // 0x1d784c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1D784Cu;
    {
        const bool branch_taken_0x1d784c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D7850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D784Cu;
            // 0x1d7850: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d784c) {
            ctx->pc = 0x1D78A4u;
            goto label_1d78a4;
        }
    }
    ctx->pc = 0x1D7854u;
    // 0x1d7854: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1d7854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1d7858: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d7858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d785c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d785cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7860: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1D7860u;
    {
        const bool branch_taken_0x1d7860 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7860) {
            ctx->pc = 0x1D78A4u;
            goto label_1d78a4;
        }
    }
    ctx->pc = 0x1D7868u;
    // 0x1d7868: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1d7868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1d786c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1d786cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1d7870: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d7870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7874: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d7874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7878: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1D7878u;
    {
        const bool branch_taken_0x1d7878 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7878) {
            ctx->pc = 0x1D78A4u;
            goto label_1d78a4;
        }
    }
    ctx->pc = 0x1D7880u;
    // 0x1d7880: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1d7880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1d7884: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d7884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d7888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d7888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d788c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d788cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7890: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7890u;
    {
        const bool branch_taken_0x1d7890 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7890) {
            ctx->pc = 0x1D78A4u;
            goto label_1d78a4;
        }
    }
    ctx->pc = 0x1D7898u;
    // 0x1d7898: 0xc076cbc  jal         func_1DB2F0
    ctx->pc = 0x1D7898u;
    SET_GPR_U32(ctx, 31, 0x1D78A0u);
    ctx->pc = 0x1D789Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7898u;
            // 0x1d789c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB2F0u;
    if (runtime->hasFunction(0x1DB2F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D78A0u; }
        if (ctx->pc != 0x1D78A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB2F0_0x1db2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D78A0u; }
        if (ctx->pc != 0x1D78A0u) { return; }
    }
    ctx->pc = 0x1D78A0u;
    // 0x1d78a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d78a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d78a4:
    // 0x1d78a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D78A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D78A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78A4u;
            // 0x1d78a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D78A4u: goto label_1d78a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D78ACu;
    // 0x1d78ac: 0x0  nop
    ctx->pc = 0x1d78acu;
    // NOP
}
