#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DFF68
// Address: 0x1dff68 - 0x1e0530
void sub_001DFF68_0x1dff68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFF68_0x1dff68");
#endif

    ctx->pc = 0x1dff68u;

    // 0x1dff68: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x1dff68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x1dff6c: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1dff6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1dff70: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x1dff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x1dff74: 0xe7b701e8  swc1        $f23, 0x1E8($sp)
    ctx->pc = 0x1dff74u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x1dff78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dff78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff7c: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x1dff7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x1dff80: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x1dff80u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x1dff84: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x1dff84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x1dff88: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x1dff88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x1dff8c: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x1dff8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x1dff90: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x1dff90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x1dff94: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x1dff94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x1dff98: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x1dff98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x1dff9c: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x1dff9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x1dffa0: 0xc514c658  lwc1        $f20, -0x39A8($t0)
    ctx->pc = 0x1dffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dffa4: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x1dffa4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dffa8: 0x78c70030  lq          $a3, 0x30($a2)
    ctx->pc = 0x1dffa8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1dffac: 0x7fa50150  sq          $a1, 0x150($sp)
    ctx->pc = 0x1dffacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 5));
    // 0x1dffb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dffb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dffb4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1dffb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1dffb8: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x1dffb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1dffbc: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x1dffbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1dffc0: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x1dffc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x1dffc4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1dffc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x1dffc8: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x1dffc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    // 0x1dffcc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1dffccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1dffd0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1dffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1dffd4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1dffd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1dffd8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1dffd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x1dffdc: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1dffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1dffe0: 0x40f809  jalr        $v0
    ctx->pc = 0x1DFFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DFFE8u);
        ctx->pc = 0x1DFFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFFE0u;
            // 0x1dffe4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFFE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E00A8u: goto label_1e00a8;
            case 0x1E02D0u: goto label_1e02d0;
            case 0x1E02D8u: goto label_1e02d8;
            case 0x1E02E8u: goto label_1e02e8;
            case 0x1E02ECu: goto label_1e02ec;
            case 0x1E0310u: goto label_1e0310;
            case 0x1E0348u: goto label_1e0348;
            case 0x1E0368u: goto label_1e0368;
            case 0x1E0410u: goto label_1e0410;
            case 0x1E0418u: goto label_1e0418;
            case 0x1E041Cu: goto label_1e041c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFFE8u; }
            if (ctx->pc != 0x1DFFE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFFE8u;
    // 0x1dffe8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1dffe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1dffec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dffecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dfff0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1dfff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1dfff4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1dfff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dfff8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1dfff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1dfffc: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x1dfffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x1e0000: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1e0000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1e0004: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e0004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e0008: 0xc621016c  lwc1        $f1, 0x16C($s1)
    ctx->pc = 0x1e0008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e000c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e000cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e0010: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e0010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e0014: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1e0014u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1e0018: 0x4603a503  div.s       $f20, $f20, $f3
    ctx->pc = 0x1e0018u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[3];
    // 0x1e001c: 0x4615a528  max.s       $f20, $f20, $f21
    ctx->pc = 0x1e001cu;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[21]);
    // 0x1e0020: 0xda210110  lqc2        $vf1, 0x110($s1)
    ctx->pc = 0x1e0020u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1e0024: 0x4616a529  min.s       $f20, $f20, $f22
    ctx->pc = 0x1e0024u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[22]);
    // 0x1e0028: 0xdba20150  lqc2        $vf2, 0x150($sp)
    ctx->pc = 0x1e0028u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e002c: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1e002cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0030: 0xfa210100  sqc2        $vf1, 0x100($s1)
    ctx->pc = 0x1e0030u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0034: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e0034u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e0038: 0x26340050  addiu       $s4, $s1, 0x50
    ctx->pc = 0x1e0038u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1e003c: 0xda220130  lqc2        $vf2, 0x130($s1)
    ctx->pc = 0x1e003cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1e0040: 0x7e220110  sq          $v0, 0x110($s1)
    ctx->pc = 0x1e0040u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 272), GPR_VEC(ctx, 2));
    // 0x1e0044: 0xda210050  lqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1e0044u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1e0048: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1e0048u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e004c: 0xda810010  lqc2        $vf1, 0x10($s4)
    ctx->pc = 0x1e004cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1e0050: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1e0050u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e0054: 0xda810020  lqc2        $vf1, 0x20($s4)
    ctx->pc = 0x1e0054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1e0058: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1e0058u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e005c: 0xda810030  lqc2        $vf1, 0x30($s4)
    ctx->pc = 0x1e005cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1e0060: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1e0060u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e0064: 0xdba20150  lqc2        $vf2, 0x150($sp)
    ctx->pc = 0x1e0064u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e0068: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e0068u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e006c: 0xfba20160  sqc2        $vf2, 0x160($sp)
    ctx->pc = 0x1e006cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e0070: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x1e0070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0074: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x1e0074u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0078: 0x0  nop
    ctx->pc = 0x1e0078u;
    // NOP
    // 0x1e007c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1E007Cu;
    {
        const bool branch_taken_0x1e007c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E007Cu;
            // 0x1e0080: 0x26320150  addiu       $s2, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e007c) {
            ctx->pc = 0x1E00A8u;
            goto label_1e00a8;
        }
    }
    ctx->pc = 0x1E0084u;
    // 0x1e0084: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1e0084u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0088: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x1e0088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1e008c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1e008cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0090: 0x7e230090  sq          $v1, 0x90($s1)
    ctx->pc = 0x1e0090u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 3));
    // 0x1e0094: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x1e0094u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x1e0098: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1e0098u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e009c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1E009Cu;
    {
        const bool branch_taken_0x1e009c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E00A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E009Cu;
            // 0x1e00a0: 0x7c820020  sq          $v0, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e009c) {
            ctx->pc = 0x1E02E8u;
            goto label_1e02e8;
        }
    }
    ctx->pc = 0x1E00A4u;
    // 0x1e00a4: 0x0  nop
    ctx->pc = 0x1e00a4u;
    // NOP
