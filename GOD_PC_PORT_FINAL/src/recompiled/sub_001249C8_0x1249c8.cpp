#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001249C8
// Address: 0x1249c8 - 0x125170
void sub_001249C8_0x1249c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001249C8_0x1249c8");
#endif

    ctx->pc = 0x1249c8u;

    // 0x1249c8: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x1249c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x1249cc: 0x7fb101f0  sq          $s1, 0x1F0($sp)
    ctx->pc = 0x1249ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 17));
    // 0x1249d0: 0x7fb201e0  sq          $s2, 0x1E0($sp)
    ctx->pc = 0x1249d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 18));
    // 0x1249d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1249d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249d8: 0x7fb301d0  sq          $s3, 0x1D0($sp)
    ctx->pc = 0x1249d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 19));
    // 0x1249dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1249dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249e0: 0x7fb00200  sq          $s0, 0x200($sp)
    ctx->pc = 0x1249e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 16));
    // 0x1249e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1249e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249e8: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x1249e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x1249ec: 0xe7b90238  swc1        $f25, 0x238($sp)
    ctx->pc = 0x1249ecu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x1249f0: 0xe7b80230  swc1        $f24, 0x230($sp)
    ctx->pc = 0x1249f0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x1249f4: 0xe7b70228  swc1        $f23, 0x228($sp)
    ctx->pc = 0x1249f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x1249f8: 0xe7b60220  swc1        $f22, 0x220($sp)
    ctx->pc = 0x1249f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x1249fc: 0xe7b50218  swc1        $f21, 0x218($sp)
    ctx->pc = 0x1249fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x124a00: 0xe7b40210  swc1        $f20, 0x210($sp)
    ctx->pc = 0x124a00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x124a04: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x124a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x124a08: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x124A08u;
    SET_GPR_U32(ctx, 31, 0x124A10u);
    ctx->pc = 0x124A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124A08u;
            // 0x124a0c: 0x8c500088  lw          $s0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A10u; }
        if (ctx->pc != 0x124A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A10u; }
        if (ctx->pc != 0x124A10u) { return; }
    }
    ctx->pc = 0x124A10u;
    // 0x124a10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x124a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x124a14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x124a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x124a18: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x124a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x124a1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124a20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x124a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x124a24: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x124a24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x124a28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x124a28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x124a2c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x124a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x124a30: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x124a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x124a34: 0x3421ff58  ori         $at, $at, 0xFF58
    ctx->pc = 0x124a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65368);
    // 0x124a38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124a3c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x124a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x124a40: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x124a40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x124a44: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x124a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124a48: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x124a48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x124a4c: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x124a4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x124a50: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x124a50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x124a54: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x124a54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x124a58: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x124a58u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x124a5c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x124a5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x124a60: 0x70481b89  pcpyld      $v1, $v0, $t0
    ctx->pc = 0x124a60u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x124a64: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x124a64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x124a68: 0x71281389  pcpyld      $v0, $t1, $t0
    ctx->pc = 0x124a68u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x124a6c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x124a6cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x124a70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x124a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a74: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x124a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x124a78: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x124a78u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x124a7c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x124a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x124a80: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x124A80u;
    {
        const bool branch_taken_0x124a80 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x124A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124A80u;
            // 0x124a84: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a80) {
            ctx->pc = 0x124AD0u;
            goto label_124ad0;
        }
    }
    ctx->pc = 0x124A88u;
    // 0x124a88: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x124a88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a8c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x124a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124a90: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x124a90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124a94: 0x0  nop
    ctx->pc = 0x124a94u;
    // NOP
    // 0x124a98: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x124A98u;
    {
        const bool branch_taken_0x124a98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x124a98) {
            ctx->pc = 0x124A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124A98u;
            // 0x124a9c: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124AD4u;
            goto label_124ad4;
        }
    }
    ctx->pc = 0x124AA0u;
    // 0x124aa0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x124aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x124aa4: 0x0  nop
    ctx->pc = 0x124aa4u;
    // NOP
