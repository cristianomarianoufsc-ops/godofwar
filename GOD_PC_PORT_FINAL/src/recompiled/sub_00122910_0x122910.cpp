#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00122910
// Address: 0x122910 - 0x122ab0
void sub_00122910_0x122910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122910_0x122910");
#endif

    ctx->pc = 0x122910u;

    // 0x122910: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x122910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x122914: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x122914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122918: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x122918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x12291c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12291cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x122920: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x122920u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x122924: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x122924u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x122928: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x122928u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x12292c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x12292cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x122930: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x122930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x122934: 0xc457009c  lwc1        $f23, 0x9C($v0)
    ctx->pc = 0x122934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x122938: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x122938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12293c: 0x0  nop
    ctx->pc = 0x12293cu;
    // NOP
    // 0x122940: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x122940u;
    {
        const bool branch_taken_0x122940 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x122944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122940u;
            // 0x122944: 0xc45600a0  lwc1        $f22, 0xA0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x122940) {
            ctx->pc = 0x122954u;
            goto label_122954;
        }
    }
    ctx->pc = 0x122948u;
    // 0x122948: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x122948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12294c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x12294Cu;
    {
        const bool branch_taken_0x12294c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12294c) {
            ctx->pc = 0x122964u;
            goto label_122964;
        }
    }
    ctx->pc = 0x122954u;
label_122954:
    // 0x122954: 0xc056f8c  jal         func_15BE30
    ctx->pc = 0x122954u;
    SET_GPR_U32(ctx, 31, 0x12295Cu);
    ctx->pc = 0x122958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122954u;
            // 0x122958: 0x8c8400a8  lw          $a0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE30u;
    if (runtime->hasFunction(0x15BE30u)) {
        auto targetFn = runtime->lookupFunction(0x15BE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12295Cu; }
        if (ctx->pc != 0x12295Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BE30_0x15be30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12295Cu; }
        if (ctx->pc != 0x12295Cu) { return; }
    }
    ctx->pc = 0x12295Cu;
    // 0x12295c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x12295Cu;
    {
        const bool branch_taken_0x12295c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12295Cu;
            // 0x122960: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12295c) {
            ctx->pc = 0x122A94u;
            goto label_122a94;
        }
    }
    ctx->pc = 0x122964u;
label_122964:
    // 0x122964: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x122964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x122968: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x122968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
    // 0x12296c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12296cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x122970: 0xc04c050  jal         func_130140
    ctx->pc = 0x122970u;
    SET_GPR_U32(ctx, 31, 0x122978u);
    ctx->pc = 0x122974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122970u;
            // 0x122974: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122978u; }
        if (ctx->pc != 0x122978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130140_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122978u; }
        if (ctx->pc != 0x122978u) { return; }
    }
    ctx->pc = 0x122978u;
    // 0x122978: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x122978u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12297c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x12297cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x122980: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x122980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x122984: 0x8c43bc78  lw          $v1, -0x4388($v0)
    ctx->pc = 0x122984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950008)));
    // 0x122988: 0x2442bc78  addiu       $v0, $v0, -0x4388
    ctx->pc = 0x122988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950008));
    // 0x12298c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x12298cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x122990: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x122990u;
    {
        const bool branch_taken_0x122990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x122994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122990u;
            // 0x122994: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122990) {
            ctx->pc = 0x122A44u;
            goto label_122a44;
        }
    }
    ctx->pc = 0x122998u;
label_122998:
    // 0x122998: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x122998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12299c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x12299cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1229a0: 0x8c6203a4  lw          $v0, 0x3A4($v1)
    ctx->pc = 0x1229a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 932)));
    // 0x1229a4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1229A4u;
    {
        const bool branch_taken_0x1229a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1229A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1229A4u;
            // 0x1229a8: 0x24620360  addiu       $v0, $v1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229a4) {
            ctx->pc = 0x122A30u;
            goto label_122a30;
        }
    }
    ctx->pc = 0x1229ACu;
    // 0x1229ac: 0x8c640360  lw          $a0, 0x360($v1)
    ctx->pc = 0x1229acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 864)));
    // 0x1229b0: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1229B0u;
    {
        const bool branch_taken_0x1229b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1229B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1229B0u;
            // 0x1229b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229b0) {
            ctx->pc = 0x1229BCu;
            goto label_1229bc;
        }
    }
    ctx->pc = 0x1229B8u;
    // 0x1229b8: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x1229b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1229bc:
    // 0x1229bc: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1229BCu;
    {
        const bool branch_taken_0x1229bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1229C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1229BCu;
            // 0x1229c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229bc) {
            ctx->pc = 0x122A30u;
            goto label_122a30;
        }
    }
    ctx->pc = 0x1229C4u;
    // 0x1229c4: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1229c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1229c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1229C8u;
    {
        const bool branch_taken_0x1229c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1229CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1229C8u;
            // 0x1229cc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229c8) {
            ctx->pc = 0x1229D8u;
            goto label_1229d8;
        }
    }
    ctx->pc = 0x1229D0u;
    // 0x1229d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1229D0u;
    {
        const bool branch_taken_0x1229d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1229D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1229D0u;
            // 0x1229d4: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229d0) {
            ctx->pc = 0x1229F4u;
            goto label_1229f4;
        }
    }
    ctx->pc = 0x1229D8u;
