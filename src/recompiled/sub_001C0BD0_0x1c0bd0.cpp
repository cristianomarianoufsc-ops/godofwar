#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0BD0
// Address: 0x1c0bd0 - 0x1c0d90
void sub_001C0BD0_0x1c0bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0BD0_0x1c0bd0");
#endif

    ctx->pc = 0x1c0bd0u;

label_1c0bd0:
    // 0x1c0bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c0bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c0bd4: 0x46006086  mov.s       $f2, $f12
    ctx->pc = 0x1c0bd4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
    // 0x1c0bd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c0bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c0bdc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c0bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c0be0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0be4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0be8: 0xc441ccc4  lwc1        $f1, -0x333C($v0)
    ctx->pc = 0x1c0be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0bec: 0xc60c0178  lwc1        $f12, 0x178($s0)
    ctx->pc = 0x1c0becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0bf0: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x1c0bf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x1c0bf4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c0bf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0bf8: 0x0  nop
    ctx->pc = 0x1c0bf8u;
    // NOP
    // 0x1c0bfc: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
    ctx->pc = 0x1C0BFCu;
    {
        const bool branch_taken_0x1c0bfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0bfc) {
            ctx->pc = 0x1C0C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BFCu;
            // 0x1c0c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0C54u;
            goto label_1c0c54;
        }
    }
    ctx->pc = 0x1C0C04u;
    // 0x1c0c04: 0xc0782a6  jal         func_1E0A98
    ctx->pc = 0x1C0C04u;
    SET_GPR_U32(ctx, 31, 0x1C0C0Cu);
    ctx->pc = 0x1C0C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C04u;
            // 0x1c0c08: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A98u;
    if (runtime->hasFunction(0x1E0A98u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C0Cu; }
        if (ctx->pc != 0x1C0C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A98_0x1e0a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C0Cu; }
        if (ctx->pc != 0x1C0C0Cu) { return; }
    }
    ctx->pc = 0x1C0C0Cu;
    // 0x1c0c0c: 0x8e0203e4  lw          $v0, 0x3E4($s0)
    ctx->pc = 0x1c0c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
    // 0x1c0c10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c0c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c0c14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0C14u;
    {
        const bool branch_taken_0x1c0c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C14u;
            // 0x1c0c18: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c14) {
            ctx->pc = 0x1C0C24u;
            goto label_1c0c24;
        }
    }
    ctx->pc = 0x1C0C1Cu;
    // 0x1c0c1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0C1Cu;
    {
        const bool branch_taken_0x1c0c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C1Cu;
            // 0x1c0c20: 0x8445cce4  lh          $a1, -0x331C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c1c) {
            ctx->pc = 0x1C0C2Cu;
            goto label_1c0c2c;
        }
    }
    ctx->pc = 0x1C0C24u;
label_1c0c24:
    // 0x1c0c24: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c0c28: 0x8445ccd8  lh          $a1, -0x3328($v0)
    ctx->pc = 0x1c0c28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954200)));
label_1c0c2c:
    // 0x1c0c2c: 0xae0003e8  sw          $zero, 0x3E8($s0)
    ctx->pc = 0x1c0c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 0));
    // 0x1c0c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c34: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C0C34u;
    SET_GPR_U32(ctx, 31, 0x1C0C3Cu);
    ctx->pc = 0x1C0C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C34u;
            // 0x1c0c38: 0xc60c03e8  lwc1        $f12, 0x3E8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C3Cu; }
        if (ctx->pc != 0x1C0C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C3Cu; }
        if (ctx->pc != 0x1C0C3Cu) { return; }
    }
    ctx->pc = 0x1C0C3Cu;
    // 0x1c0c3c: 0xc06ff7c  jal         func_1BFDF0
    ctx->pc = 0x1C0C3Cu;
    SET_GPR_U32(ctx, 31, 0x1C0C44u);
    ctx->pc = 0x1C0C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C3Cu;
            // 0x1c0c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFDF0u;
    if (runtime->hasFunction(0x1BFDF0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C44u; }
        if (ctx->pc != 0x1C0C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFDF0_0x1bfdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C44u; }
        if (ctx->pc != 0x1C0C44u) { return; }
    }
    ctx->pc = 0x1C0C44u;
    // 0x1c0c44: 0x8e0203e4  lw          $v0, 0x3E4($s0)
    ctx->pc = 0x1c0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
    // 0x1c0c48: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1c0c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1c0c4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0C4Cu;
    {
        const bool branch_taken_0x1c0c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C4Cu;
            // 0x1c0c50: 0xae0203e4  sw          $v0, 0x3E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c4c) {
            ctx->pc = 0x1C0C5Cu;
            goto label_1c0c5c;
        }
    }
    ctx->pc = 0x1C0C54u;
