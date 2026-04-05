#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00158DA8
// Address: 0x158da8 - 0x1590f0
void sub_00158DA8_0x158da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158DA8_0x158da8");
#endif

    ctx->pc = 0x158da8u;

    // 0x158da8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x158da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x158dac: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x158dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x158db0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x158db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x158db4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x158db4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x158db8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x158db8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158dbc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x158dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x158dc0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x158dc0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x158dc4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x158dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x158dc8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x158dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x158dcc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x158dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x158dd0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x158dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x158dd4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x158dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x158dd8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x158dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x158ddc: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x158ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x158de0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x158de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x158de4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x158de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x158de8: 0x8c631058  lw          $v1, 0x1058($v1)
    ctx->pc = 0x158de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4184)));
    // 0x158dec: 0xd8a100b0  lqc2        $vf1, 0xB0($a1)
    ctx->pc = 0x158decu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x158df0: 0x8ca400d0  lw          $a0, 0xD0($a1)
    ctx->pc = 0x158df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x158df4: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x158df4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x158df8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x158df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x158dfc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x158dfcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x158e00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x158e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x158e04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x158e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158e0c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x158e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x158e10: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x158e10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158e14: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x158e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x158e18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x158e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x158e1c: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x158e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x158e20: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x158E20u;
    {
        const bool branch_taken_0x158e20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158E20u;
            // 0x158e24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e20) {
            ctx->pc = 0x158E3Cu;
            goto label_158e3c;
        }
    }
    ctx->pc = 0x158E28u;
    // 0x158e28: 0xdca200c0  ld          $v0, 0xC0($a1)
    ctx->pc = 0x158e28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x158e2c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x158e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x158e30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x158e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158e34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x158e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x158e38: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x158e38u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_158e3c:
    // 0x158e3c: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x158e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x158e40: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x158e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x158e44: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x158e44u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x158e48: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x158e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x158e4c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x158e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x158e50: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x158E50u;
    {
        const bool branch_taken_0x158e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158E50u;
            // 0x158e54: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e50) {
            ctx->pc = 0x1590BCu;
            goto label_1590bc;
        }
    }
    ctx->pc = 0x158E58u;
label_158e58:
    // 0x158e58: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x158e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x158e5c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x158e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x158e60: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x158e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x158e64: 0x2e41021  addu        $v0, $s7, $a0
    ctx->pc = 0x158e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x158e68: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x158e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x158e6c: 0x2e2f021  addu        $fp, $s7, $v0
    ctx->pc = 0x158e6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x158e70: 0x97c60000  lhu         $a2, 0x0($fp)
    ctx->pc = 0x158e70u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x158e74: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x158e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x158e78: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158E78u;
    {
        const bool branch_taken_0x158e78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x158E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158E78u;
            // 0x158e7c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e78) {
            ctx->pc = 0x158EA0u;
            goto label_158ea0;
        }
    }
    ctx->pc = 0x158E80u;
    // 0x158e80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x158e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x158e84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x158e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158e88: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x158e88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158e8c: 0x0  nop
    ctx->pc = 0x158e8cu;
    // NOP
    // 0x158e90: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x158E90u;
    {
        const bool branch_taken_0x158e90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158E90u;
            // 0x158e94: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e90) {
            ctx->pc = 0x158EA8u;
            goto label_158ea8;
        }
    }
    ctx->pc = 0x158E98u;
    // 0x158e98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x158E98u;
    {
        const bool branch_taken_0x158e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158E98u;
            // 0x158e9c: 0x8c47c2b8  lw          $a3, -0x3D48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e98) {
            ctx->pc = 0x158EB8u;
            goto label_158eb8;
        }
    }
    ctx->pc = 0x158EA0u;
label_158ea0:
    // 0x158ea0: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158EA0u;
    {
        const bool branch_taken_0x158ea0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x158EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158EA0u;
            // 0x158ea4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ea0) {
            ctx->pc = 0x158EB4u;
            goto label_158eb4;
        }
    }
    ctx->pc = 0x158EA8u;
