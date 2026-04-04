#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00106468
// Address: 0x106468 - 0x1065a8
void sub_00106468_0x106468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106468_0x106468");
#endif

    ctx->pc = 0x106468u;

    // 0x106468: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x106468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10646c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10646cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x106470: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x106470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x106474: 0x24930014  addiu       $s3, $a0, 0x14
    ctx->pc = 0x106474u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x106478: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x106478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10647c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10647cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106480: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x106480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x106484: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x106484u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x106488: 0x12330012  beq         $s1, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x106488u;
    {
        const bool branch_taken_0x106488 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x10648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106488u;
            // 0x10648c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106488) {
            ctx->pc = 0x1064D4u;
            goto label_1064d4;
        }
    }
    ctx->pc = 0x106490u;
    // 0x106490: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x106490u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x106494: 0x0  nop
    ctx->pc = 0x106494u;
    // NOP
label_106498:
    // 0x106498: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x106498u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x10649c: 0x5212000a  beql        $s0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x10649Cu;
    {
        const bool branch_taken_0x10649c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x10649c) {
            ctx->pc = 0x1064A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10649Cu;
            // 0x1064a0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1064C8u;
            goto label_1064c8;
        }
    }
    ctx->pc = 0x1064A4u;
    // 0x1064a4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1064a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1064a8:
    // 0x1064a8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1064a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1064ac: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1064acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1064b0: 0x40f809  jalr        $v0
    ctx->pc = 0x1064B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1064B8u);
        ctx->pc = 0x1064B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1064B0u;
            // 0x1064b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1064B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106498u: goto label_106498;
            case 0x1064A8u: goto label_1064a8;
            case 0x1064C8u: goto label_1064c8;
            case 0x1064D4u: goto label_1064d4;
            case 0x106528u: goto label_106528;
            case 0x106548u: goto label_106548;
            case 0x106564u: goto label_106564;
            case 0x10656Cu: goto label_10656c;
            case 0x10658Cu: goto label_10658c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1064B8u; }
            if (ctx->pc != 0x1064B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1064B8u;
    // 0x1064b8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1064b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1064bc: 0x5612fffa  bnel        $s0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1064BCu;
    {
        const bool branch_taken_0x1064bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x1064bc) {
            ctx->pc = 0x1064C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1064BCu;
            // 0x1064c0: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1064A8u;
            runtime->cooperativeGuestYield();
            goto label_1064a8;
        }
    }
    ctx->pc = 0x1064C4u;
    // 0x1064c4: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1064c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1064c8:
    // 0x1064c8: 0x5633fff3  bnel        $s1, $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1064C8u;
    {
        const bool branch_taken_0x1064c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x1064c8) {
            ctx->pc = 0x1064CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1064C8u;
            // 0x1064cc: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106498u;
            runtime->cooperativeGuestYield();
            goto label_106498;
        }
    }
    ctx->pc = 0x1064D0u;
    // 0x1064d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1064d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1064d4:
    // 0x1064d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1064d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1064d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1064d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1064dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1064dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1064e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1064e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1064e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1064E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1064E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1064E4u;
            // 0x1064e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106498u: goto label_106498;
            case 0x1064A8u: goto label_1064a8;
            case 0x1064C8u: goto label_1064c8;
            case 0x1064D4u: goto label_1064d4;
            case 0x106528u: goto label_106528;
            case 0x106548u: goto label_106548;
            case 0x106564u: goto label_106564;
            case 0x10656Cu: goto label_10656c;
            case 0x10658Cu: goto label_10658c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1064ECu;
    // 0x1064ec: 0x0  nop
    ctx->pc = 0x1064ecu;
    // NOP
    // 0x1064f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1064f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1064f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1064f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1064f8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1064f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1064fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1064fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106500: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x106500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x106504: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x106504u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x106508: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x106508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10650c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10650cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106510: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x106510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x106514: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x106514u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x106518: 0x8c52002c  lw          $s2, 0x2C($v0)
    ctx->pc = 0x106518u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x10651c: 0x12130013  beq         $s0, $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x10651Cu;
    {
        const bool branch_taken_0x10651c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x106520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10651Cu;
            // 0x106520: 0xae200058  sw          $zero, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10651c) {
            ctx->pc = 0x10656Cu;
            goto label_10656c;
        }
    }
    ctx->pc = 0x106524u;
    // 0x106524: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x106524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_106528:
    // 0x106528: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x106528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x10652c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10652Cu;
    {
        const bool branch_taken_0x10652c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10652Cu;
            // 0x106530: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10652c) {
            ctx->pc = 0x106548u;
            goto label_106548;
        }
    }
    ctx->pc = 0x106534u;
    // 0x106534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106538: 0xc041ee4  jal         func_107B90
    ctx->pc = 0x106538u;
    SET_GPR_U32(ctx, 31, 0x106540u);
    ctx->pc = 0x10653Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106538u;
            // 0x10653c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107B90u;
    if (runtime->hasFunction(0x107B90u)) {
        auto targetFn = runtime->lookupFunction(0x107B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106540u; }
        if (ctx->pc != 0x106540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107B90_0x107b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106540u; }
        if (ctx->pc != 0x106540u) { return; }
    }
    ctx->pc = 0x106540u;
    // 0x106540: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x106540u;
    {
        const bool branch_taken_0x106540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x106540) {
            ctx->pc = 0x106564u;
            goto label_106564;
        }
    }
    ctx->pc = 0x106548u;
