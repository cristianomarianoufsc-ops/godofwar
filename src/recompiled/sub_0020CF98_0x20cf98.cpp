#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020CF98
// Address: 0x20cf98 - 0x20d280
void sub_0020CF98_0x20cf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CF98_0x20cf98");
#endif

    ctx->pc = 0x20cf98u;

    // 0x20cf98: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x20cf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x20cf9c: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x20cf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x20cfa0: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x20cfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x20cfa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20cfa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cfa8: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x20cfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x20cfac: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x20cfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x20cfb0: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x20cfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x20cfb4: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x20cfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x20cfb8: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x20cfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x20cfbc: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x20cfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x20cfc0: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x20cfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x20cfc4: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x20cfc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x20cfc8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x20cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20cfcc: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x20cfccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x20cfd0: 0x8c510104  lw          $s1, 0x104($v0)
    ctx->pc = 0x20cfd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x20cfd4: 0x8e370050  lw          $s7, 0x50($s1)
    ctx->pc = 0x20cfd4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x20cfd8: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x20cfd8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x20cfdc: 0xdec5bdf8  ld          $a1, -0x4208($s6)
    ctx->pc = 0x20cfdcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 4294950392)));
    // 0x20cfe0: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x20cfe0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x20cfe4: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20CFE4u;
    {
        const bool branch_taken_0x20cfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x20CFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CFE4u;
            // 0x20cfe8: 0x8e320058  lw          $s2, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cfe4) {
            ctx->pc = 0x20CFF8u;
            goto label_20cff8;
        }
    }
    ctx->pc = 0x20CFECu;
    // 0x20cfec: 0xc04da64  jal         func_136990
    ctx->pc = 0x20CFECu;
    SET_GPR_U32(ctx, 31, 0x20CFF4u);
    ctx->pc = 0x20CFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CFECu;
            // 0x20cff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CFF4u; }
        if (ctx->pc != 0x20CFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CFF4u; }
        if (ctx->pc != 0x20CFF4u) { return; }
    }
    ctx->pc = 0x20CFF4u;
    // 0x20cff4: 0x0  nop
    ctx->pc = 0x20cff4u;
    // NOP
label_20cff8:
    // 0x20cff8: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x20cff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x20cffc: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x20cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x20d000: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x20d000u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x20d004: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20d004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20d008: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20d008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20d00c: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x20d00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x20d010: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x20d010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d014: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20d014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d018: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20d018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d01c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x20d01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x20d020: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x20d020u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x20d024: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x20d024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x20d028: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x20d028u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20d02c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x20d02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x20d030: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x20d030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x20d034: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x20d034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x20d038: 0x84d00004  lh          $s0, 0x4($a2)
    ctx->pc = 0x20d038u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x20d03c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x20d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x20d040: 0xc08cc58  jal         func_233160
    ctx->pc = 0x20D040u;
    SET_GPR_U32(ctx, 31, 0x20D048u);
    ctx->pc = 0x20D044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D040u;
            // 0x20d044: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x233160u;
    if (runtime->hasFunction(0x233160u)) {
        auto targetFn = runtime->lookupFunction(0x233160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D048u; }
        if (ctx->pc != 0x20D048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233160_0x233160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D048u; }
        if (ctx->pc != 0x20D048u) { return; }
    }
    ctx->pc = 0x20D048u;
    // 0x20d048: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d04c: 0x5202002e  beql        $s0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x20D04Cu;
    {
        const bool branch_taken_0x20d04c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x20d04c) {
            ctx->pc = 0x20D050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20D04Cu;
            // 0x20d050: 0xae74000c  sw          $s4, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20D108u;
            goto label_20d108;
        }
    }
    ctx->pc = 0x20D054u;
    // 0x20d054: 0x10a900  sll         $s5, $s0, 4
    ctx->pc = 0x20d054u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_20d058:
    // 0x20d058: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x20d058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x20d05c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d060: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x20d060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x20d064: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x20D064u;
    {
        const bool branch_taken_0x20d064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D064u;
            // 0x20d068: 0xdec5bdf8  ld          $a1, -0x4208($s6) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 4294950392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d064) {
            ctx->pc = 0x20D0F0u;
            goto label_20d0f0;
        }
    }
    ctx->pc = 0x20D06Cu;
    // 0x20d06c: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x20d06cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x20d070: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20D070u;
    {
        const bool branch_taken_0x20d070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x20d070) {
            ctx->pc = 0x20D074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20D070u;
            // 0x20d074: 0x8e23008c  lw          $v1, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20D088u;
            goto label_20d088;
        }
    }
    ctx->pc = 0x20D078u;
    // 0x20d078: 0xc04da64  jal         func_136990
    ctx->pc = 0x20D078u;
    SET_GPR_U32(ctx, 31, 0x20D080u);
    ctx->pc = 0x20D07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D078u;
            // 0x20d07c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D080u; }
        if (ctx->pc != 0x20D080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D080u; }
        if (ctx->pc != 0x20D080u) { return; }
    }
    ctx->pc = 0x20D080u;
    // 0x20d080: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x20d080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x20d084: 0x0  nop
    ctx->pc = 0x20d084u;
    // NOP
