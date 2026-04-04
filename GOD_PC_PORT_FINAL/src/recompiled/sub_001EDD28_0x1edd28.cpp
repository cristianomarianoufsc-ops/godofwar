#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EDD28
// Address: 0x1edd28 - 0x1ee2d0
void sub_001EDD28_0x1edd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDD28_0x1edd28");
#endif

    ctx->pc = 0x1edd28u;

    // 0x1edd28: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1edd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1edd2c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1edd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1edd30: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x1edd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x1edd34: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1edd34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1edd38: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1edd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1edd3c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1edd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1edd40: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1edd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1edd44: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1edd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1edd48: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1edd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1edd4c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1edd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1edd50: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1edd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1edd54: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1edd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x1edd58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1edd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1edd5c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1edd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1edd60: 0x8c42e270  lw          $v0, -0x1D90($v0)
    ctx->pc = 0x1edd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959728)));
    // 0x1edd64: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1EDD64u;
    {
        const bool branch_taken_0x1edd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDD64u;
            // 0x1edd68: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd64) {
            ctx->pc = 0x1EDED0u;
            goto label_1eded0;
        }
    }
    ctx->pc = 0x1EDD6Cu;
    // 0x1edd6c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1edd6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1edd70: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x1edd70u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x1edd74: 0x8e03bcf8  lw          $v1, -0x4308($s0)
    ctx->pc = 0x1edd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1edd78: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1edd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1edd7c: 0x2671f170  addiu       $s1, $s3, -0xE90
    ctx->pc = 0x1edd7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963568));
    // 0x1edd80: 0x2442dc78  addiu       $v0, $v0, -0x2388
    ctx->pc = 0x1edd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958200));
    // 0x1edd84: 0x8c651040  lw          $a1, 0x1040($v1)
    ctx->pc = 0x1edd84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4160)));
    // 0x1edd88: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1edd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd8c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1edd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1edd90: 0xac651054  sw          $a1, 0x1054($v1)
    ctx->pc = 0x1edd90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4180), GPR_U32(ctx, 5));
    // 0x1edd94: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x1edd94u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1edd98: 0xae60f170  sw          $zero, -0xE90($s3)
    ctx->pc = 0x1edd98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294963568), GPR_U32(ctx, 0));
    // 0x1edd9c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1edd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1edda0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1edda0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1edda4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1edda4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1edda8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1edda8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1eddac: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1eddacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1eddb0: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1eddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1eddb4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1eddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1eddb8: 0xc04797a  jal         func_11E5E8
    ctx->pc = 0x1EDDB8u;
    SET_GPR_U32(ctx, 31, 0x1EDDC0u);
    ctx->pc = 0x1EDDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDDB8u;
            // 0x1eddbc: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E5E8u;
    if (runtime->hasFunction(0x11E5E8u)) {
        auto targetFn = runtime->lookupFunction(0x11E5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDDC0u; }
        if (ctx->pc != 0x1EDDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E5E8_0x11e5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDDC0u; }
        if (ctx->pc != 0x1EDDC0u) { return; }
    }
    ctx->pc = 0x1EDDC0u;
    // 0x1eddc0: 0x8e04bcf8  lw          $a0, -0x4308($s0)
    ctx->pc = 0x1eddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1eddc4: 0x8e430804  lw          $v1, 0x804($s2)
    ctx->pc = 0x1eddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2052)));
    // 0x1eddc8: 0x8c82103c  lw          $v0, 0x103C($a0)
    ctx->pc = 0x1eddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4156)));
    // 0x1eddcc: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1EDDCCu;
    {
        const bool branch_taken_0x1eddcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDDCCu;
            // 0x1eddd0: 0xac821054  sw          $v0, 0x1054($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eddcc) {
            ctx->pc = 0x1EDE88u;
            goto label_1ede88;
        }
    }
    ctx->pc = 0x1EDDD4u;
    // 0x1eddd4: 0xda440780  lqc2        $vf4, 0x780($s2)
    ctx->pc = 0x1eddd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1920)));
    // 0x1eddd8: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x1eddd8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1edddc: 0x48232000  qmfc2.ni    $v1, $vf4
    ctx->pc = 0x1edddcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1edde0: 0x706510a8  pceqw       $v0, $v1, $a1
    ctx->pc = 0x1edde0u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x1edde4: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x1edde4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1edde8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1edde8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1eddec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1eddecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1eddf0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1eddf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eddf4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1eddf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1eddf8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EDDF8u;
    {
        const bool branch_taken_0x1eddf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDDF8u;
            // 0x1eddfc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eddf8) {
            ctx->pc = 0x1EDE88u;
            goto label_1ede88;
        }
    }
    ctx->pc = 0x1EDE00u;
    // 0x1ede00: 0xae60f170  sw          $zero, -0xE90($s3)
    ctx->pc = 0x1ede00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294963568), GPR_U32(ctx, 0));
    // 0x1ede04: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1ede04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1ede08: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ede08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ede0c: 0x2442dba8  addiu       $v0, $v0, -0x2458
    ctx->pc = 0x1ede0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957992));
    // 0x1ede10: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1ede10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ede14: 0x4be408ac  vsub.xyzw   $vf2, $vf1, $vf4
    ctx->pc = 0x1ede14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ede18: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1ede18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1ede1c: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1ede1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1ede20: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1ede20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1ede24: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1ede24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1ede28: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1ede28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1ede2c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1ede2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1ede30: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1ede30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1ede34: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1ede34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1ede38: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1ede38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ede3c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1ede3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ede40: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1ede40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ede44: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1ede44u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ede48: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ede48u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ede4c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1ede4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ede50: 0x4a0002ff  vnop
    ctx->pc = 0x1ede50u;
    // NOP operation, no action needed for VU0
    // 0x1ede54: 0x4a0002ff  vnop
    ctx->pc = 0x1ede54u;
    // NOP operation, no action needed for VU0
    // 0x1ede58: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1ede58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1ede5c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ede5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1ede60: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1ede60u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ede64: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1ede64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ede68: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1ede68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ede6c: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x1ede6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ede70: 0x4be2206c  vsub.xyzw   $vf1, $vf4, $vf2
    ctx->pc = 0x1ede70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ede74: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1ede74u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ede78: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1ede78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ede7c: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1ede7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ede80: 0xc047864  jal         func_11E190
    ctx->pc = 0x1EDE80u;
    SET_GPR_U32(ctx, 31, 0x1EDE88u);
    ctx->pc = 0x1EDE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE80u;
            // 0x1ede84: 0x48260800  qmfc2.ni    $a2, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE88u; }
        if (ctx->pc != 0x1EDE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE88u; }
        if (ctx->pc != 0x1EDE88u) { return; }
    }
    ctx->pc = 0x1EDE88u;
