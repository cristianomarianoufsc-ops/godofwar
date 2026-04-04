#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_209120
// Address: 0x209120 - 0x209140
void entry_209120_0x209140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_209120_0x209140");
#endif

    ctx->pc = 0x209120u;

    // 0x209120: 0x9082009d  lbu         $v0, 0x9D($a0)
    ctx->pc = 0x209120u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 157)));
    // 0x209124: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x209124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x209128: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20912c: 0xa082009d  sb          $v0, 0x9D($a0)
    ctx->pc = 0x20912cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 157), (uint8_t)GPR_U32(ctx, 2));
    // 0x209130: 0x8c62ed58  lw          $v0, -0x12A8($v1)
    ctx->pc = 0x209130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962520)));
    // 0x209134: 0x3e00008  jr          $ra
    ctx->pc = 0x209134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209134u;
            // 0x209138: 0xac8200a4  sw          $v0, 0xA4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20913Cu;
    // 0x20913c: 0x0  nop
    ctx->pc = 0x20913cu;
    // NOP
}
