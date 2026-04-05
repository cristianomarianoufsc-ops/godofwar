#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f3f80
// Address: 0x1f3f80 - 0x1f3fd8
void entry_1f3f80_0x1f3fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f3f80_0x1f3fd8");
#endif

    ctx->pc = 0x1f3f80u;

    // 0x1f3f80: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1f3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1f3f84: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1f3f84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1f3f88: 0x24428b30  addiu       $v0, $v0, -0x74D0
    ctx->pc = 0x1f3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937392));
    // 0x1f3f8c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1f3f8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f3f90: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1f3f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1f3f94: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1f3f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1f3f98: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1f3f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1f3f9c: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x1f3f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3fa0: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x1f3fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f3fa4: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x1f3fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f3fa8: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x1f3fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f3fac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f3facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f3fb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3fb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f3fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f3fb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3fbc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f3fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3fc0: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x1f3fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x1f3fc4: 0xe4810058  swc1        $f1, 0x58($a0)
    ctx->pc = 0x1f3fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x1f3fc8: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x1f3fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x1f3fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3FCCu;
            // 0x1f3fd0: 0xa480005c  sh          $zero, 0x5C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3FD4u;
    // 0x1f3fd4: 0x0  nop
    ctx->pc = 0x1f3fd4u;
    // NOP
}
