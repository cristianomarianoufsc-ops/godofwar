#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_12ed00
// Address: 0x12ed00 - 0x12ed78
void entry_12ed00_0x12ed78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_12ed00_0x12ed78");
#endif

    ctx->pc = 0x12ed00u;

    // 0x12ed00: 0x4be3033c  vmove.xyzw  $vf3, $vf0
    ctx->pc = 0x12ed00u;
    ctx->vu0_vf[3] = ctx->vu0_vf[0];
    // 0x12ed04: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12ed04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12ed08: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x12ed08u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x12ed0c: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x12ed0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12ed10: 0x4be2233d  vmr32.xyzw  $vf2, $vf4
    ctx->pc = 0x12ed10u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x12ed14: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x12ed14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12ed18: 0x4be1133d  vmr32.xyzw  $vf1, $vf2
    ctx->pc = 0x12ed18u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x12ed1c: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x12ed1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12ed20: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x12ed20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12ed24: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x12ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x12ed28: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x12ed28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12ed2c: 0xf8820010  sqc2        $vf2, 0x10($a0)
    ctx->pc = 0x12ed2cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12ed30: 0xf8840020  sqc2        $vf4, 0x20($a0)
    ctx->pc = 0x12ed30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12ed34: 0xf8830030  sqc2        $vf3, 0x30($a0)
    ctx->pc = 0x12ed34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12ed38: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x12ed38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12ed3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ed40: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x12ed40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12ed44: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x12ed44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12ed48: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x12ed48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12ed4c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x12ed4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12ed50: 0xf8430030  sqc2        $vf3, 0x30($v0)
    ctx->pc = 0x12ed50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12ed54: 0xf8420010  sqc2        $vf2, 0x10($v0)
    ctx->pc = 0x12ed54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12ed58: 0xf8440020  sqc2        $vf4, 0x20($v0)
    ctx->pc = 0x12ed58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12ed5c: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x12ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
    // 0x12ed60: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x12ed60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x12ed64: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x12ed64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x12ed68: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x12ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x12ed6c: 0x3e00008  jr          $ra
    ctx->pc = 0x12ED6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ED70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED6Cu;
            // 0x12ed70: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ED74u;
    // 0x12ed74: 0x0  nop
    ctx->pc = 0x12ed74u;
    // NOP
}
