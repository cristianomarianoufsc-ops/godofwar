#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b4fc8
// Address: 0x1b4fc8 - 0x1b5088
void entry_1b4fc8_0x1b5088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b4fc8_0x1b5088");
#endif

    ctx->pc = 0x1b4fc8u;

    // 0x1b4fc8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b4fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b4fcc: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1b4fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1b4fd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b4fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b4fd4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B4FD4u;
    {
        const bool branch_taken_0x1b4fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4fd4) {
            ctx->pc = 0x1B4FD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FD4u;
            // 0x1b4fd8: 0x908601a0  lbu         $a2, 0x1A0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5030u;
            goto label_1b5030;
        }
    }
    ctx->pc = 0x1B4FDCu;
    // 0x1b4fdc: 0x908601a1  lbu         $a2, 0x1A1($a0)
    ctx->pc = 0x1b4fdcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 417)));
    // 0x1b4fe0: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1B4FE0u;
    {
        const bool branch_taken_0x1b4fe0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FE0u;
            // 0x1b4fe4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fe0) {
            ctx->pc = 0x1B5010u;
            goto label_1b5010;
        }
    }
    ctx->pc = 0x1B4FE8u;
    // 0x1b4fe8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b4fec: 0x0  nop
    ctx->pc = 0x1b4fecu;
    // NOP
label_1b4ff0:
    // 0x1b4ff0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b4ff4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1b4ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b4ff8: 0x10450020  beq         $v0, $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B4FF8u;
    {
        const bool branch_taken_0x1b4ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B4FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FF8u;
            // 0x1b4ffc: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ff8) {
            ctx->pc = 0x1B507Cu;
            goto label_1b507c;
        }
    }
    ctx->pc = 0x1B5000u;
    // 0x1b5000: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b5000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b5004: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1b5004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b5008: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B5008u;
    {
        const bool branch_taken_0x1b5008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B500Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5008u;
            // 0x1b500c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5008) {
            ctx->pc = 0x1B4FF0u;
            runtime->cooperativeGuestYield();
            goto label_1b4ff0;
        }
    }
    ctx->pc = 0x1B5010u;
label_1b5010:
    // 0x1b5010: 0x908201a1  lbu         $v0, 0x1A1($a0)
    ctx->pc = 0x1b5010u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 417)));
    // 0x1b5014: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b5014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b5018: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b5018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b501c: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x1b501cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x1b5020: 0x908201a1  lbu         $v0, 0x1A1($a0)
    ctx->pc = 0x1b5020u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 417)));
    // 0x1b5024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b5024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b5028: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B502Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5028u;
            // 0x1b502c: 0xa08201a1  sb          $v0, 0x1A1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 417), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4FF0u: goto label_1b4ff0;
            case 0x1B5010u: goto label_1b5010;
            case 0x1B5030u: goto label_1b5030;
            case 0x1B5040u: goto label_1b5040;
            case 0x1B5060u: goto label_1b5060;
            case 0x1B507Cu: goto label_1b507c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5030u;
label_1b5030:
    // 0x1b5030: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1B5030u;
    {
        const bool branch_taken_0x1b5030 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5030u;
            // 0x1b5034: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5030) {
            ctx->pc = 0x1B5060u;
            goto label_1b5060;
        }
    }
    ctx->pc = 0x1B5038u;
    // 0x1b5038: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b5038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b503c: 0x0  nop
    ctx->pc = 0x1b503cu;
    // NOP
label_1b5040:
    // 0x1b5040: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b5040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b5044: 0x8c4200d8  lw          $v0, 0xD8($v0)
    ctx->pc = 0x1b5044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x1b5048: 0x1045000c  beq         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B5048u;
    {
        const bool branch_taken_0x1b5048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B504Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5048u;
            // 0x1b504c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5048) {
            ctx->pc = 0x1B507Cu;
            goto label_1b507c;
        }
    }
    ctx->pc = 0x1B5050u;
    // 0x1b5050: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b5050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b5054: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1b5054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b5058: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B5058u;
    {
        const bool branch_taken_0x1b5058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B505Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5058u;
            // 0x1b505c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5058) {
            ctx->pc = 0x1B5040u;
            runtime->cooperativeGuestYield();
            goto label_1b5040;
        }
    }
    ctx->pc = 0x1B5060u;
label_1b5060:
    // 0x1b5060: 0x908201a0  lbu         $v0, 0x1A0($a0)
    ctx->pc = 0x1b5060u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x1b5064: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b5064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b5068: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b5068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b506c: 0xac4500d8  sw          $a1, 0xD8($v0)
    ctx->pc = 0x1b506cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 5));
    // 0x1b5070: 0x908201a0  lbu         $v0, 0x1A0($a0)
    ctx->pc = 0x1b5070u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x1b5074: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b5074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b5078: 0xa08201a0  sb          $v0, 0x1A0($a0)
    ctx->pc = 0x1b5078u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 416), (uint8_t)GPR_U32(ctx, 2));
label_1b507c:
    // 0x1b507c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B507Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4FF0u: goto label_1b4ff0;
            case 0x1B5010u: goto label_1b5010;
            case 0x1B5030u: goto label_1b5030;
            case 0x1B5040u: goto label_1b5040;
            case 0x1B5060u: goto label_1b5060;
            case 0x1B507Cu: goto label_1b507c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5084u;
    // 0x1b5084: 0x0  nop
    ctx->pc = 0x1b5084u;
    // NOP
}
