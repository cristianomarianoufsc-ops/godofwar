#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3A80
// Address: 0x1f3a80 - 0x1f3b18
void sub_001F3A80_0x1f3a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3A80_0x1f3a80");
#endif

    ctx->pc = 0x1f3a80u;

    // 0x1f3a80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f3a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f3a84: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f3a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f3a88: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f3a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f3a8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f3a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f3a90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f3a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f3a94: 0xc07ce38  jal         func_1F38E0
    ctx->pc = 0x1F3A94u;
    SET_GPR_U32(ctx, 31, 0x1F3A9Cu);
    ctx->pc = 0x1F3A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3A94u;
            // 0x1f3a98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F38E0u;
    if (runtime->hasFunction(0x1F38E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F38E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A9Cu; }
        if (ctx->pc != 0x1F3A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f38e0_0x1f38e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A9Cu; }
        if (ctx->pc != 0x1F3A9Cu) { return; }
    }
    ctx->pc = 0x1F3A9Cu;
    // 0x1f3a9c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1f3a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1f3aa0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1f3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f3aa4: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x1f3aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1f3aa8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f3aac: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1f3aacu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1f3ab0: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1f3ab0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1f3ab4: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3AB4u;
    {
        const bool branch_taken_0x1f3ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F3AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3AB4u;
            // 0x1f3ab8: 0x86320020  lh          $s2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ab4) {
            ctx->pc = 0x1F3AC8u;
            goto label_1f3ac8;
        }
    }
    ctx->pc = 0x1F3ABCu;
    // 0x1f3abc: 0xc04da64  jal         func_136990
    ctx->pc = 0x1F3ABCu;
    SET_GPR_U32(ctx, 31, 0x1F3AC4u);
    ctx->pc = 0x1F3AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3ABCu;
            // 0x1f3ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3AC4u; }
        if (ctx->pc != 0x1F3AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3AC4u; }
        if (ctx->pc != 0x1F3AC4u) { return; }
    }
    ctx->pc = 0x1F3AC4u;
    // 0x1f3ac4: 0x0  nop
    ctx->pc = 0x1f3ac4u;
    // NOP
label_1f3ac8:
    // 0x1f3ac8: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1f3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1f3acc: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x1f3accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1f3ad0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1f3ad0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3ad8: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1f3ad8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f3adc: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1f3adcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f3ae0: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1f3ae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f3ae4: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1f3ae4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f3ae8: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1f3ae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f3aec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f3aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3af0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1f3af0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f3af4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f3af4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3af8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f3af8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3afc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f3afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3b00: 0x46000004  c1          0x4
    ctx->pc = 0x1f3b00u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f3b04: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1f3b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1f3b08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f3b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B0Cu;
            // 0x1f3b10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3AC8u: goto label_1f3ac8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3B14u;
    // 0x1f3b14: 0x0  nop
    ctx->pc = 0x1f3b14u;
    // NOP
}
