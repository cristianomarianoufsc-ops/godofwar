#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_286f88
// Address: 0x286f88 - 0x286fb0
void entry_286f88_0x286fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_286f88_0x286fb0");
#endif

    ctx->pc = 0x286f88u;

    // 0x286f88: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x286f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x286f8c: 0x8c626990  lw          $v0, 0x6990($v1)
    ctx->pc = 0x286f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27024)));
    // 0x286f90: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x286f90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x286f94: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x286f94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x286f98: 0xac656990  sw          $a1, 0x6990($v1)
    ctx->pc = 0x286f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27024), GPR_U32(ctx, 5));
    // 0x286f9c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x286f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x286fa0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x286fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x286fa4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x286fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x286fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x286FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286FA8u;
            // 0x286fac: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x286FB0u;
}
