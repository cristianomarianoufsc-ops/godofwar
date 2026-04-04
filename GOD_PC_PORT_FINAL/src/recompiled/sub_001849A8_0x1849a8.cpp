#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001849A8
// Address: 0x1849a8 - 0x184ed0
void sub_001849A8_0x1849a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001849A8_0x1849a8");
#endif

    ctx->pc = 0x1849a8u;

    // 0x1849a8: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x1849a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x1849ac: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x1849acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1849b0: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x1849b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x1849b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1849b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1849b8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1849b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1849bc: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1849bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1849c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1849c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1849c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1849c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1849c8: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x1849c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1849cc: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1849ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1849d0: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x1849d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x1849d4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1849d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1849d8: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x1849d8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x1849dc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1849dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1849e0: 0x4407b000  mfc1        $a3, $f22
    ctx->pc = 0x1849e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1849e4: 0x24a20002  addiu       $v0, $a1, 0x2
    ctx->pc = 0x1849e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1849e8: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x1849e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x1849ec: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1849ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1849f0: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x1849f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
    // 0x1849f4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1849f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1849f8: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x1849f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x1849fc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1849fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x184a00: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x184a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x184a04: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x184a04u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x184a08: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x184a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x184a0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x184A0Cu;
    {
        const bool branch_taken_0x184a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184A0Cu;
            // 0x184a10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184a0c) {
            ctx->pc = 0x184A30u;
            goto label_184a30;
        }
    }
    ctx->pc = 0x184A14u;
    // 0x184a14: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x184a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x184a18: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x184a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x184a1c: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x184a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
    // 0x184a20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x184a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x184a24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x184a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184a28: 0x400008  jr          $v0
    ctx->pc = 0x184A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184A30u: goto label_184a30;
            case 0x184A74u: goto label_184a74;
            case 0x184AE8u: goto label_184ae8;
            case 0x184B5Cu: goto label_184b5c;
            case 0x184C08u: goto label_184c08;
            case 0x184C7Cu: goto label_184c7c;
            case 0x184D24u: goto label_184d24;
            case 0x184DCCu: goto label_184dcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x184A30u;
label_184a30:
    // 0x184a30: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x184a30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184a34: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x184a34u;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x184a38: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x184a38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x184a3c: 0x4b0018c3  vaddw.x     $vf3, $vf3, $vf0w
    ctx->pc = 0x184a3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x184a40: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x184a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x184a44: 0x4be21b3d  vmr32.xyzw  $vf2, $vf3
    ctx->pc = 0x184a44u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x184a48: 0xfa020020  sqc2        $vf2, 0x20($s0)
    ctx->pc = 0x184a48u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x184a4c: 0x4be1133d  vmr32.xyzw  $vf1, $vf2
    ctx->pc = 0x184a4cu;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x184a50: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x184a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x184a54: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x184a54u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x184a58: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x184a58u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x184a5c: 0xfa030000  sqc2        $vf3, 0x0($s0)
    ctx->pc = 0x184a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x184a60: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x184a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x184a64: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x184a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x184a68: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x184a68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x184a6c: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x184A6Cu;
    {
        const bool branch_taken_0x184a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184A6Cu;
            // 0x184a70: 0xfba40040  sqc2        $vf4, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184a6c) {
            ctx->pc = 0x184EB0u;
            goto label_184eb0;
        }
    }
    ctx->pc = 0x184A74u;