label_1c0c54:
    // 0x1c0c54: 0xc0782a6  jal         func_1E0A98
    ctx->pc = 0x1C0C54u;
    SET_GPR_U32(ctx, 31, 0x1C0C5Cu);
    ctx->pc = 0x1C0C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C54u;
            // 0x1c0c58: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A98u;
    if (runtime->hasFunction(0x1E0A98u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C5Cu; }
        if (ctx->pc != 0x1C0C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A98_0x1e0a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C5Cu; }
        if (ctx->pc != 0x1C0C5Cu) { return; }
    }
    ctx->pc = 0x1C0C5Cu;
label_1c0c5c:
    // 0x1c0c5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c0c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C64u;
            // 0x1c0c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0BD0u: goto label_1c0bd0;
            case 0x1C0C24u: goto label_1c0c24;
            case 0x1C0C2Cu: goto label_1c0c2c;
            case 0x1C0C54u: goto label_1c0c54;
            case 0x1C0C5Cu: goto label_1c0c5c;
            case 0x1C0CACu: goto label_1c0cac;
            case 0x1C0CFCu: goto label_1c0cfc;
            case 0x1C0D3Cu: goto label_1c0d3c;
            case 0x1C0D54u: goto label_1c0d54;
            case 0x1C0D64u: goto label_1c0d64;
            case 0x1C0D74u: goto label_1c0d74;
            case 0x1C0D7Cu: goto label_1c0d7c;
            case 0x1C0D80u: goto label_1c0d80;
            case 0x1C0D84u: goto label_1c0d84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0C6Cu;
    // 0x1c0c6c: 0x0  nop
    ctx->pc = 0x1c0c6cu;
    // NOP
    // 0x1c0c70: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1c0c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1c0c74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0c78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c0c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c0c7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c0c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c0c80: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1c0c80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0c88: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0C88u;
    {
        const bool branch_taken_0x1c0c88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C88u;
            // 0x1c0c8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c88) {
            ctx->pc = 0x1C0CACu;
            goto label_1c0cac;
        }
    }
    ctx->pc = 0x1C0C90u;
    // 0x1c0c90: 0xc07021a  jal         func_1C0868
    ctx->pc = 0x1C0C90u;
    SET_GPR_U32(ctx, 31, 0x1C0C98u);
    ctx->pc = 0x1C0868u;
    if (runtime->hasFunction(0x1C0868u)) {
        auto targetFn = runtime->lookupFunction(0x1C0868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C98u; }
        if (ctx->pc != 0x1C0C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c0868_0x1c0880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C98u; }
        if (ctx->pc != 0x1C0C98u) { return; }
    }
    ctx->pc = 0x1C0C98u;
    // 0x1c0c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c9c: 0xc070364  jal         func_1C0D90
    ctx->pc = 0x1C0C9Cu;
    SET_GPR_U32(ctx, 31, 0x1C0CA4u);
    ctx->pc = 0x1C0CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C9Cu;
            // 0x1c0ca0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0D90u;
    if (runtime->hasFunction(0x1C0D90u)) {
        auto targetFn = runtime->lookupFunction(0x1C0D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CA4u; }
        if (ctx->pc != 0x1C0CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c0d90_0x1c0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CA4u; }
        if (ctx->pc != 0x1C0CA4u) { return; }
    }
    ctx->pc = 0x1C0CA4u;
    // 0x1c0ca4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1C0CA4u;
    {
        const bool branch_taken_0x1c0ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CA4u;
            // 0x1c0ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ca4) {
            ctx->pc = 0x1C0D80u;
            goto label_1c0d80;
        }
    }
    ctx->pc = 0x1C0CACu;
