#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201BE8
// Address: 0x201be8 - 0x201c08
void sub_00201BE8_0x201be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201BE8_0x201be8");
#endif

    ctx->pc = 0x201be8u;

    // 0x201be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201bec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201bf0: 0xc05f9de  jal         func_17E778
    ctx->pc = 0x201BF0u;
    SET_GPR_U32(ctx, 31, 0x201BF8u);
    ctx->pc = 0x201BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201BF0u;
            // 0x201bf4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E778u;
    if (runtime->hasFunction(0x17E778u)) {
        auto targetFn = runtime->lookupFunction(0x17E778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BF8u; }
        if (ctx->pc != 0x201BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e778_0x17e7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BF8u; }
        if (ctx->pc != 0x201BF8u) { return; }
    }
    ctx->pc = 0x201BF8u;
    // 0x201bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x201BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201BFCu;
            // 0x201c00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201C04u;
    // 0x201c04: 0x0  nop
    ctx->pc = 0x201c04u;
    // NOP
}
