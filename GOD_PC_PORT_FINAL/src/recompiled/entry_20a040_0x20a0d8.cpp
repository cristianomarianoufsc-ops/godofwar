#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_20a040
// Address: 0x20a040 - 0x20a0d8
void entry_20a040_0x20a0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_20a040_0x20a0d8");
#endif

    ctx->pc = 0x20a040u;

    // 0x20a040: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x20a040u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x20a044: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x20a044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a048: 0x9102e446  lbu         $v0, -0x1BBA($t0)
    ctx->pc = 0x20a048u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294960198)));
    // 0x20a04c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20a04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a050: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20A050u;
    {
        const bool branch_taken_0x20a050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A050u;
            // 0x20a054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a050) {
            ctx->pc = 0x20A0B8u;
            goto label_20a0b8;
        }
    }
    ctx->pc = 0x20A058u;
label_20a058:
    // 0x20a058: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x20A058u;
    {
        const bool branch_taken_0x20a058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A058u;
            // 0x20a05c: 0x3c04002a  lui         $a0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a058) {
            ctx->pc = 0x20A084u;
            goto label_20a084;
        }
    }
    ctx->pc = 0x20A060u;
    // 0x20a060: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x20a060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20a064: 0x2484e448  addiu       $a0, $a0, -0x1BB8
    ctx->pc = 0x20a064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960200));
    // 0x20a068: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x20a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x20a06c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20a070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20a070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a074: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20a074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20a078: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20a07c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20A07Cu;
    {
        const bool branch_taken_0x20a07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A07Cu;
            // 0x20a080: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a07c) {
            ctx->pc = 0x20A0A0u;
            goto label_20a0a0;
        }
    }
    ctx->pc = 0x20A084u;
label_20a084:
    // 0x20a084: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20a084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20a088: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x20a088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20a08c: 0x2442e448  addiu       $v0, $v0, -0x1BB8
    ctx->pc = 0x20a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960200));
    // 0x20a090: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20a090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a094: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20a094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20a098: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x20a098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x20a09c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x20a09cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20a0a0:
    // 0x20a0a0: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x20a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20a0a4: 0x9102e446  lbu         $v0, -0x1BBA($t0)
    ctx->pc = 0x20a0a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294960198)));
    // 0x20a0a8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x20a0a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20a0ac: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x20a0acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20a0b0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x20A0B0u;
    {
        const bool branch_taken_0x20a0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a0b0) {
            ctx->pc = 0x20A058u;
            runtime->cooperativeGuestYield();
            goto label_20a058;
        }
    }
    ctx->pc = 0x20A0B8u;
label_20a0b8:
    // 0x20a0b8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A0B8u;
    {
        const bool branch_taken_0x20a0b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A0B8u;
            // 0x20a0bc: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0b8) {
            ctx->pc = 0x20A0CCu;
            goto label_20a0cc;
        }
    }
    ctx->pc = 0x20A0C0u;
    // 0x20a0c0: 0x9062e446  lbu         $v0, -0x1BBA($v1)
    ctx->pc = 0x20a0c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960198)));
    // 0x20a0c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20a0c8: 0xa062e446  sb          $v0, -0x1BBA($v1)
    ctx->pc = 0x20a0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294960198), (uint8_t)GPR_U32(ctx, 2));
label_20a0cc:
    // 0x20a0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x20A0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A058u: goto label_20a058;
            case 0x20A084u: goto label_20a084;
            case 0x20A0A0u: goto label_20a0a0;
            case 0x20A0B8u: goto label_20a0b8;
            case 0x20A0CCu: goto label_20a0cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A0D4u;
    // 0x20a0d4: 0x0  nop
    ctx->pc = 0x20a0d4u;
    // NOP
}
