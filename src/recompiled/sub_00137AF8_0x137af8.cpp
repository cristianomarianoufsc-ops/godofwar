#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00137AF8
// Address: 0x137af8 - 0x138108
void sub_00137AF8_0x137af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137AF8_0x137af8");
#endif

    ctx->pc = 0x137af8u;

    // 0x137af8: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x137af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x137afc: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x137afcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b00: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x137b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x137b04: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x137b04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b08: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x137b08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x137b0c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x137b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b10: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x137b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x137b14: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x137b14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x137b18: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x137b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x137b1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x137b1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b20: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x137b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x137b24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x137b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b28: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x137b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x137b2c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x137b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x137b30: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x137b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x137b34: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x137b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x137b38: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x137b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x137b3c: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x137b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
    // 0x137b40: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x137b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x137b44: 0x8d820054  lw          $v0, 0x54($t4)
    ctx->pc = 0x137b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 84)));
    // 0x137b48: 0x8d930060  lw          $s3, 0x60($t4)
    ctx->pc = 0x137b48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 96)));
    // 0x137b4c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x137b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x137b50: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x137b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x137b54: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x137b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x137b58: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x137b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x137b5c: 0x2624021  addu        $t0, $s3, $v0
    ctx->pc = 0x137b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x137b60: 0x8d02ffe0  lw          $v0, -0x20($t0)
    ctx->pc = 0x137b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967264)));
    // 0x137b64: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x137b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x137b68: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x137B68u;
    {
        const bool branch_taken_0x137b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B68u;
            // 0x137b6c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b68) {
            ctx->pc = 0x137B98u;
            goto label_137b98;
        }
    }
    ctx->pc = 0x137B70u;
label_137b70:
    // 0x137b70: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x137b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137b74: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x137b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x137b78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x137b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x137b7c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x137b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137b80: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x137b80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x137b84: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x137b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x137b88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137b8c: 0x8c62ffe0  lw          $v0, -0x20($v1)
    ctx->pc = 0x137b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x137b90: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x137B90u;
    {
        const bool branch_taken_0x137b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B90u;
            // 0x137b94: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b90) {
            ctx->pc = 0x137B70u;
            runtime->cooperativeGuestYield();
            goto label_137b70;
        }
    }
    ctx->pc = 0x137B98u;
label_137b98:
    // 0x137b98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x137b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137b9c: 0x21823  negu        $v1, $v0
    ctx->pc = 0x137b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x137ba0: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x137ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x137ba4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x137ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x137ba8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x137BA8u;
    {
        const bool branch_taken_0x137ba8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x137BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137BA8u;
            // 0x137bac: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ba8) {
            ctx->pc = 0x137BB8u;
            goto label_137bb8;
        }
    }
    ctx->pc = 0x137BB0u;
    // 0x137bb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x137BB0u;
    {
        const bool branch_taken_0x137bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137BB0u;
            // 0x137bb4: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bb0) {
            ctx->pc = 0x137BC4u;
            goto label_137bc4;
        }
    }
    ctx->pc = 0x137BB8u;
