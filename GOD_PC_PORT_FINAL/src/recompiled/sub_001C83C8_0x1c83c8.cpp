#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C83C8
// Address: 0x1c83c8 - 0x1c87c0
void sub_001C83C8_0x1c83c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C83C8_0x1c83c8");
#endif

    ctx->pc = 0x1c83c8u;

    // 0x1c83c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c83c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c83cc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1c83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1c83d0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c83d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1c83d4: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x1c83d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1c83d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c83d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83dc: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1c83dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1c83e0: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1c83e0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1c83e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c83e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c83e8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1c83e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1c83ec: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1c83ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c83f0: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c83f4: 0xc6140170  lwc1        $f20, 0x170($s0)
    ctx->pc = 0x1c83f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c83f8: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1c83f8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x1c83fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c83fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c8400: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8400u;
    {
        const bool branch_taken_0x1c8400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8400u;
            // 0x1c8404: 0xc60d02bc  lwc1        $f13, 0x2BC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8400) {
            ctx->pc = 0x1C8414u;
            goto label_1c8414;
        }
    }
    ctx->pc = 0x1C8408u;
    // 0x1c8408: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1c8408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c840c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C840Cu;
    {
        const bool branch_taken_0x1c840c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C840Cu;
            // 0x1c8410: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c840c) {
            ctx->pc = 0x1C8434u;
            goto label_1c8434;
        }
    }
    ctx->pc = 0x1C8414u;
label_1c8414:
    // 0x1c8414: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c8414u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c8418: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x1c8418u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c841c: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1c841cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1c8420: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8424: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c8424u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c842c: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x1C842Cu;
    {
        const bool branch_taken_0x1c842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C842Cu;
            // 0x1c8430: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c842c) {
            ctx->pc = 0x1C876Cu;
            goto label_1c876c;
        }
    }
    ctx->pc = 0x1C8434u;
label_1c8434:
    // 0x1c8434: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c8434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c8438: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C8438u;
    {
        const bool branch_taken_0x1c8438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8438) {
            ctx->pc = 0x1C843Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8438u;
            // 0x1c843c: 0x7a020260  lq          $v0, 0x260($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C849Cu;
            goto label_1c849c;
        }
    }
    ctx->pc = 0x1C8440u;
    // 0x1c8440: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c8440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c8444: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1c8444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1c8448: 0x144000c9  bnez        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x1C8448u;
    {
        const bool branch_taken_0x1c8448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C844Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8448u;
            // 0x1c844c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8448) {
            ctx->pc = 0x1C8770u;
            goto label_1c8770;
        }
    }
    ctx->pc = 0x1C8450u;
    // 0x1c8450: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x1c8450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
    // 0x1c8454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8458: 0x7a020080  lq          $v0, 0x80($s0)
    ctx->pc = 0x1c8458u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1c845c: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c845cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c8460: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8464: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c8464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c8468: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c8468u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c846c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c846cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c8470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8474: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c8474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c8478: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x1c8478u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c847c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1c847cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8480: 0x0  nop
    ctx->pc = 0x1c8480u;
    // NOP
    // 0x1c8484: 0x450000ba  bc1f        . + 4 + (0xBA << 2)
    ctx->pc = 0x1C8484u;
    {
        const bool branch_taken_0x1c8484 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8484u;
            // 0x1c8488: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8484) {
            ctx->pc = 0x1C8770u;
            goto label_1c8770;
        }
    }
    ctx->pc = 0x1C848Cu;
    // 0x1c848c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c848cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8490: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8494: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x1C8494u;
    {
        const bool branch_taken_0x1c8494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8494u;
            // 0x1c8498: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8494) {
            ctx->pc = 0x1C8770u;
            goto label_1c8770;
        }
    }
    ctx->pc = 0x1C849Cu;
