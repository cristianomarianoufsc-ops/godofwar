#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2964f0
// Address: 0x2964f0 - 0x296518
void entry_2964f0_0x296518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2964f0_0x296518");
#endif

    ctx->pc = 0x2964f0u;

    // 0x2964f0: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x2964f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x2964f4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2964f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2964f8: 0x24427a40  addiu       $v0, $v0, 0x7A40
    ctx->pc = 0x2964f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31296));
    // 0x2964fc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2964fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x296500: 0x3e00008  jr          $ra
    ctx->pc = 0x296500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296500u;
            // 0x296504: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296508u;
    // 0x296508: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x296508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x29650c: 0x0  nop
    ctx->pc = 0x29650cu;
    // NOP
    // 0x296510: 0x244200d8  addiu       $v0, $v0, 0xD8
    ctx->pc = 0x296510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x296514: 0x0  nop
    ctx->pc = 0x296514u;
    // NOP
}
