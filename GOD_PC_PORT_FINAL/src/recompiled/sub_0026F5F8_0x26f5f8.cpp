#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026F5F8
// Address: 0x26f5f8 - 0x26f7b0
void sub_0026F5F8_0x26f5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F5F8_0x26f5f8");
#endif

    ctx->pc = 0x26f5f8u;

    // 0x26f5f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26f5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26f5fc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26f5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26f600: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26f600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26f604: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26f604u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f608: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26f608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26f60c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x26f60cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f610: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26f610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26f614: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26f614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26f618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26f61c: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x26f61cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x26f620: 0x8e0600ec  lw          $a2, 0xEC($s0)
    ctx->pc = 0x26f620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x26f624: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x26f624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x26f628: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F628u;
    {
        const bool branch_taken_0x26f628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F628u;
            // 0x26f62c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f628) {
            ctx->pc = 0x26F648u;
            goto label_26f648;
        }
    }
    ctx->pc = 0x26F630u;
    // 0x26f630: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x26f630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x26f634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f638: 0xc09d0fc  jal         func_2743F0
    ctx->pc = 0x26F638u;
    SET_GPR_U32(ctx, 31, 0x26F640u);
    ctx->pc = 0x26F63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F638u;
            // 0x26f63c: 0x24a54340  addiu       $a1, $a1, 0x4340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2743F0u;
    if (runtime->hasFunction(0x2743F0u)) {
        auto targetFn = runtime->lookupFunction(0x2743F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F640u; }
        if (ctx->pc != 0x26F640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002743F0_0x2743f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F640u; }
        if (ctx->pc != 0x26F640u) { return; }
    }
    ctx->pc = 0x26F640u;
    // 0x26f640: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x26F640u;
    {
        const bool branch_taken_0x26f640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F640u;
            // 0x26f644: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f640) {
            ctx->pc = 0x26F790u;
            goto label_26f790;
        }
    }
    ctx->pc = 0x26F648u;
label_26f648:
    // 0x26f648: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x26f648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x26f64c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F64Cu;
    {
        const bool branch_taken_0x26f64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F64Cu;
            // 0x26f650: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f64c) {
            ctx->pc = 0x26F674u;
            goto label_26f674;
        }
    }
    ctx->pc = 0x26F654u;
    // 0x26f654: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x26F654u;
    SET_GPR_U32(ctx, 31, 0x26F65Cu);
    ctx->pc = 0x26F658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F654u;
            // 0x26f658: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F65Cu; }
        if (ctx->pc != 0x26F65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F65Cu; }
        if (ctx->pc != 0x26F65Cu) { return; }
    }
    ctx->pc = 0x26F65Cu;
    // 0x26f65c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x26F65Cu;
    {
        const bool branch_taken_0x26f65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F65Cu;
            // 0x26f660: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f65c) {
            ctx->pc = 0x26F790u;
            goto label_26f790;
        }
    }
    ctx->pc = 0x26F664u;
label_26f664:
    // 0x26f664: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x26F664u;
    SET_GPR_U32(ctx, 31, 0x26F66Cu);
    ctx->pc = 0x26F668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F664u;
            // 0x26f668: 0x248443c0  addiu       $a0, $a0, 0x43C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F66Cu; }
        if (ctx->pc != 0x26F66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F66Cu; }
        if (ctx->pc != 0x26F66Cu) { return; }
    }
    ctx->pc = 0x26F66Cu;
    // 0x26f66c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x26F66Cu;
    {
        const bool branch_taken_0x26f66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F66Cu;
            // 0x26f670: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f66c) {
            ctx->pc = 0x26F790u;
            goto label_26f790;
        }
    }
    ctx->pc = 0x26F674u;
label_26f674:
    // 0x26f674: 0xae000834  sw          $zero, 0x834($s0)
    ctx->pc = 0x26f674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2100), GPR_U32(ctx, 0));
    // 0x26f678: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26f678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26f67c: 0x0  nop
    ctx->pc = 0x26f67cu;
    // NOP
label_26f680:
    // 0x26f680: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26F680u;
    {
        const bool branch_taken_0x26f680 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F680u;
            // 0x26f684: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f680) {
            ctx->pc = 0x26F6C0u;
            goto label_26f6c0;
        }
    }
    ctx->pc = 0x26F688u;