label_137bb8:
    // 0x137bb8: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x137bb8u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x137bbc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x137bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x137bc0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x137bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_137bc4:
    // 0x137bc4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x137bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137bc8: 0xd8e90030  lqc2        $vf9, 0x30($a3)
    ctx->pc = 0x137bc8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x137bcc: 0xd8e80010  lqc2        $vf8, 0x10($a3)
    ctx->pc = 0x137bccu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x137bd0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x137bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x137bd4: 0xd8e70020  lqc2        $vf7, 0x20($a3)
    ctx->pc = 0x137bd4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x137bd8: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x137bd8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137bdc: 0xd8e60000  lqc2        $vf6, 0x0($a3)
    ctx->pc = 0x137bdcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x137be0: 0x8d8e0050  lw          $t6, 0x50($t4)
    ctx->pc = 0x137be0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x137be4: 0x8d8d0058  lw          $t5, 0x58($t4)
    ctx->pc = 0x137be4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
    // 0x137be8: 0xf9660000  sqc2        $vf6, 0x0($t3)
    ctx->pc = 0x137be8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x137bec: 0xf9680010  sqc2        $vf8, 0x10($t3)
    ctx->pc = 0x137becu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x137bf0: 0xf9670020  sqc2        $vf7, 0x20($t3)
    ctx->pc = 0x137bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 32), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x137bf4: 0x16c0003d  bnez        $s6, . + 4 + (0x3D << 2)
    ctx->pc = 0x137BF4u;
    {
        const bool branch_taken_0x137bf4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x137BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137BF4u;
            // 0x137bf8: 0xf9690030  sqc2        $vf9, 0x30($t3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 11), 48), _mm_castps_si128(ctx->vu0_vf[9]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bf4) {
            ctx->pc = 0x137CECu;
            goto label_137cec;
        }
    }
    ctx->pc = 0x137BFCu;
    // 0x137bfc: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x137bfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x137c00: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x137c00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137c04: 0x4be440bd  vmadday.xyzw $ACC, $vf8, $vf4y
    ctx->pc = 0x137c04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137c08: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x137c08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137c0c: 0x4be4490b  vmaddw.xyzw $vf4, $vf9, $vf4w
    ctx->pc = 0x137c0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137c10: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x137c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x137c14: 0xd9030010  lqc2        $vf3, 0x10($t0)
    ctx->pc = 0x137c14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x137c18: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x137c18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137c1c: 0x4be340bd  vmadday.xyzw $ACC, $vf8, $vf3y
    ctx->pc = 0x137c1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137c20: 0x4be338be  vmaddaz.xyzw $ACC, $vf7, $vf3z
    ctx->pc = 0x137c20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137c24: 0x4be348cb  vmaddw.xyzw $vf3, $vf9, $vf3w
    ctx->pc = 0x137c24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137c28: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x137c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x137c2c: 0xd9020020  lqc2        $vf2, 0x20($t0)
    ctx->pc = 0x137c2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x137c30: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x137c30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137c34: 0x4be240bd  vmadday.xyzw $ACC, $vf8, $vf2y
    ctx->pc = 0x137c34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137c38: 0x4be238be  vmaddaz.xyzw $ACC, $vf7, $vf2z
    ctx->pc = 0x137c38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137c3c: 0x4be2488b  vmaddw.xyzw $vf2, $vf9, $vf2w
    ctx->pc = 0x137c3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137c40: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x137c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x137c44: 0xd9010030  lqc2        $vf1, 0x30($t0)
    ctx->pc = 0x137c44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x137c48: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x137c48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137c4c: 0x4be140bd  vmadday.xyzw $ACC, $vf8, $vf1y
    ctx->pc = 0x137c4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137c50: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x137c50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137c54: 0x4be1484b  vmaddw.xyzw $vf1, $vf9, $vf1w
    ctx->pc = 0x137c54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137c58: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x137c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137c5c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x137c5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137c60: 0xfa440000  sqc2        $vf4, 0x0($s2)
    ctx->pc = 0x137c60u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x137c64: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x137c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x137c68: 0xfa430010  sqc2        $vf3, 0x10($s2)
    ctx->pc = 0x137c68u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x137c6c: 0x144102b  sltu        $v0, $t2, $a0
    ctx->pc = 0x137c6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x137c70: 0xfa420020  sqc2        $vf2, 0x20($s2)
    ctx->pc = 0x137c70u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x137c74: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x137C74u;
    {
        const bool branch_taken_0x137c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137C74u;
            // 0x137c78: 0xfa410030  sqc2        $vf1, 0x30($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c74) {
            ctx->pc = 0x137CFCu;
            goto label_137cfc;
        }
    }
    ctx->pc = 0x137C7Cu;
    // 0x137c7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x137c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137c80: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x137C80u;
    {
        const bool branch_taken_0x137c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137C80u;
            // 0x137c84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c80) {
            ctx->pc = 0x137CB0u;
            goto label_137cb0;
        }
    }
    ctx->pc = 0x137C88u;
