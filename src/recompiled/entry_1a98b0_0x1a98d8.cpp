#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a98b0
// Address: 0x1a98b0 - 0x1a98d8
void entry_1a98b0_0x1a98d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a98b0_0x1a98d8");
#endif

    ctx->pc = 0x1a98b0u;

    // 0x1a98b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a98b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a98b4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1a98b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1a98b8: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x1a98b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x1a98bc: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x1a98bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x1a98c0: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x1a98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
    // 0x1a98c4: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x1a98c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x1a98c8: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1a98c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1a98cc: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x1a98ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x1a98d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A98D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A98D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A98D0u;
            // 0x1a98d4: 0xac604f34  sw          $zero, 0x4F34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A98D8u;
}
