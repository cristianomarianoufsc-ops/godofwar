#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_152110
// Address: 0x152110 - 0x1528a8
void entry_152110_0x1528a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_152110_0x1528a8");
#endif

    ctx->pc = 0x152110u;

    // 0x152110: 0x48a61800  qmtc2.ni    $a2, $vf3
    ctx->pc = 0x152110u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x152114: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x152114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x152118: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x152118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15211c: 0x4b030043  vaddw.x     $vf1, $vf0, $vf3w
    ctx->pc = 0x15211cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152120: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x152120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x152124: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x152124u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152128: 0x7fb00280  sq          $s0, 0x280($sp)
    ctx->pc = 0x152128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 16));
    // 0x15212c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15212cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152130: 0x7fb40240  sq          $s4, 0x240($sp)
    ctx->pc = 0x152130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 20));
    // 0x152134: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x152134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152138: 0x7fb50230  sq          $s5, 0x230($sp)
    ctx->pc = 0x152138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 21));
    // 0x15213c: 0x7fb10270  sq          $s1, 0x270($sp)
    ctx->pc = 0x15213cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 17));
    // 0x152140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152144: 0x7fb20260  sq          $s2, 0x260($sp)
    ctx->pc = 0x152144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 18));
    // 0x152148: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x152148u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15214c: 0x7fb30250  sq          $s3, 0x250($sp)
    ctx->pc = 0x15214cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 19));
    // 0x152150: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x152150u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152154: 0xffbf0220  sd          $ra, 0x220($sp)
    ctx->pc = 0x152154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 31));
    // 0x152158: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x152158u;
    {
        const bool branch_taken_0x152158 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15215Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152158u;
            // 0x15215c: 0x7fa60150  sq          $a2, 0x150($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152158) {
            ctx->pc = 0x152178u;
            goto label_152178;
        }
    }
    ctx->pc = 0x152160u;
    // 0x152160: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x152160u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152164: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x152164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x152168: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x152168u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15216c: 0x4a2208c0  vaddx.w     $vf3, $vf1, $vf2x
    ctx->pc = 0x15216cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x152170: 0xfba30150  sqc2        $vf3, 0x150($sp)
    ctx->pc = 0x152170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x152174: 0x0  nop
    ctx->pc = 0x152174u;
    // NOP
label_152178:
    // 0x152178: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x152178u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15217c: 0xfba10210  sqc2        $vf1, 0x210($sp)
    ctx->pc = 0x15217cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152180: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x152180u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152184: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x152184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x152188: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x152188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15218c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15218cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152190: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x152190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x152194: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x152194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152198: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x152198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15219c: 0x7ba301f0  lq          $v1, 0x1F0($sp)
    ctx->pc = 0x15219cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1521a0: 0x700344a9  por         $t0, $zero, $v1
    ctx->pc = 0x1521a0u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1521a4: 0x7fa301e0  sq          $v1, 0x1E0($sp)
    ctx->pc = 0x1521a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 3));
    // 0x1521a8: 0x7fa301c0  sq          $v1, 0x1C0($sp)
    ctx->pc = 0x1521a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 3));
    // 0x1521ac: 0x7fa801a0  sq          $t0, 0x1A0($sp)
    ctx->pc = 0x1521acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 8));
    // 0x1521b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1521B0u;
    {
        const bool branch_taken_0x1521b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1521B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1521B0u;
            // 0x1521b4: 0x7fa80190  sq          $t0, 0x190($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521b0) {
            ctx->pc = 0x1521C0u;
            goto label_1521c0;
        }
    }
    ctx->pc = 0x1521B8u;
    // 0x1521b8: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x1521B8u;
    SET_GPR_U32(ctx, 31, 0x1521C0u);
    ctx->pc = 0x1521BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1521B8u;
            // 0x1521bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (runtime->hasFunction(0x1520B0u)) {
        auto targetFn = runtime->lookupFunction(0x1520B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1521C0u; }
        if (ctx->pc != 0x1521C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001520B0_0x1520b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1521C0u; }
        if (ctx->pc != 0x1521C0u) { return; }
    }
    ctx->pc = 0x1521C0u;
