#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27d018
// Address: 0x27d018 - 0x27d078
void entry_27d018_0x27d078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27d018_0x27d078");
#endif

    ctx->pc = 0x27d018u;

    // 0x27d018: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x27d018u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x27d01c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27d01cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27d020: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x27d020u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27d024: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x27d024u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x27d028: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27D028u;
    {
        const bool branch_taken_0x27d028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D028u;
            // 0x27d02c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d028) {
            ctx->pc = 0x27D054u;
            goto label_27d054;
        }
    }
    ctx->pc = 0x27D030u;
    // 0x27d030: 0x1065000c  beq         $v1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x27D030u;
    {
        const bool branch_taken_0x27d030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x27d030) {
            ctx->pc = 0x27D064u;
            goto label_27d064;
        }
    }
    ctx->pc = 0x27D038u;
    // 0x27d038: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x27d038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x27d03c: 0x0  nop
    ctx->pc = 0x27d03cu;
    // NOP
label_27d040:
    // 0x27d040: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x27d040u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27d044: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D044u;
    {
        const bool branch_taken_0x27d044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D044u;
            // 0x27d048: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d044) {
            ctx->pc = 0x27D054u;
            goto label_27d054;
        }
    }
    ctx->pc = 0x27D04Cu;
    // 0x27d04c: 0x5465fffc  bnel        $v1, $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x27D04Cu;
    {
        const bool branch_taken_0x27d04c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x27d04c) {
            ctx->pc = 0x27D050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27D04Cu;
            // 0x27d050: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27D040u;
            runtime->cooperativeGuestYield();
            goto label_27d040;
        }
    }
    ctx->pc = 0x27D054u;
label_27d054:
    // 0x27d054: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x27d054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x27d058: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x27d058u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x27d05c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D05Cu;
    {
        const bool branch_taken_0x27d05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x27d05c) {
            ctx->pc = 0x27D06Cu;
            goto label_27d06c;
        }
    }
    ctx->pc = 0x27D064u;
label_27d064:
    // 0x27d064: 0x3e00008  jr          $ra
    ctx->pc = 0x27D064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D064u;
            // 0x27d068: 0xc41023  subu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D040u: goto label_27d040;
            case 0x27D054u: goto label_27d054;
            case 0x27D064u: goto label_27d064;
            case 0x27D06Cu: goto label_27d06c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D06Cu;
label_27d06c:
    // 0x27d06c: 0x3e00008  jr          $ra
    ctx->pc = 0x27D06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D06Cu;
            // 0x27d070: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D040u: goto label_27d040;
            case 0x27D054u: goto label_27d054;
            case 0x27D064u: goto label_27d064;
            case 0x27D06Cu: goto label_27d06c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D074u;
    // 0x27d074: 0x0  nop
    ctx->pc = 0x27d074u;
    // NOP
}
