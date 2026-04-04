#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7D28
// Address: 0x1c7d28 - 0x1c83c8
void sub_001C7D28_0x1c7d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7D28_0x1c7d28");
#endif

    ctx->pc = 0x1c7d28u;

    // 0x1c7d28: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c7d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c7d2c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c7d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c7d30: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c7d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1c7d34: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1c7d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1c7d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d3c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1c7d3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1c7d40: 0x70078ca9  por         $s1, $zero, $a3
    ctx->pc = 0x1c7d40u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x1c7d44: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c7d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1c7d48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c7d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c7d4c: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1c7d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c7d50: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c7d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c7d54: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x1c7d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x1c7d58: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x1c7d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x1c7d5c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1c7d5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1c7d60: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1c7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1c7d64: 0x40f809  jalr        $v0
    ctx->pc = 0x1C7D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C7D6Cu);
        ctx->pc = 0x1C7D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D64u;
            // 0x1c7d68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C7D6Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7E70u: goto label_1c7e70;
            case 0x1C7EC0u: goto label_1c7ec0;
            case 0x1C7EC4u: goto label_1c7ec4;
            case 0x1C7EF8u: goto label_1c7ef8;
            case 0x1C7F58u: goto label_1c7f58;
            case 0x1C7F5Cu: goto label_1c7f5c;
            case 0x1C7F68u: goto label_1c7f68;
            case 0x1C7FD0u: goto label_1c7fd0;
            case 0x1C8028u: goto label_1c8028;
            case 0x1C8040u: goto label_1c8040;
            case 0x1C8070u: goto label_1c8070;
            case 0x1C8090u: goto label_1c8090;
            case 0x1C80A8u: goto label_1c80a8;
            case 0x1C8100u: goto label_1c8100;
            case 0x1C8108u: goto label_1c8108;
            case 0x1C8128u: goto label_1c8128;
            case 0x1C8140u: goto label_1c8140;
            case 0x1C8200u: goto label_1c8200;
            case 0x1C8228u: goto label_1c8228;
            case 0x1C8278u: goto label_1c8278;
            case 0x1C82A0u: goto label_1c82a0;
            case 0x1C82A8u: goto label_1c82a8;
            case 0x1C8308u: goto label_1c8308;
            case 0x1C830Cu: goto label_1c830c;
            case 0x1C8380u: goto label_1c8380;
            case 0x1C839Cu: goto label_1c839c;
            case 0x1C83ACu: goto label_1c83ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C7D6Cu; }
            if (ctx->pc != 0x1C7D6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C7D6Cu;
    // 0x1c7d6c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c7d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c7d70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c7d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7d74: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1c7d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c7d78: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c7d78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c7d7c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1c7d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1c7d80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c7d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c7d84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c7d88: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c7d88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c7d8c: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x1c7d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7d90: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c7d90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1c7d94: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c7d94u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7d98: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1c7d98u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c7d9c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1c7d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c7da0: 0x46002086  mov.s       $f2, $f4
    ctx->pc = 0x1c7da0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[4]);
    // 0x1c7da4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7da4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c7da8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1c7da8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c7dac: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c7dacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7db0: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c7db0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7db4: 0x26050260  addiu       $a1, $s0, 0x260
    ctx->pc = 0x1c7db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x1c7db8: 0x4be40b3c  vmove.xyzw  $vf4, $vf1
    ctx->pc = 0x1c7db8u;
    ctx->vu0_vf[4] = ctx->vu0_vf[1];
    // 0x1c7dbc: 0x4a820100  vaddx.y     $vf4, $vf0, $vf2x
    ctx->pc = 0x1c7dbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c7dc0: 0xfa040260  sqc2        $vf4, 0x260($s0)
    ctx->pc = 0x1c7dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c7dc4: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x1c7dc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c7dc8: 0xda420020  lqc2        $vf2, 0x20($s2)
    ctx->pc = 0x1c7dc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1c7dcc: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c7dccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7dd0: 0x4be208aa  vmul.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1c7dd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c7dd4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c7dd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7dd8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c7dd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7ddc: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x1c7ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c7de0: 0x4b010044  vsubx.x     $vf1, $vf0, $vf1x
    ctx->pc = 0x1c7de0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7de4: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1c7de4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7de8: 0x4b02085b  vmulw.x     $vf1, $vf1, $vf2w
    ctx->pc = 0x1c7de8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7dec: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1c7decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1c7df0: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1c7df0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7df4: 0x44863000  mtc1        $a2, $f6
    ctx->pc = 0x1c7df4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1c7df8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C7DF8u;
    {
        const bool branch_taken_0x1c7df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DF8u;
            // 0x1c7dfc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7df8) {
            ctx->pc = 0x1C7E70u;
            goto label_1c7e70;
        }
    }
    ctx->pc = 0x1C7E00u;
    // 0x1c7e00: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c7e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c7e04: 0x14400108  bnez        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x1C7E04u;
    {
        const bool branch_taken_0x1c7e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e04) {
            ctx->pc = 0x1C8228u;
            goto label_1c8228;
        }
    }
    ctx->pc = 0x1C7E0Cu;
    // 0x1c7e0c: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c7e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c7e10: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c7e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c7e14: 0x14400104  bnez        $v0, . + 4 + (0x104 << 2)
    ctx->pc = 0x1C7E14u;
    {
        const bool branch_taken_0x1c7e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E14u;
            // 0x1c7e18: 0xdba10010  lqc2        $vf1, 0x10($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e14) {
            ctx->pc = 0x1C8228u;
            goto label_1c8228;
        }
    }
    ctx->pc = 0x1C7E1Cu;
    // 0x1c7e1c: 0xda020050  lqc2        $vf2, 0x50($s0)
    ctx->pc = 0x1c7e1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1c7e20: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1c7e20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c7e24: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c7e24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7e28: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c7e28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7e2c: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c7e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c7e30: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1c7e30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7e34: 0x4b02085b  vmulw.x     $vf1, $vf1, $vf2w
    ctx->pc = 0x1c7e34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7e38: 0x3c01b8d1  lui         $at, 0xB8D1
    ctx->pc = 0x1c7e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47313 << 16));
    // 0x1c7e3c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1c7e3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1c7e40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c7e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7e44: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c7e44u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7e48: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c7e4c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1c7e4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c7e50: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c7e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c7e54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c7e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7e58: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1c7e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7e5c: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1c7e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7e60: 0x450100a7  bc1t        . + 4 + (0xA7 << 2)
    ctx->pc = 0x1C7E60u;
    {
        const bool branch_taken_0x1c7e60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E60u;
            // 0x1c7e64: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e60) {
            ctx->pc = 0x1C8100u;
            goto label_1c8100;
        }
    }
    ctx->pc = 0x1C7E68u;
    // 0x1c7e68: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1C7E68u;
    {
        const bool branch_taken_0x1c7e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e68) {
            ctx->pc = 0x1C8108u;
            goto label_1c8108;
        }
    }
    ctx->pc = 0x1C7E70u;
