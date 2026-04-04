#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13cff0
// Address: 0x13cff0 - 0x13d268
void entry_13cff0_0x13d268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13cff0_0x13d268");
#endif

    ctx->pc = 0x13cff0u;

    // 0x13cff0: 0x48a43000  qmtc2.ni    $a0, $vf6
    ctx->pc = 0x13cff0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x13cff4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13cff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13cff8: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x13cff8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x13cffc: 0x4bc532fe  vopmula.xyz $ACC, $vf6, $vf5
    ctx->pc = 0x13cffcu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[5]);
    // 0x13d000: 0x4bc6286e  vopmsub.xyz $vf1, $vf5, $vf6
    ctx->pc = 0x13d000u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13d004: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x13d004u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d008: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x13d008u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d00c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x13d00cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d010: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13d010u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d014: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x13d014u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13d018: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x13d018u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x13d01c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13d01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d020: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x13d020u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x13d024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d028: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d02c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x13D02Cu;
    {
        const bool branch_taken_0x13d02c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d02c) {
            ctx->pc = 0x13D060u;
            goto label_13d060;
        }
    }
    ctx->pc = 0x13D034u;
    // 0x13d034: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13d034u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d038: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d03c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x13D03Cu;
    {
        const bool branch_taken_0x13d03c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d03c) {
            ctx->pc = 0x13D060u;
            goto label_13d060;
        }
    }
    ctx->pc = 0x13D044u;
    // 0x13d044: 0x3c012edb  lui         $at, 0x2EDB
    ctx->pc = 0x13d044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11995 << 16));
    // 0x13d048: 0x3421e6ff  ori         $at, $at, 0xE6FF
    ctx->pc = 0x13d048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59135);
    // 0x13d04c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13d04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d050: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d054: 0x0  nop
    ctx->pc = 0x13d054u;
    // NOP
    // 0x13d058: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13D058u;
    {
        const bool branch_taken_0x13d058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d058) {
            ctx->pc = 0x13D05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D058u;
            // 0x13d05c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D060u;
            goto label_13d060;
        }
    }
    ctx->pc = 0x13D060u;
label_13d060:
    // 0x13d060: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x13D060u;
    {
        const bool branch_taken_0x13d060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D060u;
            // 0x13d064: 0x48231000  qmfc2.ni    $v1, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d060) {
            ctx->pc = 0x13D0D8u;
            goto label_13d0d8;
        }
    }
    ctx->pc = 0x13D068u;
    // 0x13d068: 0x4a85309b  vmulw.y     $vf2, $vf6, $vf5w
    ctx->pc = 0x13d068u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d06c: 0x4a8628db  vmulw.y     $vf3, $vf5, $vf6w
    ctx->pc = 0x13d06cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d070: 0x4b05311b  vmulw.x     $vf4, $vf6, $vf5w
    ctx->pc = 0x13d070u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13d074: 0x4b06285b  vmulw.x     $vf1, $vf5, $vf6w
    ctx->pc = 0x13d074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d078: 0x4a831085  vsuby.y     $vf2, $vf2, $vf3y
    ctx->pc = 0x13d078u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d07c: 0x4b040844  vsubx.x     $vf1, $vf1, $vf4x
    ctx->pc = 0x13d07cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d080: 0x4b020081  vaddy.x     $vf2, $vf0, $vf2y
    ctx->pc = 0x13d080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d084: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x13d084u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13d088: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13d088u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d08c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13d08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13d090: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13d090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d094: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x13d094u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d098: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13d098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d09c: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x13d09cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x13d0a0: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x13d0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x13d0a4: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x13d0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x13d0a8: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x13d0a8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x13d0ac: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x13d0acu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13d0b0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x13d0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x13d0b4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x13d0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x13d0b8: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x13d0b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13d0bc: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x13d0bcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x13d0c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d0c4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13d0c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x13d0c8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x13d0c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x13d0cc: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x13d0ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x13d0d0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x13D0D0u;
    {
        const bool branch_taken_0x13d0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D0D0u;
            // 0x13d0d4: 0x48a31000  qmtc2.ni    $v1, $vf2 (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0d0) {
            ctx->pc = 0x13D218u;
            goto label_13d218;
        }
    }
    ctx->pc = 0x13D0D8u;
