#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CB2E0
// Address: 0x1cb2e0 - 0x1cbb30
void sub_001CB2E0_0x1cb2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB2E0_0x1cb2e0");
#endif

    ctx->pc = 0x1cb2e0u;

    // 0x1cb2e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cb2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cb2e4: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1cb2e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1cb2e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cb2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1cb2ec: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x1cb2ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1cb2f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb2f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb2f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2f8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1cb2f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1cb2fc: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1cb2fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cb300: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cb300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cb304: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1cb304u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb308: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x1cb308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1cb30c: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1CB30Cu;
    SET_GPR_U32(ctx, 31, 0x1CB314u);
    ctx->pc = 0x1CB310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB30Cu;
            // 0x1cb310: 0xfba20000  sqc2        $vf2, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB314u; }
        if (ctx->pc != 0x1CB314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB314u; }
        if (ctx->pc != 0x1CB314u) { return; }
    }
    ctx->pc = 0x1CB314u;
    // 0x1cb314: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1cb314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1cb318: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x1cb318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb31c: 0xc461c658  lwc1        $f1, -0x39A8($v1)
    ctx->pc = 0x1cb31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb320: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cb320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cb324: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cb324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb328: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cb328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cb32c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1cb32cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb330: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1cb330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1cb334: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cb334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb338: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1cb338u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cb33c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1cb33cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1cb340: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1cb340u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cb344: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cb344u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb348: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cb348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb34c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1cb34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1cb350: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1cb350u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cb354: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x1cb354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb358: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cb358u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb35c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1cb35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1cb360: 0x46000504  c1          0x504
    ctx->pc = 0x1cb360u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cb364: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1cb364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1cb368: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CB368u;
    {
        const bool branch_taken_0x1cb368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB368u;
            // 0x1cb36c: 0x46140841  sub.s       $f1, $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb368) {
            ctx->pc = 0x1CB418u;
            goto label_1cb418;
        }
    }
    ctx->pc = 0x1CB370u;
    // 0x1cb370: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1cb370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb374: 0x0  nop
    ctx->pc = 0x1cb374u;
    // NOP
    // 0x1cb378: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
    ctx->pc = 0x1CB378u;
    {
        const bool branch_taken_0x1cb378 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb378) {
            ctx->pc = 0x1CB37Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB378u;
            // 0x1cb37c: 0xa2000087  sb          $zero, 0x87($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 135), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB3FCu;
            goto label_1cb3fc;
        }
    }
    ctx->pc = 0x1CB380u;
    // 0x1cb380: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1cb380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cb384: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cb384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cb388: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cb388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cb38c: 0x40f809  jalr        $v0
    ctx->pc = 0x1CB38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB394u);
        ctx->pc = 0x1CB390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB38Cu;
            // 0x1cb390: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CB394u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB3E0u: goto label_1cb3e0;
            case 0x1CB3FCu: goto label_1cb3fc;
            case 0x1CB418u: goto label_1cb418;
            case 0x1CB41Cu: goto label_1cb41c;
            case 0x1CB4C8u: goto label_1cb4c8;
            case 0x1CB538u: goto label_1cb538;
            case 0x1CB560u: goto label_1cb560;
            case 0x1CB598u: goto label_1cb598;
            case 0x1CB59Cu: goto label_1cb59c;
            case 0x1CB5A8u: goto label_1cb5a8;
            case 0x1CB5ACu: goto label_1cb5ac;
            case 0x1CB5E4u: goto label_1cb5e4;
            case 0x1CB5F8u: goto label_1cb5f8;
            case 0x1CB68Cu: goto label_1cb68c;
            case 0x1CB690u: goto label_1cb690;
            case 0x1CB6A8u: goto label_1cb6a8;
            case 0x1CB6BCu: goto label_1cb6bc;
            case 0x1CB6C0u: goto label_1cb6c0;
            case 0x1CB6D0u: goto label_1cb6d0;
            case 0x1CB740u: goto label_1cb740;
            case 0x1CB758u: goto label_1cb758;
            case 0x1CB76Cu: goto label_1cb76c;
            case 0x1CB7A4u: goto label_1cb7a4;
            case 0x1CB7A8u: goto label_1cb7a8;
            case 0x1CB7B4u: goto label_1cb7b4;
            case 0x1CB7B8u: goto label_1cb7b8;
            case 0x1CB7F0u: goto label_1cb7f0;
            case 0x1CB804u: goto label_1cb804;
            case 0x1CB898u: goto label_1cb898;
            case 0x1CB89Cu: goto label_1cb89c;
            case 0x1CB8B4u: goto label_1cb8b4;
            case 0x1CB8C8u: goto label_1cb8c8;
            case 0x1CB8CCu: goto label_1cb8cc;
            case 0x1CB8D0u: goto label_1cb8d0;
            case 0x1CB8DCu: goto label_1cb8dc;
            case 0x1CB8E0u: goto label_1cb8e0;
            case 0x1CB920u: goto label_1cb920;
            case 0x1CB948u: goto label_1cb948;
            case 0x1CB94Cu: goto label_1cb94c;
            case 0x1CB984u: goto label_1cb984;
            case 0x1CB988u: goto label_1cb988;
            case 0x1CBA00u: goto label_1cba00;
            case 0x1CBA10u: goto label_1cba10;
            case 0x1CBA14u: goto label_1cba14;
            case 0x1CBB14u: goto label_1cbb14;
            case 0x1CBB18u: goto label_1cbb18;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CB394u; }
            if (ctx->pc != 0x1CB394u) { return; }
        }
        }
    }
    ctx->pc = 0x1CB394u;
    // 0x1cb394: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1cb394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cb398: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CB398u;
    {
        const bool branch_taken_0x1cb398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb398) {
            ctx->pc = 0x1CB39Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB398u;
            // 0x1cb39c: 0xa2000087  sb          $zero, 0x87($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 135), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB3FCu;
            goto label_1cb3fc;
        }
    }
    ctx->pc = 0x1CB3A0u;
    // 0x1cb3a0: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1cb3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1cb3a4: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x1cb3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x1cb3a8: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CB3A8u;
    {
        const bool branch_taken_0x1cb3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb3a8) {
            ctx->pc = 0x1CB3ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB3A8u;
            // 0x1cb3ac: 0xa2000087  sb          $zero, 0x87($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 135), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB3FCu;
            goto label_1cb3fc;
        }
    }
    ctx->pc = 0x1CB3B0u;
    // 0x1cb3b0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1cb3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1cb3b4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CB3B4u;
    {
        const bool branch_taken_0x1cb3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb3b4) {
            ctx->pc = 0x1CB3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB3B4u;
            // 0x1cb3b8: 0xa2000087  sb          $zero, 0x87($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 135), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB3FCu;
            goto label_1cb3fc;
        }
    }
    ctx->pc = 0x1CB3BCu;
    // 0x1cb3bc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1cb3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1cb3c0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB3C0u;
    {
        const bool branch_taken_0x1cb3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb3c0) {
            ctx->pc = 0x1CB3C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB3C0u;
            // 0x1cb3c4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB3E0u;
            goto label_1cb3e0;
        }
    }
    ctx->pc = 0x1CB3C8u;
    // 0x1cb3c8: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1cb3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1cb3cc: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x1cb3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x1cb3d0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1CB3D0u;
    {
        const bool branch_taken_0x1cb3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb3d0) {
            ctx->pc = 0x1CB3D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB3D0u;
            // 0x1cb3d4: 0xa2000087  sb          $zero, 0x87($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 135), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB3FCu;
            goto label_1cb3fc;
        }
    }
    ctx->pc = 0x1CB3D8u;
    // 0x1cb3d8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1cb3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1cb3dc: 0x0  nop
    ctx->pc = 0x1cb3dcu;
    // NOP
label_1cb3e0:
    // 0x1cb3e0: 0x92030087  lbu         $v1, 0x87($s0)
    ctx->pc = 0x1cb3e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 135)));
    // 0x1cb3e4: 0x9042009a  lbu         $v0, 0x9A($v0)
    ctx->pc = 0x1cb3e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 154)));
    // 0x1cb3e8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1cb3e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cb3ec: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CB3ECu;
    {
        const bool branch_taken_0x1cb3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB3ECu;
            // 0x1cb3f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb3ec) {
            ctx->pc = 0x1CB41Cu;
            goto label_1cb41c;
        }
    }
    ctx->pc = 0x1CB3F4u;
    // 0x1cb3f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1cb3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cb3f8: 0xa2020087  sb          $v0, 0x87($s0)
    ctx->pc = 0x1cb3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 135), (uint8_t)GPR_U32(ctx, 2));
