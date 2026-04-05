#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022F5E0
// Address: 0x22f5e0 - 0x22fdc8
void sub_0022F5E0_0x22f5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F5E0_0x22f5e0");
#endif

    ctx->pc = 0x22f5e0u;

    // 0x22f5e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22f5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22f5e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22f5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x22f5e8: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x22f5e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x22f5ec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x22f5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x22f5f0: 0x8e2312b0  lw          $v1, 0x12B0($s1)
    ctx->pc = 0x22f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
    // 0x22f5f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22f5f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5f8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22f5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x22f5fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22f5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22f600: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x22f600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x22f604: 0x104001c0  beqz        $v0, . + 4 + (0x1C0 << 2)
    ctx->pc = 0x22F604u;
    {
        const bool branch_taken_0x22f604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F604u;
            // 0x22f608: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f604) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F60Cu;
    // 0x22f60c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22f610: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22f610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22f614: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x22f614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x22f618: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22f618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f61c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f620: 0x400008  jr          $v0
    ctx->pc = 0x22F620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22F628u: goto label_22f628;
            case 0x22F64Cu: goto label_22f64c;
            case 0x22F738u: goto label_22f738;
            case 0x22F778u: goto label_22f778;
            case 0x22F7F4u: goto label_22f7f4;
            case 0x22F810u: goto label_22f810;
            case 0x22F84Cu: goto label_22f84c;
            case 0x22F8B8u: goto label_22f8b8;
            case 0x22F958u: goto label_22f958;
            case 0x22FA38u: goto label_22fa38;
            case 0x22FAD8u: goto label_22fad8;
            case 0x22FB30u: goto label_22fb30;
            case 0x22FB74u: goto label_22fb74;
            case 0x22FBA0u: goto label_22fba0;
            case 0x22FC28u: goto label_22fc28;
            case 0x22FC58u: goto label_22fc58;
            case 0x22FC94u: goto label_22fc94;
            case 0x22FCF0u: goto label_22fcf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22F628u;
label_22f628:
    // 0x22f628: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22f628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22f62c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22f630: 0xac6212a4  sw          $v0, 0x12A4($v1)
    ctx->pc = 0x22f630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4772), GPR_U32(ctx, 2));
    // 0x22f634: 0xc08b852  jal         func_22E148
    ctx->pc = 0x22F634u;
    SET_GPR_U32(ctx, 31, 0x22F63Cu);
    ctx->pc = 0x22F638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F634u;
            // 0x22f638: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F63Cu; }
        if (ctx->pc != 0x22F63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F63Cu; }
        if (ctx->pc != 0x22F63Cu) { return; }
    }
    ctx->pc = 0x22F63Cu;
    // 0x22f63c: 0x104001b2  beqz        $v0, . + 4 + (0x1B2 << 2)
    ctx->pc = 0x22F63Cu;
    {
        const bool branch_taken_0x22f63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F63Cu;
            // 0x22f640: 0x8e2212b0  lw          $v0, 0x12B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f63c) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F644u;
    // 0x22f644: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x22F644u;
    {
        const bool branch_taken_0x22f644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F644u;
            // 0x22f648: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f644) {
            ctx->pc = 0x22FCE8u;
            goto label_22fce8;
        }
    }
    ctx->pc = 0x22F64Cu;
label_22f64c:
    // 0x22f64c: 0xc08b852  jal         func_22E148
    ctx->pc = 0x22F64Cu;
    SET_GPR_U32(ctx, 31, 0x22F654u);
    ctx->pc = 0x22F650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F64Cu;
            // 0x22f650: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F654u; }
        if (ctx->pc != 0x22F654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F654u; }
        if (ctx->pc != 0x22F654u) { return; }
    }
    ctx->pc = 0x22F654u;
    // 0x22f654: 0x104001ac  beqz        $v0, . + 4 + (0x1AC << 2)
    ctx->pc = 0x22F654u;
    {
        const bool branch_taken_0x22f654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F654u;
            // 0x22f658: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f654) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F65Cu;
    // 0x22f65c: 0x8ca2bc70  lw          $v0, -0x4390($a1)
    ctx->pc = 0x22f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950000)));
    // 0x22f660: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x22F660u;
    {
        const bool branch_taken_0x22f660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F660u;
            // 0x22f664: 0x24a6bc70  addiu       $a2, $a1, -0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f660) {
            ctx->pc = 0x22F6B4u;
            goto label_22f6b4;
        }
    }
    ctx->pc = 0x22F668u;
    // 0x22f668: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22f668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22f66c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x22f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22f670: 0x2444bc68  addiu       $a0, $v0, -0x4398
    ctx->pc = 0x22f670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x22f674: 0x8c42bc68  lw          $v0, -0x4398($v0)
    ctx->pc = 0x22f674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949992)));
    // 0x22f678: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x22F678u;
    {
        const bool branch_taken_0x22f678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F678u;
            // 0x22f67c: 0x24a2bc70  addiu       $v0, $a1, -0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f678) {
            ctx->pc = 0x22F6B8u;
            goto label_22f6b8;
        }
    }
    ctx->pc = 0x22F680u;
    // 0x22f680: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22f680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22f684: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F684u;
    {
        const bool branch_taken_0x22f684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f684) {
            ctx->pc = 0x22F688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F684u;
            // 0x22f688: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F6A4u;
            goto label_22f6a4;
        }
    }
    ctx->pc = 0x22F68Cu;
    // 0x22f68c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22f690: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F690u;
    {
        const bool branch_taken_0x22f690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F690u;
            // 0x22f694: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f690) {
            ctx->pc = 0x22F6A0u;
            goto label_22f6a0;
        }
    }
    ctx->pc = 0x22F698u;
    // 0x22f698: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x22F698u;
    {
        const bool branch_taken_0x22f698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F698u;
            // 0x22f69c: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f698) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F6A0u;
label_22f6a0:
    // 0x22f6a0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_22f6a4:
    // 0x22f6a4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x22f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22f6a8: 0xae2212b0  sw          $v0, 0x12B0($s1)
    ctx->pc = 0x22f6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
    // 0x22f6ac: 0x10000196  b           . + 4 + (0x196 << 2)
    ctx->pc = 0x22F6ACu;
    {
        const bool branch_taken_0x22f6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F6ACu;
            // 0x22f6b0: 0xac6012a4  sw          $zero, 0x12A4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6ac) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F6B4u;
label_22f6b4:
    // 0x22f6b4: 0x24a2bc70  addiu       $v0, $a1, -0x4390
    ctx->pc = 0x22f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950000));