label_1c7e70:
    // 0x1c7e70: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c7e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c7e74: 0x5040008c  beql        $v0, $zero, . + 4 + (0x8C << 2)
    ctx->pc = 0x1C7E74u;
    {
        const bool branch_taken_0x1c7e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e74) {
            ctx->pc = 0x1C7E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E74u;
            // 0x1c7e78: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C80A8u;
            goto label_1c80a8;
        }
    }
    ctx->pc = 0x1C7E7Cu;
    // 0x1c7e7c: 0x4810010  bgez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C7E7Cu;
    {
        const bool branch_taken_0x1c7e7c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C7E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E7Cu;
            // 0x1c7e80: 0x460030c6  mov.s       $f3, $f6 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e7c) {
            ctx->pc = 0x1C7EC0u;
            goto label_1c7ec0;
        }
    }
    ctx->pc = 0x1C7E84u;
    // 0x1c7e84: 0x8e030238  lw          $v1, 0x238($s0)
    ctx->pc = 0x1c7e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x1c7e88: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C7E88u;
    {
        const bool branch_taken_0x1c7e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E88u;
            // 0x1c7e8c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e88) {
            ctx->pc = 0x1C7EC0u;
            goto label_1c7ec0;
        }
    }
    ctx->pc = 0x1C7E90u;
    // 0x1c7e90: 0x8c425e70  lw          $v0, 0x5E70($v0)
    ctx->pc = 0x1c7e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24176)));
    // 0x1c7e94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c7e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c7e98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7e9c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1c7e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1c7ea0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7EA0u;
    {
        const bool branch_taken_0x1c7ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EA0u;
            // 0x1c7ea4: 0xdba20020  lqc2        $vf2, 0x20($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ea0) {
            ctx->pc = 0x1C7EC0u;
            goto label_1c7ec0;
        }
    }
    ctx->pc = 0x1C7EA8u;
    // 0x1c7ea8: 0x4a82105b  vmulw.y     $vf1, $vf2, $vf2w
    ctx->pc = 0x1c7ea8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7eac: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c7eacu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7eb0: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1c7eb0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c7eb4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c7eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c7eb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7EB8u;
    {
        const bool branch_taken_0x1c7eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EB8u;
            // 0x1c7ebc: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7eb8) {
            ctx->pc = 0x1C7EC4u;
            goto label_1c7ec4;
        }
    }
    ctx->pc = 0x1C7EC0u;
