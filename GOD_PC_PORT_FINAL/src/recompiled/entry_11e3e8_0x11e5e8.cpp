#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_11e3e8
// Address: 0x11e3e8 - 0x11e5e8
void entry_11e3e8_0x11e5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11e3e8_0x11e5e8");
#endif

    ctx->pc = 0x11e3e8u;

    // 0x11e3e8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x11e3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x11e3ec: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x11e3ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x11e3f0: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x11e3f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11e3f4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x11e3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x11e3f8: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x11e3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
    // 0x11e3fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11e3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e400: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x11e400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x11e404: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x11e404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x11e408: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x11e408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x11e40c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x11e40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x11e410: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x11e410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x11e414: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11e414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11e418: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x11e418u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x11e41c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x11e41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e420: 0x3c15002c  lui         $s5, 0x2C
    ctx->pc = 0x11e420u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)44 << 16));
    // 0x11e424: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x11e424u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x11e428: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x11e428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x11e42c: 0x2610f170  addiu       $s0, $s0, -0xE90
    ctx->pc = 0x11e42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963568));
    // 0x11e430: 0xc454143c  lwc1        $f20, 0x143C($v0)
    ctx->pc = 0x11e430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11e434: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x11e434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11e438: 0x26a27790  addiu       $v0, $s5, 0x7790
    ctx->pc = 0x11e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 30608));
    // 0x11e43c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e440: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x11e440u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x11e444: 0x30740002  andi        $s4, $v1, 0x2
    ctx->pc = 0x11e444u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x11e448: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x11e448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x11e44c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x11e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x11e450: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11e450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e454: 0xa4400034  sh          $zero, 0x34($v0)
    ctx->pc = 0x11e454u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x11e458: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x11e458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x11e45c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x11e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x11e460: 0xc08f42a  jal         func_23D0A8
    ctx->pc = 0x11E460u;
    SET_GPR_U32(ctx, 31, 0x11E468u);
    ctx->pc = 0x11E464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E460u;
            // 0x11e464: 0xa4400036  sh          $zero, 0x36($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D0A8u;
    if (runtime->hasFunction(0x23D0A8u)) {
        auto targetFn = runtime->lookupFunction(0x23D0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E468u; }
        if (ctx->pc != 0x11E468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23d0a8_0x23d0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E468u; }
        if (ctx->pc != 0x11E468u) { return; }
    }
    ctx->pc = 0x11E468u;
    // 0x11e468: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x11e468u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11e46c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x11e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x11e470: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x11e470u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x11e474: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x11e474u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e478: 0x4be310d8  vmulx.xyzw  $vf3, $vf2, $vf3x
    ctx->pc = 0x11e478u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x11e47c: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x11e47cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e480: 0x4be320e8  vadd.xyzw   $vf3, $vf4, $vf3
    ctx->pc = 0x11e480u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x11e484: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x11e484u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e488: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x11e488u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x11e48c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x11e48cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11e490: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x11e490u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11e494: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11e494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11e498: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e49c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x11e49cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e4a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11e4a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e4a4: 0x46000004  c1          0x4
    ctx->pc = 0x11e4a4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x11e4a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11e4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e4ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x11e4acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11e4b0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x11e4b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11e4b4: 0x4a212040  vaddx.w     $vf1, $vf4, $vf1x
    ctx->pc = 0x11e4b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11e4b8: 0x4a230b3c  vmove.w     $vf3, $vf1
    ctx->pc = 0x11e4b8u;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x11e4bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e4c0: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x11e4c0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x11e4c4: 0xc047824  jal         func_11E090
    ctx->pc = 0x11E4C4u;
    SET_GPR_U32(ctx, 31, 0x11E4CCu);
    ctx->pc = 0x11E4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E4C4u;
            // 0x11e4c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E090u;
    if (runtime->hasFunction(0x11E090u)) {
        auto targetFn = runtime->lookupFunction(0x11E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E4CCu; }
        if (ctx->pc != 0x11E4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E090_0x11e090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E4CCu; }
        if (ctx->pc != 0x11E4CCu) { return; }
    }
    ctx->pc = 0x11E4CCu;
    // 0x11e4cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11e4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e4d0: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x11E4D0u;
    {
        const bool branch_taken_0x11e4d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E4D0u;
            // 0x11e4d4: 0x8e130014  lw          $s3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4d0) {
            ctx->pc = 0x11E588u;
            goto label_11e588;
        }
    }
    ctx->pc = 0x11E4D8u;
    // 0x11e4d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11e4d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e4dc: 0x0  nop
    ctx->pc = 0x11e4dcu;
    // NOP
label_11e4e0:
    // 0x11e4e0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E4E0u;
    {
        const bool branch_taken_0x11e4e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E4E0u;
            // 0x11e4e4: 0x8c860018  lw          $a2, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4e0) {
            ctx->pc = 0x11E4F0u;
            goto label_11e4f0;
        }
    }
    ctx->pc = 0x11E4E8u;
    // 0x11e4e8: 0x52660024  beql        $s3, $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x11E4E8u;
    {
        const bool branch_taken_0x11e4e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 6));
        if (branch_taken_0x11e4e8) {
            ctx->pc = 0x11E4ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E4E8u;
            // 0x11e4ec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E57Cu;
            goto label_11e57c;
        }
    }
    ctx->pc = 0x11E4F0u;