label_1cb3fc:
    // 0x1cb3fc: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x1cb3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x1cb400: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cb400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1cb404: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cb404u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cb408: 0xe614004c  swc1        $f20, 0x4C($s0)
    ctx->pc = 0x1cb408u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1cb40c: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1cb40cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cb410: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1cb410u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb414: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1cb414u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_1cb418:
    // 0x1cb418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb41c:
    // 0x1cb41c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cb41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb420: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cb420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb424: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb428: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1cb428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cb42c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB42Cu;
            // 0x1cb430: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB3E0u: goto label_1cb3e0;
            case 0x1CB3FCu: goto label_1cb3fc;
            case 0x1CB418u: goto label_1cb418;
            case 0x1CB41Cu: goto label_1cb41c;
            case 0x1CB4C8u: goto label_1cb4c8;
            case 0x1CB538u: goto label_1cb538;
            case 0x1CB560u: goto label_1cb560;
            case 0x1CB598u: goto label_1cb598;
            case 0x1CB59Cu: goto label_1cb59c;
            case 0x1CB5A8u: goto label_1cb5a8;
            case 0x1CB5ACu: goto label_1cb5ac;
            case 0x1CB5E4u: goto label_1cb5e4;
            case 0x1CB5F8u: goto label_1cb5f8;
            case 0x1CB68Cu: goto label_1cb68c;
            case 0x1CB690u: goto label_1cb690;
            case 0x1CB6A8u: goto label_1cb6a8;
            case 0x1CB6BCu: goto label_1cb6bc;
            case 0x1CB6C0u: goto label_1cb6c0;
            case 0x1CB6D0u: goto label_1cb6d0;
            case 0x1CB740u: goto label_1cb740;
            case 0x1CB758u: goto label_1cb758;
            case 0x1CB76Cu: goto label_1cb76c;
            case 0x1CB7A4u: goto label_1cb7a4;
            case 0x1CB7A8u: goto label_1cb7a8;
            case 0x1CB7B4u: goto label_1cb7b4;
            case 0x1CB7B8u: goto label_1cb7b8;
            case 0x1CB7F0u: goto label_1cb7f0;
            case 0x1CB804u: goto label_1cb804;
            case 0x1CB898u: goto label_1cb898;
            case 0x1CB89Cu: goto label_1cb89c;
            case 0x1CB8B4u: goto label_1cb8b4;
            case 0x1CB8C8u: goto label_1cb8c8;
            case 0x1CB8CCu: goto label_1cb8cc;
            case 0x1CB8D0u: goto label_1cb8d0;
            case 0x1CB8DCu: goto label_1cb8dc;
            case 0x1CB8E0u: goto label_1cb8e0;
            case 0x1CB920u: goto label_1cb920;
            case 0x1CB948u: goto label_1cb948;
            case 0x1CB94Cu: goto label_1cb94c;
            case 0x1CB984u: goto label_1cb984;
            case 0x1CB988u: goto label_1cb988;
            case 0x1CBA00u: goto label_1cba00;
            case 0x1CBA10u: goto label_1cba10;
            case 0x1CBA14u: goto label_1cba14;
            case 0x1CBB14u: goto label_1cbb14;
            case 0x1CBB18u: goto label_1cbb18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CB434u;
    // 0x1cb434: 0x0  nop
    ctx->pc = 0x1cb434u;
    // NOP
    // 0x1cb438: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1cb438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1cb43c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cb43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb440: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1cb440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1cb444: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1cb444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1cb448: 0x30d0ffff  andi        $s0, $a2, 0xFFFF
    ctx->pc = 0x1cb448u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1cb44c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1cb44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x1cb450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cb450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb454: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1cb454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x1cb458: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1cb458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1cb45c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1cb45cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb460: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1cb460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1cb464: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1cb464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1cb468: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1cb468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1cb46c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1cb46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1cb470: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cb470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cb474: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1cb474u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1cb478: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1cb478u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1cb47c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1cb47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cb480: 0x84650026  lh          $a1, 0x26($v1)
    ctx->pc = 0x1cb480u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x1cb484: 0x10a20115  beq         $a1, $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x1CB484u;
    {
        const bool branch_taken_0x1cb484 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB484u;
            // 0x1cb488: 0x30f7ffff  andi        $s7, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb484) {
            ctx->pc = 0x1CB8DCu;
            goto label_1cb8dc;
        }
    }
    ctx->pc = 0x1CB48Cu;
    // 0x1cb48c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1cb48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1cb490: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1cb490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1cb494: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cb494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cb498: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cb498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cb49c: 0x57c20110  bnel        $fp, $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x1CB49Cu;
    {
        const bool branch_taken_0x1cb49c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb49c) {
            ctx->pc = 0x1CB4A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB49Cu;
            // 0x1cb4a0: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB8E0u;
            goto label_1cb8e0;
        }
    }
    ctx->pc = 0x1CB4A4u;
    // 0x1cb4a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1cb4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1cb4a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cb4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb4ac: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1CB4ACu;
    SET_GPR_U32(ctx, 31, 0x1CB4B4u);
    ctx->pc = 0x1CB4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB4ACu;
            // 0x1cb4b0: 0x8c44c9bc  lw          $a0, -0x3644($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953404)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB4B4u; }
        if (ctx->pc != 0x1CB4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB4B4u; }
        if (ctx->pc != 0x1CB4B4u) { return; }
    }
    ctx->pc = 0x1CB4B4u;
    // 0x1cb4b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cb4b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cb4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cb4bc: 0x12020080  beq         $s0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x1CB4BCu;
    {
        const bool branch_taken_0x1cb4bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB4BCu;
            // 0x1cb4c0: 0x3c040100  lui         $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4bc) {
            ctx->pc = 0x1CB6C0u;
            goto label_1cb6c0;
        }
    }
    ctx->pc = 0x1CB4C4u;
    // 0x1cb4c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1cb4c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb4c8:
    // 0x1cb4c8: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x1cb4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1cb4cc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1cb4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1cb4d0: 0x94420048  lhu         $v0, 0x48($v0)
    ctx->pc = 0x1cb4d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1cb4d4: 0x16020074  bne         $s0, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x1CB4D4u;
    {
        const bool branch_taken_0x1cb4d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CB4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB4D4u;
            // 0x1cb4d8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4d4) {
            ctx->pc = 0x1CB6A8u;
            goto label_1cb6a8;
        }
    }
    ctx->pc = 0x1CB4DCu;
    // 0x1cb4dc: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x1cb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x1cb4e0: 0x102c00  sll         $a1, $s0, 16
    ctx->pc = 0x1cb4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x1cb4e4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1cb4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1cb4e8: 0x90540060  lbu         $s4, 0x60($v0)
    ctx->pc = 0x1cb4e8u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cb4ec: 0x9056006c  lbu         $s6, 0x6C($v0)
    ctx->pc = 0x1cb4ecu;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1cb4f0: 0x24842d50  addiu       $a0, $a0, 0x2D50
    ctx->pc = 0x1cb4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11600));
    // 0x1cb4f4: 0xc076f4e  jal         func_1DBD38
    ctx->pc = 0x1CB4F4u;
    SET_GPR_U32(ctx, 31, 0x1CB4FCu);
    ctx->pc = 0x1CB4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB4F4u;
            // 0x1cb4f8: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBD38u;
    if (runtime->hasFunction(0x1DBD38u)) {
        auto targetFn = runtime->lookupFunction(0x1DBD38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB4FCu; }
        if (ctx->pc != 0x1CB4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dbd38_0x1dbd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB4FCu; }
        if (ctx->pc != 0x1CB4FCu) { return; }
    }
    ctx->pc = 0x1CB4FCu;
    // 0x1cb4fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1cb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1cb500: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1cb500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cb504: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1CB504u;
    {
        const bool branch_taken_0x1cb504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB504u;
            // 0x1cb508: 0x29403  sra         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb504) {
            ctx->pc = 0x1CB5A8u;
            goto label_1cb5a8;
        }
    }
    ctx->pc = 0x1CB50Cu;
    // 0x1cb50c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1cb50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1cb510: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CB510u;
    {
        const bool branch_taken_0x1cb510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB510u;
            // 0x1cb514: 0x256102a  slt         $v0, $s2, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb510) {
            ctx->pc = 0x1CB5ACu;
            goto label_1cb5ac;
        }
    }
    ctx->pc = 0x1CB518u;
    // 0x1cb518: 0x8fc300fc  lw          $v1, 0xFC($fp)
    ctx->pc = 0x1cb518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 252)));
    // 0x1cb51c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CB51Cu;
    {
        const bool branch_taken_0x1cb51c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB51Cu;
            // 0x1cb520: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb51c) {
            ctx->pc = 0x1CB560u;
            goto label_1cb560;
        }
    }
    ctx->pc = 0x1CB524u;
    // 0x1cb524: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1cb524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1cb528: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cb528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb52c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB52Cu;
    {
        const bool branch_taken_0x1cb52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CB530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB52Cu;
            // 0x1cb530: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb52c) {
            ctx->pc = 0x1CB560u;
            goto label_1cb560;
        }
    }
    ctx->pc = 0x1CB534u;
    // 0x1cb534: 0x0  nop
    ctx->pc = 0x1cb534u;
    // NOP
