#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B7C0
// Address: 0x17b7c0 - 0x17b858
void sub_0017B7C0_0x17b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B7C0_0x17b7c0");
#endif

    ctx->pc = 0x17b7c0u;

    // 0x17b7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b7c4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17b7c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17b7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17b7cc: 0x2442afc0  addiu       $v0, $v0, -0x5040
    ctx->pc = 0x17b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
    // 0x17b7d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b7d8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17b7dc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x17b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x17b7e0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x17b7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x17b7e4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x17b7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x17b7e8: 0x8cc4001c  lw          $a0, 0x1C($a2)
    ctx->pc = 0x17b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x17b7ec: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x17b7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x17b7f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17b7f4: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x17B7F4u;
    SET_GPR_U32(ctx, 31, 0x17B7FCu);
    ctx->pc = 0x17B7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B7F4u;
            // 0x17b7f8: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B7FCu; }
        if (ctx->pc != 0x17B7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B7FCu; }
        if (ctx->pc != 0x17B7FCu) { return; }
    }
    ctx->pc = 0x17B7FCu;
    // 0x17b7fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x17b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17b800: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x17b800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x17b804: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x17b804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x17b808: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x17B808u;
    SET_GPR_U32(ctx, 31, 0x17B810u);
    ctx->pc = 0x17B80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B808u;
            // 0x17b80c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B810u; }
        if (ctx->pc != 0x17B810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B810u; }
        if (ctx->pc != 0x17B810u) { return; }
    }
    ctx->pc = 0x17B810u;
    // 0x17b810: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x17b810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17b814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b818: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x17b818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17b81c: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x17b81cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x17b820: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17b820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17b824: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x17B824u;
    SET_GPR_U32(ctx, 31, 0x17B82Cu);
    ctx->pc = 0x17B828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B824u;
            // 0x17b828: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B82Cu; }
        if (ctx->pc != 0x17B82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B82Cu; }
        if (ctx->pc != 0x17B82Cu) { return; }
    }
    ctx->pc = 0x17B82Cu;
    // 0x17b82c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17b830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b834: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x17b834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17b838: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x17b838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x17b83c: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x17B83Cu;
    SET_GPR_U32(ctx, 31, 0x17B844u);
    ctx->pc = 0x17B840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B83Cu;
            // 0x17b840: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B844u; }
        if (ctx->pc != 0x17B844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B844u; }
        if (ctx->pc != 0x17B844u) { return; }
    }
    ctx->pc = 0x17B844u;
    // 0x17b844: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b84c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17b84cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b850: 0x3e00008  jr          $ra
    ctx->pc = 0x17B850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B850u;
            // 0x17b854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B858u;
}
