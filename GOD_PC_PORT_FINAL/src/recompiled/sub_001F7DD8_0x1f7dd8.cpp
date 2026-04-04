#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7DD8
// Address: 0x1f7dd8 - 0x1f8638
void sub_001F7DD8_0x1f7dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7DD8_0x1f7dd8");
#endif

    ctx->pc = 0x1f7dd8u;

    // 0x1f7dd8: 0x27bdfca0  addiu       $sp, $sp, -0x360
    ctx->pc = 0x1f7dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966432));
    // 0x1f7ddc: 0x7fb30300  sq          $s3, 0x300($sp)
    ctx->pc = 0x1f7ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 19));
    // 0x1f7de0: 0x7fb402f0  sq          $s4, 0x2F0($sp)
    ctx->pc = 0x1f7de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 20));
    // 0x1f7de4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f7de4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7de8: 0x7fb502e0  sq          $s5, 0x2E0($sp)
    ctx->pc = 0x1f7de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 21));
    // 0x1f7dec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f7decu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7df0: 0x7fb00330  sq          $s0, 0x330($sp)
    ctx->pc = 0x1f7df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 16));
    // 0x1f7df4: 0x7fb10320  sq          $s1, 0x320($sp)
    ctx->pc = 0x1f7df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 17));
    // 0x1f7df8: 0x7fb20310  sq          $s2, 0x310($sp)
    ctx->pc = 0x1f7df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 18));
    // 0x1f7dfc: 0x7fb602d0  sq          $s6, 0x2D0($sp)
    ctx->pc = 0x1f7dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 22));
    // 0x1f7e00: 0xffbf02c0  sd          $ra, 0x2C0($sp)
    ctx->pc = 0x1f7e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
    // 0x1f7e04: 0xe7b70358  swc1        $f23, 0x358($sp)
    ctx->pc = 0x1f7e04u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 856), bits); }
    // 0x1f7e08: 0xe7b60350  swc1        $f22, 0x350($sp)
    ctx->pc = 0x1f7e08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 848), bits); }
    // 0x1f7e0c: 0xe7b50348  swc1        $f21, 0x348($sp)
    ctx->pc = 0x1f7e0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 840), bits); }
    // 0x1f7e10: 0xe7b40340  swc1        $f20, 0x340($sp)
    ctx->pc = 0x1f7e10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 832), bits); }
    // 0x1f7e14: 0x92620731  lbu         $v0, 0x731($s3)
    ctx->pc = 0x1f7e14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1841)));
    // 0x1f7e18: 0x104001f9  beqz        $v0, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x1F7E18u;
    {
        const bool branch_taken_0x1f7e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7E18u;
            // 0x1f7e1c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e18) {
            ctx->pc = 0x1F8600u;
            goto label_1f8600;
        }
    }
    ctx->pc = 0x1F7E20u;
    // 0x1f7e20: 0x26720300  addiu       $s2, $s3, 0x300
    ctx->pc = 0x1f7e20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
    // 0x1f7e24: 0x92420032  lbu         $v0, 0x32($s2)
    ctx->pc = 0x1f7e24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
