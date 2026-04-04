#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001365A8
// Address: 0x1365a8 - 0x136728
void sub_001365A8_0x1365a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001365A8_0x1365a8");
#endif

    ctx->pc = 0x1365a8u;

    // 0x1365a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1365a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1365ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1365acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1365b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1365b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1365b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1365b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1365b8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1365b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1365bc: 0x24b20020  addiu       $s2, $a1, 0x20
    ctx->pc = 0x1365bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1365c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1365c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1365c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1365c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1365c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1365c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1365cc: 0x8cb00020  lw          $s0, 0x20($a1)
    ctx->pc = 0x1365ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1365d0: 0x12120048  beq         $s0, $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x1365D0u;
    {
        const bool branch_taken_0x1365d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x1365D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1365D0u;
            // 0x1365d4: 0xae250088  sw          $a1, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365d0) {
            ctx->pc = 0x1366F4u;
            goto label_1366f4;
        }
    }
    ctx->pc = 0x1365D8u;
    // 0x1365d8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1365d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1365dc: 0x0  nop
    ctx->pc = 0x1365dcu;
    // NOP
label_1365e0:
    // 0x1365e0: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1365E0u;
    {
        const bool branch_taken_0x1365e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1365E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1365E0u;
            // 0x1365e4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365e0) {
            ctx->pc = 0x1366D4u;
            goto label_1366d4;
        }
    }
    ctx->pc = 0x1365E8u;
    // 0x1365e8: 0x54620040  bnel        $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1365E8u;
    {
        const bool branch_taken_0x1365e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1365e8) {
            ctx->pc = 0x1365ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1365E8u;
            // 0x1365ec: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1366ECu;
            goto label_1366ec;
        }
    }
    ctx->pc = 0x1365F0u;
    // 0x1365f0: 0x8e280054  lw          $t0, 0x54($s1)
    ctx->pc = 0x1365f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1365f4: 0x1100003c  beqz        $t0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1365F4u;
    {
        const bool branch_taken_0x1365f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1365F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1365F4u;
            // 0x1365f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365f4) {
            ctx->pc = 0x1366E8u;
            goto label_1366e8;
        }
    }
    ctx->pc = 0x1365FCu;
    // 0x1365fc: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1365fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x136600: 0x9625005c  lhu         $a1, 0x5C($s1)
    ctx->pc = 0x136600u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x136604: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136608: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x136608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x13660c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x13660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x136610: 0x94e40012  lhu         $a0, 0x12($a3)
    ctx->pc = 0x136610u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x136614: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x136614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x136618: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x136618u;
    {
        const bool branch_taken_0x136618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13661Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136618u;
            // 0x13661c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136618) {
            ctx->pc = 0x136678u;
            goto label_136678;
        }
    }
    ctx->pc = 0x136620u;
label_136620:
    // 0x136620: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x136620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x136624: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x136624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x136628: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x136628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x13662c: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x13662cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x136630: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x136630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x136634: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x136634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x136638: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x136638u;
    {
        const bool branch_taken_0x136638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136638) {
            ctx->pc = 0x13663Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136638u;
            // 0x13663c: 0x94e20012  lhu         $v0, 0x12($a3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136668u;
            goto label_136668;
        }
    }
    ctx->pc = 0x136640u;
    // 0x136640: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x136640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x136644: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x136644u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x136648: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x136648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13664c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13664cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x136650: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x136650u;
    {
        const bool branch_taken_0x136650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136650u;
            // 0x136654: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136650) {
            ctx->pc = 0x136678u;
            goto label_136678;
        }
    }
    ctx->pc = 0x136658u;
    // 0x136658: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x136658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13665c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x13665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x136660: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x136660u;
    {
        const bool branch_taken_0x136660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136660u;
            // 0x136664: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136660) {
            ctx->pc = 0x136680u;
            goto label_136680;
        }
    }
    ctx->pc = 0x136668u;
label_136668:
    // 0x136668: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x136668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13666c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x13666cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x136670: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x136670u;
    {
        const bool branch_taken_0x136670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136670u;
            // 0x136674: 0x1234823  subu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136670) {
            ctx->pc = 0x136620u;
            runtime->cooperativeGuestYield();
            goto label_136620;
        }
    }
    ctx->pc = 0x136678u;
label_136678:
    // 0x136678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x136678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13667c: 0x0  nop
    ctx->pc = 0x13667cu;
    // NOP
