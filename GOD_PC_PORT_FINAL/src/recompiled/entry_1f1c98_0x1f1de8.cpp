#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f1c98
// Address: 0x1f1c98 - 0x1f1de8
void entry_1f1c98_0x1f1de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f1c98_0x1f1de8");
#endif

    ctx->pc = 0x1f1c98u;

    // 0x1f1c98: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f1c9c: 0x30e94000  andi        $t1, $a3, 0x4000
    ctx->pc = 0x1f1c9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x1f1ca0: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1f1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1f1ca4: 0x30e70800  andi        $a3, $a3, 0x800
    ctx->pc = 0x1f1ca4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2048);
    // 0x1f1ca8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1f1ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1cac: 0x8d030174  lw          $v1, 0x174($t0)
    ctx->pc = 0x1f1cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 372)));
    // 0x1f1cb0: 0x3062004c  andi        $v0, $v1, 0x4C
    ctx->pc = 0x1f1cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)76);
    // 0x1f1cb4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F1CB4u;
    {
        const bool branch_taken_0x1f1cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CB4u;
            // 0x1f1cb8: 0x48a51000  qmtc2.ni    $a1, $vf2 (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cb4) {
            ctx->pc = 0x1F1D80u;
            goto label_1f1d80;
        }
    }
    ctx->pc = 0x1F1CBCu;
    // 0x1f1cbc: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1f1cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1f1cc0: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1F1CC0u;
    {
        const bool branch_taken_0x1f1cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1cc0) {
            ctx->pc = 0x1F1CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CC0u;
            // 0x1f1cc4: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1D84u;
            goto label_1f1d84;
        }
    }
    ctx->pc = 0x1F1CC8u;
    // 0x1f1cc8: 0x54e00008  bnel        $a3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1CC8u;
    {
        const bool branch_taken_0x1f1cc8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1cc8) {
            ctx->pc = 0x1F1CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CC8u;
            // 0x1f1ccc: 0x8c830058  lw          $v1, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1CECu;
            goto label_1f1cec;
        }
    }
    ctx->pc = 0x1F1CD0u;
    // 0x1f1cd0: 0x5120002c  beql        $t1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1F1CD0u;
    {
        const bool branch_taken_0x1f1cd0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1cd0) {
            ctx->pc = 0x1F1CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CD0u;
            // 0x1f1cd4: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1D84u;
            goto label_1f1d84;
        }
    }
    ctx->pc = 0x1F1CD8u;
    // 0x1f1cd8: 0x8d0202d8  lw          $v0, 0x2D8($t0)
    ctx->pc = 0x1f1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 728)));
    // 0x1f1cdc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1f1cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1f1ce0: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F1CE0u;
    {
        const bool branch_taken_0x1f1ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1ce0) {
            ctx->pc = 0x1F1CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CE0u;
            // 0x1f1ce4: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1D84u;
            goto label_1f1d84;
        }
    }
    ctx->pc = 0x1F1CE8u;
    // 0x1f1ce8: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1f1ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1f1cec:
    // 0x1f1cec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f1cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1cf0: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F1CF0u;
    {
        const bool branch_taken_0x1f1cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F1CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CF0u;
            // 0x1f1cf4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cf0) {
            ctx->pc = 0x1F1D28u;
            goto label_1f1d28;
        }
    }
    ctx->pc = 0x1F1CF8u;
    // 0x1f1cf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1CF8u;
    {
        const bool branch_taken_0x1f1cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CF8u;
            // 0x1f1cfc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cf8) {
            ctx->pc = 0x1F1D10u;
            goto label_1f1d10;
        }
    }
    ctx->pc = 0x1F1D00u;
    // 0x1f1d00: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1D00u;
    {
        const bool branch_taken_0x1f1d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1d00) {
            ctx->pc = 0x1F1D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D00u;
            // 0x1f1d04: 0xac850058  sw          $a1, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1D20u;
            goto label_1f1d20;
        }
    }
    ctx->pc = 0x1F1D08u;
    // 0x1f1d08: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1F1D08u;
    {
        const bool branch_taken_0x1f1d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D08u;
            // 0x1f1d0c: 0x8c84005c  lw          $a0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d08) {
            ctx->pc = 0x1F1DD0u;
            goto label_1f1dd0;
        }
    }
    ctx->pc = 0x1F1D10u;
label_1f1d10:
    // 0x1f1d10: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F1D10u;
    {
        const bool branch_taken_0x1f1d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f1d10) {
            ctx->pc = 0x1F1D6Cu;
            goto label_1f1d6c;
        }
    }
    ctx->pc = 0x1F1D18u;
    // 0x1f1d18: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1F1D18u;
    {
        const bool branch_taken_0x1f1d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D18u;
            // 0x1f1d1c: 0x8c84005c  lw          $a0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d18) {
            ctx->pc = 0x1F1DD0u;
            goto label_1f1dd0;
        }
    }
    ctx->pc = 0x1F1D20u;
label_1f1d20:
    // 0x1f1d20: 0x700617c9  prot3w      $v0, $a2
    ctx->pc = 0x1f1d20u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1f1d24: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x1f1d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