label_124aa8:
    // 0x124aa8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x124aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x124aac: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x124aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x124ab0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x124AB0u;
    {
        const bool branch_taken_0x124ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124AB0u;
            // 0x124ab4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ab0) {
            ctx->pc = 0x124AD0u;
            goto label_124ad0;
        }
    }
    ctx->pc = 0x124AB8u;
    // 0x124ab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x124ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x124abc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x124abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124ac0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x124ac0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124ac4: 0x0  nop
    ctx->pc = 0x124ac4u;
    // NOP
    // 0x124ac8: 0x4502fff7  bc1fl       . + 4 + (-0x9 << 2)
    ctx->pc = 0x124AC8u;
    {
        const bool branch_taken_0x124ac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x124ac8) {
            ctx->pc = 0x124ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124AC8u;
            // 0x124acc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124AA8u;
            runtime->cooperativeGuestYield();
            goto label_124aa8;
        }
    }
    ctx->pc = 0x124AD0u;
label_124ad0:
    // 0x124ad0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x124ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_124ad4:
    // 0x124ad4: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x124ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x124ad8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x124ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x124adc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x124adcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124ae0: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x124ae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x124ae4: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x124ae4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x124ae8: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x124ae8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x124aec: 0x4be308bd  vmadday.xyzw $ACC, $vf1, $vf3y
    ctx->pc = 0x124aecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x124af0: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x124af0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x124af4: 0x4be308be  vmaddaz.xyzw $ACC, $vf1, $vf3z
    ctx->pc = 0x124af4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x124af8: 0x4be3108b  vmaddw.xyzw $vf2, $vf2, $vf3w
    ctx->pc = 0x124af8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x124afc: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x124afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x124b00: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x124b00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124b04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x124b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x124b08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124b0c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x124b0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124b10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x124b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x124b14: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x124b14u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x124b18: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x124b18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x124b1c: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x124b1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x124b20: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x124b20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124b24: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x124b24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x124b28: 0x8cc2bde8  lw          $v0, -0x4218($a2)
    ctx->pc = 0x124b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294950376)));
    // 0x124b2c: 0xd84100c0  lqc2        $vf1, 0xC0($v0)
    ctx->pc = 0x124b2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x124b30: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x124b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x124b34: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x124b34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x124b38: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x124b38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x124b3c: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x124b3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x124b40: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x124b40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x124b44: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x124b44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x124b48: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x124b48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x124b4c: 0x4be208cb  vmaddw.xyzw $vf3, $vf1, $vf2w
    ctx->pc = 0x124b4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x124b50: 0xfba30190  sqc2        $vf3, 0x190($sp)
    ctx->pc = 0x124b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x124b54: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x124b54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x124b58: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x124b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x124b5c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x124b5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124b60: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x124b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x124b64: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x124b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124b68: 0xc4590024  lwc1        $f25, 0x24($v0)
    ctx->pc = 0x124b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x124b6c: 0xc4580028  lwc1        $f24, 0x28($v0)
    ctx->pc = 0x124b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x124b70: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x124b70u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124b74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x124b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124b78: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x124b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124b7c: 0x0  nop
    ctx->pc = 0x124b7cu;
    // NOP
    // 0x124b80: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x124B80u;
    {
        const bool branch_taken_0x124b80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x124B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B80u;
            // 0x124b84: 0x7fa20150  sq          $v0, 0x150($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b80) {
            ctx->pc = 0x124B98u;
            goto label_124b98;
        }
    }
    ctx->pc = 0x124B88u;
    // 0x124b88: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x124b88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124b8c: 0x0  nop
    ctx->pc = 0x124b8cu;
    // NOP
    // 0x124b90: 0x45000098  bc1f        . + 4 + (0x98 << 2)
    ctx->pc = 0x124B90u;
    {
        const bool branch_taken_0x124b90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B90u;
            // 0x124b94: 0xdba10150  lqc2        $vf1, 0x150($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b90) {
            ctx->pc = 0x124DF4u;
            goto label_124df4;
        }
    }
    ctx->pc = 0x124B98u;
