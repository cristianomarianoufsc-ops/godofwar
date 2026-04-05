#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00107E60
// Address: 0x107e60 - 0x108120
void sub_00107E60_0x107e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107E60_0x107e60");
#endif

    ctx->pc = 0x107e60u;

    // 0x107e60: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x107e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x107e64: 0x46007186  mov.s       $f6, $f14
    ctx->pc = 0x107e64u;
    ctx->f[6] = FPU_MOV_S(ctx->f[14]);
    // 0x107e68: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x107e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x107e6c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x107e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x107e70: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x107e70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e74: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x107e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x107e78: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x107e78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e7c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x107e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x107e80: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x107e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x107e84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x107e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x107e88: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x107e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x107e8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x107e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x107e90: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x107e90u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x107e94: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x107e94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x107e98: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x107e98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x107e9c: 0x10e00090  beqz        $a3, . + 4 + (0x90 << 2)
    ctx->pc = 0x107E9Cu;
    {
        const bool branch_taken_0x107e9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x107EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E9Cu;
            // 0x107ea0: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e9c) {
            ctx->pc = 0x1080E0u;
            goto label_1080e0;
        }
    }
    ctx->pc = 0x107EA4u;
    // 0x107ea4: 0x460065c5  abs.s       $f23, $f12
    ctx->pc = 0x107ea4u;
    ctx->f[23] = FPU_ABS_S(ctx->f[12]);
    // 0x107ea8: 0x46006d85  abs.s       $f22, $f13
    ctx->pc = 0x107ea8u;
    ctx->f[22] = FPU_ABS_S(ctx->f[13]);
    // 0x107eac: 0x4616b840  add.s       $f1, $f23, $f22
    ctx->pc = 0x107eacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
    // 0x107eb0: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x107eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x107eb4: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x107eb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x107eb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107ebc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x107ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107ec0: 0x0  nop
    ctx->pc = 0x107ec0u;
    // NOP
    // 0x107ec4: 0x45000086  bc1f        . + 4 + (0x86 << 2)
    ctx->pc = 0x107EC4u;
    {
        const bool branch_taken_0x107ec4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107EC4u;
            // 0x107ec8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ec4) {
            ctx->pc = 0x1080E0u;
            goto label_1080e0;
        }
    }
    ctx->pc = 0x107ECCu;
    // 0x107ecc: 0x8cb40014  lw          $s4, 0x14($a1)
    ctx->pc = 0x107eccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x107ed0: 0x8cb10008  lw          $s1, 0x8($a1)
    ctx->pc = 0x107ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x107ed4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x107ed4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ed8: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x107ed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x107edc: 0x44066000  mfc1        $a2, $f12
    ctx->pc = 0x107edcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x107ee0: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x107ee0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x107ee4: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x107ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x107ee8: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x107ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x107eec: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x107eecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x107ef0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x107ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x107ef4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x107ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x107ef8: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x107ef8u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x107efc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x107efcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x107f00: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x107f00u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x107f04: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x107f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x107f08: 0x4b010084  vsubx.x     $vf2, $vf0, $vf1x
    ctx->pc = 0x107f08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x107f0c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x107f0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x107f10: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x107f10u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x107f14: 0x4b0100c5  vsuby.x     $vf3, $vf0, $vf1y
    ctx->pc = 0x107f14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x107f18: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x107f18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107f1c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x107f1cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x107f20: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x107f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107f24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x107f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x107f28: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x107f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x107f2c: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x107f2cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
    // 0x107f30: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x107f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x107f34: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x107f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x107f38: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x107f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x107f3c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x107f3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x107f40: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x107F40u;
    {
        const bool branch_taken_0x107f40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107F40u;
            // 0x107f44: 0xe7a5001c  swc1        $f5, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f40) {
            ctx->pc = 0x107F50u;
            goto label_107f50;
        }
    }
    ctx->pc = 0x107F48u;
    // 0x107f48: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x107f48u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x107f4c: 0x0  nop
    ctx->pc = 0x107f4cu;
    // NOP
label_107f50:
    // 0x107f50: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x107f50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107f54: 0x0  nop
    ctx->pc = 0x107f54u;
    // NOP
    // 0x107f58: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x107F58u;
    {
        const bool branch_taken_0x107f58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107f58) {
            ctx->pc = 0x107F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107F58u;
            // 0x107f5c: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107F60u;
            goto label_107f60;
        }
    }
    ctx->pc = 0x107F60u;
label_107f60:
    // 0x107f60: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x107f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107f64: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x107F64u;
    {
        const bool branch_taken_0x107f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107f64) {
            ctx->pc = 0x107F74u;
            goto label_107f74;
        }
    }
    ctx->pc = 0x107F6Cu;
    // 0x107f6c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x107f6cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x107f70: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x107f70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107f74:
    // 0x107f74: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x107f74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107f78: 0x0  nop
    ctx->pc = 0x107f78u;
    // NOP
    // 0x107f7c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x107F7Cu;
    {
        const bool branch_taken_0x107f7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107f7c) {
            ctx->pc = 0x107F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107F7Cu;
            // 0x107f80: 0x24150003  addiu       $s5, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107F84u;
            goto label_107f84;
        }
    }
    ctx->pc = 0x107F84u;