label_1f1d28:
    // 0x1f1d28: 0x8d0202d8  lw          $v0, 0x2D8($t0)
    ctx->pc = 0x1f1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 728)));
    // 0x1f1d2c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1f1d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1f1d30: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1D30u;
    {
        const bool branch_taken_0x1f1d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1d30) {
            ctx->pc = 0x1F1D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D30u;
            // 0x1f1d34: 0xc4820060  lwc1        $f2, 0x60($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1D54u;
            goto label_1f1d54;
        }
    }
    ctx->pc = 0x1F1D38u;
    // 0x1f1d38: 0x55200006  bnel        $t1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1D38u;
    {
        const bool branch_taken_0x1f1d38 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1d38) {
            ctx->pc = 0x1F1D3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D38u;
            // 0x1f1d3c: 0xc4820060  lwc1        $f2, 0x60($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1D54u;
            goto label_1f1d54;
        }
    }
    ctx->pc = 0x1F1D40u;
    // 0x1f1d40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1d44: 0x70061fc9  prot3w      $v1, $a2
    ctx->pc = 0x1f1d44u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1f1d48: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x1f1d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
    // 0x1f1d4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1D4Cu;
    {
        const bool branch_taken_0x1f1d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D4Cu;
            // 0x1f1d50: 0xac820058  sw          $v0, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d4c) {
            ctx->pc = 0x1F1D6Cu;
            goto label_1f1d6c;
        }
    }
    ctx->pc = 0x1F1D54u;
label_1f1d54:
    // 0x1f1d54: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1f1d54u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f1d58: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1f1d58u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1f1d5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1d60: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f1d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1d64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F1D64u;
    {
        const bool branch_taken_0x1f1d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D64u;
            // 0x1f1d68: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d64) {
            ctx->pc = 0x1F1DA4u;
            goto label_1f1da4;
        }
    }
    ctx->pc = 0x1F1D6Cu;
label_1f1d6c:
    // 0x1f1d6c: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1f1d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x1f1d70: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1f1d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1f1d74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f1d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1d78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1D78u;
    {
        const bool branch_taken_0x1f1d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D78u;
            // 0x1f1d7c: 0xc480005c  lwc1        $f0, 0x5C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d78) {
            ctx->pc = 0x1F1DC0u;
            goto label_1f1dc0;
        }
    }
    ctx->pc = 0x1F1D80u;
label_1f1d80:
    // 0x1f1d80: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x1f1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1f1d84:
    // 0x1f1d84: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F1D84u;
    {
        const bool branch_taken_0x1f1d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D84u;
            // 0x1f1d88: 0x48231000  qmfc2.ni    $v1, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d84) {
            ctx->pc = 0x1F1DB0u;
            goto label_1f1db0;
        }
    }
    ctx->pc = 0x1F1D8Cu;
    // 0x1f1d8c: 0xc4820060  lwc1        $f2, 0x60($a0)
    ctx->pc = 0x1f1d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f1d90: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1f1d90u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1f1d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1d98: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f1d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1d9c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1f1d9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1f1da0: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x1f1da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_1f1da4:
    // 0x1f1da4: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x1f1da4u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x1f1da8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1DA8u;
    {
        const bool branch_taken_0x1f1da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1DA8u;
            // 0x1f1dac: 0xe481005c  swc1        $f1, 0x5C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1da8) {
            ctx->pc = 0x1F1DC8u;
            goto label_1f1dc8;
        }
    }
    ctx->pc = 0x1F1DB0u;
label_1f1db0:
    // 0x1f1db0: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x1f1db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1db4: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1f1db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1f1db8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f1db8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1f1dbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f1dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f1dc0:
    // 0x1f1dc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f1dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f1dc4: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x1f1dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
label_1f1dc8:
    // 0x1f1dc8: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x1f1dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1f1dcc: 0x0  nop
    ctx->pc = 0x1f1dccu;
    // NOP
label_1f1dd0:
    // 0x1f1dd0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1f1dd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f1dd4: 0x4a811044  vsubx.y     $vf1, $vf2, $vf1x
    ctx->pc = 0x1f1dd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f1dd8: 0x4a810081  vaddy.y     $vf2, $vf0, $vf1y
    ctx->pc = 0x1f1dd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f1ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1DDCu;
            // 0x1f1de0: 0x48221000  qmfc2.ni    $v0, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F1CECu: goto label_1f1cec;
            case 0x1F1D10u: goto label_1f1d10;
            case 0x1F1D20u: goto label_1f1d20;
            case 0x1F1D28u: goto label_1f1d28;
            case 0x1F1D54u: goto label_1f1d54;
            case 0x1F1D6Cu: goto label_1f1d6c;
            case 0x1F1D80u: goto label_1f1d80;
            case 0x1F1D84u: goto label_1f1d84;
            case 0x1F1DA4u: goto label_1f1da4;
            case 0x1F1DB0u: goto label_1f1db0;
            case 0x1F1DC0u: goto label_1f1dc0;
            case 0x1F1DC8u: goto label_1f1dc8;
            case 0x1F1DD0u: goto label_1f1dd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F1DE4u;
    // 0x1f1de4: 0x0  nop
    ctx->pc = 0x1f1de4u;
    // NOP
}
