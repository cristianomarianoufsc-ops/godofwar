#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f34b0
// Address: 0x1f34b0 - 0x1f34f8
void entry_1f34b0_0x1f34f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f34b0_0x1f34f8");
#endif

    ctx->pc = 0x1f34b0u;

    // 0x1f34b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f34b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f34b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f34b8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f34b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1f34bc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1f34bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f34c0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1f34c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1f34c4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f34c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f34c8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1f34c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1f34cc: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x1f34ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f34d0: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1f34d0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1f34d4: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x1f34d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f34d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f34d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f34dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f34dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f34e0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1f34e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f34e4: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x1f34e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x1f34e8: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x1f34e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x1f34ec: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1f34ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1f34f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F34F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F34F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F34F0u;
            // 0x1f34f4: 0xac800044  sw          $zero, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F34F8u;
}