label_1ede88:
    // 0x1ede88: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x1ede88u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ede8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ede8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ede90: 0x8e4308c0  lw          $v1, 0x8C0($s2)
    ctx->pc = 0x1ede90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2240)));
    // 0x1ede94: 0x7e440780  sq          $a0, 0x780($s2)
    ctx->pc = 0x1ede94u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1920), GPR_VEC(ctx, 4));
    // 0x1ede98: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1EDE98u;
    {
        const bool branch_taken_0x1ede98 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1EDE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE98u;
            // 0x1ede9c: 0xae420804  sw          $v0, 0x804($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2052), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede98) {
            ctx->pc = 0x1EDED0u;
            goto label_1eded0;
        }
    }
    ctx->pc = 0x1EDEA0u;
    // 0x1edea0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1edea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1edea4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1edea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1edea8: 0x2442e248  addiu       $v0, $v0, -0x1DB8
    ctx->pc = 0x1edea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959688));
    // 0x1edeac: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1edeacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1edeb0: 0x24846268  addiu       $a0, $a0, 0x6268
    ctx->pc = 0x1edeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25192));
    // 0x1edeb4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1edeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1edeb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1edeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1edebc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1edebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1edec0: 0xc07b688  jal         func_1EDA20
    ctx->pc = 0x1EDEC0u;
    SET_GPR_U32(ctx, 31, 0x1EDEC8u);
    ctx->pc = 0x1EDEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDEC0u;
            // 0x1edec4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EDA20u;
    if (runtime->hasFunction(0x1EDA20u)) {
        auto targetFn = runtime->lookupFunction(0x1EDA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDEC8u; }
        if (ctx->pc != 0x1EDEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1eda20_0x1edaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDEC8u; }
        if (ctx->pc != 0x1EDEC8u) { return; }
    }
    ctx->pc = 0x1EDEC8u;
    // 0x1edec8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1edec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1edecc: 0xae4208c0  sw          $v0, 0x8C0($s2)
    ctx->pc = 0x1edeccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2240), GPR_U32(ctx, 2));
