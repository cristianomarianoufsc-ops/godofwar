#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021D868
// Address: 0x21d868 - 0x21d888
void sub_0021D868_0x21d868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D868_0x21d868");
#endif

    ctx->pc = 0x21d868u;

    // 0x21d868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d86c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d870: 0xc087a74  jal         func_21E9D0
    ctx->pc = 0x21D870u;
    SET_GPR_U32(ctx, 31, 0x21D878u);
    ctx->pc = 0x21E9D0u;
    if (runtime->hasFunction(0x21E9D0u)) {
        auto targetFn = runtime->lookupFunction(0x21E9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D878u; }
        if (ctx->pc != 0x21D878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E9D0_0x21e9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D878u; }
        if (ctx->pc != 0x21D878u) { return; }
    }
    ctx->pc = 0x21D878u;
    // 0x21d878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d87c: 0x3e00008  jr          $ra
    ctx->pc = 0x21D87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D87Cu;
            // 0x21d880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D884u;
    // 0x21d884: 0x0  nop
    ctx->pc = 0x21d884u;
    // NOP
}
