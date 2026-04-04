#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_21fca8
// Address: 0x21fca8 - 0x21fcc0
void entry_21fca8_0x21fcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_21fca8_0x21fcc0");
#endif

    ctx->pc = 0x21fca8u;

    // 0x21fca8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21fcac: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21fcb0: 0xac40e5a4  sw          $zero, -0x1A5C($v0)
    ctx->pc = 0x21fcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960548), GPR_U32(ctx, 0));
    // 0x21fcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x21FCB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FCB4u;
            // 0x21fcb8: 0xac60f1f0  sw          $zero, -0xE10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FCBCu;
    // 0x21fcbc: 0x0  nop
    ctx->pc = 0x21fcbcu;
    // NOP
}
