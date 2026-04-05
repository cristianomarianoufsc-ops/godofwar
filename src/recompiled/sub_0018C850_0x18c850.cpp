#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018C850
// Address: 0x18c850 - 0x18ca98
void sub_0018C850_0x18c850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C850_0x18c850");
#endif

    ctx->pc = 0x18c850u;

label_18c850:
    // 0x18c850: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x18c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18c854: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18c858: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x18c858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x18c85c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x18c85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x18c860: 0x1044000f  beq         $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x18C860u;
    {
        const bool branch_taken_0x18c860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x18C864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C860u;
            // 0x18c864: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c860) {
            ctx->pc = 0x18C8A0u;
            goto label_18c8a0;
        }
    }
    ctx->pc = 0x18C868u;
label_18c868:
    // 0x18c868: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x18c868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18c86c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x18C86Cu;
    {
        const bool branch_taken_0x18c86c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c86c) {
            ctx->pc = 0x18C870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C86Cu;
            // 0x18c870: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C894u;
            goto label_18c894;
        }
    }
    ctx->pc = 0x18C874u;
    // 0x18c874: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x18c874u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x18c878: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C878u;
    {
        const bool branch_taken_0x18c878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18c878) {
            ctx->pc = 0x18C87Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C878u;
            // 0x18c87c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C894u;
            goto label_18c894;
        }
    }
    ctx->pc = 0x18C880u;
    // 0x18c880: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x18c880u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x18c884: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C884u;
    {
        const bool branch_taken_0x18c884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x18c884) {
            ctx->pc = 0x18C888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C884u;
            // 0x18c888: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C894u;
            goto label_18c894;
        }
    }
    ctx->pc = 0x18C88Cu;
    // 0x18c88c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18C88Cu;
    {
        const bool branch_taken_0x18c88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C88Cu;
            // 0x18c890: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c88c) {
            ctx->pc = 0x18C8A4u;
            goto label_18c8a4;
        }
    }
    ctx->pc = 0x18C894u;
label_18c894:
    // 0x18c894: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18c894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c898: 0x1443fff3  bne         $v0, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x18C898u;
    {
        const bool branch_taken_0x18c898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18C89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C898u;
            // 0x18c89c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c898) {
            ctx->pc = 0x18C868u;
            runtime->cooperativeGuestYield();
            goto label_18c868;
        }
    }
    ctx->pc = 0x18C8A0u;
label_18c8a0:
    // 0x18c8a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18c8a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c8a4:
    // 0x18c8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x18C8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C8A4u;
            // 0x18c8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C850u: goto label_18c850;
            case 0x18C868u: goto label_18c868;
            case 0x18C894u: goto label_18c894;
            case 0x18C8A0u: goto label_18c8a0;
            case 0x18C8A4u: goto label_18c8a4;
            case 0x18C8F8u: goto label_18c8f8;
            case 0x18C920u: goto label_18c920;
            case 0x18CA28u: goto label_18ca28;
            case 0x18CA70u: goto label_18ca70;
            case 0x18CA74u: goto label_18ca74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C8ACu;
    // 0x18c8ac: 0x0  nop
    ctx->pc = 0x18c8acu;
    // NOP
    // 0x18c8b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18c8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18c8b4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18c8b8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18c8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18c8bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18c8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18c8c0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x18c8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x18c8c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18c8c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c8c8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x18c8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x18c8cc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x18c8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x18c8d0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x18c8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x18c8d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18c8d8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x18c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x18c8dc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x18c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x18c8e0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x18c8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x18c8e4: 0x14430062  bne         $v0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x18C8E4u;
    {
        const bool branch_taken_0x18c8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18C8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C8E4u;
            // 0x18c8e8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8e4) {
            ctx->pc = 0x18CA70u;
            goto label_18ca70;
        }
    }
    ctx->pc = 0x18C8ECu;
    // 0x18c8ec: 0x96650018  lhu         $a1, 0x18($s3)
    ctx->pc = 0x18c8ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x18c8f0: 0xc063214  jal         func_18C850
    ctx->pc = 0x18C8F0u;
    SET_GPR_U32(ctx, 31, 0x18C8F8u);
    ctx->pc = 0x18C8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C8F0u;
            // 0x18c8f4: 0x8e860030  lw          $a2, 0x30($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C850u;
    runtime->cooperativeGuestYield();
    goto label_18c850;
    ctx->pc = 0x18C8F8u;
