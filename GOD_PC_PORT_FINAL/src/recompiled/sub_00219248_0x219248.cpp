#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00219248
// Address: 0x219248 - 0x219630
void sub_00219248_0x219248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219248_0x219248");
#endif

    ctx->pc = 0x219248u;

    // 0x219248: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x219248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x21924c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x21924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x219250: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x219250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219254: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x219254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x219258: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x219258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x21925c: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x21925cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x219260: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x219260u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x219264: 0xc08648a  jal         func_219228
    ctx->pc = 0x219264u;
    SET_GPR_U32(ctx, 31, 0x21926Cu);
    ctx->pc = 0x219268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219264u;
            // 0x219268: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x219228u;
    if (runtime->hasFunction(0x219228u)) {
        auto targetFn = runtime->lookupFunction(0x219228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21926Cu; }
        if (ctx->pc != 0x21926Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_219228_0x219248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21926Cu; }
        if (ctx->pc != 0x21926Cu) { return; }
    }
    ctx->pc = 0x21926Cu;
    // 0x21926c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21926cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219270: 0x520000e7  beql        $s0, $zero, . + 4 + (0xE7 << 2)
    ctx->pc = 0x219270u;
    {
        const bool branch_taken_0x219270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x219270) {
            ctx->pc = 0x219274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x219270u;
            // 0x219274: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x219610u;
            goto label_219610;
        }
    }
    ctx->pc = 0x219278u;
    // 0x219278: 0xc08647a  jal         func_2191E8
    ctx->pc = 0x219278u;
    SET_GPR_U32(ctx, 31, 0x219280u);
    ctx->pc = 0x21927Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219278u;
            // 0x21927c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2191E8u;
    if (runtime->hasFunction(0x2191E8u)) {
        auto targetFn = runtime->lookupFunction(0x2191E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219280u; }
        if (ctx->pc != 0x219280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002191E8_0x2191e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219280u; }
        if (ctx->pc != 0x219280u) { return; }
    }
    ctx->pc = 0x219280u;
    // 0x219280: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x219280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x219284: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x219284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x219288: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x219288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21928c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x21928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219290: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x219290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x219294: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x219294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x219298: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x219298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21929c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21929cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2192a0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2192a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2192a4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2192a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2192a8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2192a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2192ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2192acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2192b0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2192b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2192b4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2192b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2192b8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2192b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2192bc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2192bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2192c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2192c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2192c4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2192c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2192c8: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x2192c8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x2192cc: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2192ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2192d0: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x2192d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x2192d4: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2192d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2192d8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x2192d8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2192dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2192dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2192e0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2192e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2192e4: 0x4be208a8  vadd.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x2192e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2192e8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2192e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2192ec: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x2192ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2192f0: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x2192f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2192f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2192f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2192f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2192F8u;
    {
        const bool branch_taken_0x2192f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2192FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2192F8u;
            // 0x2192fc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192f8) {
            ctx->pc = 0x219308u;
            goto label_219308;
        }
    }
    ctx->pc = 0x219300u;
    // 0x219300: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219300u;
    {
        const bool branch_taken_0x219300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219300u;
            // 0x219304: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219300) {
            ctx->pc = 0x219324u;
            goto label_219324;
        }
    }
    ctx->pc = 0x219308u;
