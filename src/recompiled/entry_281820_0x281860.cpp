#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_281820
// Address: 0x281820 - 0x281860
void entry_281820_0x281860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_281820_0x281860");
#endif

    ctx->pc = 0x281820u;

    // 0x281820: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x281820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x281824: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x281828: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x281828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28182c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x28182cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x281830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281834: 0x24423318  addiu       $v0, $v0, 0x3318
    ctx->pc = 0x281834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13080));
    // 0x281838: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x281838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28183c: 0x9468002a  lhu         $t0, 0x2A($v1)
    ctx->pc = 0x28183cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x281840: 0x1070018  mult        $zero, $t0, $a3
    ctx->pc = 0x281840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x281844: 0x3812  mflo        $a3
    ctx->pc = 0x281844u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x281848: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x281848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28184c: 0xc0a0ac2  jal         func_282B08
    ctx->pc = 0x28184Cu;
    SET_GPR_U32(ctx, 31, 0x281854u);
    ctx->pc = 0x281850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28184Cu;
            // 0x281850: 0x3012  mflo        $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ctx->lo);
        ctx->in_delay_slot = false;
    ctx->pc = 0x282B08u;
    if (runtime->hasFunction(0x282B08u)) {
        auto targetFn = runtime->lookupFunction(0x282B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281854u; }
        if (ctx->pc != 0x281854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282B08_0x282b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281854u; }
        if (ctx->pc != 0x281854u) { return; }
    }
    ctx->pc = 0x281854u;
    // 0x281854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281858: 0x3e00008  jr          $ra
    ctx->pc = 0x281858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28185Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281858u;
            // 0x28185c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281860u;
}