label_184a74:
    // 0x184a74: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x184a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x184a78: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x184A78u;
    SET_GPR_U32(ctx, 31, 0x184A80u);
    ctx->pc = 0x184A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184A78u;
            // 0x184a7c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A80u; }
        if (ctx->pc != 0x184A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A80u; }
        if (ctx->pc != 0x184A80u) { return; }
    }
    ctx->pc = 0x184A80u;
    // 0x184a80: 0x460002c6  mov.s       $f11, $f0
    ctx->pc = 0x184a80u;
    ctx->f[11] = FPU_MOV_S(ctx->f[0]);
    // 0x184a84: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x184a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x184a88: 0x46005807  neg.s       $f0, $f11
    ctx->pc = 0x184a88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[11]);
    // 0x184a8c: 0x44085800  mfc1        $t0, $f11
    ctx->pc = 0x184a8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x184a90: 0x71023389  pcpyld      $a2, $t0, $v0
    ctx->pc = 0x184a90u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x184a94: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x184a94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x184a98: 0x24070000  addiu       $a3, $zero, 0x0
    ctx->pc = 0x184a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x184a9c: 0x24080000  addiu       $t0, $zero, 0x0
    ctx->pc = 0x184a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x184aa0: 0x70e82b89  pcpyld      $a1, $a3, $t0
    ctx->pc = 0x184aa0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x184aa4: 0x704a2389  pcpyld      $a0, $v0, $t2
    ctx->pc = 0x184aa4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x184aa8: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x184aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x184aac: 0x24070000  addiu       $a3, $zero, 0x0
    ctx->pc = 0x184aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x184ab0: 0x70671389  pcpyld      $v0, $v1, $a3
    ctx->pc = 0x184ab0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x184ab4: 0x704424c8  ppacw       $a0, $v0, $a0
    ctx->pc = 0x184ab4u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x184ab8: 0x24070000  addiu       $a3, $zero, 0x0
    ctx->pc = 0x184ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x184abc: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x184abcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x184ac0: 0x70e81b89  pcpyld      $v1, $a3, $t0
    ctx->pc = 0x184ac0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x184ac4: 0x70651cc8  ppacw       $v1, $v1, $a1
    ctx->pc = 0x184ac4u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x184ac8: 0x704614c8  ppacw       $v0, $v0, $a2
    ctx->pc = 0x184ac8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x184acc: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x184accu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    // 0x184ad0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x184ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x184ad4: 0x7e040010  sq          $a0, 0x10($s0)
    ctx->pc = 0x184ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 4));
    // 0x184ad8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x184ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x184adc: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x184adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x184ae0: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x184AE0u;
    {
        const bool branch_taken_0x184ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184AE0u;
            // 0x184ae4: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ae0) {
            ctx->pc = 0x184EB0u;
            goto label_184eb0;
        }
    }
    ctx->pc = 0x184AE8u;
label_184ae8:
    // 0x184ae8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184ae8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x184aec: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x184AECu;
    SET_GPR_U32(ctx, 31, 0x184AF4u);
    ctx->pc = 0x184AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184AECu;
            // 0x184af0: 0x27a401a4  addiu       $a0, $sp, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AF4u; }
        if (ctx->pc != 0x184AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AF4u; }
        if (ctx->pc != 0x184AF4u) { return; }
    }
    ctx->pc = 0x184AF4u;
    // 0x184af4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x184af4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x184af8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x184af8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184afc: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x184afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x184b00: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x184b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x184b04: 0x71633b89  pcpyld      $a3, $t3, $v1
    ctx->pc = 0x184b04u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x184b08: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x184b08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x184b0c: 0x71622b89  pcpyld      $a1, $t3, $v0
    ctx->pc = 0x184b0cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x184b10: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x184b10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x184b14: 0x24090000  addiu       $t1, $zero, 0x0
    ctx->pc = 0x184b14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x184b18: 0x71093389  pcpyld      $a2, $t0, $t1
    ctx->pc = 0x184b18u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x184b1c: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x184b1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x184b20: 0x71691b89  pcpyld      $v1, $t3, $t1
    ctx->pc = 0x184b20u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 9)));
    // 0x184b24: 0x71622389  pcpyld      $a0, $t3, $v0
    ctx->pc = 0x184b24u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x184b28: 0x70651cc8  ppacw       $v1, $v1, $a1
    ctx->pc = 0x184b28u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x184b2c: 0x24080000  addiu       $t0, $zero, 0x0
    ctx->pc = 0x184b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x184b30: 0x24090000  addiu       $t1, $zero, 0x0
    ctx->pc = 0x184b30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x184b34: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x184b34u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x184b38: 0x708724c8  ppacw       $a0, $a0, $a3
    ctx->pc = 0x184b38u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x184b3c: 0x704614c8  ppacw       $v0, $v0, $a2
    ctx->pc = 0x184b3cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x184b40: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x184b40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x184b44: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x184b44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x184b48: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x184b48u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x184b4c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x184b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x184b50: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x184b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x184b54: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x184B54u;
    {
        const bool branch_taken_0x184b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B54u;
            // 0x184b58: 0x7fa400a0  sq          $a0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b54) {
            ctx->pc = 0x184EB0u;
            goto label_184eb0;
        }
    }
    ctx->pc = 0x184B5Cu;