label_1521c0:
    // 0x1521c0: 0x7ba50150  lq          $a1, 0x150($sp)
    ctx->pc = 0x1521c0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1521c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1521c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521c8: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1521c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1521cc: 0xc05d514  jal         func_175450
    ctx->pc = 0x1521CCu;
    SET_GPR_U32(ctx, 31, 0x1521D4u);
    ctx->pc = 0x1521D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1521CCu;
            // 0x1521d0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175450u;
    if (runtime->hasFunction(0x175450u)) {
        auto targetFn = runtime->lookupFunction(0x175450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1521D4u; }
        if (ctx->pc != 0x1521D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175450_0x1754e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1521D4u; }
        if (ctx->pc != 0x1521D4u) { return; }
    }
    ctx->pc = 0x1521D4u;
    // 0x1521d4: 0x8e070074  lw          $a3, 0x74($s0)
    ctx->pc = 0x1521d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1521d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1521d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521dc: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x1521DCu;
    {
        const bool branch_taken_0x1521dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1521E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1521DCu;
            // 0x1521e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521dc) {
            ctx->pc = 0x15225Cu;
            goto label_15225c;
        }
    }
    ctx->pc = 0x1521E4u;
    // 0x1521e4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1521e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1521e8: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x1521e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1521ec: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1521ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1521f0:
    // 0x1521f0: 0xdba30150  lqc2        $vf3, 0x150($sp)
    ctx->pc = 0x1521f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1521f4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1521f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1521f8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1521f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1521fc: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1521fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x152200: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x152200u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152204: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x152204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152208: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x152208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15220c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x15220cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x152210: 0x8c6900cc  lw          $t1, 0xCC($v1)
    ctx->pc = 0x152210u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x152214: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x152214u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x152218: 0x482a1000  qmfc2.ni    $t2, $vf2
    ctx->pc = 0x152218u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15221c: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x15221cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152220: 0x4a2118c0  vaddx.w     $vf3, $vf3, $vf1x
    ctx->pc = 0x152220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x152224: 0x4b0300c3  vaddw.x     $vf3, $vf0, $vf3w
    ctx->pc = 0x152224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x152228: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x152228u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15222c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15222cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152230: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x152230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x152234: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x152234u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152238: 0x0  nop
    ctx->pc = 0x152238u;
    // NOP
    // 0x15223c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15223Cu;
    {
        const bool branch_taken_0x15223c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15223Cu;
            // 0x152240: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15223c) {
            ctx->pc = 0x152250u;
            goto label_152250;
        }
    }
    ctx->pc = 0x152244u;
    // 0x152244: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x152244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x152248: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x152248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15224c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x15224cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_152250:
    // 0x152250: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x152250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x152254: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x152254u;
    {
        const bool branch_taken_0x152254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152254u;
            // 0x152258: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152254) {
            ctx->pc = 0x1521F0u;
            runtime->cooperativeGuestYield();
            goto label_1521f0;
        }
    }
    ctx->pc = 0x15225Cu;
label_15225c:
    // 0x15225c: 0xdba10150  lqc2        $vf1, 0x150($sp)
    ctx->pc = 0x15225cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x152260: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x152260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152264: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x152264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x152268: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x152268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15226c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x15226cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152274: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x152274u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[1];
    // 0x152278: 0x18a000ae  blez        $a1, . + 4 + (0xAE << 2)
    ctx->pc = 0x152278u;
    {
        const bool branch_taken_0x152278 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x15227Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152278u;
            // 0x15227c: 0xdba50090  lqc2        $vf5, 0x90($sp) (Delay Slot)
        ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152278) {
            ctx->pc = 0x152534u;
            goto label_152534;
        }
    }
    ctx->pc = 0x152280u;
    // 0x152280: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x152280u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152284: 0x7ba40080  lq          $a0, 0x80($sp)
    ctx->pc = 0x152284u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152288: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x152288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15228c: 0x0  nop
    ctx->pc = 0x15228cu;
    // NOP
label_152290:
    // 0x152290: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x152290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x152294: 0xdba20150  lqc2        $vf2, 0x150($sp)
    ctx->pc = 0x152294u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x152298: 0xd8c10010  lqc2        $vf1, 0x10($a2)
    ctx->pc = 0x152298u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x15229c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x15229cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1522a0: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1522a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1522a4: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1522a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1522a8: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1522a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1522ac: 0xc4c300cc  lwc1        $f3, 0xCC($a2)
    ctx->pc = 0x1522acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1522b0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1522b0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1522b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1522b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1522b8: 0x46000004  c1          0x4
    ctx->pc = 0x1522b8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1522bc: 0x46040081  sub.s       $f2, $f0, $f4
    ctx->pc = 0x1522bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1522c0: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1522c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1522c4: 0x0  nop
    ctx->pc = 0x1522c4u;
    // NOP
    // 0x1522c8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1522C8u;
    {
        const bool branch_taken_0x1522c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1522c8) {
            ctx->pc = 0x1522CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1522C8u;
            // 0x1522cc: 0xc4c000c4  lwc1        $f0, 0xC4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1522E0u;
            goto label_1522e0;
        }
    }
    ctx->pc = 0x1522D0u;
    // 0x1522d0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1522d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1522d4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1522D4u;
    {
        const bool branch_taken_0x1522d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1522D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1522D4u;
            // 0x1522d8: 0xc4c000e0  lwc1        $f0, 0xE0($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522d4) {
            ctx->pc = 0x152344u;
            goto label_152344;
        }
    }
    ctx->pc = 0x1522DCu;
    // 0x1522dc: 0x0  nop
    ctx->pc = 0x1522dcu;
    // NOP
