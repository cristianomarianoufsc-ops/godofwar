#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_282208
// Address: 0x282208 - 0x282230
void entry_282208_0x282230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_282208_0x282230");
#endif

    ctx->pc = 0x282208u;

    // 0x282208: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x282208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x28220c: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x28220cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x282210: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x282210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x282214: 0x24632748  addiu       $v1, $v1, 0x2748
    ctx->pc = 0x282214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10056));
    // 0x282218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28221c: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x28221cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x282220: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x282220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282224: 0xace5001c  sw          $a1, 0x1C($a3)
    ctx->pc = 0x282224u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 5));
    // 0x282228: 0x3e00008  jr          $ra
    ctx->pc = 0x282228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28222Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282228u;
            // 0x28222c: 0xac660020  sw          $a2, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282230u;
}
