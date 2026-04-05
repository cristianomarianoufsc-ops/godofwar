#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102FA0
// Address: 0x102fa0 - 0x103288
void sub_00102FA0_0x102fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102FA0_0x102fa0");
#endif

    ctx->pc = 0x102fa0u;

    // 0x102fa0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x102fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x102fa4: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x102fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x102fa8: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x102fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x102fac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x102facu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102fb0: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x102fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x102fb4: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x102fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x102fb8: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x102fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x102fbc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x102fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x102fc0: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x102fc0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x102fc4: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x102fc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x102fc8: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x102fc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x102fcc: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x102fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x102fd0: 0x8e550070  lw          $s5, 0x70($s2)
    ctx->pc = 0x102fd0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x102fd4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x102fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x102fd8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x102fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x102fdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x102fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102fe0: 0x8e530080  lw          $s3, 0x80($s2)
    ctx->pc = 0x102fe0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x102fe4: 0xc6561138  lwc1        $f22, 0x1138($s2)
    ctx->pc = 0x102fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x102fe8: 0x1a600059  blez        $s3, . + 4 + (0x59 << 2)
    ctx->pc = 0x102FE8u;
    {
        const bool branch_taken_0x102fe8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x102FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102FE8u;
            // 0x102fec: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fe8) {
            ctx->pc = 0x103150u;
            goto label_103150;
        }
    }
    ctx->pc = 0x102FF0u;
label_102ff0:
    // 0x102ff0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x102ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x102ff4: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x102ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x102ff8: 0x244206a0  addiu       $v0, $v0, 0x6A0
    ctx->pc = 0x102ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1696));
    // 0x102ffc: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x102ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x103000: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x103000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x103004: 0x52820020  beql        $s4, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x103004u;
    {
        const bool branch_taken_0x103004 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x103004) {
            ctx->pc = 0x103008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x103004u;
            // 0x103008: 0xda020040  lqc2        $vf2, 0x40($s0) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x103088u;
            goto label_103088;
        }
    }
    ctx->pc = 0x10300Cu;
    // 0x10300c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x10300cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103010: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x103010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x103014: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x103014u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x103018: 0xdea20040  ld          $v0, 0x40($s5)
    ctx->pc = 0x103018u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x10301c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10301Cu;
    {
        const bool branch_taken_0x10301c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x103020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10301Cu;
            // 0x103020: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10301c) {
            ctx->pc = 0x103038u;
            goto label_103038;
        }
    }
    ctx->pc = 0x103024u;
    // 0x103024: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x103024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103028: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x103028u;
    SET_GPR_U32(ctx, 31, 0x103030u);
    ctx->pc = 0x10302Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103028u;
            // 0x10302c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103030u; }
        if (ctx->pc != 0x103030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103030u; }
        if (ctx->pc != 0x103030u) { return; }
    }
    ctx->pc = 0x103030u;
    // 0x103030: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x103030u;
    {
        const bool branch_taken_0x103030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103030u;
            // 0x103034: 0x7ba20040  lq          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103030) {
            ctx->pc = 0x103068u;
            goto label_103068;
        }
    }
    ctx->pc = 0x103038u;
label_103038:
    // 0x103038: 0x8ea2008c  lw          $v0, 0x8C($s5)
    ctx->pc = 0x103038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x10303c: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x10303cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x103040: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x103040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103044: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x103044u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103048: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x103048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x10304c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x10304cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x103050: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x103050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x103054: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x103054u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x103058: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x103058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x10305c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x10305cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x103060: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x103060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x103064: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x103064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_103068:
    // 0x103068: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x103068u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10306c: 0x7ba40060  lq          $a0, 0x60($sp)
    ctx->pc = 0x10306cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x103070: 0x7ba50070  lq          $a1, 0x70($sp)
    ctx->pc = 0x103070u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x103074: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x103074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x103078: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x103078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x10307c: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x10307cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x103080: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x103080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x103084: 0xda020040  lqc2        $vf2, 0x40($s0)
    ctx->pc = 0x103084u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_103088:
    // 0x103088: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x103088u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10308c: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x10308cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x103090: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x103090u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103094: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x103094u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x103098: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x103098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10309c: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x10309cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1030a0: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1030a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1030a4: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1030a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1030a8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1030a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1030ac: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x1030acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1030b0: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1030b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1030b4: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1030b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1030b8: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1030b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1030bc: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1030bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1030c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1030c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1030c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1030c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1030c8: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1030c8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1030cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1030ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1030d0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1030d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1030d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1030d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1030d8: 0x46000004  c1          0x4
    ctx->pc = 0x1030d8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1030dc: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x1030dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1030e0: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x1030e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1030e4: 0x0  nop
    ctx->pc = 0x1030e4u;
    // NOP
    // 0x1030e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1030E8u;
    {
        const bool branch_taken_0x1030e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1030e8) {
            ctx->pc = 0x1030ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1030E8u;
            // 0x1030ec: 0x46002906  mov.s       $f4, $f5 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1030F0u;
            goto label_1030f0;
        }
    }
    ctx->pc = 0x1030F0u;
label_1030f0:
    // 0x1030f0: 0x4605b001  sub.s       $f0, $f22, $f5
    ctx->pc = 0x1030f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[5]);
    // 0x1030f4: 0xc602002c  lwc1        $f2, 0x2C($s0)
    ctx->pc = 0x1030f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1030f8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1030f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1030fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1030fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x103100: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x103100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x103104: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x103104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x103108: 0xfa030010  sqc2        $vf3, 0x10($s0)
    ctx->pc = 0x103108u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10310c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x10310cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x103110: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x103110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x103114: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x103114u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x103118: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x103118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x10311c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x10311cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x103120: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x103120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x103124: 0xe602002c  swc1        $f2, 0x2C($s0)
    ctx->pc = 0x103124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x103128: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x103128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10312c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x10312cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x103130: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x103130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x103134: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x103134u;
    {
        const bool branch_taken_0x103134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x103138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103134u;
            // 0x103138: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103134) {
            ctx->pc = 0x103140u;
            goto label_103140;
        }
    }
    ctx->pc = 0x10313Cu;
    // 0x10313c: 0x46001546  mov.s       $f21, $f2
    ctx->pc = 0x10313cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[2]);
