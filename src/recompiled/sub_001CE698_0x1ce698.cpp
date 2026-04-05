#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE698
// Address: 0x1ce698 - 0x1ce898
void sub_001CE698_0x1ce698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE698_0x1ce698");
#endif

    ctx->pc = 0x1ce698u;

    // 0x1ce698: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ce698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ce69c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ce69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce6a0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1ce6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1ce6a4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1ce6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1ce6a8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1ce6a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ce6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ce6b0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1ce6b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6b4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1ce6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1ce6b8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1ce6b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6bc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1ce6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1ce6c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ce6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ce6c4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1ce6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1ce6c8: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x1ce6c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce6cc: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x1ce6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x1ce6d0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1ce6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ce6d4: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1ce6d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ce6d8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE6D8u;
    {
        const bool branch_taken_0x1ce6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CE6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE6D8u;
            // 0x1ce6dc: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce6d8) {
            ctx->pc = 0x1CE6E8u;
            goto label_1ce6e8;
        }
    }
    ctx->pc = 0x1CE6E0u;
    // 0x1ce6e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE6E0u;
    {
        const bool branch_taken_0x1ce6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE6E0u;
            // 0x1ce6e4: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce6e0) {
            ctx->pc = 0x1CE708u;
            goto label_1ce708;
        }
    }
    ctx->pc = 0x1CE6E8u;
label_1ce6e8:
    // 0x1ce6e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ce6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ce6ec: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1ce6ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1ce6f0: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1ce6f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1ce6f4: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE6F4u;
    {
        const bool branch_taken_0x1ce6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CE6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE6F4u;
            // 0x1ce6f8: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce6f4) {
            ctx->pc = 0x1CE708u;
            goto label_1ce708;
        }
    }
    ctx->pc = 0x1CE6FCu;
    // 0x1ce6fc: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CE6FCu;
    SET_GPR_U32(ctx, 31, 0x1CE704u);
    ctx->pc = 0x1CE700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE6FCu;
            // 0x1ce700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE704u; }
        if (ctx->pc != 0x1CE704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE704u; }
        if (ctx->pc != 0x1CE704u) { return; }
    }
    ctx->pc = 0x1CE704u;
    // 0x1ce704: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x1ce704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1ce708:
    // 0x1ce708: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1ce708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ce70c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x1ce70cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x1ce710: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1ce710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1ce714: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1ce714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1ce718: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE718u;
    {
        const bool branch_taken_0x1ce718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce718) {
            ctx->pc = 0x1CE71Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE718u;
            // 0x1ce71c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE730u;
            goto label_1ce730;
        }
    }
    ctx->pc = 0x1CE720u;
    // 0x1ce720: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1ce720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1ce724: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CE724u;
    {
        const bool branch_taken_0x1ce724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce724) {
            ctx->pc = 0x1CE728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE724u;
            // 0x1ce728: 0xda210000  lqc2        $vf1, 0x0($s1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE770u;
            goto label_1ce770;
        }
    }
    ctx->pc = 0x1CE72Cu;
    // 0x1ce72c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1ce72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1ce730:
    // 0x1ce730: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1ce730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1ce734: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1ce734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1ce738: 0x40f809  jalr        $v0
    ctx->pc = 0x1CE738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE740u);
        ctx->pc = 0x1CE73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE738u;
            // 0x1ce73c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CE740u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE6E8u: goto label_1ce6e8;
            case 0x1CE708u: goto label_1ce708;
            case 0x1CE730u: goto label_1ce730;
            case 0x1CE770u: goto label_1ce770;
            case 0x1CE7C0u: goto label_1ce7c0;
            case 0x1CE7D8u: goto label_1ce7d8;
            case 0x1CE7ECu: goto label_1ce7ec;
            case 0x1CE808u: goto label_1ce808;
            case 0x1CE850u: goto label_1ce850;
            case 0x1CE854u: goto label_1ce854;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE740u; }
            if (ctx->pc != 0x1CE740u) { return; }
        }
        }
    }
    ctx->pc = 0x1CE740u;
    // 0x1ce740: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1ce740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1ce744: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ce744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce748: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ce748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ce74c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ce74cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ce750: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1ce750u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ce754: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1ce754u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ce758: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x1ce758u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ce75c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1ce75cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ce760: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1ce760u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce764: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1ce764u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ce768: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1ce768u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ce76c: 0x0  nop
    ctx->pc = 0x1ce76cu;
    // NOP
label_1ce770:
    // 0x1ce770: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1ce770u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce774: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1ce774u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce778: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1ce778u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ce77c: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1ce77cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ce780: 0x8e440174  lw          $a0, 0x174($s2)
    ctx->pc = 0x1ce780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1ce784: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x1ce784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x1ce788: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE788u;
    {
        const bool branch_taken_0x1ce788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE788u;
            // 0x1ce78c: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce788) {
            ctx->pc = 0x1CE7C0u;
            goto label_1ce7c0;
        }
    }
    ctx->pc = 0x1CE790u;
    // 0x1ce790: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CE790u;
    {
        const bool branch_taken_0x1ce790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce790) {
            ctx->pc = 0x1CE794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE790u;
            // 0x1ce794: 0x86030060  lh          $v1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE7D8u;
            goto label_1ce7d8;
        }
    }
    ctx->pc = 0x1CE798u;
    // 0x1ce798: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1ce798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1ce79c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE79Cu;
    {
        const bool branch_taken_0x1ce79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE79Cu;
            // 0x1ce7a0: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce79c) {
            ctx->pc = 0x1CE7C0u;
            goto label_1ce7c0;
        }
    }
    ctx->pc = 0x1CE7A4u;
    // 0x1ce7a4: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1ce7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ce7a8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ce7a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ce7ac: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1ce7acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ce7b0: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1ce7b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce7b4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1CE7B4u;
    {
        const bool branch_taken_0x1ce7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7B4u;
            // 0x1ce7b8: 0xfa610000  sqc2        $vf1, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7b4) {
            ctx->pc = 0x1CE850u;
            goto label_1ce850;
        }
    }
    ctx->pc = 0x1CE7BCu;
    // 0x1ce7bc: 0x0  nop
    ctx->pc = 0x1ce7bcu;
    // NOP