label_1c849c:
    // 0x1c849c: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x1c849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c84a0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c84a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c84a4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1c84a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1c84a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c84a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c84ac: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c84acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c84b0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c84b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c84b4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1c84b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c84b8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c84b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c84bc: 0x8e030320  lw          $v1, 0x320($s0)
    ctx->pc = 0x1c84bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c84c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c84c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c84c4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c84c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c84c8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1c84c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c84cc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c84ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c84d0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1c84d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c84d4: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1c84d4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c84d8: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1c84d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1c84dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c84dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c84e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c84e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c84e4: 0xc461010c  lwc1        $f1, 0x10C($v1)
    ctx->pc = 0x1c84e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c84e8: 0x46000004  c1          0x4
    ctx->pc = 0x1c84e8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c84ec: 0x46030542  mul.s       $f21, $f0, $f3
    ctx->pc = 0x1c84ecu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1c84f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c84f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c84f4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c84f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c84f8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1c84f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1c84fc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1c84fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1c8500: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c8500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c8504: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x1c8504u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x1c8508: 0x460310a8  max.s       $f2, $f2, $f3
    ctx->pc = 0x1c8508u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[3]);
    // 0x1c850c: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1c850cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8510: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c8510u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c8514: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8518: 0x46041369  min.s       $f13, $f2, $f4
    ctx->pc = 0x1c8518u;
    ctx->f[13] = std::min(ctx->f[2], ctx->f[4]);
    // 0x1c851c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1c851cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1c8520: 0x46006946  mov.s       $f5, $f13
    ctx->pc = 0x1c8520u;
    ctx->f[5] = FPU_MOV_S(ctx->f[13]);
    // 0x1c8524: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c8524u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1c8528: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x1c8528u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x1c852c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c852cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8530: 0x460403a9  min.s       $f14, $f0, $f4
    ctx->pc = 0x1c8530u;
    ctx->f[14] = std::min(ctx->f[0], ctx->f[4]);
    // 0x1c8534: 0x46016832  c.eq.s      $f13, $f1
    ctx->pc = 0x1c8534u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8538: 0x0  nop
    ctx->pc = 0x1c8538u;
    // NOP
    // 0x1c853c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C853Cu;
    {
        const bool branch_taken_0x1c853c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C853Cu;
            // 0x1c8540: 0x46007086  mov.s       $f2, $f14 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c853c) {
            ctx->pc = 0x1C8558u;
            goto label_1c8558;
        }
    }
    ctx->pc = 0x1C8544u;
    // 0x1c8544: 0x46017032  c.eq.s      $f14, $f1
    ctx->pc = 0x1c8544u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[14], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8548: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8548u;
    {
        const bool branch_taken_0x1c8548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8548) {
            ctx->pc = 0x1C8558u;
            goto label_1c8558;
        }
    }
    ctx->pc = 0x1C8550u;
    // 0x1c8550: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1C8550u;
    {
        const bool branch_taken_0x1c8550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8550u;
            // 0x1c8554: 0xc60102c0  lwc1        $f1, 0x2C0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8550) {
            ctx->pc = 0x1C86B8u;
            goto label_1c86b8;
        }
    }
    ctx->pc = 0x1C8558u;
label_1c8558:
    // 0x1c8558: 0x46002805  abs.s       $f0, $f5
    ctx->pc = 0x1c8558u;
    ctx->f[0] = FPU_ABS_S(ctx->f[5]);
    // 0x1c855c: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x1c855cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x1c8560: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c8560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c8564: 0x46001383  div.s       $f14, $f2, $f0
    ctx->pc = 0x1c8564u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[14] = ctx->f[2] / ctx->f[0];
    // 0x1c8568: 0x46002b43  div.s       $f13, $f5, $f0
    ctx->pc = 0x1c8568u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[13] = ctx->f[5] / ctx->f[0];
    // 0x1c856c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c856cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8570: 0x44076800  mfc1        $a3, $f13
    ctx->pc = 0x1c8570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1c8574: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x1c8574u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1c8578: 0x44077000  mfc1        $a3, $f14
    ctx->pc = 0x1c8578u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[14], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1c857c: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x1c857cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1c8580: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1c8580u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1c8584: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1c8584u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1c8588: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1c8588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c858c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1c858cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c8590: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1c8590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c8594: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1c8594u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8598: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1c8598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c859c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c859cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c85a0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c85a0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c85a4: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1c85a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c85a8: 0x4a0002ff  vnop
    ctx->pc = 0x1c85a8u;
    // NOP operation, no action needed for VU0
    // 0x1c85ac: 0x4a0002ff  vnop
    ctx->pc = 0x1c85acu;
    // NOP operation, no action needed for VU0
    // 0x1c85b0: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1c85b0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c85b4: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x1c85b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c85b8: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1c85b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c85bc: 0x70051789  pexew       $v0, $a1
    ctx->pc = 0x1c85bcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c85c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c85c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c85c4: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x1C85C4u;
    SET_GPR_U32(ctx, 31, 0x1C85CCu);
    ctx->pc = 0x1C85C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C85C4u;
            // 0x1c85c8: 0xfba20040  sqc2        $vf2, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C85CCu; }
        if (ctx->pc != 0x1C85CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C85CCu; }
        if (ctx->pc != 0x1C85CCu) { return; }
    }
    ctx->pc = 0x1C85CCu;
    // 0x1c85cc: 0xc60402c0  lwc1        $f4, 0x2C0($s0)
    ctx->pc = 0x1c85ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c85d0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1c85d0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1c85d4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1c85d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1c85d8: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c85d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c85dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c85dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c85e0: 0x46040881  sub.s       $f2, $f1, $f4
    ctx->pc = 0x1c85e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1c85e4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c85e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c85e8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C85E8u;
    {
        const bool branch_taken_0x1c85e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c85e8) {
            ctx->pc = 0x1C8608u;
            goto label_1c8608;
        }
    }
    ctx->pc = 0x1C85F0u;
    // 0x1c85f0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1c85f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1c85f4: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c85f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c85f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c85f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c85fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C85FCu;
    {
        const bool branch_taken_0x1c85fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C85FCu;
            // 0x1c8600: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85fc) {
            ctx->pc = 0x1C8630u;
            goto label_1c8630;
        }
    }
    ctx->pc = 0x1C8604u;
    // 0x1c8604: 0x0  nop
    ctx->pc = 0x1c8604u;
    // NOP