label_1e00a8:
    // 0x1e00a8: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x1e00a8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e00ac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e00acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e00b0: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x1e00b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e00b4: 0x26330090  addiu       $s3, $s1, 0x90
    ctx->pc = 0x1e00b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1e00b8: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1E00B8u;
    SET_GPR_U32(ctx, 31, 0x1E00C0u);
    ctx->pc = 0x1E00BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E00B8u;
            // 0x1e00bc: 0x7ba70020  lq          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00C0u; }
        if (ctx->pc != 0x1E00C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00C0u; }
        if (ctx->pc != 0x1E00C0u) { return; }
    }
    ctx->pc = 0x1E00C0u;
    // 0x1e00c0: 0x7a250090  lq          $a1, 0x90($s1)
    ctx->pc = 0x1e00c0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1e00c4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e00c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e00c8: 0x7a660010  lq          $a2, 0x10($s3)
    ctx->pc = 0x1e00c8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1e00cc: 0x7a670020  lq          $a3, 0x20($s3)
    ctx->pc = 0x1e00ccu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1e00d0: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1E00D0u;
    SET_GPR_U32(ctx, 31, 0x1E00D8u);
    ctx->pc = 0x1E00D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E00D0u;
            // 0x1e00d4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00D8u; }
        if (ctx->pc != 0x1E00D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00D8u; }
        if (ctx->pc != 0x1E00D8u) { return; }
    }
    ctx->pc = 0x1E00D8u;
    // 0x1e00d8: 0xc62c0150  lwc1        $f12, 0x150($s1)
    ctx->pc = 0x1e00d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e00dc: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1e00dcu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1e00e0: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x1e00e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e00e4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1e00e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1e00e8: 0xc061084  jal         func_184210
    ctx->pc = 0x1E00E8u;
    SET_GPR_U32(ctx, 31, 0x1E00F0u);
    ctx->pc = 0x1E00ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E00E8u;
            // 0x1e00ec: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00F0u; }
        if (ctx->pc != 0x1E00F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00F0u; }
        if (ctx->pc != 0x1E00F0u) { return; }
    }
    ctx->pc = 0x1E00F0u;
    // 0x1e00f0: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1e00f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e00f4: 0x4be3186a  vmul.xyzw   $vf1, $vf3, $vf3
    ctx->pc = 0x1e00f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e00f8: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1e00f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e00fc: 0x4a210842  vaddz.w     $vf1, $vf1, $vf1z
    ctx->pc = 0x1e00fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0100: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1e0100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e0104: 0x4b011083  vaddw.x     $vf2, $vf2, $vf1w
    ctx->pc = 0x1e0104u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e0108: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e0108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e010c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e010cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e0110: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e0110u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e0114: 0x4be0191c  vmulq.xyzw  $vf4, $vf3, $Q
    ctx->pc = 0x1e0114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e0118: 0x4a0002ff  vnop
    ctx->pc = 0x1e0118u;
    // NOP operation, no action needed for VU0
    // 0x1e011c: 0x4a0002ff  vnop
    ctx->pc = 0x1e011cu;
    // NOP operation, no action needed for VU0
    // 0x1e0120: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1e0120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e0124: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e0124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e0128: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e0128u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e012c: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1e012cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0130: 0x4be120da  vmulz.xyzw  $vf3, $vf4, $vf1z
    ctx->pc = 0x1e0130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e0134: 0x4be12159  vmuly.xyzw  $vf5, $vf4, $vf1y
    ctx->pc = 0x1e0134u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e0138: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1e0138u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e013c: 0x4a832842  vaddz.y     $vf1, $vf5, $vf3z
    ctx->pc = 0x1e013cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0140: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0144: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x1e0144u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e0148: 0x4b013045  vsuby.x     $vf1, $vf6, $vf1y
    ctx->pc = 0x1e0148u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e014c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e014cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0150: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e0150u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0154: 0x4b032883  vaddw.x     $vf2, $vf5, $vf3w
    ctx->pc = 0x1e0154u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e0158: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1e0158u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e015c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e015cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0160: 0x4b051847  vsubw.x     $vf1, $vf3, $vf5w
    ctx->pc = 0x1e0160u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0164: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1e0164u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1e0168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e016c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e016cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0170: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e0170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0174: 0x70c22b89  pcpyld      $a1, $a2, $v0
    ctx->pc = 0x1e0174u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1e0178: 0x4b032847  vsubw.x     $vf1, $vf5, $vf3w
    ctx->pc = 0x1e0178u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e017c: 0x70a32cc8  ppacw       $a1, $a1, $v1
    ctx->pc = 0x1e017cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x1e0180: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e0180u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0184: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e0184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0188: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x1e0188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x1e018c: 0x4b032042  vaddz.x     $vf1, $vf4, $vf3z
    ctx->pc = 0x1e018cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0190: 0x4b013044  vsubx.x     $vf1, $vf6, $vf1x
    ctx->pc = 0x1e0190u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0194: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e0194u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0198: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e0198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e019c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e019cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01a0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1e01a0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1e01a4: 0x4a841843  vaddw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1e01a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e01a8: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1e01a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e01ac: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e01acu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e01b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e01b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01b4: 0x71022389  pcpyld      $a0, $t0, $v0
    ctx->pc = 0x1e01b4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1e01b8: 0x4a841847  vsubw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1e01b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e01bc: 0x708324c8  ppacw       $a0, $a0, $v1
    ctx->pc = 0x1e01bcu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1e01c0: 0x4b0518c3  vaddw.x     $vf3, $vf3, $vf5w
    ctx->pc = 0x1e01c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e01c4: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1e01c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e01c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e01c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01cc: 0x4b052101  vaddy.x     $vf4, $vf4, $vf5y
    ctx->pc = 0x1e01ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e01d0: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1e01d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e01d4: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1e01d4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e01d8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1e01d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01dc: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x1e01dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    // 0x1e01e0: 0x4b043184  vsubx.x     $vf6, $vf6, $vf4x
    ctx->pc = 0x1e01e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1e01e4: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1e01e4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1e01e8: 0x7e250090  sq          $a1, 0x90($s1)
    ctx->pc = 0x1e01e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 5));
    // 0x1e01ec: 0x48263000  qmfc2.ni    $a2, $vf6
    ctx->pc = 0x1e01ecu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1e01f0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1e01f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01f4: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x1e01f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1e01f8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1e01f8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1e01fc: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1e01fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1e0200: 0x7e640010  sq          $a0, 0x10($s3)
    ctx->pc = 0x1e0200u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 4));
    // 0x1e0204: 0x7e620020  sq          $v0, 0x20($s3)
    ctx->pc = 0x1e0204u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
    // 0x1e0208: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1e0208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e020c: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x1e020cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0210: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x1e0210u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x1e0214: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e0214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1e0218: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x1e0218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x1e021c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e021cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e0220: 0x4601b036  c.le.s      $f22, $f1
    ctx->pc = 0x1e0220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0224: 0x0  nop
    ctx->pc = 0x1e0224u;
    // NOP
    // 0x1e0228: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x1E0228u;
    {
        const bool branch_taken_0x1e0228 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E022Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0228u;
            // 0x1e022c: 0xe6210150  swc1        $f1, 0x150($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0228) {
            ctx->pc = 0x1E02D8u;
            goto label_1e02d8;
        }
    }
    ctx->pc = 0x1E0230u;
    // 0x1e0230: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1e0230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e0234: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1e0234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1e0238: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e0238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e023c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E023Cu;
    {
        const bool branch_taken_0x1e023c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E023Cu;
            // 0x1e0240: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e023c) {
            ctx->pc = 0x1E02D0u;
            goto label_1e02d0;
        }
    }
    ctx->pc = 0x1E0244u;
    // 0x1e0244: 0xda620010  lqc2        $vf2, 0x10($s3)
    ctx->pc = 0x1e0244u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1e0248: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e0248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e024c: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e024cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e0250: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e0250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0254: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e0254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0258: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x1e0258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x1e025c: 0x3421be77  ori         $at, $at, 0xBE77
    ctx->pc = 0x1e025cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48759);
    // 0x1e0260: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e0260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0264: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1e0264u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0268: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e0268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e026c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e026cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0270: 0x0  nop
    ctx->pc = 0x1e0270u;
    // NOP
    // 0x1e0274: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1E0274u;
    {
        const bool branch_taken_0x1e0274 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0274u;
            // 0x1e0278: 0xdba10020  lqc2        $vf1, 0x20($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0274) {
            ctx->pc = 0x1E02D0u;
            goto label_1e02d0;
        }
    }
    ctx->pc = 0x1E027Cu;
    // 0x1e027c: 0xda620020  lqc2        $vf2, 0x20($s3)
    ctx->pc = 0x1e027cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1e0280: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e0280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e0284: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e0284u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0288: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e0288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e028c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1e028cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0290: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e0290u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0294: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e0294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0298: 0x0  nop
    ctx->pc = 0x1e0298u;
    // NOP
    // 0x1e029c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1E029Cu;
    {
        const bool branch_taken_0x1e029c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E02A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E029Cu;
            // 0x1e02a0: 0xdba10000  lqc2        $vf1, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e029c) {
            ctx->pc = 0x1E02D0u;
            goto label_1e02d0;
        }
    }
    ctx->pc = 0x1E02A4u;
    // 0x1e02a4: 0xda220090  lqc2        $vf2, 0x90($s1)
    ctx->pc = 0x1e02a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1e02a8: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e02a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e02ac: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e02acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e02b0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e02b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e02b4: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1e02b4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e02b8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1e02b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e02bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e02bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e02c0: 0x0  nop
    ctx->pc = 0x1e02c0u;
    // NOP
    // 0x1e02c4: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1E02C4u;
    {
        const bool branch_taken_0x1e02c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e02c4) {
            ctx->pc = 0x1E02C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E02C4u;
            // 0x1e02c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E02D0u;
            goto label_1e02d0;
        }
    }
    ctx->pc = 0x1E02CCu;
    // 0x1e02cc: 0x0  nop
    ctx->pc = 0x1e02ccu;
    // NOP