label_1cb538:
    // 0x1cb538: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1cb538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cb53c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1cb53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cb540: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1cb540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1cb544: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB544u;
    {
        const bool branch_taken_0x1cb544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb544) {
            ctx->pc = 0x1CB548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB544u;
            // 0x1cb548: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB560u;
            goto label_1cb560;
        }
    }
    ctx->pc = 0x1CB54Cu;
    // 0x1cb54c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cb54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb550: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1cb550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb554: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CB554u;
    {
        const bool branch_taken_0x1cb554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CB558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB554u;
            // 0x1cb558: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb554) {
            ctx->pc = 0x1CB538u;
            runtime->cooperativeGuestYield();
            goto label_1cb538;
        }
    }
    ctx->pc = 0x1CB55Cu;
    // 0x1cb55c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb560:
    // 0x1cb560: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x1cb560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1cb564: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB564u;
    {
        const bool branch_taken_0x1cb564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB564u;
            // 0x1cb568: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb564) {
            ctx->pc = 0x1CB598u;
            goto label_1cb598;
        }
    }
    ctx->pc = 0x1CB56Cu;
    // 0x1cb56c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1cb56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cb570: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x1cb570u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x1cb574: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1cb574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cb578: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1cb578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1cb57c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1cb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1cb580: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1cb580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1cb584: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cb584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb588: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cb588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb58c: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB58Cu;
    {
        const bool branch_taken_0x1cb58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1cb58c) {
            ctx->pc = 0x1CB590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB58Cu;
            // 0x1cb590: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB59Cu;
            goto label_1cb59c;
        }
    }
    ctx->pc = 0x1CB594u;
    // 0x1cb594: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1cb594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1cb598:
    // 0x1cb598: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1cb598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1cb59c:
    // 0x1cb59c: 0xc068682  jal         func_1A1A08
    ctx->pc = 0x1CB59Cu;
    SET_GPR_U32(ctx, 31, 0x1CB5A4u);
    ctx->pc = 0x1CB5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB59Cu;
            // 0x1cb5a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A08u;
    if (runtime->hasFunction(0x1A1A08u)) {
        auto targetFn = runtime->lookupFunction(0x1A1A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5A4u; }
        if (ctx->pc != 0x1CB5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a1a08_0x1a1a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5A4u; }
        if (ctx->pc != 0x1CB5A4u) { return; }
    }
    ctx->pc = 0x1CB5A4u;
    // 0x1cb5a4: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1cb5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_1cb5a8:
    // 0x1cb5a8: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x1cb5a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1cb5ac:
    // 0x1cb5ac: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB5ACu;
    {
        const bool branch_taken_0x1cb5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb5ac) {
            ctx->pc = 0x1CB5B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5ACu;
            // 0x1cb5b0: 0x292102a  slt         $v0, $s4, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB5F8u;
            goto label_1cb5f8;
        }
    }
    ctx->pc = 0x1CB5B4u;
    // 0x1cb5b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cb5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cb5b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cb5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cb5bc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cb5bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cb5c0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cb5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cb5c4: 0x40f809  jalr        $v0
    ctx->pc = 0x1CB5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB5CCu);
        ctx->pc = 0x1CB5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5C4u;
            // 0x1cb5c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CB5CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB3E0u: goto label_1cb3e0;
            case 0x1CB3FCu: goto label_1cb3fc;
            case 0x1CB418u: goto label_1cb418;
            case 0x1CB41Cu: goto label_1cb41c;
            case 0x1CB4C8u: goto label_1cb4c8;
            case 0x1CB538u: goto label_1cb538;
            case 0x1CB560u: goto label_1cb560;
            case 0x1CB598u: goto label_1cb598;
            case 0x1CB59Cu: goto label_1cb59c;
            case 0x1CB5A8u: goto label_1cb5a8;
            case 0x1CB5ACu: goto label_1cb5ac;
            case 0x1CB5E4u: goto label_1cb5e4;
            case 0x1CB5F8u: goto label_1cb5f8;
            case 0x1CB68Cu: goto label_1cb68c;
            case 0x1CB690u: goto label_1cb690;
            case 0x1CB6A8u: goto label_1cb6a8;
            case 0x1CB6BCu: goto label_1cb6bc;
            case 0x1CB6C0u: goto label_1cb6c0;
            case 0x1CB6D0u: goto label_1cb6d0;
            case 0x1CB740u: goto label_1cb740;
            case 0x1CB758u: goto label_1cb758;
            case 0x1CB76Cu: goto label_1cb76c;
            case 0x1CB7A4u: goto label_1cb7a4;
            case 0x1CB7A8u: goto label_1cb7a8;
            case 0x1CB7B4u: goto label_1cb7b4;
            case 0x1CB7B8u: goto label_1cb7b8;
            case 0x1CB7F0u: goto label_1cb7f0;
            case 0x1CB804u: goto label_1cb804;
            case 0x1CB898u: goto label_1cb898;
            case 0x1CB89Cu: goto label_1cb89c;
            case 0x1CB8B4u: goto label_1cb8b4;
            case 0x1CB8C8u: goto label_1cb8c8;
            case 0x1CB8CCu: goto label_1cb8cc;
            case 0x1CB8D0u: goto label_1cb8d0;
            case 0x1CB8DCu: goto label_1cb8dc;
            case 0x1CB8E0u: goto label_1cb8e0;
            case 0x1CB920u: goto label_1cb920;
            case 0x1CB948u: goto label_1cb948;
            case 0x1CB94Cu: goto label_1cb94c;
            case 0x1CB984u: goto label_1cb984;
            case 0x1CB988u: goto label_1cb988;
            case 0x1CBA00u: goto label_1cba00;
            case 0x1CBA10u: goto label_1cba10;
            case 0x1CBA14u: goto label_1cba14;
            case 0x1CBB14u: goto label_1cbb14;
            case 0x1CBB18u: goto label_1cbb18;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5CCu; }
            if (ctx->pc != 0x1CB5CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1CB5CCu;
    // 0x1cb5cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5d0: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1cb5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cb5d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB5D4u;
    {
        const bool branch_taken_0x1cb5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5D4u;
            // 0x1cb5d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5d4) {
            ctx->pc = 0x1CB5E4u;
            goto label_1cb5e4;
        }
    }
    ctx->pc = 0x1CB5DCu;
    // 0x1cb5dc: 0xc08a2a6  jal         func_228A98
    ctx->pc = 0x1CB5DCu;
    SET_GPR_U32(ctx, 31, 0x1CB5E4u);
    ctx->pc = 0x228A98u;
    if (runtime->hasFunction(0x228A98u)) {
        auto targetFn = runtime->lookupFunction(0x228A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5E4u; }
        if (ctx->pc != 0x1CB5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228A98_0x228a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5E4u; }
        if (ctx->pc != 0x1CB5E4u) { return; }
    }
    ctx->pc = 0x1CB5E4u;
label_1cb5e4:
    // 0x1cb5e4: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB5E4u;
    {
        const bool branch_taken_0x1cb5e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb5e4) {
            ctx->pc = 0x1CB5E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5E4u;
            // 0x1cb5e8: 0x292102a  slt         $v0, $s4, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB5F8u;
            goto label_1cb5f8;
        }
    }
    ctx->pc = 0x1CB5ECu;
    // 0x1cb5ec: 0x54400104  bnel        $v0, $zero, . + 4 + (0x104 << 2)
    ctx->pc = 0x1CB5ECu;
    {
        const bool branch_taken_0x1cb5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb5ec) {
            ctx->pc = 0x1CB5F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5ECu;
            // 0x1cb5f0: 0x8445000c  lh          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBA00u;
            goto label_1cba00;
        }
    }
    ctx->pc = 0x1CB5F4u;
    // 0x1cb5f4: 0x292102a  slt         $v0, $s4, $s2
    ctx->pc = 0x1cb5f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1cb5f8:
    // 0x1cb5f8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CB5F8u;
    {
        const bool branch_taken_0x1cb5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5F8u;
            // 0x1cb5fc: 0x2541023  subu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5f8) {
            ctx->pc = 0x1CB6BCu;
            goto label_1cb6bc;
        }
    }
    ctx->pc = 0x1CB600u;
    // 0x1cb600: 0x2d41823  subu        $v1, $s6, $s4
    ctx->pc = 0x1cb600u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x1cb604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb608: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cb608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cb60c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1cb60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1cb610: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1cb610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1cb614: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1cb614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb618: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1cb618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1cb61c: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1cb61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1cb620: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1cb620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1cb624: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1cb624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1cb628: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1cb628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb62c: 0x2484b950  addiu       $a0, $a0, -0x46B0
    ctx->pc = 0x1cb62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
    // 0x1cb630: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1cb630u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1cb634: 0x4601ad01  sub.s       $f20, $f21, $f1
    ctx->pc = 0x1cb634u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x1cb638: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1cb638u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cb63c: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1CB63Cu;
    SET_GPR_U32(ctx, 31, 0x1CB644u);
    ctx->pc = 0x1CB640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB63Cu;
            // 0x1cb640: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB644u; }
        if (ctx->pc != 0x1CB644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB644u; }
        if (ctx->pc != 0x1CB644u) { return; }
    }
    ctx->pc = 0x1CB644u;
    // 0x1cb644: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1cb644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1cb648: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1cb648u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb64c: 0x0  nop
    ctx->pc = 0x1cb64cu;
    // NOP
    // 0x1cb650: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x1CB650u;
    {
        const bool branch_taken_0x1cb650 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB650u;
            // 0x1cb654: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb650) {
            ctx->pc = 0x1CB6C0u;
            goto label_1cb6c0;
        }
    }
    ctx->pc = 0x1CB658u;
    // 0x1cb658: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cb658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cb65c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cb65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cb660: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cb660u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cb664: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cb664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cb668: 0x40f809  jalr        $v0
    ctx->pc = 0x1CB668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB670u);
        ctx->pc = 0x1CB66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB668u;
            // 0x1cb66c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CB670u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB3E0u: goto label_1cb3e0;
            case 0x1CB3FCu: goto label_1cb3fc;
            case 0x1CB418u: goto label_1cb418;
            case 0x1CB41Cu: goto label_1cb41c;
            case 0x1CB4C8u: goto label_1cb4c8;
            case 0x1CB538u: goto label_1cb538;
            case 0x1CB560u: goto label_1cb560;
            case 0x1CB598u: goto label_1cb598;
            case 0x1CB59Cu: goto label_1cb59c;
            case 0x1CB5A8u: goto label_1cb5a8;
            case 0x1CB5ACu: goto label_1cb5ac;
            case 0x1CB5E4u: goto label_1cb5e4;
            case 0x1CB5F8u: goto label_1cb5f8;
            case 0x1CB68Cu: goto label_1cb68c;
            case 0x1CB690u: goto label_1cb690;
            case 0x1CB6A8u: goto label_1cb6a8;
            case 0x1CB6BCu: goto label_1cb6bc;
            case 0x1CB6C0u: goto label_1cb6c0;
            case 0x1CB6D0u: goto label_1cb6d0;
            case 0x1CB740u: goto label_1cb740;
            case 0x1CB758u: goto label_1cb758;
            case 0x1CB76Cu: goto label_1cb76c;
            case 0x1CB7A4u: goto label_1cb7a4;
            case 0x1CB7A8u: goto label_1cb7a8;
            case 0x1CB7B4u: goto label_1cb7b4;
            case 0x1CB7B8u: goto label_1cb7b8;
            case 0x1CB7F0u: goto label_1cb7f0;
            case 0x1CB804u: goto label_1cb804;
            case 0x1CB898u: goto label_1cb898;
            case 0x1CB89Cu: goto label_1cb89c;
            case 0x1CB8B4u: goto label_1cb8b4;
            case 0x1CB8C8u: goto label_1cb8c8;
            case 0x1CB8CCu: goto label_1cb8cc;
            case 0x1CB8D0u: goto label_1cb8d0;
            case 0x1CB8DCu: goto label_1cb8dc;
            case 0x1CB8E0u: goto label_1cb8e0;
            case 0x1CB920u: goto label_1cb920;
            case 0x1CB948u: goto label_1cb948;
            case 0x1CB94Cu: goto label_1cb94c;
            case 0x1CB984u: goto label_1cb984;
            case 0x1CB988u: goto label_1cb988;
            case 0x1CBA00u: goto label_1cba00;
            case 0x1CBA10u: goto label_1cba10;
            case 0x1CBA14u: goto label_1cba14;
            case 0x1CBB14u: goto label_1cbb14;
            case 0x1CBB18u: goto label_1cbb18;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CB670u; }
            if (ctx->pc != 0x1CB670u) { return; }
        }
        }
    }
    ctx->pc = 0x1CB670u;
    // 0x1cb670: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1cb670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cb674: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB674u;
    {
        const bool branch_taken_0x1cb674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB674u;
            // 0x1cb678: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb674) {
            ctx->pc = 0x1CB68Cu;
            goto label_1cb68c;
        }
    }
    ctx->pc = 0x1CB67Cu;
    // 0x1cb67c: 0xc08a2a6  jal         func_228A98
    ctx->pc = 0x1CB67Cu;
    SET_GPR_U32(ctx, 31, 0x1CB684u);
    ctx->pc = 0x228A98u;
    if (runtime->hasFunction(0x228A98u)) {
        auto targetFn = runtime->lookupFunction(0x228A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB684u; }
        if (ctx->pc != 0x1CB684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228A98_0x228a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB684u; }
        if (ctx->pc != 0x1CB684u) { return; }
    }
    ctx->pc = 0x1CB684u;
    // 0x1cb684: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB684u;
    {
        const bool branch_taken_0x1cb684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb684) {
            ctx->pc = 0x1CB690u;
            goto label_1cb690;
        }
    }
    ctx->pc = 0x1CB68Cu;
