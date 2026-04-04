#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A67C8
// Address: 0x1a67c8 - 0x1a6820
void sub_001A67C8_0x1a67c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A67C8_0x1a67c8");
#endif

    ctx->pc = 0x1a67c8u;

    // 0x1a67c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a67c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a67cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a67ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a67d0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a67d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a67d4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1a67d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1a67d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a67d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a67dc: 0xac40cabc  sw          $zero, -0x3544($v0)
    ctx->pc = 0x1a67dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953660), GPR_U32(ctx, 0));
    // 0x1a67e0: 0xac60cac0  sw          $zero, -0x3540($v1)
    ctx->pc = 0x1a67e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953664), GPR_U32(ctx, 0));
    // 0x1a67e4: 0xc06cbc8  jal         func_1B2F20
    ctx->pc = 0x1A67E4u;
    SET_GPR_U32(ctx, 31, 0x1A67ECu);
    ctx->pc = 0x1A67E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A67E4u;
            // 0x1a67e8: 0xac80cac4  sw          $zero, -0x353C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294953668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2F20u;
    if (runtime->hasFunction(0x1B2F20u)) {
        auto targetFn = runtime->lookupFunction(0x1B2F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A67ECu; }
        if (ctx->pc != 0x1A67ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b2f20_0x1b2f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A67ECu; }
        if (ctx->pc != 0x1A67ECu) { return; }
    }
    ctx->pc = 0x1A67ECu;
    // 0x1a67ec: 0xc06cc06  jal         func_1B3018
    ctx->pc = 0x1A67ECu;
    SET_GPR_U32(ctx, 31, 0x1A67F4u);
    ctx->pc = 0x1B3018u;
    if (runtime->hasFunction(0x1B3018u)) {
        auto targetFn = runtime->lookupFunction(0x1B3018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A67F4u; }
        if (ctx->pc != 0x1A67F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b3018_0x1b30d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A67F4u; }
        if (ctx->pc != 0x1A67F4u) { return; }
    }
    ctx->pc = 0x1A67F4u;
    // 0x1a67f4: 0xc06bbba  jal         func_1AEEE8
    ctx->pc = 0x1A67F4u;
    SET_GPR_U32(ctx, 31, 0x1A67FCu);
    ctx->pc = 0x1AEEE8u;
    if (runtime->hasFunction(0x1AEEE8u)) {
        auto targetFn = runtime->lookupFunction(0x1AEEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A67FCu; }
        if (ctx->pc != 0x1A67FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEEE8_0x1aeee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A67FCu; }
        if (ctx->pc != 0x1A67FCu) { return; }
    }
    ctx->pc = 0x1A67FCu;
    // 0x1a67fc: 0xc06bdae  jal         func_1AF6B8
    ctx->pc = 0x1A67FCu;
    SET_GPR_U32(ctx, 31, 0x1A6804u);
    ctx->pc = 0x1AF6B8u;
    if (runtime->hasFunction(0x1AF6B8u)) {
        auto targetFn = runtime->lookupFunction(0x1AF6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6804u; }
        if (ctx->pc != 0x1A6804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF6B8_0x1af6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6804u; }
        if (ctx->pc != 0x1A6804u) { return; }
    }
    ctx->pc = 0x1A6804u;
    // 0x1a6804: 0xc06b918  jal         func_1AE460
    ctx->pc = 0x1A6804u;
    SET_GPR_U32(ctx, 31, 0x1A680Cu);
    ctx->pc = 0x1AE460u;
    if (runtime->hasFunction(0x1AE460u)) {
        auto targetFn = runtime->lookupFunction(0x1AE460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A680Cu; }
        if (ctx->pc != 0x1A680Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE460_0x1ae460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A680Cu; }
        if (ctx->pc != 0x1A680Cu) { return; }
    }
    ctx->pc = 0x1A680Cu;
    // 0x1a680c: 0xc06bad0  jal         func_1AEB40
    ctx->pc = 0x1A680Cu;
    SET_GPR_U32(ctx, 31, 0x1A6814u);
    ctx->pc = 0x1AEB40u;
    if (runtime->hasFunction(0x1AEB40u)) {
        auto targetFn = runtime->lookupFunction(0x1AEB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6814u; }
        if (ctx->pc != 0x1A6814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEB40_0x1aeb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6814u; }
        if (ctx->pc != 0x1A6814u) { return; }
    }
    ctx->pc = 0x1A6814u;
    // 0x1a6814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6818: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A681Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6818u;
            // 0x1a681c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6820u;
}
