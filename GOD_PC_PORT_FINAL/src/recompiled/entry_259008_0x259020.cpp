#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_259008
// Address: 0x259008 - 0x259020
void entry_259008_0x259020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_259008_0x259020");
#endif

    ctx->pc = 0x259008u;

    // 0x259008: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x259008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x25900c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25900cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259010: 0x2463e9f8  addiu       $v1, $v1, -0x1608
    ctx->pc = 0x259010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961656));
    // 0x259014: 0x3e00008  jr          $ra
    ctx->pc = 0x259014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259014u;
            // 0x259018: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25901Cu;
    // 0x25901c: 0x0  nop
    ctx->pc = 0x25901cu;
    // NOP
}
