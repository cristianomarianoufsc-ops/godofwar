#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013AA68
// Address: 0x13aa68 - 0x13aed0
void sub_0013AA68_0x13aa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AA68_0x13aa68");
#endif

    ctx->pc = 0x13aa68u;

    // 0x13aa68: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x13aa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x13aa6c: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x13aa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x13aa70: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x13aa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x13aa74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13aa74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa78: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x13aa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x13aa7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13aa7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa80: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x13aa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
    // 0x13aa84: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x13aa84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa88: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x13aa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x13aa8c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x13aa8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa90: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x13aa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x13aa94: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x13aa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x13aa98: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x13aa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x13aa9c: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x13aa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x13aaa0: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x13aaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x13aaa4: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x13aaa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x13aaa8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13aaac: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x13aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x13aab0: 0x8c540104  lw          $s4, 0x104($v0)
    ctx->pc = 0x13aab0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x13aab4: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x13aab4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x13aab8: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x13aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x13aabc: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x13aabcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x13aac0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13aac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13aac4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13aac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13aac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13aac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aacc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x13aaccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13aad0: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x13AAD0u;
    {
        const bool branch_taken_0x13aad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AAD0u;
            // 0x13aad4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aad0) {
            ctx->pc = 0x13AC18u;
            goto label_13ac18;
        }
    }
    ctx->pc = 0x13AAD8u;
label_13aad8:
    // 0x13aad8: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x13aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x13aadc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13aae0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13aae0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13aae4: 0x10530024  beq         $v0, $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x13AAE4u;
    {
        const bool branch_taken_0x13aae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x13AAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AAE4u;
            // 0x13aae8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aae4) {
            ctx->pc = 0x13AB78u;
            goto label_13ab78;
        }
    }
    ctx->pc = 0x13AAECu;
    // 0x13aaec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13aaecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aaf0: 0x131142  srl         $v0, $s3, 5
    ctx->pc = 0x13aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
    // 0x13aaf4: 0x3264001f  andi        $a0, $s3, 0x1F
    ctx->pc = 0x13aaf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
    // 0x13aaf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13aafc: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x13aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x13ab00: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x13ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x13ab04: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x13ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x13ab08: 0x43b024  and         $s6, $v0, $v1
    ctx->pc = 0x13ab08u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13ab0c: 0x12c0001c  beqz        $s6, . + 4 + (0x1C << 2)
    ctx->pc = 0x13AB0Cu;
    {
        const bool branch_taken_0x13ab0c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AB0Cu;
            // 0x13ab10: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab0c) {
            ctx->pc = 0x13AB80u;
            goto label_13ab80;
        }
    }
    ctx->pc = 0x13AB14u;
    // 0x13ab14: 0xde830040  ld          $v1, 0x40($s4)
    ctx->pc = 0x13ab14u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x13ab18: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x13ab18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x13ab1c: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AB1Cu;
    {
        const bool branch_taken_0x13ab1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x13ab1c) {
            ctx->pc = 0x13AB20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13AB1Cu;
            // 0x13ab20: 0x8e83008c  lw          $v1, 0x8C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13AB30u;
            goto label_13ab30;
        }
    }
    ctx->pc = 0x13AB24u;
    // 0x13ab24: 0xc04da64  jal         func_136990
    ctx->pc = 0x13AB24u;
    SET_GPR_U32(ctx, 31, 0x13AB2Cu);
    ctx->pc = 0x13AB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AB24u;
            // 0x13ab28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AB2Cu; }
        if (ctx->pc != 0x13AB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AB2Cu; }
        if (ctx->pc != 0x13AB2Cu) { return; }
    }
    ctx->pc = 0x13AB2Cu;
    // 0x13ab2c: 0x8e83008c  lw          $v1, 0x8C($s4)
    ctx->pc = 0x13ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_13ab30:
    // 0x13ab30: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x13ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x13ab34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ab34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ab38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ab3c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13ab3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ab40: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x13ab40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13ab44: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x13ab44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13ab48: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x13ab48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13ab4c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13ab4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x13ab50: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x13ab50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13ab54: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x13ab54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x13ab58: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x13ab58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x13ab5c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x13ab5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x13ab60: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13ab60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13ab64: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x13ab64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13ab68: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13ab68u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13ab6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13ab6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ab70: 0x46000504  c1          0x504
    ctx->pc = 0x13ab70u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x13ab74: 0x0  nop
    ctx->pc = 0x13ab74u;
    // NOP
