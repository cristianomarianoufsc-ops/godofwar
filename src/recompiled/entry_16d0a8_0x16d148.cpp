#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16d0a8
// Address: 0x16d0a8 - 0x16d148
void entry_16d0a8_0x16d148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16d0a8_0x16d148");
#endif

    ctx->pc = 0x16d0a8u;

    // 0x16d0a8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x16d0a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d0ac: 0x8ce80034  lw          $t0, 0x34($a3)
    ctx->pc = 0x16d0acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x16d0b0: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16D0B0u;
    {
        const bool branch_taken_0x16d0b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D0B0u;
            // 0x16d0b4: 0x30a30007  andi        $v1, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0b0) {
            ctx->pc = 0x16D108u;
            goto label_16d108;
        }
    }
    ctx->pc = 0x16D0B8u;
    // 0x16d0b8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x16d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x16d0bc: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x16d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x16d0c0: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x16D0C0u;
    {
        const bool branch_taken_0x16d0c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D0C0u;
            // 0x16d0c4: 0x24e03  sra         $t1, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0c0) {
            ctx->pc = 0x16D110u;
            goto label_16d110;
        }
    }
    ctx->pc = 0x16D0C8u;
    // 0x16d0c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d0cc: 0x0  nop
    ctx->pc = 0x16d0ccu;
    // NOP
label_16d0d0:
    // 0x16d0d0: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x16d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x16d0d4: 0x518c3  sra         $v1, $a1, 3
    ctx->pc = 0x16d0d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 3));
    // 0x16d0d8: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x16d0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x16d0dc: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x16d0dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16d0e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d0e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16d0e8: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x16d0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x16d0ec: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x16d0ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16d0f0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x16d0f0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x16d0f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x16d0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x16d0f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x16d0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16d0fc: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x16d0fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16d100: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x16D100u;
    {
        const bool branch_taken_0x16d100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D100u;
            // 0x16d104: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d100) {
            ctx->pc = 0x16D0D0u;
            runtime->cooperativeGuestYield();
            goto label_16d0d0;
        }
    }
    ctx->pc = 0x16D108u;
label_16d108:
    // 0x16d108: 0x3e00008  jr          $ra
    ctx->pc = 0x16D108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D0D0u: goto label_16d0d0;
            case 0x16D108u: goto label_16d108;
            case 0x16D110u: goto label_16d110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D110u;
label_16d110:
    // 0x16d110: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x16d110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x16d114: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x16d114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x16d118: 0x8c42f16c  lw          $v0, -0xE94($v0)
    ctx->pc = 0x16d118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963564)));
    // 0x16d11c: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x16d11cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x16d120: 0x312400ff  andi        $a0, $t1, 0xFF
    ctx->pc = 0x16d120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x16d124: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x16d124u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16d128: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x16d128u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x16d12c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16d130: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x16d130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x16d134: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x16d134u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d138: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x16d138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x16d13c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x16d13cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x16d140: 0x3e00008  jr          $ra
    ctx->pc = 0x16D140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D0D0u: goto label_16d0d0;
            case 0x16D108u: goto label_16d108;
            case 0x16D110u: goto label_16d110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D148u;
}
