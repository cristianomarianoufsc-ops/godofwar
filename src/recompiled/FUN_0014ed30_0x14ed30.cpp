#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0014ed30
// Address: 0x14ed30 - 0x14ed58
void FUN_0014ed30_0x14ed30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014ed30_0x14ed30");
#endif

    ctx->pc = 0x14ed30u;

    // 0x14ed30: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x14ed30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x14ed34: 0x8cc21908  lw          $v0, 0x1908($a2)
    ctx->pc = 0x14ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 6408)));
    // 0x14ed38: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x14ED38u;
    {
        const bool branch_taken_0x14ed38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x14ed38) {
            ctx->pc = 0x14ED3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED38u;
            // 0x14ed3c: 0xacc31908  sw          $v1, 0x1908($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14ED40u;
            goto label_14ed40;
        }
    }
    ctx->pc = 0x14ED40u;
label_14ed40:
    // 0x14ed40: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14ed44: 0x8c621904  lw          $v0, 0x1904($v1)
    ctx->pc = 0x14ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6404)));
    // 0x14ed48: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x14ED48u;
    {
        const bool branch_taken_0x14ed48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x14ed48) {
            ctx->pc = 0x14ED4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED48u;
            // 0x14ed4c: 0xac651904  sw          $a1, 0x1904($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6404), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14ED50u;
            goto label_14ed50;
        }
    }
    ctx->pc = 0x14ED50u;
label_14ed50:
    // 0x14ed50: 0x3e00008  jr          $ra
    ctx->pc = 0x14ED50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14ED40u: goto label_14ed40;
            case 0x14ED50u: goto label_14ed50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14ED58u;
}
