#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26ebe0
// Address: 0x26ebe0 - 0x26ec10
void entry_26ebe0_0x26ec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26ebe0_0x26ec10");
#endif

    ctx->pc = 0x26ebe0u;

    // 0x26ebe0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26ebe4: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x26ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x26ebe8: 0x8c451430  lw          $a1, 0x1430($v0)
    ctx->pc = 0x26ebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5168)));
    // 0x26ebec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ebf0: 0xfc64a5c8  sd          $a0, -0x5A38($v1)
    ctx->pc = 0x26ebf0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294944200), GPR_U64(ctx, 4));
    // 0x26ebf4: 0x3e00008  jr          $ra
    ctx->pc = 0x26EBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EBF4u;
            // 0x26ebf8: 0xaca20048  sw          $v0, 0x48($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26EBFCu;
    // 0x26ebfc: 0x0  nop
    ctx->pc = 0x26ebfcu;
    // NOP
    // 0x26ec00: 0x84620040  lh          $v0, 0x40($v1)
    ctx->pc = 0x26ec00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x26ec04: 0x0  nop
    ctx->pc = 0x26ec04u;
    // NOP
    // 0x26ec08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26ec08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26ec0c: 0x0  nop
    ctx->pc = 0x26ec0cu;
    // NOP
}
