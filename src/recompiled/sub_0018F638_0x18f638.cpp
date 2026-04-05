#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018F638
// Address: 0x18f638 - 0x18fb10
void sub_0018F638_0x18f638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F638_0x18f638");
#endif

    ctx->pc = 0x18f638u;

label_18f638:
    // 0x18f638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18f63c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18f63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18f640: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18f640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18f644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18f644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f648: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18f648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18f64c: 0xc069cb8  jal         func_1A72E0
    ctx->pc = 0x18F64Cu;
    SET_GPR_U32(ctx, 31, 0x18F654u);
    ctx->pc = 0x18F650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F64Cu;
            // 0x18f650: 0x2484002d  addiu       $a0, $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A72E0u;
    if (runtime->hasFunction(0x1A72E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A72E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F654u; }
        if (ctx->pc != 0x18F654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A72E0_0x1a72e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F654u; }
        if (ctx->pc != 0x18F654u) { return; }
    }
    ctx->pc = 0x18F654u;
    // 0x18f654: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F654u;
    {
        const bool branch_taken_0x18f654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f654) {
            ctx->pc = 0x18F658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F654u;
            // 0x18f658: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F6CCu;
            goto label_18f6cc;
        }
    }
    ctx->pc = 0x18F65Cu;
    // 0x18f65c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f660: 0xc06a276  jal         func_1A89D8
    ctx->pc = 0x18F660u;
    SET_GPR_U32(ctx, 31, 0x18F668u);
    ctx->pc = 0x18F664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F660u;
            // 0x18f664: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A89D8u;
    if (runtime->hasFunction(0x1A89D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A89D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F668u; }
        if (ctx->pc != 0x18F668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A89D8_0x1a89d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F668u; }
        if (ctx->pc != 0x18F668u) { return; }
    }
    ctx->pc = 0x18F668u;
    // 0x18f668: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18f668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18f66c: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x18f66cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f670: 0x8c44c874  lw          $a0, -0x378C($v0)
    ctx->pc = 0x18f670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953076)));
    // 0x18f674: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x18F674u;
    SET_GPR_U32(ctx, 31, 0x18F67Cu);
    ctx->pc = 0x18F678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F674u;
            // 0x18f678: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F67Cu; }
        if (ctx->pc != 0x18F67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F67Cu; }
        if (ctx->pc != 0x18F67Cu) { return; }
    }
    ctx->pc = 0x18F67Cu;
    // 0x18f67c: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x18F67Cu;
    SET_GPR_U32(ctx, 31, 0x18F684u);
    ctx->pc = 0x18F680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F67Cu;
            // 0x18f680: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F684u; }
        if (ctx->pc != 0x18F684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F684u; }
        if (ctx->pc != 0x18F684u) { return; }
    }
    ctx->pc = 0x18F684u;
    // 0x18f684: 0xc04c992  jal         func_132648
    ctx->pc = 0x18F684u;
    SET_GPR_U32(ctx, 31, 0x18F68Cu);
    ctx->pc = 0x18F688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F684u;
            // 0x18f688: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F68Cu; }
        if (ctx->pc != 0x18F68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F68Cu; }
        if (ctx->pc != 0x18F68Cu) { return; }
    }
    ctx->pc = 0x18F68Cu;
    // 0x18f68c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18f68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f690: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x18F690u;
    {
        const bool branch_taken_0x18f690 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F690u;
            // 0x18f694: 0xae050008  sw          $a1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f690) {
            ctx->pc = 0x18F6C8u;
            goto label_18f6c8;
        }
    }
    ctx->pc = 0x18F698u;
    // 0x18f698: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x18f698u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18f69c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x18f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18f6a0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x18f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x18f6a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18f6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f6a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18f6ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f6b0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18f6b4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x18f6b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x18f6b8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x18f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x18f6bc: 0x40f809  jalr        $v0
    ctx->pc = 0x18F6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F6C4u);
        ctx->pc = 0x18F6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F6BCu;
            // 0x18f6c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18F6C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F638u: goto label_18f638;
            case 0x18F6C8u: goto label_18f6c8;
            case 0x18F6CCu: goto label_18f6cc;
            case 0x18F730u: goto label_18f730;
            case 0x18F734u: goto label_18f734;
            case 0x18F768u: goto label_18f768;
            case 0x18F794u: goto label_18f794;
            case 0x18F7D0u: goto label_18f7d0;
            case 0x18F840u: goto label_18f840;
            case 0x18F84Cu: goto label_18f84c;
            case 0x18F858u: goto label_18f858;
            case 0x18F868u: goto label_18f868;
            case 0x18F8A4u: goto label_18f8a4;
            case 0x18F8ECu: goto label_18f8ec;
            case 0x18F914u: goto label_18f914;
            case 0x18F918u: goto label_18f918;
            case 0x18F91Cu: goto label_18f91c;
            case 0x18F990u: goto label_18f990;
            case 0x18F994u: goto label_18f994;
            case 0x18F9D0u: goto label_18f9d0;
            case 0x18FA30u: goto label_18fa30;
            case 0x18FAE0u: goto label_18fae0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18F6C4u; }
            if (ctx->pc != 0x18F6C4u) { return; }
        }
        }
    }
    ctx->pc = 0x18F6C4u;
    // 0x18f6c4: 0x0  nop
    ctx->pc = 0x18f6c4u;
    // NOP
