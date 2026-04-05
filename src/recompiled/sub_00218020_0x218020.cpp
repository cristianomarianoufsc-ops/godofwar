#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00218020
// Address: 0x218020 - 0x218318
void sub_00218020_0x218020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218020_0x218020");
#endif

    ctx->pc = 0x218020u;

    // 0x218020: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x218020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x218024: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x218024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x218028: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x218028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x21802c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21802cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218030: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x218030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x218034: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x218034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x218038: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x218038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x21803c: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x21803cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x218040: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x218040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x218044: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x218044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x218048: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x218048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x21804c: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x21804cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x218050: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x218050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x218054: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x218054u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x218058: 0x8c510104  lw          $s1, 0x104($v0)
    ctx->pc = 0x218058u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x21805c: 0x8e370050  lw          $s7, 0x50($s1)
    ctx->pc = 0x21805cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x218060: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x218060u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x218064: 0xdec5bdf8  ld          $a1, -0x4208($s6)
    ctx->pc = 0x218064u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 4294950392)));
    // 0x218068: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x218068u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x21806c: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21806Cu;
    {
        const bool branch_taken_0x21806c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x218070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21806Cu;
            // 0x218070: 0x8e330058  lw          $s3, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21806c) {
            ctx->pc = 0x218080u;
            goto label_218080;
        }
    }
    ctx->pc = 0x218074u;
    // 0x218074: 0xc04da64  jal         func_136990
    ctx->pc = 0x218074u;
    SET_GPR_U32(ctx, 31, 0x21807Cu);
    ctx->pc = 0x218078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218074u;
            // 0x218078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21807Cu; }
        if (ctx->pc != 0x21807Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21807Cu; }
        if (ctx->pc != 0x21807Cu) { return; }
    }
    ctx->pc = 0x21807Cu;
    // 0x21807c: 0x0  nop
    ctx->pc = 0x21807cu;
    // NOP
label_218080:
    // 0x218080: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x218080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x218084: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x218084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x218088: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x218088u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x21808c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x21808cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x218090: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218094: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x218094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x218098: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x218098u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21809c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21809cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2180a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2180a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2180a4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2180a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2180a8: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x2180a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2180ac: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2180acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2180b0: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x2180b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2180b4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2180b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2180b8: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x2180b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2180bc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2180bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2180c0: 0x84d00004  lh          $s0, 0x4($a2)
    ctx->pc = 0x2180c0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2180c4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2180c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2180c8: 0xc08cc58  jal         func_233160
    ctx->pc = 0x2180C8u;
    SET_GPR_U32(ctx, 31, 0x2180D0u);
    ctx->pc = 0x2180CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2180C8u;
            // 0x2180cc: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x233160u;
    if (runtime->hasFunction(0x233160u)) {
        auto targetFn = runtime->lookupFunction(0x233160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180D0u; }
        if (ctx->pc != 0x2180D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233160_0x233160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180D0u; }
        if (ctx->pc != 0x2180D0u) { return; }
    }
    ctx->pc = 0x2180D0u;
    // 0x2180d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2180d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2180d4: 0x5202002e  beql        $s0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2180D4u;
    {
        const bool branch_taken_0x2180d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2180d4) {
            ctx->pc = 0x2180D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2180D4u;
            // 0x2180d8: 0xae54000c  sw          $s4, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x218190u;
            goto label_218190;
        }
    }
    ctx->pc = 0x2180DCu;
    // 0x2180dc: 0x10a900  sll         $s5, $s0, 4
    ctx->pc = 0x2180dcu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2180e0:
    // 0x2180e0: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x2180e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x2180e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2180e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2180e8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2180e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2180ec: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2180ECu;
    {
        const bool branch_taken_0x2180ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2180F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2180ECu;
            // 0x2180f0: 0xdec5bdf8  ld          $a1, -0x4208($s6) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 4294950392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2180ec) {
            ctx->pc = 0x218178u;
            goto label_218178;
        }
    }
    ctx->pc = 0x2180F4u;
    // 0x2180f4: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x2180f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2180f8: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2180F8u;
    {
        const bool branch_taken_0x2180f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2180f8) {
            ctx->pc = 0x2180FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2180F8u;
            // 0x2180fc: 0x8e23008c  lw          $v1, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x218110u;
            goto label_218110;
        }
    }
    ctx->pc = 0x218100u;
    // 0x218100: 0xc04da64  jal         func_136990
    ctx->pc = 0x218100u;
    SET_GPR_U32(ctx, 31, 0x218108u);
    ctx->pc = 0x218104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218100u;
            // 0x218104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218108u; }
        if (ctx->pc != 0x218108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218108u; }
        if (ctx->pc != 0x218108u) { return; }
    }
    ctx->pc = 0x218108u;
    // 0x218108: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x218108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x21810c: 0x0  nop
    ctx->pc = 0x21810cu;
    // NOP
