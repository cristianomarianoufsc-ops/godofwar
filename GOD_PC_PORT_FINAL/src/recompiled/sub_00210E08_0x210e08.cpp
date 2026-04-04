#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00210E08
// Address: 0x210e08 - 0x210e70
void sub_00210E08_0x210e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210E08_0x210e08");
#endif

    ctx->pc = 0x210e08u;

    // 0x210e08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x210e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x210e0c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x210e0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x210e10: 0x8c83018c  lw          $v1, 0x18C($a0)
    ctx->pc = 0x210e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x210e14: 0x8c620194  lw          $v0, 0x194($v1)
    ctx->pc = 0x210e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
    // 0x210e18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x210e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x210e1c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x210E1Cu;
    {
        const bool branch_taken_0x210e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210E1Cu;
            // 0x210e20: 0x4be3233c  vmove.xyzw  $vf3, $vf4 (Delay Slot)
        ctx->vu0_vf[3] = ctx->vu0_vf[4];
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e1c) {
            ctx->pc = 0x210E60u;
            goto label_210e60;
        }
    }
    ctx->pc = 0x210E24u;
    // 0x210e24: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x210e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x210e28: 0xd8820130  lqc2        $vf2, 0x130($a0)
    ctx->pc = 0x210e28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x210e2c: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x210e2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x210e30: 0x4be20859  vmuly.xyzw  $vf1, $vf1, $vf2y
    ctx->pc = 0x210e30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210e34: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x210e34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x210e38: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x210e38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210e3c: 0xd8610100  lqc2        $vf1, 0x100($v1)
    ctx->pc = 0x210e3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x210e40: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x210e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x210e44: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x210e44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x210e48: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x210e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210e4c: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x210e4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210e50: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x210e50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210e54: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x210e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210e58: 0xf88400e0  sqc2        $vf4, 0xE0($a0)
    ctx->pc = 0x210e58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x210e5c: 0x0  nop
    ctx->pc = 0x210e5cu;
    // NOP
label_210e60:
    // 0x210e60: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x210e60u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x210e64: 0x3e00008  jr          $ra
    ctx->pc = 0x210E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210E64u;
            // 0x210e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210E60u: goto label_210e60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x210E6Cu;
    // 0x210e6c: 0x0  nop
    ctx->pc = 0x210e6cu;
    // NOP
}
