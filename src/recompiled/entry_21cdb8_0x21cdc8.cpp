#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_21cdb8
// Address: 0x21cdb8 - 0x21cdc8
void entry_21cdb8_0x21cdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_21cdb8_0x21cdc8");
#endif

    ctx->pc = 0x21cdb8u;

    // 0x21cdb8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21cdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x21CDBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CDBCu;
            // 0x21cdc0: 0xac44e590  sw          $a0, -0x1A70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960528), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CDC4u;
    // 0x21cdc4: 0x0  nop
    ctx->pc = 0x21cdc4u;
    // NOP
}
