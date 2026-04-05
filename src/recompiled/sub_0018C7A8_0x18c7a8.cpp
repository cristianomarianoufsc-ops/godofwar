#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018C7A8
// Address: 0x18c7a8 - 0x18c850
void sub_0018C7A8_0x18c7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C7A8_0x18c7a8");
#endif

    ctx->pc = 0x18c7a8u;

    // 0x18c7a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18c7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18c7ac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x18c7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x18c7b0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x18c7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x18c7b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18c7b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18c7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18c7bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18c7bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7c0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x18c7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x18c7c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18c7c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7c8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18c7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x18c7cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18c7ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18c7d4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x18c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_18c7d8:
    // 0x18c7d8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x18c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x18c7dc: 0x2823018  mult        $a2, $s4, $v0
    ctx->pc = 0x18c7dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x18c7e0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x18c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x18c7e4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x18c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18c7e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18c7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18c7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18c7f4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x18C7F4u;
    {
        const bool branch_taken_0x18c7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C7F4u;
            // 0x18c7f8: 0xc38021  addu        $s0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c7f4) {
            ctx->pc = 0x18C820u;
            goto label_18c820;
        }
    }
    ctx->pc = 0x18C7FCu;
    // 0x18c7fc: 0xc05d5f6  jal         func_1757D8
    ctx->pc = 0x18C7FCu;
    SET_GPR_U32(ctx, 31, 0x18C804u);
    ctx->pc = 0x1757D8u;
    if (runtime->hasFunction(0x1757D8u)) {
        auto targetFn = runtime->lookupFunction(0x1757D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C804u; }
        if (ctx->pc != 0x18C804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1757d8_0x175828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C804u; }
        if (ctx->pc != 0x18C804u) { return; }
    }
    ctx->pc = 0x18C804u;
    // 0x18c804: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18c804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c808: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x18C808u;
    SET_GPR_U32(ctx, 31, 0x18C810u);
    ctx->pc = 0x18C80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C808u;
            // 0x18c80c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C810u; }
        if (ctx->pc != 0x18C810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C810u; }
        if (ctx->pc != 0x18C810u) { return; }
    }
    ctx->pc = 0x18C810u;
    // 0x18c810: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x18c810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18c814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c818: 0xc062ede  jal         func_18BB78
    ctx->pc = 0x18C818u;
    SET_GPR_U32(ctx, 31, 0x18C820u);
    ctx->pc = 0x18C81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C818u;
            // 0x18c81c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BB78u;
    if (runtime->hasFunction(0x18BB78u)) {
        auto targetFn = runtime->lookupFunction(0x18BB78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C820u; }
        if (ctx->pc != 0x18C820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BB78_0x18bb78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C820u; }
        if (ctx->pc != 0x18C820u) { return; }
    }
    ctx->pc = 0x18C820u;
label_18c820:
    // 0x18c820: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x18c820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x18c824: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x18C824u;
    {
        const bool branch_taken_0x18c824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c824) {
            ctx->pc = 0x18C828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C824u;
            // 0x18c828: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C7D8u;
            runtime->cooperativeGuestYield();
            goto label_18c7d8;
        }
    }
    ctx->pc = 0x18C82Cu;
    // 0x18c82c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18c82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18c830: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x18c830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18c834: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x18c834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18c838: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18c838u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c83c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x18c83cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c840: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c844: 0x3e00008  jr          $ra
    ctx->pc = 0x18C844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C844u;
            // 0x18c848: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C7D8u: goto label_18c7d8;
            case 0x18C820u: goto label_18c820;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C84Cu;
    // 0x18c84c: 0x0  nop
    ctx->pc = 0x18c84cu;
    // NOP
}