label_107f84:
    // 0x107f84: 0x1640003a  bnez        $s2, . + 4 + (0x3A << 2)
    ctx->pc = 0x107F84u;
    {
        const bool branch_taken_0x107f84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x107F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107F84u;
            // 0x107f88: 0x254102a  slt         $v0, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f84) {
            ctx->pc = 0x108070u;
            goto label_108070;
        }
    }
    ctx->pc = 0x107F8Cu;
    // 0x107f8c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x107f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x107f90: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x107f90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x107f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f98: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x107F98u;
    {
        const bool branch_taken_0x107f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107F98u;
            // 0x107f9c: 0x46002386  mov.s       $f14, $f4 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f98) {
            ctx->pc = 0x108010u;
            goto label_108010;
        }
    }
    ctx->pc = 0x107FA0u;
label_107fa0:
    // 0x107fa0: 0x1496000b  bne         $a0, $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x107FA0u;
    {
        const bool branch_taken_0x107fa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        if (branch_taken_0x107fa0) {
            ctx->pc = 0x107FD0u;
            goto label_107fd0;
        }
    }
    ctx->pc = 0x107FA8u;
    // 0x107fa8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x107fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x107fac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x107facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x107fb0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x107FB0u;
    {
        const bool branch_taken_0x107fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107fb0) {
            ctx->pc = 0x107FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107FB0u;
            // 0x107fb4: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x107FB8u;
            goto label_107fb8;
        }
    }
    ctx->pc = 0x107FB8u;
label_107fb8:
    // 0x107fb8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x107fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107fbc: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x107fbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x107fc0: 0x460f0002  mul.s       $f0, $f0, $f15
    ctx->pc = 0x107fc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x107fc4: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x107fc4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x107fc8: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x107fc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x107fcc: 0x46007380  add.s       $f14, $f14, $f0
    ctx->pc = 0x107fccu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
label_107fd0:
    // 0x107fd0: 0x5495000c  bnel        $a0, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x107FD0u;
    {
        const bool branch_taken_0x107fd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        if (branch_taken_0x107fd0) {
            ctx->pc = 0x107FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107FD0u;
            // 0x107fd4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108004u;
            goto label_108004;
        }
    }
    ctx->pc = 0x107FD8u;
    // 0x107fd8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x107fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x107fdc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x107fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x107fe0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x107FE0u;
    {
        const bool branch_taken_0x107fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107fe0) {
            ctx->pc = 0x107FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107FE0u;
            // 0x107fe4: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x107FE8u;
            goto label_107fe8;
        }
    }
    ctx->pc = 0x107FE8u;
label_107fe8:
    // 0x107fe8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x107fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107fec: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x107fecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x107ff0: 0x460f0002  mul.s       $f0, $f0, $f15
    ctx->pc = 0x107ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x107ff4: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x107ff4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x107ff8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x107ff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x107ffc: 0x46007380  add.s       $f14, $f14, $f0
    ctx->pc = 0x107ffcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x108000: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x108000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_108004:
    // 0x108004: 0x94102a  slt         $v0, $a0, $s4
    ctx->pc = 0x108004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x108008: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x108008u;
    {
        const bool branch_taken_0x108008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10800Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108008u;
            // 0x10800c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108008) {
            ctx->pc = 0x107FA0u;
            runtime->cooperativeGuestYield();
            goto label_107fa0;
        }
    }
    ctx->pc = 0x108010u;
label_108010:
    // 0x108010: 0x46047383  div.s       $f14, $f14, $f4
    ctx->pc = 0x108010u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[4];
    // 0x108014: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x108014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x108018: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x108018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x10801c: 0xc663004c  lwc1        $f3, 0x4C($s3)
    ctx->pc = 0x10801cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x108020: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x108020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108024: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x108024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108028: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10802c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10802cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x108030: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x108030u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x108034: 0x460e3003  div.s       $f0, $f6, $f14
    ctx->pc = 0x108034u;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[0] = ctx->f[6] / ctx->f[14];
    // 0x108038: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x108038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10803c: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x10803cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x108040: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x108040u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x108044: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x108044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x108048: 0x0  nop
    ctx->pc = 0x108048u;
    // NOP
    // 0x10804c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x10804Cu;
    {
        const bool branch_taken_0x10804c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x108050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10804Cu;
            // 0x108050: 0xe663004c  swc1        $f3, 0x4C($s3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10804c) {
            ctx->pc = 0x10806Cu;
            goto label_10806c;
        }
    }
    ctx->pc = 0x108054u;
    // 0x108054: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x108054u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x108058: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x108058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10805c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10805cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108060: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x108060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108064: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x108064u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x108068: 0xe660004c  swc1        $f0, 0x4C($s3)
    ctx->pc = 0x108068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