label_137c88:
    // 0x137c88: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x137c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137c8c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x137c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x137c90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x137c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x137c94: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x137c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137c98: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x137c98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x137c9c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x137c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x137ca0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137ca4: 0x8c62ffe0  lw          $v0, -0x20($v1)
    ctx->pc = 0x137ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x137ca8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x137CA8u;
    {
        const bool branch_taken_0x137ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137CA8u;
            // 0x137cac: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ca8) {
            ctx->pc = 0x137C88u;
            runtime->cooperativeGuestYield();
            goto label_137c88;
        }
    }
    ctx->pc = 0x137CB0u;
label_137cb0:
    // 0x137cb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x137cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137cb4: 0x21823  negu        $v1, $v0
    ctx->pc = 0x137cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x137cb8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x137cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x137cbc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x137cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x137cc0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x137CC0u;
    {
        const bool branch_taken_0x137cc0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x137CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137CC0u;
            // 0x137cc4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137cc0) {
            ctx->pc = 0x137CD0u;
            goto label_137cd0;
        }
    }
    ctx->pc = 0x137CC8u;
    // 0x137cc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x137CC8u;
    {
        const bool branch_taken_0x137cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137CC8u;
            // 0x137ccc: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137cc8) {
            ctx->pc = 0x137CDCu;
            goto label_137cdc;
        }
    }
    ctx->pc = 0x137CD0u;
label_137cd0:
    // 0x137cd0: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x137cd0u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x137cd4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x137cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x137cd8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x137cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_137cdc:
    // 0x137cdc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x137cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137ce0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x137ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x137ce4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x137CE4u;
    {
        const bool branch_taken_0x137ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137CE4u;
            // 0x137ce8: 0x43b021  addu        $s6, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ce4) {
            ctx->pc = 0x137CFCu;
            goto label_137cfc;
        }
    }
    ctx->pc = 0x137CECu;
label_137cec:
    // 0x137cec: 0xfa460000  sqc2        $vf6, 0x0($s2)
    ctx->pc = 0x137cecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x137cf0: 0xfa480010  sqc2        $vf8, 0x10($s2)
    ctx->pc = 0x137cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x137cf4: 0xfa470020  sqc2        $vf7, 0x20($s2)
    ctx->pc = 0x137cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x137cf8: 0xfa490030  sqc2        $vf9, 0x30($s2)
    ctx->pc = 0x137cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[9]));
