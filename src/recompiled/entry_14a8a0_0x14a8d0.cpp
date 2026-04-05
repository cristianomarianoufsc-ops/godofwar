#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14a8a0
// Address: 0x14a8a0 - 0x14a8d0
void entry_14a8a0_0x14a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14a8a0_0x14a8d0");
#endif

    ctx->pc = 0x14a8a0u;

    // 0x14a8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14a8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14a8a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a8a8: 0xc0511a0  jal         func_144680
    ctx->pc = 0x14A8A8u;
    SET_GPR_U32(ctx, 31, 0x14A8B0u);
    ctx->pc = 0x14A8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8A8u;
            // 0x14a8ac: 0x8c8400e0  lw          $a0, 0xE0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144680u;
    if (runtime->hasFunction(0x144680u)) {
        auto targetFn = runtime->lookupFunction(0x144680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8B0u; }
        if (ctx->pc != 0x14A8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144680_0x144680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8B0u; }
        if (ctx->pc != 0x14A8B0u) { return; }
    }
    ctx->pc = 0x14A8B0u;
    // 0x14a8b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x14A8B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8B4u;
            // 0x14a8b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A8BCu;
    // 0x14a8bc: 0x0  nop
    ctx->pc = 0x14a8bcu;
    // NOP
    // 0x14a8c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14a8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14a8c4: 0x0  nop
    ctx->pc = 0x14a8c4u;
    // NOP
    // 0x14a8c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14a8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14a8cc: 0x0  nop
    ctx->pc = 0x14a8ccu;
    // NOP
}
