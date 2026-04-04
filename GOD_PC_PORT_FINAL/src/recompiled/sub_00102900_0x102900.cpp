#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102900
// Address: 0x102900 - 0x102bb0
void sub_00102900_0x102900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102900_0x102900");
#endif

    ctx->pc = 0x102900u;

    // 0x102900: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x102900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x102904: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102908: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x102908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x10290c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x10290cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x102910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102914: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x102914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x102918: 0x26020fa0  addiu       $v0, $s0, 0xFA0
    ctx->pc = 0x102918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4000));
    // 0x10291c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10291cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x102920: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x102920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x102924: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x102924u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x102928: 0x8e080054  lw          $t0, 0x54($s0)
    ctx->pc = 0x102928u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x10292c: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10292Cu;
    {
        const bool branch_taken_0x10292c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x102930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10292Cu;
            // 0x102930: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10292c) {
            ctx->pc = 0x102970u;
            goto label_102970;
        }
    }
    ctx->pc = 0x102934u;
    // 0x102934: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x102934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102938: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x102938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10293c: 0x0  nop
    ctx->pc = 0x10293cu;
    // NOP
label_102940:
    // 0x102940: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x102940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x102944: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x102944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x102948: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x102948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10294c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x10294cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x102950: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x102950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x102954: 0xe8202b  sltu        $a0, $a3, $t0
    ctx->pc = 0x102954u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x102958: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x102958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x10295c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x10295cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x102960: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x102960u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102964: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x102964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x102968: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x102968u;
    {
        const bool branch_taken_0x102968 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10296Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102968u;
            // 0x10296c: 0x7c620010  sq          $v0, 0x10($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102968) {
            ctx->pc = 0x102940u;
            runtime->cooperativeGuestYield();
            goto label_102940;
        }
    }
    ctx->pc = 0x102970u;
label_102970:
    // 0x102970: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x102970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x102974: 0x3c013991  lui         $at, 0x3991
    ctx->pc = 0x102974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14737 << 16));
    // 0x102978: 0x3421a2b5  ori         $at, $at, 0xA2B5
    ctx->pc = 0x102978u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41653);
    // 0x10297c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x10297cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x102980: 0x8e0d0010  lw          $t5, 0x10($s0)
    ctx->pc = 0x102980u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x102984: 0x8e0c0058  lw          $t4, 0x58($s0)
    ctx->pc = 0x102984u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x102988: 0x8e071120  lw          $a3, 0x1120($s0)
    ctx->pc = 0x102988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4384)));
    // 0x10298c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x10298cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102990: 0xc6060068  lwc1        $f6, 0x68($s0)
    ctx->pc = 0x102990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x102994: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x102994u;
    {
        const bool branch_taken_0x102994 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x102998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102994u;
            // 0x102998: 0xc604006c  lwc1        $f4, 0x6C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x102994) {
            ctx->pc = 0x1029ACu;
            goto label_1029ac;
        }
    }
    ctx->pc = 0x10299Cu;
    // 0x10299c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x10299cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1029a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1029a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1029a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1029A4u;
    {
        const bool branch_taken_0x1029a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1029a4) {
            ctx->pc = 0x1029C4u;
            goto label_1029c4;
        }
    }
    ctx->pc = 0x1029ACu;
label_1029ac:
    // 0x1029ac: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1029acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1029b0: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x1029b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x1029b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1029b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1029b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1029b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1029bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1029bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1029c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1029c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1029c4:
    // 0x1029c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1029c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1029c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1029c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1029cc: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x1029ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1029d0: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x1029d0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1029d4: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1029d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1029d8: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1029d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1029dc: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1029dcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1029e0: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1029e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1029e4: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1029e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1029e8: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1029e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1029ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1029ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1029f0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1029f0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1029f4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1029f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1029f8: 0x11a0003f  beqz        $t5, . + 4 + (0x3F << 2)
    ctx->pc = 0x1029F8u;
    {
        const bool branch_taken_0x1029f8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1029FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1029F8u;
            // 0x1029fc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1029f8) {
            ctx->pc = 0x102AF8u;
            goto label_102af8;
        }
    }
    ctx->pc = 0x102A00u;
    // 0x102a00: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x102a00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a04: 0x0  nop
    ctx->pc = 0x102a04u;
    // NOP