label_18c8f8:
    // 0x18c8f8: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x18C8F8u;
    {
        const bool branch_taken_0x18c8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C8F8u;
            // 0x18c8fc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8f8) {
            ctx->pc = 0x18CA74u;
            goto label_18ca74;
        }
    }
    ctx->pc = 0x18C900u;
    // 0x18c900: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x18c900u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x18c904: 0x8e02c8c0  lw          $v0, -0x3740($s0)
    ctx->pc = 0x18c904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953152)));
    // 0x18c908: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C908u;
    {
        const bool branch_taken_0x18c908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c908) {
            ctx->pc = 0x18C90Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C908u;
            // 0x18c90c: 0x8e04c8c0  lw          $a0, -0x3740($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C920u;
            goto label_18c920;
        }
    }
    ctx->pc = 0x18C910u;
    // 0x18c910: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x18C910u;
    SET_GPR_U32(ctx, 31, 0x18C918u);
    ctx->pc = 0x18C914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C910u;
            // 0x18c914: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C918u; }
        if (ctx->pc != 0x18C918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C918u; }
        if (ctx->pc != 0x18C918u) { return; }
    }
    ctx->pc = 0x18C918u;
    // 0x18c918: 0xae02c8c0  sw          $v0, -0x3740($s0)
    ctx->pc = 0x18c918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953152), GPR_U32(ctx, 2));
    // 0x18c91c: 0x8e04c8c0  lw          $a0, -0x3740($s0)
    ctx->pc = 0x18c91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953152)));
label_18c920:
    // 0x18c920: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18C920u;
    SET_GPR_U32(ctx, 31, 0x18C928u);
    ctx->pc = 0x18C924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C920u;
            // 0x18c924: 0x26750008  addiu       $s5, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C928u; }
        if (ctx->pc != 0x18C928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C928u; }
        if (ctx->pc != 0x18C928u) { return; }
    }
    ctx->pc = 0x18C928u;
    // 0x18c928: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18c928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c92c: 0x96910030  lhu         $s1, 0x30($s4)
    ctx->pc = 0x18c92cu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x18c930: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x18c930u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x18c934: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18c934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18c938: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x18c938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x18c93c: 0xc090d26  jal         func_243498
    ctx->pc = 0x18C93Cu;
    SET_GPR_U32(ctx, 31, 0x18C944u);
    ctx->pc = 0x18C940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C93Cu;
            // 0x18c940: 0x96700018  lhu         $s0, 0x18($s3) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243498u;
    if (runtime->hasFunction(0x243498u)) {
        auto targetFn = runtime->lookupFunction(0x243498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C944u; }
        if (ctx->pc != 0x18C944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243498_0x2434a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C944u; }
        if (ctx->pc != 0x18C944u) { return; }
    }
    ctx->pc = 0x18C944u;
    // 0x18c944: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x18c944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x18c948: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x18c948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x18c94c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18c94cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c950: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18c950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18c954: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18c954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c958: 0x24a52d90  addiu       $a1, $a1, 0x2D90
    ctx->pc = 0x18c958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11664));
    // 0x18c95c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18c95cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18c960: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18c960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18c964: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18c964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18c968: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18c968u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18c96c: 0xa650000c  sh          $s0, 0xC($s2)
    ctx->pc = 0x18c96cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 16));
    // 0x18c970: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c970u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x18c974: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x18c974u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18c978: 0xa651000e  sh          $s1, 0xE($s2)
    ctx->pc = 0x18c978u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 17));
    // 0x18c97c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c97cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18c980: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18c980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18c984: 0xa240001f  sb          $zero, 0x1F($s2)
    ctx->pc = 0x18c984u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c988: 0xa640001c  sh          $zero, 0x1C($s2)
    ctx->pc = 0x18c988u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x18c98c: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x18c98cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x18c990: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x18c990u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x18c994: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18c994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c998: 0xa6430018  sh          $v1, 0x18($s2)
    ctx->pc = 0x18c998u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x18c99c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18c99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c9a0: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x18C9A0u;
    SET_GPR_U32(ctx, 31, 0x18C9A8u);
    ctx->pc = 0x18C9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C9A0u;
            // 0x18c9a4: 0xa642001a  sh          $v0, 0x1A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C9A8u; }
        if (ctx->pc != 0x18C9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C9A8u; }
        if (ctx->pc != 0x18C9A8u) { return; }
    }
    ctx->pc = 0x18C9A8u;
    // 0x18c9a8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x18c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x18c9ac: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x18c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x18c9b0: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x18C9B0u;
    SET_GPR_U32(ctx, 31, 0x18C9B8u);
    ctx->pc = 0x18C9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C9B0u;
            // 0x18c9b4: 0x2453de48  addiu       $s3, $v0, -0x21B8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C9B8u; }
        if (ctx->pc != 0x18C9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C9B8u; }
        if (ctx->pc != 0x18C9B8u) { return; }
    }
    ctx->pc = 0x18C9B8u;
    // 0x18c9b8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18C9B8u;
    SET_GPR_U32(ctx, 31, 0x18C9C0u);
    ctx->pc = 0x18C9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C9B8u;
            // 0x18c9bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C9C0u; }
        if (ctx->pc != 0x18C9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C9C0u; }
        if (ctx->pc != 0x18C9C0u) { return; }
    }
    ctx->pc = 0x18C9C0u;
    // 0x18c9c0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x18c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x18c9c4: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x18c9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18c9c8: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x18c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x18c9cc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x18c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x18c9d0: 0x72880b  movn        $s1, $v1, $s2
    ctx->pc = 0x18c9d0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x18c9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c9d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18c9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c9dc: 0xc060284  jal         func_180A10
    ctx->pc = 0x18C9DCu;
    SET_GPR_U32(ctx, 31, 0x18C9E4u);
    ctx->pc = 0x18C9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C9DCu;
            // 0x18c9e0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C9E4u; }
        if (ctx->pc != 0x18C9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C9E4u; }
        if (ctx->pc != 0x18C9E4u) { return; }
    }
    ctx->pc = 0x18C9E4u;
    // 0x18c9e4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x18c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x18c9e8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x18c9ec: 0x8c64c74c  lw          $a0, -0x38B4($v1)
    ctx->pc = 0x18c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952780)));
    // 0x18c9f0: 0x244203d0  addiu       $v0, $v0, 0x3D0
    ctx->pc = 0x18c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
    // 0x18c9f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18c9f8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x18c9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x18c9fc: 0xa603001c  sh          $v1, 0x1C($s0)
    ctx->pc = 0x18c9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x18ca00: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x18ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x18ca04: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x18ca04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x18ca08: 0xa6000022  sh          $zero, 0x22($s0)
    ctx->pc = 0x18ca08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x18ca0c: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x18ca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x18ca10: 0xa603001e  sh          $v1, 0x1E($s0)
    ctx->pc = 0x18ca10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x18ca14: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x18ca14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x18ca18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CA18u;
    {
        const bool branch_taken_0x18ca18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CA18u;
            // 0x18ca1c: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca18) {
            ctx->pc = 0x18CA28u;
            goto label_18ca28;
        }
    }
    ctx->pc = 0x18CA20u;
    // 0x18ca20: 0xc05fb38  jal         func_17ECE0
    ctx->pc = 0x18CA20u;
    SET_GPR_U32(ctx, 31, 0x18CA28u);
    ctx->pc = 0x18CA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CA20u;
            // 0x18ca24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ECE0u;
    if (runtime->hasFunction(0x17ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x17ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CA28u; }
        if (ctx->pc != 0x18CA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ECE0_0x17ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CA28u; }
        if (ctx->pc != 0x18CA28u) { return; }
    }
    ctx->pc = 0x18CA28u;