label_1c7ec0:
    // 0x1c7ec0: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1c7ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_1c7ec4:
    // 0x1c7ec4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1c7ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1c7ec8: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C7EC8u;
    {
        const bool branch_taken_0x1c7ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7ec8) {
            ctx->pc = 0x1C7ECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EC8u;
            // 0x1c7ecc: 0x8e0202d8  lw          $v0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7F5Cu;
            goto label_1c7f5c;
        }
    }
    ctx->pc = 0x1C7ED0u;
    // 0x1c7ed0: 0x8e030238  lw          $v1, 0x238($s0)
    ctx->pc = 0x1c7ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x1c7ed4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7ED4u;
    {
        const bool branch_taken_0x1c7ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7ED4u;
            // 0x1c7ed8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ed4) {
            ctx->pc = 0x1C7EF8u;
            goto label_1c7ef8;
        }
    }
    ctx->pc = 0x1C7EDCu;
    // 0x1c7edc: 0x8c425e70  lw          $v0, 0x5E70($v0)
    ctx->pc = 0x1c7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24176)));
    // 0x1c7ee0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c7ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c7ee4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7ee8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c7ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c7eec: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C7EECu;
    {
        const bool branch_taken_0x1c7eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7eec) {
            ctx->pc = 0x1C7EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EECu;
            // 0x1c7ef0: 0x8e0202d8  lw          $v0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7F5Cu;
            goto label_1c7f5c;
        }
    }
    ctx->pc = 0x1C7EF4u;
    // 0x1c7ef4: 0x0  nop
    ctx->pc = 0x1c7ef4u;
    // NOP
label_1c7ef8:
    // 0x1c7ef8: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c7efc: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1c7efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1c7f00: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C7F00u;
    {
        const bool branch_taken_0x1c7f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F00u;
            // 0x1c7f04: 0x8e020320  lw          $v0, 0x320($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7f00) {
            ctx->pc = 0x1C7F68u;
            goto label_1c7f68;
        }
    }
    ctx->pc = 0x1C7F08u;
    // 0x1c7f08: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c7f0c: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1c7f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7f10: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c7f10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c7f14: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1c7f14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7f18: 0x0  nop
    ctx->pc = 0x1c7f18u;
    // NOP
    // 0x1c7f1c: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x1C7F1Cu;
    {
        const bool branch_taken_0x1c7f1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7f1c) {
            ctx->pc = 0x1C7F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F1Cu;
            // 0x1c7f20: 0x8e0202d8  lw          $v0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7F5Cu;
            goto label_1c7f5c;
        }
    }
    ctx->pc = 0x1C7F24u;
    // 0x1c7f24: 0x3c01c180  lui         $at, 0xC180
    ctx->pc = 0x1c7f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49536 << 16));
    // 0x1c7f28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c7f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7f2c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1c7f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7f30: 0x0  nop
    ctx->pc = 0x1c7f30u;
    // NOP
    // 0x1c7f34: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7F34u;
    {
        const bool branch_taken_0x1c7f34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F34u;
            // 0x1c7f38: 0x34628000  ori         $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7f34) {
            ctx->pc = 0x1C7F58u;
            goto label_1c7f58;
        }
    }
    ctx->pc = 0x1C7F3Cu;
    // 0x1c7f3c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1c7f3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c7f40: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1c7f40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1c7f44: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c7f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1c7f48: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1c7f48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c7f4c: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c7f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7f50: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1c7f50u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7f54: 0x0  nop
    ctx->pc = 0x1c7f54u;
    // NOP
label_1c7f58:
    // 0x1c7f58: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_1c7f5c:
    // 0x1c7f5c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1c7f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1c7f60: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C7F60u;
    {
        const bool branch_taken_0x1c7f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F60u;
            // 0x1c7f64: 0x8e020320  lw          $v0, 0x320($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7f60) {
            ctx->pc = 0x1C8040u;
            goto label_1c8040;
        }
    }
    ctx->pc = 0x1C7F68u;
