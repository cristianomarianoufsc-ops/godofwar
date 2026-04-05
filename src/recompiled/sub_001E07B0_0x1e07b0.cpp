#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E07B0
// Address: 0x1e07b0 - 0x1e0870
void sub_001E07B0_0x1e07b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E07B0_0x1e07b0");
#endif

    ctx->pc = 0x1e07b0u;

    // 0x1e07b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e07b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e07b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e07b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e07b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e07b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e07bc: 0x8c8201b8  lw          $v0, 0x1B8($a0)
    ctx->pc = 0x1e07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1e07c0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E07C0u;
    {
        const bool branch_taken_0x1e07c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e07c0) {
            ctx->pc = 0x1E0850u;
            goto label_1e0850;
        }
    }
    ctx->pc = 0x1E07C8u;
    // 0x1e07c8: 0xc48101bc  lwc1        $f1, 0x1BC($a0)
    ctx->pc = 0x1e07c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e07cc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e07ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e07d0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1e07d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e07d4: 0x0  nop
    ctx->pc = 0x1e07d4u;
    // NOP
    // 0x1e07d8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1E07D8u;
    {
        const bool branch_taken_0x1e07d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E07DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07D8u;
            // 0x1e07dc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07d8) {
            ctx->pc = 0x1E0850u;
            goto label_1e0850;
        }
    }
    ctx->pc = 0x1E07E0u;
    // 0x1e07e0: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x1e07e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e07e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e07e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e07e8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1e07e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e07ec: 0x0  nop
    ctx->pc = 0x1e07ecu;
    // NOP
    // 0x1e07f0: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x1E07F0u;
    {
        const bool branch_taken_0x1e07f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E07F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07F0u;
            // 0x1e07f4: 0xe48001bc  swc1        $f0, 0x1BC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07f0) {
            ctx->pc = 0x1E085Cu;
            goto label_1e085c;
        }
    }
    ctx->pc = 0x1E07F8u;
    // 0x1e07f8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e07fc: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1e07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1e0800: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e0800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0804: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e0804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1e0808: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1e0808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1e080c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1e080cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0810: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1e0810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e0814: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1e0814u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1e0818: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1e0818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1e081c: 0x40f809  jalr        $v0
    ctx->pc = 0x1E081Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0824u);
        ctx->pc = 0x1E0820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E081Cu;
            // 0x1e0820: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0824u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0850u: goto label_1e0850;
            case 0x1E085Cu: goto label_1e085c;
            case 0x1E0860u: goto label_1e0860;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0824u; }
            if (ctx->pc != 0x1E0824u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0824u;
    // 0x1e0824: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1e0824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1e0828: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x1e0828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1e082c: 0xc061a06  jal         func_186818
    ctx->pc = 0x1E082Cu;
    SET_GPR_U32(ctx, 31, 0x1E0834u);
    ctx->pc = 0x1E0830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E082Cu;
            // 0x1e0830: 0x24a56d30  addiu       $a1, $a1, 0x6D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186818u;
    if (runtime->hasFunction(0x186818u)) {
        auto targetFn = runtime->lookupFunction(0x186818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0834u; }
        if (ctx->pc != 0x1E0834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186818_0x186818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0834u; }
        if (ctx->pc != 0x1E0834u) { return; }
    }
    ctx->pc = 0x1E0834u;
    // 0x1e0834: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E0834u;
    {
        const bool branch_taken_0x1e0834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0834) {
            ctx->pc = 0x1E0838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0834u;
            // 0x1e0838: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0860u;
            goto label_1e0860;
        }
    }
    ctx->pc = 0x1E083Cu;
    // 0x1e083c: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x1e083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x1e0840: 0xc05c294  jal         func_170A50
    ctx->pc = 0x1E0840u;
    SET_GPR_U32(ctx, 31, 0x1E0848u);
    ctx->pc = 0x1E0844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0840u;
            // 0x1e0844: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0848u; }
        if (ctx->pc != 0x1E0848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0848u; }
        if (ctx->pc != 0x1E0848u) { return; }
    }
    ctx->pc = 0x1E0848u;
    // 0x1e0848: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0848u;
    {
        const bool branch_taken_0x1e0848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E084Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0848u;
            // 0x1e084c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0848) {
            ctx->pc = 0x1E0860u;
            goto label_1e0860;
        }
    }
    ctx->pc = 0x1E0850u;
label_1e0850:
    // 0x1e0850: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1e0850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1e0854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e0854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0858: 0xe48001bc  swc1        $f0, 0x1BC($a0)
    ctx->pc = 0x1e0858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 444), bits); }
label_1e085c:
    // 0x1e085c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e085cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0860:
    // 0x1e0860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0864: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0864u;
            // 0x1e0868: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0850u: goto label_1e0850;
            case 0x1E085Cu: goto label_1e085c;
            case 0x1E0860u: goto label_1e0860;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E086Cu;
    // 0x1e086c: 0x0  nop
    ctx->pc = 0x1e086cu;
    // NOP
}
