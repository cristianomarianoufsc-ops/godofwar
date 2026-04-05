#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169238
// Address: 0x169238 - 0x169450
void sub_00169238_0x169238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169238_0x169238");
#endif

    ctx->pc = 0x169238u;

    // 0x169238: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x169238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16923c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x16923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x169240: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x169240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x169244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169248: 0x26020360  addiu       $v0, $s0, 0x360
    ctx->pc = 0x169248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x16924c: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x16924cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x169250: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x169250u;
    {
        const bool branch_taken_0x169250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169250) {
            ctx->pc = 0x169254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169250u;
            // 0x169254: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16925Cu;
            goto label_16925c;
        }
    }
    ctx->pc = 0x169258u;
    // 0x169258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x169258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16925c:
    // 0x16925c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16925Cu;
    {
        const bool branch_taken_0x16925c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16925Cu;
            // 0x169260: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16925c) {
            ctx->pc = 0x169288u;
            goto label_169288;
        }
    }
    ctx->pc = 0x169264u;
    // 0x169264: 0xc44000f8  lwc1        $f0, 0xF8($v0)
    ctx->pc = 0x169264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169268: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x169268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x16926c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16926cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x169270: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x169270u;
    SET_GPR_U32(ctx, 31, 0x169278u);
    ctx->pc = 0x169274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169270u;
            // 0x169274: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169278u; }
        if (ctx->pc != 0x169278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169278u; }
        if (ctx->pc != 0x169278u) { return; }
    }
    ctx->pc = 0x169278u;
    // 0x169278: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x169278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16927c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x16927cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x169280: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x169280u;
    {
        const bool branch_taken_0x169280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169280u;
            // 0x169284: 0xe600037c  swc1        $f0, 0x37C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 892), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169280) {
            ctx->pc = 0x169298u;
            goto label_169298;
        }
    }
    ctx->pc = 0x169288u;
label_169288:
    // 0x169288: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x169288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x16928c: 0x342135fc  ori         $at, $at, 0x35FC
    ctx->pc = 0x16928cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13820);
    // 0x169290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x169290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169294: 0xe600037c  swc1        $f0, 0x37C($s0)
    ctx->pc = 0x169294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 892), bits); }
