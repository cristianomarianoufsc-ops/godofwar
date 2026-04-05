#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_234298
// Address: 0x234298 - 0x2342b0
void entry_234298_0x2342b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_234298_0x2342b0");
#endif

    ctx->pc = 0x234298u;

    // 0x234298: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x234298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23429c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23429cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2342a0: 0x24632c78  addiu       $v1, $v1, 0x2C78
    ctx->pc = 0x2342a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11384));
    // 0x2342a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2342A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2342A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2342A4u;
            // 0x2342a8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2342ACu;
    // 0x2342ac: 0x0  nop
    ctx->pc = 0x2342acu;
    // NOP
}
