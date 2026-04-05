#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_29a3f8
// Address: 0x29a3f8 - 0x29a448
void entry_29a3f8_0x29a448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_29a3f8_0x29a448");
#endif

    ctx->pc = 0x29a3f8u;

    // 0x29a3f8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x29a3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x29a3fc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x29a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x29a400: 0x24a2cfc0  addiu       $v0, $a1, -0x3040
    ctx->pc = 0x29a400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954944));
    // 0x29a404: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x29a404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29a408: 0xac62d3c0  sw          $v0, -0x2C40($v1)
    ctx->pc = 0x29a408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955968), GPR_U32(ctx, 2));
    // 0x29a40c: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x29a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x29a410: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x29a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x29a414: 0x0  nop
    ctx->pc = 0x29a414u;
    // NOP
label_29a418:
    // 0x29a418: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29a418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29a41c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x29a41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29a420: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x29a420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x29a424: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x29a424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x29a428: 0x0  nop
    ctx->pc = 0x29a428u;
    // NOP
    // 0x29a42c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29A42Cu;
    {
        const bool branch_taken_0x29a42c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x29a42c) {
            ctx->pc = 0x29A418u;
            runtime->cooperativeGuestYield();
            goto label_29a418;
        }
    }
    ctx->pc = 0x29A434u;
    // 0x29a434: 0x24a3cfc0  addiu       $v1, $a1, -0x3040
    ctx->pc = 0x29a434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954944));
    // 0x29a438: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29a438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a43c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A43Cu;
            // 0x29a440: 0xac6003f0  sw          $zero, 0x3F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A418u: goto label_29a418;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A444u;
    // 0x29a444: 0x0  nop
    ctx->pc = 0x29a444u;
    // NOP
}
