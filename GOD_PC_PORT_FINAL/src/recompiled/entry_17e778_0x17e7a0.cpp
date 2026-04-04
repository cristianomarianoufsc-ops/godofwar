#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17e778
// Address: 0x17e778 - 0x17e7a0
void entry_17e778_0x17e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17e778_0x17e7a0");
#endif

    ctx->pc = 0x17e778u;

    // 0x17e778: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17e778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e77c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17e780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e784: 0x8c44c744  lw          $a0, -0x38BC($v0)
    ctx->pc = 0x17e784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952772)));
    // 0x17e788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e78c: 0xc060408  jal         func_181020
    ctx->pc = 0x17E78Cu;
    SET_GPR_U32(ctx, 31, 0x17E794u);
    ctx->pc = 0x181020u;
    if (runtime->hasFunction(0x181020u)) {
        auto targetFn = runtime->lookupFunction(0x181020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E794u; }
        if (ctx->pc != 0x17E794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181020_0x181020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E794u; }
        if (ctx->pc != 0x17E794u) { return; }
    }
    ctx->pc = 0x17E794u;
    // 0x17e794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e798: 0x3e00008  jr          $ra
    ctx->pc = 0x17E798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E798u;
            // 0x17e79c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E7A0u;
}
