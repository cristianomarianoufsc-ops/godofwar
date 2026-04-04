#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127240
// Address: 0x127240 - 0x127578
void sub_00127240_0x127240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127240_0x127240");
#endif

    ctx->pc = 0x127240u;

    // 0x127240: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x127240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x127244: 0x3c0c002d  lui         $t4, 0x2D
    ctx->pc = 0x127244u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)45 << 16));
    // 0x127248: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x127248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x12724c: 0x258cbb98  addiu       $t4, $t4, -0x4468
    ctx->pc = 0x12724cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294949784));
    // 0x127250: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x127250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x127254: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x127254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127258: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x127258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x12725c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x12725cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127260: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x127260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x127264: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x127264u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127268: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x127268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x12726c: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x12726cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127270: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x127270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x127274: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x127274u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127278: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x127278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12727c: 0x8d830010  lw          $v1, 0x10($t4)
    ctx->pc = 0x12727cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x127280: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x127280u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x127284: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x127284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x127288: 0x8e02dd58  lw          $v0, -0x22A8($s0)
    ctx->pc = 0x127288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958424)));
    // 0x12728c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x12728cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x127290: 0x9c84f1a8  lwu         $a0, -0xE58($a0)
    ctx->pc = 0x127290u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4294963624)));
    // 0x127294: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x127294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x127298: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x127298u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x12729c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x12729cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1272a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1272a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1272a4: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1272a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1272a8: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x1272a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x1272ac: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1272acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1272b0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1272b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1272b4: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x1272b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1272b8: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1272b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1272bc: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x1272bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1272c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1272c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1272c4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1272c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1272c8: 0x240a2000  addiu       $t2, $zero, 0x2000
    ctx->pc = 0x1272c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1272cc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1272ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1272d0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1272d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1272d4: 0x9c42f19c  lwu         $v0, -0xE64($v0)
    ctx->pc = 0x1272d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963612)));
    // 0x1272d8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1272d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1272dc: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x1272dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x1272e0: 0x9c64f1a0  lwu         $a0, -0xE60($v1)
    ctx->pc = 0x1272e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294963616)));
    // 0x1272e4: 0xdd230638  ld          $v1, 0x638($t1)
    ctx->pc = 0x1272e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 1592)));
    // 0x1272e8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1272e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1272ec: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1272ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1272f0: 0xfd260580  sd          $a2, 0x580($t1)
    ctx->pc = 0x1272f0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 1408), GPR_U64(ctx, 6));
    // 0x1272f4: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x1272f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x1272f8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1272f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1272fc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1272fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x127300: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x127300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x127304: 0xfd240590  sd          $a0, 0x590($t1)
    ctx->pc = 0x127304u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 1424), GPR_U64(ctx, 4));
    // 0x127308: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x127308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x12730c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x12730cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x127310: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x127310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x127314: 0xfd240558  sd          $a0, 0x558($t1)
    ctx->pc = 0x127314u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 1368), GPR_U64(ctx, 4));
    // 0x127318: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x127318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12731c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12731cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x127320: 0xfd270530  sd          $a3, 0x530($t1)
    ctx->pc = 0x127320u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 1328), GPR_U64(ctx, 7));
    // 0x127324: 0xfd230638  sd          $v1, 0x638($t1)
    ctx->pc = 0x127324u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 1592), GPR_U64(ctx, 3));
    // 0x127328: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x127328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x12732c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12732cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x127330: 0xdaa30000  lqc2        $vf3, 0x0($s5)
    ctx->pc = 0x127330u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x127334: 0x4b021858  vmulx.x     $vf1, $vf3, $vf2x
    ctx->pc = 0x127334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x127338: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x127338u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12733c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12733cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x127340: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127344: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x127344u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x127348: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x127348u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12734c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12734cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x127350: 0x4a821858  vmulx.y     $vf1, $vf3, $vf2x
    ctx->pc = 0x127350u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x127354: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x127354u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x127358: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x127358u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x12735c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12735cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127360: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x127360u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x127364: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x127364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x127368: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x127368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x12736c: 0x4a421898  vmulx.z     $vf2, $vf3, $vf2x
    ctx->pc = 0x12736cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x127370: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x127370u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x127374: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x127374u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x127378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12737c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x12737cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x127380: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x127380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x127384: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x127384u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x127388: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x127388u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12738c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12738cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x127390: 0x4a2118d8  vmulx.w     $vf3, $vf3, $vf1x
    ctx->pc = 0x127390u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x127394: 0x4b0300c3  vaddw.x     $vf3, $vf0, $vf3w
    ctx->pc = 0x127394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x127398: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x127398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12739c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x12739cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1273a0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1273a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1273a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1273a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1273a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1273a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1273ac: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1273acu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1273b0: 0x52e3a  dsrl        $a1, $a1, 24
    ctx->pc = 0x1273b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 24);
    // 0x1273b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1273b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1273b8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1273b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1273bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1273bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1273c0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1273c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1273c4: 0x4243a  dsrl        $a0, $a0, 16
    ctx->pc = 0x1273c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x1273c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1273c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1273cc: 0x2123a  dsrl        $v0, $v0, 8
    ctx->pc = 0x1273ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 8);
    // 0x1273d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1273d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1273d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1273d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1273d8: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x1273d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x1273dc: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x1273dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x1273e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1273e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1273e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1273e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1273e8: 0xdd220630  ld          $v0, 0x630($t1)
    ctx->pc = 0x1273e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 1584)));
    // 0x1273ec: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1273ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1273f0: 0xfd230320  sd          $v1, 0x320($t1)
    ctx->pc = 0x1273f0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 800), GPR_U64(ctx, 3));
    // 0x1273f4: 0x3c0a0001  lui         $t2, 0x1
    ctx->pc = 0x1273f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1 << 16));
    // 0x1273f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1273f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1273fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1273fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127400: 0xfd220630  sd          $v0, 0x630($t1)
    ctx->pc = 0x127400u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 1584), GPR_U64(ctx, 2));
    // 0x127404: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x127404u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x127408: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x127408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x12740c: 0x3c09fffe  lui         $t1, 0xFFFE
    ctx->pc = 0x12740cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65534 << 16));
    // 0x127410: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x127410u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x127414: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x127414u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x127418: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x127418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12741c: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x12741cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x127420: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x127420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127424: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x127424u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127428: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12742c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x12742cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x127430: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x127430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x127434: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x127434u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x127438: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x127438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x12743c: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x12743cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x127440: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x127440u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127444: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x127444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x127448: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x127448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x12744c: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x12744cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x127450: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x127450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x127454: 0xc059d6c  jal         func_1675B0
    ctx->pc = 0x127454u;
    SET_GPR_U32(ctx, 31, 0x12745Cu);
    ctx->pc = 0x127458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127454u;
            // 0x127458: 0xfce20008  sd          $v0, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1675B0u;
    if (runtime->hasFunction(0x1675B0u)) {
        auto targetFn = runtime->lookupFunction(0x1675B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12745Cu; }
        if (ctx->pc != 0x12745Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001675B0_0x1675b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12745Cu; }
        if (ctx->pc != 0x12745Cu) { return; }
    }
    ctx->pc = 0x12745Cu;
    // 0x12745c: 0xc04fd38  jal         func_13F4E0
    ctx->pc = 0x12745Cu;
    SET_GPR_U32(ctx, 31, 0x127464u);
    ctx->pc = 0x127460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12745Cu;
            // 0x127460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F4E0u;
    if (runtime->hasFunction(0x13F4E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127464u; }
        if (ctx->pc != 0x127464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F4E0_0x13f4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127464u; }
        if (ctx->pc != 0x127464u) { return; }
    }
    ctx->pc = 0x127464u;
    // 0x127464: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x127464u;
    SET_GPR_U32(ctx, 31, 0x12746Cu);
    ctx->pc = 0x127468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127464u;
            // 0x127468: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12746Cu; }
        if (ctx->pc != 0x12746Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12746Cu; }
        if (ctx->pc != 0x12746Cu) { return; }
    }
    ctx->pc = 0x12746Cu;
    // 0x12746c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x12746cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x127470: 0x8c62f168  lw          $v0, -0xE98($v1)
    ctx->pc = 0x127470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x127474: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x127474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x127478: 0x8c62f168  lw          $v0, -0xE98($v1)
    ctx->pc = 0x127478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x12747c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x127480: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x127480u;
    SET_GPR_U32(ctx, 31, 0x127488u);
    ctx->pc = 0x127484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127480u;
            // 0x127484: 0xac62f168  sw          $v0, -0xE98($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127488u; }
        if (ctx->pc != 0x127488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127488u; }
        if (ctx->pc != 0x127488u) { return; }
    }
    ctx->pc = 0x127488u;
    // 0x127488: 0x2603dd58  addiu       $v1, $s0, -0x22A8
    ctx->pc = 0x127488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958424));
    // 0x12748c: 0x8e02dd58  lw          $v0, -0x22A8($s0)
    ctx->pc = 0x12748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958424)));
    // 0x127490: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x127490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x127494: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x127494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x127498: 0xc6230370  lwc1        $f3, 0x370($s1)
    ctx->pc = 0x127498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12749c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12749cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1274a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1274a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1274a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1274a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1274a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1274a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1274ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1274acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1274b0: 0xc6240374  lwc1        $f4, 0x374($s1)
    ctx->pc = 0x1274b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1274b4: 0xc622036c  lwc1        $f2, 0x36C($s1)
    ctx->pc = 0x1274b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1274b8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1274b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1274bc: 0xc6250368  lwc1        $f5, 0x368($s1)
    ctx->pc = 0x1274bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1274c0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1274c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1274c4: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x1274c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1274c8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1274c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1274cc: 0x46001924  .word       0x46001924                   # cvt.w.s     $f4, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1274ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x1274d0: 0x44052000  mfc1        $a1, $f4
    ctx->pc = 0x1274d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1274d4: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1274d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x1274d8: 0x44071800  mfc1        $a3, $f3
    ctx->pc = 0x1274d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1274dc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1274dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1274e0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1274e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1274e4: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1274e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1274e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1274e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1274ec: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x1274ECu;
    {
        const bool branch_taken_0x1274ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1274F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1274ECu;
            // 0x1274f0: 0x3c090080  lui         $t1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1274ec) {
            ctx->pc = 0x127520u;
            goto label_127520;
        }
    }
    ctx->pc = 0x1274F4u;
    // 0x1274f4: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1274f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x1274f8: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x1274f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
    // 0x1274fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1274fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127500: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x127500u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127504: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x127504u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127508: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x127508u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12750c: 0xc049a0a  jal         func_126828
    ctx->pc = 0x12750Cu;
    SET_GPR_U32(ctx, 31, 0x127514u);
    ctx->pc = 0x127510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12750Cu;
            // 0x127510: 0x35297fff  ori         $t1, $t1, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
    ctx->pc = 0x126828u;
    if (runtime->hasFunction(0x126828u)) {
        auto targetFn = runtime->lookupFunction(0x126828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127514u; }
        if (ctx->pc != 0x127514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126828_0x126828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127514u; }
        if (ctx->pc != 0x127514u) { return; }
    }
    ctx->pc = 0x127514u;
    // 0x127514: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x127514u;
    {
        const bool branch_taken_0x127514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127514) {
            ctx->pc = 0x127544u;
            goto label_127544;
        }
    }
    ctx->pc = 0x12751Cu;
    // 0x12751c: 0x0  nop
    ctx->pc = 0x12751cu;
    // NOP
