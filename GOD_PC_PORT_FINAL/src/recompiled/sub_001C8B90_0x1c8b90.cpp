#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8B90
// Address: 0x1c8b90 - 0x1c8d18
void sub_001C8B90_0x1c8b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8B90_0x1c8b90");
#endif

    ctx->pc = 0x1c8b90u;

    // 0x1c8b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c8b94: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1c8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1c8b98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c8b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c8b9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ba4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1c8ba4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c8ba8: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c8ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c8bac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c8bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c8bb0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1C8BB0u;
    {
        const bool branch_taken_0x1c8bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8bb0) {
            ctx->pc = 0x1C8BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8BB0u;
            // 0x1c8bb4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8BF0u;
            goto label_1c8bf0;
        }
    }
    ctx->pc = 0x1C8BB8u;
    // 0x1c8bb8: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c8bbc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1c8bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1c8bc0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c8bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c8bc4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c8bc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c8bc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8bcc: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1c8bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1c8bd0: 0x342138da  ori         $at, $at, 0x38DA
    ctx->pc = 0x1c8bd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14554);
    // 0x1c8bd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8bd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c8bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c8bdc: 0xe6000150  swc1        $f0, 0x150($s0)
    ctx->pc = 0x1c8bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x1c8be0: 0xe6010154  swc1        $f1, 0x154($s0)
    ctx->pc = 0x1c8be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x1c8be4: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1c8be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1c8be8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C8BE8u;
    {
        const bool branch_taken_0x1c8be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8BE8u;
            // 0x1c8bec: 0xae0002b8  sw          $zero, 0x2B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8be8) {
            ctx->pc = 0x1C8C38u;
            goto label_1c8c38;
        }
    }
    ctx->pc = 0x1C8BF0u;
label_1c8bf0:
    // 0x1c8bf0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c8bf4: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1c8bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c8bf8: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1c8bf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1c8bfc: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1c8bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1c8c00: 0x40f809  jalr        $v0
    ctx->pc = 0x1C8C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C8C08u);
        ctx->pc = 0x1C8C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C00u;
            // 0x1c8c04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C8C08u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8BF0u: goto label_1c8bf0;
            case 0x1C8C38u: goto label_1c8c38;
            case 0x1C8D00u: goto label_1c8d00;
            case 0x1C8D04u: goto label_1c8d04;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C08u; }
            if (ctx->pc != 0x1C8C08u) { return; }
        }
        }
    }
    ctx->pc = 0x1C8C08u;
    // 0x1c8c08: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c8c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c8c0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8c10: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1c8c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1c8c14: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c8c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c8c18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c8c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c8c1c: 0xc602016c  lwc1        $f2, 0x16C($s0)
    ctx->pc = 0x1c8c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8c20: 0xc60102b8  lwc1        $f1, 0x2B8($s0)
    ctx->pc = 0x1c8c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8c24: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1c8c24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1c8c28: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c8c28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c8c2c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1c8c2cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c8c30: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x1c8c30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x1c8c34: 0xe60102b8  swc1        $f1, 0x2B8($s0)
    ctx->pc = 0x1c8c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 696), bits); }
