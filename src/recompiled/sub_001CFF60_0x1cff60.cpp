#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CFF60
// Address: 0x1cff60 - 0x1d0048
void sub_001CFF60_0x1cff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFF60_0x1cff60");
#endif

    ctx->pc = 0x1cff60u;

    // 0x1cff60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cff64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cff64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cff68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1cff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1cff6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cff6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cff70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cff74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cff74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff78: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1cff7c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1cff7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cff80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cff84: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cff84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cff88: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cff8c: 0x40f809  jalr        $v0
    ctx->pc = 0x1CFF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CFF94u);
        ctx->pc = 0x1CFF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF8Cu;
            // 0x1cff90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CFF94u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFFF0u: goto label_1cfff0;
            case 0x1D0028u: goto label_1d0028;
            case 0x1D002Cu: goto label_1d002c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF94u; }
            if (ctx->pc != 0x1CFF94u) { return; }
        }
        }
    }
    ctx->pc = 0x1CFF94u;
    // 0x1cff94: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1cff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cff98: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1CFF98u;
    {
        const bool branch_taken_0x1cff98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff98) {
            ctx->pc = 0x1CFF9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF98u;
            // 0x1cff9c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0028u;
            goto label_1d0028;
        }
    }
    ctx->pc = 0x1CFFA0u;
    // 0x1cffa0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cffa4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cffa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cffa8: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cffac: 0x40f809  jalr        $v0
    ctx->pc = 0x1CFFACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CFFB4u);
        ctx->pc = 0x1CFFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFFACu;
            // 0x1cffb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CFFB4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFFF0u: goto label_1cfff0;
            case 0x1D0028u: goto label_1d0028;
            case 0x1D002Cu: goto label_1d002c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFB4u; }
            if (ctx->pc != 0x1CFFB4u) { return; }
        }
        }
    }
    ctx->pc = 0x1CFFB4u;
    // 0x1cffb4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x1cffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1cffb8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1cffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1cffbc: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CFFBCu;
    {
        const bool branch_taken_0x1cffbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cffbc) {
            ctx->pc = 0x1CFFC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFFBCu;
            // 0x1cffc0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0028u;
            goto label_1d0028;
        }
    }
    ctx->pc = 0x1CFFC4u;
    // 0x1cffc4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cffc8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cffc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cffcc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cffd0: 0x40f809  jalr        $v0
    ctx->pc = 0x1CFFD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CFFD8u);
        ctx->pc = 0x1CFFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFFD0u;
            // 0x1cffd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CFFD8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFFF0u: goto label_1cfff0;
            case 0x1D0028u: goto label_1d0028;
            case 0x1D002Cu: goto label_1d002c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFD8u; }
            if (ctx->pc != 0x1CFFD8u) { return; }
        }
        }
    }
    ctx->pc = 0x1CFFD8u;
    // 0x1cffd8: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1cffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1cffdc: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1cffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1cffe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cffe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cffe4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CFFE4u;
    {
        const bool branch_taken_0x1cffe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFFE4u;
            // 0x1cffe8: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffe4) {
            ctx->pc = 0x1CFFF0u;
            goto label_1cfff0;
        }
    }
    ctx->pc = 0x1CFFECu;
    // 0x1cffec: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1cffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfff0:
    // 0x1cfff0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cfff0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1cfff4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cfff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cfff8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cfff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cfffc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cfffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d0000: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1d0000u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1d0004: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1d0004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1d0008: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1d0008u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1d000c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d000cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d0010: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x1d0010u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x1d0014: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d0014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0018: 0x0  nop
    ctx->pc = 0x1d0018u;
    // NOP
    // 0x1d001c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D001Cu;
    {
        const bool branch_taken_0x1d001c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D001Cu;
            // 0x1d0020: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d001c) {
            ctx->pc = 0x1D002Cu;
            goto label_1d002c;
        }
    }
    ctx->pc = 0x1D0024u;
    // 0x1d0024: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d0024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0028:
    // 0x1d0028: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d0028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d002c:
    // 0x1d002c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d002cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0030: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d0030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0034: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d0034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d003c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D003Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D003Cu;
            // 0x1d0040: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFFF0u: goto label_1cfff0;
            case 0x1D0028u: goto label_1d0028;
            case 0x1D002Cu: goto label_1d002c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D0044u;
    // 0x1d0044: 0x0  nop
    ctx->pc = 0x1d0044u;
    // NOP
}