label_136680:
    // 0x136680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136684: 0xc041d66  jal         func_107598
    ctx->pc = 0x136684u;
    SET_GPR_U32(ctx, 31, 0x13668Cu);
    ctx->pc = 0x136688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136684u;
            // 0x136688: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107598u;
    if (runtime->hasFunction(0x107598u)) {
        auto targetFn = runtime->lookupFunction(0x107598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13668Cu; }
        if (ctx->pc != 0x13668Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107598_0x107628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13668Cu; }
        if (ctx->pc != 0x13668Cu) { return; }
    }
    ctx->pc = 0x13668Cu;
    // 0x13668c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x13668cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x136690: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x136690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x136694: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x136694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x136698: 0x60f809  jalr        $v1
    ctx->pc = 0x136698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1366A0u);
        ctx->pc = 0x13669Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136698u;
            // 0x13669c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1366A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1365E0u: goto label_1365e0;
            case 0x136620u: goto label_136620;
            case 0x136668u: goto label_136668;
            case 0x136678u: goto label_136678;
            case 0x136680u: goto label_136680;
            case 0x1366D4u: goto label_1366d4;
            case 0x1366E8u: goto label_1366e8;
            case 0x1366ECu: goto label_1366ec;
            case 0x1366F4u: goto label_1366f4;
            case 0x13670Cu: goto label_13670c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1366A0u; }
            if (ctx->pc != 0x1366A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1366A0u;
    // 0x1366a0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1366a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1366a4: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x1366a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x1366a8: 0x3421aac1  ori         $at, $at, 0xAAC1
    ctx->pc = 0x1366a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43713);
    // 0x1366ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1366acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1366b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1366b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1366b4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1366b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1366b8: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1366b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1366bc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1366bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1366c0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1366c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1366c4: 0x40f809  jalr        $v0
    ctx->pc = 0x1366C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1366CCu);
        ctx->pc = 0x1366C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1366C4u;
            // 0x1366c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1366CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1365E0u: goto label_1365e0;
            case 0x136620u: goto label_136620;
            case 0x136668u: goto label_136668;
            case 0x136678u: goto label_136678;
            case 0x136680u: goto label_136680;
            case 0x1366D4u: goto label_1366d4;
            case 0x1366E8u: goto label_1366e8;
            case 0x1366ECu: goto label_1366ec;
            case 0x1366F4u: goto label_1366f4;
            case 0x13670Cu: goto label_13670c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1366CCu; }
            if (ctx->pc != 0x1366CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1366CCu;
    // 0x1366cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1366CCu;
    {
        const bool branch_taken_0x1366cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1366D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1366CCu;
            // 0x1366d0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1366cc) {
            ctx->pc = 0x1366ECu;
            goto label_1366ec;
        }
    }
    ctx->pc = 0x1366D4u;
label_1366d4:
    // 0x1366d4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1366d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1366d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1366d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1366dc: 0xc04445a  jal         func_111168
    ctx->pc = 0x1366DCu;
    SET_GPR_U32(ctx, 31, 0x1366E4u);
    ctx->pc = 0x1366E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1366DCu;
            // 0x1366e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111168u;
    if (runtime->hasFunction(0x111168u)) {
        auto targetFn = runtime->lookupFunction(0x111168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1366E4u; }
        if (ctx->pc != 0x1366E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111168_0x111168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1366E4u; }
        if (ctx->pc != 0x1366E4u) { return; }
    }
    ctx->pc = 0x1366E4u;
    // 0x1366e4: 0x0  nop
    ctx->pc = 0x1366e4u;
    // NOP
label_1366e8:
    // 0x1366e8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1366e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1366ec:
    // 0x1366ec: 0x5612ffbc  bnel        $s0, $s2, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1366ECu;
    {
        const bool branch_taken_0x1366ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x1366ec) {
            ctx->pc = 0x1366F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1366ECu;
            // 0x1366f0: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1365E0u;
            runtime->cooperativeGuestYield();
            goto label_1365e0;
        }
    }
    ctx->pc = 0x1366F4u;
label_1366f4:
    // 0x1366f4: 0x9622005e  lhu         $v0, 0x5E($s1)
    ctx->pc = 0x1366f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x1366f8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1366f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1366fc: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1366FCu;
    {
        const bool branch_taken_0x1366fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x136700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1366FCu;
            // 0x136700: 0xa622005e  sh          $v0, 0x5E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 94), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1366fc) {
            ctx->pc = 0x13670Cu;
            goto label_13670c;
        }
    }
    ctx->pc = 0x136704u;
    // 0x136704: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x136704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x136708: 0xa622005e  sh          $v0, 0x5E($s1)
    ctx->pc = 0x136708u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 94), (uint16_t)GPR_U32(ctx, 2));
label_13670c:
    // 0x13670c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13670cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136710: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x136710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136714: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x136714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136718: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x136718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13671c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13671cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136720: 0x3e00008  jr          $ra
    ctx->pc = 0x136720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136720u;
            // 0x136724: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1365E0u: goto label_1365e0;
            case 0x136620u: goto label_136620;
            case 0x136668u: goto label_136668;
            case 0x136678u: goto label_136678;
            case 0x136680u: goto label_136680;
            case 0x1366D4u: goto label_1366d4;
            case 0x1366E8u: goto label_1366e8;
            case 0x1366ECu: goto label_1366ec;
            case 0x1366F4u: goto label_1366f4;
            case 0x13670Cu: goto label_13670c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x136728u;
}
