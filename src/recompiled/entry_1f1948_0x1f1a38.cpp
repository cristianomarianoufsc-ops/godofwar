#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f1948
// Address: 0x1f1948 - 0x1f1a38
void entry_1f1948_0x1f1a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f1948_0x1f1a38");
#endif

    ctx->pc = 0x1f1948u;

    // 0x1f1948: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f1948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f194c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f194cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f1950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f1954: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1f1954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1f1958: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x1f1958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x1f195c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1f195cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1f1960: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x1f1960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x1f1964: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x1f1964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x1f1968: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x1f1968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x1f196c: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x1f196cu;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x1f1970: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x1f1970u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1f1974: 0xf8820030  sqc2        $vf2, 0x30($a0)
    ctx->pc = 0x1f1974u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f1978: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x1f1978u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1f197c: 0xf8830020  sqc2        $vf3, 0x20($a0)
    ctx->pc = 0x1f197cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f1980: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x1f1980u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f1984: 0x4be50b3d  vmr32.xyzw  $vf5, $vf1
    ctx->pc = 0x1f1984u;
    ctx->vu0_vf[5] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1f1988: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1f1988u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1f198c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1f198cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f1990: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1f1990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f1994: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1f1994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f1998: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1f1998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f199c: 0xfba50030  sqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1f199cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1f19a0: 0xf8840070  sqc2        $vf4, 0x70($a0)
    ctx->pc = 0x1f19a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f19a4: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x1f19a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
    // 0x1f19a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f19a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f19ac: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x1f19acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x1f19b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f19b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f19b4: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x1f19b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x1f19b8: 0xe4810090  swc1        $f1, 0x90($a0)
    ctx->pc = 0x1f19b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x1f19bc: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x1f19bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x1f19c0: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x1f19c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x1f19c4: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x1f19c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x1f19c8: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x1f19c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x1f19cc: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x1f19ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x1f19d0: 0xf88400a0  sqc2        $vf4, 0xA0($a0)
    ctx->pc = 0x1f19d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f19d4: 0xf88400b0  sqc2        $vf4, 0xB0($a0)
    ctx->pc = 0x1f19d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f19d8: 0xf88400c0  sqc2        $vf4, 0xC0($a0)
    ctx->pc = 0x1f19d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f19dc: 0x248300f0  addiu       $v1, $a0, 0xF0
    ctx->pc = 0x1f19dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x1f19e0: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x1f19e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x1f19e4: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x1f19e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x1f19e8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f19e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f19ec: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x1f19ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x1f19f0: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x1f19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1f19f4: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x1f19f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
label_1f19f8:
    // 0x1f19f8: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x1f19f8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f19fc: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x1f19fcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f1a00: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x1f1a00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x1f1a04: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x1f1a04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x1f1a08: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1f1a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1f1a0c: 0x1445fffa  bne         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F1A0Cu;
    {
        const bool branch_taken_0x1f1a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F1A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A0Cu;
            // 0x1f1a10: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a0c) {
            ctx->pc = 0x1F19F8u;
            runtime->cooperativeGuestYield();
            goto label_1f19f8;
        }
    }
    ctx->pc = 0x1F1A14u;
    // 0x1f1a14: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f1a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f1a18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f1a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1a1c: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x1f1a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x1f1a20: 0xe4800168  swc1        $f0, 0x168($a0)
    ctx->pc = 0x1f1a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 360), bits); }
    // 0x1f1a24: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x1f1a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x1f1a28: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x1f1a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x1f1a2c: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x1f1a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x1f1a30: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A30u;
            // 0x1f1a34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F19F8u: goto label_1f19f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F1A38u;
}
