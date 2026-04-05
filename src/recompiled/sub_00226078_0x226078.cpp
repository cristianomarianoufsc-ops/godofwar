#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226078
// Address: 0x226078 - 0x226418
void sub_00226078_0x226078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226078_0x226078");
#endif

    ctx->pc = 0x226078u;

    // 0x226078: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x226078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x22607c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x22607cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x226080: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x226080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
    // 0x226084: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x226084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226088: 0x7fa600a0  sq          $a2, 0xA0($sp)
    ctx->pc = 0x226088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 6));
    // 0x22608c: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x22608cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x226090: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x226090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x226094: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x226094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x226098: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x226098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x22609c: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x22609cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2260a0: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x2260a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2260a4: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2260a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2260a8: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x2260a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x2260ac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2260acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2260b0: 0x8c42ecd0  lw          $v0, -0x1330($v0)
    ctx->pc = 0x2260b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962384)));
    // 0x2260b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2260b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2260b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2260b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2260bc: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x2260bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2260c0: 0x120000ab  beqz        $s0, . + 4 + (0xAB << 2)
    ctx->pc = 0x2260C0u;
    {
        const bool branch_taken_0x2260c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2260C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2260C0u;
            // 0x2260c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260c0) {
            ctx->pc = 0x226370u;
            goto label_226370;
        }
    }
    ctx->pc = 0x2260C8u;
    // 0x2260c8: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x2260c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x2260cc: 0x0  nop
    ctx->pc = 0x2260ccu;
    // NOP
label_2260d0:
    // 0x2260d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2260d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260d4: 0x50880b  movn        $s1, $v0, $s0
    ctx->pc = 0x2260d4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x2260d8: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x2260d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2260dc: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x2260dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2260e0: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2260E0u;
    {
        const bool branch_taken_0x2260e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2260E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2260E0u;
            // 0x2260e4: 0x3c04002a  lui         $a0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260e0) {
            ctx->pc = 0x226364u;
            goto label_226364;
        }
    }
    ctx->pc = 0x2260E8u;
    // 0x2260e8: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x2260e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x2260ec: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x2260ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2260f0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2260f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2260f4: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2260f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2260f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2260f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2260fc: 0xc482c658  lwc1        $f2, -0x39A8($a0)
    ctx->pc = 0x2260fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226100: 0x2642006c  addiu       $v0, $s2, 0x6C
    ctx->pc = 0x226100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x226104: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x226104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x226108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22610c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22610cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226110: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x226110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x226114: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x226114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x226118: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x226118u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22611c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x22611cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x226120: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x226120u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226124: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x226124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x226128: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x226128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22612c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22612cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x226130: 0x18c0008c  blez        $a2, . + 4 + (0x8C << 2)
    ctx->pc = 0x226130u;
    {
        const bool branch_taken_0x226130 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x226134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226130u;
            // 0x226134: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x226130) {
            ctx->pc = 0x226364u;
            goto label_226364;
        }
    }
    ctx->pc = 0x226138u;
    // 0x226138: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x226138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22613c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22613cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226140: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x226140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x226144: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x226144u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x226148: 0xdba300a0  lqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x226148u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22614c: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x22614cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x226150: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x226150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x226154: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x226154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x226158: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x226158u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x22615c: 0x4be110d8  vmulx.xyzw  $vf3, $vf2, $vf1x
    ctx->pc = 0x22615cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x226160: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x226160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x226164: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x226164u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x226168: 0x4be32128  vadd.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x226168u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22616c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x22616cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x226170: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x226170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226174: 0xc056df8  jal         func_15B7E0
    ctx->pc = 0x226174u;
    SET_GPR_U32(ctx, 31, 0x22617Cu);
    ctx->pc = 0x226178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226174u;
            // 0x226178: 0x8e2500a8  lw          $a1, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B7E0u;
    if (runtime->hasFunction(0x15B7E0u)) {
        auto targetFn = runtime->lookupFunction(0x15B7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22617Cu; }
        if (ctx->pc != 0x22617Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B7E0_0x15b7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22617Cu; }
        if (ctx->pc != 0x22617Cu) { return; }
    }
    ctx->pc = 0x22617Cu;
    // 0x22617c: 0x0  nop
    ctx->pc = 0x22617cu;
    // NOP
