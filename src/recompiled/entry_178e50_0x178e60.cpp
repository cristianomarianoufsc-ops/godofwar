#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_178e50
// Address: 0x178e50 - 0x178e60
void entry_178e50_0x178e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_178e50_0x178e60");
#endif

    ctx->pc = 0x178e50u;

    // 0x178e50: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x178e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x178e54: 0x3e00008  jr          $ra
    ctx->pc = 0x178E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178E54u;
            // 0x178e58: 0xac44c4c4  sw          $a0, -0x3B3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178E5Cu;
    // 0x178e5c: 0x0  nop
    ctx->pc = 0x178e5cu;
    // NOP
}