label_1c7f68:
    // 0x1c7f68: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c7f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c7f6c: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1c7f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7f70: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c7f70u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c7f74: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1c7f74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7f78: 0x0  nop
    ctx->pc = 0x1c7f78u;
    // NOP
    // 0x1c7f7c: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x1C7F7Cu;
    {
        const bool branch_taken_0x1c7f7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7f7c) {
            ctx->pc = 0x1C7F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F7Cu;
            // 0x1c7f80: 0xc4400134  lwc1        $f0, 0x134($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7FD0u;
            goto label_1c7fd0;
        }
    }
    ctx->pc = 0x1C7F84u;
    // 0x1c7f84: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c7f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c7f88: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c7f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c7f8c: 0xc4400130  lwc1        $f0, 0x130($v0)
    ctx->pc = 0x1c7f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7f90: 0xc441012c  lwc1        $f1, 0x12C($v0)
    ctx->pc = 0x1c7f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7f94: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1c7f94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1c7f98: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1c7f98u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1c7f9c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1c7f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c7fa0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c7fa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c7fa4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1c7fa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1c7fa8: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x1c7fa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1c7fac: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1c7facu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1c7fb0: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x1c7fb0u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x1c7fb4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c7fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c7fb8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1c7fb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1c7fbc: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c7fbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c7fc0: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c7fc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7fc4: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x1C7FC4u;
    {
        const bool branch_taken_0x1c7fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7FC4u;
            // 0x1c7fc8: 0xfa010260  sqc2        $vf1, 0x260($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7fc4) {
            ctx->pc = 0x1C8228u;
            goto label_1c8228;
        }
    }
    ctx->pc = 0x1C7FCCu;
    // 0x1c7fcc: 0x0  nop
    ctx->pc = 0x1c7fccu;
    // NOP
label_1c7fd0:
    // 0x1c7fd0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c7fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c7fd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c7fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c7fd8: 0xc441012c  lwc1        $f1, 0x12C($v0)
    ctx->pc = 0x1c7fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7fdc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c7fdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c7fe0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1c7fe0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1c7fe4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1c7fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c7fe8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c7fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c7fec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c7fecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c7ff0: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x1c7ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1c7ff4: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1c7ff4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1c7ff8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1c7ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7ffc: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x1c7ffcu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x1c8000: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c8000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c8004: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1c8004u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1c8008: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c800c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C800Cu;
    {
        const bool branch_taken_0x1c800c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c800c) {
            ctx->pc = 0x1C8028u;
            goto label_1c8028;
        }
    }
    ctx->pc = 0x1C8014u;
    // 0x1c8014: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c8014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c8018: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c8018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c801c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1c801cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1c8020: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c8020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c8024: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c8024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
label_1c8028:
    // 0x1c8028: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c8028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c802c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c802cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c8030: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c8030u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c8034: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c8034u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8038: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1C8038u;
    {
        const bool branch_taken_0x1c8038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C803Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8038u;
            // 0x1c803c: 0xfa010260  sqc2        $vf1, 0x260($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8038) {
            ctx->pc = 0x1C8228u;
            goto label_1c8228;
        }
    }
    ctx->pc = 0x1C8040u;
label_1c8040:
    // 0x1c8040: 0x3c01b8d1  lui         $at, 0xB8D1
    ctx->pc = 0x1c8040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47313 << 16));
    // 0x1c8044: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1c8044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1c8048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c804c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c804cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c8050: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1c8050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8054: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c8054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c8058: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c805c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1c805cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8060: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8060u;
    {
        const bool branch_taken_0x1c8060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8060u;
            // 0x1c8064: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8060) {
            ctx->pc = 0x1C8070u;
            goto label_1c8070;
        }
    }
    ctx->pc = 0x1C8068u;
    // 0x1c8068: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8068u;
    {
        const bool branch_taken_0x1c8068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C806Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8068u;
            // 0x1c806c: 0x46001047  neg.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8068) {
            ctx->pc = 0x1C8090u;
            goto label_1c8090;
        }
    }
    ctx->pc = 0x1C8070u;
label_1c8070:
    // 0x1c8070: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1c8070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1c8074: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1c8074u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1c8078: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c807c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c807cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8080: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1c8080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8084: 0x0  nop
    ctx->pc = 0x1c8084u;
    // NOP
    // 0x1c8088: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8088u;
    {
        const bool branch_taken_0x1c8088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8088) {
            ctx->pc = 0x1C808Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8088u;
            // 0x1c808c: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8090u;
            goto label_1c8090;
        }
    }
    ctx->pc = 0x1C8090u;
label_1c8090:
    // 0x1c8090: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1c8090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c8094: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1c8094u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1c8098: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c8098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c809c: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c809cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c80a0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1C80A0u;
    {
        const bool branch_taken_0x1c80a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C80A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C80A0u;
            // 0x1c80a4: 0xfa010260  sqc2        $vf1, 0x260($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80a0) {
            ctx->pc = 0x1C8228u;
            goto label_1c8228;
        }
    }
    ctx->pc = 0x1C80A8u;
