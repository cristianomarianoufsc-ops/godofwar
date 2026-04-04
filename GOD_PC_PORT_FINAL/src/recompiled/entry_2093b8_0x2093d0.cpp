#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2093b8
// Address: 0x2093b8 - 0x2093d0
void entry_2093b8_0x2093d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2093b8_0x2093d0");
#endif

    ctx->pc = 0x2093b8u;

    // 0x2093b8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2093b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2093bc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2093bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2093c0: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x2093c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2093c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2093C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2093C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2093C4u;
            // 0x2093c8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2093CCu;
    // 0x2093cc: 0x0  nop
    ctx->pc = 0x2093ccu;
    // NOP
}