label_1c0cac:
    // 0x1c0cac: 0x3c014479  lui         $at, 0x4479
    ctx->pc = 0x1c0cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17529 << 16));
    // 0x1c0cb0: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x1c0cb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x1c0cb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0cb8: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x1c0cb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0cbc: 0x0  nop
    ctx->pc = 0x1c0cbcu;
    // NOP
    // 0x1c0cc0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1C0CC0u;
    {
        const bool branch_taken_0x1c0cc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CC0u;
            // 0x1c0cc4: 0x8e0203e4  lw          $v0, 0x3E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0cc0) {
            ctx->pc = 0x1C0CFCu;
            goto label_1c0cfc;
        }
    }
    ctx->pc = 0x1C0CC8u;
    // 0x1c0cc8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1c0cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1c0ccc: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C0CCCu;
    {
        const bool branch_taken_0x1c0ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CCCu;
            // 0x1c0cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ccc) {
            ctx->pc = 0x1C0D80u;
            goto label_1c0d80;
        }
    }
    ctx->pc = 0x1C0CD4u;
    // 0x1c0cd4: 0xae0003e8  sw          $zero, 0x3E8($s0)
    ctx->pc = 0x1c0cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 0));
    // 0x1c0cd8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c0cdc: 0x8445cccc  lh          $a1, -0x3334($v0)
    ctx->pc = 0x1c0cdcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954188)));
    // 0x1c0ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ce4: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C0CE4u;
    SET_GPR_U32(ctx, 31, 0x1C0CECu);
    ctx->pc = 0x1C0CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CE4u;
            // 0x1c0ce8: 0xc60c03e8  lwc1        $f12, 0x3E8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CECu; }
        if (ctx->pc != 0x1C0CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CECu; }
        if (ctx->pc != 0x1C0CECu) { return; }
    }
    ctx->pc = 0x1C0CECu;
    // 0x1c0cec: 0xc06ff7c  jal         func_1BFDF0
    ctx->pc = 0x1C0CECu;
    SET_GPR_U32(ctx, 31, 0x1C0CF4u);
    ctx->pc = 0x1C0CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CECu;
            // 0x1c0cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFDF0u;
    if (runtime->hasFunction(0x1BFDF0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CF4u; }
        if (ctx->pc != 0x1C0CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFDF0_0x1bfdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CF4u; }
        if (ctx->pc != 0x1C0CF4u) { return; }
    }
    ctx->pc = 0x1C0CF4u;
    // 0x1c0cf4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1C0CF4u;
    {
        const bool branch_taken_0x1c0cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CF4u;
            // 0x1c0cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0cf4) {
            ctx->pc = 0x1C0D80u;
            goto label_1c0d80;
        }
    }
    ctx->pc = 0x1C0CFCu;
label_1c0cfc:
    // 0x1c0cfc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c0cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c0d00: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C0D00u;
    {
        const bool branch_taken_0x1c0d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D00u;
            // 0x1c0d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d00) {
            ctx->pc = 0x1C0D80u;
            goto label_1c0d80;
        }
    }
    ctx->pc = 0x1C0D08u;
    // 0x1c0d08: 0xc6000370  lwc1        $f0, 0x370($s0)
    ctx->pc = 0x1c0d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0d0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0d10: 0x8e030374  lw          $v1, 0x374($s0)
    ctx->pc = 0x1c0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x1c0d14: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1c0d14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1c0d18: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C0D18u;
    {
        const bool branch_taken_0x1c0d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D18u;
            // 0x1c0d1c: 0xe6000370  swc1        $f0, 0x370($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d18) {
            ctx->pc = 0x1C0D54u;
            goto label_1c0d54;
        }
    }
    ctx->pc = 0x1C0D20u;
    // 0x1c0d20: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1c0d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c0d24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0D24u;
    {
        const bool branch_taken_0x1c0d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D24u;
            // 0x1c0d28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d24) {
            ctx->pc = 0x1C0D3Cu;
            goto label_1c0d3c;
        }
    }
    ctx->pc = 0x1C0D2Cu;
    // 0x1c0d2c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0D2Cu;
    {
        const bool branch_taken_0x1c0d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D2Cu;
            // 0x1c0d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d2c) {
            ctx->pc = 0x1C0D54u;
            goto label_1c0d54;
        }
    }
    ctx->pc = 0x1C0D34u;
    // 0x1c0d34: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C0D34u;
    {
        const bool branch_taken_0x1c0d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D34u;
            // 0x1c0d38: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d34) {
            ctx->pc = 0x1C0D84u;
            goto label_1c0d84;
        }
    }
    ctx->pc = 0x1C0D3Cu;