label_158ea8:
    // 0x158ea8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x158ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x158eac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x158EACu;
    {
        const bool branch_taken_0x158eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158EACu;
            // 0x158eb0: 0x8c47c2bc  lw          $a3, -0x3D44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158eac) {
            ctx->pc = 0x158EB8u;
            goto label_158eb8;
        }
    }
    ctx->pc = 0x158EB4u;
label_158eb4:
    // 0x158eb4: 0x8c47c2c0  lw          $a3, -0x3D40($v0)
    ctx->pc = 0x158eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951616)));
label_158eb8:
    // 0x158eb8: 0x97c20008  lhu         $v0, 0x8($fp)
    ctx->pc = 0x158eb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x158ebc: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x158ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158ec0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x158ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x158ec4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x158ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x158ec8: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x158ec8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158ecc: 0x8e850044  lw          $a1, 0x44($s4)
    ctx->pc = 0x158eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x158ed0: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x158ED0u;
    {
        const bool branch_taken_0x158ed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x158ed0) {
            ctx->pc = 0x158ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158ED0u;
            // 0x158ed4: 0x9682003c  lhu         $v0, 0x3C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158F0Cu;
            goto label_158f0c;
        }
    }
    ctx->pc = 0x158ED8u;
    // 0x158ed8: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x158ed8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x158edc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x158edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x158ee0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158EE0u;
    {
        const bool branch_taken_0x158ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158EE0u;
            // 0x158ee4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ee0) {
            ctx->pc = 0x158F08u;
            goto label_158f08;
        }
    }
    ctx->pc = 0x158EE8u;
    // 0x158ee8: 0x8c44e854  lw          $a0, -0x17AC($v0)
    ctx->pc = 0x158ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961236)));
    // 0x158eec: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x158eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x158ef0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x158ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158ef4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x158ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x158ef8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x158ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x158efc: 0xac4500dc  sw          $a1, 0xDC($v0)
    ctx->pc = 0x158efcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 5));
    // 0x158f00: 0xac8300d8  sw          $v1, 0xD8($a0)
    ctx->pc = 0x158f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 3));
    // 0x158f04: 0x0  nop
    ctx->pc = 0x158f04u;
    // NOP
label_158f08:
    // 0x158f08: 0x9682003c  lhu         $v0, 0x3C($s4)
    ctx->pc = 0x158f08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 60)));
label_158f0c:
    // 0x158f0c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x158f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x158f10: 0x434825  or          $t1, $v0, $v1
    ctx->pc = 0x158f10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x158f14: 0x31228000  andi        $v0, $t1, 0x8000
    ctx->pc = 0x158f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)32768);
    // 0x158f18: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x158F18u;
    {
        const bool branch_taken_0x158f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158f18) {
            ctx->pc = 0x158F1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158F18u;
            // 0x158f1c: 0x9683003e  lhu         $v1, 0x3E($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 62)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158F30u;
            goto label_158f30;
        }
    }
    ctx->pc = 0x158F20u;
    // 0x158f20: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x158f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x158f24: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x158F24u;
    {
        const bool branch_taken_0x158f24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x158F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158F24u;
            // 0x158f28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f24) {
            ctx->pc = 0x158F30u;
            goto label_158f30;
        }
    }
    ctx->pc = 0x158F2Cu;
    // 0x158f2c: 0x9683003e  lhu         $v1, 0x3E($s4)
    ctx->pc = 0x158f2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 62)));
