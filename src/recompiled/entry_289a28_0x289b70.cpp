#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_289a28
// Address: 0x289a28 - 0x289b70
void entry_289a28_0x289b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_289a28_0x289b70");
#endif

    ctx->pc = 0x289a28u;

    // 0x289a28: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x289a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x289a2c: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x289A2Cu;
    {
        const bool branch_taken_0x289a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289A2Cu;
            // 0x289a30: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a2c) {
            ctx->pc = 0x289B4Cu;
            goto label_289b4c;
        }
    }
    ctx->pc = 0x289A34u;
    // 0x289a34: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x289a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x289a38: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x289a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x289a3c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x289a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x289a40: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x289a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x289a44: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x289a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x289a48: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x289a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x289a4c: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x289a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x289a50: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x289a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x289a54: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x289A54u;
    {
        const bool branch_taken_0x289a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289A54u;
            // 0x289a58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a54) {
            ctx->pc = 0x289AD4u;
            goto label_289ad4;
        }
    }
    ctx->pc = 0x289A5Cu;
    // 0x289a5c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x289a5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289a60: 0x70424389  pcpyld      $t0, $v0, $v0
    ctx->pc = 0x289a60u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x289a64: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x289a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x289a68: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x289a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x289a6c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x289a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x289a70: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x289a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x289a74: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x289a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x289a78: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x289a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x289a7c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x289a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x289a80: 0x70681248  psubb       $v0, $v1, $t0
    ctx->pc = 0x289a80u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x289a84: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x289a84u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x289a88: 0x70844b89  pcpyld      $t1, $a0, $a0
    ctx->pc = 0x289a88u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x289a8c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x289a8cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x289a90: 0x70491489  pand        $v0, $v0, $t1
    ctx->pc = 0x289a90u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x289a94: 0x70481ba9  pcpyud      $v1, $v0, $t0
    ctx->pc = 0x289a94u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x289a98: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x289a98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x289a9c: 0x54c0002b  bnel        $a2, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x289A9Cu;
    {
        const bool branch_taken_0x289a9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x289a9c) {
            ctx->pc = 0x289AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289A9Cu;
            // 0x289aa0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289B4Cu;
            goto label_289b4c;
        }
    }
    ctx->pc = 0x289AA4u;
    // 0x289aa4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x289aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_289aa8:
    // 0x289aa8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x289aa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289aac: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x289aacu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x289ab0: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x289ab0u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x289ab4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x289ab4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x289ab8: 0x70492489  pand        $a0, $v0, $t1
    ctx->pc = 0x289ab8u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x289abc: 0x70861ba9  pcpyud      $v1, $a0, $a2
    ctx->pc = 0x289abcu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x289ac0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x289ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x289ac4: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x289AC4u;
    {
        const bool branch_taken_0x289ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x289ac4) {
            ctx->pc = 0x289AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289AC4u;
            // 0x289ac8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289AA8u;
            runtime->cooperativeGuestYield();
            goto label_289aa8;
        }
    }
    ctx->pc = 0x289ACCu;
    // 0x289acc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x289ACCu;
    {
        const bool branch_taken_0x289acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289ACCu;
            // 0x289ad0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289acc) {
            ctx->pc = 0x289B4Cu;
            goto label_289b4c;
        }
    }
    ctx->pc = 0x289AD4u;
label_289ad4:
    // 0x289ad4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x289ad4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289ad8: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x289ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x289adc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x289adcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x289ae0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x289ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x289ae4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x289ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x289ae8: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x289ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x289aec: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x289aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x289af0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x289af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x289af4: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x289af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x289af8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x289af8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x289afc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x289afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x289b00: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x289b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x289b04: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x289B04u;
    {
        const bool branch_taken_0x289b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289b04) {
            ctx->pc = 0x289B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289B04u;
            // 0x289b08: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289B4Cu;
            goto label_289b4c;
        }
    }
    ctx->pc = 0x289B0Cu;
    // 0x289b0c: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x289b0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x289b10: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x289b10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x289b14: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x289b14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x289b18: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x289b18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x289b1c: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x289b1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x289b20: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x289b20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x289b24: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x289b24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x289b28: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x289b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_289b2c:
    // 0x289b2c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x289b2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289b30: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x289b30u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x289b34: 0x46102f  dsubu       $v0, $v0, $a2
    ctx->pc = 0x289b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x289b38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x289b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x289b3c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x289b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x289b40: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x289B40u;
    {
        const bool branch_taken_0x289b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289b40) {
            ctx->pc = 0x289B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289B40u;
            // 0x289b44: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289B2Cu;
            runtime->cooperativeGuestYield();
            goto label_289b2c;
        }
    }
    ctx->pc = 0x289B48u;
    // 0x289b48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x289b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_289b4c:
    // 0x289b4c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x289b4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x289b50: 0x0  nop
    ctx->pc = 0x289b50u;
    // NOP
    // 0x289b54: 0x0  nop
    ctx->pc = 0x289b54u;
    // NOP
    // 0x289b58: 0x0  nop
    ctx->pc = 0x289b58u;
    // NOP
    // 0x289b5c: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x289B5Cu;
    {
        const bool branch_taken_0x289b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289b5c) {
            ctx->pc = 0x289B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289B5Cu;
            // 0x289b60: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289B4Cu;
            runtime->cooperativeGuestYield();
            goto label_289b4c;
        }
    }
    ctx->pc = 0x289B64u;
    // 0x289b64: 0x3e00008  jr          $ra
    ctx->pc = 0x289B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289B64u;
            // 0x289b68: 0x871023  subu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289AA8u: goto label_289aa8;
            case 0x289AD4u: goto label_289ad4;
            case 0x289B2Cu: goto label_289b2c;
            case 0x289B4Cu: goto label_289b4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289B6Cu;
    // 0x289b6c: 0x0  nop
    ctx->pc = 0x289b6cu;
    // NOP
}
