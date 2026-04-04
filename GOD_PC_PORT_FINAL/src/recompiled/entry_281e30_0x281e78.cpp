#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_281e30
// Address: 0x281e30 - 0x281e78
void entry_281e30_0x281e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_281e30_0x281e78");
#endif

    ctx->pc = 0x281e30u;

    // 0x281e30: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x281e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x281e34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281e34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x281e38: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x281e38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x281e3c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x281e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x281e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281e44: 0x24423318  addiu       $v0, $v0, 0x3318
    ctx->pc = 0x281e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13080));
    // 0x281e48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x281e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x281e4c: 0x9466002a  lhu         $a2, 0x2A($v1)
    ctx->pc = 0x281e4cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x281e50: 0x9462002c  lhu         $v0, 0x2C($v1)
    ctx->pc = 0x281e50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x281e54: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x281e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x281e58: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x281E58u;
    {
        const bool branch_taken_0x281e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281e58) {
            ctx->pc = 0x281E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281E58u;
            // 0x281e5c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x281E60u;
            goto label_281e60;
        }
    }
    ctx->pc = 0x281E60u;
label_281e60:
    // 0x281e60: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x281e60u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x281e64: 0xc0a077a  jal         func_281DE8
    ctx->pc = 0x281E64u;
    SET_GPR_U32(ctx, 31, 0x281E6Cu);
    ctx->pc = 0x281E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281E64u;
            // 0x281e68: 0x2812  mflo        $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->lo);
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DE8u;
    if (runtime->hasFunction(0x281DE8u)) {
        auto targetFn = runtime->lookupFunction(0x281DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281E6Cu; }
        if (ctx->pc != 0x281E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281de8_0x281e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281E6Cu; }
        if (ctx->pc != 0x281E6Cu) { return; }
    }
    ctx->pc = 0x281E6Cu;
    // 0x281e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281e70: 0x3e00008  jr          $ra
    ctx->pc = 0x281E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281E70u;
            // 0x281e74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281E60u: goto label_281e60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x281E78u;
}
