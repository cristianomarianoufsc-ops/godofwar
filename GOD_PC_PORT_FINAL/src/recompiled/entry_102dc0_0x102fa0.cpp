#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_102dc0
// Address: 0x102dc0 - 0x102fa0
void entry_102dc0_0x102fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_102dc0_0x102fa0");
#endif

    ctx->pc = 0x102dc0u;

    // 0x102dc0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x102dc0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x102dc4: 0x8c89000c  lw          $t1, 0xC($a0)
    ctx->pc = 0x102dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x102dc8: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x102dc8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x102dcc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x102dccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x102dd0: 0x19800031  blez        $t4, . + 4 + (0x31 << 2)
    ctx->pc = 0x102DD0u;
    {
        const bool branch_taken_0x102dd0 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x102DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102DD0u;
            // 0x102dd4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102dd0) {
            ctx->pc = 0x102E98u;
            goto label_102e98;
        }
    }
    ctx->pc = 0x102DD8u;
    // 0x102dd8: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x102dd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ddc: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x102ddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102de0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x102de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102de4: 0x0  nop
    ctx->pc = 0x102de4u;
    // NOP
label_102de8:
    // 0x102de8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x102de8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x102dec: 0xd8e30020  lqc2        $vf3, 0x20($a3)
    ctx->pc = 0x102decu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x102df0: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x102df0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102df4: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x102df4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102df8: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x102df8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102dfc: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x102dfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102e00: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x102e00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x102e04: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x102e04u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x102e08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x102e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102e0c: 0x46000004  c1          0x4
    ctx->pc = 0x102e0cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x102e10: 0x169102a  slt         $v0, $t3, $t1
    ctx->pc = 0x102e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x102e14: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x102E14u;
    {
        const bool branch_taken_0x102e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102E14u;
            // 0x102e18: 0xe5000004  swc1        $f0, 0x4($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e14) {
            ctx->pc = 0x102E80u;
            goto label_102e80;
        }
    }
    ctx->pc = 0x102E1Cu;
    // 0x102e1c: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x102e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x102e20: 0x24e50040  addiu       $a1, $a3, 0x40
    ctx->pc = 0x102e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x102e24: 0x0  nop
    ctx->pc = 0x102e24u;
    // NOP
label_102e28:
    // 0x102e28: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x102e28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102e2c: 0x4be4186c  vsub.xyzw   $vf1, $vf3, $vf4
    ctx->pc = 0x102e2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102e30: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x102e30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102e34: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x102e34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102e38: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x102e38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102e3c: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x102e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x102e40: 0x482e1000  qmfc2.ni    $t6, $vf2
    ctx->pc = 0x102e40u;
    SET_GPR_VEC(ctx, 14, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x102e44: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x102e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x102e48: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x102e48u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102e4c: 0x46000004  c1          0x4
    ctx->pc = 0x102e4cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x102e50: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x102e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x102e54: 0xc440fff4  lwc1        $f0, -0xC($v0)
    ctx->pc = 0x102e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x102e58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x102e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102e5c: 0x0  nop
    ctx->pc = 0x102e5cu;
    // NOP
    // 0x102e60: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x102E60u;
    {
        const bool branch_taken_0x102e60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x102e60) {
            ctx->pc = 0x102E64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x102E60u;
            // 0x102e64: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x102E68u;
            goto label_102e68;
        }
    }
    ctx->pc = 0x102E68u;
label_102e68:
    // 0x102e68: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x102e68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x102e6c: 0x4be3233c  vmove.xyzw  $vf3, $vf4
    ctx->pc = 0x102e6cu;
    ctx->vu0_vf[3] = ctx->vu0_vf[4];
    // 0x102e70: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x102e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x102e74: 0x169102a  slt         $v0, $t3, $t1
    ctx->pc = 0x102e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x102e78: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x102E78u;
    {
        const bool branch_taken_0x102e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102E78u;
            // 0x102e7c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e78) {
            ctx->pc = 0x102E28u;
            runtime->cooperativeGuestYield();
            goto label_102e28;
        }
    }
    ctx->pc = 0x102E80u;
label_102e80:
    // 0x102e80: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x102e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x102e84: 0x91940  sll         $v1, $t1, 5
    ctx->pc = 0x102e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x102e88: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x102e88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x102e8c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x102e8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x102e90: 0x1540ffd5  bnez        $t2, . + 4 + (-0x2B << 2)
    ctx->pc = 0x102E90u;
    {
        const bool branch_taken_0x102e90 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x102E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102E90u;
            // 0x102e94: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e90) {
            ctx->pc = 0x102DE8u;
            runtime->cooperativeGuestYield();
            goto label_102de8;
        }
    }
    ctx->pc = 0x102E98u;
