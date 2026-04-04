#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2910f0
// Address: 0x2910f0 - 0x291108
void entry_2910f0_0x291108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2910f0_0x291108");
#endif

    ctx->pc = 0x2910f0u;

    // 0x2910f0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2910f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2910f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2910F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2910F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2910F4u;
            // 0x2910f8: 0x24426530  addiu       $v0, $v0, 0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25904));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2910FCu;
    // 0x2910fc: 0x0  nop
    ctx->pc = 0x2910fcu;
    // NOP
    // 0x291100: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x291100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x291104: 0x0  nop
    ctx->pc = 0x291104u;
    // NOP
}
