#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00130370
// Address: 0x130370 - 0x1303d0
void sub_00130370_0x130370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130370_0x130370");
#endif

    ctx->pc = 0x130370u;

    // 0x130370: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x130370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x130374: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x130374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x130378: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x130378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13037c: 0xc04c012  jal         func_130048
    ctx->pc = 0x13037Cu;
    SET_GPR_U32(ctx, 31, 0x130384u);
    ctx->pc = 0x130380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13037Cu;
            // 0x130380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130048u;
    if (runtime->hasFunction(0x130048u)) {
        auto targetFn = runtime->lookupFunction(0x130048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130384u; }
        if (ctx->pc != 0x130384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130048_0x130048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130384u; }
        if (ctx->pc != 0x130384u) { return; }
    }
    ctx->pc = 0x130384u;
    // 0x130384: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x130384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x130388: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x130388u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x13038c: 0x4be4133d  vmr32.xyzw  $vf4, $vf2
    ctx->pc = 0x13038cu;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x130390: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x130390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130394: 0x4be1233d  vmr32.xyzw  $vf1, $vf4
    ctx->pc = 0x130394u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x130398: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x130398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13039c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x13039cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1303a0: 0x4be30b3d  vmr32.xyzw  $vf3, $vf1
    ctx->pc = 0x1303a0u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1303a4: 0xfa030070  sqc2        $vf3, 0x70($s0)
    ctx->pc = 0x1303a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1303a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1303a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303ac: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1303acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1303b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1303b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1303b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1303b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1303b8: 0xf8620030  sqc2        $vf2, 0x30($v1)
    ctx->pc = 0x1303b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1303bc: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1303bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1303c0: 0xf8640020  sqc2        $vf4, 0x20($v1)
    ctx->pc = 0x1303c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1303c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1303C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1303C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1303C4u;
            // 0x1303c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1303CCu;
    // 0x1303cc: 0x0  nop
    ctx->pc = 0x1303ccu;
    // NOP
}
