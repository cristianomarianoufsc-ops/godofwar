#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182FB0
// Address: 0x182fb0 - 0x182ff0
void sub_00182FB0_0x182fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182FB0_0x182fb0");
#endif

    ctx->pc = 0x182fb0u;

    // 0x182fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182fb8: 0xc0a518a  jal         func_294628
    ctx->pc = 0x182FB8u;
    SET_GPR_U32(ctx, 31, 0x182FC0u);
    ctx->pc = 0x182FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182FB8u;
            // 0x182fbc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294628u;
    if (runtime->hasFunction(0x294628u)) {
        auto targetFn = runtime->lookupFunction(0x294628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FC0u; }
        if (ctx->pc != 0x182FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294628_0x294628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FC0u; }
        if (ctx->pc != 0x182FC0u) { return; }
    }
    ctx->pc = 0x182FC0u;
    // 0x182fc0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x182fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x182fc4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x182fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x182fc8: 0xc0a4e48  jal         func_293920
    ctx->pc = 0x182FC8u;
    SET_GPR_U32(ctx, 31, 0x182FD0u);
    ctx->pc = 0x182FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182FC8u;
            // 0x182fcc: 0x8c45c7c4  lw          $a1, -0x383C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952900)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293920u;
    if (runtime->hasFunction(0x293920u)) {
        auto targetFn = runtime->lookupFunction(0x293920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FD0u; }
        if (ctx->pc != 0x182FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293920_0x293930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FD0u; }
        if (ctx->pc != 0x182FD0u) { return; }
    }
    ctx->pc = 0x182FD0u;
    // 0x182fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x182FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182FD4u;
            // 0x182fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182FDCu;
    // 0x182fdc: 0x0  nop
    ctx->pc = 0x182fdcu;
    // NOP
    // 0x182fe0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x182fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x182fe4: 0x0  nop
    ctx->pc = 0x182fe4u;
    // NOP
    // 0x182fe8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x182fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x182fec: 0x0  nop
    ctx->pc = 0x182fecu;
    // NOP
}
