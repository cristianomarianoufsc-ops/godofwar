#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F0500
// Address: 0x1f0500 - 0x1f0550
void sub_001F0500_0x1f0500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0500_0x1f0500");
#endif

    ctx->pc = 0x1f0500u;

    // 0x1f0500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f0504: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f0504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0508: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f0508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f050c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f050cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0510: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f0510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f0514: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1f0514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0518: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1f0518u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f051c: 0xd8420020  lqc2        $vf2, 0x20($v0)
    ctx->pc = 0x1f051cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f0520: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1f0520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f0524: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1f0524u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f0528: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x1f0528u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f052c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x1f052cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f0530: 0xc07c0ca  jal         func_1F0328
    ctx->pc = 0x1F0530u;
    SET_GPR_U32(ctx, 31, 0x1F0538u);
    ctx->pc = 0x1F0534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0530u;
            // 0x1f0534: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0328u;
    if (runtime->hasFunction(0x1F0328u)) {
        auto targetFn = runtime->lookupFunction(0x1F0328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0538u; }
        if (ctx->pc != 0x1F0538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0328_0x1f0328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0538u; }
        if (ctx->pc != 0x1F0538u) { return; }
    }
    ctx->pc = 0x1F0538u;
    // 0x1f0538: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1f0538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1f053c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f053cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0540: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0544: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0544u;
            // 0x1f0548: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F054Cu;
    // 0x1f054c: 0x0  nop
    ctx->pc = 0x1f054cu;
    // NOP
}