label_1c80a8:
    // 0x1c80a8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c80a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c80ac: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C80ACu;
    {
        const bool branch_taken_0x1c80ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C80B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C80ACu;
            // 0x1c80b0: 0xdba10010  lqc2        $vf1, 0x10($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80ac) {
            ctx->pc = 0x1C8140u;
            goto label_1c8140;
        }
    }
    ctx->pc = 0x1C80B4u;
    // 0x1c80b4: 0xda020050  lqc2        $vf2, 0x50($s0)
    ctx->pc = 0x1c80b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1c80b8: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1c80b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c80bc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c80bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c80c0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c80c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c80c4: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c80c8: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1c80c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c80cc: 0x4b02085b  vmulw.x     $vf1, $vf1, $vf2w
    ctx->pc = 0x1c80ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c80d0: 0x3c01b8d1  lui         $at, 0xB8D1
    ctx->pc = 0x1c80d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47313 << 16));
    // 0x1c80d4: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1c80d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1c80d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c80d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c80dc: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c80dcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c80e0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c80e4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1c80e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c80e8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c80e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c80ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c80ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c80f0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1c80f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c80f4: 0xc4400168  lwc1        $f0, 0x168($v0)
    ctx->pc = 0x1c80f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c80f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C80F8u;
    {
        const bool branch_taken_0x1c80f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C80FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C80F8u;
            // 0x1c80fc: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80f8) {
            ctx->pc = 0x1C8108u;
            goto label_1c8108;
        }
    }
    ctx->pc = 0x1C8100u;
label_1c8100:
    // 0x1c8100: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8100u;
    {
        const bool branch_taken_0x1c8100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8100u;
            // 0x1c8104: 0x46001047  neg.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8100) {
            ctx->pc = 0x1C8128u;
            goto label_1c8128;
        }
    }
    ctx->pc = 0x1C8108u;
label_1c8108:
    // 0x1c8108: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1c8108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1c810c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1c810cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1c8110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8114: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c8114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8118: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1c8118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c811c: 0x0  nop
    ctx->pc = 0x1c811cu;
    // NOP
    // 0x1c8120: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8120u;
    {
        const bool branch_taken_0x1c8120 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8120) {
            ctx->pc = 0x1C8124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8120u;
            // 0x1c8124: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8128u;
            goto label_1c8128;
        }
    }
    ctx->pc = 0x1C8128u;
label_1c8128:
    // 0x1c8128: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1c8128u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c812c: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1c812cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1c8130: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1c8130u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c8134: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c8134u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8138: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1C8138u;
    {
        const bool branch_taken_0x1c8138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C813Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8138u;
            // 0x1c813c: 0xf8a10000  sqc2        $vf1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8138) {
            ctx->pc = 0x1C8228u;
            goto label_1c8228;
        }
    }
    ctx->pc = 0x1C8140u;
label_1c8140:
    // 0x1c8140: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1c8140u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c8144: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1c8144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c8148: 0xda020050  lqc2        $vf2, 0x50($s0)
    ctx->pc = 0x1c8148u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1c814c: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c814cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8150: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1c8150u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8154: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c8154u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8158: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c8158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c815c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c815cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8160: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1c8160u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8164: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c8164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c8168: 0x4b02085b  vmulw.x     $vf1, $vf1, $vf2w
    ctx->pc = 0x1c8168u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c816c: 0x8c64010c  lw          $a0, 0x10C($v1)
    ctx->pc = 0x1c816cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x1c8170: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1c8170u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1c8174: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x1c8174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8178: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1c8178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1c817c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c817cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c8180: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x1c8180u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8184: 0xc4650110  lwc1        $f5, 0x110($v1)
    ctx->pc = 0x1c8184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c8188: 0x4b0100c0  vaddx.x     $vf3, $vf0, $vf1x
    ctx->pc = 0x1c8188u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c818c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c818cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c8190: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c8190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c8194: 0x46053002  mul.s       $f0, $f6, $f5
    ctx->pc = 0x1c8194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x1c8198: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1c8198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c819c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1c819cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1c81a0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c81a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c81a4: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1c81a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1c81a8: 0x4a8100c0  vaddx.y     $vf3, $vf0, $vf1x
    ctx->pc = 0x1c81a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c81ac: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1c81acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c81b0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1c81b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c81b4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c81b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c81b8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c81b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c81bc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c81bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c81c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c81c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c81c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c81c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c81c8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c81c8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c81cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c81ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c81d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c81d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c81d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c81d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c81d8: 0x46000084  c1          0x84
    ctx->pc = 0x1c81d8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c81dc: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1c81dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c81e0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C81E0u;
    {
        const bool branch_taken_0x1c81e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c81e0) {
            ctx->pc = 0x1C8200u;
            goto label_1c8200;
        }
    }
    ctx->pc = 0x1C81E8u;
    // 0x1c81e8: 0xc4600108  lwc1        $f0, 0x108($v1)
    ctx->pc = 0x1c81e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c81ec: 0x46042842  mul.s       $f1, $f5, $f4
    ctx->pc = 0x1c81ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1c81f0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1c81f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1c81f4: 0x46001028  max.s       $f0, $f2, $f0
    ctx->pc = 0x1c81f4u;
    ctx->f[0] = std::max(ctx->f[2], ctx->f[0]);
    // 0x1c81f8: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1c81f8u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1c81fc: 0x460200c3  div.s       $f3, $f0, $f2
    ctx->pc = 0x1c81fcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[2];