label_127520:
    // 0x127520: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x127520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127524: 0x3c080080  lui         $t0, 0x80
    ctx->pc = 0x127524u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
    // 0x127528: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x127528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12752c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x12752cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127530: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x127530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127534: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x127534u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127538: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x127538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12753c: 0xc049984  jal         func_126610
    ctx->pc = 0x12753Cu;
    SET_GPR_U32(ctx, 31, 0x127544u);
    ctx->pc = 0x127540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12753Cu;
            // 0x127540: 0x35087fff  ori         $t0, $t0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
    ctx->pc = 0x126610u;
    if (runtime->hasFunction(0x126610u)) {
        auto targetFn = runtime->lookupFunction(0x126610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127544u; }
        if (ctx->pc != 0x127544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_126610_0x126828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127544u; }
        if (ctx->pc != 0x127544u) { return; }
    }
    ctx->pc = 0x127544u;
label_127544:
    // 0x127544: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x127544u;
    SET_GPR_U32(ctx, 31, 0x12754Cu);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12754Cu; }
        if (ctx->pc != 0x12754Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12754Cu; }
        if (ctx->pc != 0x12754Cu) { return; }
    }
    ctx->pc = 0x12754Cu;
    // 0x12754c: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x12754Cu;
    SET_GPR_U32(ctx, 31, 0x127554u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127554u; }
        if (ctx->pc != 0x127554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127554u; }
        if (ctx->pc != 0x127554u) { return; }
    }
    ctx->pc = 0x127554u;
    // 0x127554: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x127554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x127558: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x127558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12755c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x12755cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127560: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x127560u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127564: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x127564u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127568: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x127568u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12756c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12756cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127570: 0x3e00008  jr          $ra
    ctx->pc = 0x127570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127570u;
            // 0x127574: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127520u: goto label_127520;
            case 0x127544u: goto label_127544;
            default: break;
        }
        return;
    }
    ctx->pc = 0x127578u;
}