label_184b5c:
    // 0x184b5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184b5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x184b60: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x184B60u;
    SET_GPR_U32(ctx, 31, 0x184B68u);
    ctx->pc = 0x184B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184B60u;
            // 0x184b64: 0x27a401a4  addiu       $a0, $sp, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B68u; }
        if (ctx->pc != 0x184B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B68u; }
        if (ctx->pc != 0x184B68u) { return; }
    }
    ctx->pc = 0x184B68u;
    // 0x184b68: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x184b68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x184b6c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x184b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x184b70: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x184B70u;
    SET_GPR_U32(ctx, 31, 0x184B78u);
    ctx->pc = 0x184B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184B70u;
            // 0x184b74: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B78u; }
        if (ctx->pc != 0x184B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B78u; }
        if (ctx->pc != 0x184B78u) { return; }
    }
    ctx->pc = 0x184B78u;
    // 0x184b78: 0xc7a401a0  lwc1        $f4, 0x1A0($sp)
    ctx->pc = 0x184b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x184b7c: 0x460002c6  mov.s       $f11, $f0
    ctx->pc = 0x184b7cu;
    ctx->f[11] = FPU_MOV_S(ctx->f[0]);
    // 0x184b80: 0x460ba082  mul.s       $f2, $f20, $f11
    ctx->pc = 0x184b80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[11]);
    // 0x184b84: 0xc7a501a4  lwc1        $f5, 0x1A4($sp)
    ctx->pc = 0x184b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x184b88: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x184b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x184b8c: 0x460b28c2  mul.s       $f3, $f5, $f11
    ctx->pc = 0x184b8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
    // 0x184b90: 0x46042842  mul.s       $f1, $f5, $f4
    ctx->pc = 0x184b90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x184b94: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x184b94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x184b98: 0x46005807  neg.s       $f0, $f11
    ctx->pc = 0x184b98u;
    ctx->f[0] = FPU_NEG_S(ctx->f[11]);
    // 0x184b9c: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x184b9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x184ba0: 0x714b3b89  pcpyld      $a3, $t2, $t3
    ctx->pc = 0x184ba0u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x184ba4: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x184ba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x184ba8: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x184ba8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x184bac: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x184bacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x184bb0: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x184bb0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x184bb4: 0x70662b89  pcpyld      $a1, $v1, $a2
    ctx->pc = 0x184bb4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x184bb8: 0x440a2000  mfc1        $t2, $f4
    ctx->pc = 0x184bb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x184bbc: 0x714b3389  pcpyld      $a2, $t2, $t3
    ctx->pc = 0x184bbcu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x184bc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184bc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184bc4: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x184bc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x184bc8: 0x71091b89  pcpyld      $v1, $t0, $t1
    ctx->pc = 0x184bc8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x184bcc: 0x440a2800  mfc1        $t2, $f5
    ctx->pc = 0x184bccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x184bd0: 0x710a2389  pcpyld      $a0, $t0, $t2
    ctx->pc = 0x184bd0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x184bd4: 0x70651cc8  ppacw       $v1, $v1, $a1
    ctx->pc = 0x184bd4u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x184bd8: 0x24080000  addiu       $t0, $zero, 0x0
    ctx->pc = 0x184bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x184bdc: 0x24090000  addiu       $t1, $zero, 0x0
    ctx->pc = 0x184bdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x184be0: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x184be0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x184be4: 0x708724c8  ppacw       $a0, $a0, $a3
    ctx->pc = 0x184be4u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x184be8: 0x704614c8  ppacw       $v0, $v0, $a2
    ctx->pc = 0x184be8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x184bec: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x184becu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x184bf0: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x184bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x184bf4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x184bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x184bf8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x184bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x184bfc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x184bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x184c00: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x184C00u;
    {
        const bool branch_taken_0x184c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184C00u;
            // 0x184c04: 0x7fa400d0  sq          $a0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c00) {
            ctx->pc = 0x184EB0u;
            goto label_184eb0;
        }
    }
    ctx->pc = 0x184C08u;