label_13ab78:
    // 0x13ab78: 0x56c00007  bnel        $s6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13AB78u;
    {
        const bool branch_taken_0x13ab78 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ab78) {
            ctx->pc = 0x13AB7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13AB78u;
            // 0x13ab7c: 0x8e42005c  lw          $v0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13AB98u;
            goto label_13ab98;
        }
    }
    ctx->pc = 0x13AB80u;
label_13ab80:
    // 0x13ab80: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x13ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x13ab84: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x13ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x13ab88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ab8c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x13ab8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13ab90: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x13AB90u;
    {
        const bool branch_taken_0x13ab90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AB90u;
            // 0x13ab94: 0xf8410000  sqc2        $vf1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab90) {
            ctx->pc = 0x13AC00u;
            goto label_13ac00;
        }
    }
    ctx->pc = 0x13AB98u;
label_13ab98:
    // 0x13ab98: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x13ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x13ab9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13aba0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13aba0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13aba4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x13aba4u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x13aba8: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x13aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x13abac: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x13abacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13abb0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13abb4: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x13abb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13abb8: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x13abb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13abbc: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x13abbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13abc0: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x13abc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13abc4: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x13abc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13abc8: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x13abc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13abcc: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x13abccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13abd0: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13abd0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13abd4: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x13abd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13abd8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x13abd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x13abdc: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x13abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x13abe0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13abe4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13abe4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13abe8: 0x4a211098  vmulx.w     $vf2, $vf2, $vf1x
    ctx->pc = 0x13abe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13abec: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x13abecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x13abf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13abf4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13abf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13abf8: 0x4a21133c  vmove.w     $vf1, $vf2
    ctx->pc = 0x13abf8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x13abfc: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13abfcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_13ac00:
    // 0x13ac00: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x13ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x13ac04: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x13ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13ac08: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x13ac08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x13ac0c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x13ac0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13ac10: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x13AC10u;
    {
        const bool branch_taken_0x13ac10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AC10u;
            // 0x13ac14: 0x3070ffff  andi        $s0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ac10) {
            ctx->pc = 0x13AAD8u;
            runtime->cooperativeGuestYield();
            goto label_13aad8;
        }
    }
    ctx->pc = 0x13AC18u;
label_13ac18:
    // 0x13ac18: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x13ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x13ac1c: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x13AC1Cu;
    {
        const bool branch_taken_0x13ac1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AC1Cu;
            // 0x13ac20: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ac1c) {
            ctx->pc = 0x13AE98u;
            goto label_13ae98;
        }
    }
    ctx->pc = 0x13AC24u;
    // 0x13ac24: 0x0  nop
    ctx->pc = 0x13ac24u;
    // NOP
