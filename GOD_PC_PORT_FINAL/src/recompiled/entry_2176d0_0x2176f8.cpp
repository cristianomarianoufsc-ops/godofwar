#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2176d0
// Address: 0x2176d0 - 0x2176f8
void entry_2176d0_0x2176f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2176d0_0x2176f8");
#endif

    ctx->pc = 0x2176d0u;

    // 0x2176d0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2176d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2176d4: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x2176d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2176d8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2176d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2176dc: 0xaca00090  sw          $zero, 0x90($a1)
    ctx->pc = 0x2176dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 0));
    // 0x2176e0: 0x8c820370  lw          $v0, 0x370($a0)
    ctx->pc = 0x2176e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x2176e4: 0xac800378  sw          $zero, 0x378($a0)
    ctx->pc = 0x2176e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 888), GPR_U32(ctx, 0));
    // 0x2176e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2176e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2176ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2176ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2176F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2176ECu;
            // 0x2176f0: 0xac820370  sw          $v0, 0x370($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2176F4u;
    // 0x2176f4: 0x0  nop
    ctx->pc = 0x2176f4u;
    // NOP
}
