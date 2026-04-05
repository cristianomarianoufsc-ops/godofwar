#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16d010
// Address: 0x16d010 - 0x16d0a8
void entry_16d010_0x16d0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16d010_0x16d0a8");
#endif

    ctx->pc = 0x16d010u;

    // 0x16d010: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x16d010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d014: 0x8ce80034  lw          $t0, 0x34($a3)
    ctx->pc = 0x16d014u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x16d018: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16D018u;
    {
        const bool branch_taken_0x16d018 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D018u;
            // 0x16d01c: 0x30a30007  andi        $v1, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d018) {
            ctx->pc = 0x16D070u;
            goto label_16d070;
        }
    }
    ctx->pc = 0x16D020u;
    // 0x16d020: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x16d020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x16d024: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x16d024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x16d028: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x16D028u;
    {
        const bool branch_taken_0x16d028 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D028u;
            // 0x16d02c: 0x24e03  sra         $t1, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d028) {
            ctx->pc = 0x16D078u;
            goto label_16d078;
        }
    }
    ctx->pc = 0x16D030u;
    // 0x16d030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d034: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x16d034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x16d038: 0x520c3  sra         $a0, $a1, 3
    ctx->pc = 0x16d038u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 3));
    // 0x16d03c: 0x0  nop
    ctx->pc = 0x16d03cu;
    // NOP
label_16d040:
    // 0x16d040: 0x8ce30034  lw          $v1, 0x34($a3)
    ctx->pc = 0x16d040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x16d044: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x16d044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16d048: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16d04c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d050: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x16d050u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d054: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x16d054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x16d058: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x16d058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x16d05c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x16d05cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x16d060: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x16d060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16d064: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x16D064u;
    {
        const bool branch_taken_0x16d064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d064) {
            ctx->pc = 0x16D068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16D064u;
            // 0x16d068: 0x8ce20038  lw          $v0, 0x38($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16D040u;
            runtime->cooperativeGuestYield();
            goto label_16d040;
        }
    }
    ctx->pc = 0x16D06Cu;
    // 0x16d06c: 0x0  nop
    ctx->pc = 0x16d06cu;
    // NOP
label_16d070:
    // 0x16d070: 0x3e00008  jr          $ra
    ctx->pc = 0x16D070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D040u: goto label_16d040;
            case 0x16D070u: goto label_16d070;
            case 0x16D078u: goto label_16d078;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D078u;
label_16d078:
    // 0x16d078: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x16d078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x16d07c: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x16d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x16d080: 0x8c42f16c  lw          $v0, -0xE94($v0)
    ctx->pc = 0x16d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963564)));
    // 0x16d084: 0x520c3  sra         $a0, $a1, 3
    ctx->pc = 0x16d084u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 3));
    // 0x16d088: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x16d088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16d08c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16d090: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x16d090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x16d094: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x16d094u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d098: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x16d098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x16d09c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x16d09cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x16d0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x16D0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D040u: goto label_16d040;
            case 0x16D070u: goto label_16d070;
            case 0x16D078u: goto label_16d078;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D0A8u;
}
