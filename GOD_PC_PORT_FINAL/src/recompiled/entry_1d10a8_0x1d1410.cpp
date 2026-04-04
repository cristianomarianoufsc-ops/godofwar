#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d10a8
// Address: 0x1d10a8 - 0x1d1410
void entry_1d10a8_0x1d1410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d10a8_0x1d1410");
#endif

    ctx->pc = 0x1d10a8u;

    // 0x1d10a8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d10a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d10ac: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1d10acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d10b0: 0x615c2  srl         $v0, $a2, 23
    ctx->pc = 0x1d10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x1d10b4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d10b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d10b8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d10b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d10bc: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d10bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d10c0: 0x8ca3d2ac  lw          $v1, -0x2D54($a1)
    ctx->pc = 0x1d10c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955692)));
    // 0x1d10c4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1d10c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1d10c8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1d10c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1d10cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d10ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d10d0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d10d4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1d10d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1d10d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1d10d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1d10dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d10dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d10e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d10e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d10e4: 0x14460002  bne         $v0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D10E4u;
    {
        const bool branch_taken_0x1d10e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1D10E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D10E4u;
            // 0x1d10e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d10e4) {
            ctx->pc = 0x1D10F0u;
            goto label_1d10f0;
        }
    }
    ctx->pc = 0x1D10ECu;
    // 0x1d10ec: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x1d10ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d10f0:
    // 0x1d10f0: 0x124000c0  beqz        $s2, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1D10F0u;
    {
        const bool branch_taken_0x1d10f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D10F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D10F0u;
            // 0x1d10f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d10f0) {
            ctx->pc = 0x1D13F4u;
            goto label_1d13f4;
        }
    }
    ctx->pc = 0x1D10F8u;
    // 0x1d10f8: 0xda430050  lqc2        $vf3, 0x50($s2)
    ctx->pc = 0x1d10f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1d10fc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1d10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1d1100: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1d1100u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d1104: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1d1104u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1108: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1d1108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d110c: 0x4be118a8  vadd.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1d110cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d1110: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1d1110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d1114: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1d1114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d1118: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1d1118u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d111c: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1d111cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1120: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1d1120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d1124: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1d1124u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1128: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1d1128u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d112c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d112cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d1130: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1d1130u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d1134: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1d1134u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d1138: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d113c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d113cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1140: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d1140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1144: 0x46000044  c1          0x44
    ctx->pc = 0x1d1144u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1d1148: 0x8c430174  lw          $v1, 0x174($v0)
    ctx->pc = 0x1d1148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x1d114c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1d114cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1d1150: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1150u;
    {
        const bool branch_taken_0x1d1150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1150) {
            ctx->pc = 0x1D1154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1150u;
            // 0x1d1154: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1168u;
            goto label_1d1168;
        }
    }
    ctx->pc = 0x1D1158u;
    // 0x1d1158: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1d1158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1d115c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D115Cu;
    {
        const bool branch_taken_0x1d115c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d115c) {
            ctx->pc = 0x1D1160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D115Cu;
            // 0x1d1160: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1168u;
            goto label_1d1168;
        }
    }
    ctx->pc = 0x1D1164u;
    // 0x1d1164: 0x0  nop
    ctx->pc = 0x1d1164u;
    // NOP
label_1d1168:
    // 0x1d1168: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d1168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d116c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d116cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1170: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d1170u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1d1174: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d1174u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d1178: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1d1178u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1d117c: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1d117cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1180: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1d1180u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1184: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1d1184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d1188: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1d1188u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d118c: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1d118cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d1190: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d1190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1194: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d1194u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1198: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1d1198u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d119c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d119cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d11a0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D11A0u;
    {
        const bool branch_taken_0x1d11a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D11A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11A0u;
            // 0x1d11a4: 0x30c20007  andi        $v0, $a2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d11a0) {
            ctx->pc = 0x1D11B8u;
            goto label_1d11b8;
        }
    }
    ctx->pc = 0x1D11A8u;
    // 0x1d11a8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1d11a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d11ac: 0x0  nop
    ctx->pc = 0x1d11acu;
    // NOP
    // 0x1d11b0: 0x45020090  bc1fl       . + 4 + (0x90 << 2)
    ctx->pc = 0x1D11B0u;
    {
        const bool branch_taken_0x1d11b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d11b0) {
            ctx->pc = 0x1D11B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11B0u;
            // 0x1d11b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D13F4u;
            goto label_1d13f4;
        }
    }
    ctx->pc = 0x1D11B8u;