label_18f6c8:
    // 0x18f6c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18f6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18f6cc:
    // 0x18f6cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x18F6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F6D0u;
            // 0x18f6d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F638u: goto label_18f638;
            case 0x18F6C8u: goto label_18f6c8;
            case 0x18F6CCu: goto label_18f6cc;
            case 0x18F730u: goto label_18f730;
            case 0x18F734u: goto label_18f734;
            case 0x18F768u: goto label_18f768;
            case 0x18F794u: goto label_18f794;
            case 0x18F7D0u: goto label_18f7d0;
            case 0x18F840u: goto label_18f840;
            case 0x18F84Cu: goto label_18f84c;
            case 0x18F858u: goto label_18f858;
            case 0x18F868u: goto label_18f868;
            case 0x18F8A4u: goto label_18f8a4;
            case 0x18F8ECu: goto label_18f8ec;
            case 0x18F914u: goto label_18f914;
            case 0x18F918u: goto label_18f918;
            case 0x18F91Cu: goto label_18f91c;
            case 0x18F990u: goto label_18f990;
            case 0x18F994u: goto label_18f994;
            case 0x18F9D0u: goto label_18f9d0;
            case 0x18FA30u: goto label_18fa30;
            case 0x18FAE0u: goto label_18fae0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F6D8u;
    // 0x18f6d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18f6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18f6dc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18f6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x18f6e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18f6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18f6e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18f6e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f6e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18f6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18f6ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f6f0: 0x8e460060  lw          $a2, 0x60($s2)
    ctx->pc = 0x18f6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x18f6f4: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x18f6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x18f6f8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18F6F8u;
    {
        const bool branch_taken_0x18f6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F6F8u;
            // 0x18f6fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f6f8) {
            ctx->pc = 0x18F734u;
            goto label_18f734;
        }
    }
    ctx->pc = 0x18F700u;
    // 0x18f700: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x18f700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18f704: 0x61dc2  srl         $v1, $a2, 23
    ctx->pc = 0x18f704u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x18f708: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18f708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18f70c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18f710: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x18f710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x18f714: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18f714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18f718: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18f718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f71c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f720: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F720u;
    {
        const bool branch_taken_0x18f720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x18F724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F720u;
            // 0x18f724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f720) {
            ctx->pc = 0x18F730u;
            goto label_18f730;
        }
    }
    ctx->pc = 0x18F728u;
    // 0x18f728: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x18f728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18f72c: 0x0  nop
    ctx->pc = 0x18f72cu;
    // NOP
