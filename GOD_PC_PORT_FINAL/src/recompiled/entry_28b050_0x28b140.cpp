#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_28b050
// Address: 0x28b050 - 0x28b140
void entry_28b050_0x28b140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_28b050_0x28b140");
#endif

    ctx->pc = 0x28b050u;

    // 0x28b050: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x28b050u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28b054: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x28b054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x28b058: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B058u;
    {
        const bool branch_taken_0x28b058 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x28B05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B058u;
            // 0x28b05c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b058) {
            ctx->pc = 0x28B070u;
            goto label_28b070;
        }
    }
    ctx->pc = 0x28B060u;
    // 0x28b060: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x28b060u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28b064: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28b064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b068: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28B068u;
    {
        const bool branch_taken_0x28b068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B068u;
            // 0x28b06c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b068) {
            ctx->pc = 0x28B074u;
            goto label_28b074;
        }
    }
    ctx->pc = 0x28B070u;
label_28b070:
    // 0x28b070: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28b070u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b074:
    // 0x28b074: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b078: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x28b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x28b07c: 0x0  nop
    ctx->pc = 0x28b07cu;
    // NOP
label_28b080:
    // 0x28b080: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x28b080u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x28b084: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x28b084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x28b088: 0x0  nop
    ctx->pc = 0x28b088u;
    // NOP
    // 0x28b08c: 0x0  nop
    ctx->pc = 0x28b08cu;
    // NOP
    // 0x28b090: 0x4e1fffb  bgez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28B090u;
    {
        const bool branch_taken_0x28b090 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x28B094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B090u;
            // 0x28b094: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b090) {
            ctx->pc = 0x28B080u;
            runtime->cooperativeGuestYield();
            goto label_28b080;
        }
    }
    ctx->pc = 0x28B098u;
    // 0x28b098: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B098u;
    {
        const bool branch_taken_0x28b098 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B098u;
            // 0x28b09c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b098) {
            ctx->pc = 0x28B0A8u;
            goto label_28b0a8;
        }
    }
    ctx->pc = 0x28B0A0u;
label_28b0a0:
    // 0x28b0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x28B0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B0A0u;
            // 0x28b0a4: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B070u: goto label_28b070;
            case 0x28B074u: goto label_28b074;
            case 0x28B080u: goto label_28b080;
            case 0x28B0A0u: goto label_28b0a0;
            case 0x28B0A8u: goto label_28b0a8;
            case 0x28B0B0u: goto label_28b0b0;
            case 0x28B0B4u: goto label_28b0b4;
            case 0x28B0BCu: goto label_28b0bc;
            case 0x28B0E4u: goto label_28b0e4;
            case 0x28B0F4u: goto label_28b0f4;
            case 0x28B10Cu: goto label_28b10c;
            case 0x28B118u: goto label_28b118;
            case 0x28B138u: goto label_28b138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28B0A8u;
label_28b0a8:
    // 0x28b0a8: 0x484023  subu        $t0, $v0, $t0
    ctx->pc = 0x28b0a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x28b0ac: 0x0  nop
    ctx->pc = 0x28b0acu;
    // NOP
label_28b0b0:
    // 0x28b0b0: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x28b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_28b0b4:
    // 0x28b0b4: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x28b0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x28b0b8: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x28b0b8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_28b0bc:
    // 0x28b0bc: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x28b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x28b0c0: 0x10e2000c  beq         $a3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28B0C0u;
    {
        const bool branch_taken_0x28b0c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B0C0u;
            // 0x28b0c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0c0) {
            ctx->pc = 0x28B0F4u;
            goto label_28b0f4;
        }
    }
    ctx->pc = 0x28B0C8u;
    // 0x28b0c8: 0x28e2002e  slti        $v0, $a3, 0x2E
    ctx->pc = 0x28b0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x28b0cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B0CCu;
    {
        const bool branch_taken_0x28b0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B0CCu;
            // 0x28b0d0: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0cc) {
            ctx->pc = 0x28B0E4u;
            goto label_28b0e4;
        }
    }
    ctx->pc = 0x28B0D4u;
    // 0x28b0d4: 0x10e0fff2  beqz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x28B0D4u;
    {
        const bool branch_taken_0x28b0d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B0D4u;
            // 0x28b0d8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0d4) {
            ctx->pc = 0x28B0A0u;
            runtime->cooperativeGuestYield();
            goto label_28b0a0;
        }
    }
    ctx->pc = 0x28B0DCu;
    // 0x28b0dc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x28B0DCu;
    {
        const bool branch_taken_0x28b0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B0DCu;
            // 0x28b0e0: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0dc) {
            ctx->pc = 0x28B0B4u;
            runtime->cooperativeGuestYield();
            goto label_28b0b4;
        }
    }
    ctx->pc = 0x28B0E4u;