label_22f6b8:
    // 0x22f6b8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x22f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22f6bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22F6BCu;
    {
        const bool branch_taken_0x22f6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F6BCu;
            // 0x22f6c0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6bc) {
            ctx->pc = 0x22F6E8u;
            goto label_22f6e8;
        }
    }
    ctx->pc = 0x22F6C4u;
    // 0x22f6c4: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x22f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22f6c8: 0x8c42bc6c  lw          $v0, -0x4394($v0)
    ctx->pc = 0x22f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949996)));
    // 0x22f6cc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F6CCu;
    {
        const bool branch_taken_0x22f6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F6CCu;
            // 0x22f6d0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6cc) {
            ctx->pc = 0x22F6E8u;
            goto label_22f6e8;
        }
    }
    ctx->pc = 0x22F6D4u;
    // 0x22f6d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f6d8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x22f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22f6dc: 0xac4312a4  sw          $v1, 0x12A4($v0)
    ctx->pc = 0x22f6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4772), GPR_U32(ctx, 3));
    // 0x22f6e0: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x22F6E0u;
    {
        const bool branch_taken_0x22f6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F6E0u;
            // 0x22f6e4: 0xae2412b0  sw          $a0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6e0) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F6E8u;
label_22f6e8:
    // 0x22f6e8: 0x8ca4bc70  lw          $a0, -0x4390($a1)
    ctx->pc = 0x22f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950000)));
    // 0x22f6ec: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F6ECu;
    {
        const bool branch_taken_0x22f6ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F6ECu;
            // 0x22f6f0: 0x24a2bc70  addiu       $v0, $a1, -0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6ec) {
            ctx->pc = 0x22F700u;
            goto label_22f700;
        }
    }
    ctx->pc = 0x22F6F4u;
    // 0x22f6f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x22f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22f6f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22F6F8u;
    {
        const bool branch_taken_0x22f6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F6F8u;
            // 0x22f6fc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6f8) {
            ctx->pc = 0x22F720u;
            goto label_22f720;
        }
    }
    ctx->pc = 0x22F700u;
label_22f700:
    // 0x22f700: 0x2c820001  sltiu       $v0, $a0, 0x1
    ctx->pc = 0x22f700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x22f704: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22f704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22f708: 0x8c64cb94  lw          $a0, -0x346C($v1)
    ctx->pc = 0x22f708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953876)));
    // 0x22f70c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22f710: 0xac6212a4  sw          $v0, 0x12A4($v1)
    ctx->pc = 0x22f710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4772), GPR_U32(ctx, 2));
    // 0x22f714: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22f718: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x22F718u;
    {
        const bool branch_taken_0x22f718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F718u;
            // 0x22f71c: 0xac8200dc  sw          $v0, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f718) {
            ctx->pc = 0x22F8ACu;
            goto label_22f8ac;
        }
    }
    ctx->pc = 0x22F720u;
label_22f720:
    // 0x22f720: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22f720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f724: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x22f724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x22f728: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22f728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22f72c: 0xac4400dc  sw          $a0, 0xDC($v0)
    ctx->pc = 0x22f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 4));
    // 0x22f730: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x22F730u;
    {
        const bool branch_taken_0x22f730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F730u;
            // 0x22f734: 0xae2312b0  sw          $v1, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f730) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F738u;
label_22f738:
    // 0x22f738: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22f738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22f73c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22f740: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x22f740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x22f744: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22f744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22f748: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x22f748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x22f74c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22f750: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x22F750u;
    SET_GPR_U32(ctx, 31, 0x22F758u);
    ctx->pc = 0x22F754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F750u;
            // 0x22f754: 0xac820274  sw          $v0, 0x274($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F758u; }
        if (ctx->pc != 0x22F758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F758u; }
        if (ctx->pc != 0x22F758u) { return; }
    }
    ctx->pc = 0x22F758u;
    // 0x22f758: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22f758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22f75c: 0x8c4212ac  lw          $v0, 0x12AC($v0)
    ctx->pc = 0x22f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x22f760: 0x14400160  bnez        $v0, . + 4 + (0x160 << 2)
    ctx->pc = 0x22F760u;
    {
        const bool branch_taken_0x22f760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F760u;
            // 0x22f764: 0x8e2212b0  lw          $v0, 0x12B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f760) {
            ctx->pc = 0x22FCE4u;
            goto label_22fce4;
        }
    }
    ctx->pc = 0x22F768u;
    // 0x22f768: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22f768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22f76c: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x22F76Cu;
    {
        const bool branch_taken_0x22f76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F76Cu;
            // 0x22f770: 0xac4012a4  sw          $zero, 0x12A4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f76c) {
            ctx->pc = 0x22FCE0u;
            goto label_22fce0;
        }
    }
    ctx->pc = 0x22F774u;
    // 0x22f774: 0x0  nop
    ctx->pc = 0x22f774u;
    // NOP
