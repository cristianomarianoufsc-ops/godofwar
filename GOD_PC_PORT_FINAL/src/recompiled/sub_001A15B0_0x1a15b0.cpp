#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A15B0
// Address: 0x1a15b0 - 0x1a1a08
void sub_001A15B0_0x1a15b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A15B0_0x1a15b0");
#endif

    ctx->pc = 0x1a15b0u;

    // 0x1a15b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a15b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a15b4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1a15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1a15b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a15b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a15bc: 0x2442a2a8  addiu       $v0, $v0, -0x5D58
    ctx->pc = 0x1a15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943400));
    // 0x1a15c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a15c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a15c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a15c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a15c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a15c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a15cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a15ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a15d0: 0xc068692  jal         func_1A1A48
    ctx->pc = 0x1A15D0u;
    SET_GPR_U32(ctx, 31, 0x1A15D8u);
    ctx->pc = 0x1A15D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A15D0u;
            // 0x1a15d4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A48u;
    if (runtime->hasFunction(0x1A1A48u)) {
        auto targetFn = runtime->lookupFunction(0x1A1A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15D8u; }
        if (ctx->pc != 0x1A15D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1A48_0x1a1a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15D8u; }
        if (ctx->pc != 0x1A15D8u) { return; }
    }
    ctx->pc = 0x1A15D8u;
    // 0x1a15d8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1a15d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1a15dc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A15DCu;
    {
        const bool branch_taken_0x1a15dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A15E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A15DCu;
            // 0x1a15e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15dc) {
            ctx->pc = 0x1A15F0u;
            goto label_1a15f0;
        }
    }
    ctx->pc = 0x1A15E4u;
    // 0x1a15e4: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x1A15E4u;
    SET_GPR_U32(ctx, 31, 0x1A15ECu);
    ctx->pc = 0x1A15E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A15E4u;
            // 0x1a15e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15ECu; }
        if (ctx->pc != 0x1A15ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15ECu; }
        if (ctx->pc != 0x1A15ECu) { return; }
    }
    ctx->pc = 0x1A15ECu;
    // 0x1a15ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a15ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a15f0:
    // 0x1a15f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a15f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a15f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a15f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a15f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A15F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A15FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A15F8u;
            // 0x1a15fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1600u;
    // 0x1a1600: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1a1600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1a1604: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1a1604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1a1608: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1a1608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1a160c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1a160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x1a1610: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a1610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1614: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1a1614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1a1618: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a1618u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a161c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1a161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1a1620: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1a1620u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1624: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1a1624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1a1628: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a162c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1a162cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1a1630: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1a1630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x1a1634: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a1634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1a1638: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x1a1638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1a163c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1a163cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a1640: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a1640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a1644: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1648: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1648u;
    {
        const bool branch_taken_0x1a1648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A164Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1648u;
            // 0x1a164c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1648) {
            ctx->pc = 0x1A166Cu;
            goto label_1a166c;
        }
    }
    ctx->pc = 0x1A1650u;
label_1a1650:
    // 0x1a1650: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a1650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a1654: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a1654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a1658: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a1658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a165c: 0x0  nop
    ctx->pc = 0x1a165cu;
    // NOP
    // 0x1a1660: 0x0  nop
    ctx->pc = 0x1a1660u;
    // NOP
    // 0x1a1664: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A1664u;
    {
        const bool branch_taken_0x1a1664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1664u;
            // 0x1a1668: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1664) {
            ctx->pc = 0x1A1650u;
            runtime->cooperativeGuestYield();
            goto label_1a1650;
        }
    }
    ctx->pc = 0x1A166Cu;
label_1a166c:
    // 0x1a166c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a1670: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A1670u;
    {
        const bool branch_taken_0x1a1670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1670u;
            // 0x1a1674: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1670) {
            ctx->pc = 0x1A169Cu;
            goto label_1a169c;
        }
    }
    ctx->pc = 0x1A1678u;
    // 0x1a1678: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a1678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a167c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1a167cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a1680: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a1680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1684: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a1684u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a1688: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a1688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a168c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A168Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1694u);
        ctx->pc = 0x1A1690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A168Cu;
            // 0x1a1690: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1694u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1694u; }
            if (ctx->pc != 0x1A1694u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1694u;
    // 0x1a1694: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A1694u;
    {
        const bool branch_taken_0x1a1694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1694u;
            // 0x1a1698: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1694) {
            ctx->pc = 0x1A16E0u;
            goto label_1a16e0;
        }
    }
    ctx->pc = 0x1A169Cu;