label_18f730:
    // 0x18f730: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18f730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18f734:
    // 0x18f734: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x18f734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x18f738: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x18f738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18f73c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x18f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x18f740: 0x8e51004c  lw          $s1, 0x4C($s2)
    ctx->pc = 0x18f740u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x18f744: 0x415c2  srl         $v0, $a0, 23
    ctx->pc = 0x18f744u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x18f748: 0x8c66d2ac  lw          $a2, -0x2D54($v1)
    ctx->pc = 0x18f748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x18f74c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x18f74cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18f750: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18f750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f754: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x18f754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18f758: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18f758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f75c: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F75Cu;
    {
        const bool branch_taken_0x18f75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x18F760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F75Cu;
            // 0x18f760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f75c) {
            ctx->pc = 0x18F768u;
            goto label_18f768;
        }
    }
    ctx->pc = 0x18F764u;
    // 0x18f764: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x18f764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_18f768:
    // 0x18f768: 0x14a0003f  bnez        $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x18F768u;
    {
        const bool branch_taken_0x18f768 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f768) {
            ctx->pc = 0x18F868u;
            goto label_18f868;
        }
    }
    ctx->pc = 0x18F770u;
    // 0x18f770: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x18f770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18f774: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x18f774u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
    // 0x18f778: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x18f778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18f77c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f780: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x18f780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18f784: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18f788: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F788u;
    {
        const bool branch_taken_0x18f788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18F78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F788u;
            // 0x18f78c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f788) {
            ctx->pc = 0x18F794u;
            goto label_18f794;
        }
    }
    ctx->pc = 0x18F790u;
    // 0x18f790: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x18f790u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_18f794:
    // 0x18f794: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x18F794u;
    {
        const bool branch_taken_0x18f794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F794u;
            // 0x18f798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f794) {
            ctx->pc = 0x18F7D0u;
            goto label_18f7d0;
        }
    }
    ctx->pc = 0x18F79Cu;
    // 0x18f79c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18f7a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18f7a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18f7a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18f7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x18f7a8: 0xc089c6e  jal         func_2271B8
    ctx->pc = 0x18F7A8u;
    SET_GPR_U32(ctx, 31, 0x18F7B0u);
    ctx->pc = 0x18F7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F7A8u;
            // 0x18f7ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2271B8u;
    if (runtime->hasFunction(0x2271B8u)) {
        auto targetFn = runtime->lookupFunction(0x2271B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7B0u; }
        if (ctx->pc != 0x18F7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2271b8_0x227218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7B0u; }
        if (ctx->pc != 0x18F7B0u) { return; }
    }
    ctx->pc = 0x18F7B0u;
    // 0x18f7b0: 0xc089d2e  jal         func_2274B8
    ctx->pc = 0x18F7B0u;
    SET_GPR_U32(ctx, 31, 0x18F7B8u);
    ctx->pc = 0x18F7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F7B0u;
            // 0x18f7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2274B8u;
    if (runtime->hasFunction(0x2274B8u)) {
        auto targetFn = runtime->lookupFunction(0x2274B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7B8u; }
        if (ctx->pc != 0x18F7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2274b8_0x227520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7B8u; }
        if (ctx->pc != 0x18F7B8u) { return; }
    }
    ctx->pc = 0x18F7B8u;
    // 0x18f7b8: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x18F7B8u;
    SET_GPR_U32(ctx, 31, 0x18F7C0u);
    ctx->pc = 0x18F7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F7B8u;
            // 0x18f7bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7C0u; }
        if (ctx->pc != 0x18F7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7C0u; }
        if (ctx->pc != 0x18F7C0u) { return; }
    }
    ctx->pc = 0x18F7C0u;
    // 0x18f7c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f7c4: 0xc089d48  jal         func_227520
    ctx->pc = 0x18F7C4u;
    SET_GPR_U32(ctx, 31, 0x18F7CCu);
    ctx->pc = 0x18F7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F7C4u;
            // 0x18f7c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227520u;
    if (runtime->hasFunction(0x227520u)) {
        auto targetFn = runtime->lookupFunction(0x227520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7CCu; }
        if (ctx->pc != 0x18F7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_227520_0x227648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7CCu; }
        if (ctx->pc != 0x18F7CCu) { return; }
    }
    ctx->pc = 0x18F7CCu;
    // 0x18f7cc: 0x0  nop
    ctx->pc = 0x18f7ccu;
    // NOP
