#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136E48
// Address: 0x136e48 - 0x137098
void sub_00136E48_0x136e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136E48_0x136e48");
#endif

    ctx->pc = 0x136e48u;

    // 0x136e48: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x136e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x136e4c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x136e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x136e50: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x136e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x136e54: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x136e54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e58: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x136e58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x136e5c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x136e5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e60: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x136e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x136e64: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x136e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x136e68: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x136e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x136e6c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x136e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x136e70: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x136e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x136e74: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x136e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x136e78: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x136e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x136e7c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x136e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x136e80: 0xd8c50030  lqc2        $vf5, 0x30($a2)
    ctx->pc = 0x136e80u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x136e84: 0xd8c40010  lqc2        $vf4, 0x10($a2)
    ctx->pc = 0x136e84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x136e88: 0xd8c20020  lqc2        $vf2, 0x20($a2)
    ctx->pc = 0x136e88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x136e8c: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x136e8cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x136e90: 0x8ea40058  lw          $a0, 0x58($s5)
    ctx->pc = 0x136e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x136e94: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x136e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x136e98: 0xfa830000  sqc2        $vf3, 0x0($s4)
    ctx->pc = 0x136e98u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x136e9c: 0xfa840010  sqc2        $vf4, 0x10($s4)
    ctx->pc = 0x136e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136ea0: 0xfa820020  sqc2        $vf2, 0x20($s4)
    ctx->pc = 0x136ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136ea4: 0xfa850030  sqc2        $vf5, 0x30($s4)
    ctx->pc = 0x136ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x136ea8: 0x84900004  lh          $s0, 0x4($a0)
    ctx->pc = 0x136ea8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x136eac: 0x600006d  bltz        $s0, . + 4 + (0x6D << 2)
    ctx->pc = 0x136EACu;
    {
        const bool branch_taken_0x136eac = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x136EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136EACu;
            // 0x136eb0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x136eac) {
            ctx->pc = 0x137064u;
            goto label_137064;
        }
    }
    ctx->pc = 0x136EB4u;
    // 0x136eb4: 0x96b7005c  lhu         $s7, 0x5C($s5)
    ctx->pc = 0x136eb4u;
    SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x136eb8: 0x241efffe  addiu       $fp, $zero, -0x2
    ctx->pc = 0x136eb8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x136ebc: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x136ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x136ec0: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x136EC0u;
    {
        const bool branch_taken_0x136ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136EC0u;
            // 0x136ec4: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ec0) {
            ctx->pc = 0x137064u;
            goto label_137064;
        }
    }
    ctx->pc = 0x136EC8u;
    // 0x136ec8: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x136ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x136ecc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x136eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x136ed0: 0x659021  addu        $s2, $v1, $a1
    ctx->pc = 0x136ed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x136ed4: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x136ed4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x136ed8: 0x748821  addu        $s1, $v1, $s4
    ctx->pc = 0x136ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x136edc: 0x0  nop
    ctx->pc = 0x136edcu;
    // NOP
label_136ee0:
    // 0x136ee0: 0x86650008  lh          $a1, 0x8($s3)
    ctx->pc = 0x136ee0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x136ee4: 0x26b60064  addiu       $s6, $s5, 0x64
    ctx->pc = 0x136ee4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
    // 0x136ee8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136eec: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x136eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x136ef0: 0x30a4001f  andi        $a0, $a1, 0x1F
    ctx->pc = 0x136ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x136ef4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136ef8: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x136ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x136efc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x136efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x136f00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x136f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136f04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x136f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x136f08: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x136F08u;
    {
        const bool branch_taken_0x136f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136f08) {
            ctx->pc = 0x136F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136F08u;
            // 0x136f0c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137050u;
            goto label_137050;
        }
    }
    ctx->pc = 0x136F10u;
    // 0x136f10: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x136f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136f14: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x136f14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136f18: 0x0  nop
    ctx->pc = 0x136f18u;
    // NOP
    // 0x136f1c: 0x4503004c  bc1tl       . + 4 + (0x4C << 2)
    ctx->pc = 0x136F1Cu;
    {
        const bool branch_taken_0x136f1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136f1c) {
            ctx->pc = 0x136F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136F1Cu;
            // 0x136f20: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137050u;
            goto label_137050;
        }
    }
    ctx->pc = 0x136F24u;
    // 0x136f24: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136f28: 0x50a2000f  beql        $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x136F28u;
    {
        const bool branch_taken_0x136f28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x136f28) {
            ctx->pc = 0x136F2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136F28u;
            // 0x136f2c: 0xda410000  lqc2        $vf1, 0x0($s2) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136F68u;
            goto label_136f68;
        }
    }
    ctx->pc = 0x136F30u;
    // 0x136f30: 0x14be0006  bne         $a1, $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x136F30u;
    {
        const bool branch_taken_0x136f30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 30));
        ctx->pc = 0x136F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136F30u;
            // 0x136f34: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136f30) {
            ctx->pc = 0x136F4Cu;
            goto label_136f4c;
        }
    }
    ctx->pc = 0x136F38u;
    // 0x136f38: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x136f38u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136f3c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x136f3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136f40: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x136f40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136f44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x136F44u;
    {
        const bool branch_taken_0x136f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136F44u;
            // 0x136f48: 0xdba50030  lqc2        $vf5, 0x30($sp) (Delay Slot)
        ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136f44) {
            ctx->pc = 0x136F60u;
            goto label_136f60;
        }
    }
    ctx->pc = 0x136F4Cu;
