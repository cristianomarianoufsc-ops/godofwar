#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00190F20
// Address: 0x190f20 - 0x191020
void sub_00190F20_0x190f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190F20_0x190f20");
#endif

    ctx->pc = 0x190f20u;

    // 0x190f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190f24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x190f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x190f28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x190f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190f2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x190f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x190f30: 0xc063ef2  jal         func_18FBC8
    ctx->pc = 0x190F30u;
    SET_GPR_U32(ctx, 31, 0x190F38u);
    ctx->pc = 0x190F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190F30u;
            // 0x190f34: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18FBC8u;
    if (runtime->hasFunction(0x18FBC8u)) {
        auto targetFn = runtime->lookupFunction(0x18FBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F38u; }
        if (ctx->pc != 0x190F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FBC8_0x18fbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F38u; }
        if (ctx->pc != 0x190F38u) { return; }
    }
    ctx->pc = 0x190F38u;
    // 0x190f38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x190f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190f3c: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x190f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x190f40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190f44: 0xa4c2005e  sh          $v0, 0x5E($a2)
    ctx->pc = 0x190f44u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x190f48: 0xa4c0005c  sh          $zero, 0x5C($a2)
    ctx->pc = 0x190f48u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 92), (uint16_t)GPR_U32(ctx, 0));
    // 0x190f4c: 0x10c0002d  beqz        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x190F4Cu;
    {
        const bool branch_taken_0x190f4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190F4Cu;
            // 0x190f50: 0xacc0002c  sw          $zero, 0x2C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f4c) {
            ctx->pc = 0x191004u;
            goto label_191004;
        }
    }
    ctx->pc = 0x190F54u;
    // 0x190f54: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x190f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x190f58: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x190f58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x190f5c: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x190f5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x190f60: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x190f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190f64: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x190f64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x190f68: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x190f68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x190f6c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x190f6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190f70: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x190f70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190f74: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x190f74u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x190f78: 0x4a0003bf  vwaitq
    ctx->pc = 0x190f78u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x190f7c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x190f7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x190f80: 0x4a0002ff  vnop
    ctx->pc = 0x190f80u;
    // NOP operation, no action needed for VU0
    // 0x190f84: 0x4a0002ff  vnop
    ctx->pc = 0x190f84u;
    // NOP operation, no action needed for VU0
    // 0x190f88: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x190f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x190f8c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x190f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x190f90: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x190f90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x190f94: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x190f94u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x190f98: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x190f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x190f9c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x190f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x190fa0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x190fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x190fa4: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x190fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x190fa8: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x190fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x190fac: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x190facu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x190fb0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x190fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190fb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x190fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190fb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190fbc: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x190FBCu;
    {
        const bool branch_taken_0x190fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x190FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190FBCu;
            // 0x190fc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fbc) {
            ctx->pc = 0x190FC8u;
            goto label_190fc8;
        }
    }
    ctx->pc = 0x190FC4u;
    // 0x190fc4: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x190fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_190fc8:
    // 0x190fc8: 0x94c2005c  lhu         $v0, 0x5C($a2)
    ctx->pc = 0x190fc8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x190fcc: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x190fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x190fd0: 0x94c4005c  lhu         $a0, 0x5C($a2)
    ctx->pc = 0x190fd0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x190fd4: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x190fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
    // 0x190fd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x190fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x190fdc: 0x24a5ffe8  addiu       $a1, $a1, -0x18
    ctx->pc = 0x190fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967272));
    // 0x190fe0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x190fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x190fe4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x190fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x190fe8: 0x24630938  addiu       $v1, $v1, 0x938
    ctx->pc = 0x190fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2360));
    // 0x190fec: 0xac470034  sw          $a3, 0x34($v0)
    ctx->pc = 0x190fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 7));
    // 0x190ff0: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x190ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x190ff4: 0xa4c4005c  sh          $a0, 0x5C($a2)
    ctx->pc = 0x190ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x190ff8: 0xae06004c  sw          $a2, 0x4C($s0)
    ctx->pc = 0x190ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 6));
    // 0x190ffc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x190FFCu;
    {
        const bool branch_taken_0x190ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190FFCu;
            // 0x191000: 0xae050030  sw          $a1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ffc) {
            ctx->pc = 0x191010u;
            goto label_191010;
        }
    }
    ctx->pc = 0x191004u;
label_191004:
    // 0x191004: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x191004u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x191008: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x191008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x19100c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x19100cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_191010:
    // 0x191010: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x191010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191014: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x191014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191018: 0x3e00008  jr          $ra
    ctx->pc = 0x191018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19101Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191018u;
            // 0x19101c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190FC8u: goto label_190fc8;
            case 0x191004u: goto label_191004;
            case 0x191010u: goto label_191010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191020u;
}
