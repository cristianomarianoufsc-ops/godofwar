#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027C580
// Address: 0x27c580 - 0x27c6a0
void sub_0027C580_0x27c580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C580_0x27c580");
#endif

    ctx->pc = 0x27c580u;

    // 0x27c580: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27c584: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27c584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27c588: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x27c588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x27c58c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x27c58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27c590: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x27c590u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c594: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x27c594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27c598: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x27c598u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c59c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27c5a0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x27c5a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27c5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27c5a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27c5a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5ac: 0x8c433310  lw          $v1, 0x3310($v0)
    ctx->pc = 0x27c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13072)));
    // 0x27c5b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27c5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x27c5b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27c5bc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C5BCu;
    {
        const bool branch_taken_0x27c5bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C5BCu;
            // 0x27c5c0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5bc) {
            ctx->pc = 0x27C5D0u;
            goto label_27c5d0;
        }
    }
    ctx->pc = 0x27C5C4u;
    // 0x27c5c4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c5c8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x27C5C8u;
    {
        const bool branch_taken_0x27c5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C5C8u;
            // 0x27c5cc: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5c8) {
            ctx->pc = 0x27C678u;
            goto label_27c678;
        }
    }
    ctx->pc = 0x27C5D0u;
label_27c5d0:
    // 0x27c5d0: 0xc0a0bd8  jal         func_282F60
    ctx->pc = 0x27C5D0u;
    SET_GPR_U32(ctx, 31, 0x27C5D8u);
    ctx->pc = 0x27C5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C5D0u;
            // 0x27c5d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282F60u;
    if (runtime->hasFunction(0x282F60u)) {
        auto targetFn = runtime->lookupFunction(0x282F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C5D8u; }
        if (ctx->pc != 0x27C5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282f60_0x282fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C5D8u; }
        if (ctx->pc != 0x27C5D8u) { return; }
    }
    ctx->pc = 0x27C5D8u;
    // 0x27c5d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27c5d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5dc: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C5DCu;
    {
        const bool branch_taken_0x27c5dc = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x27c5dc) {
            ctx->pc = 0x27C5F0u;
            goto label_27c5f0;
        }
    }
    ctx->pc = 0x27C5E4u;
    // 0x27c5e4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c5e8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x27C5E8u;
    {
        const bool branch_taken_0x27c5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C5E8u;
            // 0x27c5ec: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5e8) {
            ctx->pc = 0x27C678u;
            goto label_27c678;
        }
    }
    ctx->pc = 0x27C5F0u;
label_27c5f0:
    // 0x27c5f0: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x27C5F0u;
    SET_GPR_U32(ctx, 31, 0x27C5F8u);
    ctx->pc = 0x27C5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C5F0u;
            // 0x27c5f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C5F8u; }
        if (ctx->pc != 0x27C5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C5F8u; }
        if (ctx->pc != 0x27C5F8u) { return; }
    }
    ctx->pc = 0x27C5F8u;
    // 0x27c5f8: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x27c5f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x27c5fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C5FCu;
    {
        const bool branch_taken_0x27c5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C5FCu;
            // 0x27c600: 0x3c120031  lui         $s2, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5fc) {
            ctx->pc = 0x27C610u;
            goto label_27c610;
        }
    }
    ctx->pc = 0x27C604u;
    // 0x27c604: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c608: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x27C608u;
    {
        const bool branch_taken_0x27c608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C608u;
            // 0x27c60c: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c608) {
            ctx->pc = 0x27C678u;
            goto label_27c678;
        }
    }
    ctx->pc = 0x27C610u;
label_27c610:
    // 0x27c610: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x27C610u;
    SET_GPR_U32(ctx, 31, 0x27C618u);
    ctx->pc = 0x27C614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C610u;
            // 0x27c614: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C618u; }
        if (ctx->pc != 0x27C618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C618u; }
        if (ctx->pc != 0x27C618u) { return; }
    }
    ctx->pc = 0x27C618u;
    // 0x27c618: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27c618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27c61c: 0x24700380  addiu       $s0, $v1, 0x380
    ctx->pc = 0x27c61cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x27c620: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x27c620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27c624: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C624u;
    {
        const bool branch_taken_0x27c624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c624) {
            ctx->pc = 0x27C628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27C624u;
            // 0x27c628: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27C640u;
            goto label_27c640;
        }
    }
    ctx->pc = 0x27C62Cu;
    // 0x27c62c: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C62Cu;
    SET_GPR_U32(ctx, 31, 0x27C634u);
    ctx->pc = 0x27C630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C62Cu;
            // 0x27c630: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C634u; }
        if (ctx->pc != 0x27C634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C634u; }
        if (ctx->pc != 0x27C634u) { return; }
    }
    ctx->pc = 0x27C634u;
    // 0x27c634: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c638: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27C638u;
    {
        const bool branch_taken_0x27c638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C638u;
            // 0x27c63c: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c638) {
            ctx->pc = 0x27C678u;
            goto label_27c678;
        }
    }
    ctx->pc = 0x27C640u;
label_27c640:
    // 0x27c640: 0xac710380  sw          $s1, 0x380($v1)
    ctx->pc = 0x27c640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 17));
    // 0x27c644: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x27c644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x27c648: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27c648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c64c: 0xc0a2644  jal         func_289910
    ctx->pc = 0x27C64Cu;
    SET_GPR_U32(ctx, 31, 0x27C654u);
    ctx->pc = 0x27C650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C64Cu;
            // 0x27c650: 0x2604041c  addiu       $a0, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C654u; }
        if (ctx->pc != 0x27C654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C654u; }
        if (ctx->pc != 0x27C654u) { return; }
    }
    ctx->pc = 0x27C654u;
    // 0x27c654: 0xae140014  sw          $s4, 0x14($s0)
    ctx->pc = 0x27c654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
    // 0x27c658: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27c658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27c65c: 0x8c6408a4  lw          $a0, 0x8A4($v1)
    ctx->pc = 0x27c65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2212)));
    // 0x27c660: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x27c660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x27c664: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C664u;
    SET_GPR_U32(ctx, 31, 0x27C66Cu);
    ctx->pc = 0x27C668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C664u;
            // 0x27c668: 0xae160010  sw          $s6, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C66Cu; }
        if (ctx->pc != 0x27C66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C66Cu; }
        if (ctx->pc != 0x27C66Cu) { return; }
    }
    ctx->pc = 0x27C66Cu;
    // 0x27c66c: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C66Cu;
    SET_GPR_U32(ctx, 31, 0x27C674u);
    ctx->pc = 0x27C670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C66Cu;
            // 0x27c670: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C674u; }
        if (ctx->pc != 0x27C674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C674u; }
        if (ctx->pc != 0x27C674u) { return; }
    }
    ctx->pc = 0x27C674u;
    // 0x27c674: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27c674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c678:
    // 0x27c678: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27c678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27c67c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x27c67cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27c680: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x27c680u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27c684: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x27c684u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27c688: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27c688u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27c68c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27c68cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c690: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27c690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27c694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c698: 0x3e00008  jr          $ra
    ctx->pc = 0x27C698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C698u;
            // 0x27c69c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27C5D0u: goto label_27c5d0;
            case 0x27C5F0u: goto label_27c5f0;
            case 0x27C610u: goto label_27c610;
            case 0x27C640u: goto label_27c640;
            case 0x27C678u: goto label_27c678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27C6A0u;
}
