#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027C7C0
// Address: 0x27c7c0 - 0x27c8b8
void sub_0027C7C0_0x27c7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C7C0_0x27c7c0");
#endif

    ctx->pc = 0x27c7c0u;

    // 0x27c7c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27c7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27c7c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27c7c8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27c7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27c7cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27c7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27c7d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27c7d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7d4: 0x8c433310  lw          $v1, 0x3310($v0)
    ctx->pc = 0x27c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13072)));
    // 0x27c7d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27c7d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c7dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27c7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27c7e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27c7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27c7e4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C7E4u;
    {
        const bool branch_taken_0x27c7e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C7E4u;
            // 0x27c7e8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7e4) {
            ctx->pc = 0x27C7F8u;
            goto label_27c7f8;
        }
    }
    ctx->pc = 0x27C7ECu;
    // 0x27c7ec: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c7f0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x27C7F0u;
    {
        const bool branch_taken_0x27c7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C7F0u;
            // 0x27c7f4: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7f0) {
            ctx->pc = 0x27C89Cu;
            goto label_27c89c;
        }
    }
    ctx->pc = 0x27C7F8u;
label_27c7f8:
    // 0x27c7f8: 0xc0a0bd8  jal         func_282F60
    ctx->pc = 0x27C7F8u;
    SET_GPR_U32(ctx, 31, 0x27C800u);
    ctx->pc = 0x27C7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C7F8u;
            // 0x27c7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282F60u;
    if (runtime->hasFunction(0x282F60u)) {
        auto targetFn = runtime->lookupFunction(0x282F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C800u; }
        if (ctx->pc != 0x27C800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282f60_0x282fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C800u; }
        if (ctx->pc != 0x27C800u) { return; }
    }
    ctx->pc = 0x27C800u;
    // 0x27c800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27c800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c804: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C804u;
    {
        const bool branch_taken_0x27c804 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x27c804) {
            ctx->pc = 0x27C818u;
            goto label_27c818;
        }
    }
    ctx->pc = 0x27C80Cu;
    // 0x27c80c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c810: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x27C810u;
    {
        const bool branch_taken_0x27c810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C810u;
            // 0x27c814: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c810) {
            ctx->pc = 0x27C89Cu;
            goto label_27c89c;
        }
    }
    ctx->pc = 0x27C818u;
label_27c818:
    // 0x27c818: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x27C818u;
    SET_GPR_U32(ctx, 31, 0x27C820u);
    ctx->pc = 0x27C81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C818u;
            // 0x27c81c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C820u; }
        if (ctx->pc != 0x27C820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C820u; }
        if (ctx->pc != 0x27C820u) { return; }
    }
    ctx->pc = 0x27C820u;
    // 0x27c820: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x27c820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x27c824: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C824u;
    {
        const bool branch_taken_0x27c824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C824u;
            // 0x27c828: 0x3c120031  lui         $s2, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c824) {
            ctx->pc = 0x27C838u;
            goto label_27c838;
        }
    }
    ctx->pc = 0x27C82Cu;
    // 0x27c82c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c830: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27C830u;
    {
        const bool branch_taken_0x27c830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C830u;
            // 0x27c834: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c830) {
            ctx->pc = 0x27C89Cu;
            goto label_27c89c;
        }
    }
    ctx->pc = 0x27C838u;
label_27c838:
    // 0x27c838: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x27C838u;
    SET_GPR_U32(ctx, 31, 0x27C840u);
    ctx->pc = 0x27C83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C838u;
            // 0x27c83c: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C840u; }
        if (ctx->pc != 0x27C840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C840u; }
        if (ctx->pc != 0x27C840u) { return; }
    }
    ctx->pc = 0x27C840u;
    // 0x27c840: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27c840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27c844: 0x24710380  addiu       $s1, $v1, 0x380
    ctx->pc = 0x27c844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x27c848: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x27c848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27c84c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C84Cu;
    {
        const bool branch_taken_0x27c84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c84c) {
            ctx->pc = 0x27C850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27C84Cu;
            // 0x27c850: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27C868u;
            goto label_27c868;
        }
    }
    ctx->pc = 0x27C854u;
    // 0x27c854: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C854u;
    SET_GPR_U32(ctx, 31, 0x27C85Cu);
    ctx->pc = 0x27C858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C854u;
            // 0x27c858: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C85Cu; }
        if (ctx->pc != 0x27C85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C85Cu; }
        if (ctx->pc != 0x27C85Cu) { return; }
    }
    ctx->pc = 0x27C85Cu;
    // 0x27c85c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c860: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27C860u;
    {
        const bool branch_taken_0x27c860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C860u;
            // 0x27c864: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c860) {
            ctx->pc = 0x27C89Cu;
            goto label_27c89c;
        }
    }
    ctx->pc = 0x27C868u;
label_27c868:
    // 0x27c868: 0xac700380  sw          $s0, 0x380($v1)
    ctx->pc = 0x27c868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 16));
    // 0x27c86c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x27c86cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x27c870: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27c870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c874: 0xc0a2644  jal         func_289910
    ctx->pc = 0x27C874u;
    SET_GPR_U32(ctx, 31, 0x27C87Cu);
    ctx->pc = 0x27C878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C874u;
            // 0x27c878: 0x2624041c  addiu       $a0, $s1, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C87Cu; }
        if (ctx->pc != 0x27C87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C87Cu; }
        if (ctx->pc != 0x27C87Cu) { return; }
    }
    ctx->pc = 0x27C87Cu;
    // 0x27c87c: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27c87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27c880: 0x34028417  ori         $v0, $zero, 0x8417
    ctx->pc = 0x27c880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33815);
    // 0x27c884: 0x8c6408a4  lw          $a0, 0x8A4($v1)
    ctx->pc = 0x27c884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2212)));
    // 0x27c888: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C888u;
    SET_GPR_U32(ctx, 31, 0x27C890u);
    ctx->pc = 0x27C88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C888u;
            // 0x27c88c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C890u; }
        if (ctx->pc != 0x27C890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C890u; }
        if (ctx->pc != 0x27C890u) { return; }
    }
    ctx->pc = 0x27C890u;
    // 0x27c890: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C890u;
    SET_GPR_U32(ctx, 31, 0x27C898u);
    ctx->pc = 0x27C894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C890u;
            // 0x27c894: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C898u; }
        if (ctx->pc != 0x27C898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C898u; }
        if (ctx->pc != 0x27C898u) { return; }
    }
    ctx->pc = 0x27C898u;
    // 0x27c898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27c898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c89c:
    // 0x27c89c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27c89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27c8a0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27c8a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27c8a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27c8a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c8a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27c8a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c8ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27c8acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x27C8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C8B0u;
            // 0x27c8b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27C7F8u: goto label_27c7f8;
            case 0x27C818u: goto label_27c818;
            case 0x27C838u: goto label_27c838;
            case 0x27C868u: goto label_27c868;
            case 0x27C89Cu: goto label_27c89c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27C8B8u;
}