label_1f7e28:
    // 0x1f7e28: 0x104001ed  beqz        $v0, . + 4 + (0x1ED << 2)
    ctx->pc = 0x1F7E28u;
    {
        const bool branch_taken_0x1f7e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7E28u;
            // 0x1f7e2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e28) {
            ctx->pc = 0x1F85E0u;
            goto label_1f85e0;
        }
    }
    ctx->pc = 0x1F7E30u;
    // 0x1f7e30: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f7e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f7e34: 0xda430000  lqc2        $vf3, 0x0($s2)
    ctx->pc = 0x1f7e34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f7e38: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1f7e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7e3c: 0xda450010  lqc2        $vf5, 0x10($s2)
    ctx->pc = 0x1f7e3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1f7e40: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1f7e40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1f7e44: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x1f7e44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f7e48: 0xfba30100  sqc2        $vf3, 0x100($sp)
    ctx->pc = 0x1f7e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f7e4c: 0x4be41918  vmulx.xyzw  $vf4, $vf3, $vf4x
    ctx->pc = 0x1f7e4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7e50: 0x4be42928  vadd.xyzw   $vf4, $vf5, $vf4
    ctx->pc = 0x1f7e50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7e54: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1f7e54u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f7e58: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1f7e58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e5c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f7e60: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1f7e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1f7e64: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f7e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f7e68: 0xc440e3a8  lwc1        $f0, -0x1C58($v0)
    ctx->pc = 0x1f7e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7e6c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f7e6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f7e70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f7e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f7e74: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1f7e74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f7e78: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1f7e78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1f7e7c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1f7e7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f7e80: 0xfba10240  sqc2        $vf1, 0x240($sp)
    ctx->pc = 0x1f7e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f7e84: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1f7e84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f7e88: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1f7e88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f7e8c: 0xfa430000  sqc2        $vf3, 0x0($s2)
    ctx->pc = 0x1f7e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f7e90: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1f7e90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1f7e94: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f7e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f7e98: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f7e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f7e9c: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1f7e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1f7ea0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f7ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7ea4: 0x24e2f170  addiu       $v0, $a3, -0xE90
    ctx->pc = 0x1f7ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963568));
    // 0x1f7ea8: 0xace5f170  sw          $a1, -0xE90($a3)
    ctx->pc = 0x1f7ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963568), GPR_U32(ctx, 5));
    // 0x1f7eac: 0x3c030d33  lui         $v1, 0xD33
    ctx->pc = 0x1f7eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3379 << 16));
    // 0x1f7eb0: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1f7eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1f7eb4: 0x34630042  ori         $v1, $v1, 0x42
    ctx->pc = 0x1f7eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)66);
    // 0x1f7eb8: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x1f7eb8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1f7ebc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1f7ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1f7ec0: 0x48262000  qmfc2.ni    $a2, $vf4
    ctx->pc = 0x1f7ec0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f7ec4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1f7ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1f7ec8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1f7ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1f7ecc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1f7eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1f7ed0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1f7ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1f7ed4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1f7ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1f7ed8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1f7ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1f7edc: 0xc047864  jal         func_11E190
    ctx->pc = 0x1F7EDCu;
    SET_GPR_U32(ctx, 31, 0x1F7EE4u);
    ctx->pc = 0x1F7EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7EDCu;
            // 0x1f7ee0: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7EE4u; }
        if (ctx->pc != 0x1F7EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7EE4u; }
        if (ctx->pc != 0x1F7EE4u) { return; }
    }
    ctx->pc = 0x1F7EE4u;
    // 0x1f7ee4: 0x104001ac  beqz        $v0, . + 4 + (0x1AC << 2)
    ctx->pc = 0x1F7EE4u;
    {
        const bool branch_taken_0x1f7ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7EE4u;
            // 0x1f7ee8: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ee4) {
            ctx->pc = 0x1F8598u;
            goto label_1f8598;
        }
    }
    ctx->pc = 0x1F7EECu;
    // 0x1f7eec: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1f7eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1f7ef0: 0x24467790  addiu       $a2, $v0, 0x7790
    ctx->pc = 0x1f7ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1f7ef4: 0x8c635e70  lw          $v1, 0x5E70($v1)
    ctx->pc = 0x1f7ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24176)));
    // 0x1f7ef8: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x1f7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1f7efc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f7efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f7f00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f7f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7f04: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1f7f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x1f7f08: 0x144001a3  bnez        $v0, . + 4 + (0x1A3 << 2)
    ctx->pc = 0x1F7F08u;
    {
        const bool branch_taken_0x1f7f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7F08u;
            // 0x1f7f0c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f08) {
            ctx->pc = 0x1F8598u;
            goto label_1f8598;
        }
    }
    ctx->pc = 0x1F7F10u;
    // 0x1f7f10: 0x92430033  lbu         $v1, 0x33($s2)
    ctx->pc = 0x1f7f10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1f7f14: 0x8c44e3c8  lw          $a0, -0x1C38($v0)
    ctx->pc = 0x1f7f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960072)));
    // 0x1f7f18: 0x30a50008  andi        $a1, $a1, 0x8
    ctx->pc = 0x1f7f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x1f7f1c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f7f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f7f20: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1f7f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1f7f24: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x1f7f24u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1f7f28: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f7f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f7f2c: 0x8c910718  lw          $s1, 0x718($a0)
    ctx->pc = 0x1f7f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1816)));
    // 0x1f7f30: 0x12200199  beqz        $s1, . + 4 + (0x199 << 2)
    ctx->pc = 0x1F7F30u;
    {
        const bool branch_taken_0x1f7f30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7f30) {
            ctx->pc = 0x1F8598u;
            goto label_1f8598;
        }
    }
    ctx->pc = 0x1F7F38u;
    // 0x1f7f38: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x1f7f38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1f7f3c: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x1f7f3cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f7f40: 0x7fa60250  sq          $a2, 0x250($sp)
    ctx->pc = 0x1f7f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 6));
    // 0x1f7f44: 0x48a61800  qmtc2.ni    $a2, $vf3
    ctx->pc = 0x1f7f44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1f7f48: 0xda410020  lqc2        $vf1, 0x20($s2)
    ctx->pc = 0x1f7f48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1f7f4c: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x1f7f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x1f7f50: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1f7f50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f54: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x1f7f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f7f58: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1f7f58u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f7f5c: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1f7f5cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1f7f60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f7f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7f64: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x1f7f64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7f68: 0x0  nop
    ctx->pc = 0x1f7f68u;
    // NOP
    // 0x1f7f6c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1F7F6Cu;
    {
        const bool branch_taken_0x1f7f6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7F6Cu;
            // 0x1f7f70: 0xdba10110  lqc2        $vf1, 0x110($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f6c) {
            ctx->pc = 0x1F7FA0u;
            goto label_1f7fa0;
        }
    }
    ctx->pc = 0x1F7F74u;
    // 0x1f7f74: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1f7f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1f7f78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f7f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7f7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f7f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f7f80: 0x46000004  c1          0x4
    ctx->pc = 0x1f7f80u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f7f84: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f7f84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f7f88: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1f7f88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1f7f8c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1f7f8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f7f90: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1f7f90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f94: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x1f7f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f7f98: 0xdba10110  lqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1f7f98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f7f9c: 0x0  nop
    ctx->pc = 0x1f7f9cu;
    // NOP