label_18f7d0:
    // 0x18f7d0: 0x52200021  beql        $s1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x18F7D0u;
    {
        const bool branch_taken_0x18f7d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f7d0) {
            ctx->pc = 0x18F7D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F7D0u;
            // 0x18f7d4: 0x96420004  lhu         $v0, 0x4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F858u;
            goto label_18f858;
        }
    }
    ctx->pc = 0x18F7D8u;
    // 0x18f7d8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x18f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18f7dc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18F7DCu;
    {
        const bool branch_taken_0x18f7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F7DCu;
            // 0x18f7e0: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f7dc) {
            ctx->pc = 0x18F84Cu;
            goto label_18f84c;
        }
    }
    ctx->pc = 0x18F7E4u;
    // 0x18f7e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18f7e8: 0xc04cb8e  jal         func_132E38
    ctx->pc = 0x18F7E8u;
    SET_GPR_U32(ctx, 31, 0x18F7F0u);
    ctx->pc = 0x18F7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F7E8u;
            // 0x18f7ec: 0x8c44be04  lw          $a0, -0x41FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950404)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E38u;
    if (runtime->hasFunction(0x132E38u)) {
        auto targetFn = runtime->lookupFunction(0x132E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7F0u; }
        if (ctx->pc != 0x18F7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E38_0x132e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7F0u; }
        if (ctx->pc != 0x18F7F0u) { return; }
    }
    ctx->pc = 0x18F7F0u;
    // 0x18f7f0: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x18f7f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18f7f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18f7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18f7f8: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x18F7F8u;
    {
        const bool branch_taken_0x18f7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f7f8) {
            ctx->pc = 0x18F7FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F7F8u;
            // 0x18f7fc: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F84Cu;
            goto label_18f84c;
        }
    }
    ctx->pc = 0x18F800u;
    // 0x18f800: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x18f800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18f804: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x18f804u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18f808: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x18f808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x18f80c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18F80Cu;
    {
        const bool branch_taken_0x18f80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F80Cu;
            // 0x18f810: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f80c) {
            ctx->pc = 0x18F840u;
            goto label_18f840;
        }
    }
    ctx->pc = 0x18F814u;
    // 0x18f814: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x18f814u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18f818: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x18f818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x18f81c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f820: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18f820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18f824: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f828: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18f82c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x18f82cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18f830: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x18f830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18f834: 0x40f809  jalr        $v0
    ctx->pc = 0x18F834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F83Cu);
        ctx->pc = 0x18F838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F834u;
            // 0x18f838: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18F83Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F638u: goto label_18f638;
            case 0x18F6C8u: goto label_18f6c8;
            case 0x18F6CCu: goto label_18f6cc;
            case 0x18F730u: goto label_18f730;
            case 0x18F734u: goto label_18f734;
            case 0x18F768u: goto label_18f768;
            case 0x18F794u: goto label_18f794;
            case 0x18F7D0u: goto label_18f7d0;
            case 0x18F840u: goto label_18f840;
            case 0x18F84Cu: goto label_18f84c;
            case 0x18F858u: goto label_18f858;
            case 0x18F868u: goto label_18f868;
            case 0x18F8A4u: goto label_18f8a4;
            case 0x18F8ECu: goto label_18f8ec;
            case 0x18F914u: goto label_18f914;
            case 0x18F918u: goto label_18f918;
            case 0x18F91Cu: goto label_18f91c;
            case 0x18F990u: goto label_18f990;
            case 0x18F994u: goto label_18f994;
            case 0x18F9D0u: goto label_18f9d0;
            case 0x18FA30u: goto label_18fa30;
            case 0x18FAE0u: goto label_18fae0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18F83Cu; }
            if (ctx->pc != 0x18F83Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18F83Cu;
    // 0x18f83c: 0x0  nop
    ctx->pc = 0x18f83cu;
    // NOP
label_18f840:
    // 0x18f840: 0xc04c9da  jal         func_132768
    ctx->pc = 0x18F840u;
    SET_GPR_U32(ctx, 31, 0x18F848u);
    ctx->pc = 0x18F844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F840u;
            // 0x18f844: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F848u; }
        if (ctx->pc != 0x18F848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F848u; }
        if (ctx->pc != 0x18F848u) { return; }
    }
    ctx->pc = 0x18F848u;
    // 0x18f848: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x18f848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_18f84c:
    // 0x18f84c: 0xc063ab0  jal         func_18EAC0
    ctx->pc = 0x18F84Cu;
    SET_GPR_U32(ctx, 31, 0x18F854u);
    ctx->pc = 0x18F850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F84Cu;
            // 0x18f850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EAC0u;
    if (runtime->hasFunction(0x18EAC0u)) {
        auto targetFn = runtime->lookupFunction(0x18EAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F854u; }
        if (ctx->pc != 0x18F854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_18eac0_0x18eae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F854u; }
        if (ctx->pc != 0x18F854u) { return; }
    }
    ctx->pc = 0x18F854u;
    // 0x18f854: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x18f854u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_18f858:
    // 0x18f858: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x18f858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x18f85c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x18f85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x18f860: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x18F860u;
    {
        const bool branch_taken_0x18f860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F860u;
            // 0x18f864: 0xa6420004  sh          $v0, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f860) {
            ctx->pc = 0x18F918u;
            goto label_18f918;
        }
    }
    ctx->pc = 0x18F868u;