label_22f778:
    // 0x22f778: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22f778u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22f77c: 0xc08b852  jal         func_22E148
    ctx->pc = 0x22F77Cu;
    SET_GPR_U32(ctx, 31, 0x22F784u);
    ctx->pc = 0x22F780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F77Cu;
            // 0x22f780: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F784u; }
        if (ctx->pc != 0x22F784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F784u; }
        if (ctx->pc != 0x22F784u) { return; }
    }
    ctx->pc = 0x22F784u;
    // 0x22f784: 0x10400160  beqz        $v0, . + 4 + (0x160 << 2)
    ctx->pc = 0x22F784u;
    {
        const bool branch_taken_0x22f784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F784u;
            // 0x22f788: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f784) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F78Cu;
    // 0x22f78c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22f790: 0x2442bc70  addiu       $v0, $v0, -0x4390
    ctx->pc = 0x22f790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950000));
    // 0x22f794: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x22f794u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22f798: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22f798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22f79c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f7a0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22F7A0u;
    {
        const bool branch_taken_0x22f7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F7A0u;
            // 0x22f7a4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7a0) {
            ctx->pc = 0x22F7CCu;
            goto label_22f7cc;
        }
    }
    ctx->pc = 0x22F7A8u;
    // 0x22f7a8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x22f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22f7ac: 0x2442bc68  addiu       $v0, $v0, -0x4398
    ctx->pc = 0x22f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x22f7b0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x22f7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22f7b4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22f7b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f7bc: 0x3842002f  xori        $v0, $v0, 0x2F
    ctx->pc = 0x22f7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)47);
    // 0x22f7c0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x22f7c0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x22f7c4: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x22F7C4u;
    {
        const bool branch_taken_0x22f7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F7C4u;
            // 0x22f7c8: 0xae2312b0  sw          $v1, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7c4) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F7CCu;
label_22f7cc:
    // 0x22f7cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22f7d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f7d4: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x22f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x22f7d8: 0x1043006e  beq         $v0, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x22F7D8u;
    {
        const bool branch_taken_0x22f7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F7D8u;
            // 0x22f7dc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7d8) {
            ctx->pc = 0x22F994u;
            goto label_22f994;
        }
    }
    ctx->pc = 0x22F7E0u;
    // 0x22f7e0: 0x8c4212ac  lw          $v0, 0x12AC($v0)
    ctx->pc = 0x22f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x22f7e4: 0x14400148  bnez        $v0, . + 4 + (0x148 << 2)
    ctx->pc = 0x22F7E4u;
    {
        const bool branch_taken_0x22f7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F7E4u;
            // 0x22f7e8: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7e4) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F7ECu;
    // 0x22f7ec: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x22F7ECu;
    {
        const bool branch_taken_0x22f7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F7ECu;
            // 0x22f7f0: 0xae0212a4  sw          $v0, 0x12A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7ec) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F7F4u;
label_22f7f4:
    // 0x22f7f4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22f7f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22f7fc: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x22f7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x22f800: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22f800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22f804: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x22f804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x22f808: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x22F808u;
    {
        const bool branch_taken_0x22f808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F808u;
            // 0x22f80c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f808) {
            ctx->pc = 0x22FCD8u;
            goto label_22fcd8;
        }
    }
    ctx->pc = 0x22F810u;
label_22f810:
    // 0x22f810: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22f810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22f814: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x22f814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x22f818: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x22F818u;
    {
        const bool branch_taken_0x22f818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F818u;
            // 0x22f81c: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f818) {
            ctx->pc = 0x22F994u;
            goto label_22f994;
        }
    }
    ctx->pc = 0x22F820u;
    // 0x22f820: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x22f820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f824: 0x10400138  beqz        $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x22F824u;
    {
        const bool branch_taken_0x22f824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F824u;
            // 0x22f828: 0x8e2212b0  lw          $v0, 0x12B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f824) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F82Cu;
    // 0x22f82c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22f82cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22f830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f834: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x22f834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x22f838: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22f83c: 0xaca312ac  sw          $v1, 0x12AC($a1)
    ctx->pc = 0x22f83cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4780), GPR_U32(ctx, 3));
    // 0x22f840: 0xac8612a4  sw          $a2, 0x12A4($a0)
    ctx->pc = 0x22f840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4772), GPR_U32(ctx, 6));
    // 0x22f844: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x22F844u;
    {
        const bool branch_taken_0x22f844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F844u;
            // 0x22f848: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f844) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F84Cu;
label_22f84c:
    // 0x22f84c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22f84cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22f850: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22f850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22f854: 0x8e0412a4  lw          $a0, 0x12A4($s0)
    ctx->pc = 0x22f854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
    // 0x22f858: 0x8c43cb94  lw          $v1, -0x346C($v0)
    ctx->pc = 0x22f858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x22f85c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x22f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22f860: 0xc08ba42  jal         func_22E908
    ctx->pc = 0x22F860u;
    SET_GPR_U32(ctx, 31, 0x22F868u);
    ctx->pc = 0x22F864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F860u;
            // 0x22f864: 0xac6200dc  sw          $v0, 0xDC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E908u;
    if (runtime->hasFunction(0x22E908u)) {
        auto targetFn = runtime->lookupFunction(0x22E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F868u; }
        if (ctx->pc != 0x22F868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E908_0x22e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F868u; }
        if (ctx->pc != 0x22F868u) { return; }
    }
    ctx->pc = 0x22F868u;
    // 0x22f868: 0x10400127  beqz        $v0, . + 4 + (0x127 << 2)
    ctx->pc = 0x22F868u;
    {
        const bool branch_taken_0x22f868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F868u;
            // 0x22f86c: 0x8e0212a4  lw          $v0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f868) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F870u;
    // 0x22f870: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22f870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x22f874: 0x2463bc78  addiu       $v1, $v1, -0x4388
    ctx->pc = 0x22f874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950008));
    // 0x22f878: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x22f878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f87c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x22f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22f880: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22f880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f884: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F884u;
    {
        const bool branch_taken_0x22f884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F884u;
            // 0x22f888: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f884) {
            ctx->pc = 0x22F894u;
            goto label_22f894;
        }
    }
    ctx->pc = 0x22F88Cu;
    // 0x22f88c: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x22F88Cu;
    {
        const bool branch_taken_0x22f88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F88Cu;
            // 0x22f890: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f88c) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F894u;
label_22f894:
    // 0x22f894: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22f894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22f898: 0x2442bc70  addiu       $v0, $v0, -0x4390
    ctx->pc = 0x22f898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950000));
    // 0x22f89c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22f8a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f8a4: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x22F8A4u;
    {
        const bool branch_taken_0x22f8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F8A4u;
            // 0x22f8a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8a4) {
            ctx->pc = 0x22FC8Cu;
            goto label_22fc8c;
        }
    }
    ctx->pc = 0x22F8ACu;
