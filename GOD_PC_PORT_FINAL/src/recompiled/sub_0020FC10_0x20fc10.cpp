#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020FC10
// Address: 0x20fc10 - 0x20fcc8
void sub_0020FC10_0x20fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FC10_0x20fc10");
#endif

    ctx->pc = 0x20fc10u;

    // 0x20fc10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20fc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20fc14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x20fc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x20fc18: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20fc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x20fc1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20fc1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20fc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20fc24: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x20fc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x20fc28: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x20fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x20fc2c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x20fc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x20fc30: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x20FC30u;
    {
        const bool branch_taken_0x20fc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC30u;
            // 0x20fc34: 0x70058ca9  por         $s1, $zero, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc30) {
            ctx->pc = 0x20FCB0u;
            goto label_20fcb0;
        }
    }
    ctx->pc = 0x20FC38u;
    // 0x20fc38: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x20fc38u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x20fc3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20fc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc40: 0x3c070802  lui         $a3, 0x802
    ctx->pc = 0x20fc40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2050 << 16));
    // 0x20fc44: 0xc0789b8  jal         func_1E26E0
    ctx->pc = 0x20FC44u;
    SET_GPR_U32(ctx, 31, 0x20FC4Cu);
    ctx->pc = 0x20FC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC44u;
            // 0x20fc48: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E26E0u;
    if (runtime->hasFunction(0x1E26E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E26E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC4Cu; }
        if (ctx->pc != 0x20FC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E26E0_0x1e26e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC4Cu; }
        if (ctx->pc != 0x20FC4Cu) { return; }
    }
    ctx->pc = 0x20FC4Cu;
    // 0x20fc4c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20FC4Cu;
    {
        const bool branch_taken_0x20fc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC4Cu;
            // 0x20fc50: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc4c) {
            ctx->pc = 0x20FCB0u;
            goto label_20fcb0;
        }
    }
    ctx->pc = 0x20FC54u;
    // 0x20fc54: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x20fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x20fc58: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x20fc58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20fc5c: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x20fc5cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x20fc60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20fc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20fc64: 0xda020120  lqc2        $vf2, 0x120($s0)
    ctx->pc = 0x20fc64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x20fc68: 0x4a811098  vmulx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x20fc68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20fc6c: 0x8e030230  lw          $v1, 0x230($s0)
    ctx->pc = 0x20fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x20fc70: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x20fc70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20fc74: 0x4b020845  vsuby.x     $vf1, $vf1, $vf2y
    ctx->pc = 0x20fc74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fc78: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x20fc78u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20fc7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20fc7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fc80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20fc80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20fc84: 0x0  nop
    ctx->pc = 0x20fc84u;
    // NOP
    // 0x20fc88: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x20FC88u;
    {
        const bool branch_taken_0x20fc88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20FC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC88u;
            // 0x20fc8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc88) {
            ctx->pc = 0x20FC98u;
            goto label_20fc98;
        }
    }
    ctx->pc = 0x20FC90u;
    // 0x20fc90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20fc90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc94: 0x0  nop
    ctx->pc = 0x20fc94u;
    // NOP
label_20fc98:
    // 0x20fc98: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20FC98u;
    {
        const bool branch_taken_0x20fc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fc98) {
            ctx->pc = 0x20FC9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC98u;
            // 0x20fc9c: 0x7fb10000  sq          $s1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20FCB0u;
            goto label_20fcb0;
        }
    }
    ctx->pc = 0x20FCA0u;
    // 0x20fca0: 0xc083e78  jal         func_20F9E0
    ctx->pc = 0x20FCA0u;
    SET_GPR_U32(ctx, 31, 0x20FCA8u);
    ctx->pc = 0x20FCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FCA0u;
            // 0x20fca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F9E0u;
    if (runtime->hasFunction(0x20F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x20F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCA8u; }
        if (ctx->pc != 0x20FCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20f9e0_0x20fa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCA8u; }
        if (ctx->pc != 0x20FCA8u) { return; }
    }
    ctx->pc = 0x20FCA8u;
    // 0x20fca8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20FCA8u;
    {
        const bool branch_taken_0x20fca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FCA8u;
            // 0x20fcac: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fca8) {
            ctx->pc = 0x20FCB4u;
            goto label_20fcb4;
        }
    }
    ctx->pc = 0x20FCB0u;
label_20fcb0:
    // 0x20fcb0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x20fcb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20fcb4:
    // 0x20fcb4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x20fcb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20fcb8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20fcb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fcbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20fcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x20FCC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FCC0u;
            // 0x20fcc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20FC98u: goto label_20fc98;
            case 0x20FCB0u: goto label_20fcb0;
            case 0x20FCB4u: goto label_20fcb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20FCC8u;
}
