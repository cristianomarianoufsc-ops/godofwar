#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A658
// Address: 0x17a658 - 0x17a700
void sub_0017A658_0x17a658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A658_0x17a658");
#endif

    ctx->pc = 0x17a658u;

    // 0x17a658: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a65c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a660: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17a660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17a664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a668: 0xc05d656  jal         func_175958
    ctx->pc = 0x17A668u;
    SET_GPR_U32(ctx, 31, 0x17A670u);
    ctx->pc = 0x17A66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A668u;
            // 0x17a66c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A670u; }
        if (ctx->pc != 0x17A670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A670u; }
        if (ctx->pc != 0x17A670u) { return; }
    }
    ctx->pc = 0x17A670u;
    // 0x17a670: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17a670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a674: 0xc05d6ac  jal         func_175AB0
    ctx->pc = 0x17A674u;
    SET_GPR_U32(ctx, 31, 0x17A67Cu);
    ctx->pc = 0x17A678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A674u;
            // 0x17a678: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AB0u;
    if (runtime->hasFunction(0x175AB0u)) {
        auto targetFn = runtime->lookupFunction(0x175AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A67Cu; }
        if (ctx->pc != 0x17A67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AB0_0x175ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A67Cu; }
        if (ctx->pc != 0x17A67Cu) { return; }
    }
    ctx->pc = 0x17A67Cu;
    // 0x17a67c: 0xc05d656  jal         func_175958
    ctx->pc = 0x17A67Cu;
    SET_GPR_U32(ctx, 31, 0x17A684u);
    ctx->pc = 0x17A680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A67Cu;
            // 0x17a680: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A684u; }
        if (ctx->pc != 0x17A684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A684u; }
        if (ctx->pc != 0x17A684u) { return; }
    }
    ctx->pc = 0x17A684u;
    // 0x17a684: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17a684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a688: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17A688u;
    {
        const bool branch_taken_0x17a688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A688u;
            // 0x17a68c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a688) {
            ctx->pc = 0x17A6E8u;
            goto label_17a6e8;
        }
    }
    ctx->pc = 0x17A690u;
    // 0x17a690: 0x2450e848  addiu       $s0, $v0, -0x17B8
    ctx->pc = 0x17a690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x17a694: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x17a694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x17a698: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x17A698u;
    {
        const bool branch_taken_0x17a698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A698u;
            // 0x17a69c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a698) {
            ctx->pc = 0x17A6ECu;
            goto label_17a6ec;
        }
    }
    ctx->pc = 0x17A6A0u;
    // 0x17a6a0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17a6a4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x17a6a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x17a6a8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x17a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x17a6ac: 0x40f809  jalr        $v0
    ctx->pc = 0x17A6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A6B4u);
        ctx->pc = 0x17A6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A6ACu;
            // 0x17a6b0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A6B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A6E8u: goto label_17a6e8;
            case 0x17A6ECu: goto label_17a6ec;
            case 0x17A6F0u: goto label_17a6f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A6B4u; }
            if (ctx->pc != 0x17A6B4u) { return; }
        }
        }
    }
    ctx->pc = 0x17A6B4u;
    // 0x17a6b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17A6B4u;
    {
        const bool branch_taken_0x17a6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A6B4u;
            // 0x17a6b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a6b4) {
            ctx->pc = 0x17A6ECu;
            goto label_17a6ec;
        }
    }
    ctx->pc = 0x17A6BCu;
    // 0x17a6bc: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x17a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x17a6c0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17a6c4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x17a6c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x17a6c8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x17a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x17a6cc: 0x40f809  jalr        $v0
    ctx->pc = 0x17A6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A6D4u);
        ctx->pc = 0x17A6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A6CCu;
            // 0x17a6d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A6D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A6E8u: goto label_17a6e8;
            case 0x17A6ECu: goto label_17a6ec;
            case 0x17A6F0u: goto label_17a6f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A6D4u; }
            if (ctx->pc != 0x17A6D4u) { return; }
        }
        }
    }
    ctx->pc = 0x17A6D4u;
    // 0x17a6d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17a6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6d8: 0xc061a06  jal         func_186818
    ctx->pc = 0x17A6D8u;
    SET_GPR_U32(ctx, 31, 0x17A6E0u);
    ctx->pc = 0x17A6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A6D8u;
            // 0x17a6dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186818u;
    if (runtime->hasFunction(0x186818u)) {
        auto targetFn = runtime->lookupFunction(0x186818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A6E0u; }
        if (ctx->pc != 0x17A6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186818_0x186818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A6E0u; }
        if (ctx->pc != 0x17A6E0u) { return; }
    }
    ctx->pc = 0x17A6E0u;
    // 0x17a6e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17A6E0u;
    {
        const bool branch_taken_0x17a6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A6E0u;
            // 0x17a6e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a6e0) {
            ctx->pc = 0x17A6F0u;
            goto label_17a6f0;
        }
    }
    ctx->pc = 0x17A6E8u;
label_17a6e8:
    // 0x17a6e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17a6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a6ec:
    // 0x17a6ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17a6ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17a6f0:
    // 0x17a6f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a6f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a6f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x17A6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A6F8u;
            // 0x17a6fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A6E8u: goto label_17a6e8;
            case 0x17A6ECu: goto label_17a6ec;
            case 0x17A6F0u: goto label_17a6f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A700u;
}