label_137cfc:
    // 0x137cfc: 0x85b00004  lh          $s0, 0x4($t5)
    ctx->pc = 0x137cfcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x137d00: 0x60000f4  bltz        $s0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x137D00u;
    {
        const bool branch_taken_0x137d00 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x137D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137D00u;
            // 0x137d04: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d00) {
            ctx->pc = 0x1380D4u;
            goto label_1380d4;
        }
    }
    ctx->pc = 0x137D08u;
    // 0x137d08: 0x9582005c  lhu         $v0, 0x5C($t4)
    ctx->pc = 0x137d08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 92)));
    // 0x137d0c: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x137d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x137d10: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x137d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x137d14: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x137d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x137d18: 0x104000ee  beqz        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x137D18u;
    {
        const bool branch_taken_0x137d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137D18u;
            // 0x137d1c: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d18) {
            ctx->pc = 0x1380D4u;
            goto label_1380d4;
        }
    }
    ctx->pc = 0x137D20u;
    // 0x137d20: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x137d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x137d24: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x137d24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x137d28: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x137d28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d2c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x137d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x137d30: 0xa1180  sll         $v0, $t2, 6
    ctx->pc = 0x137d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x137d34: 0x8df021  addu        $fp, $a0, $t5
    ctx->pc = 0x137d34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x137d38: 0x488821  addu        $s1, $v0, $t0
    ctx->pc = 0x137d38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x137d3c: 0xb2b821  addu        $s7, $a1, $s2
    ctx->pc = 0x137d3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x137d40: 0x12ea821  addu        $s5, $t1, $t6
    ctx->pc = 0x137d40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x137d44: 0x6ba021  addu        $s4, $v1, $t3
    ctx->pc = 0x137d44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_137d48:
    // 0x137d48: 0x87c50008  lh          $a1, 0x8($fp)
    ctx->pc = 0x137d48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x137d4c: 0x25840064  addiu       $a0, $t4, 0x64
    ctx->pc = 0x137d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 100));
    // 0x137d50: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x137d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x137d54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137d58: 0x30a4001f  andi        $a0, $a1, 0x1F
    ctx->pc = 0x137d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x137d5c: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x137d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x137d60: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x137d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x137d64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x137d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137d68: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x137d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x137d6c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x137d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x137d70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x137d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137d74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x137d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x137d78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x137D78u;
    {
        const bool branch_taken_0x137d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137D78u;
            // 0x137d7c: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d78) {
            ctx->pc = 0x137DA8u;
            goto label_137da8;
        }
    }
    ctx->pc = 0x137D80u;
    // 0x137d80: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x137d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x137d84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137d88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x137d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137d8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137D8Cu;
    {
        const bool branch_taken_0x137d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137d8c) {
            ctx->pc = 0x137DA8u;
            goto label_137da8;
        }
    }
    ctx->pc = 0x137D94u;
    // 0x137d94: 0xc7c0000c  lwc1        $f0, 0xC($fp)
    ctx->pc = 0x137d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137d98: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x137d98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137d9c: 0x0  nop
    ctx->pc = 0x137d9cu;
    // NOP
    // 0x137da0: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x137DA0u;
    {
        const bool branch_taken_0x137da0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x137DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137DA0u;
            // 0x137da4: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137da0) {
            ctx->pc = 0x137E20u;
            goto label_137e20;
        }
    }
    ctx->pc = 0x137DA8u;
label_137da8:
    // 0x137da8: 0x161600c2  bne         $s0, $s6, . + 4 + (0xC2 << 2)
    ctx->pc = 0x137DA8u;
    {
        const bool branch_taken_0x137da8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x137DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137DA8u;
            // 0x137dac: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137da8) {
            ctx->pc = 0x1380B4u;
            goto label_1380b4;
        }
    }
    ctx->pc = 0x137DB0u;
    // 0x137db0: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x137db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x137db4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x137db4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x137db8: 0x144102b  sltu        $v0, $t2, $a0
    ctx->pc = 0x137db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x137dbc: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x137DBCu;
    {
        const bool branch_taken_0x137dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137DBCu;
            // 0x137dc0: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137dbc) {
            ctx->pc = 0x1380B0u;
            goto label_1380b0;
        }
    }
    ctx->pc = 0x137DC4u;
    // 0x137dc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x137dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137dc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x137dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137dcc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x137DCCu;
    {
        const bool branch_taken_0x137dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137DCCu;
            // 0x137dd0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137dcc) {
            ctx->pc = 0x137E00u;
            goto label_137e00;
        }
    }
    ctx->pc = 0x137DD4u;
    // 0x137dd4: 0x0  nop
    ctx->pc = 0x137dd4u;
    // NOP
label_137dd8:
    // 0x137dd8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x137dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137ddc: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x137ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x137de0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x137de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x137de4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x137de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137de8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x137de8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x137dec: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x137decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x137df0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137df4: 0x8c62ffe0  lw          $v0, -0x20($v1)
    ctx->pc = 0x137df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x137df8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x137DF8u;
    {
        const bool branch_taken_0x137df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137DF8u;
            // 0x137dfc: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137df8) {
            ctx->pc = 0x137DD8u;
            runtime->cooperativeGuestYield();
            goto label_137dd8;
        }
    }
    ctx->pc = 0x137E00u;
