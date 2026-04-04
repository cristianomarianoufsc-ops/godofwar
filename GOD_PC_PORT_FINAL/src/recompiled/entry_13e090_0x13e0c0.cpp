#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13e090
// Address: 0x13e090 - 0x13e0c0
void entry_13e090_0x13e0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13e090_0x13e0c0");
#endif

    ctx->pc = 0x13e090u;

    // 0x13e090: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x13e090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x13e094: 0x2462b940  addiu       $v0, $v1, -0x46C0
    ctx->pc = 0x13e094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949184));
    // 0x13e098: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x13e098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13e09c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x13e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13e0a0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E0A0u;
    {
        const bool branch_taken_0x13e0a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x13E0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0A0u;
            // 0x13e0a4: 0x8c63b940  lw          $v1, -0x46C0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0a0) {
            ctx->pc = 0x13E0B8u;
            goto label_13e0b8;
        }
    }
    ctx->pc = 0x13E0A8u;
    // 0x13e0a8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x13e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13e0ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x13E0B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0B0u;
            // 0x13e0b4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E0B8u: goto label_13e0b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E0B8u;
label_13e0b8:
    // 0x13e0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x13E0B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0B8u;
            // 0x13e0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E0B8u: goto label_13e0b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E0C0u;
}
