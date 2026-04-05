#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127000
// Address: 0x127000 - 0x127240
void sub_00127000_0x127000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127000_0x127000");
#endif

    ctx->pc = 0x127000u;

    // 0x127000: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x127000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x127004: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x127004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x127008: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x127008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x12700c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12700cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127010: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x127010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x127014: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x127014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127018: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x127018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12701c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x12701cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127020: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x127020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x127024: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x127024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127028: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x127028u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12702c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x12702cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x127030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x127030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x127034: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x127034u;
    SET_GPR_U32(ctx, 31, 0x12703Cu);
    ctx->pc = 0x127038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127034u;
            // 0x127038: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12703Cu; }
        if (ctx->pc != 0x12703Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12703Cu; }
        if (ctx->pc != 0x12703Cu) { return; }
    }
    ctx->pc = 0x12703Cu;
    // 0x12703c: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x12703cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x127040: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x127040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x127044: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x127044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x127048: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x127048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12704c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12704cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x127050: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x127050u;
    SET_GPR_U32(ctx, 31, 0x127058u);
    ctx->pc = 0x127054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127050u;
            // 0x127054: 0xae22f168  sw          $v0, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127058u; }
        if (ctx->pc != 0x127058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127058u; }
        if (ctx->pc != 0x127058u) { return; }
    }
    ctx->pc = 0x127058u;
    // 0x127058: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x127058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12705c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x12705cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x127060: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x127060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x127064: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x127064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x127068: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x127068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12706c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x12706cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x127070: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x127070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x127074: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x127074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x127078: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x127078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x12707c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x12707cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x127080: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x127080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x127084: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x127084u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x127088: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x127088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x12708c: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x12708cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x127090: 0x8c62dd58  lw          $v0, -0x22A8($v1)
    ctx->pc = 0x127090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958424)));
    // 0x127094: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x127094u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x127098: 0x9c83f1a8  lwu         $v1, -0xE58($a0)
    ctx->pc = 0x127098u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294963624)));
    // 0x12709c: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x12709cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1270a0: 0x94c78  dsll        $t1, $t1, 17
    ctx->pc = 0x1270a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 17);
    // 0x1270a4: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1270a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1270a8: 0x8e26f168  lw          $a2, -0xE98($s1)
    ctx->pc = 0x1270a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x1270ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1270acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1270b0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1270b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1270b4: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x1270b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x1270b8: 0xfcc50018  sd          $a1, 0x18($a2)
    ctx->pc = 0x1270b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 5));
    // 0x1270bc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1270bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1270c0: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x1270c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1270c4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1270c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1270c8: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x1270c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1270cc: 0xfcd00010  sd          $s0, 0x10($a2)
    ctx->pc = 0x1270ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 16));
    // 0x1270d0: 0xae22f168  sw          $v0, -0xE98($s1)
    ctx->pc = 0x1270d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
    // 0x1270d4: 0x9d03f19c  lwu         $v1, -0xE64($t0)
    ctx->pc = 0x1270d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4294963612)));
    // 0x1270d8: 0x9ce2f1a0  lwu         $v0, -0xE60($a3)
    ctx->pc = 0x1270d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4294963616)));
    // 0x1270dc: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1270dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1270e0: 0xfcc40028  sd          $a0, 0x28($a2)
    ctx->pc = 0x1270e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 4));
    // 0x1270e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1270e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1270e8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1270e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1270ec: 0xfcc20020  sd          $v0, 0x20($a2)
    ctx->pc = 0x1270ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
    // 0x1270f0: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1270f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1270f4: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1270f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1270f8: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x1270f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1270fc: 0xfcc20030  sd          $v0, 0x30($a2)
    ctx->pc = 0x1270fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 2));
    // 0x127100: 0xfcc30038  sd          $v1, 0x38($a2)
    ctx->pc = 0x127100u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 3));
    // 0x127104: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x127104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x127108: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x127108u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12710c: 0xfcd20040  sd          $s2, 0x40($a2)
    ctx->pc = 0x12710cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 18));
    // 0x127110: 0xfcc40048  sd          $a0, 0x48($a2)
    ctx->pc = 0x127110u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 4));
    // 0x127114: 0xda830000  lqc2        $vf3, 0x0($s4)
    ctx->pc = 0x127114u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x127118: 0x4b021858  vmulx.x     $vf1, $vf3, $vf2x
    ctx->pc = 0x127118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12711c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12711cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x127120: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x127120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x127124: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127128: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x127128u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x12712c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12712cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x127130: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x127130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x127134: 0x4a821858  vmulx.y     $vf1, $vf3, $vf2x
    ctx->pc = 0x127134u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x127138: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x127138u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12713c: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x12713cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x127140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127144: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x127144u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x127148: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x127148u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12714c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x12714cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x127150: 0x4a421898  vmulx.z     $vf2, $vf3, $vf2x
    ctx->pc = 0x127150u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x127154: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x127154u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x127158: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x127158u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x12715c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12715cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127160: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x127160u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x127164: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x127164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x127168: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x127168u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12716c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12716cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x127170: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x127170u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x127174: 0x4a2118d8  vmulx.w     $vf3, $vf3, $vf1x
    ctx->pc = 0x127174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x127178: 0x4b0300c3  vaddw.x     $vf3, $vf0, $vf3w
    ctx->pc = 0x127178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12717c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12717cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x127180: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x127180u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x127184: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x127184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x127188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12718c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12718cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x127190: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x127190u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x127194: 0x52e3a  dsrl        $a1, $a1, 24
    ctx->pc = 0x127194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 24);
    // 0x127198: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x127198u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12719c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12719cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1271a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1271a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1271a4: 0x4243a  dsrl        $a0, $a0, 16
    ctx->pc = 0x1271a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x1271a8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1271a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1271ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1271acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1271b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1271b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1271b4: 0x2123a  dsrl        $v0, $v0, 8
    ctx->pc = 0x1271b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 8);
    // 0x1271b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1271b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1271bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1271bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1271c0: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x1271c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x1271c4: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x1271c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x1271c8: 0xfcc40058  sd          $a0, 0x58($a2)
    ctx->pc = 0x1271c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 88), GPR_U64(ctx, 4));
    // 0x1271cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1271ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1271d0: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x1271d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x1271d4: 0xfcc30050  sd          $v1, 0x50($a2)
    ctx->pc = 0x1271d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 3));
    // 0x1271d8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1271D8u;
    {
        const bool branch_taken_0x1271d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1271DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1271D8u;
            // 0x1271dc: 0xae22f168  sw          $v0, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271d8) {
            ctx->pc = 0x127200u;
            goto label_127200;
        }
    }
    ctx->pc = 0x1271E0u;
    // 0x1271e0: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x1271e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x1271e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1271e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1271e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1271ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271f0: 0xc048360  jal         func_120D80
    ctx->pc = 0x1271F0u;
    SET_GPR_U32(ctx, 31, 0x1271F8u);
    ctx->pc = 0x1271F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1271F0u;
            // 0x1271f4: 0x34e77fff  ori         $a3, $a3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
    ctx->pc = 0x120D80u;
    if (runtime->hasFunction(0x120D80u)) {
        auto targetFn = runtime->lookupFunction(0x120D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1271F8u; }
        if (ctx->pc != 0x1271F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120D80_0x120d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1271F8u; }
        if (ctx->pc != 0x1271F8u) { return; }
    }
    ctx->pc = 0x1271F8u;
    // 0x1271f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1271F8u;
    {
        const bool branch_taken_0x1271f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1271f8) {
            ctx->pc = 0x12720Cu;
            goto label_12720c;
        }
    }
    ctx->pc = 0x127200u;
