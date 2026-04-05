#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023AE80
// Address: 0x23ae80 - 0x23afd0
void sub_0023AE80_0x23ae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AE80_0x23ae80");
#endif

    ctx->pc = 0x23ae80u;

    // 0x23ae80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23ae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23ae84: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23ae88: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23ae88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23ae8c: 0x2442fa28  addiu       $v0, $v0, -0x5D8
    ctx->pc = 0x23ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965800));
    // 0x23ae90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23ae90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae94: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23ae94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23ae98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23ae98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23ae9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ae9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23aea0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23aea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aea4: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x23aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x23aea8: 0xc045d1c  jal         func_117470
    ctx->pc = 0x23AEA8u;
    SET_GPR_U32(ctx, 31, 0x23AEB0u);
    ctx->pc = 0x23AEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AEA8u;
            // 0x23aeac: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117470u;
    if (runtime->hasFunction(0x117470u)) {
        auto targetFn = runtime->lookupFunction(0x117470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AEB0u; }
        if (ctx->pc != 0x23AEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117470_0x117470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AEB0u; }
        if (ctx->pc != 0x23AEB0u) { return; }
    }
    ctx->pc = 0x23AEB0u;
    // 0x23aeb0: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x23aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x23aeb4: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x23aeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x23aeb8: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x23AEB8u;
    {
        const bool branch_taken_0x23aeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x23AEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AEB8u;
            // 0x23aebc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aeb8) {
            ctx->pc = 0x23AEECu;
            goto label_23aeec;
        }
    }
    ctx->pc = 0x23AEC0u;
    // 0x23aec0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x23aec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23aec4: 0x0  nop
    ctx->pc = 0x23aec4u;
    // NOP
label_23aec8:
    // 0x23aec8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23aecc: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x23aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x23aed0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23aed4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23AED4u;
    SET_GPR_U32(ctx, 31, 0x23AEDCu);
    ctx->pc = 0x23AED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AED4u;
            // 0x23aed8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AEDCu; }
        if (ctx->pc != 0x23AEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AEDCu; }
        if (ctx->pc != 0x23AEDCu) { return; }
    }
    ctx->pc = 0x23AEDCu;
    // 0x23aedc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23aee0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aee4: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23AEE4u;
    {
        const bool branch_taken_0x23aee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23AEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AEE4u;
            // 0x23aee8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aee4) {
            ctx->pc = 0x23AEC8u;
            runtime->cooperativeGuestYield();
            goto label_23aec8;
        }
    }
    ctx->pc = 0x23AEECu;
label_23aeec:
    // 0x23aeec: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x23aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x23aef0: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x23aef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x23aef4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AEF4u;
    {
        const bool branch_taken_0x23aef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AEF4u;
            // 0x23aef8: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aef4) {
            ctx->pc = 0x23AF04u;
            goto label_23af04;
        }
    }
    ctx->pc = 0x23AEFCu;
    // 0x23aefc: 0xc08ebf6  jal         func_23AFD8
    ctx->pc = 0x23AEFCu;
    SET_GPR_U32(ctx, 31, 0x23AF04u);
    ctx->pc = 0x23AF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AEFCu;
            // 0x23af00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AFD8u;
    if (runtime->hasFunction(0x23AFD8u)) {
        auto targetFn = runtime->lookupFunction(0x23AFD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AF04u; }
        if (ctx->pc != 0x23AF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23afd8_0x23afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AF04u; }
        if (ctx->pc != 0x23AF04u) { return; }
    }
    ctx->pc = 0x23AF04u;