label_226180:
    // 0x226180: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x226180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_226184:
    // 0x226184: 0x50400078  beql        $v0, $zero, . + 4 + (0x78 << 2)
    ctx->pc = 0x226184u;
    {
        const bool branch_taken_0x226184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226184) {
            ctx->pc = 0x226188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x226184u;
            // 0x226188: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x226368u;
            goto label_226368;
        }
    }
    ctx->pc = 0x22618Cu;
    // 0x22618c: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x22618Cu;
    SET_GPR_U32(ctx, 31, 0x226194u);
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226194u; }
        if (ctx->pc != 0x226194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226194u; }
        if (ctx->pc != 0x226194u) { return; }
    }
    ctx->pc = 0x226194u;
    // 0x226194: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x226194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x226198: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x226198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22619c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x22619cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2261a0: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x2261a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x2261a4: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x2261a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x2261a8: 0x4614ad42  mul.s       $f21, $f21, $f20
    ctx->pc = 0x2261a8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x2261ac: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2261acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2261b0: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x2261B0u;
    SET_GPR_U32(ctx, 31, 0x2261B8u);
    ctx->pc = 0x2261B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2261B0u;
            // 0x2261b4: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261B8u; }
        if (ctx->pc != 0x2261B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261B8u; }
        if (ctx->pc != 0x2261B8u) { return; }
    }
    ctx->pc = 0x2261B8u;
    // 0x2261b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2261b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2261bc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2261bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2261c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2261c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2261c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2261c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2261c8: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x2261c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x2261cc: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2261ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x2261d0: 0xc060f88  jal         func_183E20
    ctx->pc = 0x2261D0u;
    SET_GPR_U32(ctx, 31, 0x2261D8u);
    ctx->pc = 0x2261D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2261D0u;
            // 0x2261d4: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183E20u;
    if (runtime->hasFunction(0x183E20u)) {
        auto targetFn = runtime->lookupFunction(0x183E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261D8u; }
        if (ctx->pc != 0x2261D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183e20_0x183ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261D8u; }
        if (ctx->pc != 0x2261D8u) { return; }
    }
    ctx->pc = 0x2261D8u;
    // 0x2261d8: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x2261D8u;
    SET_GPR_U32(ctx, 31, 0x2261E0u);
    ctx->pc = 0x2261DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2261D8u;
            // 0x2261dc: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261E0u; }
        if (ctx->pc != 0x2261E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261E0u; }
        if (ctx->pc != 0x2261E0u) { return; }
    }
    ctx->pc = 0x2261E0u;
    // 0x2261e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2261e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2261e4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2261e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2261e8: 0xc060fb2  jal         func_183EC8
    ctx->pc = 0x2261E8u;
    SET_GPR_U32(ctx, 31, 0x2261F0u);
    ctx->pc = 0x2261ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2261E8u;
            // 0x2261ec: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183EC8u;
    if (runtime->hasFunction(0x183EC8u)) {
        auto targetFn = runtime->lookupFunction(0x183EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261F0u; }
        if (ctx->pc != 0x2261F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183ec8_0x183f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261F0u; }
        if (ctx->pc != 0x2261F0u) { return; }
    }
    ctx->pc = 0x2261F0u;
    // 0x2261f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2261f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2261f4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2261f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2261f8: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x2261F8u;
    SET_GPR_U32(ctx, 31, 0x226200u);
    ctx->pc = 0x2261FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2261F8u;
            // 0x2261fc: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226200u; }
        if (ctx->pc != 0x226200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226200u; }
        if (ctx->pc != 0x226200u) { return; }
    }
    ctx->pc = 0x226200u;
    // 0x226200: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x226200u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x226204: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x226204u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x226208: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x226208u;
    SET_GPR_U32(ctx, 31, 0x226210u);
    ctx->pc = 0x22620Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226208u;
            // 0x22620c: 0x27a40074  addiu       $a0, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226210u; }
        if (ctx->pc != 0x226210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226210u; }
        if (ctx->pc != 0x226210u) { return; }
    }
    ctx->pc = 0x226210u;
    // 0x226210: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x226210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226214: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x226214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x226218: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x226218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22621c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x22621cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x226220: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x226220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x226224: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x226224u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x226228: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x226228u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x22622c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x22622cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x226230: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x226230u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x226234: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x226234u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x226238: 0x70861389  pcpyld      $v0, $a0, $a2
    ctx->pc = 0x226238u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x22623c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x22623cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x226240: 0x70e62389  pcpyld      $a0, $a3, $a2
    ctx->pc = 0x226240u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x226244: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x226244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226248: 0x708224c8  ppacw       $a0, $a0, $v0
    ctx->pc = 0x226248u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x22624c: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x22624cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x226250: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x226250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x226254: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x226254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x226258: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x226258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x22625c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x22625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226260: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x226260u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x226264: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x226264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x226268: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x226268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x22626c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22626cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x226270: 0x306300fc  andi        $v1, $v1, 0xFC
    ctx->pc = 0x226270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
    // 0x226274: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x226274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x226278: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x226278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22627c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22627cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226280: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x226280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x226284: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x226284u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x226288: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x226288u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x22628c: 0x4be308a8  vadd.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x22628cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x226290: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x226290u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x226294: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x226294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x226298: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x226298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22629c: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x22629cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x2262a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2262a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2262a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2262a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2262a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2262a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2262ac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2262acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2262b0: 0x4bc1133c  vmove.xyz   $vf1, $vf2
    ctx->pc = 0x2262b0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x2262b4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2262b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2262b8: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x2262b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2262bc: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x2262bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2262c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2262c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2262c4: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x2262c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x2262c8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2262c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2262cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2262ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2262d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2262d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2262d4: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x2262d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2262d8: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2262d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2262dc: 0xdba300b0  lqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x2262dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2262e0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2262e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2262e4: 0x4be32128  vadd.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x2262e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2262e8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2262e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2262ec: 0x4bc1133c  vmove.xyz   $vf1, $vf2
    ctx->pc = 0x2262ecu;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x2262f0: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2262f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2262f4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2262f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2262f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2262f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2262fc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2262fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x226300: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x226300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226304: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x226304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x226308: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x226308u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x22630c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x22630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x226310: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x226310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x226314: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x226314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x226318: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x226318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x22631c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x226320: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x226320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x226324: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x226324u;
    {
        const bool branch_taken_0x226324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226324u;
            // 0x226328: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226324) {
            ctx->pc = 0x226180u;
            runtime->cooperativeGuestYield();
            goto label_226180;
        }
    }
    ctx->pc = 0x22632Cu;
    // 0x22632c: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x22632cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x226330: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x226330u;
    {
        const bool branch_taken_0x226330 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x226334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226330u;
            // 0x226334: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226330) {
            ctx->pc = 0x226348u;
            goto label_226348;
        }
    }
    ctx->pc = 0x226338u;
    // 0x226338: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x226338u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x22633c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x22633Cu;
    SET_GPR_U32(ctx, 31, 0x226344u);
    ctx->pc = 0x226340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22633Cu;
            // 0x226340: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226344u; }
        if (ctx->pc != 0x226344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226344u; }
        if (ctx->pc != 0x226344u) { return; }
    }
    ctx->pc = 0x226344u;
    // 0x226344: 0x0  nop
    ctx->pc = 0x226344u;
    // NOP