label_184c08:
    // 0x184c08: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x184C08u;
    SET_GPR_U32(ctx, 31, 0x184C10u);
    ctx->pc = 0x184C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184C08u;
            // 0x184c0c: 0x27a401a8  addiu       $a0, $sp, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184C10u; }
        if (ctx->pc != 0x184C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184C10u; }
        if (ctx->pc != 0x184C10u) { return; }
    }
    ctx->pc = 0x184C10u;
    // 0x184c10: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x184c10u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x184c14: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x184c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x184c18: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x184c18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x184c1c: 0x70683389  pcpyld      $a2, $v1, $t0
    ctx->pc = 0x184c1cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x184c20: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x184c20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x184c24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x184c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c28: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x184c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x184c2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x184c2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c30: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x184c30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x184c34: 0x71643b89  pcpyld      $a3, $t3, $a0
    ctx->pc = 0x184c34u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 4)));
    // 0x184c38: 0x70442b89  pcpyld      $a1, $v0, $a0
    ctx->pc = 0x184c38u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x184c3c: 0x440ba800  mfc1        $t3, $f21
    ctx->pc = 0x184c3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x184c40: 0x70822389  pcpyld      $a0, $a0, $v0
    ctx->pc = 0x184c40u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x184c44: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x184c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x184c48: 0x24080000  addiu       $t0, $zero, 0x0
    ctx->pc = 0x184c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x184c4c: 0x70681389  pcpyld      $v0, $v1, $t0
    ctx->pc = 0x184c4cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x184c50: 0x708724c8  ppacw       $a0, $a0, $a3
    ctx->pc = 0x184c50u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x184c54: 0x714b1b89  pcpyld      $v1, $t2, $t3
    ctx->pc = 0x184c54u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x184c58: 0x704614c8  ppacw       $v0, $v0, $a2
    ctx->pc = 0x184c58u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x184c5c: 0x70651cc8  ppacw       $v1, $v1, $a1
    ctx->pc = 0x184c5cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x184c60: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x184c60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x184c64: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x184c64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x184c68: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x184c68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x184c6c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x184c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x184c70: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x184c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x184c74: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x184C74u;
    {
        const bool branch_taken_0x184c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184C74u;
            // 0x184c78: 0x7fa40100  sq          $a0, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c74) {
            ctx->pc = 0x184EB0u;
            goto label_184eb0;
        }
    }
    ctx->pc = 0x184C7Cu;
