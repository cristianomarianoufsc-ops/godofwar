#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A97A0
// Address: 0x1a97a0 - 0x1a97c8
void sub_001A97A0_0x1a97a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A97A0_0x1a97a0");
#endif

    ctx->pc = 0x1a97a0u;

    // 0x1a97a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a97a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a97a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a97a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a97a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a97ac: 0xc06a576  jal         func_1A95D8
    ctx->pc = 0x1A97ACu;
    SET_GPR_U32(ctx, 31, 0x1A97B4u);
    ctx->pc = 0x1A97B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97ACu;
            // 0x1a97b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A95D8u;
    if (runtime->hasFunction(0x1A95D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A95D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97B4u; }
        if (ctx->pc != 0x1A97B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A95D8_0x1a95d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97B4u; }
        if (ctx->pc != 0x1A97B4u) { return; }
    }
    ctx->pc = 0x1A97B4u;
    // 0x1a97b4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1a97b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a97b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a97b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a97bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A97BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A97C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97BCu;
            // 0x1a97c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A97C4u;
    // 0x1a97c4: 0x0  nop
    ctx->pc = 0x1a97c4u;
    // NOP
}