label_1f7fa0:
    // 0x1f7fa0: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1f7fa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f7fa4: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1f7fa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f7fa8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f7fac: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1f7facu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f7fb0: 0xc441e3ac  lwc1        $f1, -0x1C54($v0)
    ctx->pc = 0x1f7fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7fb4: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x1f7fb4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f7fb8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1f7fb8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7fbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f7fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f7fc0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f7fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f7fc4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1f7fc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1f7fc8: 0x46000504  c1          0x504
    ctx->pc = 0x1f7fc8u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f7fcc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f7fd0: 0xc440e3b0  lwc1        $f0, -0x1C50($v0)
    ctx->pc = 0x1f7fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7fd4: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x1f7fd4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[1];
    // 0x1f7fd8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f7fdc: 0xc443e3b4  lwc1        $f3, -0x1C4C($v0)
    ctx->pc = 0x1f7fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f7fe0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f7fe4: 0xc444e3bc  lwc1        $f4, -0x1C44($v0)
    ctx->pc = 0x1f7fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f7fe8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f7fec: 0x8c43e3c0  lw          $v1, -0x1C40($v0)
    ctx->pc = 0x1f7fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
    // 0x1f7ff0: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x1f7ff0u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
    // 0x1f7ff4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f7ff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f7ff8: 0x46030dc2  mul.s       $f23, $f1, $f3
    ctx->pc = 0x1f7ff8u;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1f7ffc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f7ffcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f8000: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1f8000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1f8004: 0x46172034  c.lt.s      $f4, $f23
    ctx->pc = 0x1f8004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8008: 0x4600b806  mov.s       $f0, $f23
    ctx->pc = 0x1f8008u;
    ctx->f[0] = FPU_MOV_S(ctx->f[23]);
    // 0x1f800c: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x1f800cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f8010: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8010u;
    {
        const bool branch_taken_0x1f8010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8010u;
            // 0x1f8014: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8010) {
            ctx->pc = 0x1F8020u;
            goto label_1f8020;
        }
    }
    ctx->pc = 0x1F8018u;
    // 0x1f8018: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x1f8018u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
    // 0x1f801c: 0x0  nop
    ctx->pc = 0x1f801cu;
    // NOP
label_1f8020:
    // 0x1f8020: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f8020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f8024: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f8024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f8028: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f8028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f802c: 0xc44ce3a0  lwc1        $f12, -0x1C60($v0)
    ctx->pc = 0x1f802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f8030: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x1f8030u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x1f8034: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1f8034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1f8038: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1f8038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1f803c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f803cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8040: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x1f8040u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x1f8044: 0xc060e80  jal         func_183A00
    ctx->pc = 0x1F8044u;
    SET_GPR_U32(ctx, 31, 0x1F804Cu);
    ctx->pc = 0x1F8048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8044u;
            // 0x1f8048: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183A00u;
    if (runtime->hasFunction(0x183A00u)) {
        auto targetFn = runtime->lookupFunction(0x183A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F804Cu; }
        if (ctx->pc != 0x1F804Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183a00_0x183ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F804Cu; }
        if (ctx->pc != 0x1F804Cu) { return; }
    }
    ctx->pc = 0x1F804Cu;
    // 0x1f804c: 0x4600a582  mul.s       $f22, $f20, $f0
    ctx->pc = 0x1f804cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1f8050: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f8050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f8054: 0xc440e3c4  lwc1        $f0, -0x1C3C($v0)
    ctx->pc = 0x1f8054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8058: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f8058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f805c: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1f805cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8060: 0x0  nop
    ctx->pc = 0x1f8060u;
    // NOP
    // 0x1f8064: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8064u;
    {
        const bool branch_taken_0x1f8064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8064u;
            // 0x1f8068: 0x4600b046  mov.s       $f1, $f22 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8064) {
            ctx->pc = 0x1F8070u;
            goto label_1f8070;
        }
    }
    ctx->pc = 0x1F806Cu;
    // 0x1f806c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1f806cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1f8070:
    // 0x1f8070: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x1f8070u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f8074: 0x46000d86  mov.s       $f22, $f1
    ctx->pc = 0x1f8074u;
    ctx->f[22] = FPU_MOV_S(ctx->f[1]);
    // 0x1f8078: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1f8078u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f807c: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x1f807cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
    // 0x1f8080: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1f8080u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f8084: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1f8084u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8088: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f8088u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f808c: 0xdba30180  lqc2        $vf3, 0x180($sp)
    ctx->pc = 0x1f808cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1f8090: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1f8090u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f8094: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1f8094u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f8098: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f8098u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f809c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1f809cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f80a0: 0x4a0002ff  vnop
    ctx->pc = 0x1f80a0u;
    // NOP operation, no action needed for VU0
    // 0x1f80a4: 0x4a0002ff  vnop
    ctx->pc = 0x1f80a4u;
    // NOP operation, no action needed for VU0
    // 0x1f80a8: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x1f80a8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1f80ac: 0xfba10260  sqc2        $vf1, 0x260($sp)
    ctx->pc = 0x1f80acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f80b0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f80b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f80b4: 0xdba40260  lqc2        $vf4, 0x260($sp)
    ctx->pc = 0x1f80b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1f80b8: 0x4bc41afe  vopmula.xyz $ACC, $vf3, $vf4
    ctx->pc = 0x1f80b8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]);
    // 0x1f80bc: 0x4bc320ae  vopmsub.xyz $vf2, $vf4, $vf3
    ctx->pc = 0x1f80bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f80c0: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1f80c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f80c4: 0x4be2112a  vmul.xyzw   $vf4, $vf2, $vf2
    ctx->pc = 0x1f80c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f80c8: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1f80c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f80cc: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1f80ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f80d0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1f80d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f80d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f80d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f80d8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1f80d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f80dc: 0x4a0002ff  vnop
    ctx->pc = 0x1f80dcu;
    // NOP operation, no action needed for VU0
    // 0x1f80e0: 0x4a0002ff  vnop
    ctx->pc = 0x1f80e0u;
    // NOP operation, no action needed for VU0
    // 0x1f80e4: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x1f80e4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]);
    // 0x1f80e8: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1f80e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f80ec: 0x4bc218ee  vopmsub.xyz $vf3, $vf3, $vf2
    ctx->pc = 0x1f80ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f80f0: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x1f80f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f80f4: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1f80f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f80f8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1f80f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f80fc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1f80fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8100: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f8100u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8104: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1f8104u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f8108: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f8108u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f810c: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1f810cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f8110: 0x4a0002ff  vnop
    ctx->pc = 0x1f8110u;
    // NOP operation, no action needed for VU0
    // 0x1f8114: 0x4a0002ff  vnop
    ctx->pc = 0x1f8114u;
    // NOP operation, no action needed for VU0
    // 0x1f8118: 0xfba30150  sqc2        $vf3, 0x150($sp)
    ctx->pc = 0x1f8118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f811c: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1f811cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f8120: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1f8120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f8124: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f8124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8128: 0xc056df8  jal         func_15B7E0
    ctx->pc = 0x1F8128u;
    SET_GPR_U32(ctx, 31, 0x1F8130u);
    ctx->pc = 0x1F812Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8128u;
            // 0x1f812c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B7E0u;
    if (runtime->hasFunction(0x15B7E0u)) {
        auto targetFn = runtime->lookupFunction(0x15B7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8130u; }
        if (ctx->pc != 0x1F8130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B7E0_0x15b7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8130u; }
        if (ctx->pc != 0x1F8130u) { return; }
    }
    ctx->pc = 0x1F8130u;