label_1c8200:
    // 0x1c8200: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x1c8200u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c8204: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1c8204u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1c8208: 0x4b021858  vmulx.x     $vf1, $vf3, $vf2x
    ctx->pc = 0x1c8208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c820c: 0x4b010100  vaddx.x     $vf4, $vf0, $vf1x
    ctx->pc = 0x1c820cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c8210: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x1c8210u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x1c8214: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c8214u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8218: 0x4a821898  vmulx.y     $vf2, $vf3, $vf2x
    ctx->pc = 0x1c8218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c821c: 0x4a820041  vaddy.y     $vf1, $vf0, $vf2y
    ctx->pc = 0x1c821cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8220: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c8220u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8224: 0x0  nop
    ctx->pc = 0x1c8224u;
    // NOP
label_1c8228:
    // 0x1c8228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c822c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x1c822cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8230: 0x0  nop
    ctx->pc = 0x1c8230u;
    // NOP
    // 0x1c8234: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1C8234u;
    {
        const bool branch_taken_0x1c8234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8234u;
            // 0x1c8238: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8234) {
            ctx->pc = 0x1C8278u;
            goto label_1c8278;
        }
    }
    ctx->pc = 0x1C823Cu;
    // 0x1c823c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c823cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c8240: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c8240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c8244: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C8244u;
    {
        const bool branch_taken_0x1c8244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8244) {
            ctx->pc = 0x1C82A8u;
            goto label_1c82a8;
        }
    }
    ctx->pc = 0x1C824Cu;
    // 0x1c824c: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c824cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c8250: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c8250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c8254: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8258: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c8258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c825c: 0xc440011c  lwc1        $f0, 0x11C($v0)
    ctx->pc = 0x1c825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8260: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c8260u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c8264: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c8264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c8268: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c8268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c826c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c826cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c8270: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C8270u;
    {
        const bool branch_taken_0x1c8270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8270u;
            // 0x1c8274: 0xda010260  lqc2        $vf1, 0x260($s0) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8270) {
            ctx->pc = 0x1C82A0u;
            goto label_1c82a0;
        }
    }
    ctx->pc = 0x1C8278u;
label_1c8278:
    // 0x1c8278: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c8278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c827c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c827cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c8280: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8284: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c8284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c8288: 0xc440011c  lwc1        $f0, 0x11C($v0)
    ctx->pc = 0x1c8288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c828c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x1c828cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1c8290: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c8290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c8294: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c8294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c8298: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1c8298u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1c829c: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c829cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