label_1eded0:
    // 0x1eded0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1eded0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eded4: 0x8e420838  lw          $v0, 0x838($s2)
    ctx->pc = 0x1eded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2104)));
    // 0x1eded8: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1eded8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1ededc: 0x18400037  blez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1EDEDCu;
    {
        const bool branch_taken_0x1ededc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1EDEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDEDCu;
            // 0x1edee0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ededc) {
            ctx->pc = 0x1EDFBCu;
            goto label_1edfbc;
        }
    }
    ctx->pc = 0x1EDEE4u;
    // 0x1edee4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1edee4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edee8:
    // 0x1edee8: 0x3c0a002a  lui         $t2, 0x2A
    ctx->pc = 0x1edee8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)42 << 16));
    // 0x1edeec: 0x8d42e26c  lw          $v0, -0x1D94($t2)
    ctx->pc = 0x1edeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294959724)));
    // 0x1edef0: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EDEF0u;
    {
        const bool branch_taken_0x1edef0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1EDEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDEF0u;
            // 0x1edef4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edef0) {
            ctx->pc = 0x1EDF44u;
            goto label_1edf44;
        }
    }
    ctx->pc = 0x1EDEF8u;
    // 0x1edef8: 0x2647083c  addiu       $a3, $s2, 0x83C
    ctx->pc = 0x1edef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 2108));
    // 0x1edefc: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x1edefcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x1edf00: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x1edf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1edf04: 0x8d035470  lw          $v1, 0x5470($t0)
    ctx->pc = 0x1edf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 21616)));
    // 0x1edf08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1edf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1edf0c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EDF0Cu;
    {
        const bool branch_taken_0x1edf0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EDF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF0Cu;
            // 0x1edf10: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf0c) {
            ctx->pc = 0x1EDF48u;
            goto label_1edf48;
        }
    }
    ctx->pc = 0x1EDF14u;
    // 0x1edf14: 0x8d42e26c  lw          $v0, -0x1D94($t2)
    ctx->pc = 0x1edf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294959724)));
label_1edf18:
    // 0x1edf18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1edf18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1edf1c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1edf1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1edf20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDF20u;
    {
        const bool branch_taken_0x1edf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF20u;
            // 0x1edf24: 0x25035470  addiu       $v1, $t0, 0x5470 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 21616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf20) {
            ctx->pc = 0x1EDF44u;
            goto label_1edf44;
        }
    }
    ctx->pc = 0x1EDF28u;
    // 0x1edf28: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1edf28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1edf2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1edf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1edf30: 0xe91821  addu        $v1, $a3, $t1
    ctx->pc = 0x1edf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1edf34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1edf34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1edf38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1edf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1edf3c: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1EDF3Cu;
    {
        const bool branch_taken_0x1edf3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EDF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF3Cu;
            // 0x1edf40: 0x8d42e26c  lw          $v0, -0x1D94($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294959724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf3c) {
            ctx->pc = 0x1EDF18u;
            runtime->cooperativeGuestYield();
            goto label_1edf18;
        }
    }
    ctx->pc = 0x1EDF44u;
label_1edf44:
    // 0x1edf44: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1edf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1edf48:
    // 0x1edf48: 0x8c42e26c  lw          $v0, -0x1D94($v0)
    ctx->pc = 0x1edf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959724)));
    // 0x1edf4c: 0x14c20017  bne         $a2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EDF4Cu;
    {
        const bool branch_taken_0x1edf4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EDF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF4Cu;
            // 0x1edf50: 0x8e420838  lw          $v0, 0x838($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf4c) {
            ctx->pc = 0x1EDFACu;
            goto label_1edfac;
        }
    }
    ctx->pc = 0x1EDF54u;
    // 0x1edf54: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1edf54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf58: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1edf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1edf5c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1edf5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1edf60: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EDF60u;
    {
        const bool branch_taken_0x1edf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF60u;
            // 0x1edf64: 0xae430838  sw          $v1, 0x838($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf60) {
            ctx->pc = 0x1EDFA0u;
            goto label_1edfa0;
        }
    }
    ctx->pc = 0x1EDF68u;
    // 0x1edf68: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1edf68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1edf6c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1edf6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf70: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x1edf70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1edf74: 0x0  nop
    ctx->pc = 0x1edf74u;
    // NOP
label_1edf78:
    // 0x1edf78: 0x2642083c  addiu       $v0, $s2, 0x83C
    ctx->pc = 0x1edf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2108));
    // 0x1edf7c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1edf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1edf80: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1edf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1edf84: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1edf84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1edf88: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1edf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1edf8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1edf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1edf90: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1edf90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1edf94: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1edf94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1edf98: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EDF98u;
    {
        const bool branch_taken_0x1edf98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF98u;
            // 0x1edf9c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf98) {
            ctx->pc = 0x1EDF78u;
            runtime->cooperativeGuestYield();
            goto label_1edf78;
        }
    }
    ctx->pc = 0x1EDFA0u;