label_18ca28:
    // 0x18ca28: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x18ca2c: 0xae130024  sw          $s3, 0x24($s0)
    ctx->pc = 0x18ca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
    // 0x18ca30: 0x2442eaf8  addiu       $v0, $v0, -0x1508
    ctx->pc = 0x18ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961912));
    // 0x18ca34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18ca34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca38: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x18ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x18ca3c: 0xc05fd12  jal         func_17F448
    ctx->pc = 0x18CA3Cu;
    SET_GPR_U32(ctx, 31, 0x18CA44u);
    ctx->pc = 0x18CA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CA3Cu;
            // 0x18ca40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F448u;
    if (runtime->hasFunction(0x17F448u)) {
        auto targetFn = runtime->lookupFunction(0x17F448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CA44u; }
        if (ctx->pc != 0x18CA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F448_0x17f448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CA44u; }
        if (ctx->pc != 0x18CA44u) { return; }
    }
    ctx->pc = 0x18CA44u;
    // 0x18ca44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18ca44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca48: 0xc08f1e0  jal         func_23C780
    ctx->pc = 0x18CA48u;
    SET_GPR_U32(ctx, 31, 0x18CA50u);
    ctx->pc = 0x18CA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CA48u;
            // 0x18ca4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C780u;
    if (runtime->hasFunction(0x23C780u)) {
        auto targetFn = runtime->lookupFunction(0x23C780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CA50u; }
        if (ctx->pc != 0x18CA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23c780_0x23c788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CA50u; }
        if (ctx->pc != 0x18CA50u) { return; }
    }
    ctx->pc = 0x18CA50u;
    // 0x18ca50: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x18ca54: 0x24429b00  addiu       $v0, $v0, -0x6500
    ctx->pc = 0x18ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941440));
    // 0x18ca58: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x18ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x18ca5c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x18ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x18ca60: 0xaeb20004  sw          $s2, 0x4($s5)
    ctx->pc = 0x18ca60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
    // 0x18ca64: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x18ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
    // 0x18ca68: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x18ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x18ca6c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x18ca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_18ca70:
    // 0x18ca70: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x18ca70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18ca74:
    // 0x18ca74: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x18ca74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18ca78: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x18ca78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ca7c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18ca7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ca80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18ca80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ca84: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x18ca84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ca88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18ca88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ca8c: 0x3e00008  jr          $ra
    ctx->pc = 0x18CA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CA8Cu;
            // 0x18ca90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C850u: goto label_18c850;
            case 0x18C868u: goto label_18c868;
            case 0x18C894u: goto label_18c894;
            case 0x18C8A0u: goto label_18c8a0;
            case 0x18C8A4u: goto label_18c8a4;
            case 0x18C8F8u: goto label_18c8f8;
            case 0x18C920u: goto label_18c920;
            case 0x18CA28u: goto label_18ca28;
            case 0x18CA70u: goto label_18ca70;
            case 0x18CA74u: goto label_18ca74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18CA94u;
    // 0x18ca94: 0x0  nop
    ctx->pc = 0x18ca94u;
    // NOP
}
