#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00202278
// Address: 0x202278 - 0x2022b8
void sub_00202278_0x202278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202278_0x202278");
#endif

    ctx->pc = 0x202278u;

    // 0x202278: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x202278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20227c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20227cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202280: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x202280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x202284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202288: 0xc04f856  jal         func_13E158
    ctx->pc = 0x202288u;
    SET_GPR_U32(ctx, 31, 0x202290u);
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202290u; }
        if (ctx->pc != 0x202290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202290u; }
        if (ctx->pc != 0x202290u) { return; }
    }
    ctx->pc = 0x202290u;
    // 0x202290: 0xc080730  jal         func_201CC0
    ctx->pc = 0x202290u;
    SET_GPR_U32(ctx, 31, 0x202298u);
    ctx->pc = 0x201CC0u;
    if (runtime->hasFunction(0x201CC0u)) {
        auto targetFn = runtime->lookupFunction(0x201CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202298u; }
        if (ctx->pc != 0x202298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201CC0_0x201cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202298u; }
        if (ctx->pc != 0x202298u) { return; }
    }
    ctx->pc = 0x202298u;
    // 0x202298: 0xc0806dc  jal         func_201B70
    ctx->pc = 0x202298u;
    SET_GPR_U32(ctx, 31, 0x2022A0u);
    ctx->pc = 0x201B70u;
    if (runtime->hasFunction(0x201B70u)) {
        auto targetFn = runtime->lookupFunction(0x201B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2022A0u; }
        if (ctx->pc != 0x2022A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_201b70_0x201be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2022A0u; }
        if (ctx->pc != 0x2022A0u) { return; }
    }
    ctx->pc = 0x2022A0u;
    // 0x2022a0: 0xc04f860  jal         func_13E180
    ctx->pc = 0x2022A0u;
    SET_GPR_U32(ctx, 31, 0x2022A8u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2022A8u; }
        if (ctx->pc != 0x2022A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2022A8u; }
        if (ctx->pc != 0x2022A8u) { return; }
    }
    ctx->pc = 0x2022A8u;
    // 0x2022a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2022a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2022ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2022ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2022B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2022ACu;
            // 0x2022b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2022B4u;
    // 0x2022b4: 0x0  nop
    ctx->pc = 0x2022b4u;
    // NOP
}