label_1edfa0:
    // 0x1edfa0: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x1edfa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x1edfa4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1edfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1edfa8: 0x8e420838  lw          $v0, 0x838($s2)
    ctx->pc = 0x1edfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2104)));
label_1edfac:
    // 0x1edfac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1edfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1edfb0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1edfb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1edfb4: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1EDFB4u;
    {
        const bool branch_taken_0x1edfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFB4u;
            // 0x1edfb8: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edfb4) {
            ctx->pc = 0x1EDEE8u;
            runtime->cooperativeGuestYield();
            goto label_1edee8;
        }
    }
    ctx->pc = 0x1EDFBCu;
label_1edfbc:
    // 0x1edfbc: 0x3c0a002a  lui         $t2, 0x2A
    ctx->pc = 0x1edfbcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)42 << 16));
    // 0x1edfc0: 0x8d42e26c  lw          $v0, -0x1D94($t2)
    ctx->pc = 0x1edfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294959724)));
    // 0x1edfc4: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1EDFC4u;
    {
        const bool branch_taken_0x1edfc4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1EDFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFC4u;
            // 0x1edfc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edfc4) {
            ctx->pc = 0x1EE06Cu;
            goto label_1ee06c;
        }
    }
    ctx->pc = 0x1EDFCCu;
    // 0x1edfcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1edfccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edfd0:
    // 0x1edfd0: 0x8e480838  lw          $t0, 0x838($s2)
    ctx->pc = 0x1edfd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2104)));
    // 0x1edfd4: 0x19000014  blez        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EDFD4u;
    {
        const bool branch_taken_0x1edfd4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1EDFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFD4u;
            // 0x1edfd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edfd4) {
            ctx->pc = 0x1EE028u;
            goto label_1ee028;
        }
    }
    ctx->pc = 0x1EDFDCu;
    // 0x1edfdc: 0x3c090030  lui         $t1, 0x30
    ctx->pc = 0x1edfdcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)48 << 16));
    // 0x1edfe0: 0x8e42083c  lw          $v0, 0x83C($s2)
    ctx->pc = 0x1edfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2108)));
    // 0x1edfe4: 0x25235470  addiu       $v1, $t1, 0x5470
    ctx->pc = 0x1edfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 21616));
    // 0x1edfe8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1edfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1edfec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1edfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1edff0: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EDFF0u;
    {
        const bool branch_taken_0x1edff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1edff0) {
            ctx->pc = 0x1EDFF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFF0u;
            // 0x1edff4: 0x8e420838  lw          $v0, 0x838($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE02Cu;
            goto label_1ee02c;
        }
    }
    ctx->pc = 0x1EDFF8u;
    // 0x1edff8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1edff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1edffc: 0x0  nop
    ctx->pc = 0x1edffcu;
    // NOP
label_1ee000:
    // 0x1ee000: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x1ee000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1ee004: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE004u;
    {
        const bool branch_taken_0x1ee004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE004u;
            // 0x1ee008: 0x25225470  addiu       $v0, $t1, 0x5470 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 21616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee004) {
            ctx->pc = 0x1EE028u;
            goto label_1ee028;
        }
    }
    ctx->pc = 0x1EE00Cu;
    // 0x1ee00c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1ee00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ee010: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1ee010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1ee014: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1ee014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1ee018: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ee018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ee01c: 0x8c62083c  lw          $v0, 0x83C($v1)
    ctx->pc = 0x1ee01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2108)));
    // 0x1ee020: 0x5482fff7  bnel        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EE020u;
    {
        const bool branch_taken_0x1ee020 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee020) {
            ctx->pc = 0x1EE024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE020u;
            // 0x1ee024: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE000u;
            runtime->cooperativeGuestYield();
            goto label_1ee000;
        }
    }
    ctx->pc = 0x1EE028u;
label_1ee028:
    // 0x1ee028: 0x8e420838  lw          $v0, 0x838($s2)
    ctx->pc = 0x1ee028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2104)));