label_1e02d0:
    // 0x1e02d0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E02D0u;
    {
        const bool branch_taken_0x1e02d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e02d0) {
            ctx->pc = 0x1E02D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E02D0u;
            // 0x1e02d4: 0xc6400008  lwc1        $f0, 0x8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E02ECu;
            goto label_1e02ec;
        }
    }
    ctx->pc = 0x1E02D8u;
label_1e02d8:
    // 0x1e02d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e02d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e02dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e02dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e02e0: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1e02e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1e02e4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1e02e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1e02e8:
    // 0x1e02e8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1e02e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e02ec:
    // 0x1e02ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e02ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e02f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e02f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e02f4: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x1e02f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e02f8: 0x0  nop
    ctx->pc = 0x1e02f8u;
    // NOP
    // 0x1e02fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E02FCu;
    {
        const bool branch_taken_0x1e02fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E02FCu;
            // 0x1e0300: 0x7ba70160  lq          $a3, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e02fc) {
            ctx->pc = 0x1E0310u;
            goto label_1e0310;
        }
    }
    ctx->pc = 0x1E0304u;
    // 0x1e0304: 0x7e870030  sq          $a3, 0x30($s4)
    ctx->pc = 0x1e0304u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), GPR_VEC(ctx, 7));
    // 0x1e0308: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1E0308u;
    {
        const bool branch_taken_0x1e0308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E030Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0308u;
            // 0x1e030c: 0x7e2700c0  sq          $a3, 0xC0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 192), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0308) {
            ctx->pc = 0x1E0418u;
            goto label_1e0418;
        }
    }
    ctx->pc = 0x1E0310u;
