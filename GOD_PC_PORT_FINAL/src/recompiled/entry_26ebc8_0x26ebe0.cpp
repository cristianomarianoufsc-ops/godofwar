#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26ebc8
// Address: 0x26ebc8 - 0x26ebe0
void entry_26ebc8_0x26ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26ebc8_0x26ebe0");
#endif

    ctx->pc = 0x26ebc8u;

    // 0x26ebc8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26ebcc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ebd0: 0x8c421430  lw          $v0, 0x1430($v0)
    ctx->pc = 0x26ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5168)));
    // 0x26ebd4: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x26ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x26ebd8: 0x3e00008  jr          $ra
    ctx->pc = 0x26EBD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EBD8u;
            // 0x26ebdc: 0xac440074  sw          $a0, 0x74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26EBE0u;
}
