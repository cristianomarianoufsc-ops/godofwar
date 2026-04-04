#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018D488
// Address: 0x18d488 - 0x18d4c0
void sub_0018D488_0x18d488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D488_0x18d488");
#endif

    ctx->pc = 0x18d488u;

    // 0x18d488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18d488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18d48c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18d48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18d490: 0xc05d656  jal         func_175958
    ctx->pc = 0x18D490u;
    SET_GPR_U32(ctx, 31, 0x18D498u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D498u; }
        if (ctx->pc != 0x18D498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D498u; }
        if (ctx->pc != 0x18D498u) { return; }
    }
    ctx->pc = 0x18D498u;
    // 0x18d498: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18d498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18d49c: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18d49cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18d4a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d4a4: 0x24a531f8  addiu       $a1, $a1, 0x31F8
    ctx->pc = 0x18d4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12792));
    // 0x18d4a8: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x18D4A8u;
    SET_GPR_U32(ctx, 31, 0x18D4B0u);
    ctx->pc = 0x18D4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D4A8u;
            // 0x18d4ac: 0x24c6d3a8  addiu       $a2, $a2, -0x2C58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4B0u; }
        if (ctx->pc != 0x18D4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4B0u; }
        if (ctx->pc != 0x18D4B0u) { return; }
    }
    ctx->pc = 0x18D4B0u;
    // 0x18d4b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18d4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x18D4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D4B4u;
            // 0x18d4b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D4BCu;
    // 0x18d4bc: 0x0  nop
    ctx->pc = 0x18d4bcu;
    // NOP
}
