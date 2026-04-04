#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_174740
// Address: 0x174740 - 0x174768
void entry_174740_0x174768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_174740_0x174768");
#endif

    ctx->pc = 0x174740u;

    // 0x174740: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x174740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x174744: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x174744u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174748: 0x24424f20  addiu       $v0, $v0, 0x4F20
    ctx->pc = 0x174748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20256));
    // 0x17474c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17474cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x174750: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x174750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x174754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174758: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x174758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x17475c: 0x3e00008  jr          $ra
    ctx->pc = 0x17475Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17475Cu;
            // 0x174760: 0xac62c48c  sw          $v0, -0x3B74($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174764u;
    // 0x174764: 0x0  nop
    ctx->pc = 0x174764u;
    // NOP
}
