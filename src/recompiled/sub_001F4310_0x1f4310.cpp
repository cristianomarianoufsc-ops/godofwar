#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F4310
// Address: 0x1f4310 - 0x1f4408
void sub_001F4310_0x1f4310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4310_0x1f4310");
#endif

    ctx->pc = 0x1f4310u;

    // 0x1f4310: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f4310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f4314: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1f4314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1f4318: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1f4318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1f431c: 0x24428a70  addiu       $v0, $v0, -0x7590
    ctx->pc = 0x1f431cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937200));
    // 0x1f4320: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f4320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f4324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4328: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1f4328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1f432c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1f432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1f4330: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1f4330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1f4334: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1f4334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1f4338: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x1f4338u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f433c: 0xc07d0c2  jal         func_1F4308
    ctx->pc = 0x1F433Cu;
    SET_GPR_U32(ctx, 31, 0x1F4344u);
    ctx->pc = 0x1F4340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F433Cu;
            // 0x1f4340: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4308u;
    if (runtime->hasFunction(0x1F4308u)) {
        auto targetFn = runtime->lookupFunction(0x1F4308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4344u; }
        if (ctx->pc != 0x1F4344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f4308_0x1f4310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4344u; }
        if (ctx->pc != 0x1F4344u) { return; }
    }
    ctx->pc = 0x1F4344u;
    // 0x1f4344: 0x3c043ecc  lui         $a0, 0x3ECC
    ctx->pc = 0x1f4344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16076 << 16));
    // 0x1f4348: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x1f4348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1f434c: 0x3c053f05  lui         $a1, 0x3F05
    ctx->pc = 0x1f434cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16133 << 16));
    // 0x1f4350: 0x34a51eb8  ori         $a1, $a1, 0x1EB8
    ctx->pc = 0x1f4350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7864);
    // 0x1f4354: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1f4354u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1f4358: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1f4358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1f435c: 0x3c053e99  lui         $a1, 0x3E99
    ctx->pc = 0x1f435cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16025 << 16));
    // 0x1f4360: 0x34a5999a  ori         $a1, $a1, 0x999A
    ctx->pc = 0x1f4360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39322);
    // 0x1f4364: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1f4364u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1f4368: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1f4368u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f436c: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1f436cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1f4370: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1f4370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1f4374: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1f4374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1f4378: 0x3c053d4c  lui         $a1, 0x3D4C
    ctx->pc = 0x1f4378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15692 << 16));
    // 0x1f437c: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x1f437cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x1f4380: 0x3c043e99  lui         $a0, 0x3E99
    ctx->pc = 0x1f4380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16025 << 16));
    // 0x1f4384: 0x3484999a  ori         $a0, $a0, 0x999A
    ctx->pc = 0x1f4384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x1f4388: 0x70a41389  pcpyld      $v0, $a1, $a0
    ctx->pc = 0x1f4388u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1f438c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1f438cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f4390: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f4390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1f4394: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1f4394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1f4398: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1f4398u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x1f439c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1f439cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1f43a0: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x1f43a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x1f43a4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1f43a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1f43a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f43a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f43ac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1f43acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f43b0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1f43b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f43b4: 0x4a220840  vaddx.w     $vf1, $vf1, $vf2x
    ctx->pc = 0x1f43b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f43b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f43b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f43bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f43bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f43c0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1f43c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1f43c4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1f43c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1f43c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f43c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f43cc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f43ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f43d0: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x1f43d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f43d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f43d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43d8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x1f43d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x1f43dc: 0xe6010068  swc1        $f1, 0x68($s0)
    ctx->pc = 0x1f43dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x1f43e0: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x1f43e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x1f43e4: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x1f43e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
    // 0x1f43e8: 0xe6010060  swc1        $f1, 0x60($s0)
    ctx->pc = 0x1f43e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x1f43ec: 0xae04006c  sw          $a0, 0x6C($s0)
    ctx->pc = 0x1f43ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 4));
    // 0x1f43f0: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x1f43f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x1f43f4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1f43f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f43f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f43f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f43fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F43FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F43FCu;
            // 0x1f4400: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4404u;
    // 0x1f4404: 0x0  nop
    ctx->pc = 0x1f4404u;
    // NOP
}