label_13ac28:
    // 0x13ac28: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x13ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x13ac2c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x13ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x13ac30: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x13ac30u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ac34: 0x12130024  beq         $s0, $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x13AC34u;
    {
        const bool branch_taken_0x13ac34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x13AC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AC34u;
            // 0x13ac38: 0x101142  srl         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ac34) {
            ctx->pc = 0x13ACC8u;
            goto label_13acc8;
        }
    }
    ctx->pc = 0x13AC3Cu;
    // 0x13ac3c: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x13ac3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x13ac40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13ac44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ac48: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x13ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x13ac4c: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x13ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x13ac50: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x13ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x13ac54: 0x43b024  and         $s6, $v0, $v1
    ctx->pc = 0x13ac54u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13ac58: 0x12c0001b  beqz        $s6, . + 4 + (0x1B << 2)
    ctx->pc = 0x13AC58u;
    {
        const bool branch_taken_0x13ac58 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AC58u;
            // 0x13ac5c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ac58) {
            ctx->pc = 0x13ACC8u;
            goto label_13acc8;
        }
    }
    ctx->pc = 0x13AC60u;
    // 0x13ac60: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x13ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x13ac64: 0xde830040  ld          $v1, 0x40($s4)
    ctx->pc = 0x13ac64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x13ac68: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x13ac68u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x13ac6c: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AC6Cu;
    {
        const bool branch_taken_0x13ac6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x13ac6c) {
            ctx->pc = 0x13AC70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13AC6Cu;
            // 0x13ac70: 0x8e83008c  lw          $v1, 0x8C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13AC80u;
            goto label_13ac80;
        }
    }
    ctx->pc = 0x13AC74u;
    // 0x13ac74: 0xc04da64  jal         func_136990
    ctx->pc = 0x13AC74u;
    SET_GPR_U32(ctx, 31, 0x13AC7Cu);
    ctx->pc = 0x13AC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AC74u;
            // 0x13ac78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AC7Cu; }
        if (ctx->pc != 0x13AC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AC7Cu; }
        if (ctx->pc != 0x13AC7Cu) { return; }
    }
    ctx->pc = 0x13AC7Cu;
    // 0x13ac7c: 0x8e83008c  lw          $v1, 0x8C($s4)
    ctx->pc = 0x13ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_13ac80:
    // 0x13ac80: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x13ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x13ac84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ac84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ac8c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13ac8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ac90: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x13ac90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13ac94: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x13ac94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13ac98: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x13ac98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13ac9c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13ac9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x13aca0: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x13aca0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13aca4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x13aca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x13aca8: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x13aca8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x13acac: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x13acacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x13acb0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13acb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13acb4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x13acb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13acb8: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x13acb8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13acbc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x13acbcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13acc0: 0x46000504  c1          0x504
    ctx->pc = 0x13acc0u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x13acc4: 0x0  nop
    ctx->pc = 0x13acc4u;
    // NOP
label_13acc8:
    // 0x13acc8: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x13acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x13accc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13acccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13acd0: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x13acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x13acd4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13acd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13acd8: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x13ACD8u;
    {
        const bool branch_taken_0x13acd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13acd8) {
            ctx->pc = 0x13AD74u;
            goto label_13ad74;
        }
    }
    ctx->pc = 0x13ACE0u;
    // 0x13ace0: 0x56c00007  bnel        $s6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13ACE0u;
    {
        const bool branch_taken_0x13ace0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ace0) {
            ctx->pc = 0x13ACE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13ACE0u;
            // 0x13ace4: 0x8e420074  lw          $v0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13AD00u;
            goto label_13ad00;
        }
    }
    ctx->pc = 0x13ACE8u;
    // 0x13ace8: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x13ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x13acec: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x13acecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x13acf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13acf4: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x13acf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13acf8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x13ACF8u;
    {
        const bool branch_taken_0x13acf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ACFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ACF8u;
            // 0x13acfc: 0xf8410000  sqc2        $vf1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13acf8) {
            ctx->pc = 0x13AD68u;
            goto label_13ad68;
        }
    }
    ctx->pc = 0x13AD00u;
label_13ad00:
    // 0x13ad00: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x13ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x13ad04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ad08: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13ad08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ad0c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x13ad0cu;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x13ad10: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x13ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x13ad14: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x13ad14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ad18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ad1c: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x13ad1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13ad20: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x13ad20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ad24: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x13ad24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13ad28: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x13ad28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ad2c: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x13ad2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13ad30: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x13ad30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ad34: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x13ad34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13ad38: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13ad38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13ad3c: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x13ad3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13ad40: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x13ad40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x13ad44: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x13ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x13ad48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ad4c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13ad4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ad50: 0x4a211098  vmulx.w     $vf2, $vf2, $vf1x
    ctx->pc = 0x13ad50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13ad54: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x13ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x13ad58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ad5c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13ad5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ad60: 0x4a21133c  vmove.w     $vf1, $vf2
    ctx->pc = 0x13ad60u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x13ad64: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13ad64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_13ad68:
    // 0x13ad68: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x13ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x13ad6c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x13AD6Cu;
    {
        const bool branch_taken_0x13ad6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AD6Cu;
            // 0x13ad70: 0x3057ffff  andi        $s7, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad6c) {
            ctx->pc = 0x13AE80u;
            goto label_13ae80;
        }
    }
    ctx->pc = 0x13AD74u;
