#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBEE8
// Address: 0x1bbee8 - 0x1bbf10
void sub_001BBEE8_0x1bbee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBEE8_0x1bbee8");
#endif

    ctx->pc = 0x1bbee8u;

    // 0x1bbee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbeec: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1bbeecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1bbef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbef4: 0x24a55a28  addiu       $a1, $a1, 0x5A28
    ctx->pc = 0x1bbef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23080));
    // 0x1bbef8: 0xc06edfa  jal         func_1BB7E8
    ctx->pc = 0x1BBEF8u;
    SET_GPR_U32(ctx, 31, 0x1BBF00u);
    ctx->pc = 0x1BBEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBEF8u;
            // 0x1bbefc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7E8u;
    if (runtime->hasFunction(0x1BB7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF00u; }
        if (ctx->pc != 0x1BBF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB7E8_0x1bb7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF00u; }
        if (ctx->pc != 0x1BBF00u) { return; }
    }
    ctx->pc = 0x1BBF00u;
    // 0x1bbf00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbf00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbf04: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF04u;
            // 0x1bbf08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBF0Cu;
    // 0x1bbf0c: 0x0  nop
    ctx->pc = 0x1bbf0cu;
    // NOP
}