label_18f868:
    // 0x18f868: 0x5200002c  beql        $s0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x18F868u;
    {
        const bool branch_taken_0x18f868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f868) {
            ctx->pc = 0x18F86Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F868u;
            // 0x18f86c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F91Cu;
            goto label_18f91c;
        }
    }
    ctx->pc = 0x18F870u;
    // 0x18f870: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x18f870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18f874: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F874u;
    {
        const bool branch_taken_0x18f874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F874u;
            // 0x18f878: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f874) {
            ctx->pc = 0x18F8ECu;
            goto label_18f8ec;
        }
    }
    ctx->pc = 0x18F87Cu;
    // 0x18f87c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f880: 0xc063b50  jal         func_18ED40
    ctx->pc = 0x18F880u;
    SET_GPR_U32(ctx, 31, 0x18F888u);
    ctx->pc = 0x18F884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F880u;
            // 0x18f884: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ED40u;
    if (runtime->hasFunction(0x18ED40u)) {
        auto targetFn = runtime->lookupFunction(0x18ED40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F888u; }
        if (ctx->pc != 0x18F888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ED40_0x18ed40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F888u; }
        if (ctx->pc != 0x18F888u) { return; }
    }
    ctx->pc = 0x18F888u;
    // 0x18f888: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x18f888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f88c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18f88cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f890: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18f890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f894: 0x0  nop
    ctx->pc = 0x18f894u;
    // NOP
    // 0x18f898: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18F898u;
    {
        const bool branch_taken_0x18f898 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F898u;
            // 0x18f89c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f898) {
            ctx->pc = 0x18F8A4u;
            goto label_18f8a4;
        }
    }
    ctx->pc = 0x18F8A0u;
    // 0x18f8a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18f8a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f8a4:
    // 0x18f8a4: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F8A4u;
    {
        const bool branch_taken_0x18f8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f8a4) {
            ctx->pc = 0x18F8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8A4u;
            // 0x18f8a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F91Cu;
            goto label_18f91c;
        }
    }
    ctx->pc = 0x18F8ACu;
    // 0x18f8ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18f8b0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x18f8b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x18f8b4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x18f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x18f8b8: 0x40f809  jalr        $v0
    ctx->pc = 0x18F8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F8C0u);
        ctx->pc = 0x18F8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8B8u;
            // 0x18f8bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18F8C0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F638u: goto label_18f638;
            case 0x18F6C8u: goto label_18f6c8;
            case 0x18F6CCu: goto label_18f6cc;
            case 0x18F730u: goto label_18f730;
            case 0x18F734u: goto label_18f734;
            case 0x18F768u: goto label_18f768;
            case 0x18F794u: goto label_18f794;
            case 0x18F7D0u: goto label_18f7d0;
            case 0x18F840u: goto label_18f840;
            case 0x18F84Cu: goto label_18f84c;
            case 0x18F858u: goto label_18f858;
            case 0x18F868u: goto label_18f868;
            case 0x18F8A4u: goto label_18f8a4;
            case 0x18F8ECu: goto label_18f8ec;
            case 0x18F914u: goto label_18f914;
            case 0x18F918u: goto label_18f918;
            case 0x18F91Cu: goto label_18f91c;
            case 0x18F990u: goto label_18f990;
            case 0x18F994u: goto label_18f994;
            case 0x18F9D0u: goto label_18f9d0;
            case 0x18FA30u: goto label_18fa30;
            case 0x18FAE0u: goto label_18fae0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18F8C0u; }
            if (ctx->pc != 0x18F8C0u) { return; }
        }
        }
    }
    ctx->pc = 0x18F8C0u;
    // 0x18f8c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18f8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f8c4: 0xc08235e  jal         func_208D78
    ctx->pc = 0x18F8C4u;
    SET_GPR_U32(ctx, 31, 0x18F8CCu);
    ctx->pc = 0x18F8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8C4u;
            // 0x18f8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8CCu; }
        if (ctx->pc != 0x18F8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8CCu; }
        if (ctx->pc != 0x18F8CCu) { return; }
    }
    ctx->pc = 0x18F8CCu;
    // 0x18f8cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x18f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18f8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f8d4: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x18F8D4u;
    SET_GPR_U32(ctx, 31, 0x18F8DCu);
    ctx->pc = 0x18F8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8D4u;
            // 0x18f8d8: 0x9045002c  lbu         $a1, 0x2C($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8DCu; }
        if (ctx->pc != 0x18F8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8DCu; }
        if (ctx->pc != 0x18F8DCu) { return; }
    }
    ctx->pc = 0x18F8DCu;
    // 0x18f8dc: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18f8e0: 0x2442f098  addiu       $v0, $v0, -0xF68
    ctx->pc = 0x18f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963352));
    // 0x18f8e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18F8E4u;
    {
        const bool branch_taken_0x18f8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8E4u;
            // 0x18f8e8: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8e4) {
            ctx->pc = 0x18F918u;
            goto label_18f918;
        }
    }
    ctx->pc = 0x18F8ECu;