label_1522e0:
    // 0x1522e0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1522e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1522e4: 0x0  nop
    ctx->pc = 0x1522e4u;
    // NOP
    // 0x1522e8: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x1522E8u;
    {
        const bool branch_taken_0x1522e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1522e8) {
            ctx->pc = 0x1522ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1522E8u;
            // 0x1522ec: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x152324u;
            goto label_152324;
        }
    }
    ctx->pc = 0x1522F0u;
    // 0x1522f0: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x1522f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
    // 0x1522f4: 0xd8c10030  lqc2        $vf1, 0x30($a2)
    ctx->pc = 0x1522f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1522f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1522f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1522fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1522fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152300: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x152300u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152304: 0xc4c300c8  lwc1        $f3, 0xC8($a2)
    ctx->pc = 0x152304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152308: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x152308u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15230c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15230cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x152310: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x152310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x152314: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x152314u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x152318: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x152318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15231c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15231Cu;
    {
        const bool branch_taken_0x15231c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15231Cu;
            // 0x152320: 0x460100c0  add.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15231c) {
            ctx->pc = 0x152340u;
            goto label_152340;
        }
    }
    ctx->pc = 0x152324u;
label_152324:
    // 0x152324: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x152324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x152328: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x152328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15232c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x15232cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x152330: 0xc4c200c8  lwc1        $f2, 0xC8($a2)
    ctx->pc = 0x152330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152334: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x152334u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x152338: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x152338u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15233c: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x15233cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_152340:
    // 0x152340: 0xc4c000e0  lwc1        $f0, 0xE0($a2)
    ctx->pc = 0x152340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_152344:
    // 0x152344: 0xd8c40030  lqc2        $vf4, 0x30($a2)
    ctx->pc = 0x152344u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x152348: 0x12a0002b  beqz        $s5, . + 4 + (0x2B << 2)
    ctx->pc = 0x152348u;
    {
        const bool branch_taken_0x152348 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15234Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152348u;
            // 0x15234c: 0x460018c2  mul.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152348) {
            ctx->pc = 0x1523F8u;
            goto label_1523f8;
        }
    }
    ctx->pc = 0x152350u;
    // 0x152350: 0xc4c100e4  lwc1        $f1, 0xE4($a2)
    ctx->pc = 0x152350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152354: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152358: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x152358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15235c: 0x0  nop
    ctx->pc = 0x15235cu;
    // NOP
    // 0x152360: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x152360u;
    {
        const bool branch_taken_0x152360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152360u;
            // 0x152364: 0x48292000  qmfc2.ni    $t1, $vf4 (Delay Slot)
        SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152360) {
            ctx->pc = 0x1523F8u;
            goto label_1523f8;
        }
    }
    ctx->pc = 0x152368u;
    // 0x152368: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x152368u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15236c: 0x700917c9  prot3w      $v0, $t1
    ctx->pc = 0x15236cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x152370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152374: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x152374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152378: 0x0  nop
    ctx->pc = 0x152378u;
    // NOP
    // 0x15237c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x15237Cu;
    {
        const bool branch_taken_0x15237c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x152380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15237Cu;
            // 0x152380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15237c) {
            ctx->pc = 0x152388u;
            goto label_152388;
        }
    }
    ctx->pc = 0x152384u;
    // 0x152384: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x152384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152388:
    // 0x152388: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x152388u;
    {
        const bool branch_taken_0x152388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152388) {
            ctx->pc = 0x15238Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152388u;
            // 0x15238c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x152390u;
            goto label_152390;
        }
    }
    ctx->pc = 0x152390u;
label_152390:
    // 0x152390: 0x482a2000  qmfc2.ni    $t2, $vf4
    ctx->pc = 0x152390u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152394: 0x700a1789  pexew       $v0, $t2
    ctx->pc = 0x152394u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x152398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15239c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15239cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1523a0: 0x0  nop
    ctx->pc = 0x1523a0u;
    // NOP
    // 0x1523a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1523A4u;
    {
        const bool branch_taken_0x1523a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1523A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1523A4u;
            // 0x1523a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1523a4) {
            ctx->pc = 0x1523B0u;
            goto label_1523b0;
        }
    }
    ctx->pc = 0x1523ACu;
    // 0x1523ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1523acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1523b0:
    // 0x1523b0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1523B0u;
    {
        const bool branch_taken_0x1523b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1523b0) {
            ctx->pc = 0x1523B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1523B0u;
            // 0x1523b4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1523B8u;
            goto label_1523b8;
        }
    }
    ctx->pc = 0x1523B8u;
label_1523b8:
    // 0x1523b8: 0x4b040043  vaddw.x     $vf1, $vf0, $vf4w
    ctx->pc = 0x1523b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1523bc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1523bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1523c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1523c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1523c4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1523c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1523c8: 0x70421b89  pcpyld      $v1, $v0, $v0
    ctx->pc = 0x1523c8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1523cc: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x1523ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1523d0: 0x71221389  pcpyld      $v0, $t1, $v0
    ctx->pc = 0x1523d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x1523d4: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1523d4u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1523d8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1523d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1523dc: 0x7fa40160  sq          $a0, 0x160($sp)
    ctx->pc = 0x1523dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 4));
    // 0x1523e0: 0x4be4106c  vsub.xyzw   $vf1, $vf2, $vf4
    ctx->pc = 0x1523e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1523e4: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x1523e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1523e8: 0x8cc300e4  lw          $v1, 0xE4($a2)
    ctx->pc = 0x1523e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x1523ec: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1523ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1523f0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1523f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1523f4: 0x4be40928  vadd.xyzw   $vf4, $vf1, $vf4
    ctx->pc = 0x1523f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1523f8:
    // 0x1523f8: 0x8cc300c0  lw          $v1, 0xC0($a2)
    ctx->pc = 0x1523f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x1523fc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1523FCu;
    {
        const bool branch_taken_0x1523fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1523FCu;
            // 0x152400: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1523fc) {
            ctx->pc = 0x15240Cu;
            goto label_15240c;
        }
    }
    ctx->pc = 0x152404u;
    // 0x152404: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x152404u;
    {
        const bool branch_taken_0x152404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x152404) {
            ctx->pc = 0x152430u;
            goto label_152430;
        }
    }
    ctx->pc = 0x15240Cu;