label_124b98:
    // 0x124b98: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x124b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x124b9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124ba0: 0x46021040  add.s       $f1, $f2, $f2
    ctx->pc = 0x124ba0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x124ba4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x124ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x124ba8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x124ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x124bac: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x124bacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x124bb0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x124bb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x124bb4: 0x70e81b89  pcpyld      $v1, $a3, $t0
    ctx->pc = 0x124bb4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x124bb8: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x124bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x124bbc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x124bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x124bc0: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x124bc0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x124bc4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x124bc4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x124bc8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x124bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x124bcc: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x124bccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x124bd0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x124bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x124bd4: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x124bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x124bd8: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x124bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x124bdc: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x124BDCu;
    {
        const bool branch_taken_0x124bdc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x124BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124BDCu;
            // 0x124be0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124bdc) {
            ctx->pc = 0x124C28u;
            goto label_124c28;
        }
    }
    ctx->pc = 0x124BE4u;
    // 0x124be4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x124be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x124be8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x124be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124bec: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x124becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124bf0: 0x0  nop
    ctx->pc = 0x124bf0u;
    // NOP
    // 0x124bf4: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x124BF4u;
    {
        const bool branch_taken_0x124bf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x124bf4) {
            ctx->pc = 0x124BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124BF4u;
            // 0x124bf8: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124C2Cu;
            goto label_124c2c;
        }
    }
    ctx->pc = 0x124BFCu;
    // 0x124bfc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x124bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_124c00:
    // 0x124c00: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x124c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x124c04: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x124c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x124c08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x124C08u;
    {
        const bool branch_taken_0x124c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C08u;
            // 0x124c0c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c08) {
            ctx->pc = 0x124C28u;
            goto label_124c28;
        }
    }
    ctx->pc = 0x124C10u;
    // 0x124c10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x124c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x124c14: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x124c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124c18: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x124c18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124c1c: 0x0  nop
    ctx->pc = 0x124c1cu;
    // NOP
    // 0x124c20: 0x4502fff7  bc1fl       . + 4 + (-0x9 << 2)
    ctx->pc = 0x124C20u;
    {
        const bool branch_taken_0x124c20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x124c20) {
            ctx->pc = 0x124C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124C20u;
            // 0x124c24: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124C00u;
            runtime->cooperativeGuestYield();
            goto label_124c00;
        }
    }
    ctx->pc = 0x124C28u;
