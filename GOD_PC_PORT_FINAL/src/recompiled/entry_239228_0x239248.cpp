#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_239228
// Address: 0x239228 - 0x239248
void entry_239228_0x239248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_239228_0x239248");
#endif

    ctx->pc = 0x239228u;

    // 0x239228: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x239228u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x23922c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23922cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x239230: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x239230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x239234: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x239234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x239238: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x239238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23923c: 0x3e00008  jr          $ra
    ctx->pc = 0x23923Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23923Cu;
            // 0x239240: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239244u;
    // 0x239244: 0x0  nop
    ctx->pc = 0x239244u;
    // NOP
}