label_26f688:
    // 0x26f688: 0xc09e38a  jal         func_278E28
    ctx->pc = 0x26F688u;
    SET_GPR_U32(ctx, 31, 0x26F690u);
    ctx->pc = 0x26F68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F688u;
            // 0x26f68c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278E28u;
    if (runtime->hasFunction(0x278E28u)) {
        auto targetFn = runtime->lookupFunction(0x278E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F690u; }
        if (ctx->pc != 0x26F690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278e28_0x278f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F690u; }
        if (ctx->pc != 0x26F690u) { return; }
    }
    ctx->pc = 0x26F690u;
    // 0x26f690: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26f690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f694: 0x640003e  bltz        $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x26F694u;
    {
        const bool branch_taken_0x26f694 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x26F698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F694u;
            // 0x26f698: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f694) {
            ctx->pc = 0x26F790u;
            goto label_26f790;
        }
    }
    ctx->pc = 0x26F69Cu;
    // 0x26f69c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x26F69Cu;
    {
        const bool branch_taken_0x26f69c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F69Cu;
            // 0x26f6a0: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f69c) {
            ctx->pc = 0x26F6C0u;
            goto label_26f6c0;
        }
    }
    ctx->pc = 0x26F6A4u;
    // 0x26f6a4: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x26f6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x26f6a8: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x26f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x26f6ac: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F6ACu;
    {
        const bool branch_taken_0x26f6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F6ACu;
            // 0x26f6b0: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6ac) {
            ctx->pc = 0x26F6C0u;
            goto label_26f6c0;
        }
    }
    ctx->pc = 0x26F6B4u;
    // 0x26f6b4: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x26f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x26f6b8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x26F6B8u;
    {
        const bool branch_taken_0x26f6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F6B8u;
            // 0x26f6bc: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6b8) {
            ctx->pc = 0x26F688u;
            runtime->cooperativeGuestYield();
            goto label_26f688;
        }
    }
    ctx->pc = 0x26F6C0u;
label_26f6c0:
    // 0x26f6c0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x26F6C0u;
    {
        const bool branch_taken_0x26f6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F6C0u;
            // 0x26f6c4: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6c0) {
            ctx->pc = 0x26F768u;
            goto label_26f768;
        }
    }
    ctx->pc = 0x26F6C8u;
    // 0x26f6c8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x26f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x26f6cc: 0x244243e0  addiu       $v0, $v0, 0x43E0
    ctx->pc = 0x26f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17376));
    // 0x26f6d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26f6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f6d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26f6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26f6d8: 0x800008  jr          $a0
    ctx->pc = 0x26F6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26F6E0u: goto label_26f6e0;
            case 0x26F6F4u: goto label_26f6f4;
            case 0x26F724u: goto label_26f724;
            case 0x26F748u: goto label_26f748;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26F6E0u;
label_26f6e0:
    // 0x26f6e0: 0xc09c330  jal         func_270CC0
    ctx->pc = 0x26F6E0u;
    SET_GPR_U32(ctx, 31, 0x26F6E8u);
    ctx->pc = 0x26F6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F6E0u;
            // 0x26f6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270CC0u;
    if (runtime->hasFunction(0x270CC0u)) {
        auto targetFn = runtime->lookupFunction(0x270CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F6E8u; }
        if (ctx->pc != 0x26F6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270CC0_0x270cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F6E8u; }
        if (ctx->pc != 0x26F6E8u) { return; }
    }
    ctx->pc = 0x26F6E8u;
    // 0x26f6e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f6ec: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26F6ECu;
    {
        const bool branch_taken_0x26f6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F6ECu;
            // 0x26f6f0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6ec) {
            ctx->pc = 0x26F768u;
            goto label_26f768;
        }
    }
    ctx->pc = 0x26F6F4u;
label_26f6f4:
    // 0x26f6f4: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x26f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x26f6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f6fc: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x26f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x26f700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26f700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f704: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x26f704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x26f708: 0xc09c030  jal         func_2700C0
    ctx->pc = 0x26F708u;
    SET_GPR_U32(ctx, 31, 0x26F710u);
    ctx->pc = 0x26F70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F708u;
            // 0x26f70c: 0x8e0600a8  lw          $a2, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2700C0u;
    if (runtime->hasFunction(0x2700C0u)) {
        auto targetFn = runtime->lookupFunction(0x2700C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F710u; }
        if (ctx->pc != 0x26F710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002700C0_0x2700c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F710u; }
        if (ctx->pc != 0x26F710u) { return; }
    }
    ctx->pc = 0x26F710u;
    // 0x26f710: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x26f710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x26f714: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26f714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f718: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f71c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26F71Cu;
    {
        const bool branch_taken_0x26f71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F71Cu;
            // 0x26f720: 0xae0300b4  sw          $v1, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f71c) {
            ctx->pc = 0x26F768u;
            goto label_26f768;
        }
    }
    ctx->pc = 0x26F724u;
