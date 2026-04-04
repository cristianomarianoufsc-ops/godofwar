#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_282ae8
// Address: 0x282ae8 - 0x282b08
void entry_282ae8_0x282b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_282ae8_0x282b08");
#endif

    ctx->pc = 0x282ae8u;

    // 0x282ae8: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x282ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x282aec: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x282aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x282af0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x282af0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x282af4: 0x24422748  addiu       $v0, $v0, 0x2748
    ctx->pc = 0x282af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10056));
    // 0x282af8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282afc: 0x80a0a54  j           func_282950
    ctx->pc = 0x282AFCu;
    ctx->pc = 0x282B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282AFCu;
            // 0x282b00: 0x8c480014  lw          $t0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282950u;
    if (runtime->hasFunction(0x282950u)) {
        auto targetFn = runtime->lookupFunction(0x282950u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00282950_0x282950(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x282B04u;
    // 0x282b04: 0x0  nop
    ctx->pc = 0x282b04u;
    // NOP
}
