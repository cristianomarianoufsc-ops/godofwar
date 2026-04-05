#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00221800
// Address: 0x221800 - 0x2219c8
void sub_00221800_0x221800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221800_0x221800");
#endif

    ctx->pc = 0x221800u;

    // 0x221800: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x221800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x221804: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x221804u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x221808: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x221808u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x22180c: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x22180cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x221810: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x221810u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x221814: 0x4be3106c  vsub.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x221814u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221818: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x221818u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x22181c: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x22181cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x221820: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x221820u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x221824: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x221824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x221828: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x221828u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x22182c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x22182cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x221830: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x221830u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x221834: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x221834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x221838: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x221838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x22183c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22183cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x221840: 0xe7b900a8  swc1        $f25, 0xA8($sp)
    ctx->pc = 0x221840u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x221844: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x221844u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x221848: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x221848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22184c: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x22184cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x221850: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x221850u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x221854: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x221854u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221858: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x221858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22185c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x22185cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x221860: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x221860u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x221864: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x221864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x221868: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x221868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x22186c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x22186cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x221870: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x221870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221874: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x221874u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221878: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x221878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22187c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x22187cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221880: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x221880u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221884: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x221884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x221888: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x221888u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22188c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22188cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221890: 0x46000644  c1          0x644
    ctx->pc = 0x221890u;
    ctx->f[25] = FPU_SQRT_S(ctx->f[0]);
    // 0x221894: 0x0  nop
    ctx->pc = 0x221894u;
    // NOP
label_221898:
    // 0x221898: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x221898u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22189c: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x22189Cu;
    SET_GPR_U32(ctx, 31, 0x2218A4u);
    ctx->pc = 0x2218A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22189Cu;
            // 0x2218a0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2218A4u; }
        if (ctx->pc != 0x2218A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2218A4u; }
        if (ctx->pc != 0x2218A4u) { return; }
    }
    ctx->pc = 0x2218A4u;
    // 0x2218a4: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x2218a4u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x2218a8: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x2218a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x2218ac: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x2218acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x2218b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2218b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2218b4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2218b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2218b8: 0x4600b847  neg.s       $f1, $f23
    ctx->pc = 0x2218b8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[23]);
    // 0x2218bc: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x2218bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2218c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2218c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2218c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2218c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2218c8: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x2218c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2218cc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2218ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2218d0: 0x46182902  mul.s       $f4, $f5, $f24
    ctx->pc = 0x2218d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[24]);
    // 0x2218d4: 0x4600c883  div.s       $f2, $f25, $f0
    ctx->pc = 0x2218d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[25] * 0.0f); } else ctx->f[2] = ctx->f[25] / ctx->f[0];
    // 0x2218d8: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2218d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2218dc: 0x460220c2  mul.s       $f3, $f4, $f2
    ctx->pc = 0x2218dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2218e0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2218E0u;
    {
        const bool branch_taken_0x2218e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2218E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2218E0u;
            // 0x2218e4: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218e0) {
            ctx->pc = 0x221904u;
            goto label_221904;
        }
    }
    ctx->pc = 0x2218E8u;
    // 0x2218e8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2218e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2218ec: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2218ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2218f0: 0x0  nop
    ctx->pc = 0x2218f0u;
    // NOP
    // 0x2218f4: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x2218F4u;
    {
        const bool branch_taken_0x2218f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2218f4) {
            ctx->pc = 0x2218F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2218F4u;
            // 0x2218f8: 0x4615a501  sub.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x221938u;
            goto label_221938;
        }
    }
    ctx->pc = 0x2218FCu;
    // 0x2218fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2218FCu;
    {
        const bool branch_taken_0x2218fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2218FCu;
            // 0x221900: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218fc) {
            ctx->pc = 0x221938u;
            goto label_221938;
        }
    }
    ctx->pc = 0x221904u;
label_221904:
    // 0x221904: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x221904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x221908: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x221908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22190c: 0x0  nop
    ctx->pc = 0x22190cu;
    // NOP
    // 0x221910: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x221910u;
    {
        const bool branch_taken_0x221910 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x221910) {
            ctx->pc = 0x221914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221910u;
            // 0x221914: 0x4615a501  sub.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x221938u;
            goto label_221938;
        }
    }
    ctx->pc = 0x221918u;
    // 0x221918: 0x4602b802  mul.s       $f0, $f23, $f2
    ctx->pc = 0x221918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x22191c: 0x46002045  abs.s       $f1, $f4
    ctx->pc = 0x22191cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[4]);
    // 0x221920: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x221920u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x221924: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x221924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221928: 0x0  nop
    ctx->pc = 0x221928u;
    // NOP
    // 0x22192c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x22192Cu;
    {
        const bool branch_taken_0x22192c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22192c) {
            ctx->pc = 0x221930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22192Cu;
            // 0x221930: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x221938u;
            goto label_221938;
        }
    }
    ctx->pc = 0x221934u;
    // 0x221934: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x221934u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_221938:
    // 0x221938: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x221938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22193c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22193cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221940: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x221940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x221944: 0x601ffd4  bgez        $s0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x221944u;
    {
        const bool branch_taken_0x221944 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x221948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221944u;
            // 0x221948: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221944) {
            ctx->pc = 0x221898u;
            runtime->cooperativeGuestYield();
            goto label_221898;
        }
    }
    ctx->pc = 0x22194Cu;
    // 0x22194c: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x22194cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221950: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x221950u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x221954: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x221954u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221958: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x221958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x22195c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x22195cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221960: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x221960u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x221964: 0x4a0003bf  vwaitq
    ctx->pc = 0x221964u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x221968: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x221968u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22196c: 0x4a0002ff  vnop
    ctx->pc = 0x22196cu;
    // NOP operation, no action needed for VU0
    // 0x221970: 0x4a0002ff  vnop
    ctx->pc = 0x221970u;
    // NOP operation, no action needed for VU0
    // 0x221974: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x221974u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x221978: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x221978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22197c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x22197cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x221980: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x221980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221984: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x221984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x221988: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x221988u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x22198c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x22198cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x221990: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x221990u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221994: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x221994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x221998: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x221998u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22199c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22199cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2219a0: 0xc7b900a8  lwc1        $f25, 0xA8($sp)
    ctx->pc = 0x2219a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2219a4: 0xc7b800a0  lwc1        $f24, 0xA0($sp)
    ctx->pc = 0x2219a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2219a8: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x2219a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2219ac: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x2219acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2219b0: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2219b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2219b4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2219b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2219b8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2219b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2219bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2219BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2219C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2219BCu;
            // 0x2219c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221898u: goto label_221898;
            case 0x221904u: goto label_221904;
            case 0x221938u: goto label_221938;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2219C4u;
    // 0x2219c4: 0x0  nop
    ctx->pc = 0x2219c4u;
    // NOP
}