label_1d11b8:
    // 0x1d11b8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D11B8u;
    {
        const bool branch_taken_0x1d11b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D11BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11B8u;
            // 0x1d11bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d11b8) {
            ctx->pc = 0x1D11ECu;
            goto label_1d11ec;
        }
    }
    ctx->pc = 0x1D11C0u;
    // 0x1d11c0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1d11c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d11c4: 0x615c2  srl         $v0, $a2, 23
    ctx->pc = 0x1d11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x1d11c8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d11c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d11cc: 0x8ca3d2ac  lw          $v1, -0x2D54($a1)
    ctx->pc = 0x1d11ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955692)));
    // 0x1d11d0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d11d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d11d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d11d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d11dc: 0x14460002  bne         $v0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D11DCu;
    {
        const bool branch_taken_0x1d11dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1D11E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11DCu;
            // 0x1d11e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d11dc) {
            ctx->pc = 0x1D11E8u;
            goto label_1d11e8;
        }
    }
    ctx->pc = 0x1D11E4u;
    // 0x1d11e4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d11e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d11e8:
    // 0x1d11e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d11e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d11ec:
    // 0x1d11ec: 0x12000081  beqz        $s0, . + 4 + (0x81 << 2)
    ctx->pc = 0x1D11ECu;
    {
        const bool branch_taken_0x1d11ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D11F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11ECu;
            // 0x1d11f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d11ec) {
            ctx->pc = 0x1D13F4u;
            goto label_1d13f4;
        }
    }
    ctx->pc = 0x1D11F4u;
    // 0x1d11f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d11f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d11f8: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d11f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1d11fc: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1d11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1d1200: 0x40f809  jalr        $v0
    ctx->pc = 0x1D1200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1208u);
        ctx->pc = 0x1D1204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1200u;
            // 0x1d1204: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1208u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D10F0u: goto label_1d10f0;
            case 0x1D1168u: goto label_1d1168;
            case 0x1D11B8u: goto label_1d11b8;
            case 0x1D11E8u: goto label_1d11e8;
            case 0x1D11ECu: goto label_1d11ec;
            case 0x1D12B0u: goto label_1d12b0;
            case 0x1D12D4u: goto label_1d12d4;
            case 0x1D12F8u: goto label_1d12f8;
            case 0x1D1310u: goto label_1d1310;
            case 0x1D1320u: goto label_1d1320;
            case 0x1D1328u: goto label_1d1328;
            case 0x1D1350u: goto label_1d1350;
            case 0x1D1388u: goto label_1d1388;
            case 0x1D13A0u: goto label_1d13a0;
            case 0x1D13B0u: goto label_1d13b0;
            case 0x1D13B8u: goto label_1d13b8;
            case 0x1D13D8u: goto label_1d13d8;
            case 0x1D13F0u: goto label_1d13f0;
            case 0x1D13F4u: goto label_1d13f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1208u; }
            if (ctx->pc != 0x1D1208u) { return; }
        }
        }
    }
    ctx->pc = 0x1D1208u;
    // 0x1d1208: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1D1208u;
    {
        const bool branch_taken_0x1d1208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D120Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1208u;
            // 0x1d120c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1208) {
            ctx->pc = 0x1D13F0u;
            goto label_1d13f0;
        }
    }
    ctx->pc = 0x1D1210u;
    // 0x1d1210: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1d1210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d1214: 0xc074540  jal         func_1D1500
    ctx->pc = 0x1D1214u;
    SET_GPR_U32(ctx, 31, 0x1D121Cu);
    ctx->pc = 0x1D1218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1214u;
            // 0x1d1218: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1500u;
    if (runtime->hasFunction(0x1D1500u)) {
        auto targetFn = runtime->lookupFunction(0x1D1500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D121Cu; }
        if (ctx->pc != 0x1D121Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d1500_0x1d15b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D121Cu; }
        if (ctx->pc != 0x1D121Cu) { return; }
    }
    ctx->pc = 0x1D121Cu;
    // 0x1d121c: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x1D121Cu;
    {
        const bool branch_taken_0x1d121c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D121Cu;
            // 0x1d1220: 0x3c070033  lui         $a3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d121c) {
            ctx->pc = 0x1D13F0u;
            goto label_1d13f0;
        }
    }
    ctx->pc = 0x1D1224u;
    // 0x1d1224: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1d1224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d1228: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1d1228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1d122c: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d122cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d1230: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d1230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d1234: 0x24e2f170  addiu       $v0, $a3, -0xE90
    ctx->pc = 0x1d1234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963568));
    // 0x1d1238: 0xace5f170  sw          $a1, -0xE90($a3)
    ctx->pc = 0x1d1238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963568), GPR_U32(ctx, 5));
    // 0x1d123c: 0x246322f8  addiu       $v1, $v1, 0x22F8
    ctx->pc = 0x1d123cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8952));
    // 0x1d1240: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x1d1240u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d1244: 0x3c0600a0  lui         $a2, 0xA0
    ctx->pc = 0x1d1244u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)160 << 16));
    // 0x1d1248: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d1248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d124c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1d124cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1d1250: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1d1250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1d1254: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x1d1254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d1258: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1d1258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1d125c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d125cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d1260: 0x7ba60080  lq          $a2, 0x80($sp)
    ctx->pc = 0x1d1260u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d1264: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d1264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1268: 0xac490014  sw          $t1, 0x14($v0)
    ctx->pc = 0x1d1268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
    // 0x1d126c: 0xac480020  sw          $t0, 0x20($v0)
    ctx->pc = 0x1d126cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 8));
    // 0x1d1270: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1d1270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1d1274: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d1274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d1278: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1d1278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1d127c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1d127cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1d1280: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1d1280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d1284: 0x8ca4bcf8  lw          $a0, -0x4308($a1)
    ctx->pc = 0x1d1284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950136)));
    // 0x1d1288: 0xc047864  jal         func_11E190
    ctx->pc = 0x1D1288u;
    SET_GPR_U32(ctx, 31, 0x1D1290u);
    ctx->pc = 0x1D128Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1288u;
            // 0x1d128c: 0x78450030  lq          $a1, 0x30($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1290u; }
        if (ctx->pc != 0x1D1290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1290u; }
        if (ctx->pc != 0x1D1290u) { return; }
    }
    ctx->pc = 0x1D1290u;
    // 0x1d1290: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1290u;
    {
        const bool branch_taken_0x1d1290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1290) {
            ctx->pc = 0x1D1294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1290u;
            // 0x1d1294: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D12B0u;
            goto label_1d12b0;
        }
    }
    ctx->pc = 0x1D1298u;
    // 0x1d1298: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d1298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d129c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1d129cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1d12a0: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1d12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1d12a4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1d12a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1d12a8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D12A8u;
    {
        const bool branch_taken_0x1d12a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d12a8) {
            ctx->pc = 0x1D12ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D12A8u;
            // 0x1d12ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D12B0u;
            goto label_1d12b0;
        }
    }
    ctx->pc = 0x1D12B0u;
