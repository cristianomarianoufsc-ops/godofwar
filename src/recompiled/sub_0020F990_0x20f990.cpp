#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020F990
// Address: 0x20f990 - 0x20f9e0
void sub_0020F990_0x20f990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F990_0x20f990");
#endif

    ctx->pc = 0x20f990u;

    // 0x20f990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20f990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20f994: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x20f994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20f99c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x20f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x20f9a0: 0x3463f800  ori         $v1, $v1, 0xF800
    ctx->pc = 0x20f9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x20f9a4: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x20f9a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f9a8: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x20f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x20f9ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20f9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20f9b0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x20f9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x20f9b4: 0xace20174  sw          $v0, 0x174($a3)
    ctx->pc = 0x20f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 372), GPR_U32(ctx, 2));
    // 0x20f9b8: 0xace00234  sw          $zero, 0x234($a3)
    ctx->pc = 0x20f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 564), GPR_U32(ctx, 0));
    // 0x20f9bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20f9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f9c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20f9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f9c4: 0xf8e10210  sqc2        $vf1, 0x210($a3)
    ctx->pc = 0x20f9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 528), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20f9c8: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x20F9C8u;
    SET_GPR_U32(ctx, 31, 0x20F9D0u);
    ctx->pc = 0x20F9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F9C8u;
            // 0x20f9cc: 0xace00240  sw          $zero, 0x240($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (runtime->hasFunction(0x242A88u)) {
        auto targetFn = runtime->lookupFunction(0x242A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F9D0u; }
        if (ctx->pc != 0x20F9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a88_0x242a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F9D0u; }
        if (ctx->pc != 0x20F9D0u) { return; }
    }
    ctx->pc = 0x20F9D0u;
    // 0x20f9d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x20F9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F9D4u;
            // 0x20f9d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20F9DCu;
    // 0x20f9dc: 0x0  nop
    ctx->pc = 0x20f9dcu;
    // NOP
}