label_1f8130:
    // 0x1f8130: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1f8130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1f8134:
    // 0x1f8134: 0x10400117  beqz        $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x1F8134u;
    {
        const bool branch_taken_0x1f8134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8134u;
            // 0x1f8138: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8134) {
            ctx->pc = 0x1F8594u;
            goto label_1f8594;
        }
    }
    ctx->pc = 0x1F813Cu;
    // 0x1f813c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x1f813cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f8140: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f8140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f8144: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f8144u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8148: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1f8148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f814c: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1f814cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f8150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f8150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f8154: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f8154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f8158: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f8158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f815c: 0x306300fc  andi        $v1, $v1, 0xFC
    ctx->pc = 0x1f815cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
    // 0x1f8160: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f8160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f8164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f8168: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f8168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f816c: 0x3c10002d  lui         $s0, 0x2D
    ctx->pc = 0x1f816cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)45 << 16));
    // 0x1f8170: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f8170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f8174: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f8174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f8178: 0x2610b950  addiu       $s0, $s0, -0x46B0
    ctx->pc = 0x1f8178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949200));
    // 0x1f817c: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1F817Cu;
    SET_GPR_U32(ctx, 31, 0x1F8184u);
    ctx->pc = 0x1F8180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F817Cu;
            // 0x1f8180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8184u; }
        if (ctx->pc != 0x1F8184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8184u; }
        if (ctx->pc != 0x1F8184u) { return; }
    }
    ctx->pc = 0x1F8184u;
    // 0x1f8184: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1f8184u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1f8188: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1F8188u;
    SET_GPR_U32(ctx, 31, 0x1F8190u);
    ctx->pc = 0x1F818Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8188u;
            // 0x1f818c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8190u; }
        if (ctx->pc != 0x1F8190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8190u; }
        if (ctx->pc != 0x1F8190u) { return; }
    }
    ctx->pc = 0x1F8190u;
    // 0x1f8190: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1f8190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1f8194: 0xdba30180  lqc2        $vf3, 0x180($sp)
    ctx->pc = 0x1f8194u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1f8198: 0xdba50260  lqc2        $vf5, 0x260($sp)
    ctx->pc = 0x1f8198u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1f819c: 0x4be518aa  vmul.xyzw   $vf2, $vf3, $vf5
    ctx->pc = 0x1f819cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f81a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f81a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1f81a4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1f81a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f81a8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f81a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f81ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f81acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f81b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f81b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f81b4: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x1f81b4u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f81b8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1f81b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f81bc: 0x48a33800  qmtc2.ni    $v1, $vf7
    ctx->pc = 0x1f81bcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1f81c0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1f81c0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f81c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f81c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f81c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f81c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f81cc: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1f81ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1f81d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f81d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f81d4: 0xdba80120  lqc2        $vf8, 0x120($sp)
    ctx->pc = 0x1f81d4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f81d8: 0x4be741d8  vmulx.xyzw  $vf7, $vf8, $vf7x
    ctx->pc = 0x1f81d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f81dc: 0xfba70130  sqc2        $vf7, 0x130($sp)
    ctx->pc = 0x1f81dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1f81e0: 0x4406b000  mfc1        $a2, $f22
    ctx->pc = 0x1f81e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f81e4: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1f81e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1f81e8: 0x4be239d8  vmulx.xyzw  $vf7, $vf7, $vf2x
    ctx->pc = 0x1f81e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f81ec: 0xfba70140  sqc2        $vf7, 0x140($sp)
    ctx->pc = 0x1f81ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1f81f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1f81f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f81f4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1f81f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1f81f8: 0xfba10270  sqc2        $vf1, 0x270($sp)
    ctx->pc = 0x1f81f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f81fc: 0x4be139d8  vmulx.xyzw  $vf7, $vf7, $vf1x
    ctx->pc = 0x1f81fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f8200: 0xdba40250  lqc2        $vf4, 0x250($sp)
    ctx->pc = 0x1f8200u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1f8204: 0x4be721e8  vadd.xyzw   $vf7, $vf4, $vf7
    ctx->pc = 0x1f8204u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f8208: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x1f8208u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x1f820c: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x1f820cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f8210: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1f8210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1f8214: 0x7ba40150  lq          $a0, 0x150($sp)
    ctx->pc = 0x1f8214u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f8218: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x1f8218u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f821c: 0x7fa40280  sq          $a0, 0x280($sp)
    ctx->pc = 0x1f821cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 4));
    // 0x1f8220: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1f8220u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8224: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x1f8224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8228: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f8228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f822c: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x1f822cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f8230: 0xfba50290  sqc2        $vf5, 0x290($sp)
    ctx->pc = 0x1f8230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1f8234: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x1f8234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8238: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x1f8238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f823c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1f823cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8240: 0x4be139e8  vadd.xyzw   $vf7, $vf7, $vf1
    ctx->pc = 0x1f8240u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f8244: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f8244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f8248: 0x8c44e39c  lw          $a0, -0x1C64($v0)
    ctx->pc = 0x1f8248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960028)));
    // 0x1f824c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1f824cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f8250: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1f8250u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f8254: 0xfba30190  sqc2        $vf3, 0x190($sp)
    ctx->pc = 0x1f8254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f8258: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1f8258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1f825c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1f825cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f8260: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1f8260u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f8264: 0x4be339e8  vadd.xyzw   $vf7, $vf7, $vf3
    ctx->pc = 0x1f8264u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f8268: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1f8268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1f826c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1f826cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1f8270: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1f8270u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1f8274: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1f8274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1f8278: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1f8278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1f827c: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1f827cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1f8280: 0xfba702a0  sqc2        $vf7, 0x2A0($sp)
    ctx->pc = 0x1f8280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1f8284: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1f8284u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f8288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f828c: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x1f828cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x1f8290: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1f8290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1f8294: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1F8294u;
    SET_GPR_U32(ctx, 31, 0x1F829Cu);
    ctx->pc = 0x1F8298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8294u;
            // 0x1f8298: 0xfba802b0  sqc2        $vf8, 0x2B0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[8]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F829Cu; }
        if (ctx->pc != 0x1F829Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F829Cu; }
        if (ctx->pc != 0x1F829Cu) { return; }
    }
    ctx->pc = 0x1F829Cu;
    // 0x1f829c: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x1f829cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x1f82a0: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1f82a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1f82a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f82a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f82a8: 0x3c014048  lui         $at, 0x4048
    ctx->pc = 0x1f82a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16456 << 16));
    // 0x1f82ac: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1f82acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1f82b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f82b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f82b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f82b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f82b8: 0x7ba20180  lq          $v0, 0x180($sp)
    ctx->pc = 0x1f82b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1f82bc: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x1f82bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x1f82c0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1f82c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1f82c4: 0x46150302  mul.s       $f12, $f0, $f21
    ctx->pc = 0x1f82c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f82c8: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x1F82C8u;
    SET_GPR_U32(ctx, 31, 0x1F82D0u);
    ctx->pc = 0x1F82CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F82C8u;
            // 0x1f82cc: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82D0u; }
        if (ctx->pc != 0x1F82D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82D0u; }
        if (ctx->pc != 0x1F82D0u) { return; }
    }
    ctx->pc = 0x1F82D0u;
    // 0x1f82d0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1f82d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f82d4: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1f82d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1f82d8: 0xdba101d0  lqc2        $vf1, 0x1D0($sp)
    ctx->pc = 0x1f82d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1f82dc: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1f82dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f82e0: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x1f82e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f82e4: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1f82e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1f82e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1f82e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1f82ec: 0xdba30240  lqc2        $vf3, 0x240($sp)
    ctx->pc = 0x1f82ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1f82f0: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x1f82f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f82f4: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x1f82f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f82f8: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1F82F8u;
    SET_GPR_U32(ctx, 31, 0x1F8300u);
    ctx->pc = 0x1F82FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F82F8u;
            // 0x1f82fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8300u; }
        if (ctx->pc != 0x1F8300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8300u; }
        if (ctx->pc != 0x1F8300u) { return; }
    }
    ctx->pc = 0x1F8300u;
    // 0x1f8300: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1f8300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1f8304: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f8304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f8308: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1f8308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1f830c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f830cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f8310: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f8310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f8314: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f8314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1f8318: 0xdba401b0  lqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x1f8318u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1f831c: 0xdba50290  lqc2        $vf5, 0x290($sp)
    ctx->pc = 0x1f831cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1f8320: 0x4be52058  vmulx.xyzw  $vf1, $vf4, $vf5x
    ctx->pc = 0x1f8320u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8324: 0x4be120da  vmulz.xyzw  $vf3, $vf4, $vf1z
    ctx->pc = 0x1f8324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f8328: 0x4be12159  vmuly.xyzw  $vf5, $vf4, $vf1y
    ctx->pc = 0x1f8328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1f832c: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1f832cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f8330: 0x4a832842  vaddz.y     $vf1, $vf5, $vf3z
    ctx->pc = 0x1f8330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8334: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f8334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8338: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x1f8338u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f833c: 0x4b013045  vsuby.x     $vf1, $vf6, $vf1y
    ctx->pc = 0x1f833cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8340: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1f8340u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8344: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f8344u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8348: 0x4b032883  vaddw.x     $vf2, $vf5, $vf3w
    ctx->pc = 0x1f8348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f834c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1f834cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f8350: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f8350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8354: 0x4b051847  vsubw.x     $vf1, $vf3, $vf5w
    ctx->pc = 0x1f8354u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8358: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1f8358u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f835c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f835cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8360: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1f8360u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8364: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f8364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8368: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1f8368u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1f836c: 0x4b032847  vsubw.x     $vf1, $vf5, $vf3w
    ctx->pc = 0x1f836cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8370: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1f8370u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f8374: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1f8374u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8378: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f8378u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f837c: 0x48a45000  qmtc2.ni    $a0, $vf10
    ctx->pc = 0x1f837cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f8380: 0xfbaa00d0  sqc2        $vf10, 0xD0($sp)
    ctx->pc = 0x1f8380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1f8384: 0x4b032042  vaddz.x     $vf1, $vf4, $vf3z
    ctx->pc = 0x1f8384u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8388: 0x4b013044  vsubx.x     $vf1, $vf6, $vf1x
    ctx->pc = 0x1f8388u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f838c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1f838cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8390: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f8390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8394: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1f8394u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f8398: 0x4a841843  vaddw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1f8398u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f839c: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1f839cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f83a0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1f83a0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f83a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f83a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f83a8: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1f83a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1f83ac: 0x4a841847  vsubw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1f83acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f83b0: 0x704334c8  ppacw       $a2, $v0, $v1
    ctx->pc = 0x1f83b0u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f83b4: 0x4b0518c3  vaddw.x     $vf3, $vf3, $vf5w
    ctx->pc = 0x1f83b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f83b8: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1f83b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f83bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f83bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f83c0: 0x48a64800  qmtc2.ni    $a2, $vf9
    ctx->pc = 0x1f83c0u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1f83c4: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1f83c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f83c8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1f83c8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f83cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f83ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f83d0: 0x4b052101  vaddy.x     $vf4, $vf4, $vf5y
    ctx->pc = 0x1f83d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f83d4: 0xfba900e0  sqc2        $vf9, 0xE0($sp)
    ctx->pc = 0x1f83d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1f83d8: 0x4b043184  vsubx.x     $vf6, $vf6, $vf4x
    ctx->pc = 0x1f83d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1f83dc: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1f83dcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f83e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f83e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f83e4: 0x48243000  qmfc2.ni    $a0, $vf6
    ctx->pc = 0x1f83e4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1f83e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f83e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f83ec: 0xdba802b0  lqc2        $vf8, 0x2B0($sp)
    ctx->pc = 0x1f83ecu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1f83f0: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1f83f0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1f83f4: 0x4be851bc  vmulax.xyzw $ACC, $vf10, $vf8x
    ctx->pc = 0x1f83f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f83f8: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1f83f8u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f83fc: 0x4be848bd  vmadday.xyzw $ACC, $vf9, $vf8y
    ctx->pc = 0x1f83fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f8400: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1f8400u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f8404: 0xdba200c0  lqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x1f8404u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f8408: 0x4be808be  vmaddaz.xyzw $ACC, $vf1, $vf8z
    ctx->pc = 0x1f8408u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f840c: 0x4be8120b  vmaddw.xyzw $vf8, $vf2, $vf8w
    ctx->pc = 0x1f840cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f8410: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1f8410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8414: 0xfbaa0090  sqc2        $vf10, 0x90($sp)
    ctx->pc = 0x1f8414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1f8418: 0xfba900a0  sqc2        $vf9, 0xA0($sp)
    ctx->pc = 0x1f8418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1f841c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1f841cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8420: 0xfba801e0  sqc2        $vf8, 0x1E0($sp)
    ctx->pc = 0x1f8420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1f8424: 0x4406b800  mfc1        $a2, $f23
    ctx->pc = 0x1f8424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f8428: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x1f8428u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1f842c: 0x4be44218  vmulx.xyzw  $vf8, $vf8, $vf4x
    ctx->pc = 0x1f842cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f8430: 0xfba801f0  sqc2        $vf8, 0x1F0($sp)
    ctx->pc = 0x1f8430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1f8434: 0xdba30270  lqc2        $vf3, 0x270($sp)
    ctx->pc = 0x1f8434u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1f8438: 0x4be34218  vmulx.xyzw  $vf8, $vf8, $vf3x
    ctx->pc = 0x1f8438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f843c: 0xfba80200  sqc2        $vf8, 0x200($sp)
    ctx->pc = 0x1f843cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1f8440: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1f8440u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f8444: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1f8444u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1f8448: 0x4be34218  vmulx.xyzw  $vf8, $vf8, $vf3x
    ctx->pc = 0x1f8448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f844c: 0xdba50280  lqc2        $vf5, 0x280($sp)
    ctx->pc = 0x1f844cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1f8450: 0x4be551bc  vmulax.xyzw $ACC, $vf10, $vf5x
    ctx->pc = 0x1f8450u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f8454: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x1f8454u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f8458: 0x4be508be  vmaddaz.xyzw $ACC, $vf1, $vf5z
    ctx->pc = 0x1f8458u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f845c: 0x4be5108b  vmaddw.xyzw $vf2, $vf2, $vf5w
    ctx->pc = 0x1f845cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f8460: 0xfba20210  sqc2        $vf2, 0x210($sp)
    ctx->pc = 0x1f8460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f8464: 0x4be41098  vmulx.xyzw  $vf2, $vf2, $vf4x
    ctx->pc = 0x1f8464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f8468: 0xfba20220  sqc2        $vf2, 0x220($sp)
    ctx->pc = 0x1f8468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f846c: 0xdba10270  lqc2        $vf1, 0x270($sp)
    ctx->pc = 0x1f846cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1f8470: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1f8470u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f8474: 0xfba20230  sqc2        $vf2, 0x230($sp)
    ctx->pc = 0x1f8474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f8478: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x1f8478u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f847c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1f847cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1f8480: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1f8480u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1f8484: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1f8484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f8488: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f8488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f848c: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1f848cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1f8490: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f8490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f8494: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f8494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f8498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f849c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f849cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f84a0: 0xdba702a0  lqc2        $vf7, 0x2A0($sp)
    ctx->pc = 0x1f84a0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1f84a4: 0x4bc13b3c  vmove.xyz   $vf1, $vf7
    ctx->pc = 0x1f84a4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[7];
    // 0x1f84a8: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f84a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f84ac: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1f84acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1f84b0: 0xdba301a0  lqc2        $vf3, 0x1A0($sp)
    ctx->pc = 0x1f84b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1f84b4: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1f84b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f84b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f84bc: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1f84bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1f84c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f84c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f84c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f84c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f84cc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f84ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f84d0: 0x4bc11b3c  vmove.xyz   $vf1, $vf3
    ctx->pc = 0x1f84d0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1f84d4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f84d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f84d8: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x1f84d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f84dc: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1f84dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f84e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f84e4: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1f84e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1f84e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f84e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f84ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f84f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f84f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f84f4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f84f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f84f8: 0x4bc1433c  vmove.xyz   $vf1, $vf8
    ctx->pc = 0x1f84f8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[8];
    // 0x1f84fc: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f84fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8500: 0x90830005  lbu         $v1, 0x5($a0)
    ctx->pc = 0x1f8500u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1f8504: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1f8504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f8508: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f8508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f850c: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1f850cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1f8510: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1f8510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f8514: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1f8514u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8518: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1f8518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1f851c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1f851cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f8520: 0x4bc1133c  vmove.xyz   $vf1, $vf2
    ctx->pc = 0x1f8520u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1f8524: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1f8524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1f8528: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f8528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f852c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1f852cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f8530: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f8530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f8534: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1f8534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1f8538: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1f8538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1f853c: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1f853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1f8540: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1f8540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1f8544: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1f8544u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8548: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1f8548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f854c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f8550: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1f8550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1f8554: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x1f8554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x1f8558: 0x1440fef5  bnez        $v0, . + 4 + (-0x10B << 2)
    ctx->pc = 0x1F8558u;
    {
        const bool branch_taken_0x1f8558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F855Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8558u;
            // 0x1f855c: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8558) {
            ctx->pc = 0x1F8130u;
            runtime->cooperativeGuestYield();
            goto label_1f8130;
        }
    }
    ctx->pc = 0x1F8560u;
    // 0x1f8560: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x1f8560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1f8564: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8564u;
    {
        const bool branch_taken_0x1f8564 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8564u;
            // 0x1f8568: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8564) {
            ctx->pc = 0x1F8578u;
            goto label_1f8578;
        }
    }
    ctx->pc = 0x1F856Cu;
    // 0x1f856c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1f856cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1f8570: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1F8570u;
    SET_GPR_U32(ctx, 31, 0x1F8578u);
    ctx->pc = 0x1F8574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8570u;
            // 0x1f8574: 0x8fa5006c  lw          $a1, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8578u; }
        if (ctx->pc != 0x1F8578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8578u; }
        if (ctx->pc != 0x1F8578u) { return; }
    }
    ctx->pc = 0x1F8578u;