label_1229d8:
    // 0x1229d8: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1229d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1229dc: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1229dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1229e0: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1229E0u;
    {
        const bool branch_taken_0x1229e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1229E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1229E0u;
            // 0x1229e4: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229e0) {
            ctx->pc = 0x1229F4u;
            goto label_1229f4;
        }
    }
    ctx->pc = 0x1229E8u;
    // 0x1229e8: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1229E8u;
    SET_GPR_U32(ctx, 31, 0x1229F0u);
    ctx->pc = 0x1229ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1229E8u;
            // 0x1229ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1229F0u; }
        if (ctx->pc != 0x1229F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1229F0u; }
        if (ctx->pc != 0x1229F0u) { return; }
    }
    ctx->pc = 0x1229F0u;
    // 0x1229f0: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x1229f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1229f4:
    // 0x1229f4: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1229f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1229f8: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1229f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1229fc: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1229fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x122a00: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x122a00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x122a04: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x122a04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x122a08: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x122a08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x122a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a10: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x122a10u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x122a14: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x122a14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x122a18: 0x46140504  c1          0x140504
    ctx->pc = 0x122a18u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x122a1c: 0xc04fb12  jal         func_13EC48
    ctx->pc = 0x122A1Cu;
    SET_GPR_U32(ctx, 31, 0x122A24u);
    ctx->pc = 0x13EC48u;
    if (runtime->hasFunction(0x13EC48u)) {
        auto targetFn = runtime->lookupFunction(0x13EC48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122A24u; }
        if (ctx->pc != 0x122A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EC48_0x13ec48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122A24u; }
        if (ctx->pc != 0x122A24u) { return; }
    }
    ctx->pc = 0x122A24u;
    // 0x122a24: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x122a24u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x122a28: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x122a28u;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
    // 0x122a2c: 0x4614ad69  min.s       $f21, $f21, $f20
    ctx->pc = 0x122a2cu;
    ctx->f[21] = std::min(ctx->f[21], ctx->f[20]);
label_122a30:
    // 0x122a30: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x122a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x122a34: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x122a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122a38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x122a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122a3c: 0x1443ffd6  bne         $v0, $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x122A3Cu;
    {
        const bool branch_taken_0x122a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x122A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122A3Cu;
            // 0x122a40: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a3c) {
            ctx->pc = 0x122998u;
            runtime->cooperativeGuestYield();
            goto label_122998;
        }
    }
    ctx->pc = 0x122A44u;
label_122a44:
    // 0x122a44: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x122a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x122a48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122a4c: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x122a4cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x122a50: 0x4617a834  c.lt.s      $f21, $f23
    ctx->pc = 0x122a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x122a54: 0x0  nop
    ctx->pc = 0x122a54u;
    // NOP
    // 0x122a58: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x122A58u;
    {
        const bool branch_taken_0x122a58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122A58u;
            // 0x122a5c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a58) {
            ctx->pc = 0x122A70u;
            goto label_122a70;
        }
    }
    ctx->pc = 0x122A60u;
    // 0x122a60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x122a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x122a64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122a68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x122A68u;
    {
        const bool branch_taken_0x122a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122A68u;
            // 0x122a6c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a68) {
            ctx->pc = 0x122A98u;
            goto label_122a98;
        }
    }
    ctx->pc = 0x122A70u;
label_122a70:
    // 0x122a70: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x122a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x122a74: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x122A74u;
    {
        const bool branch_taken_0x122a74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x122a74) {
            ctx->pc = 0x122A90u;
            goto label_122a90;
        }
    }
    ctx->pc = 0x122A7Cu;
    // 0x122a7c: 0x4617b041  sub.s       $f1, $f22, $f23
    ctx->pc = 0x122a7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x122a80: 0x4615b001  sub.s       $f0, $f22, $f21
    ctx->pc = 0x122a80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x122a84: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x122a84u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x122a88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x122A88u;
    {
        const bool branch_taken_0x122a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122A88u;
            // 0x122a8c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a88) {
            ctx->pc = 0x122A94u;
            goto label_122a94;
        }
    }
    ctx->pc = 0x122A90u;
label_122a90:
    // 0x122a90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x122a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122a94:
    // 0x122a94: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x122a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_122a98:
    // 0x122a98: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x122a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x122a9c: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x122a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x122aa0: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x122aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x122aa4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x122aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x122aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x122AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122AA8u;
            // 0x122aac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122954u: goto label_122954;
            case 0x122964u: goto label_122964;
            case 0x122998u: goto label_122998;
            case 0x1229BCu: goto label_1229bc;
            case 0x1229D8u: goto label_1229d8;
            case 0x1229F4u: goto label_1229f4;
            case 0x122A30u: goto label_122a30;
            case 0x122A44u: goto label_122a44;
            case 0x122A70u: goto label_122a70;
            case 0x122A90u: goto label_122a90;
            case 0x122A94u: goto label_122a94;
            case 0x122A98u: goto label_122a98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122AB0u;
}
