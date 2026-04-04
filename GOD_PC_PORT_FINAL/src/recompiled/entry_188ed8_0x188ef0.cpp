#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_188ed8
// Address: 0x188ed8 - 0x188ef0
void entry_188ed8_0x188ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_188ed8_0x188ef0");
#endif

    ctx->pc = 0x188ed8u;

    // 0x188ed8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x188ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x188edc: 0x8c42c838  lw          $v0, -0x37C8($v0)
    ctx->pc = 0x188edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953016)));
    // 0x188ee0: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x188ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x188ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x188EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188EE4u;
            // 0x188ee8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188EECu;
    // 0x188eec: 0x0  nop
    ctx->pc = 0x188eecu;
    // NOP
}
