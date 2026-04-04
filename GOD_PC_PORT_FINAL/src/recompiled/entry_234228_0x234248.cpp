#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_234228
// Address: 0x234228 - 0x234248
void entry_234228_0x234248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_234228_0x234248");
#endif

    ctx->pc = 0x234228u;

    // 0x234228: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x234228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23422c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23422cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234230: 0x24632190  addiu       $v1, $v1, 0x2190
    ctx->pc = 0x234230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8592));
    // 0x234234: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x234234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x234238: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x234238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x23423c: 0x3e00008  jr          $ra
    ctx->pc = 0x23423Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23423Cu;
            // 0x234240: 0xac840004  sw          $a0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234244u;
    // 0x234244: 0x0  nop
    ctx->pc = 0x234244u;
    // NOP
}