label_102e98:
    // 0x102e98: 0x1980003f  blez        $t4, . + 4 + (0x3F << 2)
    ctx->pc = 0x102E98u;
    {
        const bool branch_taken_0x102e98 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x102E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102E98u;
            // 0x102e9c: 0x180502d  daddu       $t2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e98) {
            ctx->pc = 0x102F98u;
            goto label_102f98;
        }
    }
    ctx->pc = 0x102EA0u;
    // 0x102ea0: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x102ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ea4: 0x91140  sll         $v0, $t1, 5
    ctx->pc = 0x102ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_102ea8:
    // 0x102ea8: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x102ea8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102eac: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x102eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x102eb0: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x102eb0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102eb4: 0x4be3286c  vsub.xyzw   $vf1, $vf5, $vf3
    ctx->pc = 0x102eb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102eb8: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x102eb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102ebc: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x102ebcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102ec0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x102ec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102ec4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x102ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102ec8: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x102ec8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x102ecc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x102eccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102ed0: 0x46000004  c1          0x4
    ctx->pc = 0x102ed0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x102ed4: 0x109102a  slt         $v0, $t0, $t1
    ctx->pc = 0x102ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x102ed8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x102ED8u;
    {
        const bool branch_taken_0x102ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102ED8u;
            // 0x102edc: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ed8) {
            ctx->pc = 0x102F80u;
            goto label_102f80;
        }
    }
    ctx->pc = 0x102EE0u;
    // 0x102ee0: 0x24660020  addiu       $a2, $v1, 0x20
    ctx->pc = 0x102ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x102ee4: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x102ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x102ee8: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x102ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x102eec: 0x2528ffff  addiu       $t0, $t1, -0x1
    ctx->pc = 0x102eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_102ef0:
    // 0x102ef0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x102ef0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102ef4: 0x4be320ac  vsub.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x102ef4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102ef8: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x102ef8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x102efc: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x102efcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102f00: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x102f00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102f04: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x102f04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102f08: 0x482b0800  qmfc2.ni    $t3, $vf1
    ctx->pc = 0x102f08u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102f0c: 0x4be320ac  vsub.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x102f0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102f10: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x102f10u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102f14: 0x46000004  c1          0x4
    ctx->pc = 0x102f14u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x102f18: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x102f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x102f1c: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x102f1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102f20: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x102f20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102f24: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x102f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102f28: 0x482e0800  qmfc2.ni    $t6, $vf1
    ctx->pc = 0x102f28u;
    SET_GPR_VEC(ctx, 14, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102f2c: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x102f2cu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102f30: 0x46000004  c1          0x4
    ctx->pc = 0x102f30u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x102f34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x102f34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102f38: 0x0  nop
    ctx->pc = 0x102f38u;
    // NOP
    // 0x102f3c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x102F3Cu;
    {
        const bool branch_taken_0x102f3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x102F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102F3Cu;
            // 0x102f40: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f3c) {
            ctx->pc = 0x102F48u;
            goto label_102f48;
        }
    }
    ctx->pc = 0x102F44u;
    // 0x102f44: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x102f44u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_102f48:
    // 0x102f48: 0x4be3286c  vsub.xyzw   $vf1, $vf5, $vf3
    ctx->pc = 0x102f48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102f4c: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x102f4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102f50: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x102f50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102f54: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x102f54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102f58: 0x4be5233c  vmove.xyzw  $vf5, $vf4
    ctx->pc = 0x102f58u;
    ctx->vu0_vf[5] = ctx->vu0_vf[4];
    // 0x102f5c: 0x482b1000  qmfc2.ni    $t3, $vf2
    ctx->pc = 0x102f5cu;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x102f60: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x102f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x102f64: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x102f64u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102f68: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x102f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x102f6c: 0x46000004  c1          0x4
    ctx->pc = 0x102f6cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x102f70: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x102f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x102f74: 0xe460fffc  swc1        $f0, -0x4($v1)
    ctx->pc = 0x102f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x102f78: 0x1500ffdd  bnez        $t0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x102F78u;
    {
        const bool branch_taken_0x102f78 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x102F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102F78u;
            // 0x102f7c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f78) {
            ctx->pc = 0x102EF0u;
            runtime->cooperativeGuestYield();
            goto label_102ef0;
        }
    }
    ctx->pc = 0x102F80u;
label_102f80:
    // 0x102f80: 0x91140  sll         $v0, $t1, 5
    ctx->pc = 0x102f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x102f84: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x102f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x102f88: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x102f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x102f8c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x102f8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x102f90: 0x1540ffc5  bnez        $t2, . + 4 + (-0x3B << 2)
    ctx->pc = 0x102F90u;
    {
        const bool branch_taken_0x102f90 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x102F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102F90u;
            // 0x102f94: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f90) {
            ctx->pc = 0x102EA8u;
            runtime->cooperativeGuestYield();
            goto label_102ea8;
        }
    }
    ctx->pc = 0x102F98u;
label_102f98:
    // 0x102f98: 0x3e00008  jr          $ra
    ctx->pc = 0x102F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102F98u;
            // 0x102f9c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102DE8u: goto label_102de8;
            case 0x102E28u: goto label_102e28;
            case 0x102E68u: goto label_102e68;
            case 0x102E80u: goto label_102e80;
            case 0x102E98u: goto label_102e98;
            case 0x102EA8u: goto label_102ea8;
            case 0x102EF0u: goto label_102ef0;
            case 0x102F48u: goto label_102f48;
            case 0x102F80u: goto label_102f80;
            case 0x102F98u: goto label_102f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102FA0u;
}