label_103140:
    // 0x103140: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x103140u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x103144: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x103144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x103148: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x103148u;
    {
        const bool branch_taken_0x103148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10314Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103148u;
            // 0x10314c: 0x4604a500  add.s       $f20, $f20, $f4 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103148) {
            ctx->pc = 0x102FF0u;
            runtime->cooperativeGuestYield();
            goto label_102ff0;
        }
    }
    ctx->pc = 0x103150u;
label_103150:
    // 0x103150: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x103150u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103154: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x103154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x103158: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x103158u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10315c: 0x8e530690  lw          $s3, 0x690($s2)
    ctx->pc = 0x10315cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x103160: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x103160u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x103164: 0x1a60003a  blez        $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x103164u;
    {
        const bool branch_taken_0x103164 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x103168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103164u;
            // 0x103168: 0xe6401140  swc1        $f0, 0x1140($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4416), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103164) {
            ctx->pc = 0x103250u;
            goto label_103250;
        }
    }
    ctx->pc = 0x10316Cu;
    // 0x10316c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x10316cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103170: 0x26500090  addiu       $s0, $s2, 0x90
    ctx->pc = 0x103170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x103174: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x103174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103178:
    // 0x103178: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x103178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x10317c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10317cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103180: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x103180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x103184: 0x52820020  beql        $s4, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x103184u;
    {
        const bool branch_taken_0x103184 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x103184) {
            ctx->pc = 0x103188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x103184u;
            // 0x103188: 0xda020010  lqc2        $vf2, 0x10($s0) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x103208u;
            goto label_103208;
        }
    }
    ctx->pc = 0x10318Cu;
    // 0x10318c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x10318cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103190: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x103190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x103194: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x103194u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x103198: 0xdea20040  ld          $v0, 0x40($s5)
    ctx->pc = 0x103198u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x10319c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10319Cu;
    {
        const bool branch_taken_0x10319c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1031A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10319Cu;
            // 0x1031a0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10319c) {
            ctx->pc = 0x1031B8u;
            goto label_1031b8;
        }
    }
    ctx->pc = 0x1031A4u;
    // 0x1031a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1031a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031a8: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x1031A8u;
    SET_GPR_U32(ctx, 31, 0x1031B0u);
    ctx->pc = 0x1031ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1031A8u;
            // 0x1031ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031B0u; }
        if (ctx->pc != 0x1031B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031B0u; }
        if (ctx->pc != 0x1031B0u) { return; }
    }
    ctx->pc = 0x1031B0u;
    // 0x1031b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1031B0u;
    {
        const bool branch_taken_0x1031b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1031B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1031B0u;
            // 0x1031b4: 0x7ba20080  lq          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1031b0) {
            ctx->pc = 0x1031E8u;
            goto label_1031e8;
        }
    }
    ctx->pc = 0x1031B8u;
label_1031b8:
    // 0x1031b8: 0x8ea2008c  lw          $v0, 0x8C($s5)
    ctx->pc = 0x1031b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x1031bc: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x1031bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x1031c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1031c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1031c4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1031c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1031c8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1031c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1031cc: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1031ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1031d0: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1031d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x1031d4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1031d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1031d8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1031d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1031dc: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1031dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1031e0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1031e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1031e4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x1031e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1031e8:
    // 0x1031e8: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x1031e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1031ec: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x1031ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1031f0: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x1031f0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1031f4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1031f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1031f8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1031f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x1031fc: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x1031fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x103200: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x103200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x103204: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x103204u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_103208:
    // 0x103208: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x103208u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10320c: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x10320cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x103210: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x103210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103214: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x103214u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x103218: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x103218u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10321c: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x10321cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x103220: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x103220u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103224: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x103224u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x103228: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x103228u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10322c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x10322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x103230: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x103230u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x103234: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x103234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x103238: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x103238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x10323c: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x10323cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x103240: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x103240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x103244: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x103244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x103248: 0x1620ffcb  bnez        $s1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x103248u;
    {
        const bool branch_taken_0x103248 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10324Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103248u;
            // 0x10324c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103248) {
            ctx->pc = 0x103178u;
            runtime->cooperativeGuestYield();
            goto label_103178;
        }
    }
    ctx->pc = 0x103250u;
label_103250:
    // 0x103250: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x103250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x103254: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x103254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103258: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x103258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10325c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x10325cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x103260: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x103260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x103264: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x103264u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x103268: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x103268u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x10326c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x10326cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x103270: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x103270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x103274: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x103274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x103278: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x103278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10327c: 0x3e00008  jr          $ra
    ctx->pc = 0x10327Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10327Cu;
            // 0x103280: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102FF0u: goto label_102ff0;
            case 0x103038u: goto label_103038;
            case 0x103068u: goto label_103068;
            case 0x103088u: goto label_103088;
            case 0x1030F0u: goto label_1030f0;
            case 0x103140u: goto label_103140;
            case 0x103150u: goto label_103150;
            case 0x103178u: goto label_103178;
            case 0x1031B8u: goto label_1031b8;
            case 0x1031E8u: goto label_1031e8;
            case 0x103208u: goto label_103208;
            case 0x103250u: goto label_103250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103284u;
    // 0x103284: 0x0  nop
    ctx->pc = 0x103284u;
    // NOP
}
