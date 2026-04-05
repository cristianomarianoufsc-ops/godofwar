#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_11c5d8
// Address: 0x11c5d8 - 0x11c738
void entry_11c5d8_0x11c738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11c5d8_0x11c738");
#endif

    ctx->pc = 0x11c5d8u;

    // 0x11c5d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c5dc: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x11c5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x11c5e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11c5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11c5e4: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x11c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x11c5e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11c5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11c5ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11c5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c5f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11c5f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5f8: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x11c5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x11c5fc: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x11c5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x11c600: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x11c600u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11c604: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x11c604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11c608: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x11c608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x11c60c: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x11c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11c610: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x11c610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x11c614: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x11c614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x11c618: 0xa6270004  sh          $a3, 0x4($s1)
    ctx->pc = 0x11c618u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x11c61c: 0xa6280000  sh          $t0, 0x0($s1)
    ctx->pc = 0x11c61cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x11c620: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x11c620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x11c624: 0xae260020  sw          $a2, 0x20($s1)
    ctx->pc = 0x11c624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
    // 0x11c628: 0xc08e222  jal         func_238888
    ctx->pc = 0x11C628u;
    SET_GPR_U32(ctx, 31, 0x11C630u);
    ctx->pc = 0x11C62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C628u;
            // 0x11c62c: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C630u; }
        if (ctx->pc != 0x11C630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C630u; }
        if (ctx->pc != 0x11C630u) { return; }
    }
    ctx->pc = 0x11C630u;
    // 0x11c630: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x11c630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11c634: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c63c: 0xc08e222  jal         func_238888
    ctx->pc = 0x11C63Cu;
    SET_GPR_U32(ctx, 31, 0x11C644u);
    ctx->pc = 0x11C640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C63Cu;
            // 0x11c640: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C644u; }
        if (ctx->pc != 0x11C644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C644u; }
        if (ctx->pc != 0x11C644u) { return; }
    }
    ctx->pc = 0x11C644u;
    // 0x11c644: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x11c644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11c648: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x11c648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x11c64c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11c650: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x11c650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x11c654: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11c654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11c658: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x11c658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x11c65c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x11c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x11c660: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x11c660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x11c664: 0x2463fc10  addiu       $v1, $v1, -0x3F0
    ctx->pc = 0x11c664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966288));
    // 0x11c668: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x11c668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x11c66c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x11c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11c670: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x11c670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x11c674: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x11c674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x11c678: 0xc08e43a  jal         func_2390E8
    ctx->pc = 0x11C678u;
    SET_GPR_U32(ctx, 31, 0x11C680u);
    ctx->pc = 0x11C67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C678u;
            // 0x11c67c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390E8u;
    if (runtime->hasFunction(0x2390E8u)) {
        auto targetFn = runtime->lookupFunction(0x2390E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C680u; }
        if (ctx->pc != 0x11C680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390e8_0x2390f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C680u; }
        if (ctx->pc != 0x11C680u) { return; }
    }
    ctx->pc = 0x11C680u;
    // 0x11c680: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x11c680u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11c684: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11c684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x11c688: 0x2442e6f0  addiu       $v0, $v0, -0x1910
    ctx->pc = 0x11c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960880));
    // 0x11c68c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x11c68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11c690: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11c690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c694: 0xa6250002  sh          $a1, 0x2($s1)
    ctx->pc = 0x11c694u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x11c698: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x11c698u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x11c69c: 0xae240030  sw          $a0, 0x30($s1)
    ctx->pc = 0x11c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
    // 0x11c6a0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x11c6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x11c6a4: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x11c6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x11c6a8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11c6ac: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x11c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x11c6b0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11c6b4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x11c6b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x11c6b8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x11c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x11c6bc: 0x40f809  jalr        $v0
    ctx->pc = 0x11C6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C6C4u);
        ctx->pc = 0x11C6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6BCu;
            // 0x11c6c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11C6C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C6D0u: goto label_11c6d0;
            case 0x11C6E4u: goto label_11c6e4;
            case 0x11C718u: goto label_11c718;
            case 0x11C720u: goto label_11c720;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11C6C4u; }
            if (ctx->pc != 0x11C6C4u) { return; }
        }
        }
    }
    ctx->pc = 0x11C6C4u;
    // 0x11c6c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11c6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6c8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x11c6c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6cc: 0x0  nop
    ctx->pc = 0x11c6ccu;
    // NOP
label_11c6d0:
    // 0x11c6d0: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x11c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
    // 0x11c6d4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C6D4u;
    {
        const bool branch_taken_0x11c6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c6d4) {
            ctx->pc = 0x11C6D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6D4u;
            // 0x11c6d8: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C6E4u;
            goto label_11c6e4;
        }
    }
    ctx->pc = 0x11C6DCu;
    // 0x11c6dc: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x11C6DCu;
    {
        const bool branch_taken_0x11c6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6DCu;
            // 0x11c6e0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6dc) {
            ctx->pc = 0x11C6D0u;
            runtime->cooperativeGuestYield();
            goto label_11c6d0;
        }
    }
    ctx->pc = 0x11C6E4u;
label_11c6e4:
    // 0x11c6e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11c6e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11c6ec: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x11c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x11c6f0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11C6F0u;
    {
        const bool branch_taken_0x11c6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c6f0) {
            ctx->pc = 0x11C6F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6F0u;
            // 0x11c6f4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C718u;
            goto label_11c718;
        }
    }
    ctx->pc = 0x11C6F8u;
    // 0x11c6f8: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x11c6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11c6fc: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x11c6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x11c700: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c704: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x11c704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11c708: 0xc061e1a  jal         func_187868
    ctx->pc = 0x11C708u;
    SET_GPR_U32(ctx, 31, 0x11C710u);
    ctx->pc = 0x11C70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C708u;
            // 0x11c70c: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C710u; }
        if (ctx->pc != 0x11C710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C710u; }
        if (ctx->pc != 0x11C710u) { return; }
    }
    ctx->pc = 0x11C710u;
    // 0x11c710: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11C710u;
    {
        const bool branch_taken_0x11c710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C710u;
            // 0x11c714: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c710) {
            ctx->pc = 0x11C720u;
            goto label_11c720;
        }
    }
    ctx->pc = 0x11C718u;
label_11c718:
    // 0x11c718: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x11c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11c71c: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x11c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_11c720:
    // 0x11c720: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11c720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c724: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11c724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11c728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c72c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c730: 0x3e00008  jr          $ra
    ctx->pc = 0x11C730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C730u;
            // 0x11c734: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C6D0u: goto label_11c6d0;
            case 0x11C6E4u: goto label_11c6e4;
            case 0x11C718u: goto label_11c718;
            case 0x11C720u: goto label_11c720;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C738u;
}
