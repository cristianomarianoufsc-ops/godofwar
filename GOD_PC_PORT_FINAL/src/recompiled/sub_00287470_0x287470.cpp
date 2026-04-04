#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00287470
// Address: 0x287470 - 0x2875b8
void sub_00287470_0x287470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287470_0x287470");
#endif

    ctx->pc = 0x287470u;

    // 0x287470: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x287470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x287474: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x287474u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x287478: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x287478u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x28747c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x28747cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x287480: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x287480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x287484: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x287484u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x287488: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x287488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28748c: 0xc0a1eb6  jal         func_287AD8
    ctx->pc = 0x28748Cu;
    SET_GPR_U32(ctx, 31, 0x287494u);
    ctx->pc = 0x287490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28748Cu;
            // 0x287490: 0x3c11002c  lui         $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287AD8u;
    if (runtime->hasFunction(0x287AD8u)) {
        auto targetFn = runtime->lookupFunction(0x287AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287494u; }
        if (ctx->pc != 0x287494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_287ad8_0x287e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287494u; }
        if (ctx->pc != 0x287494u) { return; }
    }
    ctx->pc = 0x287494u;
    // 0x287494: 0x8e3059e0  lw          $s0, 0x59E0($s1)
    ctx->pc = 0x287494u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23008)));
    // 0x287498: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x287498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28749c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28749Cu;
    {
        const bool branch_taken_0x28749c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2874A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28749Cu;
            // 0x2874a0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28749c) {
            ctx->pc = 0x2874C8u;
            goto label_2874c8;
        }
    }
    ctx->pc = 0x2874A4u;
    // 0x2874a4: 0xc0a2460  jal         func_289180
    ctx->pc = 0x2874A4u;
    SET_GPR_U32(ctx, 31, 0x2874ACu);
    ctx->pc = 0x2874A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2874A4u;
            // 0x2874a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289180u;
    if (runtime->hasFunction(0x289180u)) {
        auto targetFn = runtime->lookupFunction(0x289180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2874ACu; }
        if (ctx->pc != 0x2874ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289180_0x2891a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2874ACu; }
        if (ctx->pc != 0x2874ACu) { return; }
    }
    ctx->pc = 0x2874ACu;
    // 0x2874ac: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2874ACu;
    {
        const bool branch_taken_0x2874ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2874B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2874ACu;
            // 0x2874b0: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874ac) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x2874B4u;
    // 0x2874b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2874b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2874b8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2874b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2874bc: 0x0  nop
    ctx->pc = 0x2874bcu;
    // NOP
    // 0x2874c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2874C0u;
    {
        const bool branch_taken_0x2874c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2874C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2874C0u;
            // 0x2874c4: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874c0) {
            ctx->pc = 0x2874D0u;
            goto label_2874d0;
        }
    }
    ctx->pc = 0x2874C8u;
label_2874c8:
    // 0x2874c8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2874C8u;
    {
        const bool branch_taken_0x2874c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2874CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2874C8u;
            // 0x2874cc: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874c8) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x2874D0u;
label_2874d0:
    // 0x2874d0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2874d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2874d4: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2874d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
    // 0x2874d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2874d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2874dc: 0xc0a1510  jal         func_285440
    ctx->pc = 0x2874DCu;
    SET_GPR_U32(ctx, 31, 0x2874E4u);
    ctx->pc = 0x2874E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2874DCu;
            // 0x2874e0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285440u;
    if (runtime->hasFunction(0x285440u)) {
        auto targetFn = runtime->lookupFunction(0x285440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2874E4u; }
        if (ctx->pc != 0x2874E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285440_0x285440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2874E4u; }
        if (ctx->pc != 0x2874E4u) { return; }
    }
    ctx->pc = 0x2874E4u;
    // 0x2874e4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2874e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2874e8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2874E8u;
    {
        const bool branch_taken_0x2874e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2874ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2874E8u;
            // 0x2874ec: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874e8) {
            ctx->pc = 0x287500u;
            goto label_287500;
        }
    }
    ctx->pc = 0x2874F0u;
    // 0x2874f0: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x2874f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x2874f4: 0xdc2255f8  ld          $v0, 0x55F8($at)
    ctx->pc = 0x2874f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 22008)));
    // 0x2874f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2874F8u;
    {
        const bool branch_taken_0x2874f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2874FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2874F8u;
            // 0x2874fc: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874f8) {
            ctx->pc = 0x287514u;
            goto label_287514;
        }
    }
    ctx->pc = 0x287500u;