label_26f724:
    // 0x26f724: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x26f724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x26f728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f72c: 0xc09c030  jal         func_2700C0
    ctx->pc = 0x26F72Cu;
    SET_GPR_U32(ctx, 31, 0x26F734u);
    ctx->pc = 0x26F730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F72Cu;
            // 0x26f730: 0x8e0600ac  lw          $a2, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2700C0u;
    if (runtime->hasFunction(0x2700C0u)) {
        auto targetFn = runtime->lookupFunction(0x2700C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F734u; }
        if (ctx->pc != 0x26F734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002700C0_0x2700c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F734u; }
        if (ctx->pc != 0x26F734u) { return; }
    }
    ctx->pc = 0x26F734u;
    // 0x26f734: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x26f734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x26f738: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26f738u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f73c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f740: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26F740u;
    {
        const bool branch_taken_0x26f740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F740u;
            // 0x26f744: 0xae0300b8  sw          $v1, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f740) {
            ctx->pc = 0x26F768u;
            goto label_26f768;
        }
    }
    ctx->pc = 0x26F748u;
label_26f748:
    // 0x26f748: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x26f748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x26f74c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f750: 0xc09c030  jal         func_2700C0
    ctx->pc = 0x26F750u;
    SET_GPR_U32(ctx, 31, 0x26F758u);
    ctx->pc = 0x26F754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F750u;
            // 0x26f754: 0x8e0600b0  lw          $a2, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2700C0u;
    if (runtime->hasFunction(0x2700C0u)) {
        auto targetFn = runtime->lookupFunction(0x2700C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F758u; }
        if (ctx->pc != 0x26F758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002700C0_0x2700c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F758u; }
        if (ctx->pc != 0x26F758u) { return; }
    }
    ctx->pc = 0x26F758u;
    // 0x26f758: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x26f758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x26f75c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26f75cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f760: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f764: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x26f764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_26f768:
    // 0x26f768: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x26f768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x26f76c: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x26F76Cu;
    {
        const bool branch_taken_0x26f76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F76Cu;
            // 0x26f770: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f76c) {
            ctx->pc = 0x26F664u;
            runtime->cooperativeGuestYield();
            goto label_26f664;
        }
    }
    ctx->pc = 0x26F774u;
    // 0x26f774: 0x8e020834  lw          $v0, 0x834($s0)
    ctx->pc = 0x26f774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2100)));
    // 0x26f778: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F778u;
    {
        const bool branch_taken_0x26f778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F778u;
            // 0x26f77c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f778) {
            ctx->pc = 0x26F790u;
            goto label_26f790;
        }
    }
    ctx->pc = 0x26F780u;
    // 0x26f780: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26f780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26f784: 0x1040ffbe  beqz        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x26F784u;
    {
        const bool branch_taken_0x26f784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F784u;
            // 0x26f788: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f784) {
            ctx->pc = 0x26F680u;
            runtime->cooperativeGuestYield();
            goto label_26f680;
        }
    }
    ctx->pc = 0x26F78Cu;
    // 0x26f78c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f790:
    // 0x26f790: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26f790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26f794: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26f794u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f798: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26f798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f79c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26f79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f7a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26f7a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x26F7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7A4u;
            // 0x26f7a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26F648u: goto label_26f648;
            case 0x26F664u: goto label_26f664;
            case 0x26F674u: goto label_26f674;
            case 0x26F680u: goto label_26f680;
            case 0x26F688u: goto label_26f688;
            case 0x26F6C0u: goto label_26f6c0;
            case 0x26F6E0u: goto label_26f6e0;
            case 0x26F6F4u: goto label_26f6f4;
            case 0x26F724u: goto label_26f724;
            case 0x26F748u: goto label_26f748;
            case 0x26F768u: goto label_26f768;
            case 0x26F790u: goto label_26f790;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26F7ACu;
    // 0x26f7ac: 0x0  nop
    ctx->pc = 0x26f7acu;
    // NOP
}
