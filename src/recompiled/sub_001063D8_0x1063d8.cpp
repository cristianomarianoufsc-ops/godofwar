#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001063D8
// Address: 0x1063d8 - 0x106408
void sub_001063D8_0x1063d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001063D8_0x1063d8");
#endif

    ctx->pc = 0x1063d8u;

    // 0x1063d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1063d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1063dc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1063dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1063e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1063e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1063e4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1063e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063e8: 0x2442f990  addiu       $v0, $v0, -0x670
    ctx->pc = 0x1063e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965648));
    // 0x1063ec: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1063ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x1063f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1063f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063f4: 0xc04198a  jal         func_106628
    ctx->pc = 0x1063F4u;
    SET_GPR_U32(ctx, 31, 0x1063FCu);
    ctx->pc = 0x1063F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1063F4u;
            // 0x1063f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106628u;
    if (runtime->hasFunction(0x106628u)) {
        auto targetFn = runtime->lookupFunction(0x106628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1063FCu; }
        if (ctx->pc != 0x1063FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106628_0x106628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1063FCu; }
        if (ctx->pc != 0x1063FCu) { return; }
    }
    ctx->pc = 0x1063FCu;
    // 0x1063fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1063fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106400: 0x3e00008  jr          $ra
    ctx->pc = 0x106400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106400u;
            // 0x106404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106408u;
}