label_218110:
    // 0x218110: 0x103180  sll         $a2, $s0, 6
    ctx->pc = 0x218110u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x218114: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x218114u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218118: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x218118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21811c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x21811cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218120: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x218120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x218124: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x218124u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x218128: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x218128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x21812c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x21812cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x218130: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x218130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x218134: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x218134u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x218138: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x218138u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21813c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x21813cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218140: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x218140u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x218144: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x218144u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218148: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x218148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21814c: 0xd73021  addu        $a2, $a2, $s7
    ctx->pc = 0x21814cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x218150: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x218150u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218154: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x218154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x218158: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218158u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21815c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x21815cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x218160: 0x46000004  c1          0x4
    ctx->pc = 0x218160u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x218164: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x218164u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x218168: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x218168u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x21816c: 0xc08cd08  jal         func_233420
    ctx->pc = 0x21816Cu;
    SET_GPR_U32(ctx, 31, 0x218174u);
    ctx->pc = 0x218170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21816Cu;
            // 0x218170: 0xe7a00130  swc1        $f0, 0x130($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x233420u;
    if (runtime->hasFunction(0x233420u)) {
        auto targetFn = runtime->lookupFunction(0x233420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218174u; }
        if (ctx->pc != 0x218174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233420_0x233420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218174u; }
        if (ctx->pc != 0x218174u) { return; }
    }
    ctx->pc = 0x218174u;
    // 0x218174: 0x0  nop
    ctx->pc = 0x218174u;
    // NOP
label_218178:
    // 0x218178: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x218178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x21817c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21817cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x218180: 0x84500006  lh          $s0, 0x6($v0)
    ctx->pc = 0x218180u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x218184: 0x1603ffd6  bne         $s0, $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x218184u;
    {
        const bool branch_taken_0x218184 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x218188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218184u;
            // 0x218188: 0x10a900  sll         $s5, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218184) {
            ctx->pc = 0x2180E0u;
            runtime->cooperativeGuestYield();
            goto label_2180e0;
        }
    }
    ctx->pc = 0x21818Cu;
    // 0x21818c: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x21818cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
label_218190:
    // 0x218190: 0xc04f824  jal         func_13E090
    ctx->pc = 0x218190u;
    SET_GPR_U32(ctx, 31, 0x218198u);
    ctx->pc = 0x218194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218190u;
            // 0x218194: 0x148140  sll         $s0, $s4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218198u; }
        if (ctx->pc != 0x218198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218198u; }
        if (ctx->pc != 0x218198u) { return; }
    }
    ctx->pc = 0x218198u;
    // 0x218198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x218198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21819c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21819cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2181a0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x2181A0u;
    SET_GPR_U32(ctx, 31, 0x2181A8u);
    ctx->pc = 0x2181A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2181A0u;
            // 0x2181a4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2181A8u; }
        if (ctx->pc != 0x2181A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2181A8u; }
        if (ctx->pc != 0x2181A8u) { return; }
    }
    ctx->pc = 0x2181A8u;
    // 0x2181a8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2181a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2181ac: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2181acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x2181b0: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x2181b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x2181b4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2181B4u;
    {
        const bool branch_taken_0x2181b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2181B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2181B4u;
            // 0x2181b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2181b4) {
            ctx->pc = 0x2181C0u;
            goto label_2181c0;
        }
    }
    ctx->pc = 0x2181BCu;
    // 0x2181bc: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x2181bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2181c0:
    // 0x2181c0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2181c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2181c4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2181c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2181c8: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x2181c8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2181cc: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x2181ccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2181d0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2181d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2181d4: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x2181d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x2181d8: 0x7fa400d0  sq          $a0, 0xD0($sp)
    ctx->pc = 0x2181d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 4));
    // 0x2181dc: 0x7fa500e0  sq          $a1, 0xE0($sp)
    ctx->pc = 0x2181dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 5));
    // 0x2181e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2181e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2181e4: 0x10c0003c  beqz        $a2, . + 4 + (0x3C << 2)
    ctx->pc = 0x2181E4u;
    {
        const bool branch_taken_0x2181e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2181E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2181E4u;
            // 0x2181e8: 0xafa600a0  sw          $a2, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2181e4) {
            ctx->pc = 0x2182D8u;
            goto label_2182d8;
        }
    }
    ctx->pc = 0x2181ECu;
    // 0x2181ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2181ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2181f0:
    // 0x2181f0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2181f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2181f4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2181f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2181f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2181f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2181fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2181fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x218200: 0x772023  subu        $a0, $v1, $s7
    ctx->pc = 0x218200u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x218204: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x218204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x218208: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x218208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21820c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x21820cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x218210: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x218210u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x218214: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x218214u;
    {
        const bool branch_taken_0x218214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x218218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218214u;
            // 0x218218: 0x49983  sra         $s3, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218214) {
            ctx->pc = 0x218228u;
            goto label_218228;
        }
    }
    ctx->pc = 0x21821Cu;
    // 0x21821c: 0xc04da64  jal         func_136990
    ctx->pc = 0x21821Cu;
    SET_GPR_U32(ctx, 31, 0x218224u);
    ctx->pc = 0x218220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21821Cu;
            // 0x218220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218224u; }
        if (ctx->pc != 0x218224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218224u; }
        if (ctx->pc != 0x218224u) { return; }
    }
    ctx->pc = 0x218224u;
    // 0x218224: 0x0  nop
    ctx->pc = 0x218224u;
    // NOP