label_1e0310:
    // 0x1e0310: 0xda2200d0  lqc2        $vf2, 0xD0($s1)
    ctx->pc = 0x1e0310u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1e0314: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x1e0314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1e0318: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1e0318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x1e031c: 0xf8620030  sqc2        $vf2, 0x30($v1)
    ctx->pc = 0x1e031cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e0320: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1e0320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e0324: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1e0324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1e0328: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0328u;
    {
        const bool branch_taken_0x1e0328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E032Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0328u;
            // 0x1e032c: 0x7ba20160  lq          $v0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0328) {
            ctx->pc = 0x1E0348u;
            goto label_1e0348;
        }
    }
    ctx->pc = 0x1E0330u;
    // 0x1e0330: 0xda810030  lqc2        $vf1, 0x30($s4)
    ctx->pc = 0x1e0330u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1e0334: 0xdba30160  lqc2        $vf3, 0x160($sp)
    ctx->pc = 0x1e0334u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e0338: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1e0338u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e033c: 0x4be11068  vadd.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1e033cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0340: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x1e0340u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0344: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x1e0344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1e0348:
    // 0x1e0348: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1e0348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1e034c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x1e034cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x1e0350: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1e0350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e0354: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0358: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0358u;
    {
        const bool branch_taken_0x1e0358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E035Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0358u;
            // 0x1e035c: 0xd8630030  lqc2        $vf3, 0x30($v1) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0358) {
            ctx->pc = 0x1E0368u;
            goto label_1e0368;
        }
    }
    ctx->pc = 0x1E0360u;
    // 0x1e0360: 0xdba10160  lqc2        $vf1, 0x160($sp)
    ctx->pc = 0x1e0360u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e0364: 0x4a8100c1  vaddy.y     $vf3, $vf0, $vf1y
    ctx->pc = 0x1e0364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1e0368:
    // 0x1e0368: 0xdba20160  lqc2        $vf2, 0x160($sp)
    ctx->pc = 0x1e0368u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e036c: 0x4be3106c  vsub.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x1e036cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0370: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1e0370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0374: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1e0374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0378: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e0378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1e037c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1e037cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e0380: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1e0380u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1e0384: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e0384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0388: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1e0388u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e038c: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x1e038cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0390: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x1e0390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0394: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x1e0394u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x1e0398: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1e0398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e039c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e039cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1e03a0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e03a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1e03a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e03a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e03a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e03a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e03ac: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1e03acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e03b0: 0x0  nop
    ctx->pc = 0x1e03b0u;
    // NOP
    // 0x1e03b4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1E03B4u;
    {
        const bool branch_taken_0x1e03b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E03B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E03B4u;
            // 0x1e03b8: 0xe6410008  swc1        $f1, 0x8($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e03b4) {
            ctx->pc = 0x1E0410u;
            goto label_1e0410;
        }
    }
    ctx->pc = 0x1E03BCu;
    // 0x1e03bc: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1e03bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e03c0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1e03c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1e03c4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E03C4u;
    {
        const bool branch_taken_0x1e03c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e03c4) {
            ctx->pc = 0x1E03C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E03C4u;
            // 0x1e03c8: 0x8e240174  lw          $a0, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E041Cu;
            goto label_1e041c;
        }
    }
    ctx->pc = 0x1E03CCu;
    // 0x1e03cc: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x1e03ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e03d0: 0xd8820030  lqc2        $vf2, 0x30($a0)
    ctx->pc = 0x1e03d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1e03d4: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e03d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e03d8: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1e03d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e03dc: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1e03dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e03e0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1e03e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e03e4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1e03e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1e03e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e03e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e03ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e03ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e03f0: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x1e03f0u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e03f4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1e03f4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e03f8: 0x46000004  c1          0x4
    ctx->pc = 0x1e03f8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e03fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e03fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0400: 0x0  nop
    ctx->pc = 0x1e0400u;
    // NOP
    // 0x1e0404: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0404u;
    {
        const bool branch_taken_0x1e0404 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0404) {
            ctx->pc = 0x1E0408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0404u;
            // 0x1e0408: 0x8e240174  lw          $a0, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E041Cu;
            goto label_1e041c;
        }
    }
    ctx->pc = 0x1E040Cu;
    // 0x1e040c: 0x0  nop
    ctx->pc = 0x1e040cu;
    // NOP
