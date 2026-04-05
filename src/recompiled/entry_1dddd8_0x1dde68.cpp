#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1dddd8
// Address: 0x1dddd8 - 0x1dde68
void entry_1dddd8_0x1dde68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1dddd8_0x1dde68");
#endif

    ctx->pc = 0x1dddd8u;

    // 0x1dddd8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1dddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ddddc: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1ddddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1ddde0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ddde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ddde4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ddde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ddde8: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1ddde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1dddec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDDECu;
    {
        const bool branch_taken_0x1dddec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDECu;
            // 0x1dddf0: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dddec) {
            ctx->pc = 0x1DDE00u;
            goto label_1dde00;
        }
    }
    ctx->pc = 0x1DDDF4u;
    // 0x1dddf4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1dddf4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1dddf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDDF8u;
    {
        const bool branch_taken_0x1dddf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDF8u;
            // 0x1dddfc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dddf8) {
            ctx->pc = 0x1DDE04u;
            goto label_1dde04;
        }
    }
    ctx->pc = 0x1DDE00u;
label_1dde00:
    // 0x1dde00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dde00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dde04:
    // 0x1dde04: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DDE04u;
    {
        const bool branch_taken_0x1dde04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dde04) {
            ctx->pc = 0x1DDE60u;
            goto label_1dde60;
        }
    }
    ctx->pc = 0x1DDE0Cu;
    // 0x1dde0c: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x1dde0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x1dde10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1dde10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dde14: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1dde14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1dde18: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1dde18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1dde1c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDE1Cu;
    {
        const bool branch_taken_0x1dde1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dde1c) {
            ctx->pc = 0x1DDE20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE1Cu;
            // 0x1dde20: 0x24640124  addiu       $a0, $v1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDE38u;
            goto label_1dde38;
        }
    }
    ctx->pc = 0x1DDE24u;
    // 0x1dde24: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1dde24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1dde28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dde28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dde2c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1dde2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1dde30: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1dde30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dde34: 0x0  nop
    ctx->pc = 0x1dde34u;
    // NOP
label_1dde38:
    // 0x1dde38: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1dde38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1dde3c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1dde3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1dde40: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x1dde40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dde44: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1dde44u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dde48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dde48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dde4c: 0x70051fc9  prot3w      $v1, $a1
    ctx->pc = 0x1dde4cu;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1dde50: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1dde50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1dde54: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1dde54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1dde58: 0x70051789  pexew       $v0, $a1
    ctx->pc = 0x1dde58u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1dde5c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1dde5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1dde60:
    // 0x1dde60: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DDE00u: goto label_1dde00;
            case 0x1DDE04u: goto label_1dde04;
            case 0x1DDE38u: goto label_1dde38;
            case 0x1DDE60u: goto label_1dde60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DDE68u;
}