label_15240c:
    // 0x15240c: 0x44091800  mfc1        $t1, $f3
    ctx->pc = 0x15240cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x152410: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x152410u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x152414: 0x4be22098  vmulx.xyzw  $vf2, $vf4, $vf2x
    ctx->pc = 0x152414u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x152418: 0xdba10190  lqc2        $vf1, 0x190($sp)
    ctx->pc = 0x152418u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x15241c: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x15241cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152420: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x152420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152424: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x152424u;
    {
        const bool branch_taken_0x152424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152424u;
            // 0x152428: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152424) {
            ctx->pc = 0x152520u;
            goto label_152520;
        }
    }
    ctx->pc = 0x15242Cu;
    // 0x15242c: 0x0  nop
    ctx->pc = 0x15242cu;
    // NOP
label_152430:
    // 0x152430: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x152430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x152434: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x152434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x152438: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x152438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15243c: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x15243cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x152440: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x152440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152444: 0x0  nop
    ctx->pc = 0x152444u;
    // NOP
    // 0x152448: 0x45020036  bc1fl       . + 4 + (0x36 << 2)
    ctx->pc = 0x152448u;
    {
        const bool branch_taken_0x152448 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x152448) {
            ctx->pc = 0x15244Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152448u;
            // 0x15244c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152524u;
            goto label_152524;
        }
    }
    ctx->pc = 0x152450u;
    // 0x152450: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x152450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x152454: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x152454u;
    {
        const bool branch_taken_0x152454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152454u;
            // 0x152458: 0xdba10150  lqc2        $vf1, 0x150($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152454) {
            ctx->pc = 0x152490u;
            goto label_152490;
        }
    }
    ctx->pc = 0x15245Cu;
    // 0x15245c: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x15245cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x152460: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x152460u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x152464: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x152464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x152468: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x152468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15246c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x15246cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152470: 0x4be5133c  vmove.xyzw  $vf5, $vf2
    ctx->pc = 0x152470u;
    ctx->vu0_vf[5] = ctx->vu0_vf[2];
    // 0x152474: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x152474u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x152478: 0x4a0003bf  vwaitq
    ctx->pc = 0x152478u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15247c: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x15247cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x152480: 0x4a0002ff  vnop
    ctx->pc = 0x152480u;
    // NOP operation, no action needed for VU0
    // 0x152484: 0x4a0002ff  vnop
    ctx->pc = 0x152484u;
    // NOP operation, no action needed for VU0
    // 0x152488: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x152488u;
    {
        const bool branch_taken_0x152488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15248Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152488u;
            // 0x15248c: 0xfba50180  sqc2        $vf5, 0x180($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152488) {
            ctx->pc = 0x152498u;
            goto label_152498;
        }
    }
    ctx->pc = 0x152490u;
label_152490:
    // 0x152490: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x152490u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x152494: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x152494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
label_152498:
    // 0x152498: 0x440a1800  mfc1        $t2, $f3
    ctx->pc = 0x152498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x15249c: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x15249cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x1524a0: 0xdba10180  lqc2        $vf1, 0x180($sp)
    ctx->pc = 0x1524a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1524a4: 0x4be208d8  vmulx.xyzw  $vf3, $vf1, $vf2x
    ctx->pc = 0x1524a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1524a8: 0xfba30180  sqc2        $vf3, 0x180($sp)
    ctx->pc = 0x1524a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1524ac: 0x84c200d0  lh          $v0, 0xD0($a2)
    ctx->pc = 0x1524acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x1524b0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1524B0u;
    {
        const bool branch_taken_0x1524b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1524B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1524B0u;
            // 0x1524b4: 0xdba101c0  lqc2        $vf1, 0x1C0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524b0) {
            ctx->pc = 0x1524E0u;
            goto label_1524e0;
        }
    }
    ctx->pc = 0x1524B8u;
    // 0x1524b8: 0xdba101a0  lqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x1524b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1524bc: 0x4be22098  vmulx.xyzw  $vf2, $vf4, $vf2x
    ctx->pc = 0x1524bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1524c0: 0x4be2086b  vmax.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1524c0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1524c4: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x1524c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1524c8: 0xdba101e0  lqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x1524c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1524cc: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1524ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1524d0: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x1524d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1524d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1524D4u;
    {
        const bool branch_taken_0x1524d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1524D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1524D4u;
            // 0x1524d8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524d4) {
            ctx->pc = 0x152500u;
            goto label_152500;
        }
    }
    ctx->pc = 0x1524DCu;
    // 0x1524dc: 0x0  nop
    ctx->pc = 0x1524dcu;
    // NOP