label_218228:
    // 0x218228: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x218228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x21822c: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x21822cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x218230: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x218230u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x218234: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218238: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x218238u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21823c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x21823cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x218240: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x218240u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x218244: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x218244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x218248: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x218248u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21824c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x21824cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x218250: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x218250u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x218254: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x218254u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x218258: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x218258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21825c: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x21825cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x218260: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x218260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218264: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x218264u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218268: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x218268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x21826c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x21826cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218270: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x218270u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218274: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x218274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x218278: 0x46000004  c1          0x4
    ctx->pc = 0x218278u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x21827c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x21827cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x218280: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x218280u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x218284: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x218284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x218288: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x218288u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x21828c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x21828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x218290: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x218290u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x218294: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x218294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x218298: 0xac530018  sw          $s3, 0x18($v0)
    ctx->pc = 0x218298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 19));
    // 0x21829c: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x21829cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2182a0: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x2182a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2182a4: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x2182a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2182a8: 0x7ba50110  lq          $a1, 0x110($sp)
    ctx->pc = 0x2182a8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2182ac: 0x7ba60120  lq          $a2, 0x120($sp)
    ctx->pc = 0x2182acu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2182b0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x2182b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2182b4: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x2182b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x2182b8: 0x7fa400c0  sq          $a0, 0xC0($sp)
    ctx->pc = 0x2182b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 4));
    // 0x2182bc: 0x7fa500d0  sq          $a1, 0xD0($sp)
    ctx->pc = 0x2182bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 5));
    // 0x2182c0: 0x7fa600e0  sq          $a2, 0xE0($sp)
    ctx->pc = 0x2182c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 6));
    // 0x2182c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2182c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2182c8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2182c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2182cc: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2182ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2182d0: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2182D0u;
    {
        const bool branch_taken_0x2182d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2182D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2182D0u;
            // 0x2182d4: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2182d0) {
            ctx->pc = 0x2181F0u;
            runtime->cooperativeGuestYield();
            goto label_2181f0;
        }
    }
    ctx->pc = 0x2182D8u;
label_2182d8:
    // 0x2182d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2182d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2182dc: 0xc091386  jal         func_244E18
    ctx->pc = 0x2182DCu;
    SET_GPR_U32(ctx, 31, 0x2182E4u);
    ctx->pc = 0x2182E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2182DCu;
            // 0x2182e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244E18u;
    if (runtime->hasFunction(0x244E18u)) {
        auto targetFn = runtime->lookupFunction(0x244E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2182E4u; }
        if (ctx->pc != 0x2182E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244E18_0x244e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2182E4u; }
        if (ctx->pc != 0x2182E4u) { return; }
    }
    ctx->pc = 0x2182E4u;
    // 0x2182e4: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2182e4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x2182e8: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x2182e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2182ec: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x2182ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2182f0: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x2182f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2182f4: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x2182f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2182f8: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x2182f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2182fc: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x2182fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x218300: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x218300u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x218304: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x218304u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x218308: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x218308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x21830c: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x21830cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x218310: 0x3e00008  jr          $ra
    ctx->pc = 0x218310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218310u;
            // 0x218314: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218080u: goto label_218080;
            case 0x2180E0u: goto label_2180e0;
            case 0x218110u: goto label_218110;
            case 0x218178u: goto label_218178;
            case 0x218190u: goto label_218190;
            case 0x2181C0u: goto label_2181c0;
            case 0x2181F0u: goto label_2181f0;
            case 0x218228u: goto label_218228;
            case 0x2182D8u: goto label_2182d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218318u;
}