label_102a08:
    // 0x102a08: 0x10c00034  beqz        $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x102A08u;
    {
        const bool branch_taken_0x102a08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102A08u;
            // 0x102a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a08) {
            ctx->pc = 0x102ADCu;
            goto label_102adc;
        }
    }
    ctx->pc = 0x102A10u;
    // 0x102a10: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x102a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a14: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x102a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_102a18:
    // 0x102a18: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x102A18u;
    {
        const bool branch_taken_0x102a18 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x102A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102A18u;
            // 0x102a1c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a18) {
            ctx->pc = 0x102A30u;
            goto label_102a30;
        }
    }
    ctx->pc = 0x102A20u;
    // 0x102a20: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x102a20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x102a24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x102a24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x102a28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x102A28u;
    {
        const bool branch_taken_0x102a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x102a28) {
            ctx->pc = 0x102A44u;
            goto label_102a44;
        }
    }
    ctx->pc = 0x102A30u;
label_102a30:
    // 0x102a30: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x102a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x102a34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x102a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x102a38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x102a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x102a3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x102a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x102a40: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x102a40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_102a44:
    // 0x102a44: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x102a44u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[5];
    // 0x102a48: 0x3c01c31c  lui         $at, 0xC31C
    ctx->pc = 0x102a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49948 << 16));
    // 0x102a4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x102a4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x102a50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x102a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x102a54: 0x46062001  sub.s       $f0, $f4, $f6
    ctx->pc = 0x102a54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x102a58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x102a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x102a5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x102a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x102a60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x102a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x102a64: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x102a64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x102a68: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x102a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x102a6c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x102a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x102a70: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x102a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x102a74: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x102a74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x102a78: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x102a78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x102a7c: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x102a7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x102a80: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x102a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102a84: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x102a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x102a88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x102a8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x102a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x102a90: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x102A90u;
    {
        const bool branch_taken_0x102a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102A90u;
            // 0x102a94: 0xf9610000  sqc2        $vf1, 0x0($t3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a90) {
            ctx->pc = 0x102AC8u;
            goto label_102ac8;
        }
    }
    ctx->pc = 0x102A98u;
    // 0x102a98: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x102a98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102a9c: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x102a9cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102aa0: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x102aa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x102aa4: 0x4be218ac  vsub.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x102aa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102aa8: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x102aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x102aac: 0x48ac0800  qmtc2.ni    $t4, $vf1
    ctx->pc = 0x102aacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x102ab0: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x102ab0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102ab4: 0x4be410a8  vadd.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x102ab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102ab8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x102ab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102abc: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x102abcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102ac0: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x102ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102ac4: 0xf8830010  sqc2        $vf3, 0x10($a0)
    ctx->pc = 0x102ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[3]));
label_102ac8:
    // 0x102ac8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x102ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x102acc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x102accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x102ad0: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x102ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x102ad4: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x102AD4u;
    {
        const bool branch_taken_0x102ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102AD4u;
            // 0x102ad8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ad4) {
            ctx->pc = 0x102A18u;
            runtime->cooperativeGuestYield();
            goto label_102a18;
        }
    }
    ctx->pc = 0x102ADCu;
label_102adc:
    // 0x102adc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x102adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x102ae0: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x102ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x102ae4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x102ae4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x102ae8: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x102ae8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x102aec: 0x14d102b  sltu        $v0, $t2, $t5
    ctx->pc = 0x102aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x102af0: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x102AF0u;
    {
        const bool branch_taken_0x102af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102AF0u;
            // 0x102af4: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102af0) {
            ctx->pc = 0x102A08u;
            runtime->cooperativeGuestYield();
            goto label_102a08;
        }
    }
    ctx->pc = 0x102AF8u;
label_102af8:
    // 0x102af8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x102af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x102afc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x102afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x102b00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x102b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b04: 0x0  nop
    ctx->pc = 0x102b04u;
    // NOP
