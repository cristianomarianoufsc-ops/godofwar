#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D15B0
// Address: 0x1d15b0 - 0x1d16f0
void sub_001D15B0_0x1d15b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D15B0_0x1d15b0");
#endif

    ctx->pc = 0x1d15b0u;

    // 0x1d15b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d15b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d15b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d15b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d15b8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1d15b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1d15bc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1d15bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1d15c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d15c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d15c4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d15c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d15c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d15c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d15cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d15ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d15d0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d15d4: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x1d15d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d15d8: 0x14430027  bne         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D15D8u;
    {
        const bool branch_taken_0x1d15d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D15DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D15D8u;
            // 0x1d15dc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15d8) {
            ctx->pc = 0x1D1678u;
            goto label_1d1678;
        }
    }
    ctx->pc = 0x1D15E0u;
    // 0x1d15e0: 0x5600003d  bnel        $s0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x1D15E0u;
    {
        const bool branch_taken_0x1d15e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d15e0) {
            ctx->pc = 0x1D15E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D15E0u;
            // 0x1d15e4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D16D8u;
            goto label_1d16d8;
        }
    }
    ctx->pc = 0x1D15E8u;
    // 0x1d15e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d15ec: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1d15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1d15f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d15f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d15f8: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1d15f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1d15fc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D15FCu;
    {
        const bool branch_taken_0x1d15fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D15FCu;
            // 0x1d1600: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15fc) {
            ctx->pc = 0x1D1638u;
            goto label_1d1638;
        }
    }
    ctx->pc = 0x1D1604u;
    // 0x1d1604: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1d1604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x1d1608: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1608u;
    {
        const bool branch_taken_0x1d1608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D160Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1608u;
            // 0x1d160c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1608) {
            ctx->pc = 0x1D1628u;
            goto label_1d1628;
        }
    }
    ctx->pc = 0x1D1610u;
label_1d1610:
    // 0x1d1610: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d1610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d1614: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1d1614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1d1618: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1618u;
    {
        const bool branch_taken_0x1d1618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D161Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1618u;
            // 0x1d161c: 0x240203ed  addiu       $v0, $zero, 0x3ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1618) {
            ctx->pc = 0x1D1640u;
            goto label_1d1640;
        }
    }
    ctx->pc = 0x1D1620u;
    // 0x1d1620: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d1620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d1624: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d1624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1628:
    // 0x1d1628: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1d1628u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1d162c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1d162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1d1630: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D1630u;
    {
        const bool branch_taken_0x1d1630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D1634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1630u;
            // 0x1d1634: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1630) {
            ctx->pc = 0x1D1610u;
            runtime->cooperativeGuestYield();
            goto label_1d1610;
        }
    }
    ctx->pc = 0x1D1638u;
label_1d1638:
    // 0x1d1638: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d1638u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d163c: 0x240203ed  addiu       $v0, $zero, 0x3ED
    ctx->pc = 0x1d163cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
label_1d1640:
    // 0x1d1640: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1d1640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1d1644: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x1d1644u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d1648: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1d1648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1d164c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1d164cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1d1650: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1d1650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1d1654: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d1654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d1658: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d1658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d165c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d165cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1660: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1d1660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1d1664: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1D1664u;
    SET_GPR_U32(ctx, 31, 0x1D166Cu);
    ctx->pc = 0x1D1668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1664u;
            // 0x1d1668: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D166Cu; }
        if (ctx->pc != 0x1D166Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D166Cu; }
        if (ctx->pc != 0x1D166Cu) { return; }
    }
    ctx->pc = 0x1D166Cu;
    // 0x1d166c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D166Cu;
    {
        const bool branch_taken_0x1d166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D166Cu;
            // 0x1d1670: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d166c) {
            ctx->pc = 0x1D16D8u;
            goto label_1d16d8;
        }
    }
    ctx->pc = 0x1D1674u;
    // 0x1d1674: 0x0  nop
    ctx->pc = 0x1d1674u;
    // NOP
