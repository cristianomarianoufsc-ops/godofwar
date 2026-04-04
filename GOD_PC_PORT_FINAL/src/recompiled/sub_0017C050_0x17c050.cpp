#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C050
// Address: 0x17c050 - 0x17c0a8
void sub_0017C050_0x17c050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C050_0x17c050");
#endif

    ctx->pc = 0x17c050u;

    // 0x17c050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c054: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17c054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17c058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c05c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17c05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c060: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x17c060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x17c064: 0x0  nop
    ctx->pc = 0x17c064u;
    // NOP
label_17c068:
    // 0x17c068: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x17c068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x17c06c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x17c06cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17c070: 0x2463d9c0  addiu       $v1, $v1, -0x2640
    ctx->pc = 0x17c070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957504));
    // 0x17c074: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17c074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17c078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c07c: 0xc09ee66  jal         func_27B998
    ctx->pc = 0x17C07Cu;
    SET_GPR_U32(ctx, 31, 0x17C084u);
    ctx->pc = 0x17C080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C07Cu;
            // 0x17c080: 0x8c440078  lw          $a0, 0x78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B998u;
    if (runtime->hasFunction(0x27B998u)) {
        auto targetFn = runtime->lookupFunction(0x27B998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C084u; }
        if (ctx->pc != 0x17C084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B998_0x27b998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C084u; }
        if (ctx->pc != 0x17C084u) { return; }
    }
    ctx->pc = 0x17C084u;
    // 0x17c084: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x17c084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17c088: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17C088u;
    {
        const bool branch_taken_0x17c088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C088u;
            // 0x17c08c: 0x240201c0  addiu       $v0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c088) {
            ctx->pc = 0x17C068u;
            runtime->cooperativeGuestYield();
            goto label_17c068;
        }
    }
    ctx->pc = 0x17C090u;
    // 0x17c090: 0xc09ee0a  jal         func_27B828
    ctx->pc = 0x17C090u;
    SET_GPR_U32(ctx, 31, 0x17C098u);
    ctx->pc = 0x27B828u;
    if (runtime->hasFunction(0x27B828u)) {
        auto targetFn = runtime->lookupFunction(0x27B828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C098u; }
        if (ctx->pc != 0x17C098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B828_0x27b828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C098u; }
        if (ctx->pc != 0x17C098u) { return; }
    }
    ctx->pc = 0x17C098u;
    // 0x17c098: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17c098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c09c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x17C0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C0A0u;
            // 0x17c0a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C068u: goto label_17c068;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C0A8u;
}