label_22f8ac:
    // 0x22f8ac: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x22f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22f8b0: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x22F8B0u;
    {
        const bool branch_taken_0x22f8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F8B0u;
            // 0x22f8b4: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8b0) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F8B8u;
label_22f8b8:
    // 0x22f8b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22f8b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f8bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f8c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22f8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f8c4: 0x0  nop
    ctx->pc = 0x22f8c4u;
    // NOP
label_22f8c8:
    // 0x22f8c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22f8cc: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x22f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22f8d0: 0x8c4412a4  lw          $a0, 0x12A4($v0)
    ctx->pc = 0x22f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x22f8d4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22f8d8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x22f8d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22f8dc: 0x2447be80  addiu       $a3, $v0, -0x4180
    ctx->pc = 0x22f8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950528));
    // 0x22f8e0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x22f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x22f8e4: 0x3c03cafe  lui         $v1, 0xCAFE
    ctx->pc = 0x22f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51966 << 16));
    // 0x22f8e8: 0x3463bad1  ori         $v1, $v1, 0xBAD1
    ctx->pc = 0x22f8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47825);
    // 0x22f8ec: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x22f8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22f8f0: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x22f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x22f8f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x22f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22f8f8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F8F8u;
    {
        const bool branch_taken_0x22f8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f8f8) {
            ctx->pc = 0x22F8FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F8F8u;
            // 0x22f8fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F90Cu;
            goto label_22f90c;
        }
    }
    ctx->pc = 0x22F900u;
    // 0x22f900: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x22f900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x22f904: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22f904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x22f908: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x22f908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_22f90c:
    // 0x22f90c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x22f90cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x22f910: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22f910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22f914: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x22f914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x22f918: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x22F918u;
    {
        const bool branch_taken_0x22f918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F918u;
            // 0x22f91c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f918) {
            ctx->pc = 0x22F8C8u;
            runtime->cooperativeGuestYield();
            goto label_22f8c8;
        }
    }
    ctx->pc = 0x22F920u;
    // 0x22f920: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22f920u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22f924: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22f924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f928: 0xc06deaa  jal         func_1B7AA8
    ctx->pc = 0x22F928u;
    SET_GPR_U32(ctx, 31, 0x22F930u);
    ctx->pc = 0x22F92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F928u;
            // 0x22f92c: 0x8e04cb94  lw          $a0, -0x346C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7AA8u;
    if (runtime->hasFunction(0x1B7AA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B7AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F930u; }
        if (ctx->pc != 0x22F930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7AA8_0x1b7aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F930u; }
        if (ctx->pc != 0x22F930u) { return; }
    }
    ctx->pc = 0x22F930u;
    // 0x22f930: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F930u;
    {
        const bool branch_taken_0x22f930 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F930u;
            // 0x22f934: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f930) {
            ctx->pc = 0x22F944u;
            goto label_22f944;
        }
    }
    ctx->pc = 0x22F938u;
    // 0x22f938: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22f938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22f93c: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x22F93Cu;
    {
        const bool branch_taken_0x22f93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F93Cu;
            // 0x22f940: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f93c) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F944u;
label_22f944:
    // 0x22f944: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22f944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22f948: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x22f948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x22f94c: 0x8e04cb94  lw          $a0, -0x346C($s0)
    ctx->pc = 0x22f94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x22f950: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x22F950u;
    {
        const bool branch_taken_0x22f950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F950u;
            // 0x22f954: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f950) {
            ctx->pc = 0x22FCD8u;
            goto label_22fcd8;
        }
    }
    ctx->pc = 0x22F958u;
label_22f958:
    // 0x22f958: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22f958u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22f95c: 0xc08b852  jal         func_22E148
    ctx->pc = 0x22F95Cu;
    SET_GPR_U32(ctx, 31, 0x22F964u);
    ctx->pc = 0x22F960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F95Cu;
            // 0x22f960: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F964u; }
        if (ctx->pc != 0x22F964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F964u; }
        if (ctx->pc != 0x22F964u) { return; }
    }
    ctx->pc = 0x22F964u;
    // 0x22f964: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x22F964u;
    {
        const bool branch_taken_0x22f964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F964u;
            // 0x22f968: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f964) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F96Cu;
    // 0x22f96c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22f970: 0x2442bc70  addiu       $v0, $v0, -0x4390
    ctx->pc = 0x22f970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950000));
    // 0x22f974: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x22f974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22f978: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22f978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f97c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f980: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x22F980u;
    {
        const bool branch_taken_0x22f980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F980u;
            // 0x22f984: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f980) {
            ctx->pc = 0x22FC88u;
            goto label_22fc88;
        }
    }
    ctx->pc = 0x22F988u;
    // 0x22f988: 0x8c451290  lw          $a1, 0x1290($v0)
    ctx->pc = 0x22f988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x22f98c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F98Cu;
    {
        const bool branch_taken_0x22f98c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f98c) {
            ctx->pc = 0x22F99Cu;
            goto label_22f99c;
        }
    }
    ctx->pc = 0x22F994u;
