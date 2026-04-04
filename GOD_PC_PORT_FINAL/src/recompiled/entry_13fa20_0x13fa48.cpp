#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13fa20
// Address: 0x13fa20 - 0x13fa48
void entry_13fa20_0x13fa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13fa20_0x13fa48");
#endif

    ctx->pc = 0x13fa20u;

    // 0x13fa20: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13fa24: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x13fa24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x13fa28: 0x8c62f168  lw          $v0, -0xE98($v1)
    ctx->pc = 0x13fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x13fa2c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x13fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x13fa30: 0xaca21034  sw          $v0, 0x1034($a1)
    ctx->pc = 0x13fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4148), GPR_U32(ctx, 2));
    // 0x13fa34: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x13fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x13fa38: 0x8c62f168  lw          $v0, -0xE98($v1)
    ctx->pc = 0x13fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x13fa3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x13fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13fa40: 0x3e00008  jr          $ra
    ctx->pc = 0x13FA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FA40u;
            // 0x13fa44: 0xac62f168  sw          $v0, -0xE98($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13FA48u;
}