label_124c28:
    // 0x124c28: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x124c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_124c2c:
    // 0x124c2c: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x124c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x124c30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x124c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x124c34: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x124c34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124c38: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x124c38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x124c3c: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x124c3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x124c40: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x124c40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x124c44: 0x4be308bd  vmadday.xyzw $ACC, $vf1, $vf3y
    ctx->pc = 0x124c44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x124c48: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x124c48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x124c4c: 0x4be308be  vmaddaz.xyzw $ACC, $vf1, $vf3z
    ctx->pc = 0x124c4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x124c50: 0x4be3108b  vmaddw.xyzw $vf2, $vf2, $vf3w
    ctx->pc = 0x124c50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x124c54: 0x8cc2bde8  lw          $v0, -0x4218($a2)
    ctx->pc = 0x124c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294950376)));
    // 0x124c58: 0xd84100c0  lqc2        $vf1, 0xC0($v0)
    ctx->pc = 0x124c58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x124c5c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x124c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x124c60: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x124c60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x124c64: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x124c64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x124c68: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x124c68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x124c6c: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x124c6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x124c70: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x124c70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x124c74: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x124c74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x124c78: 0x4be208cb  vmaddw.xyzw $vf3, $vf1, $vf2w
    ctx->pc = 0x124c78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x124c7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x124c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124c80: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x124c80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124c84: 0x0  nop
    ctx->pc = 0x124c84u;
    // NOP
    // 0x124c88: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x124C88u;
    {
        const bool branch_taken_0x124c88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C88u;
            // 0x124c8c: 0xfba301b0  sqc2        $vf3, 0x1B0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c88) {
            ctx->pc = 0x124DC0u;
            goto label_124dc0;
        }
    }
    ctx->pc = 0x124C90u;
    // 0x124c90: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x124C90u;
    SET_GPR_U32(ctx, 31, 0x124C98u);
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C98u; }
        if (ctx->pc != 0x124C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C98u; }
        if (ctx->pc != 0x124C98u) { return; }
    }
    ctx->pc = 0x124C98u;
    // 0x124c98: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x124c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x124c9c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x124c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x124ca0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x124ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x124ca4: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x124ca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x124ca8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x124ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x124cac: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x124cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x124cb0: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x124cb0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x124cb4: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x124CB4u;
    SET_GPR_U32(ctx, 31, 0x124CBCu);
    ctx->pc = 0x124CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124CB4u;
            // 0x124cb8: 0x4616ad41  sub.s       $f21, $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124CBCu; }
        if (ctx->pc != 0x124CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124CBCu; }
        if (ctx->pc != 0x124CBCu) { return; }
    }
    ctx->pc = 0x124CBCu;
    // 0x124cbc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x124cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x124cc0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x124cc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x124cc4: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x124cc4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x124cc8: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x124CC8u;
    SET_GPR_U32(ctx, 31, 0x124CD0u);
    ctx->pc = 0x124CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124CC8u;
            // 0x124ccc: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124CD0u; }
        if (ctx->pc != 0x124CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124CD0u; }
        if (ctx->pc != 0x124CD0u) { return; }
    }
    ctx->pc = 0x124CD0u;
    // 0x124cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x124cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124cd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x124cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x124cd8: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x124cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x124cdc: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x124cdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x124ce0: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x124ce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x124ce4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x124ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ce8: 0x4406a800  mfc1        $a2, $f21
    ctx->pc = 0x124ce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x124cec: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x124cecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x124cf0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x124cf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x124cf4: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x124cf4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x124cf8: 0xdba201b0  lqc2        $vf2, 0x1B0($sp)
    ctx->pc = 0x124cf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x124cfc: 0x70434cc8  ppacw       $t1, $v0, $v1
    ctx->pc = 0x124cfcu;
    SET_GPR_VEC(ctx, 9, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x124d00: 0xdba301b0  lqc2        $vf3, 0x1B0($sp)
    ctx->pc = 0x124d00u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x124d04: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x124d04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x124d08: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x124d08u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x124d0c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x124d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124d10: 0x4bc308ae  vopmsub.xyz $vf2, $vf1, $vf3
    ctx->pc = 0x124d10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x124d14: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x124d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124d18: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x124d18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124d1c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x124d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x124d20: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x124d20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124d24: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x124d24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124d28: 0x4403c000  mfc1        $v1, $f24
    ctx->pc = 0x124d28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[24], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x124d2c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x124d2cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x124d30: 0x4a0003bf  vwaitq
    ctx->pc = 0x124d30u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x124d34: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x124d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124d38: 0x4a0002ff  vnop
    ctx->pc = 0x124d38u;
    // NOP operation, no action needed for VU0
    // 0x124d3c: 0x4a0002ff  vnop
    ctx->pc = 0x124d3cu;
    // NOP operation, no action needed for VU0
    // 0x124d40: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x124d40u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x124d44: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x124d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x124d48: 0xfba20130  sqc2        $vf2, 0x130($sp)
    ctx->pc = 0x124d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x124d4c: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x124d4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124d50: 0xdba101b0  lqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x124d50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x124d54: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x124d54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x124d58: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x124d58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124d5c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x124d5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124d60: 0xdba401b0  lqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x124d60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x124d64: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x124d64u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x124d68: 0x4a0003bf  vwaitq
    ctx->pc = 0x124d68u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x124d6c: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x124d6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x124d70: 0x4a0002ff  vnop
    ctx->pc = 0x124d70u;
    // NOP operation, no action needed for VU0
    // 0x124d74: 0x4a0002ff  vnop
    ctx->pc = 0x124d74u;
    // NOP operation, no action needed for VU0
    // 0x124d78: 0x4403c800  mfc1        $v1, $f25
    ctx->pc = 0x124d78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[25], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x124d7c: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x124d7cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x124d80: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x124d80u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x124d84: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x124d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124d88: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x124d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124d8c: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x124d8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124d90: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x124d90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124d94: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x124d94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x124d98: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x124d98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124d9c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x124d9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124da0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x124da0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x124da4: 0x4a0003bf  vwaitq
    ctx->pc = 0x124da4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x124da8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x124da8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124dac: 0x4a0002ff  vnop
    ctx->pc = 0x124dacu;
    // NOP operation, no action needed for VU0
    // 0x124db0: 0x4a0002ff  vnop
    ctx->pc = 0x124db0u;
    // NOP operation, no action needed for VU0
    // 0x124db4: 0xfba20150  sqc2        $vf2, 0x150($sp)
    ctx->pc = 0x124db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x124db8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x124DB8u;
    {
        const bool branch_taken_0x124db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124DB8u;
            // 0x124dbc: 0xfba20050  sqc2        $vf2, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124db8) {
            ctx->pc = 0x124DF0u;
            goto label_124df0;
        }
    }
    ctx->pc = 0x124DC0u;