label_137e00:
    // 0x137e00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x137e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137e04: 0x21823  negu        $v1, $v0
    ctx->pc = 0x137e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x137e08: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x137e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x137e0c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x137e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x137e10: 0x4600095  bltz        $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x137E10u;
    {
        const bool branch_taken_0x137e10 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x137E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137E10u;
            // 0x137e14: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e10) {
            ctx->pc = 0x138068u;
            goto label_138068;
        }
    }
    ctx->pc = 0x137E18u;
    // 0x137e18: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x137E18u;
    {
        const bool branch_taken_0x137e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e18) {
            ctx->pc = 0x138070u;
            goto label_138070;
        }
    }
    ctx->pc = 0x137E20u;
label_137e20:
    // 0x137e20: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x137E20u;
    {
        const bool branch_taken_0x137e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x137E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137E20u;
            // 0x137e24: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e20) {
            ctx->pc = 0x137E5Cu;
            goto label_137e5c;
        }
    }
    ctx->pc = 0x137E28u;
    // 0x137e28: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x137E28u;
    {
        const bool branch_taken_0x137e28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x137E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137E28u;
            // 0x137e2c: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e28) {
            ctx->pc = 0x137E44u;
            goto label_137e44;
        }
    }
    ctx->pc = 0x137E30u;
    // 0x137e30: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x137e30u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137e34: 0xdba80020  lqc2        $vf8, 0x20($sp)
    ctx->pc = 0x137e34u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137e38: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x137e38u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137e3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x137E3Cu;
    {
        const bool branch_taken_0x137e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137E3Cu;
            // 0x137e40: 0xdba90040  lqc2        $vf9, 0x40($sp) (Delay Slot)
        ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e3c) {
            ctx->pc = 0x137E58u;
            goto label_137e58;
        }
    }
    ctx->pc = 0x137E44u;