label_22f994:
    // 0x22f994: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x22F994u;
    {
        const bool branch_taken_0x22f994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F994u;
            // 0x22f998: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f994) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F99Cu;
label_22f99c:
    // 0x22f99c: 0x18a000da  blez        $a1, . + 4 + (0xDA << 2)
    ctx->pc = 0x22F99Cu;
    {
        const bool branch_taken_0x22f99c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x22F9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F99Cu;
            // 0x22f9a0: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f99c) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F9A4u;
    // 0x22f9a4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x22f9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x22f9a8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x22f9a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22f9ac: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x22f9b0: 0x2467be80  addiu       $a3, $v1, -0x4180
    ctx->pc = 0x22f9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950528));
    // 0x22f9b4: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x22f9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x22f9b8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x22f9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x22f9bc: 0xac8512a8  sw          $a1, 0x12A8($a0)
    ctx->pc = 0x22f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4776), GPR_U32(ctx, 5));
    // 0x22f9c0: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x22f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22f9c4: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x22f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x22f9c8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22f9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f9cc: 0x60000ce  bltz        $s0, . + 4 + (0xCE << 2)
    ctx->pc = 0x22F9CCu;
    {
        const bool branch_taken_0x22f9cc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x22F9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F9CCu;
            // 0x22f9d0: 0xe31021  addu        $v0, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9cc) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F9D4u;
    // 0x22f9d4: 0x3c03cafe  lui         $v1, 0xCAFE
    ctx->pc = 0x22f9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51966 << 16));
    // 0x22f9d8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x22f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22f9dc: 0x3463bad1  ori         $v1, $v1, 0xBAD1
    ctx->pc = 0x22f9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47825);
    // 0x22f9e0: 0x144300c9  bne         $v0, $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x22F9E0u;
    {
        const bool branch_taken_0x22f9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F9E0u;
            // 0x22f9e4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9e0) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22F9E8u;
    // 0x22f9e8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x22f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x22f9ec: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x22f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x22f9f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22f9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9f4: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x22F9F4u;
    SET_GPR_U32(ctx, 31, 0x22F9FCu);
    ctx->pc = 0x22F9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F9F4u;
            // 0x22f9f8: 0xac430274  sw          $v1, 0x274($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9FCu; }
        if (ctx->pc != 0x22F9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9FCu; }
        if (ctx->pc != 0x22F9FCu) { return; }
    }
    ctx->pc = 0x22F9FCu;
    // 0x22f9fc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x22f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x22fa00: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22fa00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22fa04: 0x2484c190  addiu       $a0, $a0, -0x3E70
    ctx->pc = 0x22fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951312));
    // 0x22fa08: 0x24a584e8  addiu       $a1, $a1, -0x7B18
    ctx->pc = 0x22fa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935784));
    // 0x22fa0c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x22FA0Cu;
    SET_GPR_U32(ctx, 31, 0x22FA14u);
    ctx->pc = 0x22FA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA0Cu;
            // 0x22fa10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA14u; }
        if (ctx->pc != 0x22FA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA14u; }
        if (ctx->pc != 0x22FA14u) { return; }
    }
    ctx->pc = 0x22FA14u;
    // 0x22fa14: 0x8e2212b0  lw          $v0, 0x12B0($s1)
    ctx->pc = 0x22fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
    // 0x22fa18: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22fa18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22fa1c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22fa1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22fa20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22fa20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22fa24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22fa28: 0xe4601294  swc1        $f0, 0x1294($v1)
    ctx->pc = 0x22fa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4756), bits); }
    // 0x22fa2c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x22FA2Cu;
    {
        const bool branch_taken_0x22fa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA2Cu;
            // 0x22fa30: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa2c) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22FA34u;
    // 0x22fa34: 0x0  nop
    ctx->pc = 0x22fa34u;
    // NOP
label_22fa38:
    // 0x22fa38: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22fa38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22fa3c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x22fa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x22fa40: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x22fa40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x22fa44: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x22fa44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x22fa48: 0x8e0412a4  lw          $a0, 0x12A4($s0)
    ctx->pc = 0x22fa48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
    // 0x22fa4c: 0x24a5c190  addiu       $a1, $a1, -0x3E70
    ctx->pc = 0x22fa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951312));
    // 0x22fa50: 0x24c66eb8  addiu       $a2, $a2, 0x6EB8
    ctx->pc = 0x22fa50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28344));
    // 0x22fa54: 0xc08b9be  jal         func_22E6F8
    ctx->pc = 0x22FA54u;
    SET_GPR_U32(ctx, 31, 0x22FA5Cu);
    ctx->pc = 0x22FA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA54u;
            // 0x22fa58: 0x34e74000  ori         $a3, $a3, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E6F8u;
    if (runtime->hasFunction(0x22E6F8u)) {
        auto targetFn = runtime->lookupFunction(0x22E6F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA5Cu; }
        if (ctx->pc != 0x22FA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E6F8_0x22e6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA5Cu; }
        if (ctx->pc != 0x22FA5Cu) { return; }
    }
    ctx->pc = 0x22FA5Cu;
    // 0x22fa5c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x22FA5Cu;
    {
        const bool branch_taken_0x22fa5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA5Cu;
            // 0x22fa60: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa5c) {
            ctx->pc = 0x22FABCu;
            goto label_22fabc;
        }
    }
    ctx->pc = 0x22FA64u;
    // 0x22fa64: 0x8c421284  lw          $v0, 0x1284($v0)
    ctx->pc = 0x22fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4740)));
    // 0x22fa68: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22FA68u;
    {
        const bool branch_taken_0x22fa68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA68u;
            // 0x22fa6c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa68) {
            ctx->pc = 0x22FAB8u;
            goto label_22fab8;
        }
    }
    ctx->pc = 0x22FA70u;
    // 0x22fa70: 0xc08bd50  jal         func_22F540
    ctx->pc = 0x22FA70u;
    SET_GPR_U32(ctx, 31, 0x22FA78u);
    ctx->pc = 0x22F540u;
    if (runtime->hasFunction(0x22F540u)) {
        auto targetFn = runtime->lookupFunction(0x22F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA78u; }
        if (ctx->pc != 0x22FA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22f540_0x22f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA78u; }
        if (ctx->pc != 0x22FA78u) { return; }
    }
    ctx->pc = 0x22FA78u;
    // 0x22fa78: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22FA78u;
    {
        const bool branch_taken_0x22fa78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA78u;
            // 0x22fa7c: 0x8e0312a4  lw          $v1, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa78) {
            ctx->pc = 0x22FAB4u;
            goto label_22fab4;
        }
    }
    ctx->pc = 0x22FA80u;
    // 0x22fa80: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x22fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22fa84: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22fa88: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22fa88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22fa8c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x22fa8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22fa90: 0x2442be80  addiu       $v0, $v0, -0x4180
    ctx->pc = 0x22fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950528));
    // 0x22fa94: 0x8ca512c8  lw          $a1, 0x12C8($a1)
    ctx->pc = 0x22fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4808)));
    // 0x22fa98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fa9c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x22fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x22faa0: 0xc08bd2c  jal         func_22F4B0
    ctx->pc = 0x22FAA0u;
    SET_GPR_U32(ctx, 31, 0x22FAA8u);
    ctx->pc = 0x22FAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FAA0u;
            // 0x22faa4: 0x852025  or          $a0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F4B0u;
    if (runtime->hasFunction(0x22F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x22F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FAA8u; }
        if (ctx->pc != 0x22FAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22f4b0_0x22f4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FAA8u; }
        if (ctx->pc != 0x22FAA8u) { return; }
    }
    ctx->pc = 0x22FAA8u;
    // 0x22faa8: 0x8e2212b0  lw          $v0, 0x12B0($s1)
    ctx->pc = 0x22faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
    // 0x22faac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22FAACu;
    {
        const bool branch_taken_0x22faac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FAACu;
            // 0x22fab0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22faac) {
            ctx->pc = 0x22FAB8u;
            goto label_22fab8;
        }
    }
    ctx->pc = 0x22FAB4u;
label_22fab4:
    // 0x22fab4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x22fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_22fab8:
    // 0x22fab8: 0xae2212b0  sw          $v0, 0x12B0($s1)
    ctx->pc = 0x22fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
