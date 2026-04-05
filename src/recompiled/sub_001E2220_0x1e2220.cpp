#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2220
// Address: 0x1e2220 - 0x1e2368
void sub_001E2220_0x1e2220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2220_0x1e2220");
#endif

    ctx->pc = 0x1e2220u;

    // 0x1e2220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e2220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e2224: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1e2224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1e2228: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e2228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e222c: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x1e222cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x1e2230: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e2230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e2234: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e2234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2238: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e223c: 0xac444f74  sw          $a0, 0x4F74($v0)
    ctx->pc = 0x1e223cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20340), GPR_U32(ctx, 4));
    // 0x1e2240: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x1e2240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x1e2244: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x1e2244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1e2248: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2248u;
    {
        const bool branch_taken_0x1e2248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E224Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2248u;
            // 0x1e224c: 0xacc04f78  sw          $zero, 0x4F78($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2248) {
            ctx->pc = 0x1E2258u;
            goto label_1e2258;
        }
    }
    ctx->pc = 0x1E2250u;
    // 0x1e2250: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2250u;
    {
        const bool branch_taken_0x1e2250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2250u;
            // 0x1e2254: 0x8c820188  lw          $v0, 0x188($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2250) {
            ctx->pc = 0x1E2268u;
            goto label_1e2268;
        }
    }
    ctx->pc = 0x1E2258u;
label_1e2258:
    // 0x1e2258: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1e2258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1e225c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E225Cu;
    {
        const bool branch_taken_0x1e225c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E225Cu;
            // 0x1e2260: 0x24880050  addiu       $t0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e225c) {
            ctx->pc = 0x1E2270u;
            goto label_1e2270;
        }
    }
    ctx->pc = 0x1E2264u;
    // 0x1e2264: 0x8c82018c  lw          $v0, 0x18C($a0)
    ctx->pc = 0x1e2264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 396)));
label_1e2268:
    // 0x1e2268: 0xacc24f78  sw          $v0, 0x4F78($a2)
    ctx->pc = 0x1e2268u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20344), GPR_U32(ctx, 2));
    // 0x1e226c: 0x24880050  addiu       $t0, $a0, 0x50
    ctx->pc = 0x1e226cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_1e2270:
    // 0x1e2270: 0xd8820130  lqc2        $vf2, 0x130($a0)
    ctx->pc = 0x1e2270u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1e2274: 0xd9010010  lqc2        $vf1, 0x10($t0)
    ctx->pc = 0x1e2274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1e2278: 0x4be20859  vmuly.xyzw  $vf1, $vf1, $vf2y
    ctx->pc = 0x1e2278u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e227c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e227cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2280: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1e2280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1e2284: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1e2284u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e2288: 0x24512ff0  addiu       $s1, $v0, 0x2FF0
    ctx->pc = 0x1e2288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
    // 0x1e228c: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e228cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2290: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1e2290u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2294: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1e2294u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1e2298: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e2298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e229c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e229cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e22a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e22a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e22a4: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e22a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1e22a8: 0x78820120  lq          $v0, 0x120($a0)
    ctx->pc = 0x1e22a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x1e22ac: 0x24a51cf8  addiu       $a1, $a1, 0x1CF8
    ctx->pc = 0x1e22acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7416));
    // 0x1e22b0: 0xacc3f170  sw          $v1, -0xE90($a2)
    ctx->pc = 0x1e22b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963568), GPR_U32(ctx, 3));
    // 0x1e22b4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1e22b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e22b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e22b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e22bc: 0x24c4f170  addiu       $a0, $a2, -0xE90
    ctx->pc = 0x1e22bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963568));
    // 0x1e22c0: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e22c0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e22c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e22c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e22c8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1e22c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1e22cc: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1e22ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1e22d0: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x1e22d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x1e22d4: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x1e22d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1e22d8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1e22d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1e22dc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1e22dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1e22e0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1e22e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1e22e4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1e22e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1e22e8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1e22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1e22ec: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1e22ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1e22f0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1e22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1e22f4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1e22f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1e22f8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1e22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1e22fc: 0x44066000  mfc1        $a2, $f12
    ctx->pc = 0x1e22fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e2300: 0xd9010010  lqc2        $vf1, 0x10($t0)
    ctx->pc = 0x1e2300u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1e2304: 0x48a61800  qmtc2.ni    $a2, $vf3
    ctx->pc = 0x1e2304u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1e2308: 0xe4414f70  swc1        $f1, 0x4F70($v0)
    ctx->pc = 0x1e2308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20336), bits); }
    // 0x1e230c: 0xe4604f6c  swc1        $f0, 0x4F6C($v1)
    ctx->pc = 0x1e230cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20332), bits); }
    // 0x1e2310: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e2310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2314: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1e2314u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2318: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e2318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e231c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1e231cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1e2320: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1e2320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2324: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1e2324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1e2328: 0xc047a34  jal         func_11E8D0
    ctx->pc = 0x1E2328u;
    SET_GPR_U32(ctx, 31, 0x1E2330u);
    ctx->pc = 0x1E232Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2328u;
            // 0x1e232c: 0x48251800  qmfc2.ni    $a1, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E8D0u;
    if (runtime->hasFunction(0x11E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x11E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2330u; }
        if (ctx->pc != 0x1E2330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11e8d0_0x11ea98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2330u; }
        if (ctx->pc != 0x1E2330u) { return; }
    }
    ctx->pc = 0x1E2330u;
    // 0x1e2330: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2330u;
    {
        const bool branch_taken_0x1e2330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2330) {
            ctx->pc = 0x1E2334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2330u;
            // 0x1e2334: 0xda210000  lqc2        $vf1, 0x0($s1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2340u;
            goto label_1e2340;
        }
    }
    ctx->pc = 0x1E2338u;
    // 0x1e2338: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2338u;
    {
        const bool branch_taken_0x1e2338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E233Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2338u;
            // 0x1e233c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2338) {
            ctx->pc = 0x1E2350u;
            goto label_1e2350;
        }
    }
    ctx->pc = 0x1E2340u;
label_1e2340:
    // 0x1e2340: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1e2340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1e2344: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1e2344u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2348: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e2348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e234c: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e234cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e2350:
    // 0x1e2350: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e2350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2354: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e2354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2358: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e235c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E235Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E235Cu;
            // 0x1e2360: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2258u: goto label_1e2258;
            case 0x1E2268u: goto label_1e2268;
            case 0x1E2270u: goto label_1e2270;
            case 0x1E2340u: goto label_1e2340;
            case 0x1E2350u: goto label_1e2350;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2364u;
    // 0x1e2364: 0x0  nop
    ctx->pc = 0x1e2364u;
    // NOP
}