label_20d088:
    // 0x20d088: 0x103180  sll         $a2, $s0, 6
    ctx->pc = 0x20d088u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x20d08c: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x20d08cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d090: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x20d090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20d094: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x20d094u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d098: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x20d098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x20d09c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x20d09cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x20d0a0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x20d0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x20d0a4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x20d0a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20d0a8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x20d0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x20d0ac: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x20d0acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x20d0b0: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x20d0b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d0b4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x20d0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d0b8: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x20d0b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d0bc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20d0bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d0c0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20d0c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d0c4: 0xd73021  addu        $a2, $a2, $s7
    ctx->pc = 0x20d0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x20d0c8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x20d0c8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d0cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20d0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20d0d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20d0d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d0d4: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x20d0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x20d0d8: 0x46000004  c1          0x4
    ctx->pc = 0x20d0d8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x20d0dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x20d0dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x20d0e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x20d0e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x20d0e4: 0xc08cd08  jal         func_233420
    ctx->pc = 0x20D0E4u;
    SET_GPR_U32(ctx, 31, 0x20D0ECu);
    ctx->pc = 0x20D0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D0E4u;
            // 0x20d0e8: 0xe7a00130  swc1        $f0, 0x130($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x233420u;
    if (runtime->hasFunction(0x233420u)) {
        auto targetFn = runtime->lookupFunction(0x233420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0ECu; }
        if (ctx->pc != 0x20D0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233420_0x233420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0ECu; }
        if (ctx->pc != 0x20D0ECu) { return; }
    }
    ctx->pc = 0x20D0ECu;
    // 0x20d0ec: 0x0  nop
    ctx->pc = 0x20d0ecu;
    // NOP
label_20d0f0:
    // 0x20d0f0: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x20d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x20d0f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d0f8: 0x84500006  lh          $s0, 0x6($v0)
    ctx->pc = 0x20d0f8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x20d0fc: 0x1603ffd6  bne         $s0, $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x20D0FCu;
    {
        const bool branch_taken_0x20d0fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x20D100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D0FCu;
            // 0x20d100: 0x10a900  sll         $s5, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0fc) {
            ctx->pc = 0x20D058u;
            runtime->cooperativeGuestYield();
            goto label_20d058;
        }
    }
    ctx->pc = 0x20D104u;
    // 0x20d104: 0xae74000c  sw          $s4, 0xC($s3)
    ctx->pc = 0x20d104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 20));
label_20d108:
    // 0x20d108: 0xc04f824  jal         func_13E090
    ctx->pc = 0x20D108u;
    SET_GPR_U32(ctx, 31, 0x20D110u);
    ctx->pc = 0x20D10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D108u;
            // 0x20d10c: 0x1480c0  sll         $s0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D110u; }
        if (ctx->pc != 0x20D110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D110u; }
        if (ctx->pc != 0x20D110u) { return; }
    }
    ctx->pc = 0x20D110u;
    // 0x20d110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d118: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x20D118u;
    SET_GPR_U32(ctx, 31, 0x20D120u);
    ctx->pc = 0x20D11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D118u;
            // 0x20d11c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D120u; }
        if (ctx->pc != 0x20D120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D120u; }
        if (ctx->pc != 0x20D120u) { return; }
    }
    ctx->pc = 0x20D120u;
    // 0x20d120: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x20d120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x20d124: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x20d124u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x20d128: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x20d128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x20d12c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D12Cu;
    {
        const bool branch_taken_0x20d12c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D12Cu;
            // 0x20d130: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d12c) {
            ctx->pc = 0x20D138u;
            goto label_20d138;
        }
    }
    ctx->pc = 0x20D134u;
    // 0x20d134: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x20d134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_20d138:
    // 0x20d138: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x20d138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d13c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x20d13cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d140: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x20d140u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d144: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x20d144u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d148: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x20d148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x20d14c: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x20d14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x20d150: 0x7fa400d0  sq          $a0, 0xD0($sp)
    ctx->pc = 0x20d150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 4));
    // 0x20d154: 0x7fa500e0  sq          $a1, 0xE0($sp)
    ctx->pc = 0x20d154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 5));
    // 0x20d158: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20d158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20d15c: 0x10c00038  beqz        $a2, . + 4 + (0x38 << 2)
    ctx->pc = 0x20D15Cu;
    {
        const bool branch_taken_0x20d15c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D15Cu;
            // 0x20d160: 0xafa600a0  sw          $a2, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d15c) {
            ctx->pc = 0x20D240u;
            goto label_20d240;
        }
    }
    ctx->pc = 0x20D164u;
    // 0x20d164: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20d164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d168:
    // 0x20d168: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x20d168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20d16c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x20d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x20d170: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20d170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d174: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20d174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20d178: 0x772023  subu        $a0, $v1, $s7
    ctx->pc = 0x20d178u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x20d17c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x20d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x20d180: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20d180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20d184: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x20d184u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x20d188: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x20d188u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x20d18c: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D18Cu;
    {
        const bool branch_taken_0x20d18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x20D190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D18Cu;
            // 0x20d190: 0x48183  sra         $s0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d18c) {
            ctx->pc = 0x20D1A0u;
            goto label_20d1a0;
        }
    }
    ctx->pc = 0x20D194u;
    // 0x20d194: 0xc04da64  jal         func_136990
    ctx->pc = 0x20D194u;
    SET_GPR_U32(ctx, 31, 0x20D19Cu);
    ctx->pc = 0x20D198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D194u;
            // 0x20d198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D19Cu; }
        if (ctx->pc != 0x20D19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D19Cu; }
        if (ctx->pc != 0x20D19Cu) { return; }
    }
    ctx->pc = 0x20D19Cu;
    // 0x20d19c: 0x0  nop
    ctx->pc = 0x20d19cu;
    // NOP