label_169298:
    // 0x169298: 0xc601037c  lwc1        $f1, 0x37C($s0)
    ctx->pc = 0x169298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16929c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16929cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1692a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1692a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1692a4: 0x0  nop
    ctx->pc = 0x1692a4u;
    // NOP
    // 0x1692a8: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1692A8u;
    {
        const bool branch_taken_0x1692a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1692a8) {
            ctx->pc = 0x1692ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1692A8u;
            // 0x1692ac: 0xc605037c  lwc1        $f5, 0x37C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1692C4u;
            goto label_1692c4;
        }
    }
    ctx->pc = 0x1692B0u;
    // 0x1692b0: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x1692b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x1692b4: 0x342135fc  ori         $at, $at, 0x35FC
    ctx->pc = 0x1692b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13820);
    // 0x1692b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1692b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1692bc: 0xe600037c  swc1        $f0, 0x37C($s0)
    ctx->pc = 0x1692bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 892), bits); }
    // 0x1692c0: 0xc605037c  lwc1        $f5, 0x37C($s0)
    ctx->pc = 0x1692c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1692c4:
    // 0x1692c4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1692c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1692c8: 0xc6010368  lwc1        $f1, 0x368($s0)
    ctx->pc = 0x1692c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1692cc: 0x26050100  addiu       $a1, $s0, 0x100
    ctx->pc = 0x1692ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1692d0: 0xc6000370  lwc1        $f0, 0x370($s0)
    ctx->pc = 0x1692d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1692d4: 0xc6020378  lwc1        $f2, 0x378($s0)
    ctx->pc = 0x1692d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1692d8: 0xc604036c  lwc1        $f4, 0x36C($s0)
    ctx->pc = 0x1692d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1692dc: 0xc6030374  lwc1        $f3, 0x374($s0)
    ctx->pc = 0x1692dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1692e0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1692e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x1692e4: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x1692e4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1692e8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1692e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1692ec: 0xc441f1b0  lwc1        $f1, -0xE50($v0)
    ctx->pc = 0x1692ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1692f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1692f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1692f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1692f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1692f8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1692f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1692fc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1692fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x169300: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x169300u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x169304: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x169304u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x169308: 0xe6020380  swc1        $f2, 0x380($s0)
    ctx->pc = 0x169308u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 896), bits); }
    // 0x16930c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16930cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x169310: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x169310u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169314: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x169314u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x169318: 0x4be41b3c  vmove.xyzw  $vf4, $vf3
    ctx->pc = 0x169318u;
    ctx->vu0_vf[4] = ctx->vu0_vf[3];
    // 0x16931c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16931cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x169320: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x169320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169324: 0x4b012100  vaddx.x     $vf4, $vf4, $vf1x
    ctx->pc = 0x169324u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x169328: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x169328u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x16932c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x16932cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x169330: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x169330u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x169334: 0x4be21b3c  vmove.xyzw  $vf2, $vf3
    ctx->pc = 0x169334u;
    ctx->vu0_vf[2] = ctx->vu0_vf[3];
    // 0x169338: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x169338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16933c: 0xc6020384  lwc1        $f2, 0x384($s0)
    ctx->pc = 0x16933cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x169340: 0xc6030388  lwc1        $f3, 0x388($s0)
    ctx->pc = 0x169340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x169344: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x169344u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x169348: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x169348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x16934c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x16934cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x169350: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x169350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x169354: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x169354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x169358: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x169358u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x16935c: 0x46021000  add.s       $f0, $f2, $f2
    ctx->pc = 0x16935cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x169360: 0x3c08bf80  lui         $t0, 0xBF80
    ctx->pc = 0x169360u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49024 << 16));
    // 0x169364: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x169364u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x169368: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x169368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x16936c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x16936cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x169370: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x169370u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x169374: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x169374u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x169378: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x169378u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16937c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x16937cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x169380: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x169380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x169384: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x169384u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169388: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x169388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x16938c: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x16938cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x169390: 0xfa040100  sqc2        $vf4, 0x100($s0)
    ctx->pc = 0x169390u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x169394: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x169394u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x169398: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x169398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x16939c: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x16939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x1693a0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1693a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1693a4: 0xf8a20010  sqc2        $vf2, 0x10($a1)
    ctx->pc = 0x1693a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1693a8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1693a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1693ac: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x1693acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x1693b0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1693b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1693b4: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x1693b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x1693b8: 0x8e08037c  lw          $t0, 0x37C($s0)
    ctx->pc = 0x1693b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x1693bc: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x1693bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1693c0: 0x4be41b3c  vmove.xyzw  $vf4, $vf3
    ctx->pc = 0x1693c0u;
    ctx->vu0_vf[4] = ctx->vu0_vf[3];
    // 0x1693c4: 0x4b012100  vaddx.x     $vf4, $vf4, $vf1x
    ctx->pc = 0x1693c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1693c8: 0xc6000380  lwc1        $f0, 0x380($s0)
    ctx->pc = 0x1693c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1693cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1693ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1693d0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1693d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1693d4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1693d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1693d8: 0x4be21b3c  vmove.xyzw  $vf2, $vf3
    ctx->pc = 0x1693d8u;
    ctx->vu0_vf[2] = ctx->vu0_vf[3];
    // 0x1693dc: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x1693dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1693e0: 0xc6010384  lwc1        $f1, 0x384($s0)
    ctx->pc = 0x1693e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1693e4: 0xc6030388  lwc1        $f3, 0x388($s0)
    ctx->pc = 0x1693e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1693e8: 0x46010880  add.s       $f2, $f1, $f1
    ctx->pc = 0x1693e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1693ec: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x1693ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1693f0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1693f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1693f4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1693f4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1693f8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1693f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1693fc: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1693fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x169400: 0x4a2118c0  vaddx.w     $vf3, $vf3, $vf1x
    ctx->pc = 0x169400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x169404: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x169404u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x169408: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x169408u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16940c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x16940cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x169410: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x169410u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x169414: 0x3c07bf80  lui         $a3, 0xBF80
    ctx->pc = 0x169414u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49024 << 16));
    // 0x169418: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x169418u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x16941c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x16941cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x169420: 0xfa040280  sqc2        $vf4, 0x280($s0)
    ctx->pc = 0x169420u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 640), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x169424: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x169424u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x169428: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x169428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x16942c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x16942cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x169430: 0xf8820010  sqc2        $vf2, 0x10($a0)
    ctx->pc = 0x169430u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169434: 0xf8830020  sqc2        $vf3, 0x20($a0)
    ctx->pc = 0x169434u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x169438: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x169438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16943c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x16943cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169440: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x169440u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x169444: 0x3e00008  jr          $ra
    ctx->pc = 0x169444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169444u;
            // 0x169448: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16925Cu: goto label_16925c;
            case 0x169288u: goto label_169288;
            case 0x169298u: goto label_169298;
            case 0x1692C4u: goto label_1692c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16944Cu;
    // 0x16944c: 0x0  nop
    ctx->pc = 0x16944cu;
    // NOP
}