label_1ee02c:
    // 0x1ee02c: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EE02Cu;
    {
        const bool branch_taken_0x1ee02c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE02Cu;
            // 0x1ee030: 0x8d42e26c  lw          $v0, -0x1D94($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294959724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee02c) {
            ctx->pc = 0x1EE05Cu;
            goto label_1ee05c;
        }
    }
    ctx->pc = 0x1EE034u;
    // 0x1ee034: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1ee034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1ee038: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1ee038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ee03c: 0x24425470  addiu       $v0, $v0, 0x5470
    ctx->pc = 0x1ee03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21616));
    // 0x1ee040: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1ee040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1ee044: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1ee044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1ee048: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x1ee048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ee04c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ee04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ee050: 0xac62083c  sw          $v0, 0x83C($v1)
    ctx->pc = 0x1ee050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2108), GPR_U32(ctx, 2));
    // 0x1ee054: 0xae440838  sw          $a0, 0x838($s2)
    ctx->pc = 0x1ee054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2104), GPR_U32(ctx, 4));
    // 0x1ee058: 0x8d42e26c  lw          $v0, -0x1D94($t2)
    ctx->pc = 0x1ee058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294959724)));
label_1ee05c:
    // 0x1ee05c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ee05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ee060: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1ee060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ee064: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1EE064u;
    {
        const bool branch_taken_0x1ee064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE064u;
            // 0x1ee068: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee064) {
            ctx->pc = 0x1EDFD0u;
            runtime->cooperativeGuestYield();
            goto label_1edfd0;
        }
    }
    ctx->pc = 0x1EE06Cu;
label_1ee06c:
    // 0x1ee06c: 0x8e5e08bc  lw          $fp, 0x8BC($s2)
    ctx->pc = 0x1ee06cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2236)));
    // 0x1ee070: 0xc07b656  jal         func_1ED958
    ctx->pc = 0x1EE070u;
    SET_GPR_U32(ctx, 31, 0x1EE078u);
    ctx->pc = 0x1EE074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE070u;
            // 0x1ee074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED958u;
    if (runtime->hasFunction(0x1ED958u)) {
        auto targetFn = runtime->lookupFunction(0x1ED958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE078u; }
        if (ctx->pc != 0x1EE078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED958_0x1ed958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE078u; }
        if (ctx->pc != 0x1EE078u) { return; }
    }
    ctx->pc = 0x1EE078u;
    // 0x1ee078: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ee078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee07c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1ee07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1ee080: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x1ee080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x1ee084: 0x8e420838  lw          $v0, 0x838($s2)
    ctx->pc = 0x1ee084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2104)));
    // 0x1ee088: 0x18400046  blez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1EE088u;
    {
        const bool branch_taken_0x1ee088 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1EE08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE088u;
            // 0x1ee08c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee088) {
            ctx->pc = 0x1EE1A4u;
            goto label_1ee1a4;
        }
    }
    ctx->pc = 0x1EE090u;
    // 0x1ee090: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x1ee090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x1ee094: 0x2656083c  addiu       $s6, $s2, 0x83C
    ctx->pc = 0x1ee094u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 2108));
label_1ee098:
    // 0x1ee098: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1ee098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1ee09c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ee09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ee0a0: 0x8c63e26c  lw          $v1, -0x1D94($v1)
    ctx->pc = 0x1ee0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959724)));
    // 0x1ee0a4: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x1ee0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1ee0a8: 0x8c42083c  lw          $v0, 0x83C($v0)
    ctx->pc = 0x1ee0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2108)));
    // 0x1ee0ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ee0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee0b0: 0x8c51001c  lw          $s1, 0x1C($v0)
    ctx->pc = 0x1ee0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1ee0b4: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE0B4u;
    {
        const bool branch_taken_0x1ee0b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1EE0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0B4u;
            // 0x1ee0b8: 0x26340010  addiu       $s4, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0b4) {
            ctx->pc = 0x1EE0DCu;
            goto label_1ee0dc;
        }
    }
    ctx->pc = 0x1EE0BCu;
    // 0x1ee0bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ee0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1ee0c0:
    // 0x1ee0c0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1ee0c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ee0c4: 0x0  nop
    ctx->pc = 0x1ee0c4u;
    // NOP
    // 0x1ee0c8: 0x0  nop
    ctx->pc = 0x1ee0c8u;
    // NOP
    // 0x1ee0cc: 0x0  nop
    ctx->pc = 0x1ee0ccu;
    // NOP
    // 0x1ee0d0: 0x0  nop
    ctx->pc = 0x1ee0d0u;
    // NOP
    // 0x1ee0d4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EE0D4u;
    {
        const bool branch_taken_0x1ee0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee0d4) {
            ctx->pc = 0x1EE0D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0D4u;
            // 0x1ee0d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE0C0u;
            runtime->cooperativeGuestYield();
            goto label_1ee0c0;
        }
    }
    ctx->pc = 0x1EE0DCu;