label_1c82a0:
    // 0x1c82a0: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c82a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c82a4: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c82a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c82a8:
    // 0x1c82a8: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1c82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c82ac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c82acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c82b0: 0xda0100e0  lqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c82b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c82b4: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c82b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c82b8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1c82b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1c82bc: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c82c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c82c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c82c4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C82C4u;
    {
        const bool branch_taken_0x1c82c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C82C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82C4u;
            // 0x1c82c8: 0xfa0100e0  sqc2        $vf1, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82c4) {
            ctx->pc = 0x1C8308u;
            goto label_1c8308;
        }
    }
    ctx->pc = 0x1C82CCu;
    // 0x1c82cc: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1c82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1c82d0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1c82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1c82d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c82d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c82d8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C82D8u;
    {
        const bool branch_taken_0x1c82d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c82d8) {
            ctx->pc = 0x1C82DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82D8u;
            // 0x1c82dc: 0xda020050  lqc2        $vf2, 0x50($s0) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C830Cu;
            goto label_1c830c;
        }
    }
    ctx->pc = 0x1C82E0u;
    // 0x1c82e0: 0xc07a3ec  jal         func_1E8FB0
    ctx->pc = 0x1C82E0u;
    SET_GPR_U32(ctx, 31, 0x1C82E8u);
    ctx->pc = 0x1C82E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82E0u;
            // 0x1c82e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8FB0u;
    if (runtime->hasFunction(0x1E8FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E8FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C82E8u; }
        if (ctx->pc != 0x1C82E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8FB0_0x1e8fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C82E8u; }
        if (ctx->pc != 0x1C82E8u) { return; }
    }
    ctx->pc = 0x1C82E8u;
    // 0x1c82e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C82E8u;
    {
        const bool branch_taken_0x1c82e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82E8u;
            // 0x1c82ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82e8) {
            ctx->pc = 0x1C8308u;
            goto label_1c8308;
        }
    }
    ctx->pc = 0x1C82F0u;
    // 0x1c82f0: 0x70112ca9  por         $a1, $zero, $s1
    ctx->pc = 0x1c82f0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x1c82f4: 0xc0794f6  jal         func_1E53D8
    ctx->pc = 0x1C82F4u;
    SET_GPR_U32(ctx, 31, 0x1C82FCu);
    ctx->pc = 0x1C82F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82F4u;
            // 0x1c82f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E53D8u;
    if (runtime->hasFunction(0x1E53D8u)) {
        auto targetFn = runtime->lookupFunction(0x1E53D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C82FCu; }
        if (ctx->pc != 0x1C82FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e53d8_0x1e5428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C82FCu; }
        if (ctx->pc != 0x1C82FCu) { return; }
    }
    ctx->pc = 0x1C82FCu;
    // 0x1c82fc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1C82FCu;
    {
        const bool branch_taken_0x1c82fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82FCu;
            // 0x1c8300: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82fc) {
            ctx->pc = 0x1C83ACu;
            goto label_1c83ac;
        }
    }
    ctx->pc = 0x1C8304u;
    // 0x1c8304: 0x0  nop
    ctx->pc = 0x1c8304u;
    // NOP