label_1cb68c:
    // 0x1cb68c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb690:
    // 0x1cb690: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1CB690u;
    {
        const bool branch_taken_0x1cb690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb690) {
            ctx->pc = 0x1CB694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB690u;
            // 0x1cb694: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB6C0u;
            goto label_1cb6c0;
        }
    }
    ctx->pc = 0x1CB698u;
    // 0x1cb698: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB698u;
    {
        const bool branch_taken_0x1cb698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb698) {
            ctx->pc = 0x1CB69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB698u;
            // 0x1cb69c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB6C0u;
            goto label_1cb6c0;
        }
    }
    ctx->pc = 0x1CB6A0u;
    // 0x1cb6a0: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x1CB6A0u;
    {
        const bool branch_taken_0x1cb6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB6A0u;
            // 0x1cb6a4: 0x8445000c  lh          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6a0) {
            ctx->pc = 0x1CBA00u;
            goto label_1cba00;
        }
    }
    ctx->pc = 0x1CB6A8u;
label_1cb6a8:
    // 0x1cb6a8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1cb6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1cb6ac: 0x2ae03  sra         $s5, $v0, 24
    ctx->pc = 0x1cb6acu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1cb6b0: 0x2aa2000a  slti        $v0, $s5, 0xA
    ctx->pc = 0x1cb6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1cb6b4: 0x1440ff84  bnez        $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x1CB6B4u;
    {
        const bool branch_taken_0x1cb6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB6B4u;
            // 0x1cb6b8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6b4) {
            ctx->pc = 0x1CB4C8u;
            runtime->cooperativeGuestYield();
            goto label_1cb4c8;
        }
    }
    ctx->pc = 0x1CB6BCu;
label_1cb6bc:
    // 0x1cb6bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cb6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cb6c0:
    // 0x1cb6c0: 0x12e20086  beq         $s7, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x1CB6C0u;
    {
        const bool branch_taken_0x1cb6c0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB6C0u;
            // 0x1cb6c4: 0x3c040100  lui         $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6c0) {
            ctx->pc = 0x1CB8DCu;
            goto label_1cb8dc;
        }
    }
    ctx->pc = 0x1CB6C8u;
    // 0x1cb6c8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1cb6c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6cc: 0x0  nop
    ctx->pc = 0x1cb6ccu;
    // NOP
label_1cb6d0:
    // 0x1cb6d0: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x1cb6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1cb6d4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1cb6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1cb6d8: 0x9442005c  lhu         $v0, 0x5C($v0)
    ctx->pc = 0x1cb6d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1cb6dc: 0x16e20075  bne         $s7, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x1CB6DCu;
    {
        const bool branch_taken_0x1cb6dc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CB6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB6DCu;
            // 0x1cb6e0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6dc) {
            ctx->pc = 0x1CB8B4u;
            goto label_1cb8b4;
        }
    }
    ctx->pc = 0x1CB6E4u;
    // 0x1cb6e4: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x1cb6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x1cb6e8: 0x172c00  sll         $a1, $s7, 16
    ctx->pc = 0x1cb6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x1cb6ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cb6ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6f0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1cb6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1cb6f4: 0x90760076  lbu         $s6, 0x76($v1)
    ctx->pc = 0x1cb6f4u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 118)));
    // 0x1cb6f8: 0x24842d50  addiu       $a0, $a0, 0x2D50
    ctx->pc = 0x1cb6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11600));
    // 0x1cb6fc: 0x9054006a  lbu         $s4, 0x6A($v0)
    ctx->pc = 0x1cb6fcu;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 106)));
    // 0x1cb700: 0xc076f64  jal         func_1DBD90
    ctx->pc = 0x1CB700u;
    SET_GPR_U32(ctx, 31, 0x1CB708u);
    ctx->pc = 0x1CB704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB700u;
            // 0x1cb704: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBD90u;
    if (runtime->hasFunction(0x1DBD90u)) {
        auto targetFn = runtime->lookupFunction(0x1DBD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB708u; }
        if (ctx->pc != 0x1CB708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dbd90_0x1dbde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB708u; }
        if (ctx->pc != 0x1CB708u) { return; }
    }
    ctx->pc = 0x1CB708u;
    // 0x1cb708: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1cb708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1cb70c: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1cb70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cb710: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1CB710u;
    {
        const bool branch_taken_0x1cb710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB710u;
            // 0x1cb714: 0x29403  sra         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb710) {
            ctx->pc = 0x1CB7B4u;
            goto label_1cb7b4;
        }
    }
    ctx->pc = 0x1CB718u;
    // 0x1cb718: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1cb718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1cb71c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CB71Cu;
    {
        const bool branch_taken_0x1cb71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB71Cu;
            // 0x1cb720: 0x256102a  slt         $v0, $s2, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb71c) {
            ctx->pc = 0x1CB7B8u;
            goto label_1cb7b8;
        }
    }
    ctx->pc = 0x1CB724u;
    // 0x1cb724: 0x8fc300fc  lw          $v1, 0xFC($fp)
    ctx->pc = 0x1cb724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 252)));
    // 0x1cb728: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CB728u;
    {
        const bool branch_taken_0x1cb728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB728u;
            // 0x1cb72c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb728) {
            ctx->pc = 0x1CB76Cu;
            goto label_1cb76c;
        }
    }
    ctx->pc = 0x1CB730u;
    // 0x1cb730: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1cb730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1cb734: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1cb734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cb738: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB738u;
    {
        const bool branch_taken_0x1cb738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB738u;
            // 0x1cb73c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb738) {
            ctx->pc = 0x1CB758u;
            goto label_1cb758;
        }
    }
    ctx->pc = 0x1CB740u;