label_158f30:
    // 0x158f30: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x158f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x158f34: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x158f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158f38: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x158f38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x158f3c: 0x24e60024  addiu       $a2, $a3, 0x24
    ctx->pc = 0x158f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x158f40: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x158f40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x158f44: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x158f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x158f48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x158f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x158f4c: 0x86880040  lh          $t0, 0x40($s4)
    ctx->pc = 0x158f4cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x158f50: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x158f50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x158f54: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x158f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x158f58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x158f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x158f5c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x158f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x158f60: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x158f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x158f64: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x158f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x158f68: 0x8c47499c  lw          $a3, 0x499C($v0)
    ctx->pc = 0x158f68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18844)));
    // 0x158f6c: 0x2510ffff  addiu       $s0, $t0, -0x1
    ctx->pc = 0x158f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x158f70: 0x8c630068  lw          $v1, 0x68($v1)
    ctx->pc = 0x158f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x158f74: 0x31227fff  andi        $v0, $t1, 0x7FFF
    ctx->pc = 0x158f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)32767);
    // 0x158f78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x158f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x158f7c: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x158f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x158f80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x158f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x158f84: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x158f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158f88: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x158f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x158f8c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x158f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x158f90: 0x400013  mtlo        $v0
    ctx->pc = 0x158f90u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x158f94: 0x70870000  madd        $zero, $a0, $a3
    ctx->pc = 0x158f94u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x158f98: 0x1012  mflo        $v0
    ctx->pc = 0x158f98u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x158f9c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x158f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x158fa0: 0x6000040  bltz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x158FA0u;
    {
        const bool branch_taken_0x158fa0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x158FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158FA0u;
            // 0x158fa4: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fa0) {
            ctx->pc = 0x1590A4u;
            goto label_1590a4;
        }
    }
    ctx->pc = 0x158FA8u;
    // 0x158fa8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x158fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x158fac: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x158facu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158fb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x158fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158fb4: 0x0  nop
    ctx->pc = 0x158fb4u;
    // NOP
label_158fb8:
    // 0x158fb8: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x158fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x158fbc: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x158fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x158fc0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x158fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x158fc4: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x158fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x158fc8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x158FC8u;
    {
        const bool branch_taken_0x158fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158FC8u;
            // 0x158fcc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fc8) {
            ctx->pc = 0x159000u;
            goto label_159000;
        }
    }
    ctx->pc = 0x158FD0u;
    // 0x158fd0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x158fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x158fd4: 0x8c44007c  lw          $a0, 0x7C($v0)
    ctx->pc = 0x158fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x158fd8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158FD8u;
    {
        const bool branch_taken_0x158fd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x158FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158FD8u;
            // 0x158fdc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fd8) {
            ctx->pc = 0x159000u;
            goto label_159000;
        }
    }
    ctx->pc = 0x158FE0u;
    // 0x158fe0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x158fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158fe4: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x158fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x158fe8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x158fe8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x158fec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x158FECu;
    {
        const bool branch_taken_0x158fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158FECu;
            // 0x158ff0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fec) {
            ctx->pc = 0x159000u;
            goto label_159000;
        }
    }
    ctx->pc = 0x158FF4u;
    // 0x158ff4: 0xc055c40  jal         func_157100
    ctx->pc = 0x158FF4u;
    SET_GPR_U32(ctx, 31, 0x158FFCu);
    ctx->pc = 0x158FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158FF4u;
            // 0x158ff8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (runtime->hasFunction(0x157100u)) {
        auto targetFn = runtime->lookupFunction(0x157100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158FFCu; }
        if (ctx->pc != 0x158FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157100_0x157100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158FFCu; }
        if (ctx->pc != 0x158FFCu) { return; }
    }
    ctx->pc = 0x158FFCu;
    // 0x158ffc: 0x0  nop
    ctx->pc = 0x158ffcu;
    // NOP
label_159000:
    // 0x159000: 0x8e560000  lw          $s6, 0x0($s2)
    ctx->pc = 0x159000u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x159004: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x159004u;
    {
        const bool branch_taken_0x159004 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x159008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159004u;
            // 0x159008: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159004) {
            ctx->pc = 0x159020u;
            goto label_159020;
        }
    }
    ctx->pc = 0x15900Cu;
    // 0x15900c: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x15900cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x159010: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x159010u;
    {
        const bool branch_taken_0x159010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x159014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159010u;
            // 0x159014: 0x3c060033  lui         $a2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159010) {
            ctx->pc = 0x159028u;
            goto label_159028;
        }
    }
    ctx->pc = 0x159018u;
    // 0x159018: 0xc059afa  jal         func_166BE8
    ctx->pc = 0x159018u;
    SET_GPR_U32(ctx, 31, 0x159020u);
    ctx->pc = 0x166BE8u;
    if (runtime->hasFunction(0x166BE8u)) {
        auto targetFn = runtime->lookupFunction(0x166BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159020u; }
        if (ctx->pc != 0x159020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166BE8_0x166be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159020u; }
        if (ctx->pc != 0x159020u) { return; }
    }
    ctx->pc = 0x159020u;
