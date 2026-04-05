#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2000a8
// Address: 0x2000a8 - 0x2000d0
void entry_2000a8_0x2000d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2000a8_0x2000d0");
#endif

    ctx->pc = 0x2000a8u;

    // 0x2000a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2000a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000ac: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x2000acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x2000b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2000b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2000b4: 0x8c443480  lw          $a0, 0x3480($v0)
    ctx->pc = 0x2000b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13440)));
    // 0x2000b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2000b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2000bc: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2000BCu;
    SET_GPR_U32(ctx, 31, 0x2000C4u);
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2000C4u; }
        if (ctx->pc != 0x2000C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2000C4u; }
        if (ctx->pc != 0x2000C4u) { return; }
    }
    ctx->pc = 0x2000C4u;
    // 0x2000c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2000c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2000c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2000C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2000CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2000C8u;
            // 0x2000cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2000D0u;
}