label_1c0d3c:
    // 0x1c0d3c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0D3Cu;
    {
        const bool branch_taken_0x1c0d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D3Cu;
            // 0x1c0d40: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d3c) {
            ctx->pc = 0x1C0D64u;
            goto label_1c0d64;
        }
    }
    ctx->pc = 0x1C0D44u;
    // 0x1c0d44: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0D44u;
    {
        const bool branch_taken_0x1c0d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D44u;
            // 0x1c0d48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d44) {
            ctx->pc = 0x1C0D74u;
            goto label_1c0d74;
        }
    }
    ctx->pc = 0x1C0D4Cu;
    // 0x1c0d4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C0D4Cu;
    {
        const bool branch_taken_0x1c0d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D4Cu;
            // 0x1c0d50: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d4c) {
            ctx->pc = 0x1C0D84u;
            goto label_1c0d84;
        }
    }
    ctx->pc = 0x1C0D54u;
label_1c0d54:
    // 0x1c0d54: 0xc070254  jal         func_1C0950
    ctx->pc = 0x1C0D54u;
    SET_GPR_U32(ctx, 31, 0x1C0D5Cu);
    ctx->pc = 0x1C0D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D54u;
            // 0x1c0d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0950u;
    if (runtime->hasFunction(0x1C0950u)) {
        auto targetFn = runtime->lookupFunction(0x1C0950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0D5Cu; }
        if (ctx->pc != 0x1C0D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0950_0x1c0950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0D5Cu; }
        if (ctx->pc != 0x1C0D5Cu) { return; }
    }
    ctx->pc = 0x1C0D5Cu;
    // 0x1c0d5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0D5Cu;
    {
        const bool branch_taken_0x1c0d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D5Cu;
            // 0x1c0d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d5c) {
            ctx->pc = 0x1C0D80u;
            goto label_1c0d80;
        }
    }
    ctx->pc = 0x1C0D64u;
label_1c0d64:
    // 0x1c0d64: 0xc0702ac  jal         func_1C0AB0
    ctx->pc = 0x1C0D64u;
    SET_GPR_U32(ctx, 31, 0x1C0D6Cu);
    ctx->pc = 0x1C0D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D64u;
            // 0x1c0d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0AB0u;
    if (runtime->hasFunction(0x1C0AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1C0AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0D6Cu; }
        if (ctx->pc != 0x1C0D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0AB0_0x1c0ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0D6Cu; }
        if (ctx->pc != 0x1C0D6Cu) { return; }
    }
    ctx->pc = 0x1C0D6Cu;
    // 0x1c0d6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0D6Cu;
    {
        const bool branch_taken_0x1c0d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D6Cu;
            // 0x1c0d70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d6c) {
            ctx->pc = 0x1C0D80u;
            goto label_1c0d80;
        }
    }
    ctx->pc = 0x1C0D74u;
label_1c0d74:
    // 0x1c0d74: 0xc0702f4  jal         func_1C0BD0
    ctx->pc = 0x1C0D74u;
    SET_GPR_U32(ctx, 31, 0x1C0D7Cu);
    ctx->pc = 0x1C0D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D74u;
            // 0x1c0d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0BD0u;
    runtime->cooperativeGuestYield();
    goto label_1c0bd0;
    ctx->pc = 0x1C0D7Cu;
label_1c0d7c:
    // 0x1c0d7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0d80:
    // 0x1c0d80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c0d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0d84:
    // 0x1c0d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0d88: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D88u;
            // 0x1c0d8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0BD0u: goto label_1c0bd0;
            case 0x1C0C24u: goto label_1c0c24;
            case 0x1C0C2Cu: goto label_1c0c2c;
            case 0x1C0C54u: goto label_1c0c54;
            case 0x1C0C5Cu: goto label_1c0c5c;
            case 0x1C0CACu: goto label_1c0cac;
            case 0x1C0CFCu: goto label_1c0cfc;
            case 0x1C0D3Cu: goto label_1c0d3c;
            case 0x1C0D54u: goto label_1c0d54;
            case 0x1C0D64u: goto label_1c0d64;
            case 0x1C0D74u: goto label_1c0d74;
            case 0x1C0D7Cu: goto label_1c0d7c;
            case 0x1C0D80u: goto label_1c0d80;
            case 0x1C0D84u: goto label_1c0d84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0D90u;
}
