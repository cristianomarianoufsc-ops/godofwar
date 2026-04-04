#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1349e8
// Address: 0x1349e8 - 0x134a40
void entry_1349e8_0x134a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1349e8_0x134a40");
#endif

    ctx->pc = 0x1349e8u;

    // 0x1349e8: 0x24860080  addiu       $a2, $a0, 0x80
    ctx->pc = 0x1349e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x1349ec: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x1349ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1349f0: 0x10860011  beq         $a0, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1349F0u;
    {
        const bool branch_taken_0x1349f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x1349f0) {
            ctx->pc = 0x134A38u;
            goto label_134a38;
        }
    }
    ctx->pc = 0x1349F8u;
    // 0x1349f8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1349f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1349fc: 0x0  nop
    ctx->pc = 0x1349fcu;
    // NOP
label_134a00:
    // 0x134a00: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x134a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x134a04: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x134a04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134a08: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x134A08u;
    {
        const bool branch_taken_0x134a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x134A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134A08u;
            // 0x134a0c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a08) {
            ctx->pc = 0x134A28u;
            goto label_134a28;
        }
    }
    ctx->pc = 0x134A10u;
    // 0x134a10: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x134A10u;
    {
        const bool branch_taken_0x134a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x134A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134A10u;
            // 0x134a14: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a10) {
            ctx->pc = 0x134A28u;
            goto label_134a28;
        }
    }
    ctx->pc = 0x134A18u;
    // 0x134a18: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134A18u;
    {
        const bool branch_taken_0x134a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x134A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134A18u;
            // 0x134a1c: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a18) {
            ctx->pc = 0x134A28u;
            goto label_134a28;
        }
    }
    ctx->pc = 0x134A20u;
    // 0x134a20: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134A20u;
    {
        const bool branch_taken_0x134a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x134a20) {
            ctx->pc = 0x134A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134A20u;
            // 0x134a24: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134A30u;
            goto label_134a30;
        }
    }
    ctx->pc = 0x134A28u;
label_134a28:
    // 0x134a28: 0x3e00008  jr          $ra
    ctx->pc = 0x134A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134A28u;
            // 0x134a2c: 0x8ca20048  lw          $v0, 0x48($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134A00u: goto label_134a00;
            case 0x134A28u: goto label_134a28;
            case 0x134A30u: goto label_134a30;
            case 0x134A38u: goto label_134a38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134A30u;
label_134a30:
    // 0x134a30: 0x5486fff3  bnel        $a0, $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x134A30u;
    {
        const bool branch_taken_0x134a30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x134a30) {
            ctx->pc = 0x134A34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134A30u;
            // 0x134a34: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134A00u;
            runtime->cooperativeGuestYield();
            goto label_134a00;
        }
    }
    ctx->pc = 0x134A38u;
label_134a38:
    // 0x134a38: 0x3e00008  jr          $ra
    ctx->pc = 0x134A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134A38u;
            // 0x134a3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134A00u: goto label_134a00;
            case 0x134A28u: goto label_134a28;
            case 0x134A30u: goto label_134a30;
            case 0x134A38u: goto label_134a38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134A40u;
}
