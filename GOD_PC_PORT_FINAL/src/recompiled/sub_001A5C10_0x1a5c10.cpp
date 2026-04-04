#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5C10
// Address: 0x1a5c10 - 0x1a5c98
void sub_001A5C10_0x1a5c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5C10_0x1a5c10");
#endif

    ctx->pc = 0x1a5c10u;

    // 0x1a5c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a5c14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a5c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a5c18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a5c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a5c1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5c20: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1a5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1a5c24: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x1a5c24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a5c28: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x1a5c28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1a5c2c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a5c30: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1a5c30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1a5c34: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1a5c34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1a5c38: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5C38u;
    {
        const bool branch_taken_0x1a5c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A5C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C38u;
            // 0x1a5c3c: 0x94910028  lhu         $s1, 0x28($a0) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c38) {
            ctx->pc = 0x1A5C50u;
            goto label_1a5c50;
        }
    }
    ctx->pc = 0x1A5C40u;
    // 0x1a5c40: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1a5c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a5c44: 0xc04da64  jal         func_136990
    ctx->pc = 0x1A5C44u;
    SET_GPR_U32(ctx, 31, 0x1A5C4Cu);
    ctx->pc = 0x1A5C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C44u;
            // 0x1a5c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C4Cu; }
        if (ctx->pc != 0x1A5C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C4Cu; }
        if (ctx->pc != 0x1A5C4Cu) { return; }
    }
    ctx->pc = 0x1A5C4Cu;
    // 0x1a5c4c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1a5c4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5c50:
    // 0x1a5c50: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1a5c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a5c54: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x1a5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1a5c58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a5c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5c5c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a5c5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a5c60: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1a5c60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1a5c64: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1a5c64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a5c68: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1a5c68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1a5c6c: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1a5c6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a5c70: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1a5c70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1a5c74: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x1a5c74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1a5c78: 0x4be208cb  vmaddw.xyzw $vf3, $vf1, $vf2w
    ctx->pc = 0x1a5c78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1a5c7c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a5c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5c80: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1a5c80u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a5c84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a5c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5c88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C8Cu;
            // 0x1a5c90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5C50u: goto label_1a5c50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5C94u;
    // 0x1a5c94: 0x0  nop
    ctx->pc = 0x1a5c94u;
    // NOP
}