label_1ee0dc:
    // 0x1ee0dc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1ee0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1ee0e0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1ee0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1ee0e4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1ee0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1ee0e8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EE0E8u;
    {
        const bool branch_taken_0x1ee0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0E8u;
            // 0x1ee0ec: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0e8) {
            ctx->pc = 0x1EE184u;
            goto label_1ee184;
        }
    }
    ctx->pc = 0x1EE0F0u;
    // 0x1ee0f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ee0f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee0f4: 0x0  nop
    ctx->pc = 0x1ee0f4u;
    // NOP
label_1ee0f8:
    // 0x1ee0f8: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x1ee0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1ee0fc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1ee0fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ee100: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EE100u;
    {
        const bool branch_taken_0x1ee100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE100u;
            // 0x1ee104: 0x138140  sll         $s0, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee100) {
            ctx->pc = 0x1EE12Cu;
            goto label_1ee12c;
        }
    }
    ctx->pc = 0x1EE108u;
    // 0x1ee108: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x1ee108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1ee10c: 0x26450808  addiu       $a1, $s2, 0x808
    ctx->pc = 0x1ee10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2056));
    // 0x1ee110: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1EE110u;
    SET_GPR_U32(ctx, 31, 0x1EE118u);
    ctx->pc = 0x1EE114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE110u;
            // 0x1ee114: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE118u; }
        if (ctx->pc != 0x1EE118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE118u; }
        if (ctx->pc != 0x1EE118u) { return; }
    }
    ctx->pc = 0x1EE118u;
    // 0x1ee118: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EE118u;
    {
        const bool branch_taken_0x1ee118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee118) {
            ctx->pc = 0x1EE11Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE118u;
            // 0x1ee11c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE0F8u;
            runtime->cooperativeGuestYield();
            goto label_1ee0f8;
        }
    }
    ctx->pc = 0x1EE120u;
    // 0x1ee120: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x1ee120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1ee124: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ee124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ee128: 0x8c57001c  lw          $s7, 0x1C($v0)
    ctx->pc = 0x1ee128u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1ee12c:
    // 0x1ee12c: 0x12e0000e  beqz        $s7, . + 4 + (0xE << 2)
    ctx->pc = 0x1EE12Cu;
    {
        const bool branch_taken_0x1ee12c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE12Cu;
            // 0x1ee130: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee12c) {
            ctx->pc = 0x1EE168u;
            goto label_1ee168;
        }
    }
    ctx->pc = 0x1EE134u;
    // 0x1ee134: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x1ee134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x1ee138: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EE138u;
    {
        const bool branch_taken_0x1ee138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE138u;
            // 0x1ee13c: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee138) {
            ctx->pc = 0x1EE188u;
            goto label_1ee188;
        }
    }
    ctx->pc = 0x1EE140u;
    // 0x1ee140: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ee140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee144: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ee144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ee148: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1ee148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1ee14c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1ee14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ee150: 0xafb50040  sw          $s5, 0x40($sp)
    ctx->pc = 0x1ee150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 21));
    // 0x1ee154: 0x2442083c  addiu       $v0, $v0, 0x83C
    ctx->pc = 0x1ee154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2108));
    // 0x1ee158: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ee158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ee15c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1ee15cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x1ee160: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE160u;
    {
        const bool branch_taken_0x1ee160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE160u;
            // 0x1ee164: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee160) {
            ctx->pc = 0x1EE184u;
            goto label_1ee184;
        }
    }
    ctx->pc = 0x1EE168u;
label_1ee168:
    // 0x1ee168: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x1ee168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x1ee16c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ee16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ee170: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1ee170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ee174: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE174u;
    {
        const bool branch_taken_0x1ee174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee174) {
            ctx->pc = 0x1EE178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE174u;
            // 0x1ee178: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE188u;
            goto label_1ee188;
        }
    }
    ctx->pc = 0x1EE17Cu;
    // 0x1ee17c: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x1ee17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x1ee180: 0xafb50040  sw          $s5, 0x40($sp)
    ctx->pc = 0x1ee180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 21));
