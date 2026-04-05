#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002848F8
// Address: 0x2848f8 - 0x284950
void sub_002848F8_0x2848f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002848F8_0x2848f8");
#endif

    ctx->pc = 0x2848f8u;

    // 0x2848f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2848f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2848fc: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x2848fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x284900: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x284900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x284904: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x284904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x284908: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x284908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x28490c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x28490cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x284910: 0xc0a1186  jal         func_284618
    ctx->pc = 0x284910u;
    SET_GPR_U32(ctx, 31, 0x284918u);
    ctx->pc = 0x284914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284910u;
            // 0x284914: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284618u;
    if (runtime->hasFunction(0x284618u)) {
        auto targetFn = runtime->lookupFunction(0x284618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284918u; }
        if (ctx->pc != 0x284918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_284618_0x2846b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284918u; }
        if (ctx->pc != 0x284918u) { return; }
    }
    ctx->pc = 0x284918u;
    // 0x284918: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x284918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28491c: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x28491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x284920: 0xc0a1186  jal         func_284618
    ctx->pc = 0x284920u;
    SET_GPR_U32(ctx, 31, 0x284928u);
    ctx->pc = 0x284924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284920u;
            // 0x284924: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284618u;
    if (runtime->hasFunction(0x284618u)) {
        auto targetFn = runtime->lookupFunction(0x284618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284928u; }
        if (ctx->pc != 0x284928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_284618_0x2846b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284928u; }
        if (ctx->pc != 0x284928u) { return; }
    }
    ctx->pc = 0x284928u;
    // 0x284928: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28492c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x28492cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x284930: 0xc0a11ae  jal         func_2846B8
    ctx->pc = 0x284930u;
    SET_GPR_U32(ctx, 31, 0x284938u);
    ctx->pc = 0x284934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284930u;
            // 0x284934: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846B8u;
    if (runtime->hasFunction(0x2846B8u)) {
        auto targetFn = runtime->lookupFunction(0x2846B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284938u; }
        if (ctx->pc != 0x284938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2846b8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284938u; }
        if (ctx->pc != 0x284938u) { return; }
    }
    ctx->pc = 0x284938u;
    // 0x284938: 0xc0a113a  jal         func_2844E8
    ctx->pc = 0x284938u;
    SET_GPR_U32(ctx, 31, 0x284940u);
    ctx->pc = 0x28493Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284938u;
            // 0x28493c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2844E8u;
    if (runtime->hasFunction(0x2844E8u)) {
        auto targetFn = runtime->lookupFunction(0x2844E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284940u; }
        if (ctx->pc != 0x284940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2844e8_0x284618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284940u; }
        if (ctx->pc != 0x284940u) { return; }
    }
    ctx->pc = 0x284940u;
    // 0x284940: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x284940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x284944: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x284944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x284948: 0x3e00008  jr          $ra
    ctx->pc = 0x284948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28494Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284948u;
            // 0x28494c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284950u;
}
