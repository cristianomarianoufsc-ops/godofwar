#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00137290
// Address: 0x137290 - 0x137508
void sub_00137290_0x137290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137290_0x137290");
#endif

    ctx->pc = 0x137290u;

    // 0x137290: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x137290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x137294: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x137294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x137298: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x137298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x13729c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13729cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1372a0: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1372a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1372a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1372a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1372a8: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1372a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1372ac: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1372acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1372b0: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1372b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1372b4: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1372b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1372b8: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1372b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x1372bc: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x1372bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x1372c0: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1372c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1372c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1372c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1372c8: 0xd8c50030  lqc2        $vf5, 0x30($a2)
    ctx->pc = 0x1372c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1372cc: 0xd8c40010  lqc2        $vf4, 0x10($a2)
    ctx->pc = 0x1372ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1372d0: 0xd8c20020  lqc2        $vf2, 0x20($a2)
    ctx->pc = 0x1372d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1372d4: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x1372d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1372d8: 0x8ea70058  lw          $a3, 0x58($s5)
    ctx->pc = 0x1372d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x1372dc: 0x8ea80050  lw          $t0, 0x50($s5)
    ctx->pc = 0x1372dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x1372e0: 0x8ea50054  lw          $a1, 0x54($s5)
    ctx->pc = 0x1372e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1372e4: 0xfa830000  sqc2        $vf3, 0x0($s4)
    ctx->pc = 0x1372e4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1372e8: 0xfa840010  sqc2        $vf4, 0x10($s4)
    ctx->pc = 0x1372e8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1372ec: 0xfa820020  sqc2        $vf2, 0x20($s4)
    ctx->pc = 0x1372ecu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1372f0: 0xfa850030  sqc2        $vf5, 0x30($s4)
    ctx->pc = 0x1372f0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1372f4: 0x84f00004  lh          $s0, 0x4($a3)
    ctx->pc = 0x1372f4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1372f8: 0x6000075  bltz        $s0, . + 4 + (0x75 << 2)
    ctx->pc = 0x1372F8u;
    {
        const bool branch_taken_0x1372f8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1372FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1372F8u;
            // 0x1372fc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372f8) {
            ctx->pc = 0x1374D0u;
            goto label_1374d0;
        }
    }
    ctx->pc = 0x137300u;
    // 0x137300: 0x96be005c  lhu         $fp, 0x5C($s5)
    ctx->pc = 0x137300u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x137304: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x137304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x137308: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x137308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x13730c: 0x21e102a  slt         $v0, $s0, $fp
    ctx->pc = 0x13730cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x137310: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x137310u;
    {
        const bool branch_taken_0x137310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137310u;
            // 0x137314: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137310) {
            ctx->pc = 0x1374D0u;
            goto label_1374d0;
        }
    }
    ctx->pc = 0x137318u;
    // 0x137318: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x137318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x13731c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x13731cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x137320: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x137320u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x137324: 0x489021  addu        $s2, $v0, $t0
    ctx->pc = 0x137324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x137328: 0x65b021  addu        $s6, $v1, $a1
    ctx->pc = 0x137328u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13732c: 0x879821  addu        $s3, $a0, $a3
    ctx->pc = 0x13732cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x137330: 0x548821  addu        $s1, $v0, $s4
    ctx->pc = 0x137330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x137334: 0x0  nop
    ctx->pc = 0x137334u;
    // NOP
label_137338:
    // 0x137338: 0x86650008  lh          $a1, 0x8($s3)
    ctx->pc = 0x137338u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x13733c: 0x26b70064  addiu       $s7, $s5, 0x64
    ctx->pc = 0x13733cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
    // 0x137340: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137344: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x137344u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x137348: 0x30a4001f  andi        $a0, $a1, 0x1F
    ctx->pc = 0x137348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x13734c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13734cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137350: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x137350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x137354: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x137354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x137358: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x137358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13735c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13735cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x137360: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x137360u;
    {
        const bool branch_taken_0x137360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137360) {
            ctx->pc = 0x137364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137360u;
            // 0x137364: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1374B8u;
            goto label_1374b8;
        }
    }
    ctx->pc = 0x137368u;
    // 0x137368: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x137368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13736c: 0x50400052  beql        $v0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x13736Cu;
    {
        const bool branch_taken_0x13736c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13736c) {
            ctx->pc = 0x137370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13736Cu;
            // 0x137370: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1374B8u;
            goto label_1374b8;
        }
    }
    ctx->pc = 0x137374u;
    // 0x137374: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x137374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137378: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x137378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13737c: 0x0  nop
    ctx->pc = 0x13737cu;
    // NOP
    // 0x137380: 0x4503004d  bc1tl       . + 4 + (0x4D << 2)
    ctx->pc = 0x137380u;
    {
        const bool branch_taken_0x137380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137380) {
            ctx->pc = 0x137384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137380u;
            // 0x137384: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1374B8u;
            goto label_1374b8;
        }
    }
    ctx->pc = 0x137388u;
    // 0x137388: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x137388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x13738c: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13738Cu;
    {
        const bool branch_taken_0x13738c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x137390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13738Cu;
            // 0x137390: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13738c) {
            ctx->pc = 0x1373C8u;
            goto label_1373c8;
        }
    }
    ctx->pc = 0x137394u;
    // 0x137394: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137394u;
    {
        const bool branch_taken_0x137394 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x137398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137394u;
            // 0x137398: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137394) {
            ctx->pc = 0x1373B0u;
            goto label_1373b0;
        }
    }
    ctx->pc = 0x13739Cu;
    // 0x13739c: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x13739cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1373a0: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1373a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1373a4: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1373a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1373a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1373A8u;
    {
        const bool branch_taken_0x1373a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1373ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1373A8u;
            // 0x1373ac: 0xdba50030  lqc2        $vf5, 0x30($sp) (Delay Slot)
        ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1373a8) {
            ctx->pc = 0x1373C4u;
            goto label_1373c4;
        }
    }
    ctx->pc = 0x1373B0u;
