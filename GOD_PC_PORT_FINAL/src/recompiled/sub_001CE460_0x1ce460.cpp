#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE460
// Address: 0x1ce460 - 0x1ce608
void sub_001CE460_0x1ce460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE460_0x1ce460");
#endif

    ctx->pc = 0x1ce460u;

    // 0x1ce460: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ce460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ce464: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ce464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce468: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1ce468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1ce46c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1ce46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1ce470: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ce470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce474: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1ce474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1ce478: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1ce478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1ce47c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ce47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ce480: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ce480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ce484: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x1ce484u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ce488: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x1ce488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ce48c: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1ce48cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ce490: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE490u;
    {
        const bool branch_taken_0x1ce490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CE494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE490u;
            // 0x1ce494: 0x8e530030  lw          $s3, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce490) {
            ctx->pc = 0x1CE4A0u;
            goto label_1ce4a0;
        }
    }
    ctx->pc = 0x1CE498u;
    // 0x1ce498: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE498u;
    {
        const bool branch_taken_0x1ce498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE498u;
            // 0x1ce49c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce498) {
            ctx->pc = 0x1CE4C0u;
            goto label_1ce4c0;
        }
    }
    ctx->pc = 0x1CE4A0u;
label_1ce4a0:
    // 0x1ce4a0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ce4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ce4a4: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1ce4a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1ce4a8: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1ce4a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1ce4ac: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE4ACu;
    {
        const bool branch_taken_0x1ce4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ce4ac) {
            ctx->pc = 0x1CE4B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE4ACu;
            // 0x1ce4b0: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE4C0u;
            goto label_1ce4c0;
        }
    }
    ctx->pc = 0x1CE4B4u;
    // 0x1ce4b4: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CE4B4u;
    SET_GPR_U32(ctx, 31, 0x1CE4BCu);
    ctx->pc = 0x1CE4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE4B4u;
            // 0x1ce4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4BCu; }
        if (ctx->pc != 0x1CE4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4BCu; }
        if (ctx->pc != 0x1CE4BCu) { return; }
    }
    ctx->pc = 0x1CE4BCu;
    // 0x1ce4bc: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1ce4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1ce4c0:
    // 0x1ce4c0: 0x78900030  lq          $s0, 0x30($a0)
    ctx->pc = 0x1ce4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ce4c4: 0xc074c96  jal         func_1D3258
    ctx->pc = 0x1CE4C4u;
    SET_GPR_U32(ctx, 31, 0x1CE4CCu);
    ctx->pc = 0x1CE4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE4C4u;
            // 0x1ce4c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3258u;
    if (runtime->hasFunction(0x1D3258u)) {
        auto targetFn = runtime->lookupFunction(0x1D3258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4CCu; }
        if (ctx->pc != 0x1CE4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3258_0x1d3258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4CCu; }
        if (ctx->pc != 0x1CE4CCu) { return; }
    }
    ctx->pc = 0x1CE4CCu;
    // 0x1ce4cc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1ce4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1ce4d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ce4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4d4: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1ce4d4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1ce4d8: 0xc072cb8  jal         func_1CB2E0
    ctx->pc = 0x1CE4D8u;
    SET_GPR_U32(ctx, 31, 0x1CE4E0u);
    ctx->pc = 0x1CE4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE4D8u;
            // 0x1ce4dc: 0x700234a9  por         $a2, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB2E0u;
    if (runtime->hasFunction(0x1CB2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CB2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4E0u; }
        if (ctx->pc != 0x1CE4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB2E0_0x1cb2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4E0u; }
        if (ctx->pc != 0x1CE4E0u) { return; }
    }
    ctx->pc = 0x1CE4E0u;
    // 0x1ce4e0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1ce4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1ce4e4: 0x9645006e  lhu         $a1, 0x6E($s2)
    ctx->pc = 0x1ce4e4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 110)));
    // 0x1ce4e8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x1ce4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ce4ec: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1ce4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ce4f0: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1ce4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1ce4f4: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x1ce4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1ce4f8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1ce4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ce4fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ce4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ce500: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ce500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ce504: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1ce504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce508: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1ce508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ce50c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ce50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce510: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ce510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ce514: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1ce514u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ce518: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ce518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ce51c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1ce51cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ce520: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ce520u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce524: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x1ce524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce528: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ce528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce52c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1ce52cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ce530: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ce530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ce534: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ce534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce538: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1ce538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ce53c: 0xc073b84  jal         func_1CEE10
    ctx->pc = 0x1CE53Cu;
    SET_GPR_U32(ctx, 31, 0x1CE544u);
    ctx->pc = 0x1CE540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE53Cu;
            // 0x1ce540: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CEE10u;
    if (runtime->hasFunction(0x1CEE10u)) {
        auto targetFn = runtime->lookupFunction(0x1CEE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE544u; }
        if (ctx->pc != 0x1CE544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CEE10_0x1cee10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE544u; }
        if (ctx->pc != 0x1CE544u) { return; }
    }
    ctx->pc = 0x1CE544u;
    // 0x1ce544: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CE544u;
    {
        const bool branch_taken_0x1ce544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce544) {
            ctx->pc = 0x1CE548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE544u;
            // 0x1ce548: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE5B4u;
            goto label_1ce5b4;
        }
    }
    ctx->pc = 0x1CE54Cu;
    // 0x1ce54c: 0x9643006e  lhu         $v1, 0x6E($s2)
    ctx->pc = 0x1ce54cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 110)));
    // 0x1ce550: 0x96420070  lhu         $v0, 0x70($s2)
    ctx->pc = 0x1ce550u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1ce554: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE554u;
    {
        const bool branch_taken_0x1ce554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ce554) {
            ctx->pc = 0x1CE558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE554u;
            // 0x1ce558: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE570u;
            goto label_1ce570;
        }
    }
    ctx->pc = 0x1CE55Cu;
    // 0x1ce55c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ce55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce560: 0xc0742c4  jal         func_1D0B10
    ctx->pc = 0x1CE560u;
    SET_GPR_U32(ctx, 31, 0x1CE568u);
    ctx->pc = 0x1CE564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE560u;
            // 0x1ce564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0B10u;
    if (runtime->hasFunction(0x1D0B10u)) {
        auto targetFn = runtime->lookupFunction(0x1D0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE568u; }
        if (ctx->pc != 0x1CE568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0B10_0x1d0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE568u; }
        if (ctx->pc != 0x1CE568u) { return; }
    }
    ctx->pc = 0x1CE568u;
    // 0x1ce568: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1CE568u;
    {
        const bool branch_taken_0x1ce568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE568u;
            // 0x1ce56c: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce568) {
            ctx->pc = 0x1CE5B4u;
            goto label_1ce5b4;
        }
    }
    ctx->pc = 0x1CE570u;
