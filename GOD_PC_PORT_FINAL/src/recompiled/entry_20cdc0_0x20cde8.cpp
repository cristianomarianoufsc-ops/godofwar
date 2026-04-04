#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_20cdc0
// Address: 0x20cdc0 - 0x20cde8
void entry_20cdc0_0x20cde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_20cdc0_0x20cde8");
#endif

    ctx->pc = 0x20cdc0u;

    // 0x20cdc0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x20cdc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20cdc4: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x20cdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20cdc8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x20cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x20cdcc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20cdd0: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x20cdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x20cdd4: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x20cdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20cdd8: 0xac830050  sw          $v1, 0x50($a0)
    ctx->pc = 0x20cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
    // 0x20cddc: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x20cddcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20cde0: 0x3e00008  jr          $ra
    ctx->pc = 0x20CDE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CDE0u;
            // 0x20cde4: 0xa4800054  sh          $zero, 0x54($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20CDE8u;
}
