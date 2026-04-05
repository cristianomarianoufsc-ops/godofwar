#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1696c8
// Address: 0x1696c8 - 0x1697d0
void entry_1696c8_0x1697d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1696c8_0x1697d0");
#endif

    ctx->pc = 0x1696c8u;

    // 0x1696c8: 0x3c0144ff  lui         $at, 0x44FF
    ctx->pc = 0x1696c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17663 << 16));
    // 0x1696cc: 0x3421f000  ori         $at, $at, 0xF000
    ctx->pc = 0x1696ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61440);
    // 0x1696d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1696d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1696d4: 0x24850140  addiu       $a1, $a0, 0x140
    ctx->pc = 0x1696d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x1696d8: 0xc481037c  lwc1        $f1, 0x37C($a0)
    ctx->pc = 0x1696d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1696dc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1696dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1696e0: 0xc4830380  lwc1        $f3, 0x380($a0)
    ctx->pc = 0x1696e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1696e4: 0x78820300  lq          $v0, 0x300($a0)
    ctx->pc = 0x1696e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 768)));
    // 0x1696e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1696e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1696ec: 0x70021fc9  prot3w      $v1, $v0
    ctx->pc = 0x1696ecu;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1696f0: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x1696f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1696f4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1696f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1696f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1696f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1696fc: 0xc4820384  lwc1        $f2, 0x384($a0)
    ctx->pc = 0x1696fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x169700: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x169700u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x169704: 0xc4840388  lwc1        $f4, 0x388($a0)
    ctx->pc = 0x169704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x169708: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x169708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16970c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16970cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169710: 0x460518c3  div.s       $f3, $f3, $f5
    ctx->pc = 0x169710u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[5];
    // 0x169714: 0xe4820394  swc1        $f2, 0x394($a0)
    ctx->pc = 0x169714u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 916), bits); }
    // 0x169718: 0xe4840398  swc1        $f4, 0x398($a0)
    ctx->pc = 0x169718u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 920), bits); }
    // 0x16971c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x16971cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x169720: 0xe481038c  swc1        $f1, 0x38C($a0)
    ctx->pc = 0x169720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 908), bits); }
    // 0x169724: 0xe4830390  swc1        $f3, 0x390($a0)
    ctx->pc = 0x169724u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 912), bits); }
    // 0x169728: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x169728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16972c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x16972cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169730: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x169730u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x169734: 0x4be3133c  vmove.xyzw  $vf3, $vf2
    ctx->pc = 0x169734u;
    ctx->vu0_vf[3] = ctx->vu0_vf[2];
    // 0x169738: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x169738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16973c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16973cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169740: 0x4b0118c0  vaddx.x     $vf3, $vf3, $vf1x
    ctx->pc = 0x169740u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x169744: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x169744u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x169748: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x169748u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16974c: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x16974cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x169750: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x169750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x169754: 0x46041040  add.s       $f1, $f2, $f4
    ctx->pc = 0x169754u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x169758: 0x46041001  sub.s       $f0, $f2, $f4
    ctx->pc = 0x169758u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x16975c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x16975cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x169760: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x169760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x169764: 0x24070000  addiu       $a3, $zero, 0x0
    ctx->pc = 0x169764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x169768: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x169768u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x16976c: 0x46021000  add.s       $f0, $f2, $f2
    ctx->pc = 0x16976cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x169770: 0x3c09bf80  lui         $t1, 0xBF80
    ctx->pc = 0x169770u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)49024 << 16));
    // 0x169774: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x169774u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x169778: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x169778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x16977c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x16977cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x169780: 0x71281389  pcpyld      $v0, $t1, $t0
    ctx->pc = 0x169780u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x169784: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x169784u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x169788: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x169788u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16978c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x16978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x169790: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x169790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x169794: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x169794u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169798: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x169798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16979c: 0x71281389  pcpyld      $v0, $t1, $t0
    ctx->pc = 0x16979cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1697a0: 0xf8830140  sqc2        $vf3, 0x140($a0)
    ctx->pc = 0x1697a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 320), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1697a4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1697a4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1697a8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1697a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1697ac: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1697acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1697b0: 0xf8a20010  sqc2        $vf2, 0x10($a1)
    ctx->pc = 0x1697b0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1697b4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1697b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1697b8: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x1697b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x1697bc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1697bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1697c0: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x1697c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x1697c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1697C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1697C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1697C4u;
            // 0x1697c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1697CCu;
    // 0x1697cc: 0x0  nop
    ctx->pc = 0x1697ccu;
    // NOP
}
