#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00279DF0
// Address: 0x279df0 - 0x279e30
void sub_00279DF0_0x279df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279DF0_0x279df0");
#endif

    ctx->pc = 0x279df0u;

    // 0x279df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279df4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x279df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279df8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x279df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x279dfc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x279dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x279e00: 0xc0a4fd0  jal         func_293F40
    ctx->pc = 0x279E00u;
    SET_GPR_U32(ctx, 31, 0x279E08u);
    ctx->pc = 0x279E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279E00u;
            // 0x279e04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293F40u;
    if (runtime->hasFunction(0x293F40u)) {
        auto targetFn = runtime->lookupFunction(0x293F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E08u; }
        if (ctx->pc != 0x279E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293f40_0x293f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E08u; }
        if (ctx->pc != 0x279E08u) { return; }
    }
    ctx->pc = 0x279E08u;
    // 0x279e08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x279e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e0c: 0xc0a4fd8  jal         func_293F60
    ctx->pc = 0x279E0Cu;
    SET_GPR_U32(ctx, 31, 0x279E14u);
    ctx->pc = 0x279E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279E0Cu;
            // 0x279e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293F60u;
    if (runtime->hasFunction(0x293F60u)) {
        auto targetFn = runtime->lookupFunction(0x293F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E14u; }
        if (ctx->pc != 0x279E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293f60_0x293f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E14u; }
        if (ctx->pc != 0x279E14u) { return; }
    }
    ctx->pc = 0x279E14u;
    // 0x279e14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x279e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x279e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279e1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x279e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279e20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279e24: 0x3e00008  jr          $ra
    ctx->pc = 0x279E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279E24u;
            // 0x279e28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279E2Cu;
    // 0x279e2c: 0x0  nop
    ctx->pc = 0x279e2cu;
    // NOP
}