label_226348:
    // 0x226348: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22634c: 0x1040ff8d  beqz        $v0, . + 4 + (-0x73 << 2)
    ctx->pc = 0x22634Cu;
    {
        const bool branch_taken_0x22634c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22634Cu;
            // 0x226350: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22634c) {
            ctx->pc = 0x226184u;
            runtime->cooperativeGuestYield();
            goto label_226184;
        }
    }
    ctx->pc = 0x226354u;
    // 0x226354: 0xc056dd2  jal         func_15B748
    ctx->pc = 0x226354u;
    SET_GPR_U32(ctx, 31, 0x22635Cu);
    ctx->pc = 0x226358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226354u;
            // 0x226358: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B748u;
    if (runtime->hasFunction(0x15B748u)) {
        auto targetFn = runtime->lookupFunction(0x15B748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22635Cu; }
        if (ctx->pc != 0x22635Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B748_0x15b748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22635Cu; }
        if (ctx->pc != 0x22635Cu) { return; }
    }
    ctx->pc = 0x22635Cu;
    // 0x22635c: 0x1000ff89  b           . + 4 + (-0x77 << 2)
    ctx->pc = 0x22635Cu;
    {
        const bool branch_taken_0x22635c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22635Cu;
            // 0x226360: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22635c) {
            ctx->pc = 0x226184u;
            runtime->cooperativeGuestYield();
            goto label_226184;
        }
    }
    ctx->pc = 0x226364u;