label_28b0e4:
    // 0x28b0e4: 0x10e20014  beq         $a3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28B0E4u;
    {
        const bool branch_taken_0x28b0e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B0E4u;
            // 0x28b0e8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0e4) {
            ctx->pc = 0x28B138u;
            goto label_28b138;
        }
    }
    ctx->pc = 0x28B0ECu;
    // 0x28b0ec: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x28B0ECu;
    {
        const bool branch_taken_0x28b0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B0ECu;
            // 0x28b0f0: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0ec) {
            ctx->pc = 0x28B0B4u;
            runtime->cooperativeGuestYield();
            goto label_28b0b4;
        }
    }
    ctx->pc = 0x28B0F4u;
label_28b0f4:
    // 0x28b0f4: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x28b0f4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28b0f8: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x28b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x28b0fc: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B0FCu;
    {
        const bool branch_taken_0x28b0fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B0FCu;
            // 0x28b100: 0xe6102a  slt         $v0, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0fc) {
            ctx->pc = 0x28B10Cu;
            goto label_28b10c;
        }
    }
    ctx->pc = 0x28B104u;
    // 0x28b104: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B104u;
    {
        const bool branch_taken_0x28b104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b104) {
            ctx->pc = 0x28B108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28B104u;
            // 0x28b108: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28B118u;
            goto label_28b118;
        }
    }
    ctx->pc = 0x28B10Cu;
label_28b10c:
    // 0x28b10c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x28B10Cu;
    {
        const bool branch_taken_0x28b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B10Cu;
            // 0x28b110: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b10c) {
            ctx->pc = 0x28B0B0u;
            runtime->cooperativeGuestYield();
            goto label_28b0b0;
        }
    }
    ctx->pc = 0x28B114u;
    // 0x28b114: 0x0  nop
    ctx->pc = 0x28b114u;
    // NOP
label_28b118:
    // 0x28b118: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28b118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28b11c: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x28b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x28b120: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x28b120u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x28b124: 0x0  nop
    ctx->pc = 0x28b124u;
    // NOP
    // 0x28b128: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28B128u;
    {
        const bool branch_taken_0x28b128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B128u;
            // 0x28b12c: 0xa0480000  sb          $t0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b128) {
            ctx->pc = 0x28B118u;
            runtime->cooperativeGuestYield();
            goto label_28b118;
        }
    }
    ctx->pc = 0x28B130u;
    // 0x28b130: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x28B130u;
    {
        const bool branch_taken_0x28b130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B130u;
            // 0x28b134: 0x80a70000  lb          $a3, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b130) {
            ctx->pc = 0x28B0BCu;
            runtime->cooperativeGuestYield();
            goto label_28b0bc;
        }
    }
    ctx->pc = 0x28B138u;
label_28b138:
    // 0x28b138: 0x3e00008  jr          $ra
    ctx->pc = 0x28B138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B138u;
            // 0x28b13c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B070u: goto label_28b070;
            case 0x28B074u: goto label_28b074;
            case 0x28B080u: goto label_28b080;
            case 0x28B0A0u: goto label_28b0a0;
            case 0x28B0A8u: goto label_28b0a8;
            case 0x28B0B0u: goto label_28b0b0;
            case 0x28B0B4u: goto label_28b0b4;
            case 0x28B0BCu: goto label_28b0bc;
            case 0x28B0E4u: goto label_28b0e4;
            case 0x28B0F4u: goto label_28b0f4;
            case 0x28B10Cu: goto label_28b10c;
            case 0x28B118u: goto label_28b118;
            case 0x28B138u: goto label_28b138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28B140u;
}