label_137e44:
    // 0x137e44: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x137e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x137e48: 0xd8490030  lqc2        $vf9, 0x30($v0)
    ctx->pc = 0x137e48u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x137e4c: 0xd8460000  lqc2        $vf6, 0x0($v0)
    ctx->pc = 0x137e4cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137e50: 0xd8480010  lqc2        $vf8, 0x10($v0)
    ctx->pc = 0x137e50u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x137e54: 0xd8470020  lqc2        $vf7, 0x20($v0)
    ctx->pc = 0x137e54u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_137e58:
    // 0x137e58: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x137e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_137e5c:
    // 0x137e5c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x137e5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x137e60: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x137e60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137e64: 0x4be140bd  vmadday.xyzw $ACC, $vf8, $vf1y
    ctx->pc = 0x137e64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137e68: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x137e68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137e6c: 0x4be1484b  vmaddw.xyzw $vf1, $vf9, $vf1w
    ctx->pc = 0x137e6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137e70: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x137e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137e74: 0xdaa10010  lqc2        $vf1, 0x10($s5)
    ctx->pc = 0x137e74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x137e78: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x137e78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137e7c: 0x4be140bd  vmadday.xyzw $ACC, $vf8, $vf1y
    ctx->pc = 0x137e7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137e80: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x137e80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137e84: 0x4be1484b  vmaddw.xyzw $vf1, $vf9, $vf1w
    ctx->pc = 0x137e84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137e88: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x137e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137e8c: 0xdaa10020  lqc2        $vf1, 0x20($s5)
    ctx->pc = 0x137e8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x137e90: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x137e90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137e94: 0x4be140bd  vmadday.xyzw $ACC, $vf8, $vf1y
    ctx->pc = 0x137e94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137e98: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x137e98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137e9c: 0x4be1484b  vmaddw.xyzw $vf1, $vf9, $vf1w
    ctx->pc = 0x137e9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137ea0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x137ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137ea4: 0xdaa10030  lqc2        $vf1, 0x30($s5)
    ctx->pc = 0x137ea4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x137ea8: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x137ea8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137eac: 0x4be140bd  vmadday.xyzw $ACC, $vf8, $vf1y
    ctx->pc = 0x137eacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137eb0: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x137eb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137eb4: 0x4be1484b  vmaddw.xyzw $vf1, $vf9, $vf1w
    ctx->pc = 0x137eb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137eb8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x137eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137ebc: 0x8fc80000  lw          $t0, 0x0($fp)
    ctx->pc = 0x137ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x137ec0: 0x31026000  andi        $v0, $t0, 0x6000
    ctx->pc = 0x137ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)24576);
    // 0x137ec4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x137EC4u;
    {
        const bool branch_taken_0x137ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137EC4u;
            // 0x137ec8: 0xafb00058  sw          $s0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ec4) {
            ctx->pc = 0x137F20u;
            goto label_137f20;
        }
    }
    ctx->pc = 0x137ECCu;
    // 0x137ecc: 0x7fa90070  sq          $t1, 0x70($sp)
    ctx->pc = 0x137eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 9));
    // 0x137ed0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x137ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x137ed4: 0x7faa0080  sq          $t2, 0x80($sp)
    ctx->pc = 0x137ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 10));
    // 0x137ed8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x137ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x137edc: 0x7fab0090  sq          $t3, 0x90($sp)
    ctx->pc = 0x137edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 11));
    // 0x137ee0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x137ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x137ee4: 0x7fac00a0  sq          $t4, 0xA0($sp)
    ctx->pc = 0x137ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 12));
    // 0x137ee8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x137ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x137eec: 0xfba600b0  sqc2        $vf6, 0xB0($sp)
    ctx->pc = 0x137eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x137ef0: 0xfba700c0  sqc2        $vf7, 0xC0($sp)
    ctx->pc = 0x137ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x137ef4: 0xfba800d0  sqc2        $vf8, 0xD0($sp)
    ctx->pc = 0x137ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x137ef8: 0xc04da1c  jal         func_136870
    ctx->pc = 0x137EF8u;
    SET_GPR_U32(ctx, 31, 0x137F00u);
    ctx->pc = 0x137EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137EF8u;
            // 0x137efc: 0xfba900e0  sqc2        $vf9, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[9]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136870u;
    if (runtime->hasFunction(0x136870u)) {
        auto targetFn = runtime->lookupFunction(0x136870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F00u; }
        if (ctx->pc != 0x137F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136870_0x136870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F00u; }
        if (ctx->pc != 0x137F00u) { return; }
    }
    ctx->pc = 0x137F00u;
    // 0x137f00: 0xdba900e0  lqc2        $vf9, 0xE0($sp)
    ctx->pc = 0x137f00u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x137f04: 0xdba800d0  lqc2        $vf8, 0xD0($sp)
    ctx->pc = 0x137f04u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x137f08: 0xdba700c0  lqc2        $vf7, 0xC0($sp)
    ctx->pc = 0x137f08u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x137f0c: 0xdba600b0  lqc2        $vf6, 0xB0($sp)
    ctx->pc = 0x137f0cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x137f10: 0x7bac00a0  lq          $t4, 0xA0($sp)
    ctx->pc = 0x137f10u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x137f14: 0x7bab0090  lq          $t3, 0x90($sp)
    ctx->pc = 0x137f14u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x137f18: 0x7baa0080  lq          $t2, 0x80($sp)
    ctx->pc = 0x137f18u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x137f1c: 0x7ba90070  lq          $t1, 0x70($sp)
    ctx->pc = 0x137f1cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_137f20:
    // 0x137f20: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x137f20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137f24: 0x102142  srl         $a0, $s0, 5
    ctx->pc = 0x137f24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x137f28: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x137f28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137f2c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x137f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x137f30: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x137f30u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
    // 0x137f34: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x137f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x137f38: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x137f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x137f3c: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x137f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
    // 0x137f40: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x137f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x137f44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137f48: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x137f48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137f4c: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x137f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x137f50: 0x7e820020  sq          $v0, 0x20($s4)
    ctx->pc = 0x137f50u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
    // 0x137f54: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x137f54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137f58: 0x7e820030  sq          $v0, 0x30($s4)
    ctx->pc = 0x137f58u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), GPR_VEC(ctx, 2));
    // 0x137f5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x137f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x137f60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x137f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x137f64: 0x16160049  bne         $s0, $s6, . + 4 + (0x49 << 2)
    ctx->pc = 0x137F64u;
    {
        const bool branch_taken_0x137f64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x137F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137F64u;
            // 0x137f68: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f64) {
            ctx->pc = 0x13808Cu;
            goto label_13808c;
        }
    }
    ctx->pc = 0x137F6Cu;
    // 0x137f6c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x137f6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x137f70: 0x1321021  addu        $v0, $t1, $s2
    ctx->pc = 0x137f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
    // 0x137f74: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x137f74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137f78: 0x4be121bc  vmulax.xyzw $ACC, $vf4, $vf1x
    ctx->pc = 0x137f78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137f7c: 0xdba50020  lqc2        $vf5, 0x20($sp)
    ctx->pc = 0x137f7cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137f80: 0x4be128bd  vmadday.xyzw $ACC, $vf5, $vf1y
    ctx->pc = 0x137f80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137f84: 0xdba30030  lqc2        $vf3, 0x30($sp)
    ctx->pc = 0x137f84u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137f88: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x137f88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137f8c: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x137f8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137f90: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x137f90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137f94: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x137f94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137f98: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x137f98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x137f9c: 0x4be121bc  vmulax.xyzw $ACC, $vf4, $vf1x
    ctx->pc = 0x137f9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137fa0: 0x4be128bd  vmadday.xyzw $ACC, $vf5, $vf1y
    ctx->pc = 0x137fa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137fa4: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x137fa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137fa8: 0x4be1108b  vmaddw.xyzw $vf2, $vf2, $vf1w
    ctx->pc = 0x137fa8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137fac: 0xfae2ffe0  sqc2        $vf2, -0x20($s7)
    ctx->pc = 0x137facu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 4294967264), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x137fb0: 0xda220020  lqc2        $vf2, 0x20($s1)
    ctx->pc = 0x137fb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x137fb4: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x137fb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137fb8: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x137fb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137fbc: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x137fbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137fc0: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x137fc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137fc4: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x137fc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137fc8: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x137fc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137fcc: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x137fccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137fd0: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x137fd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137fd4: 0xfae1fff0  sqc2        $vf1, -0x10($s7)
    ctx->pc = 0x137fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 4294967280), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137fd8: 0xda220030  lqc2        $vf2, 0x30($s1)
    ctx->pc = 0x137fd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x137fdc: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x137fdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137fe0: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x137fe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137fe4: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x137fe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137fe8: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x137fe8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137fec: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x137fecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137ff0: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x137ff0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137ff4: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x137ff4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137ff8: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x137ff8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137ffc: 0xfae10000  sqc2        $vf1, 0x0($s7)
    ctx->pc = 0x137ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x138000: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x138000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x138004: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x138004u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x138008: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x138008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13800c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x13800Cu;
    {
        const bool branch_taken_0x13800c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13800Cu;
            // 0x138010: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13800c) {
            ctx->pc = 0x1380B0u;
            goto label_1380b0;
        }
    }
    ctx->pc = 0x138014u;
    // 0x138014: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x138014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138018: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x138018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13801c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13801Cu;
    {
        const bool branch_taken_0x13801c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13801Cu;
            // 0x138020: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13801c) {
            ctx->pc = 0x138050u;
            goto label_138050;
        }
    }
    ctx->pc = 0x138024u;
    // 0x138024: 0x0  nop
    ctx->pc = 0x138024u;
    // NOP