label_1ce570:
    // 0x1ce570: 0x9651006e  lhu         $s1, 0x6E($s2)
    ctx->pc = 0x1ce570u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 110)));
    // 0x1ce574: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ce574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ce578: 0x96500070  lhu         $s0, 0x70($s2)
    ctx->pc = 0x1ce578u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1ce57c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1ce57cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1ce580: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1ce580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1ce584: 0x40f809  jalr        $v0
    ctx->pc = 0x1CE584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE58Cu);
        ctx->pc = 0x1CE588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE584u;
            // 0x1ce588: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CE58Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE4A0u: goto label_1ce4a0;
            case 0x1CE4C0u: goto label_1ce4c0;
            case 0x1CE570u: goto label_1ce570;
            case 0x1CE5B4u: goto label_1ce5b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE58Cu; }
            if (ctx->pc != 0x1CE58Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1CE58Cu;
    // 0x1ce58c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ce58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce590: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ce590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce594: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ce594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce598: 0xc074fb8  jal         func_1D3EE0
    ctx->pc = 0x1CE598u;
    SET_GPR_U32(ctx, 31, 0x1CE5A0u);
    ctx->pc = 0x1CE59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE598u;
            // 0x1ce59c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EE0u;
    if (runtime->hasFunction(0x1D3EE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5A0u; }
        if (ctx->pc != 0x1CE5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3EE0_0x1d3ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5A0u; }
        if (ctx->pc != 0x1CE5A0u) { return; }
    }
    ctx->pc = 0x1CE5A0u;
    // 0x1ce5a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ce5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce5a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ce5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce5a8: 0xc072c62  jal         func_1CB188
    ctx->pc = 0x1CE5A8u;
    SET_GPR_U32(ctx, 31, 0x1CE5B0u);
    ctx->pc = 0x1CE5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE5A8u;
            // 0x1ce5ac: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB188u;
    if (runtime->hasFunction(0x1CB188u)) {
        auto targetFn = runtime->lookupFunction(0x1CB188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5B0u; }
        if (ctx->pc != 0x1CE5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB188_0x1cb188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5B0u; }
        if (ctx->pc != 0x1CE5B0u) { return; }
    }
    ctx->pc = 0x1CE5B0u;
    // 0x1ce5b0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1ce5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1ce5b4:
    // 0x1ce5b4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ce5b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1ce5b8: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1ce5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1ce5bc: 0x40f809  jalr        $v0
    ctx->pc = 0x1CE5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE5C4u);
        ctx->pc = 0x1CE5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE5BCu;
            // 0x1ce5c0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CE5C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE4A0u: goto label_1ce4a0;
            case 0x1CE4C0u: goto label_1ce4c0;
            case 0x1CE570u: goto label_1ce570;
            case 0x1CE5B4u: goto label_1ce5b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5C4u; }
            if (ctx->pc != 0x1CE5C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1CE5C4u;
    // 0x1ce5c4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1ce5c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce5c8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1ce5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ce5cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1ce5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1ce5d0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1ce5d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ce5d4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x1ce5d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce5d8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1ce5d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ce5dc: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x1ce5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x1ce5e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1ce5e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce5e4: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1ce5e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce5e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ce5e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce5ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ce5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce5f0: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1ce5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ce5f4: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1ce5f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce5f8: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1ce5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ce5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE5FCu;
            // 0x1ce600: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE4A0u: goto label_1ce4a0;
            case 0x1CE4C0u: goto label_1ce4c0;
            case 0x1CE570u: goto label_1ce570;
            case 0x1CE5B4u: goto label_1ce5b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE604u;
    // 0x1ce604: 0x0  nop
    ctx->pc = 0x1ce604u;
    // NOP
}
