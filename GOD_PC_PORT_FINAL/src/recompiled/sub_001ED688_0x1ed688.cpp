#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED688
// Address: 0x1ed688 - 0x1ed7f8
void sub_001ED688_0x1ed688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED688_0x1ed688");
#endif

    ctx->pc = 0x1ed688u;

    // 0x1ed688: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ed688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ed68c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ed68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ed690: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1ed690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1ed694: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ed694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed698: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ed698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ed69c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ed69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ed6a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ed6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1ed6a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed6a8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1ed6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ed6ac: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1ED6ACu;
    {
        const bool branch_taken_0x1ed6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED6ACu;
            // 0x1ed6b0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6ac) {
            ctx->pc = 0x1ED6E0u;
            goto label_1ed6e0;
        }
    }
    ctx->pc = 0x1ED6B4u;
    // 0x1ed6b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ed6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ed6b8: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1ed6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1ed6bc: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1ed6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1ed6c0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ed6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ed6c4: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1ed6c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1ed6c8: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1ed6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1ed6cc: 0x40f809  jalr        $v0
    ctx->pc = 0x1ED6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED6D4u);
        ctx->pc = 0x1ED6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED6CCu;
            // 0x1ed6d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ED6D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED6E0u: goto label_1ed6e0;
            case 0x1ED728u: goto label_1ed728;
            case 0x1ED72Cu: goto label_1ed72c;
            case 0x1ED750u: goto label_1ed750;
            case 0x1ED7B0u: goto label_1ed7b0;
            case 0x1ED7D8u: goto label_1ed7d8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ED6D4u; }
            if (ctx->pc != 0x1ED6D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1ED6D4u;
    // 0x1ed6d4: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1ed6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1ed6d8: 0x50540001  beql        $v0, $s4, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ED6D8u;
    {
        const bool branch_taken_0x1ed6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x1ed6d8) {
            ctx->pc = 0x1ED6DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED6D8u;
            // 0x1ed6dc: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ED6E0u;
            goto label_1ed6e0;
        }
    }
    ctx->pc = 0x1ED6E0u;
label_1ed6e0:
    // 0x1ed6e0: 0x8e4308bc  lw          $v1, 0x8BC($s2)
    ctx->pc = 0x1ed6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2236)));
    // 0x1ed6e4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1ED6E4u;
    {
        const bool branch_taken_0x1ed6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED6E4u;
            // 0x1ed6e8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6e4) {
            ctx->pc = 0x1ED728u;
            goto label_1ed728;
        }
    }
    ctx->pc = 0x1ED6ECu;
    // 0x1ed6ec: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1ed6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1ed6f0: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1ed6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1ed6f4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ed6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ed6f8: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1ed6f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1ed6fc: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1ed6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1ed700: 0x40f809  jalr        $v0
    ctx->pc = 0x1ED700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED708u);
        ctx->pc = 0x1ED704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED700u;
            // 0x1ed704: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ED708u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED6E0u: goto label_1ed6e0;
            case 0x1ED728u: goto label_1ed728;
            case 0x1ED72Cu: goto label_1ed72c;
            case 0x1ED750u: goto label_1ed750;
            case 0x1ED7B0u: goto label_1ed7b0;
            case 0x1ED7D8u: goto label_1ed7d8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ED708u; }
            if (ctx->pc != 0x1ED708u) { return; }
        }
        }
    }
    ctx->pc = 0x1ED708u;
    // 0x1ed708: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1ed708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1ed70c: 0x54540007  bnel        $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED70Cu;
    {
        const bool branch_taken_0x1ed70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1ed70c) {
            ctx->pc = 0x1ED710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED70Cu;
            // 0x1ed710: 0x8e420754  lw          $v0, 0x754($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1876)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ED72Cu;
            goto label_1ed72c;
        }
    }
    ctx->pc = 0x1ED714u;
    // 0x1ed714: 0xae4008bc  sw          $zero, 0x8BC($s2)
    ctx->pc = 0x1ed714u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2236), GPR_U32(ctx, 0));
    // 0x1ed718: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ed718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed71c: 0xc07b4e4  jal         func_1ED390
    ctx->pc = 0x1ED71Cu;
    SET_GPR_U32(ctx, 31, 0x1ED724u);
    ctx->pc = 0x1ED720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED71Cu;
            // 0x1ed720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED390u;
    if (runtime->hasFunction(0x1ED390u)) {
        auto targetFn = runtime->lookupFunction(0x1ED390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED724u; }
        if (ctx->pc != 0x1ED724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED390_0x1ed390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED724u; }
        if (ctx->pc != 0x1ED724u) { return; }
    }
    ctx->pc = 0x1ED724u;
    // 0x1ed724: 0x0  nop
    ctx->pc = 0x1ed724u;
    // NOP
label_1ed728:
    // 0x1ed728: 0x8e420754  lw          $v0, 0x754($s2)
    ctx->pc = 0x1ed728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1876)));