label_184c7c:
    // 0x184c7c: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x184C7Cu;
    SET_GPR_U32(ctx, 31, 0x184C84u);
    ctx->pc = 0x184C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184C7Cu;
            // 0x184c80: 0x27a401a8  addiu       $a0, $sp, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184C84u; }
        if (ctx->pc != 0x184C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184C84u; }
        if (ctx->pc != 0x184C84u) { return; }
    }
    ctx->pc = 0x184C84u;
    // 0x184c84: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x184c84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x184c88: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x184c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x184c8c: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x184C8Cu;
    SET_GPR_U32(ctx, 31, 0x184C94u);
    ctx->pc = 0x184C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184C8Cu;
            // 0x184c90: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184C94u; }
        if (ctx->pc != 0x184C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184C94u; }
        if (ctx->pc != 0x184C94u) { return; }
    }
    ctx->pc = 0x184C94u;
    // 0x184c94: 0xc7a401a8  lwc1        $f4, 0x1A8($sp)
    ctx->pc = 0x184c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x184c98: 0x4600a887  neg.s       $f2, $f21
    ctx->pc = 0x184c98u;
    ctx->f[2] = FPU_NEG_S(ctx->f[21]);
    // 0x184c9c: 0xc7a101a0  lwc1        $f1, 0x1A0($sp)
    ctx->pc = 0x184c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184ca0: 0x460002c6  mov.s       $f11, $f0
    ctx->pc = 0x184ca0u;
    ctx->f[11] = FPU_MOV_S(ctx->f[0]);
    // 0x184ca4: 0x460020c7  neg.s       $f3, $f4
    ctx->pc = 0x184ca4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[4]);
    // 0x184ca8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x184ca8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184cac: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x184cacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x184cb0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x184cb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x184cb4: 0x44045800  mfc1        $a0, $f11
    ctx->pc = 0x184cb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x184cb8: 0x460ba802  mul.s       $f0, $f21, $f11
    ctx->pc = 0x184cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[11]);
    // 0x184cbc: 0x70861389  pcpyld      $v0, $a0, $a2
    ctx->pc = 0x184cbcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x184cc0: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x184cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x184cc4: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x184cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x184cc8: 0x70652389  pcpyld      $a0, $v1, $a1
    ctx->pc = 0x184cc8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x184ccc: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x184cccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x184cd0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x184cd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x184cd4: 0x708224c8  ppacw       $a0, $a0, $v0
    ctx->pc = 0x184cd4u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x184cd8: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x184cd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x184cdc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x184cdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x184ce0: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x184ce0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x184ce4: 0x440a2000  mfc1        $t2, $f4
    ctx->pc = 0x184ce4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x184ce8: 0x712a1b89  pcpyld      $v1, $t1, $t2
    ctx->pc = 0x184ce8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x184cec: 0x440b0800  mfc1        $t3, $f1
    ctx->pc = 0x184cecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x184cf0: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x184cf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x184cf4: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x184cf4u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x184cf8: 0x71682b89  pcpyld      $a1, $t3, $t0
    ctx->pc = 0x184cf8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 8)));
    // 0x184cfc: 0x440aa800  mfc1        $t2, $f21
    ctx->pc = 0x184cfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x184d00: 0x712a1389  pcpyld      $v0, $t1, $t2
    ctx->pc = 0x184d00u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x184d04: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x184d04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    // 0x184d08: 0x704514c8  ppacw       $v0, $v0, $a1
    ctx->pc = 0x184d08u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x184d0c: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x184d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
    // 0x184d10: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x184d10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x184d14: 0x7fa40110  sq          $a0, 0x110($sp)
    ctx->pc = 0x184d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 4));
    // 0x184d18: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x184d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x184d1c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x184D1Cu;
    {
        const bool branch_taken_0x184d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184D1Cu;
            // 0x184d20: 0x7fa30130  sq          $v1, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d1c) {
            ctx->pc = 0x184EB0u;
            goto label_184eb0;
        }
    }
    ctx->pc = 0x184D24u;
label_184d24:
    // 0x184d24: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x184D24u;
    SET_GPR_U32(ctx, 31, 0x184D2Cu);
    ctx->pc = 0x184D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184D24u;
            // 0x184d28: 0x27a401a8  addiu       $a0, $sp, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D2Cu; }
        if (ctx->pc != 0x184D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D2Cu; }
        if (ctx->pc != 0x184D2Cu) { return; }
    }
    ctx->pc = 0x184D2Cu;
    // 0x184d2c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x184d2cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x184d30: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184d30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x184d34: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x184D34u;
    SET_GPR_U32(ctx, 31, 0x184D3Cu);
    ctx->pc = 0x184D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184D34u;
            // 0x184d38: 0x27a401a4  addiu       $a0, $sp, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D3Cu; }
        if (ctx->pc != 0x184D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D3Cu; }
        if (ctx->pc != 0x184D3Cu) { return; }
    }
    ctx->pc = 0x184D3Cu;
    // 0x184d3c: 0xc7a401a8  lwc1        $f4, 0x1A8($sp)
    ctx->pc = 0x184d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x184d40: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x184d40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x184d44: 0xc7a201a4  lwc1        $f2, 0x1A4($sp)
    ctx->pc = 0x184d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x184d48: 0x4614a842  mul.s       $f1, $f21, $f20
    ctx->pc = 0x184d48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x184d4c: 0x46142002  mul.s       $f0, $f4, $f20
    ctx->pc = 0x184d4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x184d50: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x184d50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d54: 0x4600a8c7  neg.s       $f3, $f21
    ctx->pc = 0x184d54u;
    ctx->f[3] = FPU_NEG_S(ctx->f[21]);
    // 0x184d58: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x184d58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x184d5c: 0x71623389  pcpyld      $a2, $t3, $v0
    ctx->pc = 0x184d5cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x184d60: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x184d60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x184d64: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x184d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x184d68: 0x440b0800  mfc1        $t3, $f1
    ctx->pc = 0x184d68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x184d6c: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x184d6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x184d70: 0x70853b89  pcpyld      $a3, $a0, $a1
    ctx->pc = 0x184d70u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x184d74: 0x440a2000  mfc1        $t2, $f4
    ctx->pc = 0x184d74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x184d78: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x184d78u;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
    // 0x184d7c: 0x714b2b89  pcpyld      $a1, $t2, $t3
    ctx->pc = 0x184d7cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x184d80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184d80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d84: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x184d84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x184d88: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x184d88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x184d8c: 0x71092389  pcpyld      $a0, $t0, $t1
    ctx->pc = 0x184d8cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x184d90: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x184d90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x184d94: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x184d94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d98: 0x710a1389  pcpyld      $v0, $t0, $t2
    ctx->pc = 0x184d98u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x184d9c: 0x708724c8  ppacw       $a0, $a0, $a3
    ctx->pc = 0x184d9cu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x184da0: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x184da0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x184da4: 0x704614c8  ppacw       $v0, $v0, $a2
    ctx->pc = 0x184da4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x184da8: 0x716a1b89  pcpyld      $v1, $t3, $t2
    ctx->pc = 0x184da8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x184dac: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x184dacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x184db0: 0x70651cc8  ppacw       $v1, $v1, $a1
    ctx->pc = 0x184db0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x184db4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x184db4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x184db8: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x184db8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x184dbc: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x184dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x184dc0: 0x7fa30150  sq          $v1, 0x150($sp)
    ctx->pc = 0x184dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 3));
    // 0x184dc4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x184DC4u;
    {
        const bool branch_taken_0x184dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184DC4u;
            // 0x184dc8: 0x7fa40160  sq          $a0, 0x160($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184dc4) {
            ctx->pc = 0x184EB0u;
            goto label_184eb0;
        }
    }
    ctx->pc = 0x184DCCu;
