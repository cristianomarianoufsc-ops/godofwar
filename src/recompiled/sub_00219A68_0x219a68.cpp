#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00219A68
// Address: 0x219a68 - 0x219bb8
void sub_00219A68_0x219a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219A68_0x219a68");
#endif

    ctx->pc = 0x219a68u;

    // 0x219a68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x219a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x219a6c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x219a6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x219a70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x219a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x219a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a78: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x219a78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x219a7c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x219a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219a80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x219a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x219a84: 0xc08647a  jal         func_2191E8
    ctx->pc = 0x219A84u;
    SET_GPR_U32(ctx, 31, 0x219A8Cu);
    ctx->pc = 0x219A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219A84u;
            // 0x219a88: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2191E8u;
    if (runtime->hasFunction(0x2191E8u)) {
        auto targetFn = runtime->lookupFunction(0x2191E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219A8Cu; }
        if (ctx->pc != 0x219A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002191E8_0x2191e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219A8Cu; }
        if (ctx->pc != 0x219A8Cu) { return; }
    }
    ctx->pc = 0x219A8Cu;
    // 0x219a8c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x219a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x219a90: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x219a90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x219a94: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x219a94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219a98: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x219a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x219a9c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x219a9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219aa0: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x219aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x219aa4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x219aa4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219aa8: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x219aa8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x219aac: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x219aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x219ab0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x219ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x219ab4: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x219ab4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x219ab8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x219ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x219abc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x219abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219ac0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x219ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x219ac4: 0x46001843  div.s       $f1, $f3, $f0
    ctx->pc = 0x219ac4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[1] = ctx->f[3] / ctx->f[0];
    // 0x219ac8: 0x46001103  div.s       $f4, $f2, $f0
    ctx->pc = 0x219ac8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[4] = ctx->f[2] / ctx->f[0];
    // 0x219acc: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x219accu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x219ad0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x219ad0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x219ad4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x219ad4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x219ad8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x219ad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x219adc: 0x0  nop
    ctx->pc = 0x219adcu;
    // NOP
    // 0x219ae0: 0x18a0002f  blez        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x219AE0u;
    {
        const bool branch_taken_0x219ae0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x219AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219AE0u;
            // 0x219ae4: 0x24c2fffe  addiu       $v0, $a2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ae0) {
            ctx->pc = 0x219BA0u;
            goto label_219ba0;
        }
    }
    ctx->pc = 0x219AE8u;
    // 0x219ae8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x219ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x219aec: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x219AECu;
    {
        const bool branch_taken_0x219aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219aec) {
            ctx->pc = 0x219AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x219AECu;
            // 0x219af0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x219BA4u;
            goto label_219ba4;
        }
    }
    ctx->pc = 0x219AF4u;
    // 0x219af4: 0x1880002a  blez        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x219AF4u;
    {
        const bool branch_taken_0x219af4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x219AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219AF4u;
            // 0x219af8: 0x2462fffe  addiu       $v0, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219af4) {
            ctx->pc = 0x219BA0u;
            goto label_219ba0;
        }
    }
    ctx->pc = 0x219AFCu;
    // 0x219afc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x219afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x219b00: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x219B00u;
    {
        const bool branch_taken_0x219b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219B00u;
            // 0x219b04: 0x861018  mult        $v0, $a0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b00) {
            ctx->pc = 0x219BA0u;
            goto label_219ba0;
        }
    }
    ctx->pc = 0x219B08u;
    // 0x219b08: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x219b08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219b0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x219b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x219b10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x219b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x219b14: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x219b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x219b18: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x219b18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x219b1c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x219b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x219b20: 0x864018  mult        $t0, $a0, $a2
    ctx->pc = 0x219b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x219b24: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x219b24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x219b28: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x219b28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x219b2c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x219b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x219b30: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x219b30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x219b34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x219b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x219b38: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x219b38u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x219b3c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x219b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x219b40: 0x46020182  mul.s       $f6, $f0, $f2
    ctx->pc = 0x219b40u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x219b44: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x219b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x219b48: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x219b48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x219b4c: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x219b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x219b50: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x219b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x219b54: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x219b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x219b58: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x219b58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x219b5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x219b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x219b60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x219b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x219b64: 0x46143182  mul.s       $f6, $f6, $f20
    ctx->pc = 0x219b64u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x219b68: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x219b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x219b6c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x219b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x219b70: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x219b70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x219b74: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x219b74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x219b78: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x219b78u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x219b7c: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x219b7cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x219b80: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x219b80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x219b84: 0xe4650000  swc1        $f5, 0x0($v1)
    ctx->pc = 0x219b84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x219b88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x219b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219b8c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x219b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219b90: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x219b90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x219b94: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x219b94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x219b98: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x219b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x219b9c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x219b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_219ba0:
    // 0x219ba0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x219ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_219ba4:
    // 0x219ba4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x219ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219ba8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x219ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x219bac: 0x3e00008  jr          $ra
    ctx->pc = 0x219BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219BACu;
            // 0x219bb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219BA0u: goto label_219ba0;
            case 0x219BA4u: goto label_219ba4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x219BB4u;
    // 0x219bb4: 0x0  nop
    ctx->pc = 0x219bb4u;
    // NOP
}
