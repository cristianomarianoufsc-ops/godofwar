#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_134980
// Address: 0x134980 - 0x1349e8
void entry_134980_0x1349e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_134980_0x1349e8");
#endif

    ctx->pc = 0x134980u;

    // 0x134980: 0x24880080  addiu       $t0, $a0, 0x80
    ctx->pc = 0x134980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x134984: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x134984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x134988: 0x10880014  beq         $a0, $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x134988u;
    {
        const bool branch_taken_0x134988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x134988) {
            ctx->pc = 0x1349DCu;
            goto label_1349dc;
        }
    }
    ctx->pc = 0x134990u;
    // 0x134990: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x134990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x134994: 0x0  nop
    ctx->pc = 0x134994u;
    // NOP
label_134998:
    // 0x134998: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x134998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x13499c: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x13499cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1349a0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1349A0u;
    {
        const bool branch_taken_0x1349a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1349A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1349A0u;
            // 0x1349a4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349a0) {
            ctx->pc = 0x1349C0u;
            goto label_1349c0;
        }
    }
    ctx->pc = 0x1349A8u;
    // 0x1349a8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1349A8u;
    {
        const bool branch_taken_0x1349a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1349ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1349A8u;
            // 0x1349ac: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349a8) {
            ctx->pc = 0x1349C0u;
            goto label_1349c0;
        }
    }
    ctx->pc = 0x1349B0u;
    // 0x1349b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1349B0u;
    {
        const bool branch_taken_0x1349b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1349B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1349B0u;
            // 0x1349b4: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349b0) {
            ctx->pc = 0x1349C0u;
            goto label_1349c0;
        }
    }
    ctx->pc = 0x1349B8u;
    // 0x1349b8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1349B8u;
    {
        const bool branch_taken_0x1349b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1349b8) {
            ctx->pc = 0x1349BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1349B8u;
            // 0x1349bc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1349D4u;
            goto label_1349d4;
        }
    }
    ctx->pc = 0x1349C0u;
label_1349c0:
    // 0x1349c0: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x1349c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x1349c4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1349c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1349c8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1349c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1349cc: 0xace20048  sw          $v0, 0x48($a3)
    ctx->pc = 0x1349ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 2));
    // 0x1349d0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1349d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1349d4:
    // 0x1349d4: 0x5488fff0  bnel        $a0, $t0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1349D4u;
    {
        const bool branch_taken_0x1349d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        if (branch_taken_0x1349d4) {
            ctx->pc = 0x1349D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1349D4u;
            // 0x1349d8: 0x8c870008  lw          $a3, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134998u;
            runtime->cooperativeGuestYield();
            goto label_134998;
        }
    }
    ctx->pc = 0x1349DCu;
label_1349dc:
    // 0x1349dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1349DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134998u: goto label_134998;
            case 0x1349C0u: goto label_1349c0;
            case 0x1349D4u: goto label_1349d4;
            case 0x1349DCu: goto label_1349dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1349E4u;
    // 0x1349e4: 0x0  nop
    ctx->pc = 0x1349e4u;
    // NOP
}