label_1d12b0:
    // 0x1d12b0: 0x1200004f  beqz        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1D12B0u;
    {
        const bool branch_taken_0x1d12b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D12B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D12B0u;
            // 0x1d12b4: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12b0) {
            ctx->pc = 0x1D13F0u;
            goto label_1d13f0;
        }
    }
    ctx->pc = 0x1D12B8u;
    // 0x1d12b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D12B8u;
    {
        const bool branch_taken_0x1d12b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D12BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D12B8u;
            // 0x1d12bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12b8) {
            ctx->pc = 0x1D12D4u;
            goto label_1d12d4;
        }
    }
    ctx->pc = 0x1D12C0u;
    // 0x1d12c0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d12c4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1d12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1d12c8: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1d12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1d12cc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1d12ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1d12d0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1d12d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d12d4:
    // 0x1d12d4: 0x5460001e  bnel        $v1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D12D4u;
    {
        const bool branch_taken_0x1d12d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d12d4) {
            ctx->pc = 0x1D12D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D12D4u;
            // 0x1d12d8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1350u;
            goto label_1d1350;
        }
    }
    ctx->pc = 0x1D12DCu;
    // 0x1d12dc: 0x8e4300fc  lw          $v1, 0xFC($s2)
    ctx->pc = 0x1d12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x1d12e0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D12E0u;
    {
        const bool branch_taken_0x1d12e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D12E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D12E0u;
            // 0x1d12e4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12e0) {
            ctx->pc = 0x1D1320u;
            goto label_1d1320;
        }
    }
    ctx->pc = 0x1D12E8u;
    // 0x1d12e8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1d12e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x1d12ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D12ECu;
    {
        const bool branch_taken_0x1d12ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D12F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D12ECu;
            // 0x1d12f0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12ec) {
            ctx->pc = 0x1D1310u;
            goto label_1d1310;
        }
    }
    ctx->pc = 0x1D12F4u;
    // 0x1d12f4: 0x0  nop
    ctx->pc = 0x1d12f4u;
    // NOP
