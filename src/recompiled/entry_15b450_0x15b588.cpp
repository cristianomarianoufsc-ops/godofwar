#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_15b450
// Address: 0x15b450 - 0x15b588
void entry_15b450_0x15b588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_15b450_0x15b588");
#endif

    ctx->pc = 0x15b450u;

    // 0x15b450: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15b450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15b454: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15b454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15b458: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15b458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x15b45c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15b45cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b460: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15b460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x15b464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15b464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15b468: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x15b468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15b46c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x15b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15b470: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15b470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b474: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x15B474u;
    {
        const bool branch_taken_0x15b474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15B478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B474u;
            // 0x15b478: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b474) {
            ctx->pc = 0x15B508u;
            goto label_15b508;
        }
    }
    ctx->pc = 0x15B47Cu;
    // 0x15b47c: 0x0  nop
    ctx->pc = 0x15b47cu;
    // NOP
label_15b480:
    // 0x15b480: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x15b480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15b484: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15b484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15b488: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x15b488u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15b48c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x15b48cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b490: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x15B490u;
    {
        const bool branch_taken_0x15b490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B490u;
            // 0x15b494: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b490) {
            ctx->pc = 0x15B4F8u;
            goto label_15b4f8;
        }
    }
    ctx->pc = 0x15B498u;
    // 0x15b498: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x15b498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x15b49c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x15b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x15b4a0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15b4a4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x15b4a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15b4a8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x15B4A8u;
    {
        const bool branch_taken_0x15b4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b4a8) {
            ctx->pc = 0x15B4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B4A8u;
            // 0x15b4ac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B4D8u;
            goto label_15b4d8;
        }
    }
    ctx->pc = 0x15B4B0u;
    // 0x15b4b0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15b4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15b4b4: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x15B4B4u;
    {
        const bool branch_taken_0x15b4b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b4b4) {
            ctx->pc = 0x15B4B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B4B4u;
            // 0x15b4b8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B4D8u;
            goto label_15b4d8;
        }
    }
    ctx->pc = 0x15B4BCu;
    // 0x15b4bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15b4c0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x15b4c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b4c4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x15b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b4c8: 0x40f809  jalr        $v0
    ctx->pc = 0x15B4C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B4D0u);
        ctx->pc = 0x15B4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B4C8u;
            // 0x15b4cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15B4D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B480u: goto label_15b480;
            case 0x15B4D8u: goto label_15b4d8;
            case 0x15B4F8u: goto label_15b4f8;
            case 0x15B508u: goto label_15b508;
            case 0x15B540u: goto label_15b540;
            case 0x15B560u: goto label_15b560;
            case 0x15B570u: goto label_15b570;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15B4D0u; }
            if (ctx->pc != 0x15B4D0u) { return; }
        }
        }
    }
    ctx->pc = 0x15B4D0u;
    // 0x15b4d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15b4d4: 0x0  nop
    ctx->pc = 0x15b4d4u;
    // NOP
label_15b4d8:
    // 0x15b4d8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x15b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15b4dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15b4e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15b4e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15b4e8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x15b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x15b4ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x15b4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x15b4f0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x15b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15b4f4: 0x0  nop
    ctx->pc = 0x15b4f4u;
    // NOP
label_15b4f8:
    // 0x15b4f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b4fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b500: 0x1443ffdf  bne         $v0, $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x15B500u;
    {
        const bool branch_taken_0x15b500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B500u;
            // 0x15b504: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b500) {
            ctx->pc = 0x15B480u;
            runtime->cooperativeGuestYield();
            goto label_15b480;
        }
    }
    ctx->pc = 0x15B508u;
label_15b508:
    // 0x15b508: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x15b508u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15b50c: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x15B50Cu;
    {
        const bool branch_taken_0x15b50c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b50c) {
            ctx->pc = 0x15B510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B50Cu;
            // 0x15b510: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B570u;
            goto label_15b570;
        }
    }
    ctx->pc = 0x15B514u;
    // 0x15b514: 0xc05e394  jal         func_178E50
    ctx->pc = 0x15B514u;
    SET_GPR_U32(ctx, 31, 0x15B51Cu);
    ctx->pc = 0x15B518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B514u;
            // 0x15b518: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178E50u;
    if (runtime->hasFunction(0x178E50u)) {
        auto targetFn = runtime->lookupFunction(0x178E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B51Cu; }
        if (ctx->pc != 0x15B51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_178e50_0x178e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B51Cu; }
        if (ctx->pc != 0x15B51Cu) { return; }
    }
    ctx->pc = 0x15B51Cu;
    // 0x15b51c: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x15b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x15b520: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x15b520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15b524: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15b524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15b528: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x15b528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x15b52c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x15b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x15b530: 0x5050000b  beql        $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x15B530u;
    {
        const bool branch_taken_0x15b530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x15b530) {
            ctx->pc = 0x15B534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B530u;
            // 0x15b534: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B560u;
            goto label_15b560;
        }
    }
    ctx->pc = 0x15B538u;
    // 0x15b538: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x15b538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x15b53c: 0x0  nop
    ctx->pc = 0x15b53cu;
    // NOP
label_15b540:
    // 0x15b540: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b544: 0xc05e374  jal         func_178DD0
    ctx->pc = 0x15B544u;
    SET_GPR_U32(ctx, 31, 0x15B54Cu);
    ctx->pc = 0x15B548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B544u;
            // 0x15b548: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178DD0u;
    if (runtime->hasFunction(0x178DD0u)) {
        auto targetFn = runtime->lookupFunction(0x178DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B54Cu; }
        if (ctx->pc != 0x15B54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_178dd0_0x178df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B54Cu; }
        if (ctx->pc != 0x15B54Cu) { return; }
    }
    ctx->pc = 0x15B54Cu;
    // 0x15b54c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x15b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x15b550: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b554: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15B554u;
    {
        const bool branch_taken_0x15b554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15B558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B554u;
            // 0x15b558: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b554) {
            ctx->pc = 0x15B540u;
            runtime->cooperativeGuestYield();
            goto label_15b540;
        }
    }
    ctx->pc = 0x15B55Cu;
    // 0x15b55c: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x15b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_15b560:
    // 0x15b560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15b560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b564: 0xc08e204  jal         func_238810
    ctx->pc = 0x15B564u;
    SET_GPR_U32(ctx, 31, 0x15B56Cu);
    ctx->pc = 0x15B568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B564u;
            // 0x15b568: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238810u;
    if (runtime->hasFunction(0x238810u)) {
        auto targetFn = runtime->lookupFunction(0x238810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B56Cu; }
        if (ctx->pc != 0x15B56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238810_0x238810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B56Cu; }
        if (ctx->pc != 0x15B56Cu) { return; }
    }
    ctx->pc = 0x15B56Cu;
    // 0x15b56c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x15b56cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_15b570:
    // 0x15b570: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15b570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b574: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15b574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b578: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15b578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b57c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15b57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b580: 0x3e00008  jr          $ra
    ctx->pc = 0x15B580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B580u;
            // 0x15b584: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B480u: goto label_15b480;
            case 0x15B4D8u: goto label_15b4d8;
            case 0x15B4F8u: goto label_15b4f8;
            case 0x15B508u: goto label_15b508;
            case 0x15B540u: goto label_15b540;
            case 0x15B560u: goto label_15b560;
            case 0x15B570u: goto label_15b570;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B588u;
}