label_18f8ec:
    // 0x18f8ec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18f8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18f8f0: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x18f8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x18f8f4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18f8f8: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x18f8f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x18f8fc: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x18f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x18f900: 0x40f809  jalr        $v0
    ctx->pc = 0x18F900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F908u);
        ctx->pc = 0x18F904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F900u;
            // 0x18f904: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18F908u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F638u: goto label_18f638;
            case 0x18F6C8u: goto label_18f6c8;
            case 0x18F6CCu: goto label_18f6cc;
            case 0x18F730u: goto label_18f730;
            case 0x18F734u: goto label_18f734;
            case 0x18F768u: goto label_18f768;
            case 0x18F794u: goto label_18f794;
            case 0x18F7D0u: goto label_18f7d0;
            case 0x18F840u: goto label_18f840;
            case 0x18F84Cu: goto label_18f84c;
            case 0x18F858u: goto label_18f858;
            case 0x18F868u: goto label_18f868;
            case 0x18F8A4u: goto label_18f8a4;
            case 0x18F8ECu: goto label_18f8ec;
            case 0x18F914u: goto label_18f914;
            case 0x18F918u: goto label_18f918;
            case 0x18F91Cu: goto label_18f91c;
            case 0x18F990u: goto label_18f990;
            case 0x18F994u: goto label_18f994;
            case 0x18F9D0u: goto label_18f9d0;
            case 0x18FA30u: goto label_18fa30;
            case 0x18FAE0u: goto label_18fae0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18F908u; }
            if (ctx->pc != 0x18F908u) { return; }
        }
        }
    }
    ctx->pc = 0x18F908u;
    // 0x18f908: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x18f908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x18f90c: 0xc063d8e  jal         func_18F638
    ctx->pc = 0x18F90Cu;
    SET_GPR_U32(ctx, 31, 0x18F914u);
    ctx->pc = 0x18F910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F90Cu;
            // 0x18f910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F638u;
    runtime->cooperativeGuestYield();
    goto label_18f638;
    ctx->pc = 0x18F914u;
label_18f914:
    // 0x18f914: 0x0  nop
    ctx->pc = 0x18f914u;
    // NOP
label_18f918:
    // 0x18f918: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18f918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18f91c:
    // 0x18f91c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18f91cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f920: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x18f920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f928: 0x3e00008  jr          $ra
    ctx->pc = 0x18F928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F928u;
            // 0x18f92c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F638u: goto label_18f638;
            case 0x18F6C8u: goto label_18f6c8;
            case 0x18F6CCu: goto label_18f6cc;
            case 0x18F730u: goto label_18f730;
            case 0x18F734u: goto label_18f734;
            case 0x18F768u: goto label_18f768;
            case 0x18F794u: goto label_18f794;
            case 0x18F7D0u: goto label_18f7d0;
            case 0x18F840u: goto label_18f840;
            case 0x18F84Cu: goto label_18f84c;
            case 0x18F858u: goto label_18f858;
            case 0x18F868u: goto label_18f868;
            case 0x18F8A4u: goto label_18f8a4;
            case 0x18F8ECu: goto label_18f8ec;
            case 0x18F914u: goto label_18f914;
            case 0x18F918u: goto label_18f918;
            case 0x18F91Cu: goto label_18f91c;
            case 0x18F990u: goto label_18f990;
            case 0x18F994u: goto label_18f994;
            case 0x18F9D0u: goto label_18f9d0;
            case 0x18FA30u: goto label_18fa30;
            case 0x18FAE0u: goto label_18fae0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F930u;
    // 0x18f930: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18f930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18f934: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x18f934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x18f938: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x18f938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x18f93c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18f93cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f940: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x18f940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x18f944: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18f944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18f948: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18f948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18f94c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18f94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18f950: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x18f950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x18f954: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x18f954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x18f958: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18F958u;
    {
        const bool branch_taken_0x18f958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F958u;
            // 0x18f95c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f958) {
            ctx->pc = 0x18F994u;
            goto label_18f994;
        }
    }
    ctx->pc = 0x18F960u;
    // 0x18f960: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x18f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18f964: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x18f964u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x18f968: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18f968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18f96c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18f970: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x18f970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x18f974: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18f974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18f978: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18f978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f97c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f980: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F980u;
    {
        const bool branch_taken_0x18f980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x18F984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F980u;
            // 0x18f984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f980) {
            ctx->pc = 0x18F990u;
            goto label_18f990;
        }
    }
    ctx->pc = 0x18F988u;
    // 0x18f988: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x18f988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18f98c: 0x0  nop
    ctx->pc = 0x18f98cu;
    // NOP
label_18f990:
    // 0x18f990: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18f990u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18f994:
    // 0x18f994: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18f994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18f998: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x18f998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x18f99c: 0x2442f6d8  addiu       $v0, $v0, -0x928
    ctx->pc = 0x18f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964952));
    // 0x18f9a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x18f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18f9a4: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x18f9a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x18f9a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18f9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f9ac: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x18f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x18f9b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18f9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f9b4: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x18f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x18f9b8: 0x8e530068  lw          $s3, 0x68($s2)
    ctx->pc = 0x18f9b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x18f9bc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x18f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x18f9c0: 0xa7a0000a  sh          $zero, 0xA($sp)
    ctx->pc = 0x18f9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x18f9c4: 0xa7a00022  sh          $zero, 0x22($sp)
    ctx->pc = 0x18f9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x18f9c8: 0xa7a00020  sh          $zero, 0x20($sp)
    ctx->pc = 0x18f9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x18f9cc: 0x0  nop
    ctx->pc = 0x18f9ccu;
    // NOP
