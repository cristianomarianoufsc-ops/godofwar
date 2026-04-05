#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2391e8
// Address: 0x2391e8 - 0x239200
void entry_2391e8_0x239200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2391e8_0x239200");
#endif

    ctx->pc = 0x2391e8u;

    // 0x2391e8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2391e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2391ec: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2391ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2391f0: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x2391f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2391f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2391F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2391F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2391F4u;
            // 0x2391f8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2391FCu;
    // 0x2391fc: 0x0  nop
    ctx->pc = 0x2391fcu;
    // NOP
}
