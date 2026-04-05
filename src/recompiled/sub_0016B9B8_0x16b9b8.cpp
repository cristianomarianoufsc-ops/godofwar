#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B9B8
// Address: 0x16b9b8 - 0x16bd40
void sub_0016B9B8_0x16b9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B9B8_0x16b9b8");
#endif

    ctx->pc = 0x16b9b8u;

    // 0x16b9b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16b9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16b9bc: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x16b9bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x16b9c0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x16b9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x16b9c4: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x16b9c4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9c8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x16b9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x16b9cc: 0x3052007f  andi        $s2, $v0, 0x7F
    ctx->pc = 0x16b9ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x16b9d0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x16b9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x16b9d4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x16b9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x16b9d8: 0x94d10004  lhu         $s1, 0x4($a2)
    ctx->pc = 0x16b9d8u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16b9dc: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x16b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x16b9e0: 0x23902  srl         $a3, $v0, 4
    ctx->pc = 0x16b9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x16b9e4: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x16B9E4u;
    {
        const bool branch_taken_0x16b9e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9E4u;
            // 0x16b9e8: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b9e4) {
            ctx->pc = 0x16BA20u;
            goto label_16ba20;
        }
    }
    ctx->pc = 0x16B9ECu;
    // 0x16b9ec: 0x0  nop
    ctx->pc = 0x16b9ecu;
    // NOP
label_16b9f0:
    // 0x16b9f0: 0x24e1021  addu        $v0, $s2, $t6
    ctx->pc = 0x16b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x16b9f4: 0x24040630  addiu       $a0, $zero, 0x630
    ctx->pc = 0x16b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1584));
    // 0x16b9f8: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x16b9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x16b9fc: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x16b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x16ba00: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x16ba00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16ba04: 0x2463c0c0  addiu       $v1, $v1, -0x3F40
    ctx->pc = 0x16ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951104));
    // 0x16ba08: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x16ba08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x16ba0c: 0x1c7202b  sltu        $a0, $t6, $a3
    ctx->pc = 0x16ba0cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x16ba10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ba14: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x16ba14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x16ba18: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x16BA18u;
    {
        const bool branch_taken_0x16ba18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA18u;
            // 0x16ba1c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba18) {
            ctx->pc = 0x16B9F0u;
            runtime->cooperativeGuestYield();
            goto label_16b9f0;
        }
    }
    ctx->pc = 0x16BA20u;