label_1f8578:
    // 0x1f8578: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f8578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f857c: 0x1040feed  beqz        $v0, . + 4 + (-0x113 << 2)
    ctx->pc = 0x1F857Cu;
    {
        const bool branch_taken_0x1f857c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F857Cu;
            // 0x1f8580: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f857c) {
            ctx->pc = 0x1F8134u;
            runtime->cooperativeGuestYield();
            goto label_1f8134;
        }
    }
    ctx->pc = 0x1F8584u;
    // 0x1f8584: 0xc056dd2  jal         func_15B748
    ctx->pc = 0x1F8584u;
    SET_GPR_U32(ctx, 31, 0x1F858Cu);
    ctx->pc = 0x1F8588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8584u;
            // 0x1f8588: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B748u;
    if (runtime->hasFunction(0x15B748u)) {
        auto targetFn = runtime->lookupFunction(0x15B748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F858Cu; }
        if (ctx->pc != 0x1F858Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B748_0x15b748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F858Cu; }
        if (ctx->pc != 0x1F858Cu) { return; }
    }
    ctx->pc = 0x1F858Cu;
    // 0x1f858c: 0x1000fee9  b           . + 4 + (-0x117 << 2)
    ctx->pc = 0x1F858Cu;
    {
        const bool branch_taken_0x1f858c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F858Cu;
            // 0x1f8590: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f858c) {
            ctx->pc = 0x1F8134u;
            runtime->cooperativeGuestYield();
            goto label_1f8134;
        }
    }
    ctx->pc = 0x1F8594u;
