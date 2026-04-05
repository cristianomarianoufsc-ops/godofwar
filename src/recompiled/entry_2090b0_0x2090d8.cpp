#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2090b0
// Address: 0x2090b0 - 0x2090d8
void entry_2090b0_0x2090d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2090b0_0x2090d8");
#endif

    ctx->pc = 0x2090b0u;

    // 0x2090b0: 0x8082009f  lb          $v0, 0x9F($a0)
    ctx->pc = 0x2090b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 159)));
    // 0x2090b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2090b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2090b8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2090b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2090bc: 0xac6500ac  sw          $a1, 0xAC($v1)
    ctx->pc = 0x2090bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 5));
    // 0x2090c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2090c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2090c4: 0xac4600b0  sw          $a2, 0xB0($v0)
    ctx->pc = 0x2090c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 6));
    // 0x2090c8: 0x9082009f  lbu         $v0, 0x9F($a0)
    ctx->pc = 0x2090c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 159)));
    // 0x2090cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2090ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2090d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2090D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2090D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2090D0u;
            // 0x2090d4: 0xa082009f  sb          $v0, 0x9F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 159), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2090D8u;
}