label_219308:
    // 0x219308: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x219308u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x21930c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x21930cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x219310: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219310u;
    {
        const bool branch_taken_0x219310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x219314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219310u;
            // 0x219314: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219310) {
            ctx->pc = 0x219324u;
            goto label_219324;
        }
    }
    ctx->pc = 0x219318u;
    // 0x219318: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x219318u;
    SET_GPR_U32(ctx, 31, 0x219320u);
    ctx->pc = 0x21931Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219318u;
            // 0x21931c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219320u; }
        if (ctx->pc != 0x219320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219320u; }
        if (ctx->pc != 0x219320u) { return; }
    }
    ctx->pc = 0x219320u;
    // 0x219320: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x219320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_219324:
    // 0x219324: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x219324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x219328: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x219328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x21932c: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x21932cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x219330: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x219330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x219334: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x219334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x219338: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x219338u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21933c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x21933cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x219340: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x219340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x219344: 0xd8820030  lqc2        $vf2, 0x30($a0)
    ctx->pc = 0x219344u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x219348: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x219348u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21934c: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x21934cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x219350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x219350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219358: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x219358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21935c: 0x46000004  c1          0x4
    ctx->pc = 0x21935cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x219360: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x219360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x219364: 0x46160502  mul.s       $f20, $f0, $f22
    ctx->pc = 0x219364u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x219368: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x219368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21936c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x21936cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219370: 0x3c0143f0  lui         $at, 0x43F0
    ctx->pc = 0x219370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17392 << 16));
    // 0x219374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x219374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219378: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x219378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21937c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x21937cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219380: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x219380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x219384: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x219384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x219388: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x219388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x21938c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21938cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x219390: 0x46010044  c1          0x10044
    ctx->pc = 0x219390u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x219394: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x219394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x219398: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x219398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x21939c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x21939cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2193a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2193a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2193a4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2193a4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2193a8: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x2193a8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x2193ac: 0x46150029  min.s       $f0, $f0, $f21
    ctx->pc = 0x2193acu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[21]);
    // 0x2193b0: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2193b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2193b4: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x2193b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2193b8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2193b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2193bc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2193bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2193c0: 0xd86100b0  lqc2        $vf1, 0xB0($v1)
    ctx->pc = 0x2193c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x2193c4: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x2193c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2193c8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2193c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x2193cc: 0x2408efff  addiu       $t0, $zero, -0x1001
    ctx->pc = 0x2193ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2193d0: 0xdcc4bdf8  ld          $a0, -0x4208($a2)
    ctx->pc = 0x2193d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x2193d4: 0xdc6200c0  ld          $v0, 0xC0($v1)
    ctx->pc = 0x2193d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x2193d8: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x2193d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x2193dc: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x2193dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    // 0x2193e0: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x2193e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2193e4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2193e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2193e8: 0x3c0afffe  lui         $t2, 0xFFFE
    ctx->pc = 0x2193e8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65534 << 16));
    // 0x2193ec: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x2193ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x2193f0: 0xfc6200c0  sd          $v0, 0xC0($v1)
    ctx->pc = 0x2193f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 192), GPR_U64(ctx, 2));
    // 0x2193f4: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x2193f4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x2193f8: 0xf86100b0  sqc2        $vf1, 0xB0($v1)
    ctx->pc = 0x2193f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2193fc: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x2193fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x219400: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x219400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x219404: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x219404u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x219408: 0xdc6200c0  ld          $v0, 0xC0($v1)
    ctx->pc = 0x219408u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x21940c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x21940cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x219410: 0xfc6200c0  sd          $v0, 0xC0($v1)
    ctx->pc = 0x219410u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 192), GPR_U64(ctx, 2));
    // 0x219414: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x219414u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x219418: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x219418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x21941c: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x21941cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x219420: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x219420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219424: 0x7c620050  sq          $v0, 0x50($v1)
    ctx->pc = 0x219424u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 2));
    // 0x219428: 0x84620060  lh          $v0, 0x60($v1)
    ctx->pc = 0x219428u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x21942c: 0xfcc4bdf8  sd          $a0, -0x4208($a2)
    ctx->pc = 0x21942cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 4));
    // 0x219430: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x219430u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x219434: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x219434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x219438: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x219438u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x21943c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x21943Cu;
    {
        const bool branch_taken_0x21943c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x219440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21943Cu;
            // 0x219440: 0xfc640068  sd          $a0, 0x68($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21943c) {
            ctx->pc = 0x219488u;
            goto label_219488;
        }
    }
    ctx->pc = 0x219444u;
    // 0x219444: 0xdca200c0  ld          $v0, 0xC0($a1)
    ctx->pc = 0x219444u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x219448: 0x24a300c0  addiu       $v1, $a1, 0xC0
    ctx->pc = 0x219448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x21944c: 0xd8a100b0  lqc2        $vf1, 0xB0($a1)
    ctx->pc = 0x21944cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x219450: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x219450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x219454: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x219454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219458: 0xfca200c0  sd          $v0, 0xC0($a1)
    ctx->pc = 0x219458u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 192), GPR_U64(ctx, 2));
    // 0x21945c: 0xf8a100b0  sqc2        $vf1, 0xB0($a1)
    ctx->pc = 0x21945cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219460: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x219460u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x219464: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x219464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x219468: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x219468u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x21946c: 0xdca200c0  ld          $v0, 0xC0($a1)
    ctx->pc = 0x21946cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x219470: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x219470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x219474: 0xfca200c0  sd          $v0, 0xC0($a1)
    ctx->pc = 0x219474u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 192), GPR_U64(ctx, 2));
    // 0x219478: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x219478u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21947c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x21947cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x219480: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x219480u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x219484: 0x0  nop
    ctx->pc = 0x219484u;
    // NOP