label_1524e0:
    // 0x1524e0: 0x4be22098  vmulx.xyzw  $vf2, $vf4, $vf2x
    ctx->pc = 0x1524e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1524e4: 0x4be2086b  vmax.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1524e4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1524e8: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x1524e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1524ec: 0xdba201f0  lqc2        $vf2, 0x1F0($sp)
    ctx->pc = 0x1524ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1524f0: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1524f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1524f4: 0xfba201f0  sqc2        $vf2, 0x1F0($sp)
    ctx->pc = 0x1524f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1524f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1524f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1524fc: 0x0  nop
    ctx->pc = 0x1524fcu;
    // NOP
label_152500:
    // 0x152500: 0x8cc200c0  lw          $v0, 0xC0($a2)
    ctx->pc = 0x152500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x152504: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x152504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x152508: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x152508u;
    {
        const bool branch_taken_0x152508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152508) {
            ctx->pc = 0x15250Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152508u;
            // 0x15250c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152524u;
            goto label_152524;
        }
    }
    ctx->pc = 0x152510u;
    // 0x152510: 0xdba30200  lqc2        $vf3, 0x200($sp)
    ctx->pc = 0x152510u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x152514: 0xdba10180  lqc2        $vf1, 0x180($sp)
    ctx->pc = 0x152514u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x152518: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x152518u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15251c: 0xfba30200  sqc2        $vf3, 0x200($sp)
    ctx->pc = 0x15251cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[3]));
label_152520:
    // 0x152520: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x152520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_152524:
    // 0x152524: 0x1500ff5a  bnez        $t0, . + 4 + (-0xA6 << 2)
    ctx->pc = 0x152524u;
    {
        const bool branch_taken_0x152524 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x152528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152524u;
            // 0x152528: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152524) {
            ctx->pc = 0x152290u;
            runtime->cooperativeGuestYield();
            goto label_152290;
        }
    }
    ctx->pc = 0x15252Cu;
    // 0x15252c: 0xfba50090  sqc2        $vf5, 0x90($sp)
    ctx->pc = 0x15252cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x152530: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x152530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
label_152534:
    // 0x152534: 0x1a20000e  blez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x152534u;
    {
        const bool branch_taken_0x152534 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x152538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152534u;
            // 0x152538: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152534) {
            ctx->pc = 0x152570u;
            goto label_152570;
        }
    }
    ctx->pc = 0x15253Cu;
    // 0x15253c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x15253cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152540: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x152540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x152544: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x152544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x152548: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x152548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15254c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x15254cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x152550: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x152550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x152554: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x152554u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x152558: 0xdba10190  lqc2        $vf1, 0x190($sp)
    ctx->pc = 0x152558u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x15255c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x15255cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152560: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x152560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152564: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x152564u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152568: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x152568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15256c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15256cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_152570:
    // 0x152570: 0x8c431048  lw          $v1, 0x1048($v0)
    ctx->pc = 0x152570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4168)));
    // 0x152574: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x152574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x152578: 0x2442ff90  addiu       $v0, $v0, -0x70
    ctx->pc = 0x152578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
    // 0x15257c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x15257cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x152580: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x152580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152584: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x152584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x152588: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x152588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15258c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15258cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_152590:
    // 0x152590: 0x0  nop
    ctx->pc = 0x152590u;
    // NOP
    // 0x152594: 0x0  nop
    ctx->pc = 0x152594u;
    // NOP
    // 0x152598: 0x0  nop
    ctx->pc = 0x152598u;
    // NOP
    // 0x15259c: 0x0  nop
    ctx->pc = 0x15259cu;
    // NOP
    // 0x1525a0: 0x0  nop
    ctx->pc = 0x1525a0u;
    // NOP
    // 0x1525a4: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1525A4u;
    {
        const bool branch_taken_0x1525a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1525A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1525A4u;
            // 0x1525a8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525a4) {
            ctx->pc = 0x152590u;
            runtime->cooperativeGuestYield();
            goto label_152590;
        }
    }
    ctx->pc = 0x1525ACu;
    // 0x1525ac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1525acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1525b0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1525b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1525b4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1525b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1525b8: 0x8c63104c  lw          $v1, 0x104C($v1)
    ctx->pc = 0x1525b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4172)));
    // 0x1525bc: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x1525bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1525c0: 0x24640360  addiu       $a0, $v1, 0x360
    ctx->pc = 0x1525c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 864));
    // 0x1525c4: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x1525c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
    // 0x1525c8: 0x8c620360  lw          $v0, 0x360($v1)
    ctx->pc = 0x1525c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 864)));
    // 0x1525cc: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1525CCu;
    {
        const bool branch_taken_0x1525cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1525D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1525CCu;
            // 0x1525d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525cc) {
            ctx->pc = 0x1525D8u;
            goto label_1525d8;
        }
    }
    ctx->pc = 0x1525D4u;
    // 0x1525d4: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1525d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1525d8:
    // 0x1525d8: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x1525d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1525dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1525dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1525e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1525E0u;
    {
        const bool branch_taken_0x1525e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1525E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1525E0u;
            // 0x1525e4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525e0) {
            ctx->pc = 0x1525F0u;
            goto label_1525f0;
        }
    }
    ctx->pc = 0x1525E8u;
    // 0x1525e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1525E8u;
    {
        const bool branch_taken_0x1525e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1525ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1525E8u;
            // 0x1525ec: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525e8) {
            ctx->pc = 0x15260Cu;
            goto label_15260c;
        }
    }
    ctx->pc = 0x1525F0u;