label_22fabc:
    // 0x22fabc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22fac0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22fac4: 0xc4601294  lwc1        $f0, 0x1294($v1)
    ctx->pc = 0x22fac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fac8: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x22fac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22facc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22faccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22fad0: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x22FAD0u;
    {
        const bool branch_taken_0x22fad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FAD0u;
            // 0x22fad4: 0xe4601294  swc1        $f0, 0x1294($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4756), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fad0) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22FAD8u;
label_22fad8:
    // 0x22fad8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22fad8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22fadc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22fae0: 0xc6001294  lwc1        $f0, 0x1294($s0)
    ctx->pc = 0x22fae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fae4: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x22fae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22fae8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22fae8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22faec: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x22faecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x22faf0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22faf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22faf4: 0x0  nop
    ctx->pc = 0x22faf4u;
    // NOP
    // 0x22faf8: 0x45000083  bc1f        . + 4 + (0x83 << 2)
    ctx->pc = 0x22FAF8u;
    {
        const bool branch_taken_0x22faf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22FAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FAF8u;
            // 0x22fafc: 0xe6001294  swc1        $f0, 0x1294($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4756), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22faf8) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22FB00u;
    // 0x22fb00: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22fb04: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x22fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x22fb08: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x22fb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x22fb0c: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x22FB0Cu;
    SET_GPR_U32(ctx, 31, 0x22FB14u);
    ctx->pc = 0x22FB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FB0Cu;
            // 0x22fb10: 0xac830274  sw          $v1, 0x274($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB14u; }
        if (ctx->pc != 0x22FB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB14u; }
        if (ctx->pc != 0x22FB14u) { return; }
    }
    ctx->pc = 0x22FB14u;
    // 0x22fb14: 0x8e2212b0  lw          $v0, 0x12B0($s1)
    ctx->pc = 0x22fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
    // 0x22fb18: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22fb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22fb1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22fb1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22fb20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22fb24: 0xe6001294  swc1        $f0, 0x1294($s0)
    ctx->pc = 0x22fb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4756), bits); }
    // 0x22fb28: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x22FB28u;
    {
        const bool branch_taken_0x22fb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FB28u;
            // 0x22fb2c: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb28) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22FB30u;
label_22fb30:
    // 0x22fb30: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22fb34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22fb38: 0xc4601294  lwc1        $f0, 0x1294($v1)
    ctx->pc = 0x22fb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fb3c: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x22fb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22fb40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22fb40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fb44: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x22fb44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x22fb48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22fb48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fb4c: 0x0  nop
    ctx->pc = 0x22fb4cu;
    // NOP
    // 0x22fb50: 0x4500006d  bc1f        . + 4 + (0x6D << 2)
    ctx->pc = 0x22FB50u;
    {
        const bool branch_taken_0x22fb50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22FB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FB50u;
            // 0x22fb54: 0xe4601294  swc1        $f0, 0x1294($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4756), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb50) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22FB58u;
    // 0x22fb58: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22fb5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fb60: 0x8c4212a8  lw          $v0, 0x12A8($v0)
    ctx->pc = 0x22fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4776)));
    // 0x22fb64: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x22fb64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fb68: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x22fb68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22fb6c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x22FB6Cu;
    {
        const bool branch_taken_0x22fb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FB6Cu;
            // 0x22fb70: 0x62980a  movz        $s3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb6c) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22FB74u;
label_22fb74:
    // 0x22fb74: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22fb78: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22fb7c: 0x8c4212a4  lw          $v0, 0x12A4($v0)
    ctx->pc = 0x22fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x22fb80: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22fb80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22fb84: 0x8c64cb94  lw          $a0, -0x346C($v1)
    ctx->pc = 0x22fb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953876)));
    // 0x22fb88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22fb8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fb90: 0xaca31290  sw          $v1, 0x1290($a1)
    ctx->pc = 0x22fb90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4752), GPR_U32(ctx, 3));
    // 0x22fb94: 0xac8200dc  sw          $v0, 0xDC($a0)
    ctx->pc = 0x22fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 2));
    // 0x22fb98: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x22FB98u;
    {
        const bool branch_taken_0x22fb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FB98u;
            // 0x22fb9c: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb98) {
            ctx->pc = 0x22FCD8u;
            goto label_22fcd8;
        }
    }
    ctx->pc = 0x22FBA0u;