label_1d1678:
    // 0x1d1678: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1D1678u;
    {
        const bool branch_taken_0x1d1678 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1678) {
            ctx->pc = 0x1D167Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1678u;
            // 0x1d167c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D16B4u;
            goto label_1d16b4;
        }
    }
    ctx->pc = 0x1D1680u;
    // 0x1d1680: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d1680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d1684: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d1684u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1d1688: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1d1688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1d168c: 0x40f809  jalr        $v0
    ctx->pc = 0x1D168Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1694u);
        ctx->pc = 0x1D1690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D168Cu;
            // 0x1d1690: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1694u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1610u: goto label_1d1610;
            case 0x1D1628u: goto label_1d1628;
            case 0x1D1638u: goto label_1d1638;
            case 0x1D1640u: goto label_1d1640;
            case 0x1D1678u: goto label_1d1678;
            case 0x1D16B0u: goto label_1d16b0;
            case 0x1D16B4u: goto label_1d16b4;
            case 0x1D16C8u: goto label_1d16c8;
            case 0x1D16D8u: goto label_1d16d8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1694u; }
            if (ctx->pc != 0x1D1694u) { return; }
        }
        }
    }
    ctx->pc = 0x1D1694u;
    // 0x1d1694: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1d1694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d1698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1698u;
    {
        const bool branch_taken_0x1d1698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D169Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1698u;
            // 0x1d169c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1698) {
            ctx->pc = 0x1D16B0u;
            goto label_1d16b0;
        }
    }
    ctx->pc = 0x1D16A0u;
    // 0x1d16a0: 0xc074504  jal         func_1D1410
    ctx->pc = 0x1D16A0u;
    SET_GPR_U32(ctx, 31, 0x1D16A8u);
    ctx->pc = 0x1D16A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D16A0u;
            // 0x1d16a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1410u;
    if (runtime->hasFunction(0x1D1410u)) {
        auto targetFn = runtime->lookupFunction(0x1D1410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D16A8u; }
        if (ctx->pc != 0x1D16A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d1410_0x1d1500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D16A8u; }
        if (ctx->pc != 0x1D16A8u) { return; }
    }
    ctx->pc = 0x1D16A8u;
    // 0x1d16a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D16A8u;
    {
        const bool branch_taken_0x1d16a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D16ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D16A8u;
            // 0x1d16ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16a8) {
            ctx->pc = 0x1D16C8u;
            goto label_1d16c8;
        }
    }
    ctx->pc = 0x1D16B0u;
label_1d16b0:
    // 0x1d16b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d16b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d16b4:
    // 0x1d16b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d16b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d16b8: 0xc0745bc  jal         func_1D16F0
    ctx->pc = 0x1D16B8u;
    SET_GPR_U32(ctx, 31, 0x1D16C0u);
    ctx->pc = 0x1D16BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D16B8u;
            // 0x1d16bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D16F0u;
    if (runtime->hasFunction(0x1D16F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D16F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D16C0u; }
        if (ctx->pc != 0x1D16C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D16F0_0x1d16f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D16C0u; }
        if (ctx->pc != 0x1D16C0u) { return; }
    }
    ctx->pc = 0x1D16C0u;
    // 0x1d16c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D16C0u;
    {
        const bool branch_taken_0x1d16c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D16C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D16C0u;
            // 0x1d16c4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16c0) {
            ctx->pc = 0x1D16D8u;
            goto label_1d16d8;
        }
    }
    ctx->pc = 0x1D16C8u;
label_1d16c8:
    // 0x1d16c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d16c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d16cc: 0xc074746  jal         func_1D1D18
    ctx->pc = 0x1D16CCu;
    SET_GPR_U32(ctx, 31, 0x1D16D4u);
    ctx->pc = 0x1D16D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D16CCu;
            // 0x1d16d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D18u;
    if (runtime->hasFunction(0x1D1D18u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D16D4u; }
        if (ctx->pc != 0x1D16D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D18_0x1d1d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D16D4u; }
        if (ctx->pc != 0x1D16D4u) { return; }
    }
    ctx->pc = 0x1D16D4u;
    // 0x1d16d4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1d16d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d16d8:
    // 0x1d16d8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1d16d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d16dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d16dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d16e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d16e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d16e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D16E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D16E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D16E4u;
            // 0x1d16e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1610u: goto label_1d1610;
            case 0x1D1628u: goto label_1d1628;
            case 0x1D1638u: goto label_1d1638;
            case 0x1D1640u: goto label_1d1640;
            case 0x1D1678u: goto label_1d1678;
            case 0x1D16B0u: goto label_1d16b0;
            case 0x1D16B4u: goto label_1d16b4;
            case 0x1D16C8u: goto label_1d16c8;
            case 0x1D16D8u: goto label_1d16d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D16ECu;
    // 0x1d16ec: 0x0  nop
    ctx->pc = 0x1d16ecu;
    // NOP
}
