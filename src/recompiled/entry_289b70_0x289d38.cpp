#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_289b70
// Address: 0x289b70 - 0x289d38
void entry_289b70_0x289d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_289b70_0x289d38");
#endif

    ctx->pc = 0x289b70u;

    // 0x289b70: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x289B70u;
    {
        const bool branch_taken_0x289b70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x289B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289B70u;
            // 0x289b74: 0x851825  or          $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b70) {
            ctx->pc = 0x289B80u;
            goto label_289b80;
        }
    }
    ctx->pc = 0x289B78u;
label_289b78:
    // 0x289b78: 0x3e00008  jr          $ra
    ctx->pc = 0x289B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289B78u;
            // 0x289b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289B78u: goto label_289b78;
            case 0x289B80u: goto label_289b80;
            case 0x289C04u: goto label_289c04;
            case 0x289C60u: goto label_289c60;
            case 0x289CA0u: goto label_289ca0;
            case 0x289CE0u: goto label_289ce0;
            case 0x289CE4u: goto label_289ce4;
            case 0x289CECu: goto label_289cec;
            case 0x289D00u: goto label_289d00;
            case 0x289D1Cu: goto label_289d1c;
            case 0x289D28u: goto label_289d28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289B80u;
label_289b80:
    // 0x289b80: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x289b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x289b84: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x289B84u;
    {
        const bool branch_taken_0x289b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289B84u;
            // 0x289b88: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b84) {
            ctx->pc = 0x289CECu;
            goto label_289cec;
        }
    }
    ctx->pc = 0x289B8Cu;
    // 0x289b8c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x289b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x289b90: 0x2cc70010  sltiu       $a3, $a2, 0x10
    ctx->pc = 0x289b90u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x289b94: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x289b94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x289b98: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x289b98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x289b9c: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x289b9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x289ba0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x289ba0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x289ba4: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x289ba4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x289ba8: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x289ba8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x289bac: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x289bacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x289bb0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x289bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x289bb4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x289BB4u;
    {
        const bool branch_taken_0x289bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289BB4u;
            // 0x289bb8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289bb4) {
            ctx->pc = 0x289C60u;
            goto label_289c60;
        }
    }
    ctx->pc = 0x289BBCu;
    // 0x289bbc: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x289bbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x289bc0: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x289bc0u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x289bc4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x289bc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289bc8: 0x34088080  ori         $t0, $zero, 0x8080
    ctx->pc = 0x289bc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x289bcc: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x289bccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x289bd0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x289bd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x289bd4: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x289bd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x289bd8: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x289bd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x289bdc: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x289bdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x289be0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x289be0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x289be4: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x289be4u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x289be8: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x289be8u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x289bec: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x289becu;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x289bf0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x289bf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289bf4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x289bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x289bf8: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x289BF8u;
    {
        const bool branch_taken_0x289bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289BF8u;
            // 0x289bfc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289bf8) {
            ctx->pc = 0x289CECu;
            goto label_289cec;
        }
    }
    ctx->pc = 0x289C00u;
    // 0x289c00: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x289c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_289c04:
    // 0x289c04: 0x10c0ffdc  beqz        $a2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x289C04u;
    {
        const bool branch_taken_0x289c04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x289c04) {
            ctx->pc = 0x289B78u;
            runtime->cooperativeGuestYield();
            goto label_289b78;
        }
    }
    ctx->pc = 0x289C0Cu;
    // 0x289c0c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x289c0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289c10: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x289c10u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x289c14: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x289c14u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x289c18: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x289c18u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x289c1c: 0x70491c89  pand        $v1, $v0, $t1
    ctx->pc = 0x289c1cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x289c20: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x289c20u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x289c24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x289c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x289c28: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x289C28u;
    {
        const bool branch_taken_0x289c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289C28u;
            // 0x289c2c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c28) {
            ctx->pc = 0x289B78u;
            runtime->cooperativeGuestYield();
            goto label_289b78;
        }
    }
    ctx->pc = 0x289C30u;
    // 0x289c30: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x289c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x289c34: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x289c34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289c38: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x289C38u;
    {
        const bool branch_taken_0x289c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289C38u;
            // 0x289c3c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c38) {
            ctx->pc = 0x289CE0u;
            goto label_289ce0;
        }
    }
    ctx->pc = 0x289C40u;
    // 0x289c40: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x289c40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x289c44: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x289c44u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x289c48: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x289c48u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x289c4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x289c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x289c50: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x289C50u;
    {
        const bool branch_taken_0x289c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289c50) {
            ctx->pc = 0x289C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289C50u;
            // 0x289c54: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289C04u;
            runtime->cooperativeGuestYield();
            goto label_289c04;
        }
    }
    ctx->pc = 0x289C58u;
    // 0x289c58: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x289C58u;
    {
        const bool branch_taken_0x289c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289C58u;
            // 0x289c5c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c58) {
            ctx->pc = 0x289CE4u;
            goto label_289ce4;
        }
    }
    ctx->pc = 0x289C60u;
