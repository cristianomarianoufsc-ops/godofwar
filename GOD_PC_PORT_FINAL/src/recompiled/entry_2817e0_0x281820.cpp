#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2817e0
// Address: 0x2817e0 - 0x281820
void entry_2817e0_0x281820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2817e0_0x281820");
#endif

    ctx->pc = 0x2817e0u;

    // 0x2817e0: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x2817e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2817e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2817e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2817e8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2817e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2817ec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2817ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2817f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2817f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2817f4: 0x24423318  addiu       $v0, $v0, 0x3318
    ctx->pc = 0x2817f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13080));
    // 0x2817f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2817f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2817fc: 0x9468002a  lhu         $t0, 0x2A($v1)
    ctx->pc = 0x2817fcu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x281800: 0x1070018  mult        $zero, $t0, $a3
    ctx->pc = 0x281800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x281804: 0x3812  mflo        $a3
    ctx->pc = 0x281804u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x281808: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x281808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28180c: 0xc0a0aba  jal         func_282AE8
    ctx->pc = 0x28180Cu;
    SET_GPR_U32(ctx, 31, 0x281814u);
    ctx->pc = 0x281810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28180Cu;
            // 0x281810: 0x3012  mflo        $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ctx->lo);
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AE8u;
    if (runtime->hasFunction(0x282AE8u)) {
        auto targetFn = runtime->lookupFunction(0x282AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281814u; }
        if (ctx->pc != 0x281814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282ae8_0x282b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281814u; }
        if (ctx->pc != 0x281814u) { return; }
    }
    ctx->pc = 0x281814u;
    // 0x281814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281818: 0x3e00008  jr          $ra
    ctx->pc = 0x281818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28181Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281818u;
            // 0x28181c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281820u;
}