label_11e4f0:
    // 0x11e4f0: 0x7ba50050  lq          $a1, 0x50($sp)
    ctx->pc = 0x11e4f0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e4f4: 0x26b07790  addiu       $s0, $s5, 0x7790
    ctx->pc = 0x11e4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 30608));
    // 0x11e4f8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x11e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x11e4fc: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x11e4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x11e500: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x11e500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x11e504: 0x7ba60040  lq          $a2, 0x40($sp)
    ctx->pc = 0x11e504u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e508: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x11e508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x11e50c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11e510: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x11e510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x11e514: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x11e514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11e518: 0x40f809  jalr        $v0
    ctx->pc = 0x11E518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E520u);
        ctx->pc = 0x11E51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E518u;
            // 0x11e51c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11E520u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E4E0u: goto label_11e4e0;
            case 0x11E4F0u: goto label_11e4f0;
            case 0x11E568u: goto label_11e568;
            case 0x11E56Cu: goto label_11e56c;
            case 0x11E57Cu: goto label_11e57c;
            case 0x11E588u: goto label_11e588;
            case 0x11E5C0u: goto label_11e5c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11E520u; }
            if (ctx->pc != 0x11E520u) { return; }
        }
        }
    }
    ctx->pc = 0x11E520u;
    // 0x11e520: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11e520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e524: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x11E524u;
    {
        const bool branch_taken_0x11e524 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E524u;
            // 0x11e528: 0x2469025  or          $s2, $s2, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e524) {
            ctx->pc = 0x11E568u;
            goto label_11e568;
        }
    }
    ctx->pc = 0x11E52Cu;
    // 0x11e52c: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x11E52Cu;
    {
        const bool branch_taken_0x11e52c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E52Cu;
            // 0x11e530: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e52c) {
            ctx->pc = 0x11E568u;
            goto label_11e568;
        }
    }
    ctx->pc = 0x11E534u;
    // 0x11e534: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x11e534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e538: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11e538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e53c: 0x0  nop
    ctx->pc = 0x11e53cu;
    // NOP
    // 0x11e540: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x11E540u;
    {
        const bool branch_taken_0x11e540 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11E544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E540u;
            // 0x11e544: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e540) {
            ctx->pc = 0x11E56Cu;
            goto label_11e56c;
        }
    }
    ctx->pc = 0x11E548u;
    // 0x11e548: 0x7a050030  lq          $a1, 0x30($s0)
    ctx->pc = 0x11e548u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x11e54c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x11e54cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11e550: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x11e550u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11e554: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x11e554u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x11e558: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x11e558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x11e55c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x11e55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x11e560: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x11e560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x11e564: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x11e564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_11e568:
    // 0x11e568: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11e568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_11e56c:
    // 0x11e56c: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E56Cu;
    {
        const bool branch_taken_0x11e56c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e56c) {
            ctx->pc = 0x11E570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E56Cu;
            // 0x11e570: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E57Cu;
            goto label_11e57c;
        }
    }
    ctx->pc = 0x11E574u;
    // 0x11e574: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11E574u;
    {
        const bool branch_taken_0x11e574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E574u;
            // 0x11e578: 0x2412000c  addiu       $s2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e574) {
            ctx->pc = 0x11E588u;
            goto label_11e588;
        }
    }
    ctx->pc = 0x11E57Cu;
label_11e57c:
    // 0x11e57c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x11e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11e580: 0x1480ffd7  bnez        $a0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x11E580u;
    {
        const bool branch_taken_0x11e580 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e580) {
            ctx->pc = 0x11E4E0u;
            runtime->cooperativeGuestYield();
            goto label_11e4e0;
        }
    }
    ctx->pc = 0x11E588u;
label_11e588:
    // 0x11e588: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x11E588u;
    {
        const bool branch_taken_0x11e588 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E588u;
            // 0x11e58c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e588) {
            ctx->pc = 0x11E5C0u;
            goto label_11e5c0;
        }
    }
    ctx->pc = 0x11E590u;
    // 0x11e590: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x11E590u;
    {
        const bool branch_taken_0x11e590 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E590u;
            // 0x11e594: 0x7ba40000  lq          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e590) {
            ctx->pc = 0x11E5C0u;
            goto label_11e5c0;
        }
    }
    ctx->pc = 0x11E598u;
    // 0x11e598: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x11e598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x11e59c: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x11e59cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e5a0: 0x24637790  addiu       $v1, $v1, 0x7790
    ctx->pc = 0x11e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30608));
    // 0x11e5a4: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x11e5a4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e5a8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x11e5a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e5ac: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x11e5acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x11e5b0: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x11e5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x11e5b4: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x11e5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x11e5b8: 0x7c650020  sq          $a1, 0x20($v1)
    ctx->pc = 0x11e5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 5));
    // 0x11e5bc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11e5bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11e5c0:
    // 0x11e5c0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x11e5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11e5c4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x11e5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11e5c8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x11e5c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11e5cc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x11e5ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11e5d0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x11e5d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11e5d4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x11e5d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11e5d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11e5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11e5dc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x11e5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11e5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x11E5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E5E0u;
            // 0x11e5e4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E4E0u: goto label_11e4e0;
            case 0x11E4F0u: goto label_11e4f0;
            case 0x11E568u: goto label_11e568;
            case 0x11E56Cu: goto label_11e56c;
            case 0x11E57Cu: goto label_11e57c;
            case 0x11E588u: goto label_11e588;
            case 0x11E5C0u: goto label_11e5c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E5E8u;
}