label_1ee184:
    // 0x1ee184: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1ee184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1ee188:
    // 0x1ee188: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1ee188u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1ee18c: 0x8e420838  lw          $v0, 0x838($s2)
    ctx->pc = 0x1ee18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2104)));
    // 0x1ee190: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x1ee190u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x1ee194: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1ee194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1ee198: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1ee198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ee19c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1EE19Cu;
    {
        const bool branch_taken_0x1ee19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE19Cu;
            // 0x1ee1a0: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee19c) {
            ctx->pc = 0x1EE098u;
            runtime->cooperativeGuestYield();
            goto label_1ee098;
        }
    }
    ctx->pc = 0x1EE1A4u;
label_1ee1a4:
    // 0x1ee1a4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ee1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee1a8: 0x480003b  bltz        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1EE1A8u;
    {
        const bool branch_taken_0x1ee1a8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1EE1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE1A8u;
            // 0x1ee1ac: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1a8) {
            ctx->pc = 0x1EE298u;
            goto label_1ee298;
        }
    }
    ctx->pc = 0x1EE1B0u;
    // 0x1ee1b0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1ee1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1ee1b4: 0x8cc2e26c  lw          $v0, -0x1D94($a2)
    ctx->pc = 0x1ee1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294959724)));
    // 0x1ee1b8: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1EE1B8u;
    {
        const bool branch_taken_0x1ee1b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1EE1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE1B8u;
            // 0x1ee1bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1b8) {
            ctx->pc = 0x1EE290u;
            goto label_1ee290;
        }
    }
    ctx->pc = 0x1EE1C0u;
    // 0x1ee1c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ee1c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee1c4: 0x0  nop
    ctx->pc = 0x1ee1c4u;
    // NOP
label_1ee1c8:
    // 0x1ee1c8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ee1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee1cc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1ee1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1ee1d0: 0x24425470  addiu       $v0, $v0, 0x5470
    ctx->pc = 0x1ee1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21616));
    // 0x1ee1d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ee1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ee1d8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ee1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ee1dc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1ee1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1ee1e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ee1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ee1e4: 0x8c63083c  lw          $v1, 0x83C($v1)
    ctx->pc = 0x1ee1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2108)));
    // 0x1ee1e8: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1EE1E8u;
    {
        const bool branch_taken_0x1ee1e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE1E8u;
            // 0x1ee1ec: 0x8cc2e26c  lw          $v0, -0x1D94($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294959724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1e8) {
            ctx->pc = 0x1EE280u;
            goto label_1ee280;
        }
    }
    ctx->pc = 0x1EE1F0u;
    // 0x1ee1f0: 0x8e4208bc  lw          $v0, 0x8BC($s2)
    ctx->pc = 0x1ee1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2236)));
    // 0x1ee1f4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1ee1f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee1f8: 0x13c20025  beq         $fp, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1EE1F8u;
    {
        const bool branch_taken_0x1ee1f8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EE1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE1F8u;
            // 0x1ee1fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1f8) {
            ctx->pc = 0x1EE290u;
            goto label_1ee290;
        }
    }
    ctx->pc = 0x1EE200u;
    // 0x1ee200: 0x8fd0001c  lw          $s0, 0x1C($fp)
    ctx->pc = 0x1ee200u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1ee204: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ee204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee208: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x1ee208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee20c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1ee20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1ee210:
    // 0x1ee210: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1ee210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1ee214: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1ee214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ee218: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EE218u;
    {
        const bool branch_taken_0x1ee218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE218u;
            // 0x1ee21c: 0x138940  sll         $s1, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee218) {
            ctx->pc = 0x1EE24Cu;
            goto label_1ee24c;
        }
    }
    ctx->pc = 0x1EE220u;
    // 0x1ee220: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x1ee220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1ee224: 0x26450808  addiu       $a1, $s2, 0x808
    ctx->pc = 0x1ee224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2056));
    // 0x1ee228: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1EE228u;
    SET_GPR_U32(ctx, 31, 0x1EE230u);
    ctx->pc = 0x1EE22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE228u;
            // 0x1ee22c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE230u; }
        if (ctx->pc != 0x1EE230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE230u; }
        if (ctx->pc != 0x1EE230u) { return; }
    }
    ctx->pc = 0x1EE230u;
    // 0x1ee230: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EE230u;
    {
        const bool branch_taken_0x1ee230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE230u;
            // 0x1ee234: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee230) {
            ctx->pc = 0x1EE210u;
            runtime->cooperativeGuestYield();
            goto label_1ee210;
        }
    }
    ctx->pc = 0x1EE238u;
    // 0x1ee238: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1ee238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1ee23c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ee23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ee240: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1ee240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee244: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ee244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee248: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ee248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1ee24c:
    // 0x1ee24c: 0x26500808  addiu       $s0, $s2, 0x808
    ctx->pc = 0x1ee24cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2056));
    // 0x1ee250: 0x26440820  addiu       $a0, $s2, 0x820
    ctx->pc = 0x1ee250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2080));
    // 0x1ee254: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1EE254u;
    SET_GPR_U32(ctx, 31, 0x1EE25Cu);
    ctx->pc = 0x1EE258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE254u;
            // 0x1ee258: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE25Cu; }
        if (ctx->pc != 0x1EE25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE25Cu; }
        if (ctx->pc != 0x1EE25Cu) { return; }
    }
    ctx->pc = 0x1EE25Cu;
    // 0x1ee25c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1ee25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1ee260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee264: 0x244254f0  addiu       $v0, $v0, 0x54F0
    ctx->pc = 0x1ee264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21744));
    // 0x1ee268: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ee268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ee26c: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1EE26Cu;
    SET_GPR_U32(ctx, 31, 0x1EE274u);
    ctx->pc = 0x1EE270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE26Cu;
            // 0x1ee270: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE274u; }
        if (ctx->pc != 0x1EE274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE274u; }
        if (ctx->pc != 0x1EE274u) { return; }
    }
    ctx->pc = 0x1EE274u;
    // 0x1ee274: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE274u;
    {
        const bool branch_taken_0x1ee274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE274u;
            // 0x1ee278: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee274) {
            ctx->pc = 0x1EE298u;
            goto label_1ee298;
        }
    }
    ctx->pc = 0x1EE27Cu;
    // 0x1ee27c: 0x0  nop
    ctx->pc = 0x1ee27cu;
    // NOP
