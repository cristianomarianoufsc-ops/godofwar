#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0018abe0
// Address: 0x18abe0 - 0x18ac08
void FUN_0018abe0_0x18abe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018abe0_0x18abe0");
#endif

    ctx->pc = 0x18abe0u;

    // 0x18abe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18abe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18abe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18ABE4u;
    {
        const bool branch_taken_0x18abe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ABE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ABE4u;
            // 0x18abe8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abe4) {
            ctx->pc = 0x18ABF8u;
            goto label_18abf8;
        }
    }
    ctx->pc = 0x18ABECu;
    // 0x18abec: 0x0  nop
    ctx->pc = 0x18abecu;
    // NOP
label_18abf0:
    // 0x18abf0: 0xc09b4cc  jal         func_26D330
    ctx->pc = 0x18ABF0u;
    SET_GPR_U32(ctx, 31, 0x18ABF8u);
    ctx->pc = 0x26D330u;
    if (runtime->hasFunction(0x26D330u)) {
        auto targetFn = runtime->lookupFunction(0x26D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ABF8u; }
        if (ctx->pc != 0x18ABF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D330_0x26d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ABF8u; }
        if (ctx->pc != 0x18ABF8u) { return; }
    }
    ctx->pc = 0x18ABF8u;
label_18abf8:
    // 0x18abf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18abfc: 0xc09e548  jal         func_279520
    ctx->pc = 0x18ABFCu;
    SET_GPR_U32(ctx, 31, 0x18AC04u);
    ctx->pc = 0x18AC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ABFCu;
            // 0x18ac00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279520u;
    if (runtime->hasFunction(0x279520u)) {
        auto targetFn = runtime->lookupFunction(0x279520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AC04u; }
        if (ctx->pc != 0x18AC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00279520_0x279520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AC04u; }
        if (ctx->pc != 0x18AC04u) { return; }
    }
    ctx->pc = 0x18AC04u;
    // 0x18ac04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18AC04u;
    {
        const bool branch_taken_0x18ac04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ac04) {
            ctx->pc = 0x18ABF0u;
            runtime->cooperativeGuestYield();
            goto label_18abf0;
        }
    }
    ctx->pc = 0x18AC0Cu;
}
