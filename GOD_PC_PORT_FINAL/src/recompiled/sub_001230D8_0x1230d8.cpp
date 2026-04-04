#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001230D8
// Address: 0x1230d8 - 0x123290
void sub_001230D8_0x1230d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001230D8_0x1230d8");
#endif

    ctx->pc = 0x1230d8u;

    // 0x1230d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1230d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1230dc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1230dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1230e0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1230e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1230e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1230e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230e8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1230e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1230ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1230ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230f0: 0xe7b900a8  swc1        $f25, 0xA8($sp)
    ctx->pc = 0x1230f0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1230f4: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x1230f4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1230f8: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x1230f8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1230fc: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x1230fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x123100: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x123100u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x123104: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x123104u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x123108: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x123108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12310c: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x12310Cu;
    SET_GPR_U32(ctx, 31, 0x123114u);
    ctx->pc = 0x123110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12310Cu;
            // 0x123110: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123114u; }
        if (ctx->pc != 0x123114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123114u; }
        if (ctx->pc != 0x123114u) { return; }
    }
    ctx->pc = 0x123114u;
    // 0x123114: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x123114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x123118: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x123118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x12311c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x12311cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x123120: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x123120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x123124: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x123124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x123128: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x123128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x12312c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12312cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x123130: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x123130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x123134: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x123134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123138: 0x4618bdc2  mul.s       $f23, $f23, $f24
    ctx->pc = 0x123138u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
    // 0x12313c: 0x46140882  mul.s       $f2, $f1, $f20
    ctx->pc = 0x12313cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x123140: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x123140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x123144: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x123144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x123148: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x123148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12314c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x12314cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x123150: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x123150u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x123154: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x123154u;
    SET_GPR_U32(ctx, 31, 0x12315Cu);
    ctx->pc = 0x123158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123154u;
            // 0x123158: 0x4602bdc0  add.s       $f23, $f23, $f2 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12315Cu; }
        if (ctx->pc != 0x12315Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12315Cu; }
        if (ctx->pc != 0x12315Cu) { return; }
    }
    ctx->pc = 0x12315Cu;
    // 0x12315c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x12315cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x123160: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x123160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x123164: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x123164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x123168: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x123168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12316c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x12316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123170: 0x4618b582  mul.s       $f22, $f22, $f24
    ctx->pc = 0x123170u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[24]);
    // 0x123174: 0x46190882  mul.s       $f2, $f1, $f25
    ctx->pc = 0x123174u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[25]);
    // 0x123178: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x123178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x12317c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x12317cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x123180: 0x4601b582  mul.s       $f22, $f22, $f1
    ctx->pc = 0x123180u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x123184: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x123184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x123188: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x123188u;
    SET_GPR_U32(ctx, 31, 0x123190u);
    ctx->pc = 0x12318Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123188u;
            // 0x12318c: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123190u; }
        if (ctx->pc != 0x123190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123190u; }
        if (ctx->pc != 0x123190u) { return; }
    }
    ctx->pc = 0x123190u;
    // 0x123190: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x123190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x123194: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x123194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x123198: 0x4618ad42  mul.s       $f21, $f21, $f24
    ctx->pc = 0x123198u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    // 0x12319c: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x12319Cu;
    SET_GPR_U32(ctx, 31, 0x1231A4u);
    ctx->pc = 0x1231A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12319Cu;
            // 0x1231a0: 0x4619ad41  sub.s       $f21, $f21, $f25 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1231A4u; }
        if (ctx->pc != 0x1231A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1231A4u; }
        if (ctx->pc != 0x1231A4u) { return; }
    }
    ctx->pc = 0x1231A4u;
    // 0x1231a4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1231a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1231a8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1231a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1231ac: 0x4618a502  mul.s       $f20, $f20, $f24
    ctx->pc = 0x1231acu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x1231b0: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x1231B0u;
    SET_GPR_U32(ctx, 31, 0x1231B8u);
    ctx->pc = 0x1231B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1231B0u;
            // 0x1231b4: 0x4619a501  sub.s       $f20, $f20, $f25 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1231B8u; }
        if (ctx->pc != 0x1231B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1231B8u; }
        if (ctx->pc != 0x1231B8u) { return; }
    }
    ctx->pc = 0x1231B8u;
    // 0x1231b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1231b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1231bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1231bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1231c0: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x1231c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x1231c4: 0x46190001  sub.s       $f0, $f0, $f25
    ctx->pc = 0x1231c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
    // 0x1231c8: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x1231c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1231cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1231ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231d0: 0x4406a800  mfc1        $a2, $f21
    ctx->pc = 0x1231d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1231d4: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x1231d4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x1231d8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1231d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1231dc: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x1231dcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x1231e0: 0x70433cc8  ppacw       $a3, $v0, $v1
    ctx->pc = 0x1231e0u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1231e4: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1231e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1231e8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1231e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1231ec: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1231ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1231f0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1231f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1231f4: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1231f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1231f8: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1231f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1231fc: 0x4403b800  mfc1        $v1, $f23
    ctx->pc = 0x1231fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x123200: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x123200u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x123204: 0x4a0003bf  vwaitq
    ctx->pc = 0x123204u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x123208: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x123208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12320c: 0x4a0002ff  vnop
    ctx->pc = 0x12320cu;
    // NOP operation, no action needed for VU0
    // 0x123210: 0x4a0002ff  vnop
    ctx->pc = 0x123210u;
    // NOP operation, no action needed for VU0
    // 0x123214: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x123214u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x123218: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x123218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12321c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x12321cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123220: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x123220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123224: 0x4be308d8  vmulx.xyzw  $vf3, $vf1, $vf3x
    ctx->pc = 0x123224u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x123228: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x123228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x12322c: 0x8c42bde8  lw          $v0, -0x4218($v0)
    ctx->pc = 0x12322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950376)));
    // 0x123230: 0xd84200f0  lqc2        $vf2, 0xF0($v0)
    ctx->pc = 0x123230u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x123234: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x123234u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x123238: 0x4404b000  mfc1        $a0, $f22
    ctx->pc = 0x123238u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12323c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x12323cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x123240: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x123240u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123244: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x123244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123248: 0xda020080  lqc2        $vf2, 0x80($s0)
    ctx->pc = 0x123248u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x12324c: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x12324cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x123250: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x123250u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123254: 0xda020090  lqc2        $vf2, 0x90($s0)
    ctx->pc = 0x123254u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x123258: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x123258u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12325c: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x12325cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123260: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x123260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x123264: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x123264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x123268: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x123268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12326c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12326cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123270: 0xc7b900a8  lwc1        $f25, 0xA8($sp)
    ctx->pc = 0x123270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x123274: 0xc7b800a0  lwc1        $f24, 0xA0($sp)
    ctx->pc = 0x123274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x123278: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x123278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x12327c: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x12327cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x123280: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x123280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x123284: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x123284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x123288: 0x3e00008  jr          $ra
    ctx->pc = 0x123288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12328Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123288u;
            // 0x12328c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123290u;
}