label_16ba20:
    // 0x16ba20: 0x3c047f7f  lui         $a0, 0x7F7F
    ctx->pc = 0x16ba20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32639 << 16));
    // 0x16ba24: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x16ba24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x16ba28: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x16ba28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x16ba2c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x16ba2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x16ba30: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x16ba30u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x16ba34: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x16ba34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ba38: 0x3c047f7f  lui         $a0, 0x7F7F
    ctx->pc = 0x16ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32639 << 16));
    // 0x16ba3c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x16ba3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x16ba40: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x16ba40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x16ba44: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x16ba44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x16ba48: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x16ba48u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x16ba4c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x16ba4cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16ba50: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16ba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16ba54: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x16ba54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x16ba58: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16ba58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16ba5c: 0x4be2096c  vsub.xyzw   $vf5, $vf1, $vf2
    ctx->pc = 0x16ba5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ba60: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16ba64: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x16ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x16ba68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x16ba68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x16ba6c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x16ba6cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba70: 0x37842  srl         $t7, $v1, 1
    ctx->pc = 0x16ba70u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x16ba74: 0x122000a2  beqz        $s1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x16BA74u;
    {
        const bool branch_taken_0x16ba74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA74u;
            // 0x16ba78: 0x1e27824  and         $t7, $t7, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba74) {
            ctx->pc = 0x16BD00u;
            goto label_16bd00;
        }
    }
    ctx->pc = 0x16BA7Cu;
    // 0x16ba7c: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x16ba7cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16ba80:
    // 0x16ba80: 0xe1902  srl         $v1, $t6, 4
    ctx->pc = 0x16ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 14), 4));
    // 0x16ba84: 0x24020630  addiu       $v0, $zero, 0x630
    ctx->pc = 0x16ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1584));
    // 0x16ba88: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x16ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x16ba8c: 0x31c5000f  andi        $a1, $t6, 0xF
    ctx->pc = 0x16ba8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x16ba90: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x16ba90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x16ba94: 0x8da40020  lw          $a0, 0x20($t5)
    ctx->pc = 0x16ba94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x16ba98: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x16ba98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16ba9c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x16ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x16baa0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x16baa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x16baa4: 0xf1040  sll         $v0, $t7, 1
    ctx->pc = 0x16baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x16baa8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16baac: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x16baacu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16bab0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x16bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x16bab4: 0x2442c0f0  addiu       $v0, $v0, -0x3F10
    ctx->pc = 0x16bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951152));
    // 0x16bab8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16babc: 0x46042  srl         $t4, $a0, 1
    ctx->pc = 0x16babcu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x16bac0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x16bac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x16bac4: 0x14800024  bnez        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x16BAC4u;
    {
        const bool branch_taken_0x16bac4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BAC4u;
            // 0x16bac8: 0x655821  addu        $t3, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bac4) {
            ctx->pc = 0x16BB58u;
            goto label_16bb58;
        }
    }
    ctx->pc = 0x16BACCu;
    // 0x16bacc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x16baccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16bad0: 0x8da30024  lw          $v1, 0x24($t5)
    ctx->pc = 0x16bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 36)));
    // 0x16bad4: 0x1842018  mult        $a0, $t4, $a0
    ctx->pc = 0x16bad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16bad8: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x16bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x16badc: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x16badcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x16bae0: 0x8da9003c  lw          $t1, 0x3C($t5)
    ctx->pc = 0x16bae0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 60)));
    // 0x16bae4: 0x8da60018  lw          $a2, 0x18($t5)
    ctx->pc = 0x16bae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x16bae8: 0xc3900  sll         $a3, $t4, 4
    ctx->pc = 0x16bae8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x16baec: 0x8da80044  lw          $t0, 0x44($t5)
    ctx->pc = 0x16baecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 68)));
    // 0x16baf0: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x16baf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x16baf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16baf8: 0x1455024  and         $t2, $t2, $a1
    ctx->pc = 0x16baf8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x16bafc: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x16bafcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x16bb00: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x16bb00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x16bb04: 0x94700008  lhu         $s0, 0x8($v1)
    ctx->pc = 0x16bb04u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16bb08: 0x2405ffdf  addiu       $a1, $zero, -0x21
    ctx->pc = 0x16bb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x16bb0c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x16bb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x16bb10: 0x94780004  lhu         $t8, 0x4($v1)
    ctx->pc = 0x16bb10u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16bb14: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x16bb14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16bb18: 0x94790006  lhu         $t9, 0x6($v1)
    ctx->pc = 0x16bb18u;
    SET_GPR_U32(ctx, 25, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x16bb1c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x16bb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16bb20: 0xad660054  sw          $a2, 0x54($t3)
    ctx->pc = 0x16bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 84), GPR_U32(ctx, 6));
    // 0x16bb24: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x16bb24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16bb28: 0x7d620000  sq          $v0, 0x0($t3)
    ctx->pc = 0x16bb28u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 2));
    // 0x16bb2c: 0x8da20024  lw          $v0, 0x24($t5)
    ctx->pc = 0x16bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 36)));
    // 0x16bb30: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16bb34: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x16bb34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16bb38: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x16bb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x16bb3c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16bb40: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x16bb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x16bb44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16bb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16bb48: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x16bb48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x16bb4c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x16bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x16bb50: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x16BB50u;
    {
        const bool branch_taken_0x16bb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB50u;
            // 0x16bb54: 0x1455024  and         $t2, $t2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb50) {
            ctx->pc = 0x16BC28u;
            goto label_16bc28;
        }
    }
    ctx->pc = 0x16BB58u;
