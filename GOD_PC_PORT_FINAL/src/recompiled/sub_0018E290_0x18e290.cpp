#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018E290
// Address: 0x18e290 - 0x18e2f0
void sub_0018E290_0x18e290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E290_0x18e290");
#endif

    ctx->pc = 0x18e290u;

    // 0x18e290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e294: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18e294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18e298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e29c: 0xc05d656  jal         func_175958
    ctx->pc = 0x18E29Cu;
    SET_GPR_U32(ctx, 31, 0x18E2A4u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2A4u; }
        if (ctx->pc != 0x18E2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2A4u; }
        if (ctx->pc != 0x18E2A4u) { return; }
    }
    ctx->pc = 0x18E2A4u;
    // 0x18e2a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e2a8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18e2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18e2ac: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18e2acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18e2b0: 0x24a53230  addiu       $a1, $a1, 0x3230
    ctx->pc = 0x18e2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12848));
    // 0x18e2b4: 0x24c6d640  addiu       $a2, $a2, -0x29C0
    ctx->pc = 0x18e2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956608));
    // 0x18e2b8: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x18E2B8u;
    SET_GPR_U32(ctx, 31, 0x18E2C0u);
    ctx->pc = 0x18E2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E2B8u;
            // 0x18e2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2C0u; }
        if (ctx->pc != 0x18E2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2C0u; }
        if (ctx->pc != 0x18E2C0u) { return; }
    }
    ctx->pc = 0x18E2C0u;
    // 0x18e2c0: 0xc06354c  jal         func_18D530
    ctx->pc = 0x18E2C0u;
    SET_GPR_U32(ctx, 31, 0x18E2C8u);
    ctx->pc = 0x18D530u;
    if (runtime->hasFunction(0x18D530u)) {
        auto targetFn = runtime->lookupFunction(0x18D530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2C8u; }
        if (ctx->pc != 0x18E2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D530_0x18d530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2C8u; }
        if (ctx->pc != 0x18E2C8u) { return; }
    }
    ctx->pc = 0x18E2C8u;
    // 0x18e2c8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18e2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18e2cc: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18e2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18e2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e2d4: 0x24a53240  addiu       $a1, $a1, 0x3240
    ctx->pc = 0x18e2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12864));
    // 0x18e2d8: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x18E2D8u;
    SET_GPR_U32(ctx, 31, 0x18E2E0u);
    ctx->pc = 0x18E2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E2D8u;
            // 0x18e2dc: 0x24c6e180  addiu       $a2, $a2, -0x1E80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2E0u; }
        if (ctx->pc != 0x18E2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2E0u; }
        if (ctx->pc != 0x18E2E0u) { return; }
    }
    ctx->pc = 0x18E2E0u;
    // 0x18e2e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18e2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x18E2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E2E8u;
            // 0x18e2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E2F0u;
}
