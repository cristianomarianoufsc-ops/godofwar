#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23b2a8
// Address: 0x23b2a8 - 0x23b2d0
void entry_23b2a8_0x23b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23b2a8_0x23b2d0");
#endif

    ctx->pc = 0x23b2a8u;

    // 0x23b2a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b2ac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23b2b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b2b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23b2b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b2b8: 0x24422e68  addiu       $v0, $v0, 0x2E68
    ctx->pc = 0x23b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11880));
    // 0x23b2bc: 0xc08eb42  jal         func_23AD08
    ctx->pc = 0x23B2BCu;
    SET_GPR_U32(ctx, 31, 0x23B2C4u);
    ctx->pc = 0x23B2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B2BCu;
            // 0x23b2c0: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AD08u;
    if (runtime->hasFunction(0x23AD08u)) {
        auto targetFn = runtime->lookupFunction(0x23AD08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B2C4u; }
        if (ctx->pc != 0x23B2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ad08_0x23ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B2C4u; }
        if (ctx->pc != 0x23B2C4u) { return; }
    }
    ctx->pc = 0x23B2C4u;
    // 0x23b2c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x23B2C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B2C8u;
            // 0x23b2cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B2D0u;
}
