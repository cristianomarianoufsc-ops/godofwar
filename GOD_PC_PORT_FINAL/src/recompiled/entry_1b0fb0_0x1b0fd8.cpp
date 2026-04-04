#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b0fb0
// Address: 0x1b0fb0 - 0x1b0fd8
void entry_1b0fb0_0x1b0fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b0fb0_0x1b0fd8");
#endif

    ctx->pc = 0x1b0fb0u;

    // 0x1b0fb0: 0x8c8300f8  lw          $v1, 0xF8($a0)
    ctx->pc = 0x1b0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x1b0fb4: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1b0fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1b0fb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0FB8u;
    {
        const bool branch_taken_0x1b0fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0FB8u;
            // 0x1b0fbc: 0x30630800  andi        $v1, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0fb8) {
            ctx->pc = 0x1B0FCCu;
            goto label_1b0fcc;
        }
    }
    ctx->pc = 0x1B0FC0u;
    // 0x1b0fc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0FC4u;
            // 0x1b0fc8: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0FCCu: goto label_1b0fcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0FCCu;
label_1b0fcc:
    // 0x1b0fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0FCCu;
            // 0x1b0fd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0FCCu: goto label_1b0fcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0FD4u;
    // 0x1b0fd4: 0x0  nop
    ctx->pc = 0x1b0fd4u;
    // NOP
}