label_1f8594:
    // 0x1f8594: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f8594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8598:
    // 0x1f8598: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1f8598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1f859c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f859cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f85a0: 0xc6c0c658  lwc1        $f0, -0x39A8($s6)
    ctx->pc = 0x1f85a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f85a4: 0x96430030  lhu         $v1, 0x30($s2)
    ctx->pc = 0x1f85a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1f85a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f85a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f85ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f85acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f85b0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f85b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f85b4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1f85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f85b8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F85B8u;
    {
        const bool branch_taken_0x1f85b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1f85b8) {
            ctx->pc = 0x1F85BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F85B8u;
            // 0x1f85bc: 0x92620731  lbu         $v0, 0x731($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1841)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F85CCu;
            goto label_1f85cc;
        }
    }
    ctx->pc = 0x1F85C0u;
    // 0x1f85c0: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F85C0u;
    {
        const bool branch_taken_0x1f85c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f85c0) {
            ctx->pc = 0x1F85C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F85C0u;
            // 0x1f85c4: 0xa6420030  sh          $v0, 0x30($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F85DCu;
            goto label_1f85dc;
        }
    }
    ctx->pc = 0x1F85C8u;
    // 0x1f85c8: 0x92620731  lbu         $v0, 0x731($s3)
    ctx->pc = 0x1f85c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1841)));