label_124dc0:
    // 0x124dc0: 0x4be3186a  vmul.xyzw   $vf1, $vf3, $vf3
    ctx->pc = 0x124dc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124dc4: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x124dc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124dc8: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x124dc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124dcc: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x124dccu;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x124dd0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x124dd0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x124dd4: 0x4a0003bf  vwaitq
    ctx->pc = 0x124dd4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x124dd8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x124dd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124ddc: 0x4a0002ff  vnop
    ctx->pc = 0x124ddcu;
    // NOP operation, no action needed for VU0
    // 0x124de0: 0x4a0002ff  vnop
    ctx->pc = 0x124de0u;
    // NOP operation, no action needed for VU0
    // 0x124de4: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x124de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124de8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x124de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124dec: 0x0  nop
    ctx->pc = 0x124decu;
    // NOP
label_124df0:
    // 0x124df0: 0xdba10150  lqc2        $vf1, 0x150($sp)
    ctx->pc = 0x124df0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_124df4:
    // 0x124df4: 0xda2200d0  lqc2        $vf2, 0xD0($s1)
    ctx->pc = 0x124df4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x124df8: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x124df8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124dfc: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x124dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124e00: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x124e00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124e04: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x124e04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124e08: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x124e08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124e0c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x124e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x124e10: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x124e10u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x124e14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x124e14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124e18: 0x46000504  c1          0x504
    ctx->pc = 0x124e18u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x124e1c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x124e1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124e20: 0x0  nop
    ctx->pc = 0x124e20u;
    // NOP
    // 0x124e24: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x124E24u;
    {
        const bool branch_taken_0x124e24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x124e24) {
            ctx->pc = 0x124E28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124E24u;
            // 0x124e28: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124E98u;
            goto label_124e98;
        }
    }
    ctx->pc = 0x124E2Cu;
    // 0x124e2c: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x124E2Cu;
    SET_GPR_U32(ctx, 31, 0x124E34u);
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124E34u; }
        if (ctx->pc != 0x124E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124E34u; }
        if (ctx->pc != 0x124E34u) { return; }
    }
    ctx->pc = 0x124E34u;
    // 0x124e34: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x124e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x124e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x124e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124e3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x124e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x124e40: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x124e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x124e44: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x124e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x124e48: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x124e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x124e4c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x124e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124e50: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x124e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x124e54: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x124e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x124e58: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x124e58u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x124e5c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x124e5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x124e60: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x124e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x124e64: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x124e64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x124e68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x124e68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x124e6c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x124e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x124e70: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x124e70u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x124e74: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x124e74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x124e78: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x124e78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x124e7c: 0xdba10150  lqc2        $vf1, 0x150($sp)
    ctx->pc = 0x124e7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x124e80: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x124e80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124e84: 0xdba20190  lqc2        $vf2, 0x190($sp)
    ctx->pc = 0x124e84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x124e88: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x124e88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124e8c: 0xfba20180  sqc2        $vf2, 0x180($sp)
    ctx->pc = 0x124e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x124e90: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x124e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x124e94: 0x0  nop
    ctx->pc = 0x124e94u;
    // NOP
