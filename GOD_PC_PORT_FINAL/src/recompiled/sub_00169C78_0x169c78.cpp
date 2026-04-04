#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169C78
// Address: 0x169c78 - 0x169d70
void sub_00169C78_0x169c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169C78_0x169c78");
#endif

    ctx->pc = 0x169c78u;

    // 0x169c78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x169c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x169c7c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x169c7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x169c80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x169c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x169c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x169c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c8c: 0x26020360  addiu       $v0, $s0, 0x360
    ctx->pc = 0x169c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x169c90: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x169c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x169c94: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x169C94u;
    {
        const bool branch_taken_0x169c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x169C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169C94u;
            // 0x169c98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c94) {
            ctx->pc = 0x169CA0u;
            goto label_169ca0;
        }
    }
    ctx->pc = 0x169C9Cu;
    // 0x169c9c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x169c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_169ca0:
    // 0x169ca0: 0x8e02039c  lw          $v0, 0x39C($s0)
    ctx->pc = 0x169ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 924)));
    // 0x169ca4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x169CA4u;
    {
        const bool branch_taken_0x169ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169ca4) {
            ctx->pc = 0x169CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169CA4u;
            // 0x169ca8: 0xfba20010  sqc2        $vf2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
            ctx->pc = 0x169CCCu;
            goto label_169ccc;
        }
    }
    ctx->pc = 0x169CACu;
    // 0x169cac: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x169CACu;
    {
        const bool branch_taken_0x169cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x169cac) {
            ctx->pc = 0x169CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169CACu;
            // 0x169cb0: 0xda0100c0  lqc2        $vf1, 0xC0($s0) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x169CDCu;
            goto label_169cdc;
        }
    }
    ctx->pc = 0x169CB4u;
    // 0x169cb4: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x169cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x169cb8: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x169cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x169cbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x169cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x169cc0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x169CC0u;
    {
        const bool branch_taken_0x169cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169cc0) {
            ctx->pc = 0x169CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169CC0u;
            // 0x169cc4: 0xda0100c0  lqc2        $vf1, 0xC0($s0) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x169CDCu;
            goto label_169cdc;
        }
    }
    ctx->pc = 0x169CC8u;
    // 0x169cc8: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x169cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
label_169ccc:
    // 0x169ccc: 0xc05a5fc  jal         func_1697F0
    ctx->pc = 0x169CCCu;
    SET_GPR_U32(ctx, 31, 0x169CD4u);
    ctx->pc = 0x169CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169CCCu;
            // 0x169cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1697F0u;
    if (runtime->hasFunction(0x1697F0u)) {
        auto targetFn = runtime->lookupFunction(0x1697F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169CD4u; }
        if (ctx->pc != 0x169CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001697F0_0x1697f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169CD4u; }
        if (ctx->pc != 0x169CD4u) { return; }
    }
    ctx->pc = 0x169CD4u;
    // 0x169cd4: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x169cd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169cd8: 0xda0100c0  lqc2        $vf1, 0xC0($s0)
    ctx->pc = 0x169cd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 192)));
label_169cdc:
    // 0x169cdc: 0x260200c0  addiu       $v0, $s0, 0xC0
    ctx->pc = 0x169cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x169ce0: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x169ce0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x169ce4: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x169ce4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x169ce8: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x169ce8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169cec: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x169cecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x169cf0: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x169cf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169cf4: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x169cf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x169cf8: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x169cf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x169cfc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x169cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169d00: 0x4b010083  vaddw.x     $vf2, $vf0, $vf1w
    ctx->pc = 0x169d00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x169d04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x169d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x169d08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x169d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169d0c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x169d0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169d10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x169d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x169d14: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x169d14u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x169d18: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x169d18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x169d1c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x169d1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169d20: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x169d20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x169d24: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x169d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169d28: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x169d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x169d2c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x169d2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x169d30: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x169d30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x169d34: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x169d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169d38: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x169d38u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169d3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x169d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169d40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169d44: 0x3e00008  jr          $ra
    ctx->pc = 0x169D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169D44u;
            // 0x169d48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169CA0u: goto label_169ca0;
            case 0x169CCCu: goto label_169ccc;
            case 0x169CDCu: goto label_169cdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169D4Cu;
    // 0x169d4c: 0x0  nop
    ctx->pc = 0x169d4cu;
    // NOP
    // 0x169d50: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x169d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x169d54: 0x0  nop
    ctx->pc = 0x169d54u;
    // NOP
    // 0x169d58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x169d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x169d5c: 0x0  nop
    ctx->pc = 0x169d5cu;
    // NOP
    // 0x169d60: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x169d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x169d64: 0x0  nop
    ctx->pc = 0x169d64u;
    // NOP
    // 0x169d68: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x169d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x169d6c: 0x0  nop
    ctx->pc = 0x169d6cu;
    // NOP
}