label_1f85cc:
    // 0x1f85cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f85d0: 0xa2620731  sb          $v0, 0x731($s3)
    ctx->pc = 0x1f85d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1841), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f85d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F85D4u;
    {
        const bool branch_taken_0x1f85d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F85D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F85D4u;
            // 0x1f85d8: 0xa2400032  sb          $zero, 0x32($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85d4) {
            ctx->pc = 0x1F85E0u;
            goto label_1f85e0;
        }
    }
    ctx->pc = 0x1F85DCu;
label_1f85dc:
    // 0x1f85dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f85dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f85e0:
    // 0x1f85e0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1f85e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1f85e4: 0x2ea20010  sltiu       $v0, $s5, 0x10
    ctx->pc = 0x1f85e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f85e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F85E8u;
    {
        const bool branch_taken_0x1f85e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F85ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F85E8u;
            // 0x1f85ec: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85e8) {
            ctx->pc = 0x1F8600u;
            goto label_1f8600;
        }
    }
    ctx->pc = 0x1F85F0u;
    // 0x1f85f0: 0x92620731  lbu         $v0, 0x731($s3)
    ctx->pc = 0x1f85f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1841)));
    // 0x1f85f4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1f85f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f85f8: 0x5440fe0b  bnel        $v0, $zero, . + 4 + (-0x1F5 << 2)
    ctx->pc = 0x1F85F8u;
    {
        const bool branch_taken_0x1f85f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f85f8) {
            ctx->pc = 0x1F85FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F85F8u;
            // 0x1f85fc: 0x92420032  lbu         $v0, 0x32($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7E28u;
            runtime->cooperativeGuestYield();
            goto label_1f7e28;
        }
    }
    ctx->pc = 0x1F8600u;