label_1a169c:
    // 0x1a169c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a16a0: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1a16a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1a16a4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1a16a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1a16a8: 0x40f809  jalr        $v0
    ctx->pc = 0x1A16A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A16B0u);
        ctx->pc = 0x1A16ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16A8u;
            // 0x1a16ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A16B0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A16B0u; }
            if (ctx->pc != 0x1A16B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A16B0u;
    // 0x1a16b0: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1a16b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1a16b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a16b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a16b8: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A16B8u;
    {
        const bool branch_taken_0x1a16b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A16BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16B8u;
            // 0x1a16bc: 0xa3a20010  sb          $v0, 0x10($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16b8) {
            ctx->pc = 0x1A16DCu;
            goto label_1a16dc;
        }
    }
    ctx->pc = 0x1A16C0u;
    // 0x1a16c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a16c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a16c4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1a16c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a16c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a16c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a16cc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a16ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a16d0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a16d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a16d4: 0x40f809  jalr        $v0
    ctx->pc = 0x1A16D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A16DCu);
        ctx->pc = 0x1A16D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16D4u;
            // 0x1a16d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A16DCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A16DCu; }
            if (ctx->pc != 0x1A16DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1A16DCu;
label_1a16dc:
    // 0x1a16dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a16dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a16e0:
    // 0x1a16e0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1a16e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a16e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a16e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a16e8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a16e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a16ec: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a16ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a16f0: 0x40f809  jalr        $v0
    ctx->pc = 0x1A16F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A16F8u);
        ctx->pc = 0x1A16F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16F0u;
            // 0x1a16f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A16F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A16F8u; }
            if (ctx->pc != 0x1A16F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A16F8u;
    // 0x1a16f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a16fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A16FCu;
    {
        const bool branch_taken_0x1a16fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16FCu;
            // 0x1a1700: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16fc) {
            ctx->pc = 0x1A1710u;
            goto label_1a1710;
        }
    }
    ctx->pc = 0x1A1704u;
    // 0x1a1704: 0xc068692  jal         func_1A1A48
    ctx->pc = 0x1A1704u;
    SET_GPR_U32(ctx, 31, 0x1A170Cu);
    ctx->pc = 0x1A1708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1704u;
            // 0x1a1708: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A48u;
    if (runtime->hasFunction(0x1A1A48u)) {
        auto targetFn = runtime->lookupFunction(0x1A1A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A170Cu; }
        if (ctx->pc != 0x1A170Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1A48_0x1a1a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A170Cu; }
        if (ctx->pc != 0x1A170Cu) { return; }
    }
    ctx->pc = 0x1A170Cu;
    // 0x1a170c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1a170cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1a1710:
    // 0x1a1710: 0x184000b3  blez        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1A1710u;
    {
        const bool branch_taken_0x1a1710 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A1714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1710u;
            // 0x1a1714: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1710) {
            ctx->pc = 0x1A19E0u;
            goto label_1a19e0;
        }
    }
    ctx->pc = 0x1A1718u;
    // 0x1a1718: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a1718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a171c: 0x0  nop
    ctx->pc = 0x1a171cu;
    // NOP
label_1a1720:
    // 0x1a1720: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1A1720u;
    {
        const bool branch_taken_0x1a1720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1720u;
            // 0x1a1724: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1720) {
            ctx->pc = 0x1A1884u;
            goto label_1a1884;
        }
    }
    ctx->pc = 0x1A1728u;
    // 0x1a1728: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x1a1728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1a172c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1a172cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1a1730: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a1730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1734: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1a1734u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1a1738: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1a1738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1a173c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1740: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A1740u;
    {
        const bool branch_taken_0x1a1740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A1744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1740u;
            // 0x1a1744: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1740) {
            ctx->pc = 0x1A1778u;
            goto label_1a1778;
        }
    }
    ctx->pc = 0x1A1748u;
    // 0x1a1748: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x1A1748u;
    {
        const bool branch_taken_0x1a1748 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A174Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1748u;
            // 0x1a174c: 0x8fb20024  lw          $s2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1748) {
            ctx->pc = 0x1A177Cu;
            goto label_1a177c;
        }
    }
    ctx->pc = 0x1A1750u;
    // 0x1a1750: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1a1750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1a1754: 0x0  nop
    ctx->pc = 0x1a1754u;
    // NOP
