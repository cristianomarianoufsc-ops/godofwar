#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DBAB8
// Address: 0x1dbab8 - 0x1dbb88
void sub_001DBAB8_0x1dbab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBAB8_0x1dbab8");
#endif

    ctx->pc = 0x1dbab8u;

    // 0x1dbab8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dbab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dbabc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1dbabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbac0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1dbac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1dbac4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1dbac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1dbac8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dbac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbacc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1dbaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1dbad0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1dbad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbad4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1dbad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1dbad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dbad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dbadc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1dbadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dbae0: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x1dbae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x1dbae4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1dbae4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbae8: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1dbae8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1dbaec: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DBAECu;
    {
        const bool branch_taken_0x1dbaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DBAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBAECu;
            // 0x1dbaf0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbaec) {
            ctx->pc = 0x1DBAFCu;
            goto label_1dbafc;
        }
    }
    ctx->pc = 0x1DBAF4u;
    // 0x1dbaf4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DBAF4u;
    {
        const bool branch_taken_0x1dbaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBAF4u;
            // 0x1dbaf8: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbaf4) {
            ctx->pc = 0x1DBB1Cu;
            goto label_1dbb1c;
        }
    }
    ctx->pc = 0x1DBAFCu;
label_1dbafc:
    // 0x1dbafc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dbafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dbb00: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1dbb00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1dbb04: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1dbb04u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1dbb08: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBB08u;
    {
        const bool branch_taken_0x1dbb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DBB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB08u;
            // 0x1dbb0c: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb08) {
            ctx->pc = 0x1DBB1Cu;
            goto label_1dbb1c;
        }
    }
    ctx->pc = 0x1DBB10u;
    // 0x1dbb10: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1DBB10u;
    SET_GPR_U32(ctx, 31, 0x1DBB18u);
    ctx->pc = 0x1DBB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB10u;
            // 0x1dbb14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB18u; }
        if (ctx->pc != 0x1DBB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB18u; }
        if (ctx->pc != 0x1DBB18u) { return; }
    }
    ctx->pc = 0x1DBB18u;
    // 0x1dbb18: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x1dbb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1dbb1c:
    // 0x1dbb1c: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1dbb1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1dbb20: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dbb20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbb24: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1dbb24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbb28: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1dbb28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbb2c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1dbb2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbb30: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1dbb30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbb34: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1dbb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1dbb38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1dbb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dbb3c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1dbb3cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dbb40: 0xc6210090  lwc1        $f1, 0x90($s1)
    ctx->pc = 0x1dbb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbb44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dbb44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbb48: 0x46000004  c1          0x4
    ctx->pc = 0x1dbb48u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1dbb4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1dbb4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1dbb50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dbb50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbb54: 0x0  nop
    ctx->pc = 0x1dbb54u;
    // NOP
    // 0x1dbb58: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBB58u;
    {
        const bool branch_taken_0x1dbb58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB58u;
            // 0x1dbb5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb58) {
            ctx->pc = 0x1DBB70u;
            goto label_1dbb70;
        }
    }
    ctx->pc = 0x1DBB60u;
    // 0x1dbb60: 0xae320094  sw          $s2, 0x94($s1)
    ctx->pc = 0x1dbb60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 18));
    // 0x1dbb64: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x1dbb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x1dbb68: 0xae33008c  sw          $s3, 0x8C($s1)
    ctx->pc = 0x1dbb68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 19));
    // 0x1dbb6c: 0x0  nop
    ctx->pc = 0x1dbb6cu;
    // NOP
label_1dbb70:
    // 0x1dbb70: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1dbb70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dbb74: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1dbb74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dbb78: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1dbb78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbb7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dbb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbb80: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB80u;
            // 0x1dbb84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBAFCu: goto label_1dbafc;
            case 0x1DBB1Cu: goto label_1dbb1c;
            case 0x1DBB70u: goto label_1dbb70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DBB88u;
}
