#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB608
// Address: 0x1bb608 - 0x1bb6d8
void sub_001BB608_0x1bb608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB608_0x1bb608");
#endif

    ctx->pc = 0x1bb608u;

    // 0x1bb608: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bb608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bb60c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb610: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bb610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bb614: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1bb614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1bb618: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bb618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb61c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bb61cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb620: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bb620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb624: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bb624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1bb628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb62c: 0xc06ed28  jal         func_1BB4A0
    ctx->pc = 0x1BB62Cu;
    SET_GPR_U32(ctx, 31, 0x1BB634u);
    ctx->pc = 0x1BB630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB62Cu;
            // 0x1bb630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB4A0u;
    if (runtime->hasFunction(0x1BB4A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB634u; }
        if (ctx->pc != 0x1BB634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB4A0_0x1bb4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB634u; }
        if (ctx->pc != 0x1BB634u) { return; }
    }
    ctx->pc = 0x1BB634u;
    // 0x1bb634: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bb634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb638: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bb638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bb63c: 0x0  nop
    ctx->pc = 0x1bb63cu;
    // NOP
label_1bb640:
    // 0x1bb640: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1bb640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bb644: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x1bb644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x1bb648: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1bb648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bb64c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1bb64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb650: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x1bb650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x1bb654: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1bb654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bb658: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB658u;
    {
        const bool branch_taken_0x1bb658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB658u;
            // 0x1bb65c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb658) {
            ctx->pc = 0x1BB668u;
            goto label_1bb668;
        }
    }
    ctx->pc = 0x1BB660u;
    // 0x1bb660: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1bb660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1bb664: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x1bb664u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1bb668:
    // 0x1bb668: 0x50c00011  beql        $a2, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BB668u;
    {
        const bool branch_taken_0x1bb668 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb668) {
            ctx->pc = 0x1BB66Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB668u;
            // 0x1bb66c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB6B0u;
            goto label_1bb6b0;
        }
    }
    ctx->pc = 0x1BB670u;
    // 0x1bb670: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB670u;
    {
        const bool branch_taken_0x1bb670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb670) {
            ctx->pc = 0x1BB688u;
            goto label_1bb688;
        }
    }
    ctx->pc = 0x1BB678u;
    // 0x1bb678: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BB678u;
    SET_GPR_U32(ctx, 31, 0x1BB680u);
    ctx->pc = 0x1BB67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB678u;
            // 0x1bb67c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB680u; }
        if (ctx->pc != 0x1BB680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB680u; }
        if (ctx->pc != 0x1BB680u) { return; }
    }
    ctx->pc = 0x1BB680u;
    // 0x1bb680: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1BB680u;
    {
        const bool branch_taken_0x1bb680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb680) {
            ctx->pc = 0x1BB684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB680u;
            // 0x1bb684: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB6C0u;
            goto label_1bb6c0;
        }
    }
    ctx->pc = 0x1BB688u;
label_1bb688:
    // 0x1bb688: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB688u;
    {
        const bool branch_taken_0x1bb688 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB688u;
            // 0x1bb68c: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb688) {
            ctx->pc = 0x1BB6A4u;
            goto label_1bb6a4;
        }
    }
    ctx->pc = 0x1BB690u;
    // 0x1bb690: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1bb690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb694: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BB694u;
    SET_GPR_U32(ctx, 31, 0x1BB69Cu);
    ctx->pc = 0x1BB698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB694u;
            // 0x1bb698: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB69Cu; }
        if (ctx->pc != 0x1BB69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB69Cu; }
        if (ctx->pc != 0x1BB69Cu) { return; }
    }
    ctx->pc = 0x1BB69Cu;
    // 0x1bb69c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB69Cu;
    {
        const bool branch_taken_0x1bb69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB69Cu;
            // 0x1bb6a0: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb69c) {
            ctx->pc = 0x1BB6BCu;
            goto label_1bb6bc;
        }
    }
    ctx->pc = 0x1BB6A4u;
label_1bb6a4:
    // 0x1bb6a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb6a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB6A8u;
    {
        const bool branch_taken_0x1bb6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6A8u;
            // 0x1bb6ac: 0xac62cc4c  sw          $v0, -0x33B4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6a8) {
            ctx->pc = 0x1BB6BCu;
            goto label_1bb6bc;
        }
    }
    ctx->pc = 0x1BB6B0u;
label_1bb6b0:
    // 0x1bb6b0: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1bb6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bb6b4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1BB6B4u;
    {
        const bool branch_taken_0x1bb6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6B4u;
            // 0x1bb6b8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6b4) {
            ctx->pc = 0x1BB640u;
            runtime->cooperativeGuestYield();
            goto label_1bb640;
        }
    }
    ctx->pc = 0x1BB6BCu;
label_1bb6bc:
    // 0x1bb6bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bb6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bb6c0:
    // 0x1bb6c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bb6c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb6c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1bb6c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb6c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6CCu;
            // 0x1bb6d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB640u: goto label_1bb640;
            case 0x1BB668u: goto label_1bb668;
            case 0x1BB688u: goto label_1bb688;
            case 0x1BB6A4u: goto label_1bb6a4;
            case 0x1BB6B0u: goto label_1bb6b0;
            case 0x1BB6BCu: goto label_1bb6bc;
            case 0x1BB6C0u: goto label_1bb6c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB6D4u;
    // 0x1bb6d4: 0x0  nop
    ctx->pc = 0x1bb6d4u;
    // NOP
}