label_1a1758:
    // 0x1a1758: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a1758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a175c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1a175cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1a1760: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1a1760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1a1764: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a1764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1768: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1768u;
    {
        const bool branch_taken_0x1a1768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A176Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1768u;
            // 0x1a176c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1768) {
            ctx->pc = 0x1A1778u;
            goto label_1a1778;
        }
    }
    ctx->pc = 0x1A1770u;
    // 0x1a1770: 0x1494fff9  bne         $a0, $s4, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A1770u;
    {
        const bool branch_taken_0x1a1770 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x1A1774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1770u;
            // 0x1a1774: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1770) {
            ctx->pc = 0x1A1758u;
            runtime->cooperativeGuestYield();
            goto label_1a1758;
        }
    }
    ctx->pc = 0x1A1778u;
label_1a1778:
    // 0x1a1778: 0x8fb20024  lw          $s2, 0x24($sp)
    ctx->pc = 0x1a1778u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1a177c:
    // 0x1a177c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a177cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1780: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a1780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a1784: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a1784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1788: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1a1788u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1a178c: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x1a178cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a1790: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1a1790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a1794: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a1794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1a1798: 0x40f809  jalr        $v0
    ctx->pc = 0x1A1798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A17A0u);
        ctx->pc = 0x1A179Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1798u;
            // 0x1a179c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A17A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A17A0u; }
            if (ctx->pc != 0x1A17A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A17A0u;
    // 0x1a17a0: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x1a17a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a17a4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A17A4u;
    {
        const bool branch_taken_0x1a17a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A17A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A17A4u;
            // 0x1a17a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a17a4) {
            ctx->pc = 0x1A17D4u;
            goto label_1a17d4;
        }
    }
    ctx->pc = 0x1A17ACu;
    // 0x1a17ac: 0x14620088  bne         $v1, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x1A17ACu;
    {
        const bool branch_taken_0x1a17ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A17B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A17ACu;
            // 0x1a17b0: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a17ac) {
            ctx->pc = 0x1A19D0u;
            goto label_1a19d0;
        }
    }
    ctx->pc = 0x1A17B4u;
    // 0x1a17b4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1a17b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1a17b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a17b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a17bc: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x1a17bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1a17c0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1a17c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a17c4: 0xc08a2c6  jal         func_228B18
    ctx->pc = 0x1A17C4u;
    SET_GPR_U32(ctx, 31, 0x1A17CCu);
    ctx->pc = 0x1A17C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A17C4u;
            // 0x1a17c8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228B18u;
    if (runtime->hasFunction(0x228B18u)) {
        auto targetFn = runtime->lookupFunction(0x228B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17CCu; }
        if (ctx->pc != 0x1A17CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228B18_0x228b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17CCu; }
        if (ctx->pc != 0x1A17CCu) { return; }
    }
    ctx->pc = 0x1A17CCu;
    // 0x1a17cc: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1A17CCu;
    {
        const bool branch_taken_0x1a17cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A17D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A17CCu;
            // 0x1a17d0: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a17cc) {
            ctx->pc = 0x1A19D0u;
            goto label_1a19d0;
        }
    }
    ctx->pc = 0x1A17D4u;
