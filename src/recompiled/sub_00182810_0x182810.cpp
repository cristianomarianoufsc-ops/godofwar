#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182810
// Address: 0x182810 - 0x182830
void sub_00182810_0x182810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182810_0x182810");
#endif

    ctx->pc = 0x182810u;

    // 0x182810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182814: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x182814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x182818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18281c: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x18281Cu;
    SET_GPR_U32(ctx, 31, 0x182824u);
    ctx->pc = 0x182820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18281Cu;
            // 0x182820: 0x24842d48  addiu       $a0, $a0, 0x2D48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182824u; }
        if (ctx->pc != 0x182824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182824u; }
        if (ctx->pc != 0x182824u) { return; }
    }
    ctx->pc = 0x182824u;
    // 0x182824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182828: 0x3e00008  jr          $ra
    ctx->pc = 0x182828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18282Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182828u;
            // 0x18282c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182830u;
}