label_1373b0:
    // 0x1373b0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1373b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1373b4: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x1373b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1373b8: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1373b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1373bc: 0xd8440010  lqc2        $vf4, 0x10($v0)
    ctx->pc = 0x1373bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1373c0: 0xd8420020  lqc2        $vf2, 0x20($v0)
    ctx->pc = 0x1373c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1373c4:
    // 0x1373c4: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x1373c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
label_1373c8:
    // 0x1373c8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1373c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1373cc: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x1373ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1373d0: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x1373d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1373d4: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x1373d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1373d8: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x1373d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1373dc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1373dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1373e0: 0xda410010  lqc2        $vf1, 0x10($s2)
    ctx->pc = 0x1373e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1373e4: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x1373e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1373e8: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x1373e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1373ec: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x1373ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1373f0: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x1373f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1373f4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1373f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1373f8: 0xda410020  lqc2        $vf1, 0x20($s2)
    ctx->pc = 0x1373f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1373fc: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x1373fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137400: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x137400u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137404: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x137404u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137408: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x137408u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13740c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x13740cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137410: 0xda410030  lqc2        $vf1, 0x30($s2)
    ctx->pc = 0x137410u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x137414: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x137414u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137418: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x137418u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13741c: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x13741cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137420: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x137420u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137424: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x137424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137428: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x137428u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13742c: 0x31026000  andi        $v0, $t0, 0x6000
    ctx->pc = 0x13742cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)24576);
    // 0x137430: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x137430u;
    {
        const bool branch_taken_0x137430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137430u;
            // 0x137434: 0xafb00040  sw          $s0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137430) {
            ctx->pc = 0x137470u;
            goto label_137470;
        }
    }
    ctx->pc = 0x137438u;
    // 0x137438: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x137438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13743c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13743cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137440: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x137440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x137444: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x137444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x137448: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x137448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13744c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x13744cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x137450: 0xfba50080  sqc2        $vf5, 0x80($sp)
    ctx->pc = 0x137450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x137454: 0xc04da1c  jal         func_136870
    ctx->pc = 0x137454u;
    SET_GPR_U32(ctx, 31, 0x13745Cu);
    ctx->pc = 0x137458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137454u;
            // 0x137458: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136870u;
    if (runtime->hasFunction(0x136870u)) {
        auto targetFn = runtime->lookupFunction(0x136870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13745Cu; }
        if (ctx->pc != 0x13745Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136870_0x136870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13745Cu; }
        if (ctx->pc != 0x13745Cu) { return; }
    }
    ctx->pc = 0x13745Cu;
    // 0x13745c: 0xdba50080  lqc2        $vf5, 0x80($sp)
    ctx->pc = 0x13745cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x137460: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x137460u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x137464: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x137464u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137468: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x137468u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13746c: 0x0  nop
    ctx->pc = 0x13746cu;
    // NOP
label_137470:
    // 0x137470: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x137470u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137474: 0x102142  srl         $a0, $s0, 5
    ctx->pc = 0x137474u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x137478: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x137478u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13747c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13747cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x137480: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x137480u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x137484: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x137484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x137488: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x137488u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x13748c: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x13748cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x137490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137494: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x137494u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137498: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x137498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x13749c: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x13749cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x1374a0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1374a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1374a4: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x1374a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x1374a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1374a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1374ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1374acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1374b0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1374b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1374b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1374b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1374b8:
    // 0x1374b8: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1374b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1374bc: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1374bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1374c0: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x1374c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x1374c4: 0x21e102a  slt         $v0, $s0, $fp
    ctx->pc = 0x1374c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1374c8: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x1374C8u;
    {
        const bool branch_taken_0x1374c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1374CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1374C8u;
            // 0x1374cc: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1374c8) {
            ctx->pc = 0x137338u;
            runtime->cooperativeGuestYield();
            goto label_137338;
        }
    }
    ctx->pc = 0x1374D0u;
label_1374d0:
    // 0x1374d0: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1374d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1374d4: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1374d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1374d8: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1374d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1374dc: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1374dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1374e0: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1374e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1374e4: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x1374e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1374e8: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x1374e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1374ec: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x1374ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1374f0: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1374f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1374f4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1374f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1374f8: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1374f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1374fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1374FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1374FCu;
            // 0x137500: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x137338u: goto label_137338;
            case 0x1373B0u: goto label_1373b0;
            case 0x1373C4u: goto label_1373c4;
            case 0x1373C8u: goto label_1373c8;
            case 0x137470u: goto label_137470;
            case 0x1374B8u: goto label_1374b8;
            case 0x1374D0u: goto label_1374d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137504u;
    // 0x137504: 0x0  nop
    ctx->pc = 0x137504u;
    // NOP
}
