#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019D960
// Address: 0x19d960 - 0x19d9a0
void sub_0019D960_0x19d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D960_0x19d960");
#endif

    ctx->pc = 0x19d960u;

    // 0x19d960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d968: 0xc067268  jal         func_19C9A0
    ctx->pc = 0x19D968u;
    SET_GPR_U32(ctx, 31, 0x19D970u);
    ctx->pc = 0x19C9A0u;
    if (runtime->hasFunction(0x19C9A0u)) {
        auto targetFn = runtime->lookupFunction(0x19C9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D970u; }
        if (ctx->pc != 0x19D970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C9A0_0x19c9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D970u; }
        if (ctx->pc != 0x19D970u) { return; }
    }
    ctx->pc = 0x19D970u;
    // 0x19d970: 0xc05d656  jal         func_175958
    ctx->pc = 0x19D970u;
    SET_GPR_U32(ctx, 31, 0x19D978u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D978u; }
        if (ctx->pc != 0x19D978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D978u; }
        if (ctx->pc != 0x19D978u) { return; }
    }
    ctx->pc = 0x19D978u;
    // 0x19d978: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19d978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19d97c: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19d97cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19d980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d984: 0x24a53d10  addiu       $a1, $a1, 0x3D10
    ctx->pc = 0x19d984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15632));
    // 0x19d988: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19D988u;
    SET_GPR_U32(ctx, 31, 0x19D990u);
    ctx->pc = 0x19D98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D988u;
            // 0x19d98c: 0x24c6d798  addiu       $a2, $a2, -0x2868 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D990u; }
        if (ctx->pc != 0x19D990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D990u; }
        if (ctx->pc != 0x19D990u) { return; }
    }
    ctx->pc = 0x19D990u;
    // 0x19d990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d994: 0x3e00008  jr          $ra
    ctx->pc = 0x19D994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D994u;
            // 0x19d998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D99Cu;
    // 0x19d99c: 0x0  nop
    ctx->pc = 0x19d99cu;
    // NOP
}
