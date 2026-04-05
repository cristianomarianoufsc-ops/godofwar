#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC060
// Address: 0x1dc060 - 0x1dc0e8
void sub_001DC060_0x1dc060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC060_0x1dc060");
#endif

    ctx->pc = 0x1dc060u;

    // 0x1dc060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dc060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dc064: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dc064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dc068: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dc068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dc06c: 0xc07cce4  jal         func_1F3390
    ctx->pc = 0x1DC06Cu;
    SET_GPR_U32(ctx, 31, 0x1DC074u);
    ctx->pc = 0x1DC070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC06Cu;
            // 0x1dc070: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3390u;
    if (runtime->hasFunction(0x1F3390u)) {
        auto targetFn = runtime->lookupFunction(0x1F3390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC074u; }
        if (ctx->pc != 0x1DC074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3390_0x1f3390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC074u; }
        if (ctx->pc != 0x1DC074u) { return; }
    }
    ctx->pc = 0x1DC074u;
    // 0x1dc074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc078: 0xc07ccf0  jal         func_1F33C0
    ctx->pc = 0x1DC078u;
    SET_GPR_U32(ctx, 31, 0x1DC080u);
    ctx->pc = 0x1DC07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC078u;
            // 0x1dc07c: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F33C0u;
    if (runtime->hasFunction(0x1F33C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F33C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC080u; }
        if (ctx->pc != 0x1DC080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F33C0_0x1f33c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC080u; }
        if (ctx->pc != 0x1DC080u) { return; }
    }
    ctx->pc = 0x1DC080u;
    // 0x1dc080: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1dc080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1dc084: 0xac62cd60  sw          $v0, -0x32A0($v1)
    ctx->pc = 0x1dc084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954336), GPR_U32(ctx, 2));
    // 0x1dc088: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1dc088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1dc08c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1dc08cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1dc090: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1dc090u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc094: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1dc094u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc098: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1dc098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc09c: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1dc09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1dc0a0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1dc0a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1dc0a4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1dc0a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc0a8: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1dc0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc0ac: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1dc0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1dc0b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dc0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc0b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dc0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dc0b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1dc0b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dc0bc: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1dc0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1dc0c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1dc0c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1dc0c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dc0c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc0c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dc0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc0cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dc0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc0d0: 0xe4410044  swc1        $f1, 0x44($v0)
    ctx->pc = 0x1dc0d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x1dc0d4: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1dc0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1dc0d8: 0xe4420048  swc1        $f2, 0x48($v0)
    ctx->pc = 0x1dc0d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x1dc0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC0DCu;
            // 0x1dc0e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC0E4u;
    // 0x1dc0e4: 0x0  nop
    ctx->pc = 0x1dc0e4u;
    // NOP
}