label_289c60:
    // 0x289c60: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x289c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x289c64: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x289C64u;
    {
        const bool branch_taken_0x289c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289C64u;
            // 0x289c68: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c64) {
            ctx->pc = 0x289CE0u;
            goto label_289ce0;
        }
    }
    ctx->pc = 0x289C6Cu;
    // 0x289c6c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x289c6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x289c70: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x289c70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289c74: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x289C74u;
    {
        const bool branch_taken_0x289c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x289C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289C74u;
            // 0x289c78: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c74) {
            ctx->pc = 0x289CECu;
            goto label_289cec;
        }
    }
    ctx->pc = 0x289C7Cu;
    // 0x289c7c: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x289c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x289c80: 0x340a8080  ori         $t2, $zero, 0x8080
    ctx->pc = 0x289c80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x289c84: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x289c84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x289c88: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x289c88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x289c8c: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x289c8cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x289c90: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x289c90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x289c94: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x289c94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x289c98: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x289c98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x289c9c: 0x0  nop
    ctx->pc = 0x289c9cu;
    // NOP
label_289ca0:
    // 0x289ca0: 0x10c0ffb5  beqz        $a2, . + 4 + (-0x4B << 2)
    ctx->pc = 0x289CA0u;
    {
        const bool branch_taken_0x289ca0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x289ca0) {
            ctx->pc = 0x289B78u;
            runtime->cooperativeGuestYield();
            goto label_289b78;
        }
    }
    ctx->pc = 0x289CA8u;
    // 0x289ca8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x289ca8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289cac: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x289cacu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x289cb0: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x289cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x289cb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x289cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x289cb8: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x289cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x289cbc: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x289CBCu;
    {
        const bool branch_taken_0x289cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289CBCu;
            // 0x289cc0: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289cbc) {
            ctx->pc = 0x289B78u;
            runtime->cooperativeGuestYield();
            goto label_289b78;
        }
    }
    ctx->pc = 0x289CC4u;
    // 0x289cc4: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x289cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x289cc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x289CC8u;
    {
        const bool branch_taken_0x289cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289CC8u;
            // 0x289ccc: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289cc8) {
            ctx->pc = 0x289CE0u;
            goto label_289ce0;
        }
    }
    ctx->pc = 0x289CD0u;
    // 0x289cd0: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x289cd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289cd4: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x289cd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x289cd8: 0x5062fff1  beql        $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x289CD8u;
    {
        const bool branch_taken_0x289cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x289cd8) {
            ctx->pc = 0x289CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289CD8u;
            // 0x289cdc: 0x24c6fff8  addiu       $a2, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289CA0u;
            runtime->cooperativeGuestYield();
            goto label_289ca0;
        }
    }
    ctx->pc = 0x289CE0u;
label_289ce0:
    // 0x289ce0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x289ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_289ce4:
    // 0x289ce4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x289ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ce8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x289ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_289cec:
    // 0x289cec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x289CECu;
    {
        const bool branch_taken_0x289cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289CECu;
            // 0x289cf0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289cec) {
            ctx->pc = 0x289D28u;
            goto label_289d28;
        }
    }
    ctx->pc = 0x289CF4u;
    // 0x289cf4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x289CF4u;
    {
        const bool branch_taken_0x289cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289CF4u;
            // 0x289cf8: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289cf4) {
            ctx->pc = 0x289D1Cu;
            goto label_289d1c;
        }
    }
    ctx->pc = 0x289CFCu;
    // 0x289cfc: 0x0  nop
    ctx->pc = 0x289cfcu;
    // NOP
label_289d00:
    // 0x289d00: 0x10c0ff9d  beqz        $a2, . + 4 + (-0x63 << 2)
    ctx->pc = 0x289D00u;
    {
        const bool branch_taken_0x289d00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x289d00) {
            ctx->pc = 0x289B78u;
            runtime->cooperativeGuestYield();
            goto label_289b78;
        }
    }
    ctx->pc = 0x289D08u;
    // 0x289d08: 0x10e0ff9b  beqz        $a3, . + 4 + (-0x65 << 2)
    ctx->pc = 0x289D08u;
    {
        const bool branch_taken_0x289d08 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x289D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289D08u;
            // 0x289d0c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d08) {
            ctx->pc = 0x289B78u;
            runtime->cooperativeGuestYield();
            goto label_289b78;
        }
    }
    ctx->pc = 0x289D10u;
    // 0x289d10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x289d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x289d14: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x289d14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x289d18: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x289d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_289d1c:
    // 0x289d1c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x289d1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289d20: 0x1062fff7  beq         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x289D20u;
    {
        const bool branch_taken_0x289d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x289D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289D20u;
            // 0x289d24: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d20) {
            ctx->pc = 0x289D00u;
            runtime->cooperativeGuestYield();
            goto label_289d00;
        }
    }
    ctx->pc = 0x289D28u;
label_289d28:
    // 0x289d28: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x289d28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289d2c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x289d2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x289d30: 0x3e00008  jr          $ra
    ctx->pc = 0x289D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289D30u;
            // 0x289d34: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289B78u: goto label_289b78;
            case 0x289B80u: goto label_289b80;
            case 0x289C04u: goto label_289c04;
            case 0x289C60u: goto label_289c60;
            case 0x289CA0u: goto label_289ca0;
            case 0x289CE0u: goto label_289ce0;
            case 0x289CE4u: goto label_289ce4;
            case 0x289CECu: goto label_289cec;
            case 0x289D00u: goto label_289d00;
            case 0x289D1Cu: goto label_289d1c;
            case 0x289D28u: goto label_289d28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289D38u;
}