label_287500:
    // 0x287500: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x287500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x287504: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x287504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287508: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287508u;
    SET_GPR_U32(ctx, 31, 0x287510u);
    ctx->pc = 0x28750Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287508u;
            // 0x28750c: 0xdc4559d8  ld          $a1, 0x59D8($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 23000)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287510u; }
        if (ctx->pc != 0x287510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287510u; }
        if (ctx->pc != 0x287510u) { return; }
    }
    ctx->pc = 0x287510u;
    // 0x287510: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x287510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_287514:
    // 0x287514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x287514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287518: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x287518u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28751c: 0x0  nop
    ctx->pc = 0x28751cu;
    // NOP
    // 0x287520: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x287520u;
    {
        const bool branch_taken_0x287520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287520u;
            // 0x287524: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287520) {
            ctx->pc = 0x287544u;
            goto label_287544;
        }
    }
    ctx->pc = 0x287528u;
    // 0x287528: 0x8e2359e0  lw          $v1, 0x59E0($s1)
    ctx->pc = 0x287528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23008)));
    // 0x28752c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28752Cu;
    {
        const bool branch_taken_0x28752c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x287530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28752Cu;
            // 0x287530: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28752c) {
            ctx->pc = 0x287558u;
            goto label_287558;
        }
    }
    ctx->pc = 0x287534u;
    // 0x287534: 0xc0a247c  jal         func_2891F0
    ctx->pc = 0x287534u;
    SET_GPR_U32(ctx, 31, 0x28753Cu);
    ctx->pc = 0x2891F0u;
    if (runtime->hasFunction(0x2891F0u)) {
        auto targetFn = runtime->lookupFunction(0x2891F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28753Cu; }
        if (ctx->pc != 0x28753Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2891f0_0x289200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28753Cu; }
        if (ctx->pc != 0x28753Cu) { return; }
    }
    ctx->pc = 0x28753Cu;
    // 0x28753c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28753Cu;
    {
        const bool branch_taken_0x28753c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28753Cu;
            // 0x287540: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28753c) {
            ctx->pc = 0x287574u;
            goto label_287574;
        }
    }
    ctx->pc = 0x287544u;
label_287544:
    // 0x287544: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x287544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287548: 0x8e2259e0  lw          $v0, 0x59E0($s1)
    ctx->pc = 0x287548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23008)));
    // 0x28754c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x28754cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287550: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287550u;
    {
        const bool branch_taken_0x287550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x287554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287550u;
            // 0x287554: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287550) {
            ctx->pc = 0x287568u;
            goto label_287568;
        }
    }
    ctx->pc = 0x287558u;
label_287558:
    // 0x287558: 0xc0a23e8  jal         func_288FA0
    ctx->pc = 0x287558u;
    SET_GPR_U32(ctx, 31, 0x287560u);
    ctx->pc = 0x28755Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287558u;
            // 0x28755c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288FA0u;
    if (runtime->hasFunction(0x288FA0u)) {
        auto targetFn = runtime->lookupFunction(0x288FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287560u; }
        if (ctx->pc != 0x287560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288FA0_0x288fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287560u; }
        if (ctx->pc != 0x287560u) { return; }
    }
    ctx->pc = 0x287560u;
    // 0x287560: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287560u;
    {
        const bool branch_taken_0x287560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287560u;
            // 0x287564: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287560) {
            ctx->pc = 0x28757Cu;
            goto label_28757c;
        }
    }
    ctx->pc = 0x287568u;
label_287568:
    // 0x287568: 0xc0a247c  jal         func_2891F0
    ctx->pc = 0x287568u;
    SET_GPR_U32(ctx, 31, 0x287570u);
    ctx->pc = 0x2891F0u;
    if (runtime->hasFunction(0x2891F0u)) {
        auto targetFn = runtime->lookupFunction(0x2891F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287570u; }
        if (ctx->pc != 0x287570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2891f0_0x289200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287570u; }
        if (ctx->pc != 0x287570u) { return; }
    }
    ctx->pc = 0x287570u;
    // 0x287570: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x287570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_287574:
    // 0x287574: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x287574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x287578: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x287578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_28757c:
    // 0x28757c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28757Cu;
    {
        const bool branch_taken_0x28757c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28757c) {
            ctx->pc = 0x287594u;
            goto label_287594;
        }
    }
    ctx->pc = 0x287584u;
    // 0x287584: 0xc0a247c  jal         func_2891F0
    ctx->pc = 0x287584u;
    SET_GPR_U32(ctx, 31, 0x28758Cu);
    ctx->pc = 0x2891F0u;
    if (runtime->hasFunction(0x2891F0u)) {
        auto targetFn = runtime->lookupFunction(0x2891F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28758Cu; }
        if (ctx->pc != 0x28758Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2891f0_0x289200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28758Cu; }
        if (ctx->pc != 0x28758Cu) { return; }
    }
    ctx->pc = 0x28758Cu;
    // 0x28758c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28758cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287590: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x287590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_287594:
    // 0x287594: 0xc0a1454  jal         func_285150
    ctx->pc = 0x287594u;
    SET_GPR_U32(ctx, 31, 0x28759Cu);
    ctx->pc = 0x287598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287594u;
            // 0x287598: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285150u;
    if (runtime->hasFunction(0x285150u)) {
        auto targetFn = runtime->lookupFunction(0x285150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28759Cu; }
        if (ctx->pc != 0x28759Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285150_0x285150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28759Cu; }
        if (ctx->pc != 0x28759Cu) { return; }
    }
    ctx->pc = 0x28759Cu;
label_28759c:
    // 0x28759c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28759cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2875a0: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2875a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2875a4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2875a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2875a8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2875a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2875ac: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2875acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2875b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2875B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2875B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2875B0u;
            // 0x2875b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2874C8u: goto label_2874c8;
            case 0x2874D0u: goto label_2874d0;
            case 0x287500u: goto label_287500;
            case 0x287514u: goto label_287514;
            case 0x287544u: goto label_287544;
            case 0x287558u: goto label_287558;
            case 0x287568u: goto label_287568;
            case 0x287574u: goto label_287574;
            case 0x28757Cu: goto label_28757c;
            case 0x287594u: goto label_287594;
            case 0x28759Cu: goto label_28759c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2875B8u;
}