label_159020:
    // 0x159020: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x159020u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x159024: 0x0  nop
    ctx->pc = 0x159024u;
    // NOP
label_159028:
    // 0x159028: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x159028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15902c: 0x8cc51060  lw          $a1, 0x1060($a2)
    ctx->pc = 0x15902cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4192)));
    // 0x159030: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x159030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x159034: 0x8c63105c  lw          $v1, 0x105C($v1)
    ctx->pc = 0x159034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4188)));
    // 0x159038: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x159038u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x15903c: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x15903cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x159040: 0x24a40018  addiu       $a0, $a1, 0x18
    ctx->pc = 0x159040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x159044: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x159044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x159048: 0xacc41060  sw          $a0, 0x1060($a2)
    ctx->pc = 0x159048u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4192), GPR_U32(ctx, 4));
    // 0x15904c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x15904cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x159050: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x159050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x159054: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x159054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x159058: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x159058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15905c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x15905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x159060: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x159060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x159064: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x159064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x159068: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x159068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x15906c: 0x8ca449a8  lw          $a0, 0x49A8($a1)
    ctx->pc = 0x15906cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18856)));
    // 0x159070: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x159070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x159074: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x159074u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159078: 0xac760000  sw          $s6, 0x0($v1)
    ctx->pc = 0x159078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
    // 0x15907c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x15907cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x159080: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x159080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
    // 0x159084: 0xa0620015  sb          $v0, 0x15($v1)
    ctx->pc = 0x159084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 2));
    // 0x159088: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x159088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15908c: 0xac7e0004  sw          $fp, 0x4($v1)
    ctx->pc = 0x15908cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 30));
    // 0x159090: 0xa0620016  sb          $v0, 0x16($v1)
    ctx->pc = 0x159090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x159094: 0xe4740010  swc1        $f20, 0x10($v1)
    ctx->pc = 0x159094u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x159098: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x159098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x15909c: 0x601ffc6  bgez        $s0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x15909Cu;
    {
        const bool branch_taken_0x15909c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1590A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15909Cu;
            // 0x1590a0: 0xa0640014  sb          $a0, 0x14($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15909c) {
            ctx->pc = 0x158FB8u;
            runtime->cooperativeGuestYield();
            goto label_158fb8;
        }
    }
    ctx->pc = 0x1590A4u;
label_1590a4:
    // 0x1590a4: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x1590a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1590a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1590a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1590ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1590acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1590b0: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1590b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1590b4: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
    ctx->pc = 0x1590B4u;
    {
        const bool branch_taken_0x1590b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1590B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1590B4u;
            // 0x1590b8: 0xafa5001c  sw          $a1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590b4) {
            ctx->pc = 0x158E58u;
            runtime->cooperativeGuestYield();
            goto label_158e58;
        }
    }
    ctx->pc = 0x1590BCu;
label_1590bc:
    // 0x1590bc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1590bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1590c0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1590c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1590c4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1590c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1590c8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1590c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1590cc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1590ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1590d0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1590d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1590d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1590d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1590d8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1590d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1590dc: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1590dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1590e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1590e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1590e4: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1590e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1590e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1590E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1590ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1590E8u;
            // 0x1590ec: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158E3Cu: goto label_158e3c;
            case 0x158E58u: goto label_158e58;
            case 0x158EA0u: goto label_158ea0;
            case 0x158EA8u: goto label_158ea8;
            case 0x158EB4u: goto label_158eb4;
            case 0x158EB8u: goto label_158eb8;
            case 0x158F08u: goto label_158f08;
            case 0x158F0Cu: goto label_158f0c;
            case 0x158F30u: goto label_158f30;
            case 0x158FB8u: goto label_158fb8;
            case 0x159000u: goto label_159000;
            case 0x159020u: goto label_159020;
            case 0x159028u: goto label_159028;
            case 0x1590A4u: goto label_1590a4;
            case 0x1590BCu: goto label_1590bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1590F0u;
}
