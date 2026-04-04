#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D7E38
// Address: 0x1d7e38 - 0x1d7fd8
void sub_001D7E38_0x1d7e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7E38_0x1d7e38");
#endif

    ctx->pc = 0x1d7e38u;

    // 0x1d7e38: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1d7e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1d7e3c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1d7e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1d7e40: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1d7e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1d7e44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d7e44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e48: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1d7e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1d7e4c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1d7e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1d7e50: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1d7e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1d7e54: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x1d7e54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d7e58: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1d7e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1d7e5c: 0x3042004c  andi        $v0, $v0, 0x4C
    ctx->pc = 0x1d7e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)76);
    // 0x1d7e60: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1D7E60u;
    {
        const bool branch_taken_0x1d7e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E60u;
            // 0x1d7e64: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e60) {
            ctx->pc = 0x1D7FBCu;
            goto label_1d7fbc;
        }
    }
    ctx->pc = 0x1D7E68u;
    // 0x1d7e68: 0x8e24024c  lw          $a0, 0x24C($s1)
    ctx->pc = 0x1d7e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1d7e6c: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D7E6Cu;
    {
        const bool branch_taken_0x1d7e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E6Cu;
            // 0x1d7e70: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e6c) {
            ctx->pc = 0x1D7EC8u;
            goto label_1d7ec8;
        }
    }
    ctx->pc = 0x1D7E74u;
    // 0x1d7e74: 0x8c900104  lw          $s0, 0x104($a0)
    ctx->pc = 0x1d7e74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x1d7e78: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D7E78u;
    {
        const bool branch_taken_0x1d7e78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E78u;
            // 0x1d7e7c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e78) {
            ctx->pc = 0x1D7EC8u;
            goto label_1d7ec8;
        }
    }
    ctx->pc = 0x1D7E80u;
    // 0x1d7e80: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1d7e80u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1d7e84: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1d7e84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1d7e88: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7E88u;
    {
        const bool branch_taken_0x1d7e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D7E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E88u;
            // 0x1d7e8c: 0x8e320250  lw          $s2, 0x250($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e88) {
            ctx->pc = 0x1D7E98u;
            goto label_1d7e98;
        }
    }
    ctx->pc = 0x1D7E90u;
    // 0x1d7e90: 0xc04da64  jal         func_136990
    ctx->pc = 0x1D7E90u;
    SET_GPR_U32(ctx, 31, 0x1D7E98u);
    ctx->pc = 0x1D7E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E90u;
            // 0x1d7e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E98u; }
        if (ctx->pc != 0x1D7E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E98u; }
        if (ctx->pc != 0x1D7E98u) { return; }
    }
    ctx->pc = 0x1D7E98u;
label_1d7e98:
    // 0x1d7e98: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1d7e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1d7e9c: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1d7e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1d7ea0: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x1d7ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d7ea4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d7ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d7ea8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1d7ea8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7eac: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1d7eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1d7eb0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1d7eb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d7eb4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1d7eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1d7eb8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1d7eb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d7ebc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1d7ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1d7ec0: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1d7ec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1d7ec4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1d7ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_1d7ec8:
    // 0x1d7ec8: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1d7ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1d7ecc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1d7eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1d7ed0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7ED0u;
    {
        const bool branch_taken_0x1d7ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7ed0) {
            ctx->pc = 0x1D7ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7ED0u;
            // 0x1d7ed4: 0xda220220  lqc2        $vf2, 0x220($s1) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 544)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7EE8u;
            goto label_1d7ee8;
        }
    }
    ctx->pc = 0x1D7ED8u;
    // 0x1d7ed8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1d7ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1d7edc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D7EDCu;
    {
        const bool branch_taken_0x1d7edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7edc) {
            ctx->pc = 0x1D7F68u;
            goto label_1d7f68;
        }
    }
    ctx->pc = 0x1D7EE4u;
    // 0x1d7ee4: 0xda220220  lqc2        $vf2, 0x220($s1)
    ctx->pc = 0x1d7ee4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 544)));
