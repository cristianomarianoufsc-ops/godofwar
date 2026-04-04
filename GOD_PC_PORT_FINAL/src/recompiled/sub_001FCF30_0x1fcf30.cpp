#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FCF30
// Address: 0x1fcf30 - 0x1fcf60
void sub_001FCF30_0x1fcf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCF30_0x1fcf30");
#endif

    ctx->pc = 0x1fcf30u;

    // 0x1fcf30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fcf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fcf34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fcf34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fcf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fcf3c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x1fcf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1fcf40: 0x8c4300a8  lw          $v1, 0xA8($v0)
    ctx->pc = 0x1fcf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x1fcf44: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1fcf44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1fcf48: 0xc07f394  jal         func_1FCE50
    ctx->pc = 0x1FCF48u;
    SET_GPR_U32(ctx, 31, 0x1FCF50u);
    ctx->pc = 0x1FCF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCF48u;
            // 0x1fcf4c: 0xac4300a8  sw          $v1, 0xA8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCE50u;
    if (runtime->hasFunction(0x1FCE50u)) {
        auto targetFn = runtime->lookupFunction(0x1FCE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCF50u; }
        if (ctx->pc != 0x1FCF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCE50_0x1fce50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCF50u; }
        if (ctx->pc != 0x1FCF50u) { return; }
    }
    ctx->pc = 0x1FCF50u;
    // 0x1fcf50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fcf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcf54: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCF54u;
            // 0x1fcf58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FCF5Cu;
    // 0x1fcf5c: 0x0  nop
    ctx->pc = 0x1fcf5cu;
    // NOP
}