label_22fba0:
    // 0x22fba0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22fba0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22fba4: 0xc08b852  jal         func_22E148
    ctx->pc = 0x22FBA4u;
    SET_GPR_U32(ctx, 31, 0x22FBACu);
    ctx->pc = 0x22FBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FBA4u;
            // 0x22fba8: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FBACu; }
        if (ctx->pc != 0x22FBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FBACu; }
        if (ctx->pc != 0x22FBACu) { return; }
    }
    ctx->pc = 0x22FBACu;
    // 0x22fbac: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x22FBACu;
    {
        const bool branch_taken_0x22fbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FBACu;
            // 0x22fbb0: 0x8e0512a4  lw          $a1, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbac) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22FBB4u;
    // 0x22fbb4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22fbb8: 0x2442bc70  addiu       $v0, $v0, -0x4390
    ctx->pc = 0x22fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950000));
    // 0x22fbbc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x22fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22fbc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fbc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fbc8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x22FBC8u;
    {
        const bool branch_taken_0x22fbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FBC8u;
            // 0x22fbcc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbc8) {
            ctx->pc = 0x22FC88u;
            goto label_22fc88;
        }
    }
    ctx->pc = 0x22FBD0u;
    // 0x22fbd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fbd4: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x22fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x22fbd8: 0x54430049  bnel        $v0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x22FBD8u;
    {
        const bool branch_taken_0x22fbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22fbd8) {
            ctx->pc = 0x22FBDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FBD8u;
            // 0x22fbdc: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22FD00u;
            goto label_22fd00;
        }
    }
    ctx->pc = 0x22FBE0u;
    // 0x22fbe0: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x22fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22fbe4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22fbe8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x22fbe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22fbec: 0x2442be80  addiu       $v0, $v0, -0x4180
    ctx->pc = 0x22fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950528));
    // 0x22fbf0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22fbf4: 0x8c6312c8  lw          $v1, 0x12C8($v1)
    ctx->pc = 0x22fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4808)));
    // 0x22fbf8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22fbfc: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x22fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x22fc00: 0xc08bd2c  jal         func_22F4B0
    ctx->pc = 0x22FC00u;
    SET_GPR_U32(ctx, 31, 0x22FC08u);
    ctx->pc = 0x22FC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC00u;
            // 0x22fc04: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F4B0u;
    if (runtime->hasFunction(0x22F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x22F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC08u; }
        if (ctx->pc != 0x22FC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22f4b0_0x22f4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC08u; }
        if (ctx->pc != 0x22FC08u) { return; }
    }
    ctx->pc = 0x22FC08u;
    // 0x22fc08: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x22fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x22fc0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fc10: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22fc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22fc14: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x22fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22fc18: 0xac8312a8  sw          $v1, 0x12A8($a0)
    ctx->pc = 0x22fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4776), GPR_U32(ctx, 3));
    // 0x22fc1c: 0xae2212b0  sw          $v0, 0x12B0($s1)
    ctx->pc = 0x22fc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
    // 0x22fc20: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x22FC20u;
    {
        const bool branch_taken_0x22fc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC20u;
            // 0x22fc24: 0xaca01294  sw          $zero, 0x1294($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc20) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22FC28u;
label_22fc28:
    // 0x22fc28: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22fc2c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22fc30: 0x8c4212a4  lw          $v0, 0x12A4($v0)
    ctx->pc = 0x22fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x22fc34: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22fc34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22fc38: 0x8c64cb94  lw          $a0, -0x346C($v1)
    ctx->pc = 0x22fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953876)));
    // 0x22fc3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22fc40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22fc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fc44: 0xaca31290  sw          $v1, 0x1290($a1)
    ctx->pc = 0x22fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4752), GPR_U32(ctx, 3));
    // 0x22fc48: 0xac8200dc  sw          $v0, 0xDC($a0)
    ctx->pc = 0x22fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 2));
    // 0x22fc4c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x22FC4Cu;
    {
        const bool branch_taken_0x22fc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC4Cu;
            // 0x22fc50: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc4c) {
            ctx->pc = 0x22FCD8u;
            goto label_22fcd8;
        }
    }
    ctx->pc = 0x22FC54u;
    // 0x22fc54: 0x0  nop
    ctx->pc = 0x22fc54u;
    // NOP
label_22fc58:
    // 0x22fc58: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22fc58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22fc5c: 0xc08b852  jal         func_22E148
    ctx->pc = 0x22FC5Cu;
    SET_GPR_U32(ctx, 31, 0x22FC64u);
    ctx->pc = 0x22FC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC5Cu;
            // 0x22fc60: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC64u; }
        if (ctx->pc != 0x22FC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC64u; }
        if (ctx->pc != 0x22FC64u) { return; }
    }
    ctx->pc = 0x22FC64u;
    // 0x22fc64: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x22FC64u;
    {
        const bool branch_taken_0x22fc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC64u;
            // 0x22fc68: 0x8e0212a4  lw          $v0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc64) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22FC6Cu;
    // 0x22fc6c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x22fc70: 0x2463bc70  addiu       $v1, $v1, -0x4390
    ctx->pc = 0x22fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950000));
    // 0x22fc74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22fc78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fc7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fc80: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x22FC80u;
    {
        const bool branch_taken_0x22fc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC80u;
            // 0x22fc84: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc80) {
            ctx->pc = 0x22FCF4u;
            goto label_22fcf4;
        }
    }
    ctx->pc = 0x22FC88u;
label_22fc88:
    // 0x22fc88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22fc8c:
    // 0x22fc8c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x22FC8Cu;
    {
        const bool branch_taken_0x22fc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FC8Cu;
            // 0x22fc90: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc8c) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22FC94u;
label_22fc94:
    // 0x22fc94: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22fc98: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22fc9c: 0xc4601294  lwc1        $f0, 0x1294($v1)
    ctx->pc = 0x22fc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fca0: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x22fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22fca4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22fca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fca8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x22fca8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x22fcac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22fcacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fcb0: 0x0  nop
    ctx->pc = 0x22fcb0u;
    // NOP
    // 0x22fcb4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x22FCB4u;
    {
        const bool branch_taken_0x22fcb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22FCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FCB4u;
            // 0x22fcb8: 0xe4601294  swc1        $f0, 0x1294($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4756), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fcb4) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22FCBCu;
    // 0x22fcbc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22fcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22fcc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fcc4: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x22fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x22fcc8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22fccc: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x22fcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x22fcd0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22fcd4: 0x0  nop
    ctx->pc = 0x22fcd4u;
    // NOP
label_22fcd8:
    // 0x22fcd8: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x22FCD8u;
    SET_GPR_U32(ctx, 31, 0x22FCE0u);
    ctx->pc = 0x22FCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FCD8u;
            // 0x22fcdc: 0xac820274  sw          $v0, 0x274($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCE0u; }
        if (ctx->pc != 0x22FCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCE0u; }
        if (ctx->pc != 0x22FCE0u) { return; }
    }
    ctx->pc = 0x22FCE0u;
label_22fce0:
    // 0x22fce0: 0x8e2212b0  lw          $v0, 0x12B0($s1)
    ctx->pc = 0x22fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
label_22fce4:
    // 0x22fce4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22fce8:
    // 0x22fce8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22FCE8u;
    {
        const bool branch_taken_0x22fce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FCE8u;
            // 0x22fcec: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fce8) {
            ctx->pc = 0x22FD08u;
            goto label_22fd08;
        }
    }
    ctx->pc = 0x22FCF0u;
label_22fcf0:
    // 0x22fcf0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_22fcf4:
    // 0x22fcf4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x22fcf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fcf8: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x22fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x22fcfc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x22fcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_22fd00:
    // 0x22fd00: 0x2980b  movn        $s3, $zero, $v0
    ctx->pc = 0x22fd00u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x22fd04: 0x0  nop
    ctx->pc = 0x22fd04u;
    // NOP