label_106548:
    // 0x106548: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x106548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10654c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x10654cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x106550: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x106550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x106554: 0x40f809  jalr        $v0
    ctx->pc = 0x106554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10655Cu);
        ctx->pc = 0x106558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106554u;
            // 0x106558: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10655Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106498u: goto label_106498;
            case 0x1064A8u: goto label_1064a8;
            case 0x1064C8u: goto label_1064c8;
            case 0x1064D4u: goto label_1064d4;
            case 0x106528u: goto label_106528;
            case 0x106548u: goto label_106548;
            case 0x106564u: goto label_106564;
            case 0x10656Cu: goto label_10656c;
            case 0x10658Cu: goto label_10658c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10655Cu; }
            if (ctx->pc != 0x10655Cu) { return; }
        }
        }
    }
    ctx->pc = 0x10655Cu;
    // 0x10655c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x10655cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106560: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x106560u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_106564:
    // 0x106564: 0x5613fff0  bnel        $s0, $s3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x106564u;
    {
        const bool branch_taken_0x106564 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x106564) {
            ctx->pc = 0x106568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106564u;
            // 0x106568: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106528u;
            runtime->cooperativeGuestYield();
            goto label_106528;
        }
    }
    ctx->pc = 0x10656Cu;
label_10656c:
    // 0x10656c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x10656Cu;
    {
        const bool branch_taken_0x10656c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x106570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10656Cu;
            // 0x106570: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10656c) {
            ctx->pc = 0x10658Cu;
            goto label_10658c;
        }
    }
    ctx->pc = 0x106574u;
    // 0x106574: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x106574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x106578: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x106578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10657c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x10657cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x106580: 0x40f809  jalr        $v0
    ctx->pc = 0x106580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x106588u);
        ctx->pc = 0x106584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106580u;
            // 0x106584: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x106588u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106498u: goto label_106498;
            case 0x1064A8u: goto label_1064a8;
            case 0x1064C8u: goto label_1064c8;
            case 0x1064D4u: goto label_1064d4;
            case 0x106528u: goto label_106528;
            case 0x106548u: goto label_106548;
            case 0x106564u: goto label_106564;
            case 0x10656Cu: goto label_10656c;
            case 0x10658Cu: goto label_10658c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x106588u; }
            if (ctx->pc != 0x106588u) { return; }
        }
        }
    }
    ctx->pc = 0x106588u;
    // 0x106588: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x106588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10658c:
    // 0x10658c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10658cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106590: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x106590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106594: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x106594u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10659c: 0x3e00008  jr          $ra
    ctx->pc = 0x10659Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1065A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10659Cu;
            // 0x1065a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106498u: goto label_106498;
            case 0x1064A8u: goto label_1064a8;
            case 0x1064C8u: goto label_1064c8;
            case 0x1064D4u: goto label_1064d4;
            case 0x106528u: goto label_106528;
            case 0x106548u: goto label_106548;
            case 0x106564u: goto label_106564;
            case 0x10656Cu: goto label_10656c;
            case 0x10658Cu: goto label_10658c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1065A4u;
    // 0x1065a4: 0x0  nop
    ctx->pc = 0x1065a4u;
    // NOP
}