label_1d7ee8:
    // 0x1d7ee8: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1d7ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d7eec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d7ef0: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1d7ef0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d7ef4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1d7ef4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1d7ef8: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x1d7ef8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x1d7efc: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x1d7efcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d7f00: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x1d7f00u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x1d7f04: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1d7f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d7f08: 0x4bc208ae  vopmsub.xyz $vf2, $vf1, $vf2
    ctx->pc = 0x1d7f08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1d7f0c: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1d7f0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d7f10: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1d7f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d7f14: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d7f18: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d7f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7f1c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1d7f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1d7f20: 0x78630050  lq          $v1, 0x50($v1)
    ctx->pc = 0x1d7f20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1d7f24: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1d7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1d7f28: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1d7f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d7f2c: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x1d7f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x1d7f30: 0x40f809  jalr        $v0
    ctx->pc = 0x1D7F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D7F38u);
        ctx->pc = 0x1D7F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7F30u;
            // 0x1d7f34: 0xfba400d0  sqc2        $vf4, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D7F38u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7E98u: goto label_1d7e98;
            case 0x1D7EC8u: goto label_1d7ec8;
            case 0x1D7EE8u: goto label_1d7ee8;
            case 0x1D7F68u: goto label_1d7f68;
            case 0x1D7FA8u: goto label_1d7fa8;
            case 0x1D7FBCu: goto label_1d7fbc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F38u; }
            if (ctx->pc != 0x1D7F38u) { return; }
        }
        }
    }
    ctx->pc = 0x1D7F38u;
    // 0x1d7f38: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1d7f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1d7f3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d7f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7f40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d7f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d7f44: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d7f44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d7f48: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1d7f48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1d7f4c: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1d7f4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d7f50: 0x4a812100  vaddx.y     $vf4, $vf4, $vf1x
    ctx->pc = 0x1d7f50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1d7f54: 0xdba200c0  lqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x1d7f54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d7f58: 0x4be41068  vadd.xyzw   $vf1, $vf2, $vf4
    ctx->pc = 0x1d7f58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d7f5c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D7F5Cu;
    {
        const bool branch_taken_0x1d7f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7F5Cu;
            // 0x1d7f60: 0xfba10030  sqc2        $vf1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f5c) {
            ctx->pc = 0x1D7FA8u;
            goto label_1d7fa8;
        }
    }
    ctx->pc = 0x1D7F64u;
    // 0x1d7f64: 0x0  nop
    ctx->pc = 0x1d7f64u;
    // NOP
label_1d7f68:
    // 0x1d7f68: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1d7f68u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1d7f6c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d7f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d7f70: 0x4be20b3d  vmr32.xyzw  $vf2, $vf1
    ctx->pc = 0x1d7f70u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1d7f74: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1d7f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d7f78: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x1d7f78u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1d7f7c: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1d7f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d7f80: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x1d7f80u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1d7f84: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1d7f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1d7f88: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1d7f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1d7f8c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1d7f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d7f90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7f94: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1d7f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d7f98: 0x78420050  lq          $v0, 0x50($v0)
    ctx->pc = 0x1d7f98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1d7f9c: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x1d7f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1d7fa0: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1d7fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1d7fa4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1d7fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1d7fa8:
    // 0x1d7fa8: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x1d7fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x1d7fac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d7facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fb0: 0xc082926  jal         func_20A498
    ctx->pc = 0x1D7FB0u;
    SET_GPR_U32(ctx, 31, 0x1D7FB8u);
    ctx->pc = 0x1D7FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7FB0u;
            // 0x1d7fb4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A498u;
    if (runtime->hasFunction(0x20A498u)) {
        auto targetFn = runtime->lookupFunction(0x20A498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7FB8u; }
        if (ctx->pc != 0x1D7FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A498_0x20a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7FB8u; }
        if (ctx->pc != 0x1D7FB8u) { return; }
    }
    ctx->pc = 0x1D7FB8u;
    // 0x1d7fb8: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1d7fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1d7fbc:
    // 0x1d7fbc: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1d7fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d7fc0: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1d7fc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d7fc4: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1d7fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d7fc8: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1d7fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d7fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7FCCu;
            // 0x1d7fd0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7E98u: goto label_1d7e98;
            case 0x1D7EC8u: goto label_1d7ec8;
            case 0x1D7EE8u: goto label_1d7ee8;
            case 0x1D7F68u: goto label_1d7f68;
            case 0x1D7FA8u: goto label_1d7fa8;
            case 0x1D7FBCu: goto label_1d7fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D7FD4u;
    // 0x1d7fd4: 0x0  nop
    ctx->pc = 0x1d7fd4u;
    // NOP
}