label_18f9d0:
    // 0x18f9d0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x18f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18f9d4: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x18f9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x18f9d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18f9dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18f9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18f9e0: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x18f9e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x18f9e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18F9E4u;
    {
        const bool branch_taken_0x18f9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F9E4u;
            // 0x18f9e8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9e4) {
            ctx->pc = 0x18F9D0u;
            runtime->cooperativeGuestYield();
            goto label_18f9d0;
        }
    }
    ctx->pc = 0x18F9ECu;
    // 0x18f9ec: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x18f9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x18f9f0: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x18f9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x18f9f4: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x18f9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x18f9f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x18f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18f9fc: 0x2450e848  addiu       $s0, $v0, -0x17B8
    ctx->pc = 0x18f9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x18fa00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18fa00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fa04: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x18fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18fa08: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18fa0c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x18fa0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x18fa10: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x18fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x18fa14: 0x40f809  jalr        $v0
    ctx->pc = 0x18FA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FA1Cu);
        ctx->pc = 0x18FA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA14u;
            // 0x18fa18: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18FA1Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F638u: goto label_18f638;
            case 0x18F6C8u: goto label_18f6c8;
            case 0x18F6CCu: goto label_18f6cc;
            case 0x18F730u: goto label_18f730;
            case 0x18F734u: goto label_18f734;
            case 0x18F768u: goto label_18f768;
            case 0x18F794u: goto label_18f794;
            case 0x18F7D0u: goto label_18f7d0;
            case 0x18F840u: goto label_18f840;
            case 0x18F84Cu: goto label_18f84c;
            case 0x18F858u: goto label_18f858;
            case 0x18F868u: goto label_18f868;
            case 0x18F8A4u: goto label_18f8a4;
            case 0x18F8ECu: goto label_18f8ec;
            case 0x18F914u: goto label_18f914;
            case 0x18F918u: goto label_18f918;
            case 0x18F91Cu: goto label_18f91c;
            case 0x18F990u: goto label_18f990;
            case 0x18F994u: goto label_18f994;
            case 0x18F9D0u: goto label_18f9d0;
            case 0x18FA30u: goto label_18fa30;
            case 0x18FAE0u: goto label_18fae0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18FA1Cu; }
            if (ctx->pc != 0x18FA1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18FA1Cu;
    // 0x18fa1c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x18fa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x18fa20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FA20u;
    {
        const bool branch_taken_0x18fa20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA20u;
            // 0x18fa24: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa20) {
            ctx->pc = 0x18FA30u;
            goto label_18fa30;
        }
    }
    ctx->pc = 0x18FA28u;
    // 0x18fa28: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x18FA28u;
    SET_GPR_U32(ctx, 31, 0x18FA30u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA30u; }
        if (ctx->pc != 0x18FA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA30u; }
        if (ctx->pc != 0x18FA30u) { return; }
    }
    ctx->pc = 0x18FA30u;
