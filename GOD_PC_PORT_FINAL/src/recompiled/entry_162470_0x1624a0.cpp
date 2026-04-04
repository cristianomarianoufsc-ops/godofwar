#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_162470
// Address: 0x162470 - 0x1624a0
void entry_162470_0x1624a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_162470_0x1624a0");
#endif

    ctx->pc = 0x162470u;

    // 0x162470: 0x8c82014c  lw          $v0, 0x14C($a0)
    ctx->pc = 0x162470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x162474: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x162474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x162478: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x162478u;
    {
        const bool branch_taken_0x162478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162478) {
            ctx->pc = 0x16247Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162478u;
            // 0x16247c: 0x8c830154  lw          $v1, 0x154($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162488u;
            goto label_162488;
        }
    }
    ctx->pc = 0x162480u;
    // 0x162480: 0x3e00008  jr          $ra
    ctx->pc = 0x162480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162480u;
            // 0x162484: 0x788200e0  lq          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162488u: goto label_162488;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162488u;
label_162488:
    // 0x162488: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x162488u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16248c: 0xd88200e0  lqc2        $vf2, 0xE0($a0)
    ctx->pc = 0x16248cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x162490: 0x4a211040  vaddx.w     $vf1, $vf2, $vf1x
    ctx->pc = 0x162490u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162494: 0x4a220b3c  vmove.w     $vf2, $vf1
    ctx->pc = 0x162494u;
    ctx->vu0_vf[2] = ctx->vu0_vf[1];
    // 0x162498: 0x3e00008  jr          $ra
    ctx->pc = 0x162498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16249Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162498u;
            // 0x16249c: 0x48221000  qmfc2.ni    $v0, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162488u: goto label_162488;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1624A0u;
}
