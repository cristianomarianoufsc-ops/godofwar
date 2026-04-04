#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2340a8
// Address: 0x2340a8 - 0x2340c0
void entry_2340a8_0x2340c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2340a8_0x2340c0");
#endif

    ctx->pc = 0x2340a8u;

    // 0x2340a8: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2340a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2340ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2340acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2340b0: 0x246328b0  addiu       $v1, $v1, 0x28B0
    ctx->pc = 0x2340b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10416));
    // 0x2340b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2340B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2340B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2340B4u;
            // 0x2340b8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2340BCu;
    // 0x2340bc: 0x0  nop
    ctx->pc = 0x2340bcu;
    // NOP
}
