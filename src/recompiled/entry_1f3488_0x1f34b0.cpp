#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f3488
// Address: 0x1f3488 - 0x1f34b0
void entry_1f3488_0x1f34b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f3488_0x1f34b0");
#endif

    ctx->pc = 0x1f3488u;

    // 0x1f3488: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3488u;
    {
        const bool branch_taken_0x1f3488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F348Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3488u;
            // 0x1f348c: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3488) {
            ctx->pc = 0x1F34A0u;
            goto label_1f34a0;
        }
    }
    ctx->pc = 0x1F3490u;
    // 0x1f3490: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f3490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f3494: 0x8c62e2c4  lw          $v0, -0x1D3C($v1)
    ctx->pc = 0x1f3494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959812)));
    // 0x1f3498: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f3498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f349c: 0xac62e2c4  sw          $v0, -0x1D3C($v1)
    ctx->pc = 0x1f349cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959812), GPR_U32(ctx, 2));
label_1f34a0:
    // 0x1f34a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F34A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F34A0u: goto label_1f34a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F34A8u;
    // 0x1f34a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f34a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f34ac: 0x0  nop
    ctx->pc = 0x1f34acu;
    // NOP
}
