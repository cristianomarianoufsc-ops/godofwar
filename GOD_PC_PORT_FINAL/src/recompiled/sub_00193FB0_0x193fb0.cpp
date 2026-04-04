#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193FB0
// Address: 0x193fb0 - 0x193fd8
void sub_00193FB0_0x193fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193FB0_0x193fb0");
#endif

    ctx->pc = 0x193fb0u;

    // 0x193fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193fb4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x193fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x193fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193fbc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x193FBCu;
    {
        const bool branch_taken_0x193fbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x193FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193FBCu;
            // 0x193fc0: 0xac44c90c  sw          $a0, -0x36F4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953228), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193fbc) {
            ctx->pc = 0x193FCCu;
            goto label_193fcc;
        }
    }
    ctx->pc = 0x193FC4u;
    // 0x193fc4: 0xc064ff6  jal         func_193FD8
    ctx->pc = 0x193FC4u;
    SET_GPR_U32(ctx, 31, 0x193FCCu);
    ctx->pc = 0x193FD8u;
    if (runtime->hasFunction(0x193FD8u)) {
        auto targetFn = runtime->lookupFunction(0x193FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FCCu; }
        if (ctx->pc != 0x193FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193FD8_0x193fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FCCu; }
        if (ctx->pc != 0x193FCCu) { return; }
    }
    ctx->pc = 0x193FCCu;
label_193fcc:
    // 0x193fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x193FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193FD0u;
            // 0x193fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193FCCu: goto label_193fcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193FD8u;
}