label_18fa30:
    // 0x18fa30: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x18fa30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18fa34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18fa38: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18fa3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18fa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fa40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fa44: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18fa48: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x18fa48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18fa4c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x18fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18fa50: 0x40f809  jalr        $v0
    ctx->pc = 0x18FA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FA58u);
        ctx->pc = 0x18FA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA50u;
            // 0x18fa54: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18FA58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F638u: goto label_18f638;
            case 0x18F6C8u: goto label_18f6c8;
            case 0x18F6CCu: goto label_18f6cc;
            case 0x18F730u: goto label_18f730;
            case 0x18F734u: goto label_18f734;
            case 0x18F768u: goto label_18f768;
            case 0x18F794u: goto label_18f794;
            case 0x18F7D0u: goto label_18f7d0;
            case 0x18F840u: goto label_18f840;
            case 0x18F84Cu: goto label_18f84c;
            case 0x18F858u: goto label_18f858;
            case 0x18F868u: goto label_18f868;
            case 0x18F8A4u: goto label_18f8a4;
            case 0x18F8ECu: goto label_18f8ec;
            case 0x18F914u: goto label_18f914;
            case 0x18F918u: goto label_18f918;
            case 0x18F91Cu: goto label_18f91c;
            case 0x18F990u: goto label_18f990;
            case 0x18F994u: goto label_18f994;
            case 0x18F9D0u: goto label_18f9d0;
            case 0x18FA30u: goto label_18fa30;
            case 0x18FAE0u: goto label_18fae0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18FA58u; }
            if (ctx->pc != 0x18FA58u) { return; }
        }
        }
    }
    ctx->pc = 0x18FA58u;
    // 0x18fa58: 0xc063aa0  jal         func_18EA80
    ctx->pc = 0x18FA58u;
    SET_GPR_U32(ctx, 31, 0x18FA60u);
    ctx->pc = 0x18FA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA58u;
            // 0x18fa5c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EA80u;
    if (runtime->hasFunction(0x18EA80u)) {
        auto targetFn = runtime->lookupFunction(0x18EA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA60u; }
        if (ctx->pc != 0x18FA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018EA80_0x18ea80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA60u; }
        if (ctx->pc != 0x18FA60u) { return; }
    }
    ctx->pc = 0x18FA60u;
    // 0x18fa60: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x18fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x18fa64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18fa64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fa68: 0x8c64c8d0  lw          $a0, -0x3730($v1)
    ctx->pc = 0x18fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953168)));
    // 0x18fa6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18fa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fa70: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x18FA70u;
    SET_GPR_U32(ctx, 31, 0x18FA78u);
    ctx->pc = 0x18FA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA70u;
            // 0x18fa74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA78u; }
        if (ctx->pc != 0x18FA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA78u; }
        if (ctx->pc != 0x18FA78u) { return; }
    }
    ctx->pc = 0x18FA78u;
    // 0x18fa78: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x18fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x18fa7c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x18fa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x18fa80: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x18fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x18fa84: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x18FA84u;
    SET_GPR_U32(ctx, 31, 0x18FA8Cu);
    ctx->pc = 0x18FA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA84u;
            // 0x18fa88: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA8Cu; }
        if (ctx->pc != 0x18FA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA8Cu; }
        if (ctx->pc != 0x18FA8Cu) { return; }
    }
    ctx->pc = 0x18FA8Cu;
    // 0x18fa8c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x18fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18fa90: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fa94: 0x2442f580  addiu       $v0, $v0, -0xA80
    ctx->pc = 0x18fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964608));
    // 0x18fa98: 0xc462001c  lwc1        $f2, 0x1C($v1)
    ctx->pc = 0x18fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18fa9c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x18fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18faa0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18faa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18faa4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x18faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x18faa8: 0xae30004c  sw          $s0, 0x4C($s1)
    ctx->pc = 0x18faa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 16));
    // 0x18faac: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x18faacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x18fab0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18fab0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fab4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x18fab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x18fab8: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x18fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x18fabc: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x18fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x18fac0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x18fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18fac4: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x18fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x18fac8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FAC8u;
    {
        const bool branch_taken_0x18fac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fac8) {
            ctx->pc = 0x18FACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18FAC8u;
            // 0x18facc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18FAE0u;
            goto label_18fae0;
        }
    }
    ctx->pc = 0x18FAD0u;
    // 0x18fad0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fad4: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FAD4u;
    {
        const bool branch_taken_0x18fad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18FAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FAD4u;
            // 0x18fad8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fad4) {
            ctx->pc = 0x18FAE0u;
            goto label_18fae0;
        }
    }
    ctx->pc = 0x18FADCu;
    // 0x18fadc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18fae0:
    // 0x18fae0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x18fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x18fae4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18fae8: 0xa642002a  sh          $v0, 0x2A($s2)
    ctx->pc = 0x18fae8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x18faec: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x18faecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18faf0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x18faf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18faf4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x18faf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18faf8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18faf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18fafc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18fafcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18fb00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18fb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18fb04: 0x3e00008  jr          $ra
    ctx->pc = 0x18FB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FB04u;
            // 0x18fb08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F638u: goto label_18f638;
            case 0x18F6C8u: goto label_18f6c8;
            case 0x18F6CCu: goto label_18f6cc;
            case 0x18F730u: goto label_18f730;
            case 0x18F734u: goto label_18f734;
            case 0x18F768u: goto label_18f768;
            case 0x18F794u: goto label_18f794;
            case 0x18F7D0u: goto label_18f7d0;
            case 0x18F840u: goto label_18f840;
            case 0x18F84Cu: goto label_18f84c;
            case 0x18F858u: goto label_18f858;
            case 0x18F868u: goto label_18f868;
            case 0x18F8A4u: goto label_18f8a4;
            case 0x18F8ECu: goto label_18f8ec;
            case 0x18F914u: goto label_18f914;
            case 0x18F918u: goto label_18f918;
            case 0x18F91Cu: goto label_18f91c;
            case 0x18F990u: goto label_18f990;
            case 0x18F994u: goto label_18f994;
            case 0x18F9D0u: goto label_18f9d0;
            case 0x18FA30u: goto label_18fa30;
            case 0x18FAE0u: goto label_18fae0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18FB0Cu;
    // 0x18fb0c: 0x0  nop
    ctx->pc = 0x18fb0cu;
    // NOP
}
