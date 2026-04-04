#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_135fc0
// Address: 0x135fc0 - 0x135fe8
void entry_135fc0_0x135fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_135fc0_0x135fe8");
#endif

    ctx->pc = 0x135fc0u;

    // 0x135fc0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x135fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x135fc4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x135fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x135fc8: 0x8ca2be08  lw          $v0, -0x41F8($a1)
    ctx->pc = 0x135fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950408)));
    // 0x135fcc: 0x2463ec58  addiu       $v1, $v1, -0x13A8
    ctx->pc = 0x135fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962264));
    // 0x135fd0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x135fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x135fd4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x135fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x135fd8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x135fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x135fdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x135fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x135fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x135FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135FE0u;
            // 0x135fe4: 0xaca2be08  sw          $v0, -0x41F8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294950408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135FE8u;
}