label_219488:
    // 0x219488: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x219488u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21948c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x21948Cu;
    {
        const bool branch_taken_0x21948c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21948c) {
            ctx->pc = 0x2194A4u;
            goto label_2194a4;
        }
    }
    ctx->pc = 0x219494u;
    // 0x219494: 0xc0863bc  jal         func_218EF0
    ctx->pc = 0x219494u;
    SET_GPR_U32(ctx, 31, 0x21949Cu);
    ctx->pc = 0x219498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219494u;
            // 0x219498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218EF0u;
    if (runtime->hasFunction(0x218EF0u)) {
        auto targetFn = runtime->lookupFunction(0x218EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21949Cu; }
        if (ctx->pc != 0x21949Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218EF0_0x218ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21949Cu; }
        if (ctx->pc != 0x21949Cu) { return; }
    }
    ctx->pc = 0x21949Cu;
    // 0x21949c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x21949Cu;
    {
        const bool branch_taken_0x21949c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2194A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21949Cu;
            // 0x2194a0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21949c) {
            ctx->pc = 0x219610u;
            goto label_219610;
        }
    }
    ctx->pc = 0x2194A4u;
label_2194a4:
    // 0x2194a4: 0xc086390  jal         func_218E40
    ctx->pc = 0x2194A4u;
    SET_GPR_U32(ctx, 31, 0x2194ACu);
    ctx->pc = 0x2194A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2194A4u;
            // 0x2194a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218E40u;
    if (runtime->hasFunction(0x218E40u)) {
        auto targetFn = runtime->lookupFunction(0x218E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2194ACu; }
        if (ctx->pc != 0x2194ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218E40_0x218e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2194ACu; }
        if (ctx->pc != 0x2194ACu) { return; }
    }
    ctx->pc = 0x2194ACu;
    // 0x2194ac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2194acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2194b0: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x2194b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x2194b4: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x2194b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x2194b8: 0x24030403  addiu       $v1, $zero, 0x403
    ctx->pc = 0x2194b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    // 0x2194bc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x2194bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x2194c0: 0x24e2f170  addiu       $v0, $a3, -0xE90
    ctx->pc = 0x2194c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963568));
    // 0x2194c4: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x2194c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2194c8: 0x24c68fd8  addiu       $a2, $a2, -0x7028
    ctx->pc = 0x2194c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938584));
    // 0x2194cc: 0xace3f170  sw          $v1, -0xE90($a3)
    ctx->pc = 0x2194ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963568), GPR_U32(ctx, 3));
    // 0x2194d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2194d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2194d4: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x2194d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x2194d8: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2194d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2194dc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2194dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2194e0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2194e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2194e4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2194e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2194e8: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2194e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2194ec: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2194ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2194f0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2194f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2194f4: 0xc047a34  jal         func_11E8D0
    ctx->pc = 0x2194F4u;
    SET_GPR_U32(ctx, 31, 0x2194FCu);
    ctx->pc = 0x2194F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2194F4u;
            // 0x2194f8: 0xac510020  sw          $s1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E8D0u;
    if (runtime->hasFunction(0x11E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x11E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2194FCu; }
        if (ctx->pc != 0x2194FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11e8d0_0x11ea98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2194FCu; }
        if (ctx->pc != 0x2194FCu) { return; }
    }
    ctx->pc = 0x2194FCu;
    // 0x2194fc: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2194fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219500: 0x3c10002d  lui         $s0, 0x2D
    ctx->pc = 0x219500u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)45 << 16));
    // 0x219504: 0x2610b950  addiu       $s0, $s0, -0x46B0
    ctx->pc = 0x219504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949200));
    // 0x219508: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x219508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x21950c: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x21950Cu;
    SET_GPR_U32(ctx, 31, 0x219514u);
    ctx->pc = 0x219510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21950Cu;
            // 0x219510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219514u; }
        if (ctx->pc != 0x219514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219514u; }
        if (ctx->pc != 0x219514u) { return; }
    }
    ctx->pc = 0x219514u;
    // 0x219514: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x219514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x219518: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x219518u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21951c: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x21951cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x219520: 0xc442002c  lwc1        $f2, 0x2C($v0)
    ctx->pc = 0x219520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x219524: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x219524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x219528: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x219528u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21952c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21952cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x219530: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x219530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x219534: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x219534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x219538: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x219538u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21953c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x21953cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x219540: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x219540u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x219544: 0x4b010080  vaddx.x     $vf2, $vf0, $vf1x
    ctx->pc = 0x219544u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x219548: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x219548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21954c: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x21954Cu;
    SET_GPR_U32(ctx, 31, 0x219554u);
    ctx->pc = 0x219550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21954Cu;
            // 0x219550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219554u; }
        if (ctx->pc != 0x219554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219554u; }
        if (ctx->pc != 0x219554u) { return; }
    }
    ctx->pc = 0x219554u;
    // 0x219554: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x219554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x219558: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x219558u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21955c: 0xc4430038  lwc1        $f3, 0x38($v0)
    ctx->pc = 0x21955cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x219560: 0xc4420030  lwc1        $f2, 0x30($v0)
    ctx->pc = 0x219560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x219564: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x219564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x219568: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x219568u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21956c: 0x70071f89  pexew       $v1, $a3
    ctx->pc = 0x21956cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x219570: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x219570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x219574: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x219574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x219578: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x219578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x21957c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x21957cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x219580: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x219580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x219584: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x219584u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x219588: 0x4a410080  vaddx.z     $vf2, $vf0, $vf1x
    ctx->pc = 0x219588u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21958c: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x21958cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219590: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x219590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x219594: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x219594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219598: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x219598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21959c: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x21959cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2195a0: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x2195a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2195a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2195a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2195a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2195a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2195ac: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2195acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2195b0: 0x0  nop
    ctx->pc = 0x2195b0u;
    // NOP
    // 0x2195b4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2195B4u;
    {
        const bool branch_taken_0x2195b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2195B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2195B4u;
            // 0x2195b8: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195b4) {
            ctx->pc = 0x2195F4u;
            goto label_2195f4;
        }
    }
    ctx->pc = 0x2195BCu;
    // 0x2195bc: 0x0  nop
    ctx->pc = 0x2195bcu;
    // NOP