label_127200:
    // 0x127200: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x127200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x127204: 0xc048222  jal         func_120888
    ctx->pc = 0x127204u;
    SET_GPR_U32(ctx, 31, 0x12720Cu);
    ctx->pc = 0x127208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127204u;
            // 0x127208: 0x34847fff  ori         $a0, $a0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
    ctx->pc = 0x120888u;
    if (runtime->hasFunction(0x120888u)) {
        auto targetFn = runtime->lookupFunction(0x120888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12720Cu; }
        if (ctx->pc != 0x12720Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120888_0x120888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12720Cu; }
        if (ctx->pc != 0x12720Cu) { return; }
    }
    ctx->pc = 0x12720Cu;
label_12720c:
    // 0x12720c: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x12720Cu;
    SET_GPR_U32(ctx, 31, 0x127214u);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127214u; }
        if (ctx->pc != 0x127214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127214u; }
        if (ctx->pc != 0x127214u) { return; }
    }
    ctx->pc = 0x127214u;
    // 0x127214: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x127214u;
    SET_GPR_U32(ctx, 31, 0x12721Cu);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12721Cu; }
        if (ctx->pc != 0x12721Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12721Cu; }
        if (ctx->pc != 0x12721Cu) { return; }
    }
    ctx->pc = 0x12721Cu;
    // 0x12721c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x12721cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127220: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x127220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127224: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x127224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127228: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x127228u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12722c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x12722cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127230: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x127230u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x127234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127238: 0x3e00008  jr          $ra
    ctx->pc = 0x127238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12723Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127238u;
            // 0x12723c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127200u: goto label_127200;
            case 0x12720Cu: goto label_12720c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x127240u;
}