label_1d12f8:
    // 0x1d12f8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d12f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d12fc: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1d12fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1d1300: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1300u;
    {
        const bool branch_taken_0x1d1300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1300u;
            // 0x1d1304: 0x240203ed  addiu       $v0, $zero, 0x3ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1300) {
            ctx->pc = 0x1D1328u;
            goto label_1d1328;
        }
    }
    ctx->pc = 0x1D1308u;
    // 0x1d1308: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d1308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d130c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d130cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1310:
    // 0x1d1310: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1d1310u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1d1314: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1d1314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1d1318: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D1318u;
    {
        const bool branch_taken_0x1d1318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D131Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1318u;
            // 0x1d131c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1318) {
            ctx->pc = 0x1D12F8u;
            runtime->cooperativeGuestYield();
            goto label_1d12f8;
        }
    }
    ctx->pc = 0x1D1320u;
label_1d1320:
    // 0x1d1320: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d1320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1324: 0x240203ed  addiu       $v0, $zero, 0x3ED
    ctx->pc = 0x1d1324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
label_1d1328:
    // 0x1d1328: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1d1328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1d132c: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x1d132cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d1330: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1d1330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1d1334: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1d1334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1d1338: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1d1338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1d133c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d133cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d1340: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1d1340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d1344: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1D1344u;
    {
        const bool branch_taken_0x1d1344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1344u;
            // 0x1d1348: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1344) {
            ctx->pc = 0x1D13D8u;
            goto label_1d13d8;
        }
    }
    ctx->pc = 0x1D134Cu;
    // 0x1d134c: 0x0  nop
    ctx->pc = 0x1d134cu;
    // NOP
label_1d1350:
    // 0x1d1350: 0xc074c8a  jal         func_1D3228
    ctx->pc = 0x1D1350u;
    SET_GPR_U32(ctx, 31, 0x1D1358u);
    ctx->pc = 0x1D1354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1350u;
            // 0x1d1354: 0x7ba50080  lq          $a1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3228u;
    if (runtime->hasFunction(0x1D3228u)) {
        auto targetFn = runtime->lookupFunction(0x1D3228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1358u; }
        if (ctx->pc != 0x1D1358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3228_0x1d3228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1358u; }
        if (ctx->pc != 0x1D1358u) { return; }
    }
    ctx->pc = 0x1D1358u;
    // 0x1d1358: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d1358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d135c: 0x8e4300fc  lw          $v1, 0xFC($s2)
    ctx->pc = 0x1d135cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x1d1360: 0x94470074  lhu         $a3, 0x74($v0)
    ctx->pc = 0x1d1360u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1d1364: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1d1364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d1368: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1d1368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d136c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D136Cu;
    {
        const bool branch_taken_0x1d136c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D136Cu;
            // 0x1d1370: 0x8c460024  lw          $a2, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d136c) {
            ctx->pc = 0x1D13B0u;
            goto label_1d13b0;
        }
    }
    ctx->pc = 0x1D1374u;
    // 0x1d1374: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1d1374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x1d1378: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1d1378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d137c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D137Cu;
    {
        const bool branch_taken_0x1d137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D137Cu;
            // 0x1d1380: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d137c) {
            ctx->pc = 0x1D13A0u;
            goto label_1d13a0;
        }
    }
    ctx->pc = 0x1D1384u;
    // 0x1d1384: 0x0  nop
    ctx->pc = 0x1d1384u;
    // NOP