label_23af04:
    // 0x23af04: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23af04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23af08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23af08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23af0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23af0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23af10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23af10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23af14: 0x3e00008  jr          $ra
    ctx->pc = 0x23AF14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF14u;
            // 0x23af18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23AEC8u: goto label_23aec8;
            case 0x23AEECu: goto label_23aeec;
            case 0x23AF04u: goto label_23af04;
            case 0x23AFB4u: goto label_23afb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23AF1Cu;
    // 0x23af1c: 0x0  nop
    ctx->pc = 0x23af1cu;
    // NOP
    // 0x23af20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23af20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23af24: 0x0  nop
    ctx->pc = 0x23af24u;
    // NOP
    // 0x23af28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23af28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23af2c: 0x0  nop
    ctx->pc = 0x23af2cu;
    // NOP
    // 0x23af30: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x23af30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x23af34: 0x0  nop
    ctx->pc = 0x23af34u;
    // NOP
    // 0x23af38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23af38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23af3c: 0x0  nop
    ctx->pc = 0x23af3cu;
    // NOP
    // 0x23af40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23af40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23af44: 0x0  nop
    ctx->pc = 0x23af44u;
    // NOP
    // 0x23af48: 0x3e00008  jr          $ra
    ctx->pc = 0x23AF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23AEC8u: goto label_23aec8;
            case 0x23AEECu: goto label_23aeec;
            case 0x23AF04u: goto label_23af04;
            case 0x23AFB4u: goto label_23afb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23AF50u;
    // 0x23af50: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x23af50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x23af54: 0x0  nop
    ctx->pc = 0x23af54u;
    // NOP
    // 0x23af58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23af58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23af5c: 0x0  nop
    ctx->pc = 0x23af5cu;
    // NOP
    // 0x23af60: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x23af60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x23af64: 0x4600013  bltz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x23AF64u;
    {
        const bool branch_taken_0x23af64 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x23AF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF64u;
            // 0x23af68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af64) {
            ctx->pc = 0x23AFB4u;
            goto label_23afb4;
        }
    }
    ctx->pc = 0x23AF6Cu;
    // 0x23af6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23af6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23af70: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x23af70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23af74: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x23AF74u;
    {
        const bool branch_taken_0x23af74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23af74) {
            ctx->pc = 0x23AFB4u;
            goto label_23afb4;
        }
    }
    ctx->pc = 0x23AF7Cu;
    // 0x23af7c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x23af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x23af80: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x23AF80u;
    {
        const bool branch_taken_0x23af80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23af80) {
            ctx->pc = 0x23AF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF80u;
            // 0x23af84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AFB4u;
            goto label_23afb4;
        }
    }
    ctx->pc = 0x23AF88u;
    // 0x23af88: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x23af88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23af8c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x23af8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23af90: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x23af90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23af94: 0x0  nop
    ctx->pc = 0x23af94u;
    // NOP
    // 0x23af98: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x23AF98u;
    {
        const bool branch_taken_0x23af98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23af98) {
            ctx->pc = 0x23AF9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF98u;
            // 0x23af9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AFB4u;
            goto label_23afb4;
        }
    }
    ctx->pc = 0x23AFA0u;
    // 0x23afa0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x23afa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23afa4: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x23afa4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23afa8: 0x0  nop
    ctx->pc = 0x23afa8u;
    // NOP
    // 0x23afac: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x23AFACu;
    {
        const bool branch_taken_0x23afac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23afac) {
            ctx->pc = 0x23AFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AFACu;
            // 0x23afb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AFB4u;
            goto label_23afb4;
        }
    }
    ctx->pc = 0x23AFB4u;
label_23afb4:
    // 0x23afb4: 0x3e00008  jr          $ra
    ctx->pc = 0x23AFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AFB4u;
            // 0x23afb8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23AEC8u: goto label_23aec8;
            case 0x23AEECu: goto label_23aeec;
            case 0x23AF04u: goto label_23af04;
            case 0x23AFB4u: goto label_23afb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23AFBCu;
    // 0x23afbc: 0x0  nop
    ctx->pc = 0x23afbcu;
    // NOP
    // 0x23afc0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x23afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x23afc4: 0x3e00008  jr          $ra
    ctx->pc = 0x23AFC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AFC4u;
            // 0x23afc8: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23AEC8u: goto label_23aec8;
            case 0x23AEECu: goto label_23aeec;
            case 0x23AF04u: goto label_23af04;
            case 0x23AFB4u: goto label_23afb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23AFCCu;
    // 0x23afcc: 0x0  nop
    ctx->pc = 0x23afccu;
    // NOP
}
