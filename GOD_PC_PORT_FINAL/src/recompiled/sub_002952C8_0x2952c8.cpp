#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002952C8
// Address: 0x2952c8 - 0x295300
void sub_002952C8_0x2952c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002952C8_0x2952c8");
#endif

    ctx->pc = 0x2952c8u;

    // 0x2952c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2952c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2952cc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2952ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2952d0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2952D0u;
    {
        const bool branch_taken_0x2952d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2952D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2952D0u;
            // 0x2952d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952d0) {
            ctx->pc = 0x2952F0u;
            goto label_2952f0;
        }
    }
    ctx->pc = 0x2952D8u;
    // 0x2952d8: 0xc0a5478  jal         func_2951E0
    ctx->pc = 0x2952D8u;
    SET_GPR_U32(ctx, 31, 0x2952E0u);
    ctx->pc = 0x2952DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2952D8u;
            // 0x2952dc: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2951E0u;
    if (runtime->hasFunction(0x2951E0u)) {
        auto targetFn = runtime->lookupFunction(0x2951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2952E0u; }
        if (ctx->pc != 0x2952E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2951e0_0x295218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2952E0u; }
        if (ctx->pc != 0x2952E0u) { return; }
    }
    ctx->pc = 0x2952E0u;
    // 0x2952e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2952e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2952e4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2952e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2952e8: 0x80a5478  j           func_2951E0
    ctx->pc = 0x2952E8u;
    ctx->pc = 0x2952ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2952E8u;
            // 0x2952ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2951E0u;
    if (runtime->hasFunction(0x2951E0u)) {
        auto targetFn = runtime->lookupFunction(0x2951E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_2951e0_0x295218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2952F0u;
label_2952f0:
    // 0x2952f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2952f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2952f4: 0x80a5478  j           func_2951E0
    ctx->pc = 0x2952F4u;
    ctx->pc = 0x2952F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2952F4u;
            // 0x2952f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2951E0u;
    if (runtime->hasFunction(0x2951E0u)) {
        auto targetFn = runtime->lookupFunction(0x2951E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_2951e0_0x295218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2952FCu;
    // 0x2952fc: 0x0  nop
    ctx->pc = 0x2952fcu;
    // NOP
}