label_184dcc:
    // 0x184dcc: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x184DCCu;
    SET_GPR_U32(ctx, 31, 0x184DD4u);
    ctx->pc = 0x184DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184DCCu;
            // 0x184dd0: 0x27a401a8  addiu       $a0, $sp, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184DD4u; }
        if (ctx->pc != 0x184DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184DD4u; }
        if (ctx->pc != 0x184DD4u) { return; }
    }
    ctx->pc = 0x184DD4u;
    // 0x184dd4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x184dd4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x184dd8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184dd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x184ddc: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x184DDCu;
    SET_GPR_U32(ctx, 31, 0x184DE4u);
    ctx->pc = 0x184DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184DDCu;
            // 0x184de0: 0x27a401a4  addiu       $a0, $sp, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184DE4u; }
        if (ctx->pc != 0x184DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184DE4u; }
        if (ctx->pc != 0x184DE4u) { return; }
    }
    ctx->pc = 0x184DE4u;
    // 0x184de4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x184de4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x184de8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x184de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x184dec: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x184DECu;
    SET_GPR_U32(ctx, 31, 0x184DF4u);
    ctx->pc = 0x184DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184DECu;
            // 0x184df0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184DF4u; }
        if (ctx->pc != 0x184DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184DF4u; }
        if (ctx->pc != 0x184DF4u) { return; }
    }
    ctx->pc = 0x184DF4u;
    // 0x184df4: 0xc7a601a8  lwc1        $f6, 0x1A8($sp)
    ctx->pc = 0x184df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x184df8: 0x460002c6  mov.s       $f11, $f0
    ctx->pc = 0x184df8u;
    ctx->f[11] = FPU_MOV_S(ctx->f[0]);
    // 0x184dfc: 0xc7a201a0  lwc1        $f2, 0x1A0($sp)
    ctx->pc = 0x184dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x184e00: 0x460baa02  mul.s       $f8, $f21, $f11
    ctx->pc = 0x184e00u;
    ctx->f[8] = FPU_MUL_S(ctx->f[21], ctx->f[11]);
    // 0x184e04: 0x460b3242  mul.s       $f9, $f6, $f11
    ctx->pc = 0x184e04u;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x184e08: 0xc7a301a4  lwc1        $f3, 0x1A4($sp)
    ctx->pc = 0x184e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x184e0c: 0x46023282  mul.s       $f10, $f6, $f2
    ctx->pc = 0x184e0cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x184e10: 0x4602a9c2  mul.s       $f7, $f21, $f2
    ctx->pc = 0x184e10u;
    ctx->f[7] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x184e14: 0x46144842  mul.s       $f1, $f9, $f20
    ctx->pc = 0x184e14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[20]);
    // 0x184e18: 0x46145002  mul.s       $f0, $f10, $f20
    ctx->pc = 0x184e18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[20]);
    // 0x184e1c: 0x46143942  mul.s       $f5, $f7, $f20
    ctx->pc = 0x184e1cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
    // 0x184e20: 0x46144102  mul.s       $f4, $f8, $f20
    ctx->pc = 0x184e20u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[20]);
    // 0x184e24: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x184e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x184e28: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x184e28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x184e2c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x184e2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x184e30: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x184e30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x184e34: 0x460b1802  mul.s       $f0, $f3, $f11
    ctx->pc = 0x184e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x184e38: 0x46092941  sub.s       $f5, $f5, $f9
    ctx->pc = 0x184e38u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[9]);
    // 0x184e3c: 0x460a2100  add.s       $f4, $f4, $f10
    ctx->pc = 0x184e3cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
    // 0x184e40: 0x440b0800  mfc1        $t3, $f1
    ctx->pc = 0x184e40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x184e44: 0x71643b89  pcpyld      $a3, $t3, $a0
    ctx->pc = 0x184e44u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 4)));
    // 0x184e48: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x184e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x184e4c: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x184e4cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x184e50: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x184e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x184e54: 0x70aa3389  pcpyld      $a2, $a1, $t2
    ctx->pc = 0x184e54u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 10)));
    // 0x184e58: 0x440b2000  mfc1        $t3, $f4
    ctx->pc = 0x184e58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x184e5c: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x184e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x184e60: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x184e60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x184e64: 0x71632b89  pcpyld      $a1, $t3, $v1
    ctx->pc = 0x184e64u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x184e68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x184e68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e6c: 0x44093000  mfc1        $t1, $f6
    ctx->pc = 0x184e6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x184e70: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x184e70u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x184e74: 0x71092389  pcpyld      $a0, $t0, $t1
    ctx->pc = 0x184e74u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x184e78: 0x440a1800  mfc1        $t2, $f3
    ctx->pc = 0x184e78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x184e7c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x184e7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e80: 0x710a1b89  pcpyld      $v1, $t0, $t2
    ctx->pc = 0x184e80u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x184e84: 0x708724c8  ppacw       $a0, $a0, $a3
    ctx->pc = 0x184e84u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x184e88: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x184e88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x184e8c: 0x70651cc8  ppacw       $v1, $v1, $a1
    ctx->pc = 0x184e8cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x184e90: 0x716a1389  pcpyld      $v0, $t3, $t2
    ctx->pc = 0x184e90u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x184e94: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x184e94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x184e98: 0x704614c8  ppacw       $v0, $v0, $a2
    ctx->pc = 0x184e98u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x184e9c: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x184e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x184ea0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x184ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x184ea4: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x184ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x184ea8: 0x7fa30180  sq          $v1, 0x180($sp)
    ctx->pc = 0x184ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 3));
    // 0x184eac: 0x7fa40190  sq          $a0, 0x190($sp)
    ctx->pc = 0x184eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 4));
label_184eb0:
    // 0x184eb0: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x184eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x184eb4: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x184eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x184eb8: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x184eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x184ebc: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x184ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x184ec0: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x184ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x184ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x184EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184EC4u;
            // 0x184ec8: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184A30u: goto label_184a30;
            case 0x184A74u: goto label_184a74;
            case 0x184AE8u: goto label_184ae8;
            case 0x184B5Cu: goto label_184b5c;
            case 0x184C08u: goto label_184c08;
            case 0x184C7Cu: goto label_184c7c;
            case 0x184D24u: goto label_184d24;
            case 0x184DCCu: goto label_184dcc;
            case 0x184EB0u: goto label_184eb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x184ECCu;
    // 0x184ecc: 0x0  nop
    ctx->pc = 0x184eccu;
    // NOP
}