label_226364:
    // 0x226364: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x226364u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_226368:
    // 0x226368: 0x1600ff59  bnez        $s0, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x226368u;
    {
        const bool branch_taken_0x226368 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x22636Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226368u;
            // 0x22636c: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226368) {
            ctx->pc = 0x2260D0u;
            runtime->cooperativeGuestYield();
            goto label_2260d0;
        }
    }
    ctx->pc = 0x226370u;
label_226370:
    // 0x226370: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x226370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x226374: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x226374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x226378: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x226378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x22637c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x22637cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x226380: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x226380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x226384: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x226384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x226388: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x226388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22638c: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x22638cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x226390: 0x3e00008  jr          $ra
    ctx->pc = 0x226390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226390u;
            // 0x226394: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2260D0u: goto label_2260d0;
            case 0x226180u: goto label_226180;
            case 0x226184u: goto label_226184;
            case 0x226348u: goto label_226348;
            case 0x226364u: goto label_226364;
            case 0x226368u: goto label_226368;
            case 0x226370u: goto label_226370;
            case 0x2263C8u: goto label_2263c8;
            case 0x2263FCu: goto label_2263fc;
            case 0x226408u: goto label_226408;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226398u;
    // 0x226398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22639c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22639cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2263a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2263a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2263a4: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x2263a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2263a8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2263a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2263ac: 0x8c42ecd0  lw          $v0, -0x1330($v0)
    ctx->pc = 0x2263acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962384)));
    // 0x2263b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2263b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2263b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2263b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2263b8: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x2263b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2263bc: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2263BCu;
    {
        const bool branch_taken_0x2263bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2263bc) {
            ctx->pc = 0x2263C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2263BCu;
            // 0x2263c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x226408u;
            goto label_226408;
        }
    }
    ctx->pc = 0x2263C4u;
    // 0x2263c4: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x2263c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_2263c8:
    // 0x2263c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2263c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2263cc: 0x50200b  movn        $a0, $v0, $s0
    ctx->pc = 0x2263ccu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x2263d0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x2263d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2263d4: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x2263d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2263d8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2263D8u;
    {
        const bool branch_taken_0x2263d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2263d8) {
            ctx->pc = 0x2263DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2263D8u;
            // 0x2263dc: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2263FCu;
            goto label_2263fc;
        }
    }
    ctx->pc = 0x2263E0u;
    // 0x2263e0: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x2263e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x2263e4: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x2263e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2263e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2263E8u;
    {
        const bool branch_taken_0x2263e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2263e8) {
            ctx->pc = 0x2263ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2263E8u;
            // 0x2263ec: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2263FCu;
            goto label_2263fc;
        }
    }
    ctx->pc = 0x2263F0u;
    // 0x2263f0: 0xc056eae  jal         func_15BAB8
    ctx->pc = 0x2263F0u;
    SET_GPR_U32(ctx, 31, 0x2263F8u);
    ctx->pc = 0x15BAB8u;
    if (runtime->hasFunction(0x15BAB8u)) {
        auto targetFn = runtime->lookupFunction(0x15BAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2263F8u; }
        if (ctx->pc != 0x2263F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BAB8_0x15bab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2263F8u; }
        if (ctx->pc != 0x2263F8u) { return; }
    }
    ctx->pc = 0x2263F8u;
    // 0x2263f8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2263f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2263fc:
    // 0x2263fc: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2263FCu;
    {
        const bool branch_taken_0x2263fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x226400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2263FCu;
            // 0x226400: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2263fc) {
            ctx->pc = 0x2263C8u;
            runtime->cooperativeGuestYield();
            goto label_2263c8;
        }
    }
    ctx->pc = 0x226404u;
    // 0x226404: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226408:
    // 0x226408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22640c: 0x3e00008  jr          $ra
    ctx->pc = 0x22640Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22640Cu;
            // 0x226410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2260D0u: goto label_2260d0;
            case 0x226180u: goto label_226180;
            case 0x226184u: goto label_226184;
            case 0x226348u: goto label_226348;
            case 0x226364u: goto label_226364;
            case 0x226368u: goto label_226368;
            case 0x226370u: goto label_226370;
            case 0x2263C8u: goto label_2263c8;
            case 0x2263FCu: goto label_2263fc;
            case 0x226408u: goto label_226408;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226414u;
    // 0x226414: 0x0  nop
    ctx->pc = 0x226414u;
    // NOP
}
