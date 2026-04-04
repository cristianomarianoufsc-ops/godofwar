#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187BB8
// Address: 0x187bb8 - 0x187ce8
void sub_00187BB8_0x187bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187BB8_0x187bb8");
#endif

    ctx->pc = 0x187bb8u;

    // 0x187bb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x187bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x187bbc: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x187bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x187bc0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x187bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x187bc4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x187bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x187bc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x187bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x187bcc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x187bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187bd0: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x187bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x187bd4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x187bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x187bd8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x187bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x187bdc: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x187bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187be0: 0x70e81b89  pcpyld      $v1, $a3, $t0
    ctx->pc = 0x187be0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x187be4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x187be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x187be8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x187be8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x187bec: 0x70e21389  pcpyld      $v0, $a3, $v0
    ctx->pc = 0x187becu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x187bf0: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x187bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x187bf4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x187bf4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x187bf8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x187bf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x187bfc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x187bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x187c00: 0x4be20b3c  vmove.xyzw  $vf2, $vf1
    ctx->pc = 0x187c00u;
    ctx->vu0_vf[2] = ctx->vu0_vf[1];
    // 0x187c04: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x187c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x187c08: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x187C08u;
    {
        const bool branch_taken_0x187c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187C08u;
            // 0x187c0c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c08) {
            ctx->pc = 0x187CD0u;
            goto label_187cd0;
        }
    }
    ctx->pc = 0x187C10u;
    // 0x187c10: 0x8cd00018  lw          $s0, 0x18($a2)
    ctx->pc = 0x187c10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x187c14: 0x5200002f  beql        $s0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x187C14u;
    {
        const bool branch_taken_0x187c14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c14) {
            ctx->pc = 0x187C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187C14u;
            // 0x187c18: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187CD4u;
            goto label_187cd4;
        }
    }
    ctx->pc = 0x187C1Cu;
    // 0x187c1c: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x187c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x187c20: 0x5060002c  beql        $v1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x187C20u;
    {
        const bool branch_taken_0x187c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c20) {
            ctx->pc = 0x187C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187C20u;
            // 0x187c24: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187CD4u;
            goto label_187cd4;
        }
    }
    ctx->pc = 0x187C28u;
    // 0x187c28: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x187c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x187c2c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x187c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x187c30: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x187C30u;
    {
        const bool branch_taken_0x187c30 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x187c30) {
            ctx->pc = 0x187C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187C30u;
            // 0x187c34: 0xd8610000  lqc2        $vf1, 0x0($v1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187C50u;
            goto label_187c50;
        }
    }
    ctx->pc = 0x187C38u;
    // 0x187c38: 0x94620086  lhu         $v0, 0x86($v1)
    ctx->pc = 0x187c38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 134)));
    // 0x187c3c: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x187c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x187c40: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x187c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x187c44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x187c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x187c48: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x187c48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187c4c: 0x0  nop
    ctx->pc = 0x187c4cu;
    // NOP
label_187c50:
    // 0x187c50: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x187c50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x187c54: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x187c54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x187c58: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x187c58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x187c5c: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x187c5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x187c60: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x187c60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x187c64: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x187c64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x187c68: 0x4be2088b  vmaddw.xyzw $vf2, $vf1, $vf2w
    ctx->pc = 0x187c68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x187c6c: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x187c6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x187c70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x187c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x187c74: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187C74u;
    {
        const bool branch_taken_0x187c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x187C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187C74u;
            // 0x187c78: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c74) {
            ctx->pc = 0x187C88u;
            goto label_187c88;
        }
    }
    ctx->pc = 0x187C7Cu;
    // 0x187c7c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x187C7Cu;
    {
        const bool branch_taken_0x187c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187C7Cu;
            // 0x187c80: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c7c) {
            ctx->pc = 0x187CACu;
            goto label_187cac;
        }
    }
    ctx->pc = 0x187C84u;
    // 0x187c84: 0x0  nop
    ctx->pc = 0x187c84u;
    // NOP
label_187c88:
    // 0x187c88: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x187c88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x187c8c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x187c8cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x187c90: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x187C90u;
    {
        const bool branch_taken_0x187c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x187C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187C90u;
            // 0x187c94: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c90) {
            ctx->pc = 0x187CACu;
            goto label_187cac;
        }
    }
    ctx->pc = 0x187C98u;
    // 0x187c98: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x187c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x187c9c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x187C9Cu;
    SET_GPR_U32(ctx, 31, 0x187CA4u);
    ctx->pc = 0x187CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187C9Cu;
            // 0x187ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CA4u; }
        if (ctx->pc != 0x187CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CA4u; }
        if (ctx->pc != 0x187CA4u) { return; }
    }
    ctx->pc = 0x187CA4u;
    // 0x187ca4: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x187ca4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187ca8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x187ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_187cac:
    // 0x187cac: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x187cacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x187cb0: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x187cb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x187cb4: 0xd8810010  lqc2        $vf1, 0x10($a0)
    ctx->pc = 0x187cb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x187cb8: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x187cb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x187cbc: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x187cbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x187cc0: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x187cc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x187cc4: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x187cc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x187cc8: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x187cc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x187ccc: 0x0  nop
    ctx->pc = 0x187cccu;
    // NOP
label_187cd0:
    // 0x187cd0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x187cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_187cd4:
    // 0x187cd4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x187cd4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x187cd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x187cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x187CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187CDCu;
            // 0x187ce0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187C50u: goto label_187c50;
            case 0x187C88u: goto label_187c88;
            case 0x187CACu: goto label_187cac;
            case 0x187CD0u: goto label_187cd0;
            case 0x187CD4u: goto label_187cd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187CE4u;
    // 0x187ce4: 0x0  nop
    ctx->pc = 0x187ce4u;
    // NOP
}