label_1cb740:
    // 0x1cb740: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1cb740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cb744: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1cb744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1cb748: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB748u;
    {
        const bool branch_taken_0x1cb748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb748) {
            ctx->pc = 0x1CB74Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB748u;
            // 0x1cb74c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB76Cu;
            goto label_1cb76c;
        }
    }
    ctx->pc = 0x1CB750u;
    // 0x1cb750: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cb750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb754: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1cb754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb758:
    // 0x1cb758: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1cb758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1cb75c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1cb75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1cb760: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CB760u;
    {
        const bool branch_taken_0x1cb760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CB764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB760u;
            // 0x1cb764: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb760) {
            ctx->pc = 0x1CB740u;
            runtime->cooperativeGuestYield();
            goto label_1cb740;
        }
    }
    ctx->pc = 0x1CB768u;
    // 0x1cb768: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb76c:
    // 0x1cb76c: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x1cb76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1cb770: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB770u;
    {
        const bool branch_taken_0x1cb770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB770u;
            // 0x1cb774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb770) {
            ctx->pc = 0x1CB7A4u;
            goto label_1cb7a4;
        }
    }
    ctx->pc = 0x1CB778u;
    // 0x1cb778: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1cb778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cb77c: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x1cb77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x1cb780: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1cb780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cb784: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1cb784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1cb788: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1cb788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1cb78c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1cb78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1cb790: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cb790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb794: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cb794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb798: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB798u;
    {
        const bool branch_taken_0x1cb798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1cb798) {
            ctx->pc = 0x1CB79Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB798u;
            // 0x1cb79c: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB7A8u;
            goto label_1cb7a8;
        }
    }
    ctx->pc = 0x1CB7A0u;
    // 0x1cb7a0: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1cb7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1cb7a4:
    // 0x1cb7a4: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1cb7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1cb7a8:
    // 0x1cb7a8: 0xc068682  jal         func_1A1A08
    ctx->pc = 0x1CB7A8u;
    SET_GPR_U32(ctx, 31, 0x1CB7B0u);
    ctx->pc = 0x1CB7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7A8u;
            // 0x1cb7ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A08u;
    if (runtime->hasFunction(0x1A1A08u)) {
        auto targetFn = runtime->lookupFunction(0x1A1A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7B0u; }
        if (ctx->pc != 0x1CB7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a1a08_0x1a1a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7B0u; }
        if (ctx->pc != 0x1CB7B0u) { return; }
    }
    ctx->pc = 0x1CB7B0u;
    // 0x1cb7b0: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1cb7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_1cb7b4:
    // 0x1cb7b4: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x1cb7b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1cb7b8:
    // 0x1cb7b8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB7B8u;
    {
        const bool branch_taken_0x1cb7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb7b8) {
            ctx->pc = 0x1CB7BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7B8u;
            // 0x1cb7bc: 0x254102a  slt         $v0, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB804u;
            goto label_1cb804;
        }
    }
    ctx->pc = 0x1CB7C0u;
    // 0x1cb7c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cb7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cb7c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cb7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cb7c8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cb7c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cb7cc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cb7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cb7d0: 0x40f809  jalr        $v0
    ctx->pc = 0x1CB7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB7D8u);
        ctx->pc = 0x1CB7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7D0u;
            // 0x1cb7d4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CB7D8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB3E0u: goto label_1cb3e0;
            case 0x1CB3FCu: goto label_1cb3fc;
            case 0x1CB418u: goto label_1cb418;
            case 0x1CB41Cu: goto label_1cb41c;
            case 0x1CB4C8u: goto label_1cb4c8;
            case 0x1CB538u: goto label_1cb538;
            case 0x1CB560u: goto label_1cb560;
            case 0x1CB598u: goto label_1cb598;
            case 0x1CB59Cu: goto label_1cb59c;
            case 0x1CB5A8u: goto label_1cb5a8;
            case 0x1CB5ACu: goto label_1cb5ac;
            case 0x1CB5E4u: goto label_1cb5e4;
            case 0x1CB5F8u: goto label_1cb5f8;
            case 0x1CB68Cu: goto label_1cb68c;
            case 0x1CB690u: goto label_1cb690;
            case 0x1CB6A8u: goto label_1cb6a8;
            case 0x1CB6BCu: goto label_1cb6bc;
            case 0x1CB6C0u: goto label_1cb6c0;
            case 0x1CB6D0u: goto label_1cb6d0;
            case 0x1CB740u: goto label_1cb740;
            case 0x1CB758u: goto label_1cb758;
            case 0x1CB76Cu: goto label_1cb76c;
            case 0x1CB7A4u: goto label_1cb7a4;
            case 0x1CB7A8u: goto label_1cb7a8;
            case 0x1CB7B4u: goto label_1cb7b4;
            case 0x1CB7B8u: goto label_1cb7b8;
            case 0x1CB7F0u: goto label_1cb7f0;
            case 0x1CB804u: goto label_1cb804;
            case 0x1CB898u: goto label_1cb898;
            case 0x1CB89Cu: goto label_1cb89c;
            case 0x1CB8B4u: goto label_1cb8b4;
            case 0x1CB8C8u: goto label_1cb8c8;
            case 0x1CB8CCu: goto label_1cb8cc;
            case 0x1CB8D0u: goto label_1cb8d0;
            case 0x1CB8DCu: goto label_1cb8dc;
            case 0x1CB8E0u: goto label_1cb8e0;
            case 0x1CB920u: goto label_1cb920;
            case 0x1CB948u: goto label_1cb948;
            case 0x1CB94Cu: goto label_1cb94c;
            case 0x1CB984u: goto label_1cb984;
            case 0x1CB988u: goto label_1cb988;
            case 0x1CBA00u: goto label_1cba00;
            case 0x1CBA10u: goto label_1cba10;
            case 0x1CBA14u: goto label_1cba14;
            case 0x1CBB14u: goto label_1cbb14;
            case 0x1CBB18u: goto label_1cbb18;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7D8u; }
            if (ctx->pc != 0x1CB7D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1CB7D8u;
    // 0x1cb7d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb7d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7dc: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1cb7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cb7e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB7E0u;
    {
        const bool branch_taken_0x1cb7e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7E0u;
            // 0x1cb7e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7e0) {
            ctx->pc = 0x1CB7F0u;
            goto label_1cb7f0;
        }
    }
    ctx->pc = 0x1CB7E8u;
    // 0x1cb7e8: 0xc08a2a6  jal         func_228A98
    ctx->pc = 0x1CB7E8u;
    SET_GPR_U32(ctx, 31, 0x1CB7F0u);
    ctx->pc = 0x228A98u;
    if (runtime->hasFunction(0x228A98u)) {
        auto targetFn = runtime->lookupFunction(0x228A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7F0u; }
        if (ctx->pc != 0x1CB7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228A98_0x228a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7F0u; }
        if (ctx->pc != 0x1CB7F0u) { return; }
    }
    ctx->pc = 0x1CB7F0u;
label_1cb7f0:
    // 0x1cb7f0: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB7F0u;
    {
        const bool branch_taken_0x1cb7f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb7f0) {
            ctx->pc = 0x1CB7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7F0u;
            // 0x1cb7f4: 0x254102a  slt         $v0, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB804u;
            goto label_1cb804;
        }
    }
    ctx->pc = 0x1CB7F8u;
    // 0x1cb7f8: 0x54400081  bnel        $v0, $zero, . + 4 + (0x81 << 2)
    ctx->pc = 0x1CB7F8u;
    {
        const bool branch_taken_0x1cb7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb7f8) {
            ctx->pc = 0x1CB7FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7F8u;
            // 0x1cb7fc: 0x8445000c  lh          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBA00u;
            goto label_1cba00;
        }
    }
    ctx->pc = 0x1CB800u;
    // 0x1cb800: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x1cb800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1cb804:
    // 0x1cb804: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CB804u;
    {
        const bool branch_taken_0x1cb804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB804u;
            // 0x1cb808: 0x2d41823  subu        $v1, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb804) {
            ctx->pc = 0x1CB8C8u;
            goto label_1cb8c8;
        }
    }
    ctx->pc = 0x1CB80Cu;
    // 0x1cb80c: 0x2541023  subu        $v0, $s2, $s4
    ctx->pc = 0x1cb80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1cb810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb814: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cb814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cb818: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1cb818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1cb81c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1cb81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1cb820: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1cb820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb824: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1cb824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1cb828: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1cb828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1cb82c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1cb82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1cb830: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1cb830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1cb834: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x1cb834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb838: 0x2484b950  addiu       $a0, $a0, -0x46B0
    ctx->pc = 0x1cb838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
    // 0x1cb83c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1cb83cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1cb840: 0x4601ad01  sub.s       $f20, $f21, $f1
    ctx->pc = 0x1cb840u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x1cb844: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1cb844u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cb848: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1CB848u;
    SET_GPR_U32(ctx, 31, 0x1CB850u);
    ctx->pc = 0x1CB84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB848u;
            // 0x1cb84c: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB850u; }
        if (ctx->pc != 0x1CB850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB850u; }
        if (ctx->pc != 0x1CB850u) { return; }
    }
    ctx->pc = 0x1CB850u;
    // 0x1cb850: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1cb850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1cb854: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1cb854u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb858: 0x0  nop
    ctx->pc = 0x1cb858u;
    // NOP
    // 0x1cb85c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x1CB85Cu;
    {
        const bool branch_taken_0x1cb85c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB85Cu;
            // 0x1cb860: 0x172c00  sll         $a1, $s7, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb85c) {
            ctx->pc = 0x1CB8CCu;
            goto label_1cb8cc;
        }
    }
    ctx->pc = 0x1CB864u;
    // 0x1cb864: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cb864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cb868: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cb868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cb86c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cb86cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cb870: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cb870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cb874: 0x40f809  jalr        $v0
    ctx->pc = 0x1CB874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB87Cu);
        ctx->pc = 0x1CB878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB874u;
            // 0x1cb878: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CB87Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB3E0u: goto label_1cb3e0;
            case 0x1CB3FCu: goto label_1cb3fc;
            case 0x1CB418u: goto label_1cb418;
            case 0x1CB41Cu: goto label_1cb41c;
            case 0x1CB4C8u: goto label_1cb4c8;
            case 0x1CB538u: goto label_1cb538;
            case 0x1CB560u: goto label_1cb560;
            case 0x1CB598u: goto label_1cb598;
            case 0x1CB59Cu: goto label_1cb59c;
            case 0x1CB5A8u: goto label_1cb5a8;
            case 0x1CB5ACu: goto label_1cb5ac;
            case 0x1CB5E4u: goto label_1cb5e4;
            case 0x1CB5F8u: goto label_1cb5f8;
            case 0x1CB68Cu: goto label_1cb68c;
            case 0x1CB690u: goto label_1cb690;
            case 0x1CB6A8u: goto label_1cb6a8;
            case 0x1CB6BCu: goto label_1cb6bc;
            case 0x1CB6C0u: goto label_1cb6c0;
            case 0x1CB6D0u: goto label_1cb6d0;
            case 0x1CB740u: goto label_1cb740;
            case 0x1CB758u: goto label_1cb758;
            case 0x1CB76Cu: goto label_1cb76c;
            case 0x1CB7A4u: goto label_1cb7a4;
            case 0x1CB7A8u: goto label_1cb7a8;
            case 0x1CB7B4u: goto label_1cb7b4;
            case 0x1CB7B8u: goto label_1cb7b8;
            case 0x1CB7F0u: goto label_1cb7f0;
            case 0x1CB804u: goto label_1cb804;
            case 0x1CB898u: goto label_1cb898;
            case 0x1CB89Cu: goto label_1cb89c;
            case 0x1CB8B4u: goto label_1cb8b4;
            case 0x1CB8C8u: goto label_1cb8c8;
            case 0x1CB8CCu: goto label_1cb8cc;
            case 0x1CB8D0u: goto label_1cb8d0;
            case 0x1CB8DCu: goto label_1cb8dc;
            case 0x1CB8E0u: goto label_1cb8e0;
            case 0x1CB920u: goto label_1cb920;
            case 0x1CB948u: goto label_1cb948;
            case 0x1CB94Cu: goto label_1cb94c;
            case 0x1CB984u: goto label_1cb984;
            case 0x1CB988u: goto label_1cb988;
            case 0x1CBA00u: goto label_1cba00;
            case 0x1CBA10u: goto label_1cba10;
            case 0x1CBA14u: goto label_1cba14;
            case 0x1CBB14u: goto label_1cbb14;
            case 0x1CBB18u: goto label_1cbb18;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CB87Cu; }
            if (ctx->pc != 0x1CB87Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1CB87Cu;
    // 0x1cb87c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1cb87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cb880: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB880u;
    {
        const bool branch_taken_0x1cb880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB880u;
            // 0x1cb884: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb880) {
            ctx->pc = 0x1CB898u;
            goto label_1cb898;
        }
    }
    ctx->pc = 0x1CB888u;
    // 0x1cb888: 0xc08a2a6  jal         func_228A98
    ctx->pc = 0x1CB888u;
    SET_GPR_U32(ctx, 31, 0x1CB890u);
    ctx->pc = 0x228A98u;
    if (runtime->hasFunction(0x228A98u)) {
        auto targetFn = runtime->lookupFunction(0x228A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB890u; }
        if (ctx->pc != 0x1CB890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228A98_0x228a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB890u; }
        if (ctx->pc != 0x1CB890u) { return; }
    }
    ctx->pc = 0x1CB890u;
    // 0x1cb890: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB890u;
    {
        const bool branch_taken_0x1cb890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb890) {
            ctx->pc = 0x1CB89Cu;
            goto label_1cb89c;
        }
    }
    ctx->pc = 0x1CB898u;
