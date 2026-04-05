#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0021d5e8
// Address: 0x21d5e8 - 0x21d5f8
void FUN_0021d5e8_0x21d5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021d5e8_0x21d5e8");
#endif

    ctx->pc = 0x21d5e8u;

    // 0x21d5e8: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x21d5e8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x21d5ec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x21D5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D5F0u;
            // 0x21d5f4: 0xa444bfe8  sh          $a0, -0x4018($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294950888), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D5F8u;
}
