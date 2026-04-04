#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156B00
// Address: 0x156b00 - 0x156b30
void sub_00156B00_0x156b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156B00_0x156b00");
#endif

    ctx->pc = 0x156b00u;

    // 0x156b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156b04: 0x4be00053  vmaxw.xyzw  $vf1, $vf0, $vf0w
    ctx->pc = 0x156b04u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x156b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156b0c: 0xd88200b0  lqc2        $vf2, 0xB0($a0)
    ctx->pc = 0x156b0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x156b10: 0x4a21133c  vmove.w     $vf1, $vf2
    ctx->pc = 0x156b10u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x156b14: 0xf88100b0  sqc2        $vf1, 0xB0($a0)
    ctx->pc = 0x156b14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x156b18: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x156b18u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x156b1c: 0xc055a8c  jal         func_156A30
    ctx->pc = 0x156B1Cu;
    SET_GPR_U32(ctx, 31, 0x156B24u);
    ctx->pc = 0x156B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156B1Cu;
            // 0x156b20: 0xf88100b0  sqc2        $vf1, 0xB0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156A30u;
    if (runtime->hasFunction(0x156A30u)) {
        auto targetFn = runtime->lookupFunction(0x156A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B24u; }
        if (ctx->pc != 0x156B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156A30_0x156a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B24u; }
        if (ctx->pc != 0x156B24u) { return; }
    }
    ctx->pc = 0x156B24u;
    // 0x156b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156b28: 0x3e00008  jr          $ra
    ctx->pc = 0x156B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156B28u;
            // 0x156b2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156B30u;
}
