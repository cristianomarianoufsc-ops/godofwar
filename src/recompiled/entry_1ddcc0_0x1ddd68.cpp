#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ddcc0
// Address: 0x1ddcc0 - 0x1ddd68
void entry_1ddcc0_0x1ddd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ddcc0_0x1ddd68");
#endif

    ctx->pc = 0x1ddcc0u;

    // 0x1ddcc0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ddcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ddcc4: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1ddcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1ddcc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ddcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ddccc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ddcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ddcd0: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1ddcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1ddcd4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDCD4u;
    {
        const bool branch_taken_0x1ddcd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDCD4u;
            // 0x1ddcd8: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddcd4) {
            ctx->pc = 0x1DDCF0u;
            goto label_1ddcf0;
        }
    }
    ctx->pc = 0x1DDCDCu;
    // 0x1ddcdc: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x1ddcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1ddce0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1ddce0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1ddce4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDCE4u;
    {
        const bool branch_taken_0x1ddce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDCE4u;
            // 0x1ddce8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddce4) {
            ctx->pc = 0x1DDCF4u;
            goto label_1ddcf4;
        }
    }
    ctx->pc = 0x1DDCECu;
    // 0x1ddcec: 0x0  nop
    ctx->pc = 0x1ddcecu;
    // NOP
label_1ddcf0:
    // 0x1ddcf0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ddcf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ddcf4:
    // 0x1ddcf4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DDCF4u;
    {
        const bool branch_taken_0x1ddcf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddcf4) {
            ctx->pc = 0x1DDD58u;
            goto label_1ddd58;
        }
    }
    ctx->pc = 0x1DDCFCu;
    // 0x1ddcfc: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x1ddcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x1ddd00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ddd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddd04: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1ddd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ddd08: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1ddd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1ddd0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDD0Cu;
    {
        const bool branch_taken_0x1ddd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD0Cu;
            // 0x1ddd10: 0x24630124  addiu       $v1, $v1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd0c) {
            ctx->pc = 0x1DDD28u;
            goto label_1ddd28;
        }
    }
    ctx->pc = 0x1DDD14u;
    // 0x1ddd14: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ddd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ddd18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ddd18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ddd1c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1ddd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1ddd20: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1ddd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ddd24: 0x0  nop
    ctx->pc = 0x1ddd24u;
    // NOP
label_1ddd28:
    // 0x1ddd28: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x1ddd28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1ddd2c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x1ddd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ddd30: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x1ddd30u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1ddd34: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1ddd34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ddd38: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x1ddd38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ddd3c: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x1ddd3cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1ddd40: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x1ddd40u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ddd44: 0x700314a9  por         $v0, $zero, $v1
    ctx->pc = 0x1ddd44u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1ddd48: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1ddd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x1ddd4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDD4Cu;
    {
        const bool branch_taken_0x1ddd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD4Cu;
            // 0x1ddd50: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd4c) {
            ctx->pc = 0x1DDD60u;
            goto label_1ddd60;
        }
    }
    ctx->pc = 0x1DDD54u;
    // 0x1ddd54: 0x0  nop
    ctx->pc = 0x1ddd54u;
    // NOP
label_1ddd58:
    // 0x1ddd58: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ddd58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ddd5c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1ddd5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1ddd60:
    // 0x1ddd60: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDD60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD60u;
            // 0x1ddd64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DDCF0u: goto label_1ddcf0;
            case 0x1DDCF4u: goto label_1ddcf4;
            case 0x1DDD28u: goto label_1ddd28;
            case 0x1DDD58u: goto label_1ddd58;
            case 0x1DDD60u: goto label_1ddd60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DDD68u;
}
