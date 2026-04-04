#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C89F0
// Address: 0x1c89f0 - 0x1c8b90
void sub_001C89F0_0x1c89f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C89F0_0x1c89f0");
#endif

    ctx->pc = 0x1c89f0u;

    // 0x1c89f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c89f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c89f4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1c89f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1c89f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c89f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c89fc: 0x34c6fcff  ori         $a2, $a2, 0xFCFF
    ctx->pc = 0x1c89fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64767);
    // 0x1c8a00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8a04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a08: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1c8a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8a0c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x1c8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x1c8a10: 0x8e0502d8  lw          $a1, 0x2D8($s0)
    ctx->pc = 0x1c8a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c8a14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8a18: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c8a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c8a1c: 0x3484f800  ori         $a0, $a0, 0xF800
    ctx->pc = 0x1c8a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63488);
    // 0x1c8a20: 0x8e070324  lw          $a3, 0x324($s0)
    ctx->pc = 0x1c8a20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1c8a24: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1c8a24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1c8a28: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1c8a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1c8a2c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c8a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c8a30: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x1c8a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x1c8a34: 0x8ce2004c  lw          $v0, 0x4C($a3)
    ctx->pc = 0x1c8a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x1c8a38: 0xae0502d8  sw          $a1, 0x2D8($s0)
    ctx->pc = 0x1c8a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 5));
    // 0x1c8a3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8A3Cu;
    {
        const bool branch_taken_0x1c8a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A3Cu;
            // 0x1c8a40: 0xae030174  sw          $v1, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a3c) {
            ctx->pc = 0x1C8A54u;
            goto label_1c8a54;
        }
    }
    ctx->pc = 0x1C8A44u;
    // 0x1c8a44: 0xc090d56  jal         func_243558
    ctx->pc = 0x1C8A44u;
    SET_GPR_U32(ctx, 31, 0x1C8A4Cu);
    ctx->pc = 0x1C8A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A44u;
            // 0x1c8a48: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A4Cu; }
        if (ctx->pc != 0x1C8A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A4Cu; }
        if (ctx->pc != 0x1C8A4Cu) { return; }
    }
    ctx->pc = 0x1C8A4Cu;
    // 0x1c8a4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8A4Cu;
    {
        const bool branch_taken_0x1c8a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A4Cu;
            // 0x1c8a50: 0x90420012  lbu         $v0, 0x12($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a4c) {
            ctx->pc = 0x1C8A60u;
            goto label_1c8a60;
        }
    }
    ctx->pc = 0x1C8A54u;
label_1c8a54:
    // 0x1c8a54: 0xc090d54  jal         func_243550
    ctx->pc = 0x1C8A54u;
    SET_GPR_U32(ctx, 31, 0x1C8A5Cu);
    ctx->pc = 0x1C8A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A54u;
            // 0x1c8a58: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243550u;
    if (runtime->hasFunction(0x243550u)) {
        auto targetFn = runtime->lookupFunction(0x243550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A5Cu; }
        if (ctx->pc != 0x1C8A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243550_0x243558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A5Cu; }
        if (ctx->pc != 0x1C8A5Cu) { return; }
    }
    ctx->pc = 0x1C8A5Cu;
    // 0x1c8a5c: 0x94420038  lhu         $v0, 0x38($v0)
    ctx->pc = 0x1c8a5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1c8a60:
    // 0x1c8a60: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1c8a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1c8a64: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8A64u;
    {
        const bool branch_taken_0x1c8a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a64) {
            ctx->pc = 0x1C8A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A64u;
            // 0x1c8a68: 0x8e020174  lw          $v0, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8A74u;
            goto label_1c8a74;
        }
    }
    ctx->pc = 0x1C8A6Cu;
    // 0x1c8a6c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1C8A6Cu;
    {
        const bool branch_taken_0x1c8a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A6Cu;
            // 0x1c8a70: 0xae000164  sw          $zero, 0x164($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a6c) {
            ctx->pc = 0x1C8B80u;
            goto label_1c8b80;
        }
    }
    ctx->pc = 0x1C8A74u;
label_1c8a74:
    // 0x1c8a74: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1c8a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1c8a78: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8A78u;
    {
        const bool branch_taken_0x1c8a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A78u;
            // 0x1c8a7c: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a78) {
            ctx->pc = 0x1C8AA4u;
            goto label_1c8aa4;
        }
    }
    ctx->pc = 0x1C8A80u;
    // 0x1c8a80: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x1c8a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x1c8a84: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1c8a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1c8a88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8A88u;
    {
        const bool branch_taken_0x1c8a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A88u;
            // 0x1c8a8c: 0x30630040  andi        $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a88) {
            ctx->pc = 0x1C8A98u;
            goto label_1c8a98;
        }
    }
    ctx->pc = 0x1C8A90u;
    // 0x1c8a90: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1C8A90u;
    {
        const bool branch_taken_0x1c8a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A90u;
            // 0x1c8a94: 0x2404005e  addiu       $a0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a90) {
            ctx->pc = 0x1C8B78u;
            goto label_1c8b78;
        }
    }
    ctx->pc = 0x1C8A98u;
label_1c8a98:
    // 0x1c8a98: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x1c8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x1c8a9c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1C8A9Cu;
    {
        const bool branch_taken_0x1c8a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A9Cu;
            // 0x1c8aa0: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a9c) {
            ctx->pc = 0x1C8B78u;
            goto label_1c8b78;
        }
    }
    ctx->pc = 0x1C8AA4u;