label_1ee280:
    // 0x1ee280: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ee280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ee284: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1ee284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ee288: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1EE288u;
    {
        const bool branch_taken_0x1ee288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE288u;
            // 0x1ee28c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee288) {
            ctx->pc = 0x1EE1C8u;
            runtime->cooperativeGuestYield();
            goto label_1ee1c8;
        }
    }
    ctx->pc = 0x1EE290u;
label_1ee290:
    // 0x1ee290: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1ee290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee294: 0x0  nop
    ctx->pc = 0x1ee294u;
    // NOP
label_1ee298:
    // 0x1ee298: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ee298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ee29c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1ee29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ee2a0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1ee2a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ee2a4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1ee2a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ee2a8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1ee2a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ee2ac: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1ee2acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ee2b0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1ee2b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ee2b4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1ee2b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee2b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ee2b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ee2bc: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1ee2bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ee2c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ee2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ee2c4: 0xac60e26c  sw          $zero, -0x1D94($v1)
    ctx->pc = 0x1ee2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959724), GPR_U32(ctx, 0));
    // 0x1ee2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE2C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE2C8u;
            // 0x1ee2cc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EDE88u: goto label_1ede88;
            case 0x1EDED0u: goto label_1eded0;
            case 0x1EDEE8u: goto label_1edee8;
            case 0x1EDF18u: goto label_1edf18;
            case 0x1EDF44u: goto label_1edf44;
            case 0x1EDF48u: goto label_1edf48;
            case 0x1EDF78u: goto label_1edf78;
            case 0x1EDFA0u: goto label_1edfa0;
            case 0x1EDFACu: goto label_1edfac;
            case 0x1EDFBCu: goto label_1edfbc;
            case 0x1EDFD0u: goto label_1edfd0;
            case 0x1EE000u: goto label_1ee000;
            case 0x1EE028u: goto label_1ee028;
            case 0x1EE02Cu: goto label_1ee02c;
            case 0x1EE05Cu: goto label_1ee05c;
            case 0x1EE06Cu: goto label_1ee06c;
            case 0x1EE098u: goto label_1ee098;
            case 0x1EE0C0u: goto label_1ee0c0;
            case 0x1EE0DCu: goto label_1ee0dc;
            case 0x1EE0F8u: goto label_1ee0f8;
            case 0x1EE12Cu: goto label_1ee12c;
            case 0x1EE168u: goto label_1ee168;
            case 0x1EE184u: goto label_1ee184;
            case 0x1EE188u: goto label_1ee188;
            case 0x1EE1A4u: goto label_1ee1a4;
            case 0x1EE1C8u: goto label_1ee1c8;
            case 0x1EE210u: goto label_1ee210;
            case 0x1EE24Cu: goto label_1ee24c;
            case 0x1EE280u: goto label_1ee280;
            case 0x1EE290u: goto label_1ee290;
            case 0x1EE298u: goto label_1ee298;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EE2D0u;
}