label_13d0d8:
    // 0x13d0d8: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x13d0d8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x13d0dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13d0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d0e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d0e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d0e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d0e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d0e8: 0x0  nop
    ctx->pc = 0x13d0e8u;
    // NOP
    // 0x13d0ec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x13D0ECu;
    {
        const bool branch_taken_0x13d0ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D0ECu;
            // 0x13d0f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0ec) {
            ctx->pc = 0x13D110u;
            goto label_13d110;
        }
    }
    ctx->pc = 0x13D0F4u;
    // 0x13d0f4: 0x3c012edb  lui         $at, 0x2EDB
    ctx->pc = 0x13d0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11995 << 16));
    // 0x13d0f8: 0x3421e6ff  ori         $at, $at, 0xE6FF
    ctx->pc = 0x13d0f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59135);
    // 0x13d0fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13d0fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d100: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d104: 0x0  nop
    ctx->pc = 0x13d104u;
    // NOP
    // 0x13d108: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13D108u;
    {
        const bool branch_taken_0x13d108 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d108) {
            ctx->pc = 0x13D10Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D108u;
            // 0x13d10c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D110u;
            goto label_13d110;
        }
    }
    ctx->pc = 0x13D110u;
label_13d110:
    // 0x13d110: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x13D110u;
    {
        const bool branch_taken_0x13d110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D110u;
            // 0x13d114: 0x48231000  qmfc2.ni    $v1, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d110) {
            ctx->pc = 0x13D188u;
            goto label_13d188;
        }
    }
    ctx->pc = 0x13D118u;
    // 0x13d118: 0x4a46285b  vmulw.z     $vf1, $vf5, $vf6w
    ctx->pc = 0x13d118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d11c: 0x4a45309b  vmulw.z     $vf2, $vf6, $vf5w
    ctx->pc = 0x13d11cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d120: 0x4a411086  vsubz.z     $vf2, $vf2, $vf1z
    ctx->pc = 0x13d120u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d124: 0x4b0530db  vmulw.x     $vf3, $vf6, $vf5w
    ctx->pc = 0x13d124u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d128: 0x4b020082  vaddz.x     $vf2, $vf0, $vf2z
    ctx->pc = 0x13d128u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d12c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x13d12cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13d130: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13d130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d134: 0x4b06285b  vmulw.x     $vf1, $vf5, $vf6w
    ctx->pc = 0x13d134u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d138: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13d138u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d13c: 0x4b030844  vsubx.x     $vf1, $vf1, $vf3x
    ctx->pc = 0x13d13cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d140: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x13d140u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13d144: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13d144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13d148: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13d148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d14c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13d14cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d150: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13d150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d154: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13d154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d158: 0x71021b89  pcpyld      $v1, $t0, $v0
    ctx->pc = 0x13d158u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x13d15c: 0x70641cc8  ppacw       $v1, $v1, $a0
    ctx->pc = 0x13d15cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x13d160: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x13d160u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x13d164: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x13d164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x13d168: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x13d168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13d16c: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x13d16cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x13d170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d174: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13d174u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x13d178: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x13d178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13d17c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x13d17cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x13d180: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x13D180u;
    {
        const bool branch_taken_0x13d180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D180u;
            // 0x13d184: 0x48a31000  qmtc2.ni    $v1, $vf2 (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d180) {
            ctx->pc = 0x13D218u;
            goto label_13d218;
        }
    }
    ctx->pc = 0x13D188u;