label_1c8aa4:
    // 0x1c8aa4: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c8aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c8aa8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1c8aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1c8aac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c8aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c8ab0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8AB0u;
    {
        const bool branch_taken_0x1c8ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8AB0u;
            // 0x1c8ab4: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ab0) {
            ctx->pc = 0x1C8AC4u;
            goto label_1c8ac4;
        }
    }
    ctx->pc = 0x1C8AB8u;
    // 0x1c8ab8: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1c8ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1c8abc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1C8ABCu;
    {
        const bool branch_taken_0x1c8abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8ABCu;
            // 0x1c8ac0: 0xae000164  sw          $zero, 0x164($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8abc) {
            ctx->pc = 0x1C8B78u;
            goto label_1c8b78;
        }
    }
    ctx->pc = 0x1C8AC4u;
label_1c8ac4:
    // 0x1c8ac4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c8ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c8ac8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8AC8u;
    {
        const bool branch_taken_0x1c8ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8ac8) {
            ctx->pc = 0x1C8ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8AC8u;
            // 0x1c8acc: 0xda010260  lqc2        $vf1, 0x260($s0) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8ADCu;
            goto label_1c8adc;
        }
    }
    ctx->pc = 0x1C8AD0u;
    // 0x1c8ad0: 0xc60002c4  lwc1        $f0, 0x2C4($s0)
    ctx->pc = 0x1c8ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8ad4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1C8AD4u;
    {
        const bool branch_taken_0x1c8ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8AD4u;
            // 0x1c8ad8: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ad4) {
            ctx->pc = 0x1C8B74u;
            goto label_1c8b74;
        }
    }
    ctx->pc = 0x1C8ADCu;
label_1c8adc:
    // 0x1c8adc: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1c8adcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8ae0: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1c8ae0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8ae4: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1c8ae4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8ae8: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1c8ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1c8aec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c8aecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c8af0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8af4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1c8af4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c8af8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8af8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8afc: 0x46000004  c1          0x4
    ctx->pc = 0x1c8afcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c8b00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c8b00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8b04: 0x0  nop
    ctx->pc = 0x1c8b04u;
    // NOP
    // 0x1c8b08: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8B08u;
    {
        const bool branch_taken_0x1c8b08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8b08) {
            ctx->pc = 0x1C8B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B08u;
            // 0x1c8b0c: 0xda0100e0  lqc2        $vf1, 0xE0($s0) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8B18u;
            goto label_1c8b18;
        }
    }
    ctx->pc = 0x1C8B10u;
    // 0x1c8b10: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C8B10u;
    {
        const bool branch_taken_0x1c8b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B10u;
            // 0x1c8b14: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b10) {
            ctx->pc = 0x1C8B68u;
            goto label_1c8b68;
        }
    }
    ctx->pc = 0x1C8B18u;
label_1c8b18:
    // 0x1c8b18: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1c8b18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8b1c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1c8b1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8b20: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c8b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c8b24: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1c8b24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8b28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c8b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8b2c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c8b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c8b30: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1c8b30u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c8b34: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c8b38: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1c8b38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8b3c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c8b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c8b40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c8b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c8b44: 0x46010044  c1          0x10044
    ctx->pc = 0x1c8b44u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c8b48: 0xc44001d4  lwc1        $f0, 0x1D4($v0)
    ctx->pc = 0x1c8b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8b4c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1c8b4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1c8b50: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c8b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c8b54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c8b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8b58: 0x0  nop
    ctx->pc = 0x1c8b58u;
    // NOP
    // 0x1c8b5c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8B5Cu;
    {
        const bool branch_taken_0x1c8b5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8b5c) {
            ctx->pc = 0x1C8B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B5Cu;
            // 0x1c8b60: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8B68u;
            goto label_1c8b68;
        }
    }
    ctx->pc = 0x1C8B64u;
    // 0x1c8b64: 0x0  nop
    ctx->pc = 0x1c8b64u;
    // NOP
label_1c8b68:
    // 0x1c8b68: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c8b6c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c8b70: 0xc44001d4  lwc1        $f0, 0x1D4($v0)
    ctx->pc = 0x1c8b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8b74:
    // 0x1c8b74: 0xe6000164  swc1        $f0, 0x164($s0)
    ctx->pc = 0x1c8b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
label_1c8b78:
    // 0x1c8b78: 0x8e020328  lw          $v0, 0x328($s0)
    ctx->pc = 0x1c8b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1c8b7c: 0xa44400e0  sh          $a0, 0xE0($v0)
    ctx->pc = 0x1c8b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 224), (uint16_t)GPR_U32(ctx, 4));
label_1c8b80:
    // 0x1c8b80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c8b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8b84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8b88: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B88u;
            // 0x1c8b8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8A54u: goto label_1c8a54;
            case 0x1C8A60u: goto label_1c8a60;
            case 0x1C8A74u: goto label_1c8a74;
            case 0x1C8A98u: goto label_1c8a98;
            case 0x1C8AA4u: goto label_1c8aa4;
            case 0x1C8AC4u: goto label_1c8ac4;
            case 0x1C8ADCu: goto label_1c8adc;
            case 0x1C8B18u: goto label_1c8b18;
            case 0x1C8B68u: goto label_1c8b68;
            case 0x1C8B74u: goto label_1c8b74;
            case 0x1C8B78u: goto label_1c8b78;
            case 0x1C8B80u: goto label_1c8b80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8B90u;
}
