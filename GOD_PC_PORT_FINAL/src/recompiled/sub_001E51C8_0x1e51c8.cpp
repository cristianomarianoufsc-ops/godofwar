#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E51C8
// Address: 0x1e51c8 - 0x1e53d8
void sub_001E51C8_0x1e51c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E51C8_0x1e51c8");
#endif

    ctx->pc = 0x1e51c8u;

    // 0x1e51c8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1e51c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1e51cc: 0x3c03ff94  lui         $v1, 0xFF94
    ctx->pc = 0x1e51ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65428 << 16));
    // 0x1e51d0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1e51d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1e51d4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1e51d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1e51d8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1e51d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1e51dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e51dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e51e0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1e51e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1e51e4: 0x3463e00c  ori         $v1, $v1, 0xE00C
    ctx->pc = 0x1e51e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57356);
    // 0x1e51e8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1e51e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1e51ec: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x1e51ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x1e51f0: 0x24e2f170  addiu       $v0, $a3, -0xE90
    ctx->pc = 0x1e51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963568));
    // 0x1e51f4: 0xace3f170  sw          $v1, -0xE90($a3)
    ctx->pc = 0x1e51f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963568), GPR_U32(ctx, 3));
    // 0x1e51f8: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1e51f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e51fc: 0x34840042  ori         $a0, $a0, 0x42
    ctx->pc = 0x1e51fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)66);
    // 0x1e5200: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e5200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5204: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1e5204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1e5208: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1e5208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1e520c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e520cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5210: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x1e5210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x1e5214: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1e5214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1e5218: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e5218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1e521c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e521cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e5220: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e5220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e5224: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e5224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e5228: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1e5228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1e522c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1e522cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1e5230: 0x8c64bcf8  lw          $a0, -0x4308($v1)
    ctx->pc = 0x1e5230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950136)));
    // 0x1e5234: 0x3c014240  lui         $at, 0x4240
    ctx->pc = 0x1e5234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16960 << 16));
    // 0x1e5238: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e5238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e523c: 0xc047ada  jal         func_11EB68
    ctx->pc = 0x1E523Cu;
    SET_GPR_U32(ctx, 31, 0x1E5244u);
    ctx->pc = 0x1E5240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E523Cu;
            // 0x1e5240: 0x7a250000  lq          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EB68u;
    if (runtime->hasFunction(0x11EB68u)) {
        auto targetFn = runtime->lookupFunction(0x11EB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5244u; }
        if (ctx->pc != 0x1E5244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EB68_0x11eb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5244u; }
        if (ctx->pc != 0x1E5244u) { return; }
    }
    ctx->pc = 0x1E5244u;
    // 0x1e5244: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1e5244u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5248: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1e5248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1e524c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1e524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1e5250: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e5250u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e5254: 0xda010050  lqc2        $vf1, 0x50($s0)
    ctx->pc = 0x1e5254u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1e5258: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1e5258u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e525c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5260: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1e5260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x1e5264: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e5264u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5268: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e5268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e526c: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x1e526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
    // 0x1e5270: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e5270u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e5274: 0x4be208d8  vmulx.xyzw  $vf3, $vf1, $vf2x
    ctx->pc = 0x1e5274u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e5278: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1e5278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e527c: 0xda020070  lqc2        $vf2, 0x70($s0)
    ctx->pc = 0x1e527cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1e5280: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e5280u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5284: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1e5284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e5288: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e5288u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e528c: 0xda020120  lqc2        $vf2, 0x120($s0)
    ctx->pc = 0x1e528cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1e5290: 0x4be2085a  vmulz.xyzw  $vf1, $vf1, $vf2z
    ctx->pc = 0x1e5290u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5294: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e5294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5298: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1e5298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1e529c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e529cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e52a0: 0x4be208d8  vmulx.xyzw  $vf3, $vf1, $vf2x
    ctx->pc = 0x1e52a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e52a4: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1e52a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e52a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e52a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e52ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e52acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e52b0:
    // 0x1e52b0: 0x1640001a  bnez        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E52B0u;
    {
        const bool branch_taken_0x1e52b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E52B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E52B0u;
            // 0x1e52b4: 0xdba10070  lqc2        $vf1, 0x70($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52b0) {
            ctx->pc = 0x1E531Cu;
            goto label_1e531c;
        }
    }
    ctx->pc = 0x1E52B8u;