label_1cb898:
    // 0x1cb898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb89c:
    // 0x1cb89c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CB89Cu;
    {
        const bool branch_taken_0x1cb89c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB89Cu;
            // 0x1cb8a0: 0x172c00  sll         $a1, $s7, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb89c) {
            ctx->pc = 0x1CB8CCu;
            goto label_1cb8cc;
        }
    }
    ctx->pc = 0x1CB8A4u;
    // 0x1cb8a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CB8A4u;
    {
        const bool branch_taken_0x1cb8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB8A4u;
            // 0x1cb8a8: 0x3c040030  lui         $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8a4) {
            ctx->pc = 0x1CB8D0u;
            goto label_1cb8d0;
        }
    }
    ctx->pc = 0x1CB8ACu;
    // 0x1cb8ac: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1CB8ACu;
    {
        const bool branch_taken_0x1cb8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB8ACu;
            // 0x1cb8b0: 0x8445000c  lh          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8ac) {
            ctx->pc = 0x1CBA00u;
            goto label_1cba00;
        }
    }
    ctx->pc = 0x1CB8B4u;
label_1cb8b4:
    // 0x1cb8b4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1cb8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1cb8b8: 0x2ae03  sra         $s5, $v0, 24
    ctx->pc = 0x1cb8b8u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1cb8bc: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x1cb8bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cb8c0: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x1CB8C0u;
    {
        const bool branch_taken_0x1cb8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB8C0u;
            // 0x1cb8c4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8c0) {
            ctx->pc = 0x1CB6D0u;
            runtime->cooperativeGuestYield();
            goto label_1cb6d0;
        }
    }
    ctx->pc = 0x1CB8C8u;
label_1cb8c8:
    // 0x1cb8c8: 0x172c00  sll         $a1, $s7, 16
    ctx->pc = 0x1cb8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
label_1cb8cc:
    // 0x1cb8cc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1cb8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_1cb8d0:
    // 0x1cb8d0: 0x24842d50  addiu       $a0, $a0, 0x2D50
    ctx->pc = 0x1cb8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11600));
    // 0x1cb8d4: 0xc076f1e  jal         func_1DBC78
    ctx->pc = 0x1CB8D4u;
    SET_GPR_U32(ctx, 31, 0x1CB8DCu);
    ctx->pc = 0x1CB8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB8D4u;
            // 0x1cb8d8: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBC78u;
    if (runtime->hasFunction(0x1DBC78u)) {
        auto targetFn = runtime->lookupFunction(0x1DBC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8DCu; }
        if (ctx->pc != 0x1CB8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dbc78_0x1dbd38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8DCu; }
        if (ctx->pc != 0x1CB8DCu) { return; }
    }
    ctx->pc = 0x1CB8DCu;
label_1cb8dc:
    // 0x1cb8dc: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1cb8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1cb8e0:
    // 0x1cb8e0: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1CB8E0u;
    {
        const bool branch_taken_0x1cb8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB8E0u;
            // 0x1cb8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8e0) {
            ctx->pc = 0x1CBA14u;
            goto label_1cba14;
        }
    }
    ctx->pc = 0x1CB8E8u;
    // 0x1cb8e8: 0xc072f40  jal         func_1CBD00
    ctx->pc = 0x1CB8E8u;
    SET_GPR_U32(ctx, 31, 0x1CB8F0u);
    ctx->pc = 0x1CB8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB8E8u;
            // 0x1cb8ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD00u;
    if (runtime->hasFunction(0x1CBD00u)) {
        auto targetFn = runtime->lookupFunction(0x1CBD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8F0u; }
        if (ctx->pc != 0x1CB8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBD00_0x1cbd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8F0u; }
        if (ctx->pc != 0x1CB8F0u) { return; }
    }
    ctx->pc = 0x1CB8F0u;
    // 0x1cb8f0: 0x8fc500fc  lw          $a1, 0xFC($fp)
    ctx->pc = 0x1cb8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 252)));
    // 0x1cb8f4: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CB8F4u;
    {
        const bool branch_taken_0x1cb8f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB8F4u;
            // 0x1cb8f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8f4) {
            ctx->pc = 0x1CB948u;
            goto label_1cb948;
        }
    }
    ctx->pc = 0x1CB8FCu;
    // 0x1cb8fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1cb8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1cb900: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1cb900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cb904: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cb904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cb908: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1cb908u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1cb90c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1cb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1cb910: 0x1045000e  beq         $v0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1CB910u;
    {
        const bool branch_taken_0x1cb910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CB914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB910u;
            // 0x1cb914: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb910) {
            ctx->pc = 0x1CB94Cu;
            goto label_1cb94c;
        }
    }
    ctx->pc = 0x1CB918u;
    // 0x1cb918: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1cb918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1cb91c: 0x0  nop
    ctx->pc = 0x1cb91cu;
    // NOP
label_1cb920:
    // 0x1cb920: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1cb920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cb924: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1cb924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1cb928: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB928u;
    {
        const bool branch_taken_0x1cb928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb928) {
            ctx->pc = 0x1CB92Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB928u;
            // 0x1cb92c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB94Cu;
            goto label_1cb94c;
        }
    }
    ctx->pc = 0x1CB930u;
    // 0x1cb930: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cb930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb934: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1cb934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb938: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1cb938u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1cb93c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1cb93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1cb940: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CB940u;
    {
        const bool branch_taken_0x1cb940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CB944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB940u;
            // 0x1cb944: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb940) {
            ctx->pc = 0x1CB920u;
            runtime->cooperativeGuestYield();
            goto label_1cb920;
        }
    }
    ctx->pc = 0x1CB948u;