label_1ed72c:
    // 0x1ed72c: 0x8e430750  lw          $v1, 0x750($s2)
    ctx->pc = 0x1ed72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1872)));
    // 0x1ed730: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ed730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed734: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ed734u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed738: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x1ed738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ed73c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x1ed73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ed740: 0x11102a  slt         $v0, $zero, $s1
    ctx->pc = 0x1ed740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1ed744: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x1ed744u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1ed748: 0x52200023  beql        $s1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1ED748u;
    {
        const bool branch_taken_0x1ed748 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed748) {
            ctx->pc = 0x1ED74Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED748u;
            // 0x1ed74c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ED7D8u;
            goto label_1ed7d8;
        }
    }
    ctx->pc = 0x1ED750u;
label_1ed750:
    // 0x1ed750: 0x24020170  addiu       $v0, $zero, 0x170
    ctx->pc = 0x1ed750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x1ed754: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1ed754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ed758: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x1ed758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x1ed75c: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x1ed75cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ed760: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x1ed760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1ed764: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ed764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ed768: 0x8c46e84c  lw          $a2, -0x17B4($v0)
    ctx->pc = 0x1ed768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1ed76c: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1ed76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1ed770: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1ed770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1ed774: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1ed774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1ed778: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1ed778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1ed77c: 0x40f809  jalr        $v0
    ctx->pc = 0x1ED77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED784u);
        ctx->pc = 0x1ED780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED77Cu;
            // 0x1ed780: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ED784u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED6E0u: goto label_1ed6e0;
            case 0x1ED728u: goto label_1ed728;
            case 0x1ED72Cu: goto label_1ed72c;
            case 0x1ED750u: goto label_1ed750;
            case 0x1ED7B0u: goto label_1ed7b0;
            case 0x1ED7D8u: goto label_1ed7d8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ED784u; }
            if (ctx->pc != 0x1ED784u) { return; }
        }
        }
    }
    ctx->pc = 0x1ED784u;
    // 0x1ed784: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1ed784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1ed788: 0x14540009  bne         $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ED788u;
    {
        const bool branch_taken_0x1ed788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1ED78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED788u;
            // 0x1ed78c: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed788) {
            ctx->pc = 0x1ED7B0u;
            goto label_1ed7b0;
        }
    }
    ctx->pc = 0x1ED790u;
    // 0x1ed790: 0x8e420750  lw          $v0, 0x750($s2)
    ctx->pc = 0x1ed790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1872)));
    // 0x1ed794: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED794u;
    {
        const bool branch_taken_0x1ed794 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED794u;
            // 0x1ed798: 0xae600040  sw          $zero, 0x40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed794) {
            ctx->pc = 0x1ED7B0u;
            goto label_1ed7b0;
        }
    }
    ctx->pc = 0x1ED79Cu;
    // 0x1ed79c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ed79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed7a0: 0xc07b4e4  jal         func_1ED390
    ctx->pc = 0x1ED7A0u;
    SET_GPR_U32(ctx, 31, 0x1ED7A8u);
    ctx->pc = 0x1ED7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED7A0u;
            // 0x1ed7a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED390u;
    if (runtime->hasFunction(0x1ED390u)) {
        auto targetFn = runtime->lookupFunction(0x1ED390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED7A8u; }
        if (ctx->pc != 0x1ED7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED390_0x1ed390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED7A8u; }
        if (ctx->pc != 0x1ED7A8u) { return; }
    }
    ctx->pc = 0x1ED7A8u;
    // 0x1ed7a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1ED7A8u;
    {
        const bool branch_taken_0x1ed7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED7A8u;
            // 0x1ed7ac: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7a8) {
            ctx->pc = 0x1ED7D8u;
            goto label_1ed7d8;
        }
    }
    ctx->pc = 0x1ED7B0u;
label_1ed7b0:
    // 0x1ed7b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ed7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ed7b4: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x1ed7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1ed7b8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1ed7b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ed7bc: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1ed7bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1ed7c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ed7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1ed7c4: 0x38083  sra         $s0, $v1, 2
    ctx->pc = 0x1ed7c4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1ed7c8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ed7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ed7cc: 0x1620ffe0  bnez        $s1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1ED7CCu;
    {
        const bool branch_taken_0x1ed7cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED7CCu;
            // 0x1ed7d0: 0x828023  subu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7cc) {
            ctx->pc = 0x1ED750u;
            runtime->cooperativeGuestYield();
            goto label_1ed750;
        }
    }
    ctx->pc = 0x1ED7D4u;
    // 0x1ed7d4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ed7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ed7d8:
    // 0x1ed7d8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ed7d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed7dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ed7dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed7e0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ed7e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed7e4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1ed7e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed7e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED7ECu;
            // 0x1ed7f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED6E0u: goto label_1ed6e0;
            case 0x1ED728u: goto label_1ed728;
            case 0x1ED72Cu: goto label_1ed72c;
            case 0x1ED750u: goto label_1ed750;
            case 0x1ED7B0u: goto label_1ed7b0;
            case 0x1ED7D8u: goto label_1ed7d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ED7F4u;
    // 0x1ed7f4: 0x0  nop
    ctx->pc = 0x1ed7f4u;
    // NOP
}