label_1e52b8:
    // 0x1e52b8: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1e52b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e52bc: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e52bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e52c0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1e52c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e52c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e52c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e52c8: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1e52c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e52cc: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1e52ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e52d0: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1e52d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1e52d4: 0x7ba50080  lq          $a1, 0x80($sp)
    ctx->pc = 0x1e52d4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e52d8: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E52D8u;
    SET_GPR_U32(ctx, 31, 0x1E52E0u);
    ctx->pc = 0x1E52DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E52D8u;
            // 0x1e52dc: 0x48260800  qmfc2.ni    $a2, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E52E0u; }
        if (ctx->pc != 0x1E52E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E52E0u; }
        if (ctx->pc != 0x1E52E0u) { return; }
    }
    ctx->pc = 0x1E52E0u;
    // 0x1e52e0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1e52e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1e52e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E52E4u;
    {
        const bool branch_taken_0x1e52e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E52E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E52E4u;
            // 0x1e52e8: 0x8c6377bc  lw          $v1, 0x77BC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52e4) {
            ctx->pc = 0x1E5318u;
            goto label_1e5318;
        }
    }
    ctx->pc = 0x1E52ECu;
    // 0x1e52ec: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E52ECu;
    {
        const bool branch_taken_0x1e52ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E52F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E52ECu;
            // 0x1e52f0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52ec) {
            ctx->pc = 0x1E5318u;
            goto label_1e5318;
        }
    }
    ctx->pc = 0x1E52F4u;
    // 0x1e52f4: 0x8c425e6c  lw          $v0, 0x5E6C($v0)
    ctx->pc = 0x1e52f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24172)));
    // 0x1e52f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e52f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e52fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e52fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5300: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e5300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e5304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5304u;
    {
        const bool branch_taken_0x1e5304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5304u;
            // 0x1e5308: 0x7ba20080  lq          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5304) {
            ctx->pc = 0x1E5318u;
            goto label_1e5318;
        }
    }
    ctx->pc = 0x1E530Cu;
    // 0x1e530c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E530Cu;
    {
        const bool branch_taken_0x1e530c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E530Cu;
            // 0x1e5310: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e530c) {
            ctx->pc = 0x1E531Cu;
            goto label_1e531c;
        }
    }
    ctx->pc = 0x1E5314u;
    // 0x1e5314: 0x0  nop
    ctx->pc = 0x1e5314u;
    // NOP