label_13ad74:
    // 0x13ad74: 0x52c00015  beql        $s6, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x13AD74u;
    {
        const bool branch_taken_0x13ad74 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ad74) {
            ctx->pc = 0x13AD78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13AD74u;
            // 0x13ad78: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13ADCCu;
            goto label_13adcc;
        }
    }
    ctx->pc = 0x13AD7Cu;
    // 0x13ad7c: 0x54c00013  bnel        $a2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x13AD7Cu;
    {
        const bool branch_taken_0x13ad7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ad7c) {
            ctx->pc = 0x13AD80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13AD7Cu;
            // 0x13ad80: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13ADCCu;
            goto label_13adcc;
        }
    }
    ctx->pc = 0x13AD84u;
    // 0x13ad84: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x13ad84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13ad88: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x13ad88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13ad8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13ad8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad90: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x13AD90u;
    SET_GPR_U32(ctx, 31, 0x13AD98u);
    ctx->pc = 0x13AD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AD90u;
            // 0x13ad94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AD98u; }
        if (ctx->pc != 0x13AD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AD98u; }
        if (ctx->pc != 0x13AD98u) { return; }
    }
    ctx->pc = 0x13AD98u;
    // 0x13ad98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ad98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad9c: 0xc0613b4  jal         func_184ED0
    ctx->pc = 0x13AD9Cu;
    SET_GPR_U32(ctx, 31, 0x13ADA4u);
    ctx->pc = 0x13ADA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AD9Cu;
            // 0x13ada0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184ED0u;
    if (runtime->hasFunction(0x184ED0u)) {
        auto targetFn = runtime->lookupFunction(0x184ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ADA4u; }
        if (ctx->pc != 0x13ADA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_184ed0_0x184f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ADA4u; }
        if (ctx->pc != 0x13ADA4u) { return; }
    }
    ctx->pc = 0x13ADA4u;
    // 0x13ada4: 0x7ba50080  lq          $a1, 0x80($sp)
    ctx->pc = 0x13ada4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13ada8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13ada8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13adac: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x13adacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13adb0: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x13adb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13adb4: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x13adb4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13adb8: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x13adb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x13adbc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x13adbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x13adc0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x13adc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x13adc4: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x13adc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    // 0x13adc8: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x13adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_13adcc:
    // 0x13adcc: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x13adccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x13add0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x13add0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13add4: 0x5880002b  blezl       $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x13ADD4u;
    {
        const bool branch_taken_0x13add4 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x13add4) {
            ctx->pc = 0x13ADD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13ADD4u;
            // 0x13add8: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13AE84u;
            goto label_13ae84;
        }
    }
    ctx->pc = 0x13ADDCu;
    // 0x13addc: 0x0  nop
    ctx->pc = 0x13addcu;
    // NOP
label_13ade0:
    // 0x13ade0: 0x56c00007  bnel        $s6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13ADE0u;
    {
        const bool branch_taken_0x13ade0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ade0) {
            ctx->pc = 0x13ADE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13ADE0u;
            // 0x13ade4: 0x8e420074  lw          $v0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13AE00u;
            goto label_13ae00;
        }
    }
    ctx->pc = 0x13ADE8u;
    // 0x13ade8: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x13ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x13adec: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x13adecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x13adf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13adf4: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x13adf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13adf8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x13ADF8u;
    {
        const bool branch_taken_0x13adf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ADFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ADF8u;
            // 0x13adfc: 0xf8410000  sqc2        $vf1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13adf8) {
            ctx->pc = 0x13AE70u;
            goto label_13ae70;
        }
    }
    ctx->pc = 0x13AE00u;