label_13d188:
    // 0x13d188: 0x3c012edb  lui         $at, 0x2EDB
    ctx->pc = 0x13d188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11995 << 16));
    // 0x13d18c: 0x3421e6ff  ori         $at, $at, 0xE6FF
    ctx->pc = 0x13d18cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59135);
    // 0x13d190: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13d190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d194: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13d194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d198: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d19c: 0x0  nop
    ctx->pc = 0x13d19cu;
    // NOP
    // 0x13d1a0: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x13D1A0u;
    {
        const bool branch_taken_0x13d1a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D1A0u;
            // 0x13d1a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d1a0) {
            ctx->pc = 0x13D260u;
            goto label_13d260;
        }
    }
    ctx->pc = 0x13D1A8u;
    // 0x13d1a8: 0x4a46285b  vmulw.z     $vf1, $vf5, $vf6w
    ctx->pc = 0x13d1a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d1ac: 0x4a45309b  vmulw.z     $vf2, $vf6, $vf5w
    ctx->pc = 0x13d1acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d1b0: 0x4a411086  vsubz.z     $vf2, $vf2, $vf1z
    ctx->pc = 0x13d1b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d1b4: 0x4a8530db  vmulw.y     $vf3, $vf6, $vf5w
    ctx->pc = 0x13d1b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d1b8: 0x4b020082  vaddz.x     $vf2, $vf0, $vf2z
    ctx->pc = 0x13d1b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d1bc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x13d1bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13d1c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13d1c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d1c4: 0x4a86285b  vmulw.y     $vf1, $vf5, $vf6w
    ctx->pc = 0x13d1c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d1c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13d1c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d1cc: 0x4a830845  vsuby.y     $vf1, $vf1, $vf3y
    ctx->pc = 0x13d1ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d1d0: 0x70432389  pcpyld      $a0, $v0, $v1
    ctx->pc = 0x13d1d0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x13d1d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13d1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13d1d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13d1d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d1dc: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x13d1dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d1e0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13d1e0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d1e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13d1e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d1e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13d1e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d1ec: 0x71021b89  pcpyld      $v1, $t0, $v0
    ctx->pc = 0x13d1ecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x13d1f0: 0x70641cc8  ppacw       $v1, $v1, $a0
    ctx->pc = 0x13d1f0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x13d1f4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x13d1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x13d1f8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x13d1f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x13d1fc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x13d1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x13d200: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x13d200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13d204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d208: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13d208u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x13d20c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x13d20cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13d210: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x13d210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x13d214: 0x0  nop
    ctx->pc = 0x13d214u;
    // NOP
label_13d218:
    // 0x13d218: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x13d218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d21c: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x13d21cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d220: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x13d220u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d224: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x13d224u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x13d228: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x13d228u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d22c: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x13d22cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13d230: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x13d230u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d234: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x13d234u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d238: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x13d238u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d23c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d240: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x13d240u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x13d244: 0x4a0003bf  vwaitq
    ctx->pc = 0x13d244u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13d248: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x13d248u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d24c: 0x4a0002ff  vnop
    ctx->pc = 0x13d24cu;
    // NOP operation, no action needed for VU0
    // 0x13d250: 0x4a0002ff  vnop
    ctx->pc = 0x13d250u;
    // NOP operation, no action needed for VU0
    // 0x13d254: 0xf8e20000  sqc2        $vf2, 0x0($a3)
    ctx->pc = 0x13d254u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13d258: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x13d258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13d25c: 0x0  nop
    ctx->pc = 0x13d25cu;
    // NOP
label_13d260:
    // 0x13d260: 0x3e00008  jr          $ra
    ctx->pc = 0x13D260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D260u;
            // 0x13d264: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D060u: goto label_13d060;
            case 0x13D0D8u: goto label_13d0d8;
            case 0x13D110u: goto label_13d110;
            case 0x13D188u: goto label_13d188;
            case 0x13D218u: goto label_13d218;
            case 0x13D260u: goto label_13d260;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D268u;
}