label_138028:
    // 0x138028: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x138028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13802c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x13802cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x138030: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x138030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x138034: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x138034u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x138038: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x138038u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x13803c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x13803cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x138040: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x138040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138044: 0x8c62ffe0  lw          $v0, -0x20($v1)
    ctx->pc = 0x138044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x138048: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x138048u;
    {
        const bool branch_taken_0x138048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13804Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138048u;
            // 0x13804c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138048) {
            ctx->pc = 0x138028u;
            runtime->cooperativeGuestYield();
            goto label_138028;
        }
    }
    ctx->pc = 0x138050u;
label_138050:
    // 0x138050: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x138050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x138054: 0x21823  negu        $v1, $v0
    ctx->pc = 0x138054u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x138058: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x138058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13805c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x13805cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x138060: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138060u;
    {
        const bool branch_taken_0x138060 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x138064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138060u;
            // 0x138064: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138060) {
            ctx->pc = 0x138070u;
            goto label_138070;
        }
    }
    ctx->pc = 0x138068u;
label_138068:
    // 0x138068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x138068u;
    {
        const bool branch_taken_0x138068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13806Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138068u;
            // 0x13806c: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138068) {
            ctx->pc = 0x13807Cu;
            goto label_13807c;
        }
    }
    ctx->pc = 0x138070u;