label_2195c0:
    // 0x2195c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2195c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2195c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2195c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2195c8: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x2195c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2195cc: 0xc08669a  jal         func_219A68
    ctx->pc = 0x2195CCu;
    SET_GPR_U32(ctx, 31, 0x2195D4u);
    ctx->pc = 0x2195D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2195CCu;
            // 0x2195d0: 0xc44c0040  lwc1        $f12, 0x40($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x219A68u;
    if (runtime->hasFunction(0x219A68u)) {
        auto targetFn = runtime->lookupFunction(0x219A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2195D4u; }
        if (ctx->pc != 0x2195D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00219A68_0x219a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2195D4u; }
        if (ctx->pc != 0x2195D4u) { return; }
    }
    ctx->pc = 0x2195D4u;
    // 0x2195d4: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2195d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2195d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2195d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2195dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2195dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2195e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2195e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2195e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2195e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2195e8: 0x0  nop
    ctx->pc = 0x2195e8u;
    // NOP
    // 0x2195ec: 0x4501fff4  bc1t        . + 4 + (-0xC << 2)
    ctx->pc = 0x2195ECu;
    {
        const bool branch_taken_0x2195ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2195F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2195ECu;
            // 0x2195f0: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195ec) {
            ctx->pc = 0x2195C0u;
            runtime->cooperativeGuestYield();
            goto label_2195c0;
        }
    }
    ctx->pc = 0x2195F4u;
