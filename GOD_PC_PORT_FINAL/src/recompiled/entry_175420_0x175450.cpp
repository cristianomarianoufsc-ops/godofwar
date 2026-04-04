#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_175420
// Address: 0x175420 - 0x175450
void entry_175420_0x175450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_175420_0x175450");
#endif

    ctx->pc = 0x175420u;

    // 0x175420: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x175420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x175424: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x175424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175428: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x175428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17542c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17542cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175430: 0xac670014  sw          $a3, 0x14($v1)
    ctx->pc = 0x175430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
    // 0x175434: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x175434u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x175438: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x175438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x17543c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x17543cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x175440: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x175440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x175444: 0x3e00008  jr          $ra
    ctx->pc = 0x175444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175444u;
            // 0x175448: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17544Cu;
    // 0x17544c: 0x0  nop
    ctx->pc = 0x17544cu;
    // NOP
}
