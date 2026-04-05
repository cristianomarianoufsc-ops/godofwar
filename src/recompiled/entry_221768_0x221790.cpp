#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_221768
// Address: 0x221768 - 0x221790
void entry_221768_0x221790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_221768_0x221790");
#endif

    ctx->pc = 0x221768u;

    // 0x221768: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x221768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22176c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x22176cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x221770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x221774: 0x8c443504  lw          $a0, 0x3504($v0)
    ctx->pc = 0x221774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13572)));
    // 0x221778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22177c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x22177Cu;
    SET_GPR_U32(ctx, 31, 0x221784u);
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221784u; }
        if (ctx->pc != 0x221784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221784u; }
        if (ctx->pc != 0x221784u) { return; }
    }
    ctx->pc = 0x221784u;
    // 0x221784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221788: 0x3e00008  jr          $ra
    ctx->pc = 0x221788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22178Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221788u;
            // 0x22178c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221790u;
}
