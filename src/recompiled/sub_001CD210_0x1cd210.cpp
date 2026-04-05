#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CD210
// Address: 0x1cd210 - 0x1cd308
void sub_001CD210_0x1cd210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD210_0x1cd210");
#endif

    ctx->pc = 0x1cd210u;

    // 0x1cd210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cd210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cd214: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cd214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd218: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1cd218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1cd21c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1cd21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1cd220: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cd220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cd224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cd228: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1cd228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1cd22c: 0x84440044  lh          $a0, 0x44($v0)
    ctx->pc = 0x1cd22cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1cd230: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD230u;
    {
        const bool branch_taken_0x1cd230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CD234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD230u;
            // 0x1cd234: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd230) {
            ctx->pc = 0x1CD240u;
            goto label_1cd240;
        }
    }
    ctx->pc = 0x1CD238u;
    // 0x1cd238: 0x5482002f  bnel        $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CD238u;
    {
        const bool branch_taken_0x1cd238 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cd238) {
            ctx->pc = 0x1CD23Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD238u;
            // 0x1cd23c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD2F8u;
            goto label_1cd2f8;
        }
    }
    ctx->pc = 0x1CD240u;
label_1cd240:
    // 0x1cd240: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x1cd240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd244: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1cd244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cd248: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1cd248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd24c: 0x0  nop
    ctx->pc = 0x1cd24cu;
    // NOP
    // 0x1cd250: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x1CD250u;
    {
        const bool branch_taken_0x1cd250 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD250u;
            // 0x1cd254: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd250) {
            ctx->pc = 0x1CD2F4u;
            goto label_1cd2f4;
        }
    }
    ctx->pc = 0x1CD258u;
    // 0x1cd258: 0xc620c658  lwc1        $f0, -0x39A8($s1)
    ctx->pc = 0x1cd258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd25c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cd25cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cd260: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1cd260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd264: 0x0  nop
    ctx->pc = 0x1cd264u;
    // NOP
    // 0x1cd268: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x1CD268u;
    {
        const bool branch_taken_0x1cd268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD268u;
            // 0x1cd26c: 0xe6000060  swc1        $f0, 0x60($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd268) {
            ctx->pc = 0x1CD2F4u;
            goto label_1cd2f4;
        }
    }
    ctx->pc = 0x1CD270u;
    // 0x1cd270: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cd270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd274: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cd274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cd278: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cd278u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cd27c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cd280: 0x40f809  jalr        $v0
    ctx->pc = 0x1CD280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD288u);
        ctx->pc = 0x1CD284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD280u;
            // 0x1cd284: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD288u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD240u: goto label_1cd240;
            case 0x1CD2ACu: goto label_1cd2ac;
            case 0x1CD2F0u: goto label_1cd2f0;
            case 0x1CD2F4u: goto label_1cd2f4;
            case 0x1CD2F8u: goto label_1cd2f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD288u; }
            if (ctx->pc != 0x1CD288u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD288u;
    // 0x1cd288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd28c: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1cd28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1cd290: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD290u;
    {
        const bool branch_taken_0x1cd290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD290u;
            // 0x1cd294: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd290) {
            ctx->pc = 0x1CD2ACu;
            goto label_1cd2ac;
        }
    }
    ctx->pc = 0x1CD298u;
    // 0x1cd298: 0xc090d56  jal         func_243558
    ctx->pc = 0x1CD298u;
    SET_GPR_U32(ctx, 31, 0x1CD2A0u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2A0u; }
        if (ctx->pc != 0x1CD2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2A0u; }
        if (ctx->pc != 0x1CD2A0u) { return; }
    }
    ctx->pc = 0x1CD2A0u;
    // 0x1cd2a0: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1cd2a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1cd2a4: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x1cd2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x1cd2a8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1cd2a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1cd2ac:
    // 0x1cd2ac: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CD2ACu;
    {
        const bool branch_taken_0x1cd2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2ACu;
            // 0x1cd2b0: 0xc620c658  lwc1        $f0, -0x39A8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd2ac) {
            ctx->pc = 0x1CD2F0u;
            goto label_1cd2f0;
        }
    }
    ctx->pc = 0x1CD2B4u;
    // 0x1cd2b4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1cd2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1cd2b8: 0x240203f4  addiu       $v0, $zero, 0x3F4
    ctx->pc = 0x1cd2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
    // 0x1cd2bc: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x1cd2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cd2c0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1cd2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1cd2c4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cd2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1cd2c8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1cd2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1cd2cc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1cd2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1cd2d0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1cd2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1cd2d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cd2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd2d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cd2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2dc: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1cd2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1cd2e0: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1CD2E0u;
    SET_GPR_U32(ctx, 31, 0x1CD2E8u);
    ctx->pc = 0x1CD2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2E0u;
            // 0x1cd2e4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2E8u; }
        if (ctx->pc != 0x1CD2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2E8u; }
        if (ctx->pc != 0x1CD2E8u) { return; }
    }
    ctx->pc = 0x1CD2E8u;
    // 0x1cd2e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD2E8u;
    {
        const bool branch_taken_0x1cd2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2E8u;
            // 0x1cd2ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd2e8) {
            ctx->pc = 0x1CD2F8u;
            goto label_1cd2f8;
        }
    }
    ctx->pc = 0x1CD2F0u;
label_1cd2f0:
    // 0x1cd2f0: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x1cd2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_1cd2f4:
    // 0x1cd2f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1cd2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cd2f8:
    // 0x1cd2f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1cd2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd2fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cd2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd300: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD300u;
            // 0x1cd304: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD240u: goto label_1cd240;
            case 0x1CD2ACu: goto label_1cd2ac;
            case 0x1CD2F0u: goto label_1cd2f0;
            case 0x1CD2F4u: goto label_1cd2f4;
            case 0x1CD2F8u: goto label_1cd2f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CD308u;
}