label_13ae00:
    // 0x13ae00: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x13ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x13ae04: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x13ae04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ae08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ae0c: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x13ae0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13ae10: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13ae10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ae14: 0x4be111bc  vmulax.xyzw $ACC, $vf2, $vf1x
    ctx->pc = 0x13ae14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13ae18: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x13ae18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13ae1c: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x13ae1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13ae20: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x13ae20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13ae24: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x13ae24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13ae28: 0x4be1108b  vmaddw.xyzw $vf2, $vf2, $vf1w
    ctx->pc = 0x13ae28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13ae2c: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x13ae2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13ae30: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x13ae30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13ae34: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x13ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x13ae38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ae3c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x13ae3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13ae40: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x13ae40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13ae44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13ae44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13ae48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13ae48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ae4c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x13ae4cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13ae50: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x13ae50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ae54: 0x46000004  c1          0x4
    ctx->pc = 0x13ae54u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x13ae58: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13ae58u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x13ae5c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x13ae5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13ae60: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x13ae60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x13ae64: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x13ae64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13ae68: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x13ae68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13ae6c: 0x0  nop
    ctx->pc = 0x13ae6cu;
    // NOP
label_13ae70:
    // 0x13ae70: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x13ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x13ae74: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x13ae78: 0x1c80ffd9  bgtz        $a0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x13AE78u;
    {
        const bool branch_taken_0x13ae78 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x13AE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AE78u;
            // 0x13ae7c: 0x3057ffff  andi        $s7, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae78) {
            ctx->pc = 0x13ADE0u;
            runtime->cooperativeGuestYield();
            goto label_13ade0;
        }
    }
    ctx->pc = 0x13AE80u;
label_13ae80:
    // 0x13ae80: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x13ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_13ae84:
    // 0x13ae84: 0x27c30001  addiu       $v1, $fp, 0x1
    ctx->pc = 0x13ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x13ae88: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x13ae88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x13ae8c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x13ae8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13ae90: 0x1440ff65  bnez        $v0, . + 4 + (-0x9B << 2)
    ctx->pc = 0x13AE90u;
    {
        const bool branch_taken_0x13ae90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AE90u;
            // 0x13ae94: 0x307effff  andi        $fp, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae90) {
            ctx->pc = 0x13AC28u;
            runtime->cooperativeGuestYield();
            goto label_13ac28;
        }
    }
    ctx->pc = 0x13AE98u;
label_13ae98:
    // 0x13ae98: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x13ae98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x13ae9c: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x13ae9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x13aea0: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x13aea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x13aea4: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x13aea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x13aea8: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x13aea8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x13aeac: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x13aeacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x13aeb0: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x13aeb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13aeb4: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x13aeb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x13aeb8: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x13aeb8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x13aebc: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x13aebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13aec0: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x13aec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13aec4: 0x3e00008  jr          $ra
    ctx->pc = 0x13AEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AEC4u;
            // 0x13aec8: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13AAD8u: goto label_13aad8;
            case 0x13AB30u: goto label_13ab30;
            case 0x13AB78u: goto label_13ab78;
            case 0x13AB80u: goto label_13ab80;
            case 0x13AB98u: goto label_13ab98;
            case 0x13AC00u: goto label_13ac00;
            case 0x13AC18u: goto label_13ac18;
            case 0x13AC28u: goto label_13ac28;
            case 0x13AC80u: goto label_13ac80;
            case 0x13ACC8u: goto label_13acc8;
            case 0x13AD00u: goto label_13ad00;
            case 0x13AD68u: goto label_13ad68;
            case 0x13AD74u: goto label_13ad74;
            case 0x13ADCCu: goto label_13adcc;
            case 0x13ADE0u: goto label_13ade0;
            case 0x13AE00u: goto label_13ae00;
            case 0x13AE70u: goto label_13ae70;
            case 0x13AE80u: goto label_13ae80;
            case 0x13AE84u: goto label_13ae84;
            case 0x13AE98u: goto label_13ae98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13AECCu;
    // 0x13aecc: 0x0  nop
    ctx->pc = 0x13aeccu;
    // NOP
}