label_124e98:
    // 0x124e98: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x124e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x124e9c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x124e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x124ea0: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x124EA0u;
    SET_GPR_U32(ctx, 31, 0x124EA8u);
    ctx->pc = 0x124EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124EA0u;
            // 0x124ea4: 0xc454000c  lwc1        $f20, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124EA8u; }
        if (ctx->pc != 0x124EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124EA8u; }
        if (ctx->pc != 0x124EA8u) { return; }
    }
    ctx->pc = 0x124EA8u;
    // 0x124ea8: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x124ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x124eac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x124eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x124eb0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x124eb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x124eb4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x124eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x124eb8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x124eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x124ebc: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x124ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124ec0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x124ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124ec4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x124ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x124ec8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x124ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x124ecc: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x124eccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x124ed0: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x124ed0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x124ed4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x124ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124ed8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x124ed8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x124edc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x124edcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x124ee0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x124ee0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x124ee4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x124ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x124ee8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x124ee8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x124eec: 0x44101000  mfc1        $s0, $f2
    ctx->pc = 0x124eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x124ef0: 0x45000075  bc1f        . + 4 + (0x75 << 2)
    ctx->pc = 0x124EF0u;
    {
        const bool branch_taken_0x124ef0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124EF0u;
            // 0x124ef4: 0xdba50150  lqc2        $vf5, 0x150($sp) (Delay Slot)
        ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ef0) {
            ctx->pc = 0x1250C8u;
            goto label_1250c8;
        }
    }
    ctx->pc = 0x124EF8u;
    // 0x124ef8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x124ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x124efc: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x124efcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x124f00: 0xdba101a0  lqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x124f00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x124f04: 0x4b030840  vaddx.x     $vf1, $vf1, $vf3x
    ctx->pc = 0x124f04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124f08: 0x4bc12afe  vopmula.xyz $ACC, $vf5, $vf1
    ctx->pc = 0x124f08u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]);
    // 0x124f0c: 0x4bc5086e  vopmsub.xyz $vf1, $vf1, $vf5
    ctx->pc = 0x124f0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x124f10: 0x4be40b3c  vmove.xyzw  $vf4, $vf1
    ctx->pc = 0x124f10u;
    ctx->vu0_vf[4] = ctx->vu0_vf[1];
    // 0x124f14: 0x4a24212c  vsub.w      $vf4, $vf4, $vf4
    ctx->pc = 0x124f14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x124f18: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x124f18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124f1c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x124f1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124f20: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x124f20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124f24: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x124f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x124f28: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x124f28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x124f2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x124f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x124f30: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x124f30u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124f34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x124f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124f38: 0x46000004  c1          0x4
    ctx->pc = 0x124f38u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x124f3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x124f3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124f40: 0x0  nop
    ctx->pc = 0x124f40u;
    // NOP
    // 0x124f44: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x124F44u;
    {
        const bool branch_taken_0x124f44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F44u;
            // 0x124f48: 0xdba101a0  lqc2        $vf1, 0x1A0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f44) {
            ctx->pc = 0x124F60u;
            goto label_124f60;
        }
    }
    ctx->pc = 0x124F4Cu;
    // 0x124f4c: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x124f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124f50: 0x4bc12afe  vopmula.xyz $ACC, $vf5, $vf1
    ctx->pc = 0x124f50u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]);
    // 0x124f54: 0x4bc5086e  vopmsub.xyz $vf1, $vf1, $vf5
    ctx->pc = 0x124f54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x124f58: 0x4be40b3c  vmove.xyzw  $vf4, $vf1
    ctx->pc = 0x124f58u;
    ctx->vu0_vf[4] = ctx->vu0_vf[1];
    // 0x124f5c: 0x4a24212c  vsub.w      $vf4, $vf4, $vf4
    ctx->pc = 0x124f5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_124f60:
    // 0x124f60: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x124f60u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]);
    // 0x124f64: 0x4bc428ee  vopmsub.xyz $vf3, $vf5, $vf4
    ctx->pc = 0x124f64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x124f68: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x124f68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x124f6c: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x124f6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124f70: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x124f70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124f74: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x124f74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124f78: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x124f78u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x124f7c: 0x4a0003bf  vwaitq
    ctx->pc = 0x124f7cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x124f80: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x124f80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x124f84: 0x4a0002ff  vnop
    ctx->pc = 0x124f84u;
    // NOP operation, no action needed for VU0
    // 0x124f88: 0x4a0002ff  vnop
    ctx->pc = 0x124f88u;
    // NOP operation, no action needed for VU0
    // 0x124f8c: 0x4be528aa  vmul.xyzw   $vf2, $vf5, $vf5
    ctx->pc = 0x124f8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124f90: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x124f90u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x124f94: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x124f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124f98: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x124f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124f9c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x124f9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124fa0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x124fa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124fa4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x124fa4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x124fa8: 0x4a0003bf  vwaitq
    ctx->pc = 0x124fa8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x124fac: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x124facu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x124fb0: 0x4a0002ff  vnop
    ctx->pc = 0x124fb0u;
    // NOP operation, no action needed for VU0
    // 0x124fb4: 0x4a0002ff  vnop
    ctx->pc = 0x124fb4u;
    // NOP operation, no action needed for VU0
    // 0x124fb8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x124fb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124fbc: 0x4be12b3c  vmove.xyzw  $vf1, $vf5
    ctx->pc = 0x124fbcu;
    ctx->vu0_vf[1] = ctx->vu0_vf[5];
    // 0x124fc0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x124fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124fc4: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x124fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124fc8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x124fc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124fcc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x124fccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124fd0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x124fd0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x124fd4: 0x4a0003bf  vwaitq
    ctx->pc = 0x124fd4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x124fd8: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x124fd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x124fdc: 0x4a0002ff  vnop
    ctx->pc = 0x124fdcu;
    // NOP operation, no action needed for VU0
    // 0x124fe0: 0x4a0002ff  vnop
    ctx->pc = 0x124fe0u;
    // NOP operation, no action needed for VU0
    // 0x124fe4: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x124fe4u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x124fe8: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x124fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x124fec: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x124fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x124ff0: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x124FF0u;
    SET_GPR_U32(ctx, 31, 0x124FF8u);
    ctx->pc = 0x124FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124FF0u;
            // 0x124ff4: 0xfba200a0  sqc2        $vf2, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124FF8u; }
        if (ctx->pc != 0x124FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124FF8u; }
        if (ctx->pc != 0x124FF8u) { return; }
    }
    ctx->pc = 0x124FF8u;
    // 0x124ff8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x124ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x124ffc: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x124ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x125000: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x125000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x125004: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x125004u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x125008: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12500c: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x12500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x125010: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x125010u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x125014: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x125014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125018: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x125018u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x12501c: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x12501Cu;
    SET_GPR_U32(ctx, 31, 0x125024u);
    ctx->pc = 0x125020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12501Cu;
            // 0x125020: 0x4601a502  mul.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125024u; }
        if (ctx->pc != 0x125024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125024u; }
        if (ctx->pc != 0x125024u) { return; }
    }
    ctx->pc = 0x125024u;
    // 0x125024: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x125024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x125028: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x125028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x12502c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x12502cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x125030: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x125030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x125034: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x125034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125038: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x125038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x12503c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12503cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x125040: 0x4616ad42  mul.s       $f21, $f21, $f22
    ctx->pc = 0x125040u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x125044: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x125044u;
    SET_GPR_U32(ctx, 31, 0x12504Cu);
    ctx->pc = 0x125048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125044u;
            // 0x125048: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12504Cu; }
        if (ctx->pc != 0x12504Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12504Cu; }
        if (ctx->pc != 0x12504Cu) { return; }
    }
    ctx->pc = 0x12504Cu;
    // 0x12504c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x12504cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x125050: 0x27a40164  addiu       $a0, $sp, 0x164
    ctx->pc = 0x125050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x125054: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x125054u;
    SET_GPR_U32(ctx, 31, 0x12505Cu);
    ctx->pc = 0x125058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125054u;
            // 0x125058: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12505Cu; }
        if (ctx->pc != 0x12505Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12505Cu; }
        if (ctx->pc != 0x12505Cu) { return; }
    }
    ctx->pc = 0x12505Cu;
    // 0x12505c: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x12505cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125060: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x125060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x125064: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x125064u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x125068: 0xe7a10164  swc1        $f1, 0x164($sp)
    ctx->pc = 0x125068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x12506c: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x12506cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x125070: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x125070u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125074: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x125074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x125078: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x125078u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x12507c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x12507cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x125080: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x125080u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x125084: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x125084u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x125088: 0x48b01000  qmtc2.ni    $s0, $vf2
    ctx->pc = 0x125088u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x12508c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x12508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x125090: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x125090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x125094: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x125094u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x125098: 0x4be20898  vmulx.xyzw  $vf2, $vf1, $vf2x
    ctx->pc = 0x125098u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12509c: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x12509cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1250a0: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1250a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1250a4: 0xdba10080  lqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1250a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1250a8: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1250a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1250ac: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1250acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1250b0: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1250b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1250b4: 0xdba100a0  lqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1250b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1250b8: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1250b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1250bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1250BCu;
    {
        const bool branch_taken_0x1250bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1250C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1250BCu;
            // 0x1250c0: 0xfba10150  sqc2        $vf1, 0x150($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250bc) {
            ctx->pc = 0x1250D8u;
            goto label_1250d8;
        }
    }
    ctx->pc = 0x1250C4u;
    // 0x1250c4: 0x0  nop
    ctx->pc = 0x1250c4u;
    // NOP