label_1c8308:
    // 0x1c8308: 0xda020050  lqc2        $vf2, 0x50($s0)
    ctx->pc = 0x1c8308u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_1c830c:
    // 0x1c830c: 0xda030260  lqc2        $vf3, 0x260($s0)
    ctx->pc = 0x1c830cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c8310: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x1c8310u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8314: 0xda410010  lqc2        $vf1, 0x10($s2)
    ctx->pc = 0x1c8314u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c8318: 0x4be30859  vmuly.xyzw  $vf1, $vf1, $vf3y
    ctx->pc = 0x1c8318u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c831c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1c831cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8320: 0xfa0200e0  sqc2        $vf2, 0xE0($s0)
    ctx->pc = 0x1c8320u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c8324: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1c8324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1c8328: 0x70112ca9  por         $a1, $zero, $s1
    ctx->pc = 0x1c8328u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x1c832c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c832cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8330: 0xc44c002c  lwc1        $f12, 0x2C($v0)
    ctx->pc = 0x1c8330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c8334: 0xc0794f6  jal         func_1E53D8
    ctx->pc = 0x1C8334u;
    SET_GPR_U32(ctx, 31, 0x1C833Cu);
    ctx->pc = 0x1C8338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8334u;
            // 0x1c8338: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E53D8u;
    if (runtime->hasFunction(0x1E53D8u)) {
        auto targetFn = runtime->lookupFunction(0x1E53D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C833Cu; }
        if (ctx->pc != 0x1C833Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e53d8_0x1e5428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C833Cu; }
        if (ctx->pc != 0x1C833Cu) { return; }
    }
    ctx->pc = 0x1C833Cu;
    // 0x1c833c: 0x8e050174  lw          $a1, 0x174($s0)
    ctx->pc = 0x1c833cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c8340: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1c8340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1c8344: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1c8344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8348: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x1c8348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x1c834c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1c834cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c8350: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1c8350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1c8354: 0x70021ca9  por         $v1, $zero, $v0
    ctx->pc = 0x1c8354u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1c8358: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8358u;
    {
        const bool branch_taken_0x1c8358 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C835Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8358u;
            // 0x1c835c: 0xae040250  sw          $a0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8358) {
            ctx->pc = 0x1C8380u;
            goto label_1c8380;
        }
    }
    ctx->pc = 0x1C8360u;
    // 0x1c8360: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1c8360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1c8364: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c8364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c8368: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8368u;
    {
        const bool branch_taken_0x1c8368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C836Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8368u;
            // 0x1c836c: 0x7ba60010  lq          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8368) {
            ctx->pc = 0x1C8380u;
            goto label_1c8380;
        }
    }
    ctx->pc = 0x1C8370u;
    // 0x1c8370: 0x70032ca9  por         $a1, $zero, $v1
    ctx->pc = 0x1c8370u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1c8374: 0xc071b18  jal         func_1C6C60
    ctx->pc = 0x1C8374u;
    SET_GPR_U32(ctx, 31, 0x1C837Cu);
    ctx->pc = 0x1C8378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8374u;
            // 0x1c8378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6C60u;
    if (runtime->hasFunction(0x1C6C60u)) {
        auto targetFn = runtime->lookupFunction(0x1C6C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C837Cu; }
        if (ctx->pc != 0x1C837Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6C60_0x1c6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C837Cu; }
        if (ctx->pc != 0x1C837Cu) { return; }
    }
    ctx->pc = 0x1C837Cu;
    // 0x1c837c: 0x70021ca9  por         $v1, $zero, $v0
    ctx->pc = 0x1c837cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_1c8380:
    // 0x1c8380: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1c8380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1c8384: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1c8384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1c8388: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8388u;
    {
        const bool branch_taken_0x1c8388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C838Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8388u;
            // 0x1c838c: 0x70032ca9  por         $a1, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8388) {
            ctx->pc = 0x1C839Cu;
            goto label_1c839c;
        }
    }
    ctx->pc = 0x1C8390u;
    // 0x1c8390: 0xc0723fe  jal         func_1C8FF8
    ctx->pc = 0x1C8390u;
    SET_GPR_U32(ctx, 31, 0x1C8398u);
    ctx->pc = 0x1C8394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8390u;
            // 0x1c8394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8FF8u;
    if (runtime->hasFunction(0x1C8FF8u)) {
        auto targetFn = runtime->lookupFunction(0x1C8FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8398u; }
        if (ctx->pc != 0x1C8398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8FF8_0x1c8ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8398u; }
        if (ctx->pc != 0x1C8398u) { return; }
    }
    ctx->pc = 0x1C8398u;
    // 0x1c8398: 0x70021ca9  por         $v1, $zero, $v0
    ctx->pc = 0x1c8398u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_1c839c:
    // 0x1c839c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c839cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83a0: 0xc07a68e  jal         func_1E9A38
    ctx->pc = 0x1C83A0u;
    SET_GPR_U32(ctx, 31, 0x1C83A8u);
    ctx->pc = 0x1C83A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C83A0u;
            // 0x1c83a4: 0x70032ca9  por         $a1, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9A38u;
    if (runtime->hasFunction(0x1E9A38u)) {
        auto targetFn = runtime->lookupFunction(0x1E9A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83A8u; }
        if (ctx->pc != 0x1C83A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9A38_0x1e9a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83A8u; }
        if (ctx->pc != 0x1C83A8u) { return; }
    }
    ctx->pc = 0x1C83A8u;
    // 0x1c83a8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c83a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c83ac:
    // 0x1c83ac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1c83acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c83b0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c83b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c83b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c83b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c83b8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1c83b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c83bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C83BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C83C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C83BCu;
            // 0x1c83c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7E70u: goto label_1c7e70;
            case 0x1C7EC0u: goto label_1c7ec0;
            case 0x1C7EC4u: goto label_1c7ec4;
            case 0x1C7EF8u: goto label_1c7ef8;
            case 0x1C7F58u: goto label_1c7f58;
            case 0x1C7F5Cu: goto label_1c7f5c;
            case 0x1C7F68u: goto label_1c7f68;
            case 0x1C7FD0u: goto label_1c7fd0;
            case 0x1C8028u: goto label_1c8028;
            case 0x1C8040u: goto label_1c8040;
            case 0x1C8070u: goto label_1c8070;
            case 0x1C8090u: goto label_1c8090;
            case 0x1C80A8u: goto label_1c80a8;
            case 0x1C8100u: goto label_1c8100;
            case 0x1C8108u: goto label_1c8108;
            case 0x1C8128u: goto label_1c8128;
            case 0x1C8140u: goto label_1c8140;
            case 0x1C8200u: goto label_1c8200;
            case 0x1C8228u: goto label_1c8228;
            case 0x1C8278u: goto label_1c8278;
            case 0x1C82A0u: goto label_1c82a0;
            case 0x1C82A8u: goto label_1c82a8;
            case 0x1C8308u: goto label_1c8308;
            case 0x1C830Cu: goto label_1c830c;
            case 0x1C8380u: goto label_1c8380;
            case 0x1C839Cu: goto label_1c839c;
            case 0x1C83ACu: goto label_1c83ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C83C4u;
    // 0x1c83c4: 0x0  nop
    ctx->pc = 0x1c83c4u;
    // NOP
}
