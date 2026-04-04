#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A700
// Address: 0x17a700 - 0x17a7a8
void sub_0017A700_0x17a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A700_0x17a700");
#endif

    ctx->pc = 0x17a700u;

    // 0x17a700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a704: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a708: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17a708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17a70c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a710: 0xc05d656  jal         func_175958
    ctx->pc = 0x17A710u;
    SET_GPR_U32(ctx, 31, 0x17A718u);
    ctx->pc = 0x17A714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A710u;
            // 0x17a714: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A718u; }
        if (ctx->pc != 0x17A718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A718u; }
        if (ctx->pc != 0x17A718u) { return; }
    }
    ctx->pc = 0x17A718u;
    // 0x17a718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17a718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a71c: 0xc05d6b6  jal         func_175AD8
    ctx->pc = 0x17A71Cu;
    SET_GPR_U32(ctx, 31, 0x17A724u);
    ctx->pc = 0x17A720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A71Cu;
            // 0x17a720: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AD8u;
    if (runtime->hasFunction(0x175AD8u)) {
        auto targetFn = runtime->lookupFunction(0x175AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A724u; }
        if (ctx->pc != 0x17A724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AD8_0x175ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A724u; }
        if (ctx->pc != 0x17A724u) { return; }
    }
    ctx->pc = 0x17A724u;
    // 0x17a724: 0xc05d656  jal         func_175958
    ctx->pc = 0x17A724u;
    SET_GPR_U32(ctx, 31, 0x17A72Cu);
    ctx->pc = 0x17A728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A724u;
            // 0x17a728: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A72Cu; }
        if (ctx->pc != 0x17A72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A72Cu; }
        if (ctx->pc != 0x17A72Cu) { return; }
    }
    ctx->pc = 0x17A72Cu;
    // 0x17a72c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a730: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17A730u;
    {
        const bool branch_taken_0x17a730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A730u;
            // 0x17a734: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a730) {
            ctx->pc = 0x17A790u;
            goto label_17a790;
        }
    }
    ctx->pc = 0x17A738u;
    // 0x17a738: 0x2450e848  addiu       $s0, $v0, -0x17B8
    ctx->pc = 0x17a738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x17a73c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x17a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x17a740: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x17A740u;
    {
        const bool branch_taken_0x17a740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A740u;
            // 0x17a744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a740) {
            ctx->pc = 0x17A794u;
            goto label_17a794;
        }
    }
    ctx->pc = 0x17A748u;
    // 0x17a748: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17a748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17a74c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x17a74cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x17a750: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x17a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x17a754: 0x40f809  jalr        $v0
    ctx->pc = 0x17A754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A75Cu);
        ctx->pc = 0x17A758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A754u;
            // 0x17a758: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A75Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A790u: goto label_17a790;
            case 0x17A794u: goto label_17a794;
            case 0x17A798u: goto label_17a798;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A75Cu; }
            if (ctx->pc != 0x17A75Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17A75Cu;
    // 0x17a75c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17A75Cu;
    {
        const bool branch_taken_0x17a75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A75Cu;
            // 0x17a760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a75c) {
            ctx->pc = 0x17A794u;
            goto label_17a794;
        }
    }
    ctx->pc = 0x17A764u;
    // 0x17a764: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x17a764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x17a768: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17a76c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x17a76cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x17a770: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x17a770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x17a774: 0x40f809  jalr        $v0
    ctx->pc = 0x17A774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A77Cu);
        ctx->pc = 0x17A778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A774u;
            // 0x17a778: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A77Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A790u: goto label_17a790;
            case 0x17A794u: goto label_17a794;
            case 0x17A798u: goto label_17a798;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A77Cu; }
            if (ctx->pc != 0x17A77Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17A77Cu;
    // 0x17a77c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17a77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a780: 0xc061a3c  jal         func_1868F0
    ctx->pc = 0x17A780u;
    SET_GPR_U32(ctx, 31, 0x17A788u);
    ctx->pc = 0x17A784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A780u;
            // 0x17a784: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1868F0u;
    if (runtime->hasFunction(0x1868F0u)) {
        auto targetFn = runtime->lookupFunction(0x1868F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A788u; }
        if (ctx->pc != 0x17A788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001868F0_0x1868f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A788u; }
        if (ctx->pc != 0x17A788u) { return; }
    }
    ctx->pc = 0x17A788u;
    // 0x17a788: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17A788u;
    {
        const bool branch_taken_0x17a788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A788u;
            // 0x17a78c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a788) {
            ctx->pc = 0x17A798u;
            goto label_17a798;
        }
    }
    ctx->pc = 0x17A790u;
label_17a790:
    // 0x17a790: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17a790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a794:
    // 0x17a794: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17a794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17a798:
    // 0x17a798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a79c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x17A7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A7A0u;
            // 0x17a7a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A790u: goto label_17a790;
            case 0x17A794u: goto label_17a794;
            case 0x17A798u: goto label_17a798;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A7A8u;
}