label_1a17d4:
    // 0x1a17d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a17d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a17d8: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1a17d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a17dc: 0x6a430013  ldl         $v1, 0x13($s2)
    ctx->pc = 0x1a17dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a17e0: 0x6e43000c  ldr         $v1, 0xC($s2)
    ctx->pc = 0x1a17e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a17e4: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x1a17e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1a17e8: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x1a17e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a17ec: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x1a17ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a17f0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1a17f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1a17f4: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x1a17f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1a17f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a17f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a17fc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a17fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a1800: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a1800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a1804: 0x40f809  jalr        $v0
    ctx->pc = 0x1A1804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A180Cu);
        ctx->pc = 0x1A1808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1804u;
            // 0x1a1808: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A180Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A180Cu; }
            if (ctx->pc != 0x1A180Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A180Cu;
    // 0x1a180c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a180cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a1810: 0x27a50046  addiu       $a1, $sp, 0x46
    ctx->pc = 0x1a1810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 70));
    // 0x1a1814: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a1814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1818: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a1818u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a181c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a1820: 0x40f809  jalr        $v0
    ctx->pc = 0x1A1820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1828u);
        ctx->pc = 0x1A1824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1820u;
            // 0x1a1824: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1828u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1828u; }
            if (ctx->pc != 0x1A1828u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1828u;
    // 0x1a1828: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a1828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a182c: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x1a182cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1a1830: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a1830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a1834: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a1834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a1838: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a1838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a183c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A183Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1844u);
        ctx->pc = 0x1A1840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A183Cu;
            // 0x1a1840: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1844u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1844u; }
            if (ctx->pc != 0x1A1844u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1844u;
    // 0x1a1844: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a1844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a1848: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a1848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a184c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a184cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1850: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a1850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a1854: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a1854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a1858: 0x40f809  jalr        $v0
    ctx->pc = 0x1A1858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1860u);
        ctx->pc = 0x1A185Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1858u;
            // 0x1a185c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1860u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1860u; }
            if (ctx->pc != 0x1A1860u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1860u;
    // 0x1a1860: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a1860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a1864: 0x27a50042  addiu       $a1, $sp, 0x42
    ctx->pc = 0x1a1864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
    // 0x1a1868: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a1868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a186c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a186cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a1870: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a1870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a1874: 0x40f809  jalr        $v0
    ctx->pc = 0x1A1874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A187Cu);
        ctx->pc = 0x1A1878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1874u;
            // 0x1a1878: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A187Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A187Cu; }
            if (ctx->pc != 0x1A187Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A187Cu;
    // 0x1a187c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1A187Cu;
    {
        const bool branch_taken_0x1a187c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A187Cu;
            // 0x1a1880: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a187c) {
            ctx->pc = 0x1A19D0u;
            goto label_1a19d0;
        }
    }
    ctx->pc = 0x1A1884u;
label_1a1884:
    // 0x1a1884: 0xc06854a  jal         func_1A1528
    ctx->pc = 0x1A1884u;
    SET_GPR_U32(ctx, 31, 0x1A188Cu);
    ctx->pc = 0x1A1888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1884u;
            // 0x1a1888: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1528u;
    if (runtime->hasFunction(0x1A1528u)) {
        auto targetFn = runtime->lookupFunction(0x1A1528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A188Cu; }
        if (ctx->pc != 0x1A188Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1528_0x1a1528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A188Cu; }
        if (ctx->pc != 0x1A188Cu) { return; }
    }
    ctx->pc = 0x1A188Cu;
    // 0x1a188c: 0xc090cc8  jal         func_243320
    ctx->pc = 0x1A188Cu;
    SET_GPR_U32(ctx, 31, 0x1A1894u);
    ctx->pc = 0x1A1890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A188Cu;
            // 0x1a1890: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243320u;
    if (runtime->hasFunction(0x243320u)) {
        auto targetFn = runtime->lookupFunction(0x243320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1894u; }
        if (ctx->pc != 0x1A1894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243320_0x243360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1894u; }
        if (ctx->pc != 0x1A1894u) { return; }
    }
    ctx->pc = 0x1A1894u;
    // 0x1a1894: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a1894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1898: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1a1898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a189c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a189cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a18a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a18a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a18a4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a18a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a18a8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a18a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a18ac: 0x40f809  jalr        $v0
    ctx->pc = 0x1A18ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A18B4u);
        ctx->pc = 0x1A18B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A18ACu;
            // 0x1a18b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A18B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A18B4u; }
            if (ctx->pc != 0x1A18B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A18B4u;
    // 0x1a18b4: 0x93b20050  lbu         $s2, 0x50($sp)
    ctx->pc = 0x1a18b4u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a18b8: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A18B8u;
    {
        const bool branch_taken_0x1a18b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A18BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A18B8u;
            // 0x1a18bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18b8) {
            ctx->pc = 0x1A1908u;
            goto label_1a1908;
        }
    }
    ctx->pc = 0x1A18C0u;
    // 0x1a18c0: 0x5642003d  bnel        $s2, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1A18C0u;
    {
        const bool branch_taken_0x1a18c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a18c0) {
            ctx->pc = 0x1A18C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A18C0u;
            // 0x1a18c4: 0x8ea20018  lw          $v0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A19B8u;
            goto label_1a19b8;
        }
    }
    ctx->pc = 0x1A18C8u;
    // 0x1a18c8: 0xc08a12e  jal         func_2284B8
    ctx->pc = 0x1A18C8u;
    SET_GPR_U32(ctx, 31, 0x1A18D0u);
    ctx->pc = 0x1A18CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A18C8u;
            // 0x1a18cc: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2284B8u;
    if (runtime->hasFunction(0x2284B8u)) {
        auto targetFn = runtime->lookupFunction(0x2284B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18D0u; }
        if (ctx->pc != 0x1A18D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002284B8_0x2284b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18D0u; }
        if (ctx->pc != 0x1A18D0u) { return; }
    }
    ctx->pc = 0x1A18D0u;
    // 0x1a18d0: 0xc08a180  jal         func_228600
    ctx->pc = 0x1A18D0u;
    SET_GPR_U32(ctx, 31, 0x1A18D8u);
    ctx->pc = 0x1A18D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A18D0u;
            // 0x1a18d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228600u;
    if (runtime->hasFunction(0x228600u)) {
        auto targetFn = runtime->lookupFunction(0x228600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18D8u; }
        if (ctx->pc != 0x1A18D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_228600_0x228640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18D8u; }
        if (ctx->pc != 0x1A18D8u) { return; }
    }
    ctx->pc = 0x1A18D8u;
    // 0x1a18d8: 0x93a80010  lbu         $t0, 0x10($sp)
    ctx->pc = 0x1a18d8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a18dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a18dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18e0: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x1a18e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1a18e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a18e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18e8: 0x39080023  xori        $t0, $t0, 0x23
    ctx->pc = 0x1a18e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)35);
    // 0x1a18ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a18ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18f0: 0x2d080001  sltiu       $t0, $t0, 0x1
    ctx->pc = 0x1a18f0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a18f4: 0xc08a2c6  jal         func_228B18
    ctx->pc = 0x1A18F4u;
    SET_GPR_U32(ctx, 31, 0x1A18FCu);
    ctx->pc = 0x1A18F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A18F4u;
            // 0x1a18f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228B18u;
    if (runtime->hasFunction(0x228B18u)) {
        auto targetFn = runtime->lookupFunction(0x228B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18FCu; }
        if (ctx->pc != 0x1A18FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228B18_0x228b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18FCu; }
        if (ctx->pc != 0x1A18FCu) { return; }
    }
    ctx->pc = 0x1A18FCu;
    // 0x1a18fc: 0xa2720008  sb          $s2, 0x8($s3)
    ctx->pc = 0x1a18fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 18));
    // 0x1a1900: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1A1900u;
    {
        const bool branch_taken_0x1a1900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1900u;
            // 0x1a1904: 0xae70000c  sw          $s0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1900) {
            ctx->pc = 0x1A19B0u;
            goto label_1a19b0;
        }
    }
    ctx->pc = 0x1A1908u;
