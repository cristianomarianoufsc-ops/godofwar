#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a5bc0
// Address: 0x1a5bc0 - 0x1a5c10
void entry_1a5bc0_0x1a5c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a5bc0_0x1a5c10");
#endif

    ctx->pc = 0x1a5bc0u;

    // 0x1a5bc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a5bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5bc4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1a5bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1a5bc8:
    // 0x1a5bc8: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x1a5bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1a5bcc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a5bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5bd0: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1a5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1a5bd4: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5BD4u;
    {
        const bool branch_taken_0x1a5bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a5bd4) {
            ctx->pc = 0x1A5BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5BD4u;
            // 0x1a5bd8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5BFCu;
            goto label_1a5bfc;
        }
    }
    ctx->pc = 0x1A5BDCu;
    // 0x1a5bdc: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1a5bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1a5be0: 0x84a30044  lh          $v1, 0x44($a1)
    ctx->pc = 0x1a5be0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x1a5be4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a5be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5be8: 0x84420068  lh          $v0, 0x68($v0)
    ctx->pc = 0x1a5be8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1a5bec: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5BECu;
    {
        const bool branch_taken_0x1a5bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A5BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5BECu;
            // 0x1a5bf0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bec) {
            ctx->pc = 0x1A5BFCu;
            goto label_1a5bfc;
        }
    }
    ctx->pc = 0x1A5BF4u;
    // 0x1a5bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5BF4u;
            // 0x1a5bf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5BC8u: goto label_1a5bc8;
            case 0x1A5BFCu: goto label_1a5bfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5BFCu;
label_1a5bfc:
    // 0x1a5bfc: 0x28c2000c  slti        $v0, $a2, 0xC
    ctx->pc = 0x1a5bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1a5c00: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A5C00u;
    {
        const bool branch_taken_0x1a5c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C00u;
            // 0x1a5c04: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c00) {
            ctx->pc = 0x1A5BC8u;
            runtime->cooperativeGuestYield();
            goto label_1a5bc8;
        }
    }
    ctx->pc = 0x1A5C08u;
    // 0x1a5c08: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C08u;
            // 0x1a5c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5BC8u: goto label_1a5bc8;
            case 0x1A5BFCu: goto label_1a5bfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5C10u;
}
