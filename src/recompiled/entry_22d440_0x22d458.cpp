#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22d440
// Address: 0x22d440 - 0x22d458
void entry_22d440_0x22d458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22d440_0x22d458");
#endif

    ctx->pc = 0x22d440u;

    // 0x22d440: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22d440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22d444: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22d444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22d448: 0xac40126c  sw          $zero, 0x126C($v0)
    ctx->pc = 0x22d448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4716), GPR_U32(ctx, 0));
    // 0x22d44c: 0x3e00008  jr          $ra
    ctx->pc = 0x22D44Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D44Cu;
            // 0x22d450: 0xac601268  sw          $zero, 0x1268($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D454u;
    // 0x22d454: 0x0  nop
    ctx->pc = 0x22d454u;
    // NOP
}