label_1cb948:
    // 0x1cb948: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb94c:
    // 0x1cb94c: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x1cb94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1cb950: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB950u;
    {
        const bool branch_taken_0x1cb950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB950u;
            // 0x1cb954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb950) {
            ctx->pc = 0x1CB984u;
            goto label_1cb984;
        }
    }
    ctx->pc = 0x1CB958u;
    // 0x1cb958: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1cb958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cb95c: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x1cb95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x1cb960: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1cb960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cb964: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1cb964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1cb968: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1cb968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1cb96c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1cb96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1cb970: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cb970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb974: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cb974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb978: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB978u;
    {
        const bool branch_taken_0x1cb978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1cb978) {
            ctx->pc = 0x1CB97Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB978u;
            // 0x1cb97c: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB988u;
            goto label_1cb988;
        }
    }
    ctx->pc = 0x1CB980u;
    // 0x1cb980: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1cb980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1cb984:
    // 0x1cb984: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1cb984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1cb988:
    // 0x1cb988: 0xc068682  jal         func_1A1A08
    ctx->pc = 0x1CB988u;
    SET_GPR_U32(ctx, 31, 0x1CB990u);
    ctx->pc = 0x1CB98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB988u;
            // 0x1cb98c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A08u;
    if (runtime->hasFunction(0x1A1A08u)) {
        auto targetFn = runtime->lookupFunction(0x1A1A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB990u; }
        if (ctx->pc != 0x1CB990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a1a08_0x1a1a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB990u; }
        if (ctx->pc != 0x1CB990u) { return; }
    }
    ctx->pc = 0x1CB990u;
    // 0x1cb990: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1CB990u;
    {
        const bool branch_taken_0x1cb990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB990u;
            // 0x1cb994: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb990) {
            ctx->pc = 0x1CBA10u;
            goto label_1cba10;
        }
    }
    ctx->pc = 0x1CB998u;
    // 0x1cb998: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CB998u;
    {
        const bool branch_taken_0x1cb998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB998u;
            // 0x1cb99c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb998) {
            ctx->pc = 0x1CBA10u;
            goto label_1cba10;
        }
    }
    ctx->pc = 0x1CB9A0u;
    // 0x1cb9a0: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1CB9A0u;
    SET_GPR_U32(ctx, 31, 0x1CB9A8u);
    ctx->pc = 0x1CB9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB9A0u;
            // 0x1cb9a4: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9A8u; }
        if (ctx->pc != 0x1CB9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9A8u; }
        if (ctx->pc != 0x1CB9A8u) { return; }
    }
    ctx->pc = 0x1CB9A8u;
    // 0x1cb9a8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1cb9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1cb9ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cb9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb9b0: 0xc6220068  lwc1        $f2, 0x68($s1)
    ctx->pc = 0x1cb9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb9b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cb9b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cb9b8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1cb9b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb9bc: 0x0  nop
    ctx->pc = 0x1cb9bcu;
    // NOP
    // 0x1cb9c0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1CB9C0u;
    {
        const bool branch_taken_0x1cb9c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB9C0u;
            // 0x1cb9c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9c0) {
            ctx->pc = 0x1CBA14u;
            goto label_1cba14;
        }
    }
    ctx->pc = 0x1CB9C8u;
    // 0x1cb9c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cb9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cb9cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cb9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cb9d0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cb9d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cb9d4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cb9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cb9d8: 0x40f809  jalr        $v0
    ctx->pc = 0x1CB9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB9E0u);
        ctx->pc = 0x1CB9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB9D8u;
            // 0x1cb9dc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CB9E0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB3E0u: goto label_1cb3e0;
            case 0x1CB3FCu: goto label_1cb3fc;
            case 0x1CB418u: goto label_1cb418;
            case 0x1CB41Cu: goto label_1cb41c;
            case 0x1CB4C8u: goto label_1cb4c8;
            case 0x1CB538u: goto label_1cb538;
            case 0x1CB560u: goto label_1cb560;
            case 0x1CB598u: goto label_1cb598;
            case 0x1CB59Cu: goto label_1cb59c;
            case 0x1CB5A8u: goto label_1cb5a8;
            case 0x1CB5ACu: goto label_1cb5ac;
            case 0x1CB5E4u: goto label_1cb5e4;
            case 0x1CB5F8u: goto label_1cb5f8;
            case 0x1CB68Cu: goto label_1cb68c;
            case 0x1CB690u: goto label_1cb690;
            case 0x1CB6A8u: goto label_1cb6a8;
            case 0x1CB6BCu: goto label_1cb6bc;
            case 0x1CB6C0u: goto label_1cb6c0;
            case 0x1CB6D0u: goto label_1cb6d0;
            case 0x1CB740u: goto label_1cb740;
            case 0x1CB758u: goto label_1cb758;
            case 0x1CB76Cu: goto label_1cb76c;
            case 0x1CB7A4u: goto label_1cb7a4;
            case 0x1CB7A8u: goto label_1cb7a8;
            case 0x1CB7B4u: goto label_1cb7b4;
            case 0x1CB7B8u: goto label_1cb7b8;
            case 0x1CB7F0u: goto label_1cb7f0;
            case 0x1CB804u: goto label_1cb804;
            case 0x1CB898u: goto label_1cb898;
            case 0x1CB89Cu: goto label_1cb89c;
            case 0x1CB8B4u: goto label_1cb8b4;
            case 0x1CB8C8u: goto label_1cb8c8;
            case 0x1CB8CCu: goto label_1cb8cc;
            case 0x1CB8D0u: goto label_1cb8d0;
            case 0x1CB8DCu: goto label_1cb8dc;
            case 0x1CB8E0u: goto label_1cb8e0;
            case 0x1CB920u: goto label_1cb920;
            case 0x1CB948u: goto label_1cb948;
            case 0x1CB94Cu: goto label_1cb94c;
            case 0x1CB984u: goto label_1cb984;
            case 0x1CB988u: goto label_1cb988;
            case 0x1CBA00u: goto label_1cba00;
            case 0x1CBA10u: goto label_1cba10;
            case 0x1CBA14u: goto label_1cba14;
            case 0x1CBB14u: goto label_1cbb14;
            case 0x1CBB18u: goto label_1cbb18;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9E0u; }
            if (ctx->pc != 0x1CB9E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1CB9E0u;
    // 0x1cb9e0: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1cb9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cb9e4: 0xc08a2a6  jal         func_228A98
    ctx->pc = 0x1CB9E4u;
    SET_GPR_U32(ctx, 31, 0x1CB9ECu);
    ctx->pc = 0x1CB9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB9E4u;
            // 0x1cb9e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228A98u;
    if (runtime->hasFunction(0x228A98u)) {
        auto targetFn = runtime->lookupFunction(0x228A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9ECu; }
        if (ctx->pc != 0x1CB9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228A98_0x228a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9ECu; }
        if (ctx->pc != 0x1CB9ECu) { return; }
    }
    ctx->pc = 0x1CB9ECu;
    // 0x1cb9ec: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB9ECu;
    {
        const bool branch_taken_0x1cb9ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb9ec) {
            ctx->pc = 0x1CB9F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB9ECu;
            // 0x1cb9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBA14u;
            goto label_1cba14;
        }
    }
    ctx->pc = 0x1CB9F4u;
    // 0x1cb9f4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB9F4u;
    {
        const bool branch_taken_0x1cb9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb9f4) {
            ctx->pc = 0x1CB9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB9F4u;
            // 0x1cb9f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBA14u;
            goto label_1cba14;
        }
    }
    ctx->pc = 0x1CB9FCu;
    // 0x1cb9fc: 0x8445000c  lh          $a1, 0xC($v0)
    ctx->pc = 0x1cb9fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_1cba00:
    // 0x1cba00: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x1CBA00u;
    SET_GPR_U32(ctx, 31, 0x1CBA08u);
    ctx->pc = 0x1CBA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA00u;
            // 0x1cba04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA08u; }
        if (ctx->pc != 0x1CBA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA08u; }
        if (ctx->pc != 0x1CBA08u) { return; }
    }
    ctx->pc = 0x1CBA08u;
    // 0x1cba08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBA08u;
    {
        const bool branch_taken_0x1cba08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA08u;
            // 0x1cba0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba08) {
            ctx->pc = 0x1CBA14u;
            goto label_1cba14;
        }
    }
    ctx->pc = 0x1CBA10u;
