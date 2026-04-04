#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ef678
// Address: 0x1ef678 - 0x1ef6a8
void entry_1ef678_0x1ef6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ef678_0x1ef6a8");
#endif

    ctx->pc = 0x1ef678u;

    // 0x1ef678: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1ef678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1ef67c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ef67cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ef680: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1ef680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1ef684: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1ef684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1ef688: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x1ef688u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef68c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ef68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef690: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ef690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef694: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ef694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef698: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1ef698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1ef69c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF69Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF69Cu;
            // 0x1ef6a0: 0xe4800024  swc1        $f0, 0x24($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF6A4u;
    // 0x1ef6a4: 0x0  nop
    ctx->pc = 0x1ef6a4u;
    // NOP
}