label_1c8608:
    // 0x1c8608: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x1c8608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x1c860c: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c860cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c8610: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8614: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c8614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8618: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8618u;
    {
        const bool branch_taken_0x1c8618 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8618) {
            ctx->pc = 0x1C8630u;
            goto label_1c8630;
        }
    }
    ctx->pc = 0x1C8620u;
    // 0x1c8620: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1c8620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1c8624: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c8624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c8628: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c862c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c862cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c8630:
    // 0x1c8630: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x1c8630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x1c8634: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1c8634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1c8638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c863c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1c863cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1c8640: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x1c8640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
    // 0x1c8644: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c8644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c8648: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c8648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c864c: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x1c864cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[0];
    // 0x1c8650: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1c8650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1c8654: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c8654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c8658: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c8658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c865c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c865cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c8660: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c8660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c8664: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x1c8664u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x1c8668: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1c8668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c866c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C866Cu;
    {
        const bool branch_taken_0x1c866c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c866c) {
            ctx->pc = 0x1C8688u;
            goto label_1c8688;
        }
    }
    ctx->pc = 0x1C8674u;
    // 0x1c8674: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1c8674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1c8678: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c8678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c867c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c867cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8680: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C8680u;
    {
        const bool branch_taken_0x1c8680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8680u;
            // 0x1c8684: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8680) {
            ctx->pc = 0x1C86B4u;
            goto label_1c86b4;
        }
    }
    ctx->pc = 0x1C8688u;
label_1c8688:
    // 0x1c8688: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x1c8688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x1c868c: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c868cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c8690: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8694: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8698: 0x0  nop
    ctx->pc = 0x1c8698u;
    // NOP
    // 0x1c869c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1C869Cu;
    {
        const bool branch_taken_0x1c869c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c869c) {
            ctx->pc = 0x1C86A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C869Cu;
            // 0x1c86a0: 0xe60102c0  swc1        $f1, 0x2C0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C86B8u;
            goto label_1c86b8;
        }
    }
    ctx->pc = 0x1C86A4u;
    // 0x1c86a4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1c86a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1c86a8: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c86a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c86ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c86acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c86b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c86b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c86b4:
    // 0x1c86b4: 0xe60102c0  swc1        $f1, 0x2C0($s0)
    ctx->pc = 0x1c86b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
label_1c86b8:
    // 0x1c86b8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1c86b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1c86bc: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c86bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c86c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c86c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c86c4: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x1c86c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c86c8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C86C8u;
    {
        const bool branch_taken_0x1c86c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c86c8) {
            ctx->pc = 0x1C86ECu;
            goto label_1c86ec;
        }
    }
    ctx->pc = 0x1C86D0u;
    // 0x1c86d0: 0x460d0801  sub.s       $f0, $f1, $f13
    ctx->pc = 0x1c86d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x1c86d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c86d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c86d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c86d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c86dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c86dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c86e0: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x1c86e0u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[13];
    // 0x1c86e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C86E4u;
    {
        const bool branch_taken_0x1c86e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c86e4) {
            ctx->pc = 0x1C870Cu;
            goto label_1c870c;
        }
    }
    ctx->pc = 0x1C86ECu;