label_10806c:
    // 0x10806c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x10806cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108070:
    // 0x108070: 0x1a80001b  blez        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x108070u;
    {
        const bool branch_taken_0x108070 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x108074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108070u;
            // 0x108074: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108070) {
            ctx->pc = 0x1080E0u;
            goto label_1080e0;
        }
    }
    ctx->pc = 0x108078u;
label_108078:
    // 0x108078: 0x16160003  bne         $s0, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x108078u;
    {
        const bool branch_taken_0x108078 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        if (branch_taken_0x108078) {
            ctx->pc = 0x108088u;
            goto label_108088;
        }
    }
    ctx->pc = 0x108080u;
    // 0x108080: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108080u;
    {
        const bool branch_taken_0x108080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108080u;
            // 0x108084: 0xe6370018  swc1        $f23, 0x18($s1) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108080) {
            ctx->pc = 0x108094u;
            goto label_108094;
        }
    }
    ctx->pc = 0x108088u;
label_108088:
    // 0x108088: 0x56150002  bnel        $s0, $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x108088u;
    {
        const bool branch_taken_0x108088 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x108088) {
            ctx->pc = 0x10808Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108088u;
            // 0x10808c: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108094u;
            goto label_108094;
        }
    }
    ctx->pc = 0x108090u;
    // 0x108090: 0xe6360018  swc1        $f22, 0x18($s1)
    ctx->pc = 0x108090u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_108094:
    // 0x108094: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x108094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x108098: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x108098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10809c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10809Cu;
    {
        const bool branch_taken_0x10809c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10809c) {
            ctx->pc = 0x1080A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10809Cu;
            // 0x1080a0: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1080A4u;
            goto label_1080a4;
        }
    }
    ctx->pc = 0x1080A4u;
label_1080a4:
    // 0x1080a4: 0xc660004c  lwc1        $f0, 0x4C($s3)
    ctx->pc = 0x1080a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1080a8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1080a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1080ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1080ACu;
    {
        const bool branch_taken_0x1080ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1080ACu;
            // 0x1080b0: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080ac) {
            ctx->pc = 0x1080B8u;
            goto label_1080b8;
        }
    }
    ctx->pc = 0x1080B4u;
    // 0x1080b4: 0xc454001c  lwc1        $f20, 0x1C($v0)
    ctx->pc = 0x1080b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1080b8:
    // 0x1080b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1080b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080bc: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x1080BCu;
    SET_GPR_U32(ctx, 31, 0x1080C4u);
    ctx->pc = 0x1080C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1080BCu;
            // 0x1080c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1080C4u; }
        if (ctx->pc != 0x1080C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1080C4u; }
        if (ctx->pc != 0x1080C4u) { return; }
    }
    ctx->pc = 0x1080C4u;
    // 0x1080c4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1080c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1080c8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1080c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1080cc: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x1080ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1080d0: 0x4600a829  min.s       $f0, $f21, $f0
    ctx->pc = 0x1080d0u;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[0]);
    // 0x1080d4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1080d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1080d8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1080D8u;
    {
        const bool branch_taken_0x1080d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1080DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1080D8u;
            // 0x1080dc: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080d8) {
            ctx->pc = 0x108078u;
            runtime->cooperativeGuestYield();
            goto label_108078;
        }
    }
    ctx->pc = 0x1080E0u;
label_1080e0:
    // 0x1080e0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1080e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080e4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1080e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1080e8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1080e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1080ec: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1080ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1080f0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1080f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1080f4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1080f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1080f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1080f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1080fc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1080fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108100: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x108100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108104: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x108104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x108108: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x108108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x10810c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x10810cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x108110: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x108110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x108114: 0x3e00008  jr          $ra
    ctx->pc = 0x108114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108114u;
            // 0x108118: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107F50u: goto label_107f50;
            case 0x107F60u: goto label_107f60;
            case 0x107F74u: goto label_107f74;
            case 0x107F84u: goto label_107f84;
            case 0x107FA0u: goto label_107fa0;
            case 0x107FB8u: goto label_107fb8;
            case 0x107FD0u: goto label_107fd0;
            case 0x107FE8u: goto label_107fe8;
            case 0x108004u: goto label_108004;
            case 0x108010u: goto label_108010;
            case 0x10806Cu: goto label_10806c;
            case 0x108070u: goto label_108070;
            case 0x108078u: goto label_108078;
            case 0x108088u: goto label_108088;
            case 0x108094u: goto label_108094;
            case 0x1080A4u: goto label_1080a4;
            case 0x1080B8u: goto label_1080b8;
            case 0x1080E0u: goto label_1080e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10811Cu;
    // 0x10811c: 0x0  nop
    ctx->pc = 0x10811cu;
    // NOP
}