label_1f8600:
    // 0x1f8600: 0x7bb00330  lq          $s0, 0x330($sp)
    ctx->pc = 0x1f8600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1f8604: 0x7bb10320  lq          $s1, 0x320($sp)
    ctx->pc = 0x1f8604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f8608: 0x7bb20310  lq          $s2, 0x310($sp)
    ctx->pc = 0x1f8608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1f860c: 0x7bb30300  lq          $s3, 0x300($sp)
    ctx->pc = 0x1f860cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1f8610: 0x7bb402f0  lq          $s4, 0x2F0($sp)
    ctx->pc = 0x1f8610u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1f8614: 0x7bb502e0  lq          $s5, 0x2E0($sp)
    ctx->pc = 0x1f8614u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1f8618: 0x7bb602d0  lq          $s6, 0x2D0($sp)
    ctx->pc = 0x1f8618u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1f861c: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x1f861cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x1f8620: 0xc7b70358  lwc1        $f23, 0x358($sp)
    ctx->pc = 0x1f8620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f8624: 0xc7b60350  lwc1        $f22, 0x350($sp)
    ctx->pc = 0x1f8624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f8628: 0xc7b50348  lwc1        $f21, 0x348($sp)
    ctx->pc = 0x1f8628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f862c: 0xc7b40340  lwc1        $f20, 0x340($sp)
    ctx->pc = 0x1f862cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f8630: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8630u;
            // 0x1f8634: 0x27bd0360  addiu       $sp, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7E28u: goto label_1f7e28;
            case 0x1F7FA0u: goto label_1f7fa0;
            case 0x1F8020u: goto label_1f8020;
            case 0x1F8070u: goto label_1f8070;
            case 0x1F8130u: goto label_1f8130;
            case 0x1F8134u: goto label_1f8134;
            case 0x1F8578u: goto label_1f8578;
            case 0x1F8594u: goto label_1f8594;
            case 0x1F8598u: goto label_1f8598;
            case 0x1F85CCu: goto label_1f85cc;
            case 0x1F85DCu: goto label_1f85dc;
            case 0x1F85E0u: goto label_1f85e0;
            case 0x1F8600u: goto label_1f8600;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F8638u;
}