label_1525f0:
    // 0x1525f0: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x1525f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1525f4: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1525f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1525f8: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1525F8u;
    {
        const bool branch_taken_0x1525f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1525f8) {
            ctx->pc = 0x1525FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1525F8u;
            // 0x1525fc: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152610u;
            goto label_152610;
        }
    }
    ctx->pc = 0x152600u;
    // 0x152600: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x152600u;
    SET_GPR_U32(ctx, 31, 0x152608u);
    ctx->pc = 0x152604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152600u;
            // 0x152604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152608u; }
        if (ctx->pc != 0x152608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152608u; }
        if (ctx->pc != 0x152608u) { return; }
    }
    ctx->pc = 0x152608u;
    // 0x152608: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x152608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_15260c:
    // 0x15260c: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x15260cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
label_152610:
    // 0x152610: 0xde2200f0  ld          $v0, 0xF0($s1)
    ctx->pc = 0x152610u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x152614: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x152614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x152618: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x152618u;
    {
        const bool branch_taken_0x152618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15261Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152618u;
            // 0x15261c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152618) {
            ctx->pc = 0x152654u;
            goto label_152654;
        }
    }
    ctx->pc = 0x152620u;
    // 0x152620: 0xc0614c6  jal         func_185318
    ctx->pc = 0x152620u;
    SET_GPR_U32(ctx, 31, 0x152628u);
    ctx->pc = 0x152624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152620u;
            // 0x152624: 0xfe2300f0  sd          $v1, 0xF0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 240), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152628u; }
        if (ctx->pc != 0x152628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152628u; }
        if (ctx->pc != 0x152628u) { return; }
    }
    ctx->pc = 0x152628u;
    // 0x152628: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x152628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15262c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15262cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152630: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x152630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152634: 0x7e2200b0  sq          $v0, 0xB0($s1)
    ctx->pc = 0x152634u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), GPR_VEC(ctx, 2));
    // 0x152638: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x152638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15263c: 0x7e2200c0  sq          $v0, 0xC0($s1)
    ctx->pc = 0x15263cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), GPR_VEC(ctx, 2));
    // 0x152640: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x152640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x152644: 0x7e2200d0  sq          $v0, 0xD0($s1)
    ctx->pc = 0x152644u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 208), GPR_VEC(ctx, 2));
    // 0x152648: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x152648u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15264c: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x15264Cu;
    SET_GPR_U32(ctx, 31, 0x152654u);
    ctx->pc = 0x152650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15264Cu;
            // 0x152650: 0x7e2200e0  sq          $v0, 0xE0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152654u; }
        if (ctx->pc != 0x152654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152654u; }
        if (ctx->pc != 0x152654u) { return; }
    }
    ctx->pc = 0x152654u;
label_152654:
    // 0x152654: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x152654u;
    {
        const bool branch_taken_0x152654 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x152658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152654u;
            // 0x152658: 0x262600b0  addiu       $a2, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152654) {
            ctx->pc = 0x152690u;
            goto label_152690;
        }
    }
    ctx->pc = 0x15265Cu;
    // 0x15265c: 0xdba20200  lqc2        $vf2, 0x200($sp)
    ctx->pc = 0x15265cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x152660: 0x4be2106a  vmul.xyzw   $vf1, $vf2, $vf2
    ctx->pc = 0x152660u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152664: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x152664u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x152668: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x152668u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15266c: 0xdba10200  lqc2        $vf1, 0x200($sp)
    ctx->pc = 0x15266cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x152670: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x152670u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x152674: 0x4a0003bf  vwaitq
    ctx->pc = 0x152674u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x152678: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x152678u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15267c: 0x4a0002ff  vnop
    ctx->pc = 0x15267cu;
    // NOP operation, no action needed for VU0
    // 0x152680: 0x4a0002ff  vnop
    ctx->pc = 0x152680u;
    // NOP operation, no action needed for VU0
    // 0x152684: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x152684u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152688: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x152688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15268c: 0x0  nop
    ctx->pc = 0x15268cu;
    // NOP
