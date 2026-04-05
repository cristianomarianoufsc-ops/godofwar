#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_29a6c8
// Address: 0x29a6c8 - 0x29a700
void entry_29a6c8_0x29a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_29a6c8_0x29a700");
#endif

    ctx->pc = 0x29a6c8u;

    // 0x29a6c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x29a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x29a6cc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x29a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x29a6d0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x29a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x29a6d4: 0xac405b18  sw          $zero, 0x5B18($v0)
    ctx->pc = 0x29a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23320), GPR_U32(ctx, 0));
    // 0x29a6d8: 0xac605b1c  sw          $zero, 0x5B1C($v1)
    ctx->pc = 0x29a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23324), GPR_U32(ctx, 0));
    // 0x29a6dc: 0x2484d3c8  addiu       $a0, $a0, -0x2C38
    ctx->pc = 0x29a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955976));
    // 0x29a6e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29a6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a6e4: 0x80a250f  j           func_28943C
    ctx->pc = 0x29A6E4u;
    ctx->pc = 0x29A6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A6E4u;
            // 0x29a6e8: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_28943c_0x2894f4(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29A6ECu;
    // 0x29a6ec: 0x0  nop
    ctx->pc = 0x29a6ecu;
    // NOP
    // 0x29a6f0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29a6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29a6f4: 0x0  nop
    ctx->pc = 0x29a6f4u;
    // NOP
    // 0x29a6f8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x29a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x29a6fc: 0x0  nop
    ctx->pc = 0x29a6fcu;
    // NOP
}