label_20d1a0:
    // 0x20d1a0: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x20d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x20d1a4: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x20d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x20d1a8: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x20d1a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x20d1ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20d1b0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x20d1b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d1b4: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x20d1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x20d1b8: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x20d1b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x20d1bc: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x20d1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x20d1c0: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x20d1c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20d1c4: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x20d1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x20d1c8: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x20d1c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x20d1cc: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x20d1ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d1d0: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x20d1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d1d4: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x20d1d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d1d8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20d1d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d1dc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20d1dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d1e0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x20d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x20d1e4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x20d1e4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d1e8: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x20d1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20d1ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20d1ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d1f0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x20d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x20d1f4: 0x46000004  c1          0x4
    ctx->pc = 0x20d1f4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x20d1f8: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x20d1f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x20d1fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20d1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20d200: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x20d200u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x20d204: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x20d204u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x20d208: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x20d208u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x20d20c: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x20d20cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x20d210: 0x7ba50120  lq          $a1, 0x120($sp)
    ctx->pc = 0x20d210u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x20d214: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x20d214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x20d218: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x20d218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x20d21c: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x20d21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x20d220: 0x7fa400d0  sq          $a0, 0xD0($sp)
    ctx->pc = 0x20d220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 4));
    // 0x20d224: 0x7fa500e0  sq          $a1, 0xE0($sp)
    ctx->pc = 0x20d224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 5));
    // 0x20d228: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x20d228u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20d22c: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x20d22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x20d230: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x20d230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x20d234: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x20D234u;
    {
        const bool branch_taken_0x20d234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D234u;
            // 0x20d238: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d234) {
            ctx->pc = 0x20D168u;
            runtime->cooperativeGuestYield();
            goto label_20d168;
        }
    }
    ctx->pc = 0x20D23Cu;
    // 0x20d23c: 0x0  nop
    ctx->pc = 0x20d23cu;
    // NOP
label_20d240:
    // 0x20d240: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20d240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20d244: 0xc091386  jal         func_244E18
    ctx->pc = 0x20D244u;
    SET_GPR_U32(ctx, 31, 0x20D24Cu);
    ctx->pc = 0x20D248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D244u;
            // 0x20d248: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244E18u;
    if (runtime->hasFunction(0x244E18u)) {
        auto targetFn = runtime->lookupFunction(0x244E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D24Cu; }
        if (ctx->pc != 0x20D24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244E18_0x244e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D24Cu; }
        if (ctx->pc != 0x20D24Cu) { return; }
    }
    ctx->pc = 0x20D24Cu;
    // 0x20d24c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x20d24cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x20d250: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x20d250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x20d254: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x20d254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x20d258: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x20d258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x20d25c: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x20d25cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x20d260: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x20d260u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x20d264: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x20d264u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x20d268: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x20d268u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x20d26c: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x20d26cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x20d270: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x20d270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x20d274: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x20d274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20d278: 0x3e00008  jr          $ra
    ctx->pc = 0x20D278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D278u;
            // 0x20d27c: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20CFF8u: goto label_20cff8;
            case 0x20D058u: goto label_20d058;
            case 0x20D088u: goto label_20d088;
            case 0x20D0F0u: goto label_20d0f0;
            case 0x20D108u: goto label_20d108;
            case 0x20D138u: goto label_20d138;
            case 0x20D168u: goto label_20d168;
            case 0x20D1A0u: goto label_20d1a0;
            case 0x20D240u: goto label_20d240;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D280u;
}