label_152690:
    // 0x152690: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x152690u;
    {
        const bool branch_taken_0x152690 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x152694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152690u;
            // 0x152694: 0xdba301e0  lqc2        $vf3, 0x1E0($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152690) {
            ctx->pc = 0x152730u;
            goto label_152730;
        }
    }
    ctx->pc = 0x152698u;
    // 0x152698: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x152698u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15269c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x15269cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1526a0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1526a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1526a4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1526a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1526a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1526a8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1526ac: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1526acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1526b0: 0x4a0002ff  vnop
    ctx->pc = 0x1526b0u;
    // NOP operation, no action needed for VU0
    // 0x1526b4: 0x4a0002ff  vnop
    ctx->pc = 0x1526b4u;
    // NOP operation, no action needed for VU0
    // 0x1526b8: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1526b8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1526bc: 0x4be20b3c  vmove.xyzw  $vf2, $vf1
    ctx->pc = 0x1526bcu;
    ctx->vu0_vf[2] = ctx->vu0_vf[1];
    // 0x1526c0: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1526c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1526c4: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1526c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1526c8: 0xda2100b0  lqc2        $vf1, 0xB0($s1)
    ctx->pc = 0x1526c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1526cc: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1526ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1526d0: 0xd8c10010  lqc2        $vf1, 0x10($a2)
    ctx->pc = 0x1526d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1526d4: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1526d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1526d8: 0xd8c40030  lqc2        $vf4, 0x30($a2)
    ctx->pc = 0x1526d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1526dc: 0xd8c10020  lqc2        $vf1, 0x20($a2)
    ctx->pc = 0x1526dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1526e0: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1526e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1526e4: 0x4be2210b  vmaddw.xyzw $vf4, $vf4, $vf2w
    ctx->pc = 0x1526e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1526e8: 0xdba201a0  lqc2        $vf2, 0x1A0($sp)
    ctx->pc = 0x1526e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1526ec: 0x4b021051  vmaxy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1526ecu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1526f0: 0x4a2210d2  vmaxz.w     $vf3, $vf2, $vf2z
    ctx->pc = 0x1526f0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1526f4: 0x4b030853  vmaxw.x     $vf1, $vf1, $vf3w
    ctx->pc = 0x1526f4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1526f8: 0xdba30210  lqc2        $vf3, 0x210($sp)
    ctx->pc = 0x1526f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1526fc: 0x4a211880  vaddx.w     $vf2, $vf3, $vf1x
    ctx->pc = 0x1526fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x152700: 0xfba201a0  sqc2        $vf2, 0x1A0($sp)
    ctx->pc = 0x152700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x152704: 0xfa020030  sqc2        $vf2, 0x30($s0)
    ctx->pc = 0x152704u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x152708: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x152708u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15270c: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x15270cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x152710: 0x4b040080  vaddx.x     $vf2, $vf0, $vf4x
    ctx->pc = 0x152710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x152714: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x152714u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x152718: 0x4b0400c1  vaddy.x     $vf3, $vf0, $vf4y
    ctx->pc = 0x152718u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15271c: 0x4b040042  vaddz.x     $vf1, $vf0, $vf4z
    ctx->pc = 0x15271cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152720: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x152720u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x152724: 0xfa030010  sqc2        $vf3, 0x10($s0)
    ctx->pc = 0x152724u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x152728: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x152728u;
    {
        const bool branch_taken_0x152728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15272Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152728u;
            // 0x15272c: 0xfa010020  sqc2        $vf1, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152728) {
            ctx->pc = 0x152788u;
            goto label_152788;
        }
    }
    ctx->pc = 0x152730u;
label_152730:
    // 0x152730: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x152730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x152734: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x152734u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x152738: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x152738u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15273c: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x15273cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152740: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x152740u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152744: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x152744u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x152748: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x152748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15274c: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x15274cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152750: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x152750u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x152754: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x152754u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152758: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x152758u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15275c: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x15275cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x152760: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x152760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x152764: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x152764u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x152768: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x152768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x15276c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x15276cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x152770: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x152770u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x152774: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x152774u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x152778: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x152778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x15277c: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x15277cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x152780: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x152780u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x152784: 0x0  nop
    ctx->pc = 0x152784u;
    // NOP
