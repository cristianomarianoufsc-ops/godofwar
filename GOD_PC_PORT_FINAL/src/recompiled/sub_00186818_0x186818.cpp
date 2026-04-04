#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186818
// Address: 0x186818 - 0x1868f0
void sub_00186818_0x186818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186818_0x186818");
#endif

    ctx->pc = 0x186818u;

label_186818:
    // 0x186818: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x186818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18681c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18681cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x186820: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x186820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x186824: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x186824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x186828: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18682c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18682cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x186830: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x186830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186834: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x186834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x186838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18683c: 0xc05d6ac  jal         func_175AB0
    ctx->pc = 0x18683Cu;
    SET_GPR_U32(ctx, 31, 0x186844u);
    ctx->pc = 0x186840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18683Cu;
            // 0x186840: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AB0u;
    if (runtime->hasFunction(0x175AB0u)) {
        auto targetFn = runtime->lookupFunction(0x175AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186844u; }
        if (ctx->pc != 0x186844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AB0_0x175ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186844u; }
        if (ctx->pc != 0x186844u) { return; }
    }
    ctx->pc = 0x186844u;
    // 0x186844: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x186844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x186848: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18684c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186850: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x186850u;
    {
        const bool branch_taken_0x186850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186850u;
            // 0x186854: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186850) {
            ctx->pc = 0x1868CCu;
            goto label_1868cc;
        }
    }
    ctx->pc = 0x186858u;
    // 0x186858: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x186858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x18685c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18685Cu;
    {
        const bool branch_taken_0x18685c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18685Cu;
            // 0x186860: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18685c) {
            ctx->pc = 0x1868A4u;
            goto label_1868a4;
        }
    }
    ctx->pc = 0x186864u;
    // 0x186864: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x186864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_186868:
    // 0x186868: 0x26340050  addiu       $s4, $s1, 0x50
    ctx->pc = 0x186868u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x18686c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x18686cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x186870: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x186870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186874: 0xc061a06  jal         func_186818
    ctx->pc = 0x186874u;
    SET_GPR_U32(ctx, 31, 0x18687Cu);
    ctx->pc = 0x186878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186874u;
            // 0x186878: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186818u;
    runtime->cooperativeGuestYield();
    goto label_186818;
    ctx->pc = 0x18687Cu;
label_18687c:
    // 0x18687c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18687cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186880: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x186880u;
    {
        const bool branch_taken_0x186880 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x186884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186880u;
            // 0x186884: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186880) {
            ctx->pc = 0x1868C8u;
            goto label_1868c8;
        }
    }
    ctx->pc = 0x186888u;
    // 0x186888: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x186888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x18688c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18688Cu;
    {
        const bool branch_taken_0x18688c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18688Cu;
            // 0x186890: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18688c) {
            ctx->pc = 0x1868A4u;
            goto label_1868a4;
        }
    }
    ctx->pc = 0x186894u;
    // 0x186894: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x186894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x186898: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x186898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18689c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x18689Cu;
    {
        const bool branch_taken_0x18689c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1868A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18689Cu;
            // 0x1868a0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18689c) {
            ctx->pc = 0x186868u;
            runtime->cooperativeGuestYield();
            goto label_186868;
        }
    }
    ctx->pc = 0x1868A4u;
label_1868a4:
    // 0x1868a4: 0xc05d652  jal         func_175948
    ctx->pc = 0x1868A4u;
    SET_GPR_U32(ctx, 31, 0x1868ACu);
    ctx->pc = 0x175948u;
    if (runtime->hasFunction(0x175948u)) {
        auto targetFn = runtime->lookupFunction(0x175948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1868ACu; }
        if (ctx->pc != 0x1868ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175948_0x175958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1868ACu; }
        if (ctx->pc != 0x1868ACu) { return; }
    }
    ctx->pc = 0x1868ACu;
    // 0x1868ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1868acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1868b0: 0xc05d6ac  jal         func_175AB0
    ctx->pc = 0x1868B0u;
    SET_GPR_U32(ctx, 31, 0x1868B8u);
    ctx->pc = 0x1868B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1868B0u;
            // 0x1868b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AB0u;
    if (runtime->hasFunction(0x175AB0u)) {
        auto targetFn = runtime->lookupFunction(0x175AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1868B8u; }
        if (ctx->pc != 0x1868B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AB0_0x175ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1868B8u; }
        if (ctx->pc != 0x1868B8u) { return; }
    }
    ctx->pc = 0x1868B8u;
    // 0x1868b8: 0xc05d652  jal         func_175948
    ctx->pc = 0x1868B8u;
    SET_GPR_U32(ctx, 31, 0x1868C0u);
    ctx->pc = 0x1868BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1868B8u;
            // 0x1868bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175948u;
    if (runtime->hasFunction(0x175948u)) {
        auto targetFn = runtime->lookupFunction(0x175948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1868C0u; }
        if (ctx->pc != 0x1868C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175948_0x175958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1868C0u; }
        if (ctx->pc != 0x1868C0u) { return; }
    }
    ctx->pc = 0x1868C0u;
    // 0x1868c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1868c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1868c4: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x1868c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_1868c8:
    // 0x1868c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1868c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1868cc:
    // 0x1868cc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1868ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1868d0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1868d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1868d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1868d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1868d8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1868d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1868dc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1868dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1868e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1868e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1868e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1868E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1868E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1868E4u;
            // 0x1868e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186818u: goto label_186818;
            case 0x186868u: goto label_186868;
            case 0x18687Cu: goto label_18687c;
            case 0x1868A4u: goto label_1868a4;
            case 0x1868C8u: goto label_1868c8;
            case 0x1868CCu: goto label_1868cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1868ECu;
    // 0x1868ec: 0x0  nop
    ctx->pc = 0x1868ecu;
    // NOP
}