label_1c86ec:
    // 0x1c86ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c86ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c86f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c86f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c86f4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C86F4u;
    {
        const bool branch_taken_0x1c86f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c86f4) {
            ctx->pc = 0x1C8718u;
            goto label_1c8718;
        }
    }
    ctx->pc = 0x1C86FCu;
    // 0x1c86fc: 0x460d0803  div.s       $f0, $f1, $f13
    ctx->pc = 0x1c86fcu;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[13];
    // 0x1c8700: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c8700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8704: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8708: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x1c8708u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c870c:
    // 0x1c870c: 0x46006805  abs.s       $f0, $f13
    ctx->pc = 0x1c870cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[13]);
    // 0x1c8710: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C8710u;
    {
        const bool branch_taken_0x1c8710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8710u;
            // 0x1c8714: 0x46000b81  sub.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8710) {
            ctx->pc = 0x1C876Cu;
            goto label_1c876c;
        }
    }
    ctx->pc = 0x1C8718u;
label_1c8718:
    // 0x1c8718: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1c8718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x1c871c: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c871cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c8720: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8724: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c8724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8728: 0x0  nop
    ctx->pc = 0x1c8728u;
    // NOP
    // 0x1c872c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1C872Cu;
    {
        const bool branch_taken_0x1c872c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c872c) {
            ctx->pc = 0x1C8730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C872Cu;
            // 0x1c8730: 0x460d0800  add.s       $f0, $f1, $f13 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8758u;
            goto label_1c8758;
        }
    }
    ctx->pc = 0x1C8734u;
    // 0x1c8734: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c8734u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1c8738: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1c8738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1c873c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c873cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c8740: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c8740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8744: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8748: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x1c8748u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c874c: 0x46006805  abs.s       $f0, $f13
    ctx->pc = 0x1c874cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[13]);
    // 0x1c8750: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8750u;
    {
        const bool branch_taken_0x1c8750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8750u;
            // 0x1c8754: 0x46020380  add.s       $f14, $f0, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8750) {
            ctx->pc = 0x1C876Cu;
            goto label_1c876c;
        }
    }
    ctx->pc = 0x1C8758u;
label_1c8758:
    // 0x1c8758: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1c8758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1c875c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c875cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8760: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x1c8760u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[13];
    // 0x1c8764: 0x46006805  abs.s       $f0, $f13
    ctx->pc = 0x1c8764u;
    ctx->f[0] = FPU_ABS_S(ctx->f[13]);
    // 0x1c8768: 0x46010380  add.s       $f14, $f0, $f1
    ctx->pc = 0x1c8768u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c876c:
    // 0x1c876c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c876cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1c8770:
    // 0x1c8770: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1c8770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1c8774: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x1c8774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c877c: 0xc6130168  lwc1        $f19, 0x168($s0)
    ctx->pc = 0x1c877cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x1c8780: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c8780u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c8784: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x1c8784u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[0];
    // 0x1c8788: 0x8e040328  lw          $a0, 0x328($s0)
    ctx->pc = 0x1c8788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1c878c: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x1c878cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
    // 0x1c8790: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x1c8790u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x1c8794: 0x46007c46  mov.s       $f17, $f15
    ctx->pc = 0x1c8794u;
    ctx->f[17] = FPU_MOV_S(ctx->f[15]);
    // 0x1c8798: 0xc07da14  jal         func_1F6850
    ctx->pc = 0x1C8798u;
    SET_GPR_U32(ctx, 31, 0x1C87A0u);
    ctx->pc = 0x1C879Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8798u;
            // 0x1c879c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6850u;
    if (runtime->hasFunction(0x1F6850u)) {
        auto targetFn = runtime->lookupFunction(0x1F6850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87A0u; }
        if (ctx->pc != 0x1C87A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6850_0x1f6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87A0u; }
        if (ctx->pc != 0x1C87A0u) { return; }
    }
    ctx->pc = 0x1C87A0u;
    // 0x1c87a0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c87a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c87a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c87a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c87a8: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x1c87a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c87ac: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1c87acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c87b0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1c87b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c87b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C87B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C87B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C87B4u;
            // 0x1c87b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8414u: goto label_1c8414;
            case 0x1C8434u: goto label_1c8434;
            case 0x1C849Cu: goto label_1c849c;
            case 0x1C8558u: goto label_1c8558;
            case 0x1C8608u: goto label_1c8608;
            case 0x1C8630u: goto label_1c8630;
            case 0x1C8688u: goto label_1c8688;
            case 0x1C86B4u: goto label_1c86b4;
            case 0x1C86B8u: goto label_1c86b8;
            case 0x1C86ECu: goto label_1c86ec;
            case 0x1C870Cu: goto label_1c870c;
            case 0x1C8718u: goto label_1c8718;
            case 0x1C8758u: goto label_1c8758;
            case 0x1C876Cu: goto label_1c876c;
            case 0x1C8770u: goto label_1c8770;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C87BCu;
    // 0x1c87bc: 0x0  nop
    ctx->pc = 0x1c87bcu;
    // NOP
}
