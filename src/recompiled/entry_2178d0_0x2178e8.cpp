#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2178d0
// Address: 0x2178d0 - 0x2178e8
void entry_2178d0_0x2178e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2178d0_0x2178e8");
#endif

    ctx->pc = 0x2178d0u;

    // 0x2178d0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2178d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2178d4: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x2178d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2178d8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2178d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2178dc: 0x7ca60070  sq          $a2, 0x70($a1)
    ctx->pc = 0x2178dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 6));
    // 0x2178e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2178E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2178E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2178E0u;
            // 0x2178e4: 0xac800378  sw          $zero, 0x378($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 888), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2178E8u;
}