label_22fd08:
    // 0x22fd08: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x22FD08u;
    {
        const bool branch_taken_0x22fd08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FD08u;
            // 0x22fd0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd08) {
            ctx->pc = 0x22FDA8u;
            goto label_22fda8;
        }
    }
    ctx->pc = 0x22FD10u;
    // 0x22fd10: 0x16620011  bne         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22FD10u;
    {
        const bool branch_taken_0x22fd10 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x22FD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FD10u;
            // 0x22fd14: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd10) {
            ctx->pc = 0x22FD58u;
            goto label_22fd58;
        }
    }
    ctx->pc = 0x22FD18u;
    // 0x22fd18: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22fd1c: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x22fd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22fd20: 0x8c4412a4  lw          $a0, 0x12A4($v0)
    ctx->pc = 0x22fd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x22fd24: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x22fd28: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22fd2c: 0x2463be80  addiu       $v1, $v1, -0x4180
    ctx->pc = 0x22fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950528));
    // 0x22fd30: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x22fd30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22fd34: 0x8c4212a8  lw          $v0, 0x12A8($v0)
    ctx->pc = 0x22fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4776)));
    // 0x22fd38: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x22fd38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x22fd3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22fd40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22fd44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fd48: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x22fd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fd4c: 0xe4a02d0c  swc1        $f0, 0x2D0C($a1)
    ctx->pc = 0x22fd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 11532), bits); }
    // 0x22fd50: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22fd54: 0x0  nop
    ctx->pc = 0x22fd54u;
    // NOP
label_22fd58:
    // 0x22fd58: 0x8c42e560  lw          $v0, -0x1AA0($v0)
    ctx->pc = 0x22fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x22fd5c: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x22fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x22fd60: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x22fd60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x22fd64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22FD64u;
    {
        const bool branch_taken_0x22fd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FD64u;
            // 0x22fd68: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd64) {
            ctx->pc = 0x22FD88u;
            goto label_22fd88;
        }
    }
    ctx->pc = 0x22FD6Cu;
    // 0x22fd6c: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x22fd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x22fd70: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x22fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x22fd74: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x22FD74u;
    SET_GPR_U32(ctx, 31, 0x22FD7Cu);
    ctx->pc = 0x22FD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FD74u;
            // 0x22fd78: 0xac830274  sw          $v1, 0x274($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FD7Cu; }
        if (ctx->pc != 0x22FD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FD7Cu; }
        if (ctx->pc != 0x22FD7Cu) { return; }
    }
    ctx->pc = 0x22FD7Cu;
    // 0x22fd7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22FD7Cu;
    {
        const bool branch_taken_0x22fd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FD7Cu;
            // 0x22fd80: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd7c) {
            ctx->pc = 0x22FDA0u;
            goto label_22fda0;
        }
    }
    ctx->pc = 0x22FD84u;
    // 0x22fd84: 0x0  nop
    ctx->pc = 0x22fd84u;
    // NOP
label_22fd88:
    // 0x22fd88: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x22fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x22fd8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22fd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd90: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x22FD90u;
    SET_GPR_U32(ctx, 31, 0x22FD98u);
    ctx->pc = 0x22FD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FD90u;
            // 0x22fd94: 0xac400274  sw          $zero, 0x274($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FD98u; }
        if (ctx->pc != 0x22FD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FD98u; }
        if (ctx->pc != 0x22FD98u) { return; }
    }
    ctx->pc = 0x22FD98u;
    // 0x22fd98: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22fd9c: 0x0  nop
    ctx->pc = 0x22fd9cu;
    // NOP
label_22fda0:
    // 0x22fda0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fda4: 0xac6212b0  sw          $v0, 0x12B0($v1)
    ctx->pc = 0x22fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
label_22fda8:
    // 0x22fda8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x22fda8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fdac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22fdacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22fdb0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x22fdb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22fdb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22fdb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22fdb8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22fdb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fdbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22fdbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fdc0: 0x3e00008  jr          $ra
    ctx->pc = 0x22FDC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FDC0u;
            // 0x22fdc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22F628u: goto label_22f628;
            case 0x22F64Cu: goto label_22f64c;
            case 0x22F6A0u: goto label_22f6a0;
            case 0x22F6A4u: goto label_22f6a4;
            case 0x22F6B4u: goto label_22f6b4;
            case 0x22F6B8u: goto label_22f6b8;
            case 0x22F6E8u: goto label_22f6e8;
            case 0x22F700u: goto label_22f700;
            case 0x22F720u: goto label_22f720;
            case 0x22F738u: goto label_22f738;
            case 0x22F778u: goto label_22f778;
            case 0x22F7CCu: goto label_22f7cc;
            case 0x22F7F4u: goto label_22f7f4;
            case 0x22F810u: goto label_22f810;
            case 0x22F84Cu: goto label_22f84c;
            case 0x22F894u: goto label_22f894;
            case 0x22F8ACu: goto label_22f8ac;
            case 0x22F8B8u: goto label_22f8b8;
            case 0x22F8C8u: goto label_22f8c8;
            case 0x22F90Cu: goto label_22f90c;
            case 0x22F944u: goto label_22f944;
            case 0x22F958u: goto label_22f958;
            case 0x22F994u: goto label_22f994;
            case 0x22F99Cu: goto label_22f99c;
            case 0x22FA38u: goto label_22fa38;
            case 0x22FAB4u: goto label_22fab4;
            case 0x22FAB8u: goto label_22fab8;
            case 0x22FABCu: goto label_22fabc;
            case 0x22FAD8u: goto label_22fad8;
            case 0x22FB30u: goto label_22fb30;
            case 0x22FB74u: goto label_22fb74;
            case 0x22FBA0u: goto label_22fba0;
            case 0x22FC28u: goto label_22fc28;
            case 0x22FC58u: goto label_22fc58;
            case 0x22FC88u: goto label_22fc88;
            case 0x22FC8Cu: goto label_22fc8c;
            case 0x22FC94u: goto label_22fc94;
            case 0x22FCD8u: goto label_22fcd8;
            case 0x22FCE0u: goto label_22fce0;
            case 0x22FCE4u: goto label_22fce4;
            case 0x22FCE8u: goto label_22fce8;
            case 0x22FCF0u: goto label_22fcf0;
            case 0x22FCF4u: goto label_22fcf4;
            case 0x22FD00u: goto label_22fd00;
            case 0x22FD08u: goto label_22fd08;
            case 0x22FD58u: goto label_22fd58;
            case 0x22FD88u: goto label_22fd88;
            case 0x22FDA0u: goto label_22fda0;
            case 0x22FDA8u: goto label_22fda8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22FDC8u;
}