label_2195f4:
    // 0x2195f4: 0xc0866ee  jal         func_219BB8
    ctx->pc = 0x2195F4u;
    SET_GPR_U32(ctx, 31, 0x2195FCu);
    ctx->pc = 0x2195F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2195F4u;
            // 0x2195f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219BB8u;
    if (runtime->hasFunction(0x219BB8u)) {
        auto targetFn = runtime->lookupFunction(0x219BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2195FCu; }
        if (ctx->pc != 0x2195FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_219bb8_0x219cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2195FCu; }
        if (ctx->pc != 0x2195FCu) { return; }
    }
    ctx->pc = 0x2195FCu;
    // 0x2195fc: 0xc08673a  jal         func_219CE8
    ctx->pc = 0x2195FCu;
    SET_GPR_U32(ctx, 31, 0x219604u);
    ctx->pc = 0x219600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2195FCu;
            // 0x219600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219CE8u;
    if (runtime->hasFunction(0x219CE8u)) {
        auto targetFn = runtime->lookupFunction(0x219CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219604u; }
        if (ctx->pc != 0x219604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00219CE8_0x219ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219604u; }
        if (ctx->pc != 0x219604u) { return; }
    }
    ctx->pc = 0x219604u;
    // 0x219604: 0xc086734  jal         func_219CD0
    ctx->pc = 0x219604u;
    SET_GPR_U32(ctx, 31, 0x21960Cu);
    ctx->pc = 0x219608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219604u;
            // 0x219608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219CD0u;
    if (runtime->hasFunction(0x219CD0u)) {
        auto targetFn = runtime->lookupFunction(0x219CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21960Cu; }
        if (ctx->pc != 0x21960Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_219cd0_0x219ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21960Cu; }
        if (ctx->pc != 0x21960Cu) { return; }
    }
    ctx->pc = 0x21960Cu;
    // 0x21960c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x21960cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_219610:
    // 0x219610: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x219610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x219614: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x219614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x219618: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x219618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x21961c: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x21961cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x219620: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x219620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x219624: 0x3e00008  jr          $ra
    ctx->pc = 0x219624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219624u;
            // 0x219628: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219308u: goto label_219308;
            case 0x219324u: goto label_219324;
            case 0x219488u: goto label_219488;
            case 0x2194A4u: goto label_2194a4;
            case 0x2195C0u: goto label_2195c0;
            case 0x2195F4u: goto label_2195f4;
            case 0x219610u: goto label_219610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21962Cu;
    // 0x21962c: 0x0  nop
    ctx->pc = 0x21962cu;
    // NOP
}