label_138070:
    // 0x138070: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x138070u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x138074: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x138074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x138078: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x138078u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13807c:
    // 0x13807c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x13807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x138080: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x138080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x138084: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x138084u;
    {
        const bool branch_taken_0x138084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138084u;
            // 0x138088: 0x43b021  addu        $s6, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138084) {
            ctx->pc = 0x1380B0u;
            goto label_1380b0;
        }
    }
    ctx->pc = 0x13808Cu;
label_13808c:
    // 0x13808c: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x13808cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138090: 0x1321821  addu        $v1, $t1, $s2
    ctx->pc = 0x138090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
    // 0x138094: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x138094u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138098: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x138098u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x13809c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13809cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1380a0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1380a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1380a4: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x1380a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x1380a8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1380a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1380ac: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x1380acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
label_1380b0:
    // 0x1380b0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1380b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1380b4:
    // 0x1380b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1380b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1380b8: 0x26f70040  addiu       $s7, $s7, 0x40
    ctx->pc = 0x1380b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
    // 0x1380bc: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x1380bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1380c0: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x1380c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x1380c4: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x1380c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1380c8: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x1380c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1380cc: 0x1440ff1e  bnez        $v0, . + 4 + (-0xE2 << 2)
    ctx->pc = 0x1380CCu;
    {
        const bool branch_taken_0x1380cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1380D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1380CCu;
            // 0x1380d0: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380cc) {
            ctx->pc = 0x137D48u;
            runtime->cooperativeGuestYield();
            goto label_137d48;
        }
    }
    ctx->pc = 0x1380D4u;
label_1380d4:
    // 0x1380d4: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x1380d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1380d8: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1380d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1380dc: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x1380dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1380e0: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x1380e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1380e4: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x1380e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1380e8: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x1380e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1380ec: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x1380ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1380f0: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x1380f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1380f4: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x1380f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1380f8: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1380f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1380fc: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x1380fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x138100: 0x3e00008  jr          $ra
    ctx->pc = 0x138100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138100u;
            // 0x138104: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x137B70u: goto label_137b70;
            case 0x137B98u: goto label_137b98;
            case 0x137BB8u: goto label_137bb8;
            case 0x137BC4u: goto label_137bc4;
            case 0x137C88u: goto label_137c88;
            case 0x137CB0u: goto label_137cb0;
            case 0x137CD0u: goto label_137cd0;
            case 0x137CDCu: goto label_137cdc;
            case 0x137CECu: goto label_137cec;
            case 0x137CFCu: goto label_137cfc;
            case 0x137D48u: goto label_137d48;
            case 0x137DA8u: goto label_137da8;
            case 0x137DD8u: goto label_137dd8;
            case 0x137E00u: goto label_137e00;
            case 0x137E20u: goto label_137e20;
            case 0x137E44u: goto label_137e44;
            case 0x137E58u: goto label_137e58;
            case 0x137E5Cu: goto label_137e5c;
            case 0x137F20u: goto label_137f20;
            case 0x138028u: goto label_138028;
            case 0x138050u: goto label_138050;
            case 0x138068u: goto label_138068;
            case 0x138070u: goto label_138070;
            case 0x13807Cu: goto label_13807c;
            case 0x13808Cu: goto label_13808c;
            case 0x1380B0u: goto label_1380b0;
            case 0x1380B4u: goto label_1380b4;
            case 0x1380D4u: goto label_1380d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138108u;
}