label_136f4c:
    // 0x136f4c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x136f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x136f50: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x136f50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x136f54: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x136f54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136f58: 0xd8440010  lqc2        $vf4, 0x10($v0)
    ctx->pc = 0x136f58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136f5c: 0xd8420020  lqc2        $vf2, 0x20($v0)
    ctx->pc = 0x136f5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_136f60:
    // 0x136f60: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x136f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x136f64: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x136f64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_136f68:
    // 0x136f68: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x136f68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136f6c: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x136f6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136f70: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x136f70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136f74: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x136f74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136f78: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x136f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136f7c: 0xda410010  lqc2        $vf1, 0x10($s2)
    ctx->pc = 0x136f7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x136f80: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x136f80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136f84: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x136f84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136f88: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x136f88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136f8c: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x136f8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136f90: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x136f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136f94: 0xda410020  lqc2        $vf1, 0x20($s2)
    ctx->pc = 0x136f94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x136f98: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x136f98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136f9c: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x136f9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136fa0: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x136fa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136fa4: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x136fa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136fa8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x136fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136fac: 0xda410030  lqc2        $vf1, 0x30($s2)
    ctx->pc = 0x136facu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x136fb0: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x136fb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136fb4: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x136fb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136fb8: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x136fb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136fbc: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x136fbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136fc0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x136fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136fc4: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x136fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x136fc8: 0x31026000  andi        $v0, $t0, 0x6000
    ctx->pc = 0x136fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)24576);
    // 0x136fcc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x136FCCu;
    {
        const bool branch_taken_0x136fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136FCCu;
            // 0x136fd0: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fcc) {
            ctx->pc = 0x137008u;
            goto label_137008;
        }
    }
    ctx->pc = 0x136FD4u;
    // 0x136fd4: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x136fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136fd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x136fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136fdc: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x136fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x136fe0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x136fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x136fe4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x136fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136fe8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x136fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x136fec: 0xfba50080  sqc2        $vf5, 0x80($sp)
    ctx->pc = 0x136fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x136ff0: 0xc04da1c  jal         func_136870
    ctx->pc = 0x136FF0u;
    SET_GPR_U32(ctx, 31, 0x136FF8u);
    ctx->pc = 0x136FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136FF0u;
            // 0x136ff4: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136870u;
    if (runtime->hasFunction(0x136870u)) {
        auto targetFn = runtime->lookupFunction(0x136870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136FF8u; }
        if (ctx->pc != 0x136FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136870_0x136870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136FF8u; }
        if (ctx->pc != 0x136FF8u) { return; }
    }
    ctx->pc = 0x136FF8u;
    // 0x136ff8: 0xdba50080  lqc2        $vf5, 0x80($sp)
    ctx->pc = 0x136ff8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x136ffc: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x136ffcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x137000: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x137000u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137004: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x137004u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_137008:
    // 0x137008: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x137008u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13700c: 0x102142  srl         $a0, $s0, 5
    ctx->pc = 0x13700cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x137010: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x137010u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137014: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x137014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x137018: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x137018u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x13701c: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x13701cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x137020: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x137020u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x137024: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x137024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x137028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13702c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13702cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137030: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x137030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x137034: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x137034u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x137038: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x137038u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13703c: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x13703cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x137040: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x137040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x137044: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x137044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x137048: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x137048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13704c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13704cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_137050:
    // 0x137050: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x137050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x137054: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x137054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x137058: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x137058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x13705c: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x13705Cu;
    {
        const bool branch_taken_0x13705c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13705Cu;
            // 0x137060: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13705c) {
            ctx->pc = 0x136EE0u;
            runtime->cooperativeGuestYield();
            goto label_136ee0;
        }
    }
    ctx->pc = 0x137064u;
label_137064:
    // 0x137064: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x137064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x137068: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x137068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13706c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x13706cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x137070: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x137070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x137074: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x137074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x137078: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x137078u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13707c: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x13707cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x137080: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x137080u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x137084: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x137084u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x137088: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x137088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13708c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x13708cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137090: 0x3e00008  jr          $ra
    ctx->pc = 0x137090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137090u;
            // 0x137094: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136EE0u: goto label_136ee0;
            case 0x136F4Cu: goto label_136f4c;
            case 0x136F60u: goto label_136f60;
            case 0x136F68u: goto label_136f68;
            case 0x137008u: goto label_137008;
            case 0x137050u: goto label_137050;
            case 0x137064u: goto label_137064;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137098u;
}
