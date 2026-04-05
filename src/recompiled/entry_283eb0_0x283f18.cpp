#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_283eb0
// Address: 0x283eb0 - 0x283f18
void entry_283eb0_0x283f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_283eb0_0x283f18");
#endif

    ctx->pc = 0x283eb0u;

    // 0x283eb0: 0x4303f  dsra32      $a2, $a0, 0
    ctx->pc = 0x283eb0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x283eb4: 0x5183f  dsra32      $v1, $a1, 0
    ctx->pc = 0x283eb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x283eb8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x283eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x283ebc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x283ebcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x283ec0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x283ec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x283ec4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x283ec4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x283ec8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x283ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x283ecc: 0x70c53018  mult1       $a2, $a2, $a1
    ctx->pc = 0x283eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x283ed0: 0x850019  multu       $a0, $a1
    ctx->pc = 0x283ed0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x283ed4: 0x2012  mflo        $a0
    ctx->pc = 0x283ed4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x283ed8: 0x1010  mfhi        $v0
    ctx->pc = 0x283ed8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x283edc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x283edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x283ee0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x283ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x283ee4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x283ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x283ee8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x283ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x283eec: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x283eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x283ef0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x283ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x283ef4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x283ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x283ef8: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x283ef8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x283efc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283f00: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x283f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x283f04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x283f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x283f08: 0x3e00008  jr          $ra
    ctx->pc = 0x283F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283F08u;
            // 0x283f0c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283F10u;
    // 0x283f10: 0x80a1524  j           func_285490
    ctx->pc = 0x283F10u;
    ctx->pc = 0x285490u;
    if (runtime->hasFunction(0x285490u)) {
        auto targetFn = runtime->lookupFunction(0x285490u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_285490_0x2854b8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x283F18u;
}