label_1c8c38:
    // 0x1c8c38: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1c8c38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8c3c: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x1c8c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x1c8c40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c8c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c48: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x1c8c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x1c8c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c50: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x1C8C50u;
    SET_GPR_U32(ctx, 31, 0x1C8C58u);
    ctx->pc = 0x1C8C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C50u;
            // 0x1c8c54: 0xfa010210  sqc2        $vf1, 0x210($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 528), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (runtime->hasFunction(0x242A88u)) {
        auto targetFn = runtime->lookupFunction(0x242A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C58u; }
        if (ctx->pc != 0x1C8C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a88_0x242a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C58u; }
        if (ctx->pc != 0x1C8C58u) { return; }
    }
    ctx->pc = 0x1C8C58u;
    // 0x1c8c58: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1C8C58u;
    SET_GPR_U32(ctx, 31, 0x1C8C60u);
    ctx->pc = 0x1C8C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C58u;
            // 0x1c8c5c: 0x8e040324  lw          $a0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C60u; }
        if (ctx->pc != 0x1C8C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C60u; }
        if (ctx->pc != 0x1C8C60u) { return; }
    }
    ctx->pc = 0x1C8C60u;
    // 0x1c8c60: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c8c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c8c64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c8c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8c68: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x1c8c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x1c8c6c: 0x8e0402d8  lw          $a0, 0x2D8($s0)
    ctx->pc = 0x1c8c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c8c70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c8c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c8c74: 0x8e050328  lw          $a1, 0x328($s0)
    ctx->pc = 0x1c8c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1c8c78: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1c8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1c8c7c: 0x34631008  ori         $v1, $v1, 0x1008
    ctx->pc = 0x1c8c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4104);
    // 0x1c8c80: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1c8c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c8c84: 0xae030174  sw          $v1, 0x174($s0)
    ctx->pc = 0x1c8c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
    // 0x1c8c88: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1c8c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1c8c8c: 0xae0402d8  sw          $a0, 0x2D8($s0)
    ctx->pc = 0x1c8c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 4));
    // 0x1c8c90: 0xa4a200e0  sh          $v0, 0xE0($a1)
    ctx->pc = 0x1c8c90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 224), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c8c94: 0x3c015511  lui         $at, 0x5511
    ctx->pc = 0x1c8c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21777 << 16));
    // 0x1c8c98: 0x342184e7  ori         $at, $at, 0x84E7
    ctx->pc = 0x1c8c98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34023);
    // 0x1c8c9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8ca0: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x1c8ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x1c8ca4: 0xe6000164  swc1        $f0, 0x164($s0)
    ctx->pc = 0x1c8ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
    // 0x1c8ca8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c8ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8cb0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1c8cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c8cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8CB4u;
            // 0x1c8cb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8BF0u: goto label_1c8bf0;
            case 0x1C8C38u: goto label_1c8c38;
            case 0x1C8D00u: goto label_1c8d00;
            case 0x1C8D04u: goto label_1c8d04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8CBCu;
    // 0x1c8cbc: 0x0  nop
    ctx->pc = 0x1c8cbcu;
    // NOP
    // 0x1c8cc0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1c8cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1c8cc4: 0x8c4377bc  lw          $v1, 0x77BC($v0)
    ctx->pc = 0x1c8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30652)));
    // 0x1c8cc8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C8CC8u;
    {
        const bool branch_taken_0x1c8cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8CC8u;
            // 0x1c8ccc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8cc8) {
            ctx->pc = 0x1C8D00u;
            goto label_1c8d00;
        }
    }
    ctx->pc = 0x1C8CD0u;
    // 0x1c8cd0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1c8cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1c8cd4: 0x8c425e6c  lw          $v0, 0x5E6C($v0)
    ctx->pc = 0x1c8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24172)));
    // 0x1c8cd8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c8cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c8cdc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c8cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8ce0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1c8ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x1c8ce4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1c8ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1c8ce8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c8ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c8cec: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8CECu;
    {
        const bool branch_taken_0x1c8cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C8CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8CECu;
            // 0x1c8cf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8cec) {
            ctx->pc = 0x1C8D04u;
            goto label_1c8d04;
        }
    }
    ctx->pc = 0x1C8CF4u;
    // 0x1c8cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8CF4u;
            // 0x1c8cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8BF0u: goto label_1c8bf0;
            case 0x1C8C38u: goto label_1c8c38;
            case 0x1C8D00u: goto label_1c8d00;
            case 0x1C8D04u: goto label_1c8d04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8CFCu;
    // 0x1c8cfc: 0x0  nop
    ctx->pc = 0x1c8cfcu;
    // NOP
label_1c8d00:
    // 0x1c8d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8d04:
    // 0x1c8d04: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1c8d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1c8d08: 0xac62cd40  sw          $v0, -0x32C0($v1)
    ctx->pc = 0x1c8d08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954304), GPR_U32(ctx, 2));
    // 0x1c8d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8D0Cu;
            // 0x1c8d10: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8BF0u: goto label_1c8bf0;
            case 0x1C8C38u: goto label_1c8c38;
            case 0x1C8D00u: goto label_1c8d00;
            case 0x1C8D04u: goto label_1c8d04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8D14u;
    // 0x1c8d14: 0x0  nop
    ctx->pc = 0x1c8d14u;
    // NOP
}