label_1ce7c0:
    // 0x1ce7c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE7C0u;
    {
        const bool branch_taken_0x1ce7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce7c0) {
            ctx->pc = 0x1CE7C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7C0u;
            // 0x1ce7c4: 0x86030060  lh          $v1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE7D8u;
            goto label_1ce7d8;
        }
    }
    ctx->pc = 0x1CE7C8u;
    // 0x1ce7c8: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1ce7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1ce7cc: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CE7CCu;
    {
        const bool branch_taken_0x1ce7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce7cc) {
            ctx->pc = 0x1CE7D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7CCu;
            // 0x1ce7d0: 0xda620000  lqc2        $vf2, 0x0($s3) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE854u;
            goto label_1ce854;
        }
    }
    ctx->pc = 0x1CE7D4u;
    // 0x1ce7d4: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1ce7d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_1ce7d8:
    // 0x1ce7d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ce7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce7dc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE7DCu;
    {
        const bool branch_taken_0x1ce7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7DCu;
            // 0x1ce7e0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7dc) {
            ctx->pc = 0x1CE7ECu;
            goto label_1ce7ec;
        }
    }
    ctx->pc = 0x1CE7E4u;
    // 0x1ce7e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE7E4u;
    {
        const bool branch_taken_0x1ce7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7E4u;
            // 0x1ce7e8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7e4) {
            ctx->pc = 0x1CE808u;
            goto label_1ce808;
        }
    }
    ctx->pc = 0x1CE7ECu;
label_1ce7ec:
    // 0x1ce7ec: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1ce7ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1ce7f0: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1ce7f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1ce7f4: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE7F4u;
    {
        const bool branch_taken_0x1ce7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CE7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7F4u;
            // 0x1ce7f8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7f4) {
            ctx->pc = 0x1CE808u;
            goto label_1ce808;
        }
    }
    ctx->pc = 0x1CE7FCu;
    // 0x1ce7fc: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CE7FCu;
    SET_GPR_U32(ctx, 31, 0x1CE804u);
    ctx->pc = 0x1CE800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7FCu;
            // 0x1ce800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE804u; }
        if (ctx->pc != 0x1CE804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE804u; }
        if (ctx->pc != 0x1CE804u) { return; }
    }
    ctx->pc = 0x1CE804u;
    // 0x1ce804: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1ce804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1ce808:
    // 0x1ce808: 0xd8820020  lqc2        $vf2, 0x20($a0)
    ctx->pc = 0x1ce808u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ce80c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1ce80cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ce810: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1ce810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce814: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1ce814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce818: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1ce818u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ce81c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1ce81cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ce820: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ce820u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ce824: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1ce824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ce828: 0x4a0002ff  vnop
    ctx->pc = 0x1ce828u;
    // NOP operation, no action needed for VU0
    // 0x1ce82c: 0x4a0002ff  vnop
    ctx->pc = 0x1ce82cu;
    // NOP operation, no action needed for VU0
    // 0x1ce830: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1ce830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ce834: 0x4be220ea  vmul.xyzw   $vf3, $vf4, $vf2
    ctx->pc = 0x1ce834u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ce838: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1ce838u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce83c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1ce83cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce840: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1ce840u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ce844: 0x4be2212c  vsub.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x1ce844u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ce848: 0xfa640000  sqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1ce848u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce84c: 0x0  nop
    ctx->pc = 0x1ce84cu;
    // NOP
label_1ce850:
    // 0x1ce850: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1ce850u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1ce854:
    // 0x1ce854: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1ce854u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ce858: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1ce858u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce85c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1ce85cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce860: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1ce860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ce864: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1ce864u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ce868: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1ce868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ce86c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce86cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce870: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1ce870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ce874: 0x46000004  c1          0x4
    ctx->pc = 0x1ce874u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ce878: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1ce878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce87c: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x1ce87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x1ce880: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ce880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce884: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1ce884u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce888: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ce888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce88c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE88Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE88Cu;
            // 0x1ce890: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE6E8u: goto label_1ce6e8;
            case 0x1CE708u: goto label_1ce708;
            case 0x1CE730u: goto label_1ce730;
            case 0x1CE770u: goto label_1ce770;
            case 0x1CE7C0u: goto label_1ce7c0;
            case 0x1CE7D8u: goto label_1ce7d8;
            case 0x1CE7ECu: goto label_1ce7ec;
            case 0x1CE808u: goto label_1ce808;
            case 0x1CE850u: goto label_1ce850;
            case 0x1CE854u: goto label_1ce854;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE894u;
    // 0x1ce894: 0x0  nop
    ctx->pc = 0x1ce894u;
    // NOP
}