label_1e0410:
    // 0x1e0410: 0xe643000c  swc1        $f3, 0xC($s2)
    ctx->pc = 0x1e0410u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1e0414: 0xe6430008  swc1        $f3, 0x8($s2)
    ctx->pc = 0x1e0414u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1e0418:
    // 0x1e0418: 0x8e240174  lw          $a0, 0x174($s1)
    ctx->pc = 0x1e0418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
label_1e041c:
    // 0x1e041c: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x1e041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x1e0420: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e0420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e0424: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1e0424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1e0428: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1e0428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1e042c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1e042cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1e0430: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1e0430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e0434: 0xae240174  sw          $a0, 0x174($s1)
    ctx->pc = 0x1e0434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 4));
    // 0x1e0438: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x1e0438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1e043c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1e043cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e0440: 0x7e2200d0  sq          $v0, 0xD0($s1)
    ctx->pc = 0x1e0440u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 208), GPR_VEC(ctx, 2));
    // 0x1e0444: 0xd8620030  lqc2        $vf2, 0x30($v1)
    ctx->pc = 0x1e0444u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e0448: 0x4408b800  mfc1        $t0, $f23
    ctx->pc = 0x1e0448u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1e044c: 0x48a81800  qmtc2.ni    $t0, $vf3
    ctx->pc = 0x1e044cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1e0450: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e0450u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0454: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x1e0454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0458: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e0458u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e045c: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1e045cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e0460: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1e0460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0464: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1e0464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0468: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e0468u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e046c: 0xf8620030  sqc2        $vf2, 0x30($v1)
    ctx->pc = 0x1e046cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e0470: 0xc6200168  lwc1        $f0, 0x168($s1)
    ctx->pc = 0x1e0470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0474: 0xda240090  lqc2        $vf4, 0x90($s1)
    ctx->pc = 0x1e0474u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1e0478: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1e0478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e047c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1e047cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e0480: 0xfba40120  sqc2        $vf4, 0x120($sp)
    ctx->pc = 0x1e0480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e0484: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1e0484u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e0488: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x1e0488u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e048c: 0xfba30130  sqc2        $vf3, 0x130($sp)
    ctx->pc = 0x1e048cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e0490: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1e0490u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e0494: 0xd8620020  lqc2        $vf2, 0x20($v1)
    ctx->pc = 0x1e0494u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e0498: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1e0498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e049c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1e049cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e04a0: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x1e04a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e04a4: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1e04a4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1e04a8: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1e04a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e04ac: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1e04acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1e04b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e04b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04b4: 0xdcc4bdf8  ld          $a0, -0x4208($a2)
    ctx->pc = 0x1e04b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x1e04b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1e04b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e04bc: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x1e04bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e04c0: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x1e04c0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x1e04c4: 0xfba200b0  sqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x1e04c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e04c8: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1e04c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e04cc: 0xf8a40020  sqc2        $vf4, 0x20($a1)
    ctx->pc = 0x1e04ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e04d0: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x1e04d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e04d4: 0x84a30060  lh          $v1, 0x60($a1)
    ctx->pc = 0x1e04d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1e04d8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1e04d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e04dc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1e04dcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1e04e0: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x1e04e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1e04e4: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x1e04e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x1e04e8: 0x83380a  movz        $a3, $a0, $v1
    ctx->pc = 0x1e04e8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x1e04ec: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1e04ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04f0: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x1e04f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e04f4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1e04f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e04f8: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x1e04f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1e04fc: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x1e04fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
    // 0x1e0500: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x1e0500u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1e0504: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1e0504u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e0508: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x1e0508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e050c: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x1e050cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x1e0510: 0xfcc4bdf8  sd          $a0, -0x4208($a2)
    ctx->pc = 0x1e0510u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 4));
    // 0x1e0514: 0xc7b701e8  lwc1        $f23, 0x1E8($sp)
    ctx->pc = 0x1e0514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e0518: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x1e0518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e051c: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x1e051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e0520: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x1e0520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e0524: 0xfca30068  sd          $v1, 0x68($a1)
    ctx->pc = 0x1e0524u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 3));
    // 0x1e0528: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E052Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0528u;
            // 0x1e052c: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E00A8u: goto label_1e00a8;
            case 0x1E02D0u: goto label_1e02d0;
            case 0x1E02D8u: goto label_1e02d8;
            case 0x1E02E8u: goto label_1e02e8;
            case 0x1E02ECu: goto label_1e02ec;
            case 0x1E0310u: goto label_1e0310;
            case 0x1E0348u: goto label_1e0348;
            case 0x1E0368u: goto label_1e0368;
            case 0x1E0410u: goto label_1e0410;
            case 0x1E0418u: goto label_1e0418;
            case 0x1E041Cu: goto label_1e041c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0530u;
}