label_1d1388:
    // 0x1d1388: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d1388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d138c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1d138cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1d1390: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1390u;
    {
        const bool branch_taken_0x1d1390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1390u;
            // 0x1d1394: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1390) {
            ctx->pc = 0x1D13B8u;
            goto label_1d13b8;
        }
    }
    ctx->pc = 0x1D1398u;
    // 0x1d1398: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d1398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d139c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1d139cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d13a0:
    // 0x1d13a0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1d13a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1d13a4: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1d13a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1d13a8: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D13A8u;
    {
        const bool branch_taken_0x1d13a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D13ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D13A8u;
            // 0x1d13ac: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13a8) {
            ctx->pc = 0x1D1388u;
            runtime->cooperativeGuestYield();
            goto label_1d1388;
        }
    }
    ctx->pc = 0x1D13B0u;
label_1d13b0:
    // 0x1d13b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d13b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d13b4: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1d13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1d13b8:
    // 0x1d13b8: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x1d13b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    // 0x1d13bc: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x1d13bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d13c0: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x1d13c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x1d13c4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1d13c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1d13c8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1d13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1d13cc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d13ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d13d0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1d13d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d13d4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1d13d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d13d8:
    // 0x1d13d8: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1d13d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1d13dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d13e0: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1D13E0u;
    SET_GPR_U32(ctx, 31, 0x1D13E8u);
    ctx->pc = 0x1D13E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D13E0u;
            // 0x1d13e4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D13E8u; }
        if (ctx->pc != 0x1D13E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D13E8u; }
        if (ctx->pc != 0x1D13E8u) { return; }
    }
    ctx->pc = 0x1D13E8u;
    // 0x1d13e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D13E8u;
    {
        const bool branch_taken_0x1d13e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D13E8u;
            // 0x1d13ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13e8) {
            ctx->pc = 0x1D13F4u;
            goto label_1d13f4;
        }
    }
    ctx->pc = 0x1D13F0u;
label_1d13f0:
    // 0x1d13f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d13f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d13f4:
    // 0x1d13f4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1d13f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d13f8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1d13f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d13fc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1d13fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d1400: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d1400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d1404: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1404u;
            // 0x1d1408: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D10F0u: goto label_1d10f0;
            case 0x1D1168u: goto label_1d1168;
            case 0x1D11B8u: goto label_1d11b8;
            case 0x1D11E8u: goto label_1d11e8;
            case 0x1D11ECu: goto label_1d11ec;
            case 0x1D12B0u: goto label_1d12b0;
            case 0x1D12D4u: goto label_1d12d4;
            case 0x1D12F8u: goto label_1d12f8;
            case 0x1D1310u: goto label_1d1310;
            case 0x1D1320u: goto label_1d1320;
            case 0x1D1328u: goto label_1d1328;
            case 0x1D1350u: goto label_1d1350;
            case 0x1D1388u: goto label_1d1388;
            case 0x1D13A0u: goto label_1d13a0;
            case 0x1D13B0u: goto label_1d13b0;
            case 0x1D13B8u: goto label_1d13b8;
            case 0x1D13D8u: goto label_1d13d8;
            case 0x1D13F0u: goto label_1d13f0;
            case 0x1D13F4u: goto label_1d13f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D140Cu;
    // 0x1d140c: 0x0  nop
    ctx->pc = 0x1d140cu;
    // NOP
}