label_16bb58:
    // 0x16bb58: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x16bb58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16bb5c: 0x8da30028  lw          $v1, 0x28($t5)
    ctx->pc = 0x16bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 40)));
    // 0x16bb60: 0x1863818  mult        $a3, $t4, $a2
    ctx->pc = 0x16bb60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x16bb64: 0x8da9002c  lw          $t1, 0x2C($t5)
    ctx->pc = 0x16bb64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x16bb68: 0x8da8003c  lw          $t0, 0x3C($t5)
    ctx->pc = 0x16bb68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 60)));
    // 0x16bb6c: 0x8da50018  lw          $a1, 0x18($t5)
    ctx->pc = 0x16bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x16bb70: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x16bb70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16bb74: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x16bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x16bb78: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x16bb78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x16bb7c: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x16bb7cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x16bb80: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x16bb80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16bb84: 0x94780004  lhu         $t8, 0x4($v1)
    ctx->pc = 0x16bb84u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16bb88: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x16bb88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x16bb8c: 0x94790006  lhu         $t9, 0x6($v1)
    ctx->pc = 0x16bb8cu;
    SET_GPR_U32(ctx, 25, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x16bb90: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x16bb90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16bb94: 0x94700008  lhu         $s0, 0x8($v1)
    ctx->pc = 0x16bb94u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16bb98: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x16bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x16bb9c: 0x8c490004  lw          $t1, 0x4($v0)
    ctx->pc = 0x16bb9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16bba0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x16bba0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bba4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x16bba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16bba8: 0x71331b89  pcpyld      $v1, $t1, $s3
    ctx->pc = 0x16bba8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 19)));
    // 0x16bbac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16bbb0: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x16bbb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x16bbb4: 0x71221389  pcpyld      $v0, $t1, $v0
    ctx->pc = 0x16bbb4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x16bbb8: 0xad650054  sw          $a1, 0x54($t3)
    ctx->pc = 0x16bbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 84), GPR_U32(ctx, 5));
    // 0x16bbbc: 0x70439cc8  ppacw       $s3, $v0, $v1
    ctx->pc = 0x16bbbcu;
    SET_GPR_VEC(ctx, 19, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16bbc0: 0x48b33000  qmtc2.ni    $s3, $vf6
    ctx->pc = 0x16bbc0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 19));
    // 0x16bbc4: 0x4be6086f  vmini.xyzw  $vf1, $vf1, $vf6
    ctx->pc = 0x16bbc4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16bbc8: 0xf9660040  sqc2        $vf6, 0x40($t3)
    ctx->pc = 0x16bbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 64), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16bbcc: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x16bbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16bbd0: 0x4be6296b  vmax.xyzw   $vf5, $vf5, $vf6
    ctx->pc = 0x16bbd0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16bbd4: 0x8da40048  lw          $a0, 0x48($t5)
    ctx->pc = 0x16bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 72)));
    // 0x16bbd8: 0xc1100  sll         $v0, $t4, 4
    ctx->pc = 0x16bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x16bbdc: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x16bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x16bbe0: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x16bbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x16bbe4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16bbe8: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x16bbe8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x16bbec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x16bbecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bbf0: 0x354a0001  ori         $t2, $t2, 0x1
    ctx->pc = 0x16bbf0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)1);
    // 0x16bbf4: 0x1455024  and         $t2, $t2, $a1
    ctx->pc = 0x16bbf4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x16bbf8: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x16bbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x16bbfc: 0x7d620000  sq          $v0, 0x0($t3)
    ctx->pc = 0x16bbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 2));
    // 0x16bc00: 0x8da20028  lw          $v0, 0x28($t5)
    ctx->pc = 0x16bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 40)));
    // 0x16bc04: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x16bc04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16bc08: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x16bc08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16bc0c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x16bc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x16bc10: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16bc14: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x16bc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x16bc18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16bc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16bc1c: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x16bc1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x16bc20: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x16bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x16bc24: 0x1445024  and         $t2, $t2, $a0
    ctx->pc = 0x16bc24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
