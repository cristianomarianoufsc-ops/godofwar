#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018CA98
// Address: 0x18ca98 - 0x18cac0
void sub_0018CA98_0x18ca98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CA98_0x18ca98");
#endif

    ctx->pc = 0x18ca98u;

    // 0x18ca98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ca98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ca9c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x18ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x18caa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18caa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18caa4: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x18CAA4u;
    SET_GPR_U32(ctx, 31, 0x18CAACu);
    ctx->pc = 0x18CAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CAA4u;
            // 0x18caa8: 0x24843120  addiu       $a0, $a0, 0x3120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAACu; }
        if (ctx->pc != 0x18CAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAACu; }
        if (ctx->pc != 0x18CAACu) { return; }
    }
    ctx->pc = 0x18CAACu;
    // 0x18caac: 0xc0632b0  jal         func_18CAC0
    ctx->pc = 0x18CAACu;
    SET_GPR_U32(ctx, 31, 0x18CAB4u);
    ctx->pc = 0x18CAC0u;
    if (runtime->hasFunction(0x18CAC0u)) {
        auto targetFn = runtime->lookupFunction(0x18CAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAB4u; }
        if (ctx->pc != 0x18CAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018CAC0_0x18cac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAB4u; }
        if (ctx->pc != 0x18CAB4u) { return; }
    }
    ctx->pc = 0x18CAB4u;
    // 0x18cab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18cab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cab8: 0x3e00008  jr          $ra
    ctx->pc = 0x18CAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CAB8u;
            // 0x18cabc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CAC0u;
}