label_1250c8:
    // 0x1250c8: 0x48b01000  qmtc2.ni    $s0, $vf2
    ctx->pc = 0x1250c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x1250cc: 0xdba10150  lqc2        $vf1, 0x150($sp)
    ctx->pc = 0x1250ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1250d0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1250d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1250d4: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x1250d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
label_1250d8:
    // 0x1250d8: 0xdba20180  lqc2        $vf2, 0x180($sp)
    ctx->pc = 0x1250d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1250dc: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x1250dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x1250e0: 0xda2100e0  lqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x1250e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1250e4: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1250e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1250e8: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1250e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1250ec: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1250ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1250f0: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1250f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1250f4: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1250f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1250f8: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1250f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1250fc: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1250fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x125100: 0xda220080  lqc2        $vf2, 0x80($s1)
    ctx->pc = 0x125100u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x125104: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x125104u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x125108: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x125108u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12510c: 0xdba20150  lqc2        $vf2, 0x150($sp)
    ctx->pc = 0x12510cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x125110: 0xda2100e0  lqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x125110u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x125114: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x125114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x125118: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x125118u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12511c: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x12511cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x125120: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x125120u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x125124: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x125124u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x125128: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x125128u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x12512c: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x12512cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x125130: 0xda220090  lqc2        $vf2, 0x90($s1)
    ctx->pc = 0x125130u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x125134: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x125134u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x125138: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x125138u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12513c: 0x7bb00200  lq          $s0, 0x200($sp)
    ctx->pc = 0x12513cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x125140: 0x7bb101f0  lq          $s1, 0x1F0($sp)
    ctx->pc = 0x125140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x125144: 0x7bb201e0  lq          $s2, 0x1E0($sp)
    ctx->pc = 0x125144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x125148: 0x7bb301d0  lq          $s3, 0x1D0($sp)
    ctx->pc = 0x125148u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x12514c: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x12514cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x125150: 0xc7b90238  lwc1        $f25, 0x238($sp)
    ctx->pc = 0x125150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x125154: 0xc7b80230  lwc1        $f24, 0x230($sp)
    ctx->pc = 0x125154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x125158: 0xc7b70228  lwc1        $f23, 0x228($sp)
    ctx->pc = 0x125158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x12515c: 0xc7b60220  lwc1        $f22, 0x220($sp)
    ctx->pc = 0x12515cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x125160: 0xc7b50218  lwc1        $f21, 0x218($sp)
    ctx->pc = 0x125160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x125164: 0xc7b40210  lwc1        $f20, 0x210($sp)
    ctx->pc = 0x125164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x125168: 0x3e00008  jr          $ra
    ctx->pc = 0x125168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12516Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125168u;
            // 0x12516c: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124AA8u: goto label_124aa8;
            case 0x124AD0u: goto label_124ad0;
            case 0x124AD4u: goto label_124ad4;
            case 0x124B98u: goto label_124b98;
            case 0x124C00u: goto label_124c00;
            case 0x124C28u: goto label_124c28;
            case 0x124C2Cu: goto label_124c2c;
            case 0x124DC0u: goto label_124dc0;
            case 0x124DF0u: goto label_124df0;
            case 0x124DF4u: goto label_124df4;
            case 0x124E98u: goto label_124e98;
            case 0x124F60u: goto label_124f60;
            case 0x1250C8u: goto label_1250c8;
            case 0x1250D8u: goto label_1250d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125170u;
}
