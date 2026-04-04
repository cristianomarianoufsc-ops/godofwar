#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1908
// Address: 0x1f1908 - 0x1f1948
void sub_001F1908_0x1f1908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1908_0x1f1908");
#endif

    ctx->pc = 0x1f1908u;

    // 0x1f1908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f1908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f190c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f1910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f1914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1918: 0xc091024  jal         func_244090
    ctx->pc = 0x1F1918u;
    SET_GPR_U32(ctx, 31, 0x1F1920u);
    ctx->pc = 0x1F191Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1918u;
            // 0x1f191c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244090u;
    if (runtime->hasFunction(0x244090u)) {
        auto targetFn = runtime->lookupFunction(0x244090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1920u; }
        if (ctx->pc != 0x1F1920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244090_0x244090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1920u; }
        if (ctx->pc != 0x1F1920u) { return; }
    }
    ctx->pc = 0x1F1920u;
    // 0x1f1920: 0xc091024  jal         func_244090
    ctx->pc = 0x1F1920u;
    SET_GPR_U32(ctx, 31, 0x1F1928u);
    ctx->pc = 0x1F1924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1920u;
            // 0x1f1924: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244090u;
    if (runtime->hasFunction(0x244090u)) {
        auto targetFn = runtime->lookupFunction(0x244090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1928u; }
        if (ctx->pc != 0x1F1928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244090_0x244090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1928u; }
        if (ctx->pc != 0x1F1928u) { return; }
    }
    ctx->pc = 0x1F1928u;
    // 0x1f1928: 0xc07c652  jal         func_1F1948
    ctx->pc = 0x1F1928u;
    SET_GPR_U32(ctx, 31, 0x1F1930u);
    ctx->pc = 0x1F192Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1928u;
            // 0x1f192c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1948u;
    if (runtime->hasFunction(0x1F1948u)) {
        auto targetFn = runtime->lookupFunction(0x1F1948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1930u; }
        if (ctx->pc != 0x1F1930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f1948_0x1f1a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1930u; }
        if (ctx->pc != 0x1F1930u) { return; }
    }
    ctx->pc = 0x1F1930u;
    // 0x1f1930: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f1930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1938: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f1938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f193c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F193Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F193Cu;
            // 0x1f1940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1944u;
    // 0x1f1944: 0x0  nop
    ctx->pc = 0x1f1944u;
    // NOP
}