label_16bc28:
    // 0x16bc28: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x16bc28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x16bc2c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x16bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16bc30: 0xad6a0050  sw          $t2, 0x50($t3)
    ctx->pc = 0x16bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 80), GPR_U32(ctx, 10));
    // 0x16bc34: 0x2033018  mult        $a2, $s0, $v1
    ctx->pc = 0x16bc34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x16bc38: 0x3031018  mult        $v0, $t8, $v1
    ctx->pc = 0x16bc38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16bc3c: 0x8da5002c  lw          $a1, 0x2C($t5)
    ctx->pc = 0x16bc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x16bc40: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x16bc40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16bc44: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x16bc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16bc48: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16bc4c: 0x3233018  mult        $a2, $t9, $v1
    ctx->pc = 0x16bc4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x16bc50: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x16bc50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16bc54: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x16bc54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bc58: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16bc5c: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x16bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16bc60: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x16bc60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16bc64: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x16bc64u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16bc68: 0x70ec3389  pcpyld      $a2, $a3, $t4
    ctx->pc = 0x16bc68u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 12)));
    // 0x16bc6c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16bc70: 0x72132b89  pcpyld      $a1, $s0, $s3
    ctx->pc = 0x16bc70u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 19)));
    // 0x16bc74: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x16bc74u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16bc78: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x16bc78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16bc7c: 0x71903b89  pcpyld      $a3, $t4, $s0
    ctx->pc = 0x16bc7cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 16)));
    // 0x16bc80: 0x3c133f80  lui         $s3, 0x3F80
    ctx->pc = 0x16bc80u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16256 << 16));
    // 0x16bc84: 0x72621389  pcpyld      $v0, $s3, $v0
    ctx->pc = 0x16bc84u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 2)));
    // 0x16bc88: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x16bc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16bc8c: 0x72631b89  pcpyld      $v1, $s3, $v1
    ctx->pc = 0x16bc8cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 3)));
    // 0x16bc90: 0x704544c8  ppacw       $t0, $v0, $a1
    ctx->pc = 0x16bc90u;
    SET_GPR_VEC(ctx, 8, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x16bc94: 0x70664cc8  ppacw       $t1, $v1, $a2
    ctx->pc = 0x16bc94u;
    SET_GPR_VEC(ctx, 9, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x16bc98: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x16bc98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16bc9c: 0x48a91800  qmtc2.ni    $t1, $vf3
    ctx->pc = 0x16bc9cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x16bca0: 0x4be4086f  vmini.xyzw  $vf1, $vf1, $vf4
    ctx->pc = 0x16bca0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16bca4: 0x72641389  pcpyld      $v0, $s3, $a0
    ctx->pc = 0x16bca4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 4)));
    // 0x16bca8: 0xf9640010  sqc2        $vf4, 0x10($t3)
    ctx->pc = 0x16bca8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16bcac: 0x704764c8  ppacw       $t4, $v0, $a3
    ctx->pc = 0x16bcacu;
    SET_GPR_VEC(ctx, 12, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x16bcb0: 0xf9630020  sqc2        $vf3, 0x20($t3)
    ctx->pc = 0x16bcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16bcb4: 0x48ac1000  qmtc2.ni    $t4, $vf2
    ctx->pc = 0x16bcb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x16bcb8: 0xf9620030  sqc2        $vf2, 0x30($t3)
    ctx->pc = 0x16bcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16bcbc: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x16bcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16bcc0: 0x4be4296b  vmax.xyzw   $vf5, $vf5, $vf4
    ctx->pc = 0x16bcc0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16bcc4: 0x4be3086f  vmini.xyzw  $vf1, $vf1, $vf3
    ctx->pc = 0x16bcc4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16bcc8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x16bcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16bccc: 0x4be3296b  vmax.xyzw   $vf5, $vf5, $vf3
    ctx->pc = 0x16bcccu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16bcd0: 0x4be2086f  vmini.xyzw  $vf1, $vf1, $vf2
    ctx->pc = 0x16bcd0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16bcd4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x16bcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16bcd8: 0x4be2296b  vmax.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x16bcd8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16bcdc: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x16bcdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x16bce0: 0x1d1102b  sltu        $v0, $t6, $s1
    ctx->pc = 0x16bce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x16bce4: 0x1440ff66  bnez        $v0, . + 4 + (-0x9A << 2)
    ctx->pc = 0x16BCE4u;
    {
        const bool branch_taken_0x16bce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BCE4u;
            // 0x16bce8: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bce4) {
            ctx->pc = 0x16BA80u;
            runtime->cooperativeGuestYield();
            goto label_16ba80;
        }
    }
    ctx->pc = 0x16BCECu;
    // 0x16bcec: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x16bcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16bcf0: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x16bcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16bcf4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x16bcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16bcf8: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x16bcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16bcfc: 0x0  nop
    ctx->pc = 0x16bcfcu;
    // NOP
label_16bd00:
    // 0x16bd00: 0x24030630  addiu       $v1, $zero, 0x630
    ctx->pc = 0x16bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1584));
    // 0x16bd04: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x16bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x16bd08: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x16bd08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16bd0c: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x16bd0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16bd10: 0x2442c0d0  addiu       $v0, $v0, -0x3F30
    ctx->pc = 0x16bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951120));
    // 0x16bd14: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x16bd14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16bd18: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x16bd18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16bd1c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x16bd1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16bd20: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x16bd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bd24: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x16bd24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16bd28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bd2c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x16bd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x16bd30: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x16bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16bd34: 0x3e00008  jr          $ra
    ctx->pc = 0x16BD34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD34u;
            // 0x16bd38: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B9F0u: goto label_16b9f0;
            case 0x16BA20u: goto label_16ba20;
            case 0x16BA80u: goto label_16ba80;
            case 0x16BB58u: goto label_16bb58;
            case 0x16BC28u: goto label_16bc28;
            case 0x16BD00u: goto label_16bd00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16BD3Cu;
    // 0x16bd3c: 0x0  nop
    ctx->pc = 0x16bd3cu;
    // NOP
}