label_102b08:
    // 0x102b08: 0xc0411c2  jal         func_104708
    ctx->pc = 0x102B08u;
    SET_GPR_U32(ctx, 31, 0x102B10u);
    ctx->pc = 0x102B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102B08u;
            // 0x102b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104708u;
    if (runtime->hasFunction(0x104708u)) {
        auto targetFn = runtime->lookupFunction(0x104708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B10u; }
        if (ctx->pc != 0x102B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104708_0x104708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B10u; }
        if (ctx->pc != 0x102B10u) { return; }
    }
    ctx->pc = 0x102B10u;
    // 0x102b10: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x102b10u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x102b14: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x102b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x102b18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x102b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x102b1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x102b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102b20: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x102b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102b24: 0x0  nop
    ctx->pc = 0x102b24u;
    // NOP
    // 0x102b28: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x102B28u;
    {
        const bool branch_taken_0x102b28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x102b28) {
            ctx->pc = 0x102B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x102B28u;
            // 0x102b2c: 0x8e020694  lw          $v0, 0x694($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x102B64u;
            goto label_102b64;
        }
    }
    ctx->pc = 0x102B30u;
    // 0x102b30: 0x4602a001  sub.s       $f0, $f20, $f2
    ctx->pc = 0x102b30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x102b34: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x102b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x102b38: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x102b38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x102b3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x102b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x102b40: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x102b40u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x102b44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x102b44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102b48: 0x0  nop
    ctx->pc = 0x102b48u;
    // NOP
    // 0x102b4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x102B4Cu;
    {
        const bool branch_taken_0x102b4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x102B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102B4Cu;
            // 0x102b50: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b4c) {
            ctx->pc = 0x102B60u;
            goto label_102b60;
        }
    }
    ctx->pc = 0x102B54u;
    // 0x102b54: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x102b54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x102b58: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x102B58u;
    {
        const bool branch_taken_0x102b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102B58u;
            // 0x102b5c: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b58) {
            ctx->pc = 0x102B08u;
            runtime->cooperativeGuestYield();
            goto label_102b08;
        }
    }
    ctx->pc = 0x102B60u;
label_102b60:
    // 0x102b60: 0x8e020694  lw          $v0, 0x694($s0)
    ctx->pc = 0x102b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
label_102b64:
    // 0x102b64: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x102b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x102b68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x102B68u;
    {
        const bool branch_taken_0x102b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102B68u;
            // 0x102b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b68) {
            ctx->pc = 0x102B80u;
            goto label_102b80;
        }
    }
    ctx->pc = 0x102B70u;
    // 0x102b70: 0xc040f6e  jal         func_103DB8
    ctx->pc = 0x102B70u;
    SET_GPR_U32(ctx, 31, 0x102B78u);
    ctx->pc = 0x102B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102B70u;
            // 0x102b74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103DB8u;
    if (runtime->hasFunction(0x103DB8u)) {
        auto targetFn = runtime->lookupFunction(0x103DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B78u; }
        if (ctx->pc != 0x102B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103DB8_0x103db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B78u; }
        if (ctx->pc != 0x102B78u) { return; }
    }
    ctx->pc = 0x102B78u;
    // 0x102b78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x102B78u;
    {
        const bool branch_taken_0x102b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102B78u;
            // 0x102b7c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b78) {
            ctx->pc = 0x102B8Cu;
            goto label_102b8c;
        }
    }
    ctx->pc = 0x102B80u;
label_102b80:
    // 0x102b80: 0xc040d5e  jal         func_103578
    ctx->pc = 0x102B80u;
    SET_GPR_U32(ctx, 31, 0x102B88u);
    ctx->pc = 0x102B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102B80u;
            // 0x102b84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103578u;
    if (runtime->hasFunction(0x103578u)) {
        auto targetFn = runtime->lookupFunction(0x103578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B88u; }
        if (ctx->pc != 0x102B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_103578_0x103650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B88u; }
        if (ctx->pc != 0x102B88u) { return; }
    }
    ctx->pc = 0x102B88u;
    // 0x102b88: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x102b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_102b8c:
    // 0x102b8c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x102b8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102b90: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x102b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102b94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x102b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102b98: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x102b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x102b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x102B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102B9Cu;
            // 0x102ba0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102940u: goto label_102940;
            case 0x102970u: goto label_102970;
            case 0x1029ACu: goto label_1029ac;
            case 0x1029C4u: goto label_1029c4;
            case 0x102A08u: goto label_102a08;
            case 0x102A18u: goto label_102a18;
            case 0x102A30u: goto label_102a30;
            case 0x102A44u: goto label_102a44;
            case 0x102AC8u: goto label_102ac8;
            case 0x102ADCu: goto label_102adc;
            case 0x102AF8u: goto label_102af8;
            case 0x102B08u: goto label_102b08;
            case 0x102B60u: goto label_102b60;
            case 0x102B64u: goto label_102b64;
            case 0x102B80u: goto label_102b80;
            case 0x102B8Cu: goto label_102b8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102BA4u;
    // 0x102ba4: 0x0  nop
    ctx->pc = 0x102ba4u;
    // NOP
    // 0x102ba8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x102ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x102bac: 0x0  nop
    ctx->pc = 0x102bacu;
    // NOP
}