label_1a1908:
    // 0x1a1908: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a1908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a190c: 0x27a50064  addiu       $a1, $sp, 0x64
    ctx->pc = 0x1a190cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1a1910: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a1910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1914: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a1914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a1918: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a1918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a191c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A191Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1924u);
        ctx->pc = 0x1A1920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A191Cu;
            // 0x1a1920: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1924u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1924u; }
            if (ctx->pc != 0x1A1924u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1924u;
    // 0x1a1924: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a1924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a1928: 0x27a50066  addiu       $a1, $sp, 0x66
    ctx->pc = 0x1a1928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 102));
    // 0x1a192c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a192cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1930: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a1930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a1934: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a1934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a1938: 0x40f809  jalr        $v0
    ctx->pc = 0x1A1938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1940u);
        ctx->pc = 0x1A193Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1938u;
            // 0x1a193c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1940u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1940u; }
            if (ctx->pc != 0x1A1940u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1940u;
    // 0x1a1940: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a1940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a1944: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x1a1944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1a1948: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a1948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a194c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a194cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a1950: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a1950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a1954: 0x40f809  jalr        $v0
    ctx->pc = 0x1A1954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A195Cu);
        ctx->pc = 0x1A1958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1954u;
            // 0x1a1958: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A195Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A195Cu; }
            if (ctx->pc != 0x1A195Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A195Cu;
    // 0x1a195c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a1960: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1a1960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a1964: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a1964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1968: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a1968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a196c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a196cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a1970: 0x40f809  jalr        $v0
    ctx->pc = 0x1A1970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1978u);
        ctx->pc = 0x1A1974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1970u;
            // 0x1a1974: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1978u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1978u; }
            if (ctx->pc != 0x1A1978u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1978u;
    // 0x1a1978: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a1978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a197c: 0x27a50062  addiu       $a1, $sp, 0x62
    ctx->pc = 0x1a197cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 98));
    // 0x1a1980: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a1980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1984: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a1984u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a1988: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a1988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a198c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A198Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1994u);
        ctx->pc = 0x1A1990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A198Cu;
            // 0x1a1990: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1994u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1994u; }
            if (ctx->pc != 0x1A1994u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1994u;
    // 0x1a1994: 0xa2600008  sb          $zero, 0x8($s3)
    ctx->pc = 0x1a1994u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1998: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x1a1998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a199c: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x1a199cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a19a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a19a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a19a4: 0xb2620013  sdl         $v0, 0x13($s3)
    ctx->pc = 0x1a19a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a19a8: 0xb662000c  sdr         $v0, 0xC($s3)
    ctx->pc = 0x1a19a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a19ac: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x1a19acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
label_1a19b0:
    // 0x1a19b0: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x1a19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1a19b4: 0x0  nop
    ctx->pc = 0x1a19b4u;
    // NOP
label_1a19b8:
    // 0x1a19b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a19b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a19bc: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x1a19bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x1a19c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a19c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1a19c4: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1a19c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x1a19c8: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x1a19c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x1a19cc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1a19ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1a19d0:
    // 0x1a19d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1a19d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1a19d4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1a19d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a19d8: 0x5440ff51  bnel        $v0, $zero, . + 4 + (-0xAF << 2)
    ctx->pc = 0x1A19D8u;
    {
        const bool branch_taken_0x1a19d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a19d8) {
            ctx->pc = 0x1A19DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19D8u;
            // 0x1a19dc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1720u;
            runtime->cooperativeGuestYield();
            goto label_1a1720;
        }
    }
    ctx->pc = 0x1A19E0u;
label_1a19e0:
    // 0x1a19e0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1a19e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a19e4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1a19e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a19e8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1a19e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a19ec: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1a19ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a19f0: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1a19f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a19f4: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1a19f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a19f8: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1a19f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a19fc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a19fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a1a00: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A00u;
            // 0x1a1a04: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15F0u: goto label_1a15f0;
            case 0x1A1650u: goto label_1a1650;
            case 0x1A166Cu: goto label_1a166c;
            case 0x1A169Cu: goto label_1a169c;
            case 0x1A16DCu: goto label_1a16dc;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A1720u: goto label_1a1720;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1778u: goto label_1a1778;
            case 0x1A177Cu: goto label_1a177c;
            case 0x1A17D4u: goto label_1a17d4;
            case 0x1A1884u: goto label_1a1884;
            case 0x1A1908u: goto label_1a1908;
            case 0x1A19B0u: goto label_1a19b0;
            case 0x1A19B8u: goto label_1a19b8;
            case 0x1A19D0u: goto label_1a19d0;
            case 0x1A19E0u: goto label_1a19e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1A08u;
}