label_152788:
    // 0x152788: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x152788u;
    {
        const bool branch_taken_0x152788 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x15278Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152788u;
            // 0x15278c: 0xdba101f0  lqc2        $vf1, 0x1F0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152788) {
            ctx->pc = 0x152828u;
            goto label_152828;
        }
    }
    ctx->pc = 0x152790u;
    // 0x152790: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x152790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x152794: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x152794u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152798: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x152798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15279c: 0xdba201f0  lqc2        $vf2, 0x1F0($sp)
    ctx->pc = 0x15279cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1527a0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1527a0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1527a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1527a4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1527a8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1527a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1527ac: 0x4a0002ff  vnop
    ctx->pc = 0x1527acu;
    // NOP operation, no action needed for VU0
    // 0x1527b0: 0x4a0002ff  vnop
    ctx->pc = 0x1527b0u;
    // NOP operation, no action needed for VU0
    // 0x1527b4: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x1527b4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1527b8: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1527b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1527bc: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x1527bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1527c0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1527c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1527c4: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1527c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1527c8: 0xd8c10010  lqc2        $vf1, 0x10($a2)
    ctx->pc = 0x1527c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1527cc: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1527ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1527d0: 0xd8c40030  lqc2        $vf4, 0x30($a2)
    ctx->pc = 0x1527d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1527d4: 0xd8c10020  lqc2        $vf1, 0x20($a2)
    ctx->pc = 0x1527d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1527d8: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1527d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1527dc: 0x4be2210b  vmaddw.xyzw $vf4, $vf4, $vf2w
    ctx->pc = 0x1527dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1527e0: 0xdba101c0  lqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x1527e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1527e4: 0x4a2108d2  vmaxz.w     $vf3, $vf1, $vf1z
    ctx->pc = 0x1527e4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1527e8: 0x4b010891  vmaxy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1527e8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1527ec: 0x4b031093  vmaxw.x     $vf2, $vf2, $vf3w
    ctx->pc = 0x1527ecu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1527f0: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1527f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1527f4: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x1527f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1527f8: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x1527f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1527fc: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x1527fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152800: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x152800u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x152804: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x152804u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x152808: 0x4a840080  vaddx.y     $vf2, $vf0, $vf4x
    ctx->pc = 0x152808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15280c: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x15280cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x152810: 0x4a8400c1  vaddy.y     $vf3, $vf0, $vf4y
    ctx->pc = 0x152810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x152814: 0x4a840042  vaddz.y     $vf1, $vf0, $vf4z
    ctx->pc = 0x152814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152818: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x152818u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15281c: 0xfa030010  sqc2        $vf3, 0x10($s0)
    ctx->pc = 0x15281cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x152820: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x152820u;
    {
        const bool branch_taken_0x152820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152820u;
            // 0x152824: 0xfa010020  sqc2        $vf1, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152820) {
            ctx->pc = 0x152880u;
            goto label_152880;
        }
    }
    ctx->pc = 0x152828u;
label_152828:
    // 0x152828: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x152828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x15282c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x15282cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x152830: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x152830u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x152834: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x152834u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152838: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x152838u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15283c: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x15283cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x152840: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x152840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152844: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x152844u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152848: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x152848u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15284c: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x15284cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152850: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x152850u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152854: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x152854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x152858: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x152858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x15285c: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x15285cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x152860: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x152860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x152864: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x152864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x152868: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x152868u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x15286c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x15286cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x152870: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x152870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x152874: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x152874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x152878: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x152878u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x15287c: 0x0  nop
    ctx->pc = 0x15287cu;
    // NOP
label_152880:
    // 0x152880: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x152880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152884: 0x7bb10270  lq          $s1, 0x270($sp)
    ctx->pc = 0x152884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x152888: 0x7bb00280  lq          $s0, 0x280($sp)
    ctx->pc = 0x152888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15288c: 0x7bb20260  lq          $s2, 0x260($sp)
    ctx->pc = 0x15288cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x152890: 0x7bb30250  lq          $s3, 0x250($sp)
    ctx->pc = 0x152890u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x152894: 0x7bb40240  lq          $s4, 0x240($sp)
    ctx->pc = 0x152894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x152898: 0x7bb50230  lq          $s5, 0x230($sp)
    ctx->pc = 0x152898u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x15289c: 0xdfbf0220  ld          $ra, 0x220($sp)
    ctx->pc = 0x15289cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1528a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1528A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1528A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1528A0u;
            // 0x1528a4: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152178u: goto label_152178;
            case 0x1521C0u: goto label_1521c0;
            case 0x1521F0u: goto label_1521f0;
            case 0x152250u: goto label_152250;
            case 0x15225Cu: goto label_15225c;
            case 0x152290u: goto label_152290;
            case 0x1522E0u: goto label_1522e0;
            case 0x152324u: goto label_152324;
            case 0x152340u: goto label_152340;
            case 0x152344u: goto label_152344;
            case 0x152388u: goto label_152388;
            case 0x152390u: goto label_152390;
            case 0x1523B0u: goto label_1523b0;
            case 0x1523B8u: goto label_1523b8;
            case 0x1523F8u: goto label_1523f8;
            case 0x15240Cu: goto label_15240c;
            case 0x152430u: goto label_152430;
            case 0x152490u: goto label_152490;
            case 0x152498u: goto label_152498;
            case 0x1524E0u: goto label_1524e0;
            case 0x152500u: goto label_152500;
            case 0x152520u: goto label_152520;
            case 0x152524u: goto label_152524;
            case 0x152534u: goto label_152534;
            case 0x152570u: goto label_152570;
            case 0x152590u: goto label_152590;
            case 0x1525D8u: goto label_1525d8;
            case 0x1525F0u: goto label_1525f0;
            case 0x15260Cu: goto label_15260c;
            case 0x152610u: goto label_152610;
            case 0x152654u: goto label_152654;
            case 0x152690u: goto label_152690;
            case 0x152730u: goto label_152730;
            case 0x152788u: goto label_152788;
            case 0x152828u: goto label_152828;
            case 0x152880u: goto label_152880;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1528A8u;
}