label_1e5318:
    // 0x1e5318: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1e5318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e531c:
    // 0x1e531c: 0x16000019  bnez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E531Cu;
    {
        const bool branch_taken_0x1e531c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E531Cu;
            // 0x1e5320: 0xdba10090  lqc2        $vf1, 0x90($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e531c) {
            ctx->pc = 0x1E5384u;
            goto label_1e5384;
        }
    }
    ctx->pc = 0x1E5324u;
    // 0x1e5324: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1e5324u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5328: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e5328u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e532c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1e532cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5330: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e5330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e5334: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1e5334u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5338: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1e5338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e533c: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1e533cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1e5340: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x1e5340u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e5344: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E5344u;
    SET_GPR_U32(ctx, 31, 0x1E534Cu);
    ctx->pc = 0x1E5348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5344u;
            // 0x1e5348: 0x48260800  qmfc2.ni    $a2, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E534Cu; }
        if (ctx->pc != 0x1E534Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E534Cu; }
        if (ctx->pc != 0x1E534Cu) { return; }
    }
    ctx->pc = 0x1E534Cu;
    // 0x1e534c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1e534cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1e5350: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E5350u;
    {
        const bool branch_taken_0x1e5350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5350u;
            // 0x1e5354: 0x8c6377bc  lw          $v1, 0x77BC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5350) {
            ctx->pc = 0x1E5380u;
            goto label_1e5380;
        }
    }
    ctx->pc = 0x1E5358u;
    // 0x1e5358: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5358u;
    {
        const bool branch_taken_0x1e5358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E535Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5358u;
            // 0x1e535c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5358) {
            ctx->pc = 0x1E5380u;
            goto label_1e5380;
        }
    }
    ctx->pc = 0x1E5360u;
    // 0x1e5360: 0x8c425e6c  lw          $v0, 0x5E6C($v0)
    ctx->pc = 0x1e5360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24172)));
    // 0x1e5364: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e5364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e5368: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e536c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e536cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e5370: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5370u;
    {
        const bool branch_taken_0x1e5370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5370u;
            // 0x1e5374: 0x7ba200a0  lq          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5370) {
            ctx->pc = 0x1E5380u;
            goto label_1e5380;
        }
    }
    ctx->pc = 0x1E5378u;
    // 0x1e5378: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5378u;
    {
        const bool branch_taken_0x1e5378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E537Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5378u;
            // 0x1e537c: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5378) {
            ctx->pc = 0x1E5384u;
            goto label_1e5384;
        }
    }
    ctx->pc = 0x1E5380u;
label_1e5380:
    // 0x1e5380: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e5380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5384:
    // 0x1e5384: 0x1240ffcc  beqz        $s2, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1E5384u;
    {
        const bool branch_taken_0x1e5384 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5384u;
            // 0x1e5388: 0xdba10070  lqc2        $vf1, 0x70($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5384) {
            ctx->pc = 0x1E52B8u;
            runtime->cooperativeGuestYield();
            goto label_1e52b8;
        }
    }
    ctx->pc = 0x1E538Cu;
    // 0x1e538c: 0x1200ffc8  beqz        $s0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1E538Cu;
    {
        const bool branch_taken_0x1e538c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E538Cu;
            // 0x1e5390: 0xdba20090  lqc2        $vf2, 0x90($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e538c) {
            ctx->pc = 0x1E52B0u;
            runtime->cooperativeGuestYield();
            goto label_1e52b0;
        }
    }
    ctx->pc = 0x1E5394u;
    // 0x1e5394: 0xdba30070  lqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1e5394u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e5398: 0x4be3106c  vsub.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x1e5398u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e539c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e539cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e53a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e53a4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e53a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e53a8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e53a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e53ac: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1e53acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e53b0: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e53b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e53b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e53b8: 0xc047b18  jal         func_11EC60
    ctx->pc = 0x1E53B8u;
    SET_GPR_U32(ctx, 31, 0x1E53C0u);
    ctx->pc = 0x1E53BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E53B8u;
            // 0x1e53bc: 0x8c44bcf8  lw          $a0, -0x4308($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EC60u;
    if (runtime->hasFunction(0x11EC60u)) {
        auto targetFn = runtime->lookupFunction(0x11EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53C0u; }
        if (ctx->pc != 0x1E53C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EC60_0x11ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53C0u; }
        if (ctx->pc != 0x1E53C0u) { return; }
    }
    ctx->pc = 0x1E53C0u;
    // 0x1e53c0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1e53c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e53c4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1e53c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e53c8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1e53c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e53cc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1e53ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e53d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E53D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E53D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E53D0u;
            // 0x1e53d4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E52B0u: goto label_1e52b0;
            case 0x1E52B8u: goto label_1e52b8;
            case 0x1E5318u: goto label_1e5318;
            case 0x1E531Cu: goto label_1e531c;
            case 0x1E5380u: goto label_1e5380;
            case 0x1E5384u: goto label_1e5384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E53D8u;
}
