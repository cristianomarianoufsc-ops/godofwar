#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23d8a8
// Address: 0x23d8a8 - 0x23d8d0
void entry_23d8a8_0x23d8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23d8a8_0x23d8d0");
#endif

    ctx->pc = 0x23d8a8u;

    // 0x23d8a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d8ac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23d8b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d8b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23d8b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d8b8: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x23d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x23d8bc: 0xc08e218  jal         func_238860
    ctx->pc = 0x23D8BCu;
    SET_GPR_U32(ctx, 31, 0x23D8C4u);
    ctx->pc = 0x23D8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D8BCu;
            // 0x23d8c0: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D8C4u; }
        if (ctx->pc != 0x23D8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D8C4u; }
        if (ctx->pc != 0x23D8C4u) { return; }
    }
    ctx->pc = 0x23D8C4u;
    // 0x23d8c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x23D8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D8C8u;
            // 0x23d8cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23D8D0u;
}