label_1cba10:
    // 0x1cba10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cba10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cba14:
    // 0x1cba14: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1cba14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cba18: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1cba18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cba1c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1cba1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cba20: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1cba20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cba24: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1cba24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cba28: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1cba28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cba2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1cba2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cba30: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1cba30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cba34: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1cba34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cba38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cba38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cba3c: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1cba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cba40: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1cba40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cba44: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA44u;
            // 0x1cba48: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB3E0u: goto label_1cb3e0;
            case 0x1CB3FCu: goto label_1cb3fc;
            case 0x1CB418u: goto label_1cb418;
            case 0x1CB41Cu: goto label_1cb41c;
            case 0x1CB4C8u: goto label_1cb4c8;
            case 0x1CB538u: goto label_1cb538;
            case 0x1CB560u: goto label_1cb560;
            case 0x1CB598u: goto label_1cb598;
            case 0x1CB59Cu: goto label_1cb59c;
            case 0x1CB5A8u: goto label_1cb5a8;
            case 0x1CB5ACu: goto label_1cb5ac;
            case 0x1CB5E4u: goto label_1cb5e4;
            case 0x1CB5F8u: goto label_1cb5f8;
            case 0x1CB68Cu: goto label_1cb68c;
            case 0x1CB690u: goto label_1cb690;
            case 0x1CB6A8u: goto label_1cb6a8;
            case 0x1CB6BCu: goto label_1cb6bc;
            case 0x1CB6C0u: goto label_1cb6c0;
            case 0x1CB6D0u: goto label_1cb6d0;
            case 0x1CB740u: goto label_1cb740;
            case 0x1CB758u: goto label_1cb758;
            case 0x1CB76Cu: goto label_1cb76c;
            case 0x1CB7A4u: goto label_1cb7a4;
            case 0x1CB7A8u: goto label_1cb7a8;
            case 0x1CB7B4u: goto label_1cb7b4;
            case 0x1CB7B8u: goto label_1cb7b8;
            case 0x1CB7F0u: goto label_1cb7f0;
            case 0x1CB804u: goto label_1cb804;
            case 0x1CB898u: goto label_1cb898;
            case 0x1CB89Cu: goto label_1cb89c;
            case 0x1CB8B4u: goto label_1cb8b4;
            case 0x1CB8C8u: goto label_1cb8c8;
            case 0x1CB8CCu: goto label_1cb8cc;
            case 0x1CB8D0u: goto label_1cb8d0;
            case 0x1CB8DCu: goto label_1cb8dc;
            case 0x1CB8E0u: goto label_1cb8e0;
            case 0x1CB920u: goto label_1cb920;
            case 0x1CB948u: goto label_1cb948;
            case 0x1CB94Cu: goto label_1cb94c;
            case 0x1CB984u: goto label_1cb984;
            case 0x1CB988u: goto label_1cb988;
            case 0x1CBA00u: goto label_1cba00;
            case 0x1CBA10u: goto label_1cba10;
            case 0x1CBA14u: goto label_1cba14;
            case 0x1CBB14u: goto label_1cbb14;
            case 0x1CBB18u: goto label_1cbb18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CBA4Cu;
    // 0x1cba4c: 0x0  nop
    ctx->pc = 0x1cba4cu;
    // NOP
    // 0x1cba50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cba54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cba54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cba58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cba58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cba5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cba5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cba60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cba64: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1cba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1cba68: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CBA68u;
    {
        const bool branch_taken_0x1cba68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA68u;
            // 0x1cba6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba68) {
            ctx->pc = 0x1CBB18u;
            goto label_1cbb18;
        }
    }
    ctx->pc = 0x1CBA70u;
    // 0x1cba70: 0xc072f40  jal         func_1CBD00
    ctx->pc = 0x1CBA70u;
    SET_GPR_U32(ctx, 31, 0x1CBA78u);
    ctx->pc = 0x1CBD00u;
    if (runtime->hasFunction(0x1CBD00u)) {
        auto targetFn = runtime->lookupFunction(0x1CBD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA78u; }
        if (ctx->pc != 0x1CBA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBD00_0x1cbd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA78u; }
        if (ctx->pc != 0x1CBA78u) { return; }
    }
    ctx->pc = 0x1CBA78u;
    // 0x1cba78: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1cba78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1cba7c: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1cba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1cba80: 0x8c63cd58  lw          $v1, -0x32A8($v1)
    ctx->pc = 0x1cba80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954328)));
    // 0x1cba84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cba84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cba88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba8c: 0xc068682  jal         func_1A1A08
    ctx->pc = 0x1CBA8Cu;
    SET_GPR_U32(ctx, 31, 0x1CBA94u);
    ctx->pc = 0x1CBA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA8Cu;
            // 0x1cba90: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A08u;
    if (runtime->hasFunction(0x1A1A08u)) {
        auto targetFn = runtime->lookupFunction(0x1A1A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA94u; }
        if (ctx->pc != 0x1CBA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a1a08_0x1a1a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA94u; }
        if (ctx->pc != 0x1CBA94u) { return; }
    }
    ctx->pc = 0x1CBA94u;
    // 0x1cba94: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1CBA94u;
    {
        const bool branch_taken_0x1cba94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA94u;
            // 0x1cba98: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba94) {
            ctx->pc = 0x1CBB14u;
            goto label_1cbb14;
        }
    }
    ctx->pc = 0x1CBA9Cu;
    // 0x1cba9c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CBA9Cu;
    {
        const bool branch_taken_0x1cba9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA9Cu;
            // 0x1cbaa0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba9c) {
            ctx->pc = 0x1CBB14u;
            goto label_1cbb14;
        }
    }
    ctx->pc = 0x1CBAA4u;
    // 0x1cbaa4: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1CBAA4u;
    SET_GPR_U32(ctx, 31, 0x1CBAACu);
    ctx->pc = 0x1CBAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBAA4u;
            // 0x1cbaa8: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBAACu; }
        if (ctx->pc != 0x1CBAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBAACu; }
        if (ctx->pc != 0x1CBAACu) { return; }
    }
    ctx->pc = 0x1CBAACu;
    // 0x1cbaac: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1cbaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1cbab0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cbab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cbab4: 0xc6220064  lwc1        $f2, 0x64($s1)
    ctx->pc = 0x1cbab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cbab8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cbab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cbabc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1cbabcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cbac0: 0x0  nop
    ctx->pc = 0x1cbac0u;
    // NOP
    // 0x1cbac4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1CBAC4u;
    {
        const bool branch_taken_0x1cbac4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CBAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBAC4u;
            // 0x1cbac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbac4) {
            ctx->pc = 0x1CBB18u;
            goto label_1cbb18;
        }
    }
    ctx->pc = 0x1CBACCu;
    // 0x1cbacc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cbaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cbad0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cbad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cbad4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cbad4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cbad8: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cbad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cbadc: 0x40f809  jalr        $v0
    ctx->pc = 0x1CBADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBAE4u);
        ctx->pc = 0x1CBAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBADCu;
            // 0x1cbae0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBAE4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB3E0u: goto label_1cb3e0;
            case 0x1CB3FCu: goto label_1cb3fc;
            case 0x1CB418u: goto label_1cb418;
            case 0x1CB41Cu: goto label_1cb41c;
            case 0x1CB4C8u: goto label_1cb4c8;
            case 0x1CB538u: goto label_1cb538;
            case 0x1CB560u: goto label_1cb560;
            case 0x1CB598u: goto label_1cb598;
            case 0x1CB59Cu: goto label_1cb59c;
            case 0x1CB5A8u: goto label_1cb5a8;
            case 0x1CB5ACu: goto label_1cb5ac;
            case 0x1CB5E4u: goto label_1cb5e4;
            case 0x1CB5F8u: goto label_1cb5f8;
            case 0x1CB68Cu: goto label_1cb68c;
            case 0x1CB690u: goto label_1cb690;
            case 0x1CB6A8u: goto label_1cb6a8;
            case 0x1CB6BCu: goto label_1cb6bc;
            case 0x1CB6C0u: goto label_1cb6c0;
            case 0x1CB6D0u: goto label_1cb6d0;
            case 0x1CB740u: goto label_1cb740;
            case 0x1CB758u: goto label_1cb758;
            case 0x1CB76Cu: goto label_1cb76c;
            case 0x1CB7A4u: goto label_1cb7a4;
            case 0x1CB7A8u: goto label_1cb7a8;
            case 0x1CB7B4u: goto label_1cb7b4;
            case 0x1CB7B8u: goto label_1cb7b8;
            case 0x1CB7F0u: goto label_1cb7f0;
            case 0x1CB804u: goto label_1cb804;
            case 0x1CB898u: goto label_1cb898;
            case 0x1CB89Cu: goto label_1cb89c;
            case 0x1CB8B4u: goto label_1cb8b4;
            case 0x1CB8C8u: goto label_1cb8c8;
            case 0x1CB8CCu: goto label_1cb8cc;
            case 0x1CB8D0u: goto label_1cb8d0;
            case 0x1CB8DCu: goto label_1cb8dc;
            case 0x1CB8E0u: goto label_1cb8e0;
            case 0x1CB920u: goto label_1cb920;
            case 0x1CB948u: goto label_1cb948;
            case 0x1CB94Cu: goto label_1cb94c;
            case 0x1CB984u: goto label_1cb984;
            case 0x1CB988u: goto label_1cb988;
            case 0x1CBA00u: goto label_1cba00;
            case 0x1CBA10u: goto label_1cba10;
            case 0x1CBA14u: goto label_1cba14;
            case 0x1CBB14u: goto label_1cbb14;
            case 0x1CBB18u: goto label_1cbb18;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBAE4u; }
            if (ctx->pc != 0x1CBAE4u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBAE4u;
    // 0x1cbae4: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1cbae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cbae8: 0xc08a2a6  jal         func_228A98
    ctx->pc = 0x1CBAE8u;
    SET_GPR_U32(ctx, 31, 0x1CBAF0u);
    ctx->pc = 0x1CBAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBAE8u;
            // 0x1cbaec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228A98u;
    if (runtime->hasFunction(0x228A98u)) {
        auto targetFn = runtime->lookupFunction(0x228A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBAF0u; }
        if (ctx->pc != 0x1CBAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228A98_0x228a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBAF0u; }
        if (ctx->pc != 0x1CBAF0u) { return; }
    }
    ctx->pc = 0x1CBAF0u;
    // 0x1cbaf0: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CBAF0u;
    {
        const bool branch_taken_0x1cbaf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbaf0) {
            ctx->pc = 0x1CBAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBAF0u;
            // 0x1cbaf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBB18u;
            goto label_1cbb18;
        }
    }
    ctx->pc = 0x1CBAF8u;
    // 0x1cbaf8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBAF8u;
    {
        const bool branch_taken_0x1cbaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbaf8) {
            ctx->pc = 0x1CBAFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBAF8u;
            // 0x1cbafc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBB18u;
            goto label_1cbb18;
        }
    }
    ctx->pc = 0x1CBB00u;
    // 0x1cbb00: 0x8445000c  lh          $a1, 0xC($v0)
    ctx->pc = 0x1cbb00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cbb04: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x1CBB04u;
    SET_GPR_U32(ctx, 31, 0x1CBB0Cu);
    ctx->pc = 0x1CBB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB04u;
            // 0x1cbb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB0Cu; }
        if (ctx->pc != 0x1CBB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB0Cu; }
        if (ctx->pc != 0x1CBB0Cu) { return; }
    }
    ctx->pc = 0x1CBB0Cu;
    // 0x1cbb0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBB0Cu;
    {
        const bool branch_taken_0x1cbb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB0Cu;
            // 0x1cbb10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb0c) {
            ctx->pc = 0x1CBB18u;
            goto label_1cbb18;
        }
    }
    ctx->pc = 0x1CBB14u;
label_1cbb14:
    // 0x1cbb14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cbb14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbb18:
    // 0x1cbb18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cbb18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cbb1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cbb1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbb20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cbb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbb24: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB24u;
            // 0x1cbb28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB3E0u: goto label_1cb3e0;
            case 0x1CB3FCu: goto label_1cb3fc;
            case 0x1CB418u: goto label_1cb418;
            case 0x1CB41Cu: goto label_1cb41c;
            case 0x1CB4C8u: goto label_1cb4c8;
            case 0x1CB538u: goto label_1cb538;
            case 0x1CB560u: goto label_1cb560;
            case 0x1CB598u: goto label_1cb598;
            case 0x1CB59Cu: goto label_1cb59c;
            case 0x1CB5A8u: goto label_1cb5a8;
            case 0x1CB5ACu: goto label_1cb5ac;
            case 0x1CB5E4u: goto label_1cb5e4;
            case 0x1CB5F8u: goto label_1cb5f8;
            case 0x1CB68Cu: goto label_1cb68c;
            case 0x1CB690u: goto label_1cb690;
            case 0x1CB6A8u: goto label_1cb6a8;
            case 0x1CB6BCu: goto label_1cb6bc;
            case 0x1CB6C0u: goto label_1cb6c0;
            case 0x1CB6D0u: goto label_1cb6d0;
            case 0x1CB740u: goto label_1cb740;
            case 0x1CB758u: goto label_1cb758;
            case 0x1CB76Cu: goto label_1cb76c;
            case 0x1CB7A4u: goto label_1cb7a4;
            case 0x1CB7A8u: goto label_1cb7a8;
            case 0x1CB7B4u: goto label_1cb7b4;
            case 0x1CB7B8u: goto label_1cb7b8;
            case 0x1CB7F0u: goto label_1cb7f0;
            case 0x1CB804u: goto label_1cb804;
            case 0x1CB898u: goto label_1cb898;
            case 0x1CB89Cu: goto label_1cb89c;
            case 0x1CB8B4u: goto label_1cb8b4;
            case 0x1CB8C8u: goto label_1cb8c8;
            case 0x1CB8CCu: goto label_1cb8cc;
            case 0x1CB8D0u: goto label_1cb8d0;
            case 0x1CB8DCu: goto label_1cb8dc;
            case 0x1CB8E0u: goto label_1cb8e0;
            case 0x1CB920u: goto label_1cb920;
            case 0x1CB948u: goto label_1cb948;
            case 0x1CB94Cu: goto label_1cb94c;
            case 0x1CB984u: goto label_1cb984;
            case 0x1CB988u: goto label_1cb988;
            case 0x1CBA00u: goto label_1cba00;
            case 0x1CBA10u: goto label_1cba10;
            case 0x1CBA14u: goto label_1cba14;
            case 0x1CBB14u: goto label_1cbb14;
            case 0x1CBB18u: goto label_1cbb18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CBB2Cu;
    // 0x1cbb2c: 0x0  nop
    ctx->pc = 0x1cbb2cu;
    // NOP
}
