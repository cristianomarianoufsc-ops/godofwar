#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00190140
// Address: 0x190140 - 0x190f20
void sub_00190140_0x190140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190140_0x190140");
#endif

    ctx->pc = 0x190140u;

label_190140:
    // 0x190140: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x190140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x190144: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x190144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x190148: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x190148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x19014c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19014cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190150: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x190150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x190154: 0x70078ca9  por         $s1, $zero, $a3
    ctx->pc = 0x190154u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x190158: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x190158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x19015c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19015cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190160: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x190160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x190164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x190164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x190168: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x190168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19016c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x19016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x190170: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x190170u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x190174: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x190178: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x190178u;
    {
        const bool branch_taken_0x190178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19017Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190178u;
            // 0x19017c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190178) {
            ctx->pc = 0x1901E8u;
            goto label_1901e8;
        }
    }
    ctx->pc = 0x190180u;
    // 0x190180: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x190180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x190184: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x190184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x190188: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x190188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x19018c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19018cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x190190: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x190190u;
    {
        const bool branch_taken_0x190190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190190u;
            // 0x190194: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190190) {
            ctx->pc = 0x1902A4u;
            goto label_1902a4;
        }
    }
    ctx->pc = 0x190198u;
    // 0x190198: 0x52400043  beql        $s2, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x190198u;
    {
        const bool branch_taken_0x190198 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x190198) {
            ctx->pc = 0x19019Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190198u;
            // 0x19019c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1902A8u;
            goto label_1902a8;
        }
    }
    ctx->pc = 0x1901A0u;
    // 0x1901a0: 0xc641028c  lwc1        $f1, 0x28C($s2)
    ctx->pc = 0x1901a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1901a4: 0x3c01476a  lui         $at, 0x476A
    ctx->pc = 0x1901a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18282 << 16));
    // 0x1901a8: 0x34216000  ori         $at, $at, 0x6000
    ctx->pc = 0x1901a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24576);
    // 0x1901ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1901acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1901b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1901b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1901b4: 0x0  nop
    ctx->pc = 0x1901b4u;
    // NOP
    // 0x1901b8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1901B8u;
    {
        const bool branch_taken_0x1901b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1901BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1901B8u;
            // 0x1901bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1901b8) {
            ctx->pc = 0x1901C4u;
            goto label_1901c4;
        }
    }
    ctx->pc = 0x1901C0u;
    // 0x1901c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1901c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1901c4:
    // 0x1901c4: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1901C4u;
    {
        const bool branch_taken_0x1901c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1901C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1901C4u;
            // 0x1901c8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1901c4) {
            ctx->pc = 0x1902A4u;
            goto label_1902a4;
        }
    }
    ctx->pc = 0x1901CCu;
    // 0x1901cc: 0x9602005a  lhu         $v0, 0x5A($s0)
    ctx->pc = 0x1901ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x1901d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1901d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1901d4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1901d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1901d8: 0xc0782f0  jal         func_1E0BC0
    ctx->pc = 0x1901D8u;
    SET_GPR_U32(ctx, 31, 0x1901E0u);
    ctx->pc = 0x1901DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1901D8u;
            // 0x1901dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0BC0u;
    if (runtime->hasFunction(0x1E0BC0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1901E0u; }
        if (ctx->pc != 0x1901E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0BC0_0x1e0bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1901E0u; }
        if (ctx->pc != 0x1901E0u) { return; }
    }
    ctx->pc = 0x1901E0u;
    // 0x1901e0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1901E0u;
    {
        const bool branch_taken_0x1901e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1901E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1901E0u;
            // 0x1901e4: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1901e0) {
            ctx->pc = 0x1902A4u;
            goto label_1902a4;
        }
    }
    ctx->pc = 0x1901E8u;
label_1901e8:
    // 0x1901e8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1901e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1901ec: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1901ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1901f0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1901f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1901f4: 0x40f809  jalr        $v0
    ctx->pc = 0x1901F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1901FCu);
        ctx->pc = 0x1901F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1901F4u;
            // 0x1901f8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1901FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190140u: goto label_190140;
            case 0x1901C4u: goto label_1901c4;
            case 0x1901E8u: goto label_1901e8;
            case 0x190228u: goto label_190228;
            case 0x1902A0u: goto label_1902a0;
            case 0x1902A4u: goto label_1902a4;
            case 0x1902A8u: goto label_1902a8;
            case 0x190320u: goto label_190320;
            case 0x190328u: goto label_190328;
            case 0x190338u: goto label_190338;
            case 0x190354u: goto label_190354;
            case 0x190390u: goto label_190390;
            case 0x190394u: goto label_190394;
            case 0x1903A8u: goto label_1903a8;
            case 0x1903D8u: goto label_1903d8;
            case 0x190400u: goto label_190400;
            case 0x190438u: goto label_190438;
            case 0x19043Cu: goto label_19043c;
            case 0x1904F0u: goto label_1904f0;
            case 0x1905B8u: goto label_1905b8;
            case 0x190640u: goto label_190640;
            case 0x190764u: goto label_190764;
            case 0x19076Cu: goto label_19076c;
            case 0x190770u: goto label_190770;
            case 0x1907CCu: goto label_1907cc;
            case 0x1907F8u: goto label_1907f8;
            case 0x190810u: goto label_190810;
            case 0x19082Cu: goto label_19082c;
            case 0x190840u: goto label_190840;
            case 0x19088Cu: goto label_19088c;
            case 0x190894u: goto label_190894;
            case 0x1908E8u: goto label_1908e8;
            case 0x190900u: goto label_190900;
            case 0x190904u: goto label_190904;
            case 0x1909A0u: goto label_1909a0;
            case 0x1909B8u: goto label_1909b8;
            case 0x1909F4u: goto label_1909f4;
            case 0x190A38u: goto label_190a38;
            case 0x190A68u: goto label_190a68;
            case 0x190A80u: goto label_190a80;
            case 0x190A90u: goto label_190a90;
            case 0x190AD0u: goto label_190ad0;
            case 0x190B20u: goto label_190b20;
            case 0x190B28u: goto label_190b28;
            case 0x190B90u: goto label_190b90;
            case 0x190B98u: goto label_190b98;
            case 0x190BBCu: goto label_190bbc;
            case 0x190BC4u: goto label_190bc4;
            case 0x190BE8u: goto label_190be8;
            case 0x190BF0u: goto label_190bf0;
            case 0x190CA8u: goto label_190ca8;
            case 0x190CD0u: goto label_190cd0;
            case 0x190CD4u: goto label_190cd4;
            case 0x190D08u: goto label_190d08;
            case 0x190D2Cu: goto label_190d2c;
            case 0x190D30u: goto label_190d30;
            case 0x190D60u: goto label_190d60;
            case 0x190D94u: goto label_190d94;
            case 0x190DA0u: goto label_190da0;
            case 0x190DD0u: goto label_190dd0;
            case 0x190E00u: goto label_190e00;
            case 0x190E08u: goto label_190e08;
            case 0x190E0Cu: goto label_190e0c;
            case 0x190E48u: goto label_190e48;
            case 0x190E4Cu: goto label_190e4c;
            case 0x190E58u: goto label_190e58;
            case 0x190EECu: goto label_190eec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1901FCu; }
            if (ctx->pc != 0x1901FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1901FCu;
    // 0x1901fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1901FCu;
    {
        const bool branch_taken_0x1901fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1901FCu;
            // 0x190200: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1901fc) {
            ctx->pc = 0x190228u;
            goto label_190228;
        }
    }
    ctx->pc = 0x190204u;
    // 0x190204: 0x8e690030  lw          $t1, 0x30($s3)
    ctx->pc = 0x190204u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x190208: 0xc66c0028  lwc1        $f12, 0x28($s3)
    ctx->pc = 0x190208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19020c: 0x701144a9  por         $t0, $zero, $s1
    ctx->pc = 0x19020cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x190210: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x190210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x190214: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x190214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x190218: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x190218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x19021c: 0xc080e84  jal         func_203A10
    ctx->pc = 0x19021Cu;
    SET_GPR_U32(ctx, 31, 0x190224u);
    ctx->pc = 0x190220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19021Cu;
            // 0x190220: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203A10u;
    if (runtime->hasFunction(0x203A10u)) {
        auto targetFn = runtime->lookupFunction(0x203A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190224u; }
        if (ctx->pc != 0x190224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203A10_0x203a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190224u; }
        if (ctx->pc != 0x190224u) { return; }
    }
    ctx->pc = 0x190224u;
    // 0x190224: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x190224u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_190228:
    // 0x190228: 0x8605002e  lh          $a1, 0x2E($s0)
    ctx->pc = 0x190228u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x19022c: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x19022Cu;
    {
        const bool branch_taken_0x19022c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x190230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19022Cu;
            // 0x190230: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19022c) {
            ctx->pc = 0x1902A0u;
            goto label_1902a0;
        }
    }
    ctx->pc = 0x190234u;
    // 0x190234: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x190234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190238: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x190238u;
    SET_GPR_U32(ctx, 31, 0x190240u);
    ctx->pc = 0x19023Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190238u;
            // 0x19023c: 0x8c441184  lw          $a0, 0x1184($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4484)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190240u; }
        if (ctx->pc != 0x190240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190240u; }
        if (ctx->pc != 0x190240u) { return; }
    }
    ctx->pc = 0x190240u;
    // 0x190240: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x190240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x190244: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x190244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190248: 0x78b00050  lq          $s0, 0x50($a1)
    ctx->pc = 0x190248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x19024c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19024cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190250: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x190250u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x190254: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x190254u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x190258: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x190258u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19025c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x19025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x190260: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x190260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x190264: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x190264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x190268: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x190268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19026c: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x19026cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x190270: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x190270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x190274: 0x40f809  jalr        $v0
    ctx->pc = 0x190274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19027Cu);
        ctx->pc = 0x190278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190274u;
            // 0x190278: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19027Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190140u: goto label_190140;
            case 0x1901C4u: goto label_1901c4;
            case 0x1901E8u: goto label_1901e8;
            case 0x190228u: goto label_190228;
            case 0x1902A0u: goto label_1902a0;
            case 0x1902A4u: goto label_1902a4;
            case 0x1902A8u: goto label_1902a8;
            case 0x190320u: goto label_190320;
            case 0x190328u: goto label_190328;
            case 0x190338u: goto label_190338;
            case 0x190354u: goto label_190354;
            case 0x190390u: goto label_190390;
            case 0x190394u: goto label_190394;
            case 0x1903A8u: goto label_1903a8;
            case 0x1903D8u: goto label_1903d8;
            case 0x190400u: goto label_190400;
            case 0x190438u: goto label_190438;
            case 0x19043Cu: goto label_19043c;
            case 0x1904F0u: goto label_1904f0;
            case 0x1905B8u: goto label_1905b8;
            case 0x190640u: goto label_190640;
            case 0x190764u: goto label_190764;
            case 0x19076Cu: goto label_19076c;
            case 0x190770u: goto label_190770;
            case 0x1907CCu: goto label_1907cc;
            case 0x1907F8u: goto label_1907f8;
            case 0x190810u: goto label_190810;
            case 0x19082Cu: goto label_19082c;
            case 0x190840u: goto label_190840;
            case 0x19088Cu: goto label_19088c;
            case 0x190894u: goto label_190894;
            case 0x1908E8u: goto label_1908e8;
            case 0x190900u: goto label_190900;
            case 0x190904u: goto label_190904;
            case 0x1909A0u: goto label_1909a0;
            case 0x1909B8u: goto label_1909b8;
            case 0x1909F4u: goto label_1909f4;
            case 0x190A38u: goto label_190a38;
            case 0x190A68u: goto label_190a68;
            case 0x190A80u: goto label_190a80;
            case 0x190A90u: goto label_190a90;
            case 0x190AD0u: goto label_190ad0;
            case 0x190B20u: goto label_190b20;
            case 0x190B28u: goto label_190b28;
            case 0x190B90u: goto label_190b90;
            case 0x190B98u: goto label_190b98;
            case 0x190BBCu: goto label_190bbc;
            case 0x190BC4u: goto label_190bc4;
            case 0x190BE8u: goto label_190be8;
            case 0x190BF0u: goto label_190bf0;
            case 0x190CA8u: goto label_190ca8;
            case 0x190CD0u: goto label_190cd0;
            case 0x190CD4u: goto label_190cd4;
            case 0x190D08u: goto label_190d08;
            case 0x190D2Cu: goto label_190d2c;
            case 0x190D30u: goto label_190d30;
            case 0x190D60u: goto label_190d60;
            case 0x190D94u: goto label_190d94;
            case 0x190DA0u: goto label_190da0;
            case 0x190DD0u: goto label_190dd0;
            case 0x190E00u: goto label_190e00;
            case 0x190E08u: goto label_190e08;
            case 0x190E0Cu: goto label_190e0c;
            case 0x190E48u: goto label_190e48;
            case 0x190E4Cu: goto label_190e4c;
            case 0x190E58u: goto label_190e58;
            case 0x190EECu: goto label_190eec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19027Cu; }
            if (ctx->pc != 0x19027Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19027Cu;
    // 0x19027c: 0x8c470088  lw          $a3, 0x88($v0)
    ctx->pc = 0x19027cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x190280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x190280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190284: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x190284u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x190288: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x190288u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x19028c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19028cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x190290: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x190290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x190294: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x190294u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x190298: 0xc088312  jal         func_220C48
    ctx->pc = 0x190298u;
    SET_GPR_U32(ctx, 31, 0x1902A0u);
    ctx->pc = 0x19029Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190298u;
            // 0x19029c: 0x7ba60000  lq          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220C48u;
    if (runtime->hasFunction(0x220C48u)) {
        auto targetFn = runtime->lookupFunction(0x220C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1902A0u; }
        if (ctx->pc != 0x1902A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220C48_0x220c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1902A0u; }
        if (ctx->pc != 0x1902A0u) { return; }
    }
    ctx->pc = 0x1902A0u;
label_1902a0:
    // 0x1902a0: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1902a0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1902a4:
    // 0x1902a4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1902a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1902a8:
    // 0x1902a8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1902a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1902ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1902acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1902b0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1902b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1902b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1902b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1902b8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1902b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1902bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1902BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1902C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1902BCu;
            // 0x1902c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190140u: goto label_190140;
            case 0x1901C4u: goto label_1901c4;
            case 0x1901E8u: goto label_1901e8;
            case 0x190228u: goto label_190228;
            case 0x1902A0u: goto label_1902a0;
            case 0x1902A4u: goto label_1902a4;
            case 0x1902A8u: goto label_1902a8;
            case 0x190320u: goto label_190320;
            case 0x190328u: goto label_190328;
            case 0x190338u: goto label_190338;
            case 0x190354u: goto label_190354;
            case 0x190390u: goto label_190390;
            case 0x190394u: goto label_190394;
            case 0x1903A8u: goto label_1903a8;
            case 0x1903D8u: goto label_1903d8;
            case 0x190400u: goto label_190400;
            case 0x190438u: goto label_190438;
            case 0x19043Cu: goto label_19043c;
            case 0x1904F0u: goto label_1904f0;
            case 0x1905B8u: goto label_1905b8;
            case 0x190640u: goto label_190640;
            case 0x190764u: goto label_190764;
            case 0x19076Cu: goto label_19076c;
            case 0x190770u: goto label_190770;
            case 0x1907CCu: goto label_1907cc;
            case 0x1907F8u: goto label_1907f8;
            case 0x190810u: goto label_190810;
            case 0x19082Cu: goto label_19082c;
            case 0x190840u: goto label_190840;
            case 0x19088Cu: goto label_19088c;
            case 0x190894u: goto label_190894;
            case 0x1908E8u: goto label_1908e8;
            case 0x190900u: goto label_190900;
            case 0x190904u: goto label_190904;
            case 0x1909A0u: goto label_1909a0;
            case 0x1909B8u: goto label_1909b8;
            case 0x1909F4u: goto label_1909f4;
            case 0x190A38u: goto label_190a38;
            case 0x190A68u: goto label_190a68;
            case 0x190A80u: goto label_190a80;
            case 0x190A90u: goto label_190a90;
            case 0x190AD0u: goto label_190ad0;
            case 0x190B20u: goto label_190b20;
            case 0x190B28u: goto label_190b28;
            case 0x190B90u: goto label_190b90;
            case 0x190B98u: goto label_190b98;
            case 0x190BBCu: goto label_190bbc;
            case 0x190BC4u: goto label_190bc4;
            case 0x190BE8u: goto label_190be8;
            case 0x190BF0u: goto label_190bf0;
            case 0x190CA8u: goto label_190ca8;
            case 0x190CD0u: goto label_190cd0;
            case 0x190CD4u: goto label_190cd4;
            case 0x190D08u: goto label_190d08;
            case 0x190D2Cu: goto label_190d2c;
            case 0x190D30u: goto label_190d30;
            case 0x190D60u: goto label_190d60;
            case 0x190D94u: goto label_190d94;
            case 0x190DA0u: goto label_190da0;
            case 0x190DD0u: goto label_190dd0;
            case 0x190E00u: goto label_190e00;
            case 0x190E08u: goto label_190e08;
            case 0x190E0Cu: goto label_190e0c;
            case 0x190E48u: goto label_190e48;
            case 0x190E4Cu: goto label_190e4c;
            case 0x190E58u: goto label_190e58;
            case 0x190EECu: goto label_190eec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1902C4u;
    // 0x1902c4: 0x0  nop
    ctx->pc = 0x1902c4u;
    // NOP
    // 0x1902c8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1902c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1902cc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1902ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1902d0: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1902d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x1902d4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1902d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1902d8: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1902d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1902dc: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1902dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1902e0: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1902e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1902e4: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x1902e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x1902e8: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1902e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x1902ec: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x1902ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x1902f0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1902f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1902f4: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1902f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1902f8: 0x8c45f190  lw          $a1, -0xE70($v0)
    ctx->pc = 0x1902f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963600)));
    // 0x1902fc: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1902fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x190300: 0x8cb1004c  lw          $s1, 0x4C($a1)
    ctx->pc = 0x190300u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x190304: 0x8c7477b4  lw          $s4, 0x77B4($v1)
    ctx->pc = 0x190304u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30644)));
    // 0x190308: 0x8cb30064  lw          $s3, 0x64($a1)
    ctx->pc = 0x190308u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x19030c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x19030Cu;
    {
        const bool branch_taken_0x19030c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x190310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19030Cu;
            // 0x190310: 0x9624005c  lhu         $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19030c) {
            ctx->pc = 0x190320u;
            goto label_190320;
        }
    }
    ctx->pc = 0x190314u;
    // 0x190314: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x190314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x190318: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190318u;
    {
        const bool branch_taken_0x190318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190318) {
            ctx->pc = 0x190328u;
            goto label_190328;
        }
    }
    ctx->pc = 0x190320u;
label_190320:
    // 0x190320: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x190320u;
    {
        const bool branch_taken_0x190320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190320u;
            // 0x190324: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190320) {
            ctx->pc = 0x190904u;
            goto label_190904;
        }
    }
    ctx->pc = 0x190328u;
label_190328:
    // 0x190328: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x190328u;
    {
        const bool branch_taken_0x190328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19032Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190328u;
            // 0x19032c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190328) {
            ctx->pc = 0x190354u;
            goto label_190354;
        }
    }
    ctx->pc = 0x190330u;
    // 0x190330: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x190330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x190334: 0x0  nop
    ctx->pc = 0x190334u;
    // NOP
label_190338:
    // 0x190338: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x190338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19033c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x19033cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x190340: 0x10540152  beq         $v0, $s4, . + 4 + (0x152 << 2)
    ctx->pc = 0x190340u;
    {
        const bool branch_taken_0x190340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x190344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190340u;
            // 0x190344: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190340) {
            ctx->pc = 0x19088Cu;
            goto label_19088c;
        }
    }
    ctx->pc = 0x190348u;
    // 0x190348: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x190348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19034c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19034Cu;
    {
        const bool branch_taken_0x19034c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19034Cu;
            // 0x190350: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19034c) {
            ctx->pc = 0x190338u;
            runtime->cooperativeGuestYield();
            goto label_190338;
        }
    }
    ctx->pc = 0x190354u;
label_190354:
    // 0x190354: 0x8ca40068  lw          $a0, 0x68($a1)
    ctx->pc = 0x190354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x190358: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x190358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x19035c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19035Cu;
    {
        const bool branch_taken_0x19035c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19035Cu;
            // 0x190360: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19035c) {
            ctx->pc = 0x190394u;
            goto label_190394;
        }
    }
    ctx->pc = 0x190364u;
    // 0x190364: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x190364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x190368: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x190368u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x19036c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19036cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x190370: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x190370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x190374: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x190374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x190378: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x190378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19037c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19037cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190380: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190384: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x190384u;
    {
        const bool branch_taken_0x190384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x190388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190384u;
            // 0x190388: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190384) {
            ctx->pc = 0x190390u;
            goto label_190390;
        }
    }
    ctx->pc = 0x19038Cu;
    // 0x19038c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x19038cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_190390:
    // 0x190390: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x190390u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_190394:
    // 0x190394: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x190394u;
    {
        const bool branch_taken_0x190394 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x190398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190394u;
            // 0x190398: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190394) {
            ctx->pc = 0x1903A8u;
            goto label_1903a8;
        }
    }
    ctx->pc = 0x19039Cu;
    // 0x19039c: 0x8ea30174  lw          $v1, 0x174($s5)
    ctx->pc = 0x19039cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 372)));
    // 0x1903a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1903a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1903a4: 0x62b824  and         $s7, $v1, $v0
    ctx->pc = 0x1903a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1903a8:
    // 0x1903a8: 0x8e8200f4  lw          $v0, 0xF4($s4)
    ctx->pc = 0x1903a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
    // 0x1903ac: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1903acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1903b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1903b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1903b4: 0x50400137  beql        $v0, $zero, . + 4 + (0x137 << 2)
    ctx->pc = 0x1903B4u;
    {
        const bool branch_taken_0x1903b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1903b4) {
            ctx->pc = 0x1903B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1903B4u;
            // 0x1903b8: 0xc6200028  lwc1        $f0, 0x28($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x190894u;
            goto label_190894;
        }
    }
    ctx->pc = 0x1903BCu;
    // 0x1903bc: 0x8e8300fc  lw          $v1, 0xFC($s4)
    ctx->pc = 0x1903bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
    // 0x1903c0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1903C0u;
    {
        const bool branch_taken_0x1903c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1903C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1903C0u;
            // 0x1903c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903c0) {
            ctx->pc = 0x190400u;
            goto label_190400;
        }
    }
    ctx->pc = 0x1903C8u;
    // 0x1903c8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1903c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1903cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1903ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1903d0: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1903D0u;
    {
        const bool branch_taken_0x1903d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1903D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1903D0u;
            // 0x1903d4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903d0) {
            ctx->pc = 0x190400u;
            goto label_190400;
        }
    }
    ctx->pc = 0x1903D8u;
label_1903d8:
    // 0x1903d8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1903d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1903dc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1903dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1903e0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1903e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1903e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1903E4u;
    {
        const bool branch_taken_0x1903e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1903E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1903E4u;
            // 0x1903e8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903e4) {
            ctx->pc = 0x190400u;
            goto label_190400;
        }
    }
    ctx->pc = 0x1903ECu;
    // 0x1903ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1903ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1903f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1903f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1903f4: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1903F4u;
    {
        const bool branch_taken_0x1903f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1903F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1903F4u;
            // 0x1903f8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903f4) {
            ctx->pc = 0x1903D8u;
            runtime->cooperativeGuestYield();
            goto label_1903d8;
        }
    }
    ctx->pc = 0x1903FCu;
    // 0x1903fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1903fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190400:
    // 0x190400: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x190400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x190404: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x190404u;
    {
        const bool branch_taken_0x190404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190404u;
            // 0x190408: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190404) {
            ctx->pc = 0x19043Cu;
            goto label_19043c;
        }
    }
    ctx->pc = 0x19040Cu;
    // 0x19040c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x190410: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x190410u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x190414: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x190414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x190418: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x190418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19041c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x190420: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x190420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x190424: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x190424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190428: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19042c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19042Cu;
    {
        const bool branch_taken_0x19042c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x190430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19042Cu;
            // 0x190430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19042c) {
            ctx->pc = 0x190438u;
            goto label_190438;
        }
    }
    ctx->pc = 0x190434u;
    // 0x190434: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x190434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_190438:
    // 0x190438: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x190438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19043c:
    // 0x19043c: 0x12400130  beqz        $s2, . + 4 + (0x130 << 2)
    ctx->pc = 0x19043Cu;
    {
        const bool branch_taken_0x19043c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x190440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19043Cu;
            // 0x190440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19043c) {
            ctx->pc = 0x190900u;
            goto label_190900;
        }
    }
    ctx->pc = 0x190444u;
    // 0x190444: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x190444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x190448: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x190448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x19044c: 0x8c4200ec  lw          $v0, 0xEC($v0)
    ctx->pc = 0x19044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x190450: 0x40f809  jalr        $v0
    ctx->pc = 0x190450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190458u);
        ctx->pc = 0x190454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190450u;
            // 0x190454: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x190458u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190140u: goto label_190140;
            case 0x1901C4u: goto label_1901c4;
            case 0x1901E8u: goto label_1901e8;
            case 0x190228u: goto label_190228;
            case 0x1902A0u: goto label_1902a0;
            case 0x1902A4u: goto label_1902a4;
            case 0x1902A8u: goto label_1902a8;
            case 0x190320u: goto label_190320;
            case 0x190328u: goto label_190328;
            case 0x190338u: goto label_190338;
            case 0x190354u: goto label_190354;
            case 0x190390u: goto label_190390;
            case 0x190394u: goto label_190394;
            case 0x1903A8u: goto label_1903a8;
            case 0x1903D8u: goto label_1903d8;
            case 0x190400u: goto label_190400;
            case 0x190438u: goto label_190438;
            case 0x19043Cu: goto label_19043c;
            case 0x1904F0u: goto label_1904f0;
            case 0x1905B8u: goto label_1905b8;
            case 0x190640u: goto label_190640;
            case 0x190764u: goto label_190764;
            case 0x19076Cu: goto label_19076c;
            case 0x190770u: goto label_190770;
            case 0x1907CCu: goto label_1907cc;
            case 0x1907F8u: goto label_1907f8;
            case 0x190810u: goto label_190810;
            case 0x19082Cu: goto label_19082c;
            case 0x190840u: goto label_190840;
            case 0x19088Cu: goto label_19088c;
            case 0x190894u: goto label_190894;
            case 0x1908E8u: goto label_1908e8;
            case 0x190900u: goto label_190900;
            case 0x190904u: goto label_190904;
            case 0x1909A0u: goto label_1909a0;
            case 0x1909B8u: goto label_1909b8;
            case 0x1909F4u: goto label_1909f4;
            case 0x190A38u: goto label_190a38;
            case 0x190A68u: goto label_190a68;
            case 0x190A80u: goto label_190a80;
            case 0x190A90u: goto label_190a90;
            case 0x190AD0u: goto label_190ad0;
            case 0x190B20u: goto label_190b20;
            case 0x190B28u: goto label_190b28;
            case 0x190B90u: goto label_190b90;
            case 0x190B98u: goto label_190b98;
            case 0x190BBCu: goto label_190bbc;
            case 0x190BC4u: goto label_190bc4;
            case 0x190BE8u: goto label_190be8;
            case 0x190BF0u: goto label_190bf0;
            case 0x190CA8u: goto label_190ca8;
            case 0x190CD0u: goto label_190cd0;
            case 0x190CD4u: goto label_190cd4;
            case 0x190D08u: goto label_190d08;
            case 0x190D2Cu: goto label_190d2c;
            case 0x190D30u: goto label_190d30;
            case 0x190D60u: goto label_190d60;
            case 0x190D94u: goto label_190d94;
            case 0x190DA0u: goto label_190da0;
            case 0x190DD0u: goto label_190dd0;
            case 0x190E00u: goto label_190e00;
            case 0x190E08u: goto label_190e08;
            case 0x190E0Cu: goto label_190e0c;
            case 0x190E48u: goto label_190e48;
            case 0x190E4Cu: goto label_190e4c;
            case 0x190E58u: goto label_190e58;
            case 0x190EECu: goto label_190eec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x190458u; }
            if (ctx->pc != 0x190458u) { return; }
        }
        }
    }
    ctx->pc = 0x190458u;
    // 0x190458: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x190458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x19045c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x190460: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x190460u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x190464: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x190464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x190468: 0x40f809  jalr        $v0
    ctx->pc = 0x190468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190470u);
        ctx->pc = 0x19046Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190468u;
            // 0x19046c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x190470u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190140u: goto label_190140;
            case 0x1901C4u: goto label_1901c4;
            case 0x1901E8u: goto label_1901e8;
            case 0x190228u: goto label_190228;
            case 0x1902A0u: goto label_1902a0;
            case 0x1902A4u: goto label_1902a4;
            case 0x1902A8u: goto label_1902a8;
            case 0x190320u: goto label_190320;
            case 0x190328u: goto label_190328;
            case 0x190338u: goto label_190338;
            case 0x190354u: goto label_190354;
            case 0x190390u: goto label_190390;
            case 0x190394u: goto label_190394;
            case 0x1903A8u: goto label_1903a8;
            case 0x1903D8u: goto label_1903d8;
            case 0x190400u: goto label_190400;
            case 0x190438u: goto label_190438;
            case 0x19043Cu: goto label_19043c;
            case 0x1904F0u: goto label_1904f0;
            case 0x1905B8u: goto label_1905b8;
            case 0x190640u: goto label_190640;
            case 0x190764u: goto label_190764;
            case 0x19076Cu: goto label_19076c;
            case 0x190770u: goto label_190770;
            case 0x1907CCu: goto label_1907cc;
            case 0x1907F8u: goto label_1907f8;
            case 0x190810u: goto label_190810;
            case 0x19082Cu: goto label_19082c;
            case 0x190840u: goto label_190840;
            case 0x19088Cu: goto label_19088c;
            case 0x190894u: goto label_190894;
            case 0x1908E8u: goto label_1908e8;
            case 0x190900u: goto label_190900;
            case 0x190904u: goto label_190904;
            case 0x1909A0u: goto label_1909a0;
            case 0x1909B8u: goto label_1909b8;
            case 0x1909F4u: goto label_1909f4;
            case 0x190A38u: goto label_190a38;
            case 0x190A68u: goto label_190a68;
            case 0x190A80u: goto label_190a80;
            case 0x190A90u: goto label_190a90;
            case 0x190AD0u: goto label_190ad0;
            case 0x190B20u: goto label_190b20;
            case 0x190B28u: goto label_190b28;
            case 0x190B90u: goto label_190b90;
            case 0x190B98u: goto label_190b98;
            case 0x190BBCu: goto label_190bbc;
            case 0x190BC4u: goto label_190bc4;
            case 0x190BE8u: goto label_190be8;
            case 0x190BF0u: goto label_190bf0;
            case 0x190CA8u: goto label_190ca8;
            case 0x190CD0u: goto label_190cd0;
            case 0x190CD4u: goto label_190cd4;
            case 0x190D08u: goto label_190d08;
            case 0x190D2Cu: goto label_190d2c;
            case 0x190D30u: goto label_190d30;
            case 0x190D60u: goto label_190d60;
            case 0x190D94u: goto label_190d94;
            case 0x190DA0u: goto label_190da0;
            case 0x190DD0u: goto label_190dd0;
            case 0x190E00u: goto label_190e00;
            case 0x190E08u: goto label_190e08;
            case 0x190E0Cu: goto label_190e0c;
            case 0x190E48u: goto label_190e48;
            case 0x190E4Cu: goto label_190e4c;
            case 0x190E58u: goto label_190e58;
            case 0x190EECu: goto label_190eec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x190470u; }
            if (ctx->pc != 0x190470u) { return; }
        }
        }
    }
    ctx->pc = 0x190470u;
    // 0x190470: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x190470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x190474: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x190474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x190478: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x190478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x19047c: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x19047cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x190480: 0x460700c2  mul.s       $f3, $f0, $f7
    ctx->pc = 0x190480u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x190484: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x190484u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190488: 0x4be408ec  vsub.xyzw   $vf3, $vf1, $vf4
    ctx->pc = 0x190488u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19048c: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x19048cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x190490: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x190490u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x190494: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x190494u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190498: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x190498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19049c: 0x86630058  lh          $v1, 0x58($s3)
    ctx->pc = 0x19049cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1904a0: 0xdba20080  lqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1904a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1904a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1904a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904a8: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1904a8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1904ac: 0x4a0003bf  vwaitq
    ctx->pc = 0x1904acu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1904b0: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1904b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1904b4: 0x4a0002ff  vnop
    ctx->pc = 0x1904b4u;
    // NOP operation, no action needed for VU0
    // 0x1904b8: 0x4a0002ff  vnop
    ctx->pc = 0x1904b8u;
    // NOP operation, no action needed for VU0
    // 0x1904bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1904bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1904c0: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x1904c0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1904c4: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1904c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1904c8: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1904C8u;
    {
        const bool branch_taken_0x1904c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1904CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1904C8u;
            // 0x1904cc: 0xfba10010  sqc2        $vf1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1904c8) {
            ctx->pc = 0x1905B8u;
            goto label_1905b8;
        }
    }
    ctx->pc = 0x1904D0u;
    // 0x1904d0: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1904d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1904d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1904D4u;
    {
        const bool branch_taken_0x1904d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1904D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1904D4u;
            // 0x1904d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1904d4) {
            ctx->pc = 0x1904F0u;
            goto label_1904f0;
        }
    }
    ctx->pc = 0x1904DCu;
    // 0x1904dc: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1904DCu;
    {
        const bool branch_taken_0x1904dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1904dc) {
            ctx->pc = 0x190640u;
            goto label_190640;
        }
    }
    ctx->pc = 0x1904E4u;
    // 0x1904e4: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1904E4u;
    {
        const bool branch_taken_0x1904e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1904e4) {
            ctx->pc = 0x190770u;
            goto label_190770;
        }
    }
    ctx->pc = 0x1904ECu;
    // 0x1904ec: 0x0  nop
    ctx->pc = 0x1904ecu;
    // NOP
label_1904f0:
    // 0x1904f0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1904f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1904f4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1904f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1904f8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1904f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1904fc: 0xc6640038  lwc1        $f4, 0x38($s3)
    ctx->pc = 0x1904fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x190500: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x190500u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190504: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x190504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190508: 0x46000084  c1          0x84
    ctx->pc = 0x190508u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x19050c: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x19050cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x190510: 0x46031180  add.s       $f6, $f2, $f3
    ctx->pc = 0x190510u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x190514: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x190514u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190518: 0x45000095  bc1f        . + 4 + (0x95 << 2)
    ctx->pc = 0x190518u;
    {
        const bool branch_taken_0x190518 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x190518) {
            ctx->pc = 0x190770u;
            goto label_190770;
        }
    }
    ctx->pc = 0x190520u;
    // 0x190520: 0xc661003c  lwc1        $f1, 0x3C($s3)
    ctx->pc = 0x190520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190524: 0x46031141  sub.s       $f5, $f2, $f3
    ctx->pc = 0x190524u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x190528: 0x46070802  mul.s       $f0, $f1, $f7
    ctx->pc = 0x190528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x19052c: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x19052cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190530: 0x0  nop
    ctx->pc = 0x190530u;
    // NOP
    // 0x190534: 0x4500008e  bc1f        . + 4 + (0x8E << 2)
    ctx->pc = 0x190534u;
    {
        const bool branch_taken_0x190534 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190534u;
            // 0x190538: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190534) {
            ctx->pc = 0x190770u;
            goto label_190770;
        }
    }
    ctx->pc = 0x19053Cu;
    // 0x19053c: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x19053cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x190540: 0xc6620040  lwc1        $f2, 0x40($s3)
    ctx->pc = 0x190540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190544: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x190544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x190548: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x190548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19054c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x19054cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x190550: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x190550u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x190554: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x190554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x190558: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x190558u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x19055c: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x19055cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x190560: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x190560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190564: 0x45000082  bc1f        . + 4 + (0x82 << 2)
    ctx->pc = 0x190564u;
    {
        const bool branch_taken_0x190564 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x190564) {
            ctx->pc = 0x190770u;
            goto label_190770;
        }
    }
    ctx->pc = 0x19056Cu;
    // 0x19056c: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x19056cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x190570: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x190570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190574: 0x0  nop
    ctx->pc = 0x190574u;
    // NOP
    // 0x190578: 0x4500007d  bc1f        . + 4 + (0x7D << 2)
    ctx->pc = 0x190578u;
    {
        const bool branch_taken_0x190578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19057Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190578u;
            // 0x19057c: 0xdba20070  lqc2        $vf2, 0x70($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190578) {
            ctx->pc = 0x190770u;
            goto label_190770;
        }
    }
    ctx->pc = 0x190580u;
    // 0x190580: 0x4a841045  vsuby.y     $vf1, $vf2, $vf4y
    ctx->pc = 0x190580u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190584: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x190584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x190588: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x190588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19058c: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x19058cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190590: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x190590u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190594: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x190594u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x190598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19059c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19059cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1905a0: 0x0  nop
    ctx->pc = 0x1905a0u;
    // NOP
    // 0x1905a4: 0x45030072  bc1tl       . + 4 + (0x72 << 2)
    ctx->pc = 0x1905A4u;
    {
        const bool branch_taken_0x1905a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1905a4) {
            ctx->pc = 0x1905A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1905A4u;
            // 0x1905a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x190770u;
            goto label_190770;
        }
    }
    ctx->pc = 0x1905ACu;
    // 0x1905ac: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1905ACu;
    {
        const bool branch_taken_0x1905ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1905ac) {
            ctx->pc = 0x190770u;
            goto label_190770;
        }
    }
    ctx->pc = 0x1905B4u;
    // 0x1905b4: 0x0  nop
    ctx->pc = 0x1905b4u;
    // NOP
label_1905b8:
    // 0x1905b8: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1905b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1905bc: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1905bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1905c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1905c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1905c4: 0x4a8100c0  vaddx.y     $vf3, $vf0, $vf1x
    ctx->pc = 0x1905c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1905c8: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1905c8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1905cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1905ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1905d0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1905d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1905d4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1905d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1905d8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1905d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1905dc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1905dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1905e0: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x1905e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1905e4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1905e4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1905e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1905e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1905ec: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x1905ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x1905f0: 0x46000004  c1          0x4
    ctx->pc = 0x1905f0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1905f4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1905f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1905f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1905f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1905fc: 0x0  nop
    ctx->pc = 0x1905fcu;
    // NOP
    // 0x190600: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
    ctx->pc = 0x190600u;
    {
        const bool branch_taken_0x190600 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190600u;
            // 0x190604: 0xdba20070  lqc2        $vf2, 0x70($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190600) {
            ctx->pc = 0x19076Cu;
            goto label_19076c;
        }
    }
    ctx->pc = 0x190608u;
    // 0x190608: 0x4a841045  vsuby.y     $vf1, $vf2, $vf4y
    ctx->pc = 0x190608u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19060c: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x19060cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x190610: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x190610u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x190614: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x190614u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190618: 0x4a820844  vsubx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x190618u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19061c: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x19061cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x190620: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x190620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190624: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x190624u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190628: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x190628u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x19062c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19062cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190630: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x190630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190634: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x190634u;
    {
        const bool branch_taken_0x190634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190634) {
            ctx->pc = 0x190764u;
            goto label_190764;
        }
    }
    ctx->pc = 0x19063Cu;
    // 0x19063c: 0x0  nop
    ctx->pc = 0x19063cu;
    // NOP
label_190640:
    // 0x190640: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x190640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x190644: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x190644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x190648: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x190648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19064c: 0xc66c0044  lwc1        $f12, 0x44($s3)
    ctx->pc = 0x19064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x190650: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x190650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190654: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x190654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x190658: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x190658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19065c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x19065cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190660: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x190660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x190664: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x190664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x190668: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x190668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19066c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19066cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190670: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x190670u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[2];
    // 0x190674: 0x46000504  c1          0x504
    ctx->pc = 0x190674u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x190678: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x190678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19067c: 0xc060e52  jal         func_183948
    ctx->pc = 0x19067Cu;
    SET_GPR_U32(ctx, 31, 0x190684u);
    ctx->pc = 0x190680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19067Cu;
            // 0x190680: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190684u; }
        if (ctx->pc != 0x190684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190684u; }
        if (ctx->pc != 0x190684u) { return; }
    }
    ctx->pc = 0x190684u;
    // 0x190684: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x190684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x190688: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x190688u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19068c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x19068cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x190690: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x190690u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x190694: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x190694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x190698: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x190698u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19069c: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x19069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1906a0: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1906a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1906a4: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1906a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1906a8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1906a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1906ac: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1906acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1906b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1906b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1906b4: 0x4be3133c  vmove.xyzw  $vf3, $vf2
    ctx->pc = 0x1906b4u;
    ctx->vu0_vf[3] = ctx->vu0_vf[2];
    // 0x1906b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1906b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906bc: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1906bcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1906c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1906c0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1906c4: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1906c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1906c8: 0x4a0002ff  vnop
    ctx->pc = 0x1906c8u;
    // NOP operation, no action needed for VU0
    // 0x1906cc: 0x4a0002ff  vnop
    ctx->pc = 0x1906ccu;
    // NOP operation, no action needed for VU0
    // 0x1906d0: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1906d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1906d4: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1906d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1906d8: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1906d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1906dc: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x1906dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1906e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1906e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1906e4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1906e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1906e8: 0x0  nop
    ctx->pc = 0x1906e8u;
    // NOP
    // 0x1906ec: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x1906ECu;
    {
        const bool branch_taken_0x1906ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1906F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1906ECu;
            // 0x1906f0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906ec) {
            ctx->pc = 0x190770u;
            goto label_190770;
        }
    }
    ctx->pc = 0x1906F4u;
    // 0x1906f4: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1906f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1906f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1906f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1906fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1906fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190700: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x190700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x190704: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x190704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190708: 0x0  nop
    ctx->pc = 0x190708u;
    // NOP
    // 0x19070c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x19070Cu;
    {
        const bool branch_taken_0x19070c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19070Cu;
            // 0x190710: 0xdba20070  lqc2        $vf2, 0x70($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19070c) {
            ctx->pc = 0x190770u;
            goto label_190770;
        }
    }
    ctx->pc = 0x190714u;
    // 0x190714: 0x4a841045  vsuby.y     $vf1, $vf2, $vf4y
    ctx->pc = 0x190714u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190718: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x190718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x19071c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19071cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190720: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x190720u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190724: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x190724u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190728: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x190728u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x19072c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19072cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190730: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x190730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190734: 0x0  nop
    ctx->pc = 0x190734u;
    // NOP
    // 0x190738: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x190738u;
    {
        const bool branch_taken_0x190738 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19073Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190738u;
            // 0x19073c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190738) {
            ctx->pc = 0x190770u;
            goto label_190770;
        }
    }
    ctx->pc = 0x190740u;
    // 0x190740: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x190740u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190744: 0x4be218aa  vmul.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x190744u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x190748: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x190748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19074c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x19074cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190750: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x190750u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190754: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x190754u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190758: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x190758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19075c: 0x0  nop
    ctx->pc = 0x19075cu;
    // NOP
    // 0x190760: 0x0  nop
    ctx->pc = 0x190760u;
    // NOP
label_190764:
    // 0x190764: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x190764u;
    {
        const bool branch_taken_0x190764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190764) {
            ctx->pc = 0x190768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190764u;
            // 0x190768: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19076Cu;
            goto label_19076c;
        }
    }
    ctx->pc = 0x19076Cu;
label_19076c:
    // 0x19076c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19076cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_190770:
    // 0x190770: 0x10800064  beqz        $a0, . + 4 + (0x64 << 2)
    ctx->pc = 0x190770u;
    {
        const bool branch_taken_0x190770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x190774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190770u;
            // 0x190774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190770) {
            ctx->pc = 0x190904u;
            goto label_190904;
        }
    }
    ctx->pc = 0x190778u;
    // 0x190778: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x190778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x19077c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x19077cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x190780: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x190784: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x190784u;
    {
        const bool branch_taken_0x190784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190784u;
            // 0x190788: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190784) {
            ctx->pc = 0x190810u;
            goto label_190810;
        }
    }
    ctx->pc = 0x19078Cu;
    // 0x19078c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19078cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x190790: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x190790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x190794: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x190794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x190798: 0x40f809  jalr        $v0
    ctx->pc = 0x190798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1907A0u);
        ctx->pc = 0x19079Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190798u;
            // 0x19079c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1907A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190140u: goto label_190140;
            case 0x1901C4u: goto label_1901c4;
            case 0x1901E8u: goto label_1901e8;
            case 0x190228u: goto label_190228;
            case 0x1902A0u: goto label_1902a0;
            case 0x1902A4u: goto label_1902a4;
            case 0x1902A8u: goto label_1902a8;
            case 0x190320u: goto label_190320;
            case 0x190328u: goto label_190328;
            case 0x190338u: goto label_190338;
            case 0x190354u: goto label_190354;
            case 0x190390u: goto label_190390;
            case 0x190394u: goto label_190394;
            case 0x1903A8u: goto label_1903a8;
            case 0x1903D8u: goto label_1903d8;
            case 0x190400u: goto label_190400;
            case 0x190438u: goto label_190438;
            case 0x19043Cu: goto label_19043c;
            case 0x1904F0u: goto label_1904f0;
            case 0x1905B8u: goto label_1905b8;
            case 0x190640u: goto label_190640;
            case 0x190764u: goto label_190764;
            case 0x19076Cu: goto label_19076c;
            case 0x190770u: goto label_190770;
            case 0x1907CCu: goto label_1907cc;
            case 0x1907F8u: goto label_1907f8;
            case 0x190810u: goto label_190810;
            case 0x19082Cu: goto label_19082c;
            case 0x190840u: goto label_190840;
            case 0x19088Cu: goto label_19088c;
            case 0x190894u: goto label_190894;
            case 0x1908E8u: goto label_1908e8;
            case 0x190900u: goto label_190900;
            case 0x190904u: goto label_190904;
            case 0x1909A0u: goto label_1909a0;
            case 0x1909B8u: goto label_1909b8;
            case 0x1909F4u: goto label_1909f4;
            case 0x190A38u: goto label_190a38;
            case 0x190A68u: goto label_190a68;
            case 0x190A80u: goto label_190a80;
            case 0x190A90u: goto label_190a90;
            case 0x190AD0u: goto label_190ad0;
            case 0x190B20u: goto label_190b20;
            case 0x190B28u: goto label_190b28;
            case 0x190B90u: goto label_190b90;
            case 0x190B98u: goto label_190b98;
            case 0x190BBCu: goto label_190bbc;
            case 0x190BC4u: goto label_190bc4;
            case 0x190BE8u: goto label_190be8;
            case 0x190BF0u: goto label_190bf0;
            case 0x190CA8u: goto label_190ca8;
            case 0x190CD0u: goto label_190cd0;
            case 0x190CD4u: goto label_190cd4;
            case 0x190D08u: goto label_190d08;
            case 0x190D2Cu: goto label_190d2c;
            case 0x190D30u: goto label_190d30;
            case 0x190D60u: goto label_190d60;
            case 0x190D94u: goto label_190d94;
            case 0x190DA0u: goto label_190da0;
            case 0x190DD0u: goto label_190dd0;
            case 0x190E00u: goto label_190e00;
            case 0x190E08u: goto label_190e08;
            case 0x190E0Cu: goto label_190e0c;
            case 0x190E48u: goto label_190e48;
            case 0x190E4Cu: goto label_190e4c;
            case 0x190E58u: goto label_190e58;
            case 0x190EECu: goto label_190eec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1907A0u; }
            if (ctx->pc != 0x1907A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1907A0u;
    // 0x1907a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1907a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907a4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1907A4u;
    {
        const bool branch_taken_0x1907a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1907a4) {
            ctx->pc = 0x190810u;
            goto label_190810;
        }
    }
    ctx->pc = 0x1907ACu;
    // 0x1907ac: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1907acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1907b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1907B0u;
    {
        const bool branch_taken_0x1907b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1907B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1907B0u;
            // 0x1907b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1907b0) {
            ctx->pc = 0x1907CCu;
            goto label_1907cc;
        }
    }
    ctx->pc = 0x1907B8u;
    // 0x1907b8: 0xc090d56  jal         func_243558
    ctx->pc = 0x1907B8u;
    SET_GPR_U32(ctx, 31, 0x1907C0u);
    ctx->pc = 0x1907BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1907B8u;
            // 0x1907bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1907C0u; }
        if (ctx->pc != 0x1907C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1907C0u; }
        if (ctx->pc != 0x1907C0u) { return; }
    }
    ctx->pc = 0x1907C0u;
    // 0x1907c0: 0x80420013  lb          $v0, 0x13($v0)
    ctx->pc = 0x1907c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1907c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1907c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1907c8: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1907c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1907cc:
    // 0x1907cc: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1907CCu;
    {
        const bool branch_taken_0x1907cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1907cc) {
            ctx->pc = 0x1907D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1907CCu;
            // 0x1907d0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x190810u;
            goto label_190810;
        }
    }
    ctx->pc = 0x1907D4u;
    // 0x1907d4: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x1907d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x1907d8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1907d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1907dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1907dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1907e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1907e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1907e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1907E4u;
    {
        const bool branch_taken_0x1907e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1907e4) {
            ctx->pc = 0x190810u;
            goto label_190810;
        }
    }
    ctx->pc = 0x1907ECu;
    // 0x1907ec: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x1907ECu;
    {
        const bool branch_taken_0x1907ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1907F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1907ECu;
            // 0x1907f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1907ec) {
            ctx->pc = 0x1907F8u;
            goto label_1907f8;
        }
    }
    ctx->pc = 0x1907F4u;
    // 0x1907f4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1907f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1907f8:
    // 0x1907f8: 0x9667004c  lhu         $a3, 0x4C($s3)
    ctx->pc = 0x1907f8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x1907fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1907fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190800: 0xc0809a8  jal         func_2026A0
    ctx->pc = 0x190800u;
    SET_GPR_U32(ctx, 31, 0x190808u);
    ctx->pc = 0x190804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190800u;
            // 0x190804: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2026A0u;
    if (runtime->hasFunction(0x2026A0u)) {
        auto targetFn = runtime->lookupFunction(0x2026A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190808u; }
        if (ctx->pc != 0x190808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002026A0_0x2026a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190808u; }
        if (ctx->pc != 0x190808u) { return; }
    }
    ctx->pc = 0x190808u;
    // 0x190808: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x190808u;
    {
        const bool branch_taken_0x190808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190808) {
            ctx->pc = 0x19080Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190808u;
            // 0x19080c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x190810u;
            goto label_190810;
        }
    }
    ctx->pc = 0x190810u;
label_190810:
    // 0x190810: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x190810u;
    {
        const bool branch_taken_0x190810 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x190814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190810u;
            // 0x190814: 0x7ba60080  lq          $a2, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190810) {
            ctx->pc = 0x19082Cu;
            goto label_19082c;
        }
    }
    ctx->pc = 0x190818u;
    // 0x190818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x190818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19081c: 0xc064034  jal         func_1900D0
    ctx->pc = 0x19081Cu;
    SET_GPR_U32(ctx, 31, 0x190824u);
    ctx->pc = 0x190820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19081Cu;
            // 0x190820: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1900D0u;
    if (runtime->hasFunction(0x1900D0u)) {
        auto targetFn = runtime->lookupFunction(0x1900D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190824u; }
        if (ctx->pc != 0x190824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001900D0_0x1900d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190824u; }
        if (ctx->pc != 0x190824u) { return; }
    }
    ctx->pc = 0x190824u;
    // 0x190824: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x190824u;
    {
        const bool branch_taken_0x190824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190824u;
            // 0x190828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190824) {
            ctx->pc = 0x190904u;
            goto label_190904;
        }
    }
    ctx->pc = 0x19082Cu;
label_19082c:
    // 0x19082c: 0x7ba70080  lq          $a3, 0x80($sp)
    ctx->pc = 0x19082cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x190830: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x190830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190834: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x190834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190838: 0xc064050  jal         func_190140
    ctx->pc = 0x190838u;
    SET_GPR_U32(ctx, 31, 0x190840u);
    ctx->pc = 0x19083Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190838u;
            // 0x19083c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190140u;
    runtime->cooperativeGuestYield();
    goto label_190140;
    ctx->pc = 0x190840u;
label_190840:
    // 0x190840: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x190840u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x190844: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x190844u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x190848: 0x9623005c  lhu         $v1, 0x5C($s1)
    ctx->pc = 0x190848u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x19084c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19084cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x190850: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x190850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x190854: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x190854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x190858: 0xac540034  sw          $s4, 0x34($v0)
    ctx->pc = 0x190858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 20));
    // 0x19085c: 0x12e00028  beqz        $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x19085Cu;
    {
        const bool branch_taken_0x19085c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x190860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19085Cu;
            // 0x190860: 0xa623005c  sh          $v1, 0x5C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 92), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19085c) {
            ctx->pc = 0x190900u;
            goto label_190900;
        }
    }
    ctx->pc = 0x190864u;
    // 0x190864: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x190864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190868: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x190868u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19086c: 0x0  nop
    ctx->pc = 0x19086cu;
    // NOP
    // 0x190870: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x190870u;
    {
        const bool branch_taken_0x190870 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x190874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190870u;
            // 0x190874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190870) {
            ctx->pc = 0x190904u;
            goto label_190904;
        }
    }
    ctx->pc = 0x190878u;
    // 0x190878: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x190878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19087c: 0xc076a7e  jal         func_1DA9F8
    ctx->pc = 0x19087Cu;
    SET_GPR_U32(ctx, 31, 0x190884u);
    ctx->pc = 0x190880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19087Cu;
            // 0x190880: 0x8c44cd58  lw          $a0, -0x32A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA9F8u;
    if (runtime->hasFunction(0x1DA9F8u)) {
        auto targetFn = runtime->lookupFunction(0x1DA9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190884u; }
        if (ctx->pc != 0x190884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1da9f8_0x1daa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190884u; }
        if (ctx->pc != 0x190884u) { return; }
    }
    ctx->pc = 0x190884u;
    // 0x190884: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x190884u;
    {
        const bool branch_taken_0x190884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190884u;
            // 0x190888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190884) {
            ctx->pc = 0x190904u;
            goto label_190904;
        }
    }
    ctx->pc = 0x19088Cu;
label_19088c:
    // 0x19088c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19088Cu;
    {
        const bool branch_taken_0x19088c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19088Cu;
            // 0x190890: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19088c) {
            ctx->pc = 0x190904u;
            goto label_190904;
        }
    }
    ctx->pc = 0x190894u;
label_190894:
    // 0x190894: 0x2402040f  addiu       $v0, $zero, 0x40F
    ctx->pc = 0x190894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x190898: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x190898u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x19089c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19089cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1908a0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1908a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1908a4: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1908a4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1908a8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1908a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1908ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1908acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1908b0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1908b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1908b4: 0x9623005c  lhu         $v1, 0x5C($s1)
    ctx->pc = 0x1908b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1908b8: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x1908b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1908bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1908bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1908c0: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x1908c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x1908c4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1908c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1908c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1908c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1908cc: 0xa622005c  sh          $v0, 0x5C($s1)
    ctx->pc = 0x1908ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 92), (uint16_t)GPR_U32(ctx, 2));
    // 0x1908d0: 0xac740034  sw          $s4, 0x34($v1)
    ctx->pc = 0x1908d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 20));
    // 0x1908d4: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1908D4u;
    {
        const bool branch_taken_0x1908d4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1908D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1908D4u;
            // 0x1908d8: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1908d4) {
            ctx->pc = 0x1908E8u;
            goto label_1908e8;
        }
    }
    ctx->pc = 0x1908DCu;
    // 0x1908dc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1908dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1908e0: 0xc076a7e  jal         func_1DA9F8
    ctx->pc = 0x1908E0u;
    SET_GPR_U32(ctx, 31, 0x1908E8u);
    ctx->pc = 0x1908E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1908E0u;
            // 0x1908e4: 0x8c44cd58  lw          $a0, -0x32A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA9F8u;
    if (runtime->hasFunction(0x1DA9F8u)) {
        auto targetFn = runtime->lookupFunction(0x1DA9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908E8u; }
        if (ctx->pc != 0x1908E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1da9f8_0x1daa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908E8u; }
        if (ctx->pc != 0x1908E8u) { return; }
    }
    ctx->pc = 0x1908E8u;
label_1908e8:
    // 0x1908e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1908e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1908ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1908ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1908f0: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1908f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1908f4: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1908F4u;
    SET_GPR_U32(ctx, 31, 0x1908FCu);
    ctx->pc = 0x1908F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1908F4u;
            // 0x1908f8: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908FCu; }
        if (ctx->pc != 0x1908FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908FCu; }
        if (ctx->pc != 0x1908FCu) { return; }
    }
    ctx->pc = 0x1908FCu;
    // 0x1908fc: 0x0  nop
    ctx->pc = 0x1908fcu;
    // NOP
label_190900:
    // 0x190900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x190900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190904:
    // 0x190904: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x190904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x190908: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x190908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x19090c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x19090cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x190910: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x190910u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x190914: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x190914u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x190918: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x190918u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x19091c: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x19091cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x190920: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x190920u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x190924: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x190924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x190928: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x190928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19092c: 0x3e00008  jr          $ra
    ctx->pc = 0x19092Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19092Cu;
            // 0x190930: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190140u: goto label_190140;
            case 0x1901C4u: goto label_1901c4;
            case 0x1901E8u: goto label_1901e8;
            case 0x190228u: goto label_190228;
            case 0x1902A0u: goto label_1902a0;
            case 0x1902A4u: goto label_1902a4;
            case 0x1902A8u: goto label_1902a8;
            case 0x190320u: goto label_190320;
            case 0x190328u: goto label_190328;
            case 0x190338u: goto label_190338;
            case 0x190354u: goto label_190354;
            case 0x190390u: goto label_190390;
            case 0x190394u: goto label_190394;
            case 0x1903A8u: goto label_1903a8;
            case 0x1903D8u: goto label_1903d8;
            case 0x190400u: goto label_190400;
            case 0x190438u: goto label_190438;
            case 0x19043Cu: goto label_19043c;
            case 0x1904F0u: goto label_1904f0;
            case 0x1905B8u: goto label_1905b8;
            case 0x190640u: goto label_190640;
            case 0x190764u: goto label_190764;
            case 0x19076Cu: goto label_19076c;
            case 0x190770u: goto label_190770;
            case 0x1907CCu: goto label_1907cc;
            case 0x1907F8u: goto label_1907f8;
            case 0x190810u: goto label_190810;
            case 0x19082Cu: goto label_19082c;
            case 0x190840u: goto label_190840;
            case 0x19088Cu: goto label_19088c;
            case 0x190894u: goto label_190894;
            case 0x1908E8u: goto label_1908e8;
            case 0x190900u: goto label_190900;
            case 0x190904u: goto label_190904;
            case 0x1909A0u: goto label_1909a0;
            case 0x1909B8u: goto label_1909b8;
            case 0x1909F4u: goto label_1909f4;
            case 0x190A38u: goto label_190a38;
            case 0x190A68u: goto label_190a68;
            case 0x190A80u: goto label_190a80;
            case 0x190A90u: goto label_190a90;
            case 0x190AD0u: goto label_190ad0;
            case 0x190B20u: goto label_190b20;
            case 0x190B28u: goto label_190b28;
            case 0x190B90u: goto label_190b90;
            case 0x190B98u: goto label_190b98;
            case 0x190BBCu: goto label_190bbc;
            case 0x190BC4u: goto label_190bc4;
            case 0x190BE8u: goto label_190be8;
            case 0x190BF0u: goto label_190bf0;
            case 0x190CA8u: goto label_190ca8;
            case 0x190CD0u: goto label_190cd0;
            case 0x190CD4u: goto label_190cd4;
            case 0x190D08u: goto label_190d08;
            case 0x190D2Cu: goto label_190d2c;
            case 0x190D30u: goto label_190d30;
            case 0x190D60u: goto label_190d60;
            case 0x190D94u: goto label_190d94;
            case 0x190DA0u: goto label_190da0;
            case 0x190DD0u: goto label_190dd0;
            case 0x190E00u: goto label_190e00;
            case 0x190E08u: goto label_190e08;
            case 0x190E0Cu: goto label_190e0c;
            case 0x190E48u: goto label_190e48;
            case 0x190E4Cu: goto label_190e4c;
            case 0x190E58u: goto label_190e58;
            case 0x190EECu: goto label_190eec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x190934u;
    // 0x190934: 0x0  nop
    ctx->pc = 0x190934u;
    // NOP
    // 0x190938: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x190938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x19093c: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x19093cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x190940: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x190940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x190944: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x190944u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190948: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x190948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x19094c: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x19094cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x190950: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x190950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x190954: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x190954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x190958: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x190958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x19095c: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x19095cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x190960: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x190960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x190964: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x190964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x190968: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x190968u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x19096c: 0x8ec50060  lw          $a1, 0x60($s6)
    ctx->pc = 0x19096cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x190970: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x190970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x190974: 0x3c1e002a  lui         $fp, 0x2A
    ctx->pc = 0x190974u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)42 << 16));
    // 0x190978: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x190978u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x19097c: 0x8fc4d2ac  lw          $a0, -0x2D54($fp)
    ctx->pc = 0x19097cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294955692)));
    // 0x190980: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x190980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x190984: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x190984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190988: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x190988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19098c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190990: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190990u;
    {
        const bool branch_taken_0x190990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x190994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190990u;
            // 0x190994: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190990) {
            ctx->pc = 0x1909A0u;
            goto label_1909a0;
        }
    }
    ctx->pc = 0x190998u;
    // 0x190998: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x190998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19099c: 0x0  nop
    ctx->pc = 0x19099cu;
    // NOP
label_1909a0:
    // 0x1909a0: 0x8ed10064  lw          $s1, 0x64($s6)
    ctx->pc = 0x1909a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x1909a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1909a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1909a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1909A8u;
    {
        const bool branch_taken_0x1909a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1909ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1909A8u;
            // 0x1909ac: 0x8ed3004c  lw          $s3, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1909a8) {
            ctx->pc = 0x1909B8u;
            goto label_1909b8;
        }
    }
    ctx->pc = 0x1909B0u;
    // 0x1909b0: 0x8c75000c  lw          $s5, 0xC($v1)
    ctx->pc = 0x1909b0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1909b4: 0x0  nop
    ctx->pc = 0x1909b4u;
    // NOP
label_1909b8:
    // 0x1909b8: 0xda640010  lqc2        $vf4, 0x10($s3)
    ctx->pc = 0x1909b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1909bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1909bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1909c0: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x1909c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1909c4: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x1909c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1909c8: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1909c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1909cc: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1909ccu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x1909d0: 0x86230058  lh          $v1, 0x58($s1)
    ctx->pc = 0x1909d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1909d4: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1909D4u;
    {
        const bool branch_taken_0x1909d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1909d4) {
            ctx->pc = 0x190A38u;
            goto label_190a38;
        }
    }
    ctx->pc = 0x1909DCu;
    // 0x1909dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1909DCu;
    {
        const bool branch_taken_0x1909dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1909E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1909DCu;
            // 0x1909e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1909dc) {
            ctx->pc = 0x1909F4u;
            goto label_1909f4;
        }
    }
    ctx->pc = 0x1909E4u;
    // 0x1909e4: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1909E4u;
    {
        const bool branch_taken_0x1909e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1909E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1909E4u;
            // 0x1909e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1909e4) {
            ctx->pc = 0x190AD0u;
            goto label_190ad0;
        }
    }
    ctx->pc = 0x1909ECu;
    // 0x1909ec: 0x1462004e  bne         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1909ECu;
    {
        const bool branch_taken_0x1909ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1909ec) {
            ctx->pc = 0x190B28u;
            goto label_190b28;
        }
    }
    ctx->pc = 0x1909F4u;
label_1909f4:
    // 0x1909f4: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x1909f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1909f8: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x1909f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1909fc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1909fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x190a00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x190a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x190a04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190a04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190a08: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x190a08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x190a0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x190a10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x190a10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x190a14: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x190a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x190a18: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x190a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a1c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x190a1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x190a20: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x190a20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x190a24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x190a24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x190a28: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x190a28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x190a2c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x190A2Cu;
    {
        const bool branch_taken_0x190a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190A2Cu;
            // 0x190a30: 0xdba10090  lqc2        $vf1, 0x90($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a2c) {
            ctx->pc = 0x190B20u;
            goto label_190b20;
        }
    }
    ctx->pc = 0x190A34u;
    // 0x190a34: 0x0  nop
    ctx->pc = 0x190a34u;
    // NOP
label_190a38:
    // 0x190a38: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x190a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x190a3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190a40: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x190a40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190a44: 0x0  nop
    ctx->pc = 0x190a44u;
    // NOP
    // 0x190a48: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x190A48u;
    {
        const bool branch_taken_0x190a48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x190a48) {
            ctx->pc = 0x190A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190A48u;
            // 0x190a4c: 0x9664005e  lhu         $a0, 0x5E($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 94)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x190A68u;
            goto label_190a68;
        }
    }
    ctx->pc = 0x190A50u;
    // 0x190a50: 0x9662005e  lhu         $v0, 0x5E($s3)
    ctx->pc = 0x190a50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 94)));
    // 0x190a54: 0x4614a0c0  add.s       $f3, $f20, $f20
    ctx->pc = 0x190a54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x190a58: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x190a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x190a5c: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x190a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x190a60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x190A60u;
    {
        const bool branch_taken_0x190a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190A60u;
            // 0x190a64: 0xa662005e  sh          $v0, 0x5E($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 94), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a60) {
            ctx->pc = 0x190A90u;
            goto label_190a90;
        }
    }
    ctx->pc = 0x190A68u;
label_190a68:
    // 0x190a68: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x190a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x190a6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x190A6Cu;
    {
        const bool branch_taken_0x190a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190A6Cu;
            // 0x190a70: 0x34820002  ori         $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a6c) {
            ctx->pc = 0x190A80u;
            goto label_190a80;
        }
    }
    ctx->pc = 0x190A74u;
    // 0x190a74: 0xa663005c  sh          $v1, 0x5C($s3)
    ctx->pc = 0x190a74u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x190a78: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x190a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x190a7c: 0xa662005e  sh          $v0, 0x5E($s3)
    ctx->pc = 0x190a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 94), (uint16_t)GPR_U32(ctx, 2));
label_190a80:
    // 0x190a80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x190a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x190a84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190a88: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x190a88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x190a8c: 0x460000c0  add.s       $f3, $f0, $f0
    ctx->pc = 0x190a8cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_190a90:
    // 0x190a90: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x190a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190a94: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x190a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a98: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x190a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x190a9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x190a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x190aa0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190aa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190aa4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x190aa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x190aa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x190aac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x190aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x190ab0: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x190ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x190ab4: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x190ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190ab8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x190ab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x190abc: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x190abcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x190ac0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x190ac0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x190ac4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x190ac4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x190ac8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x190AC8u;
    {
        const bool branch_taken_0x190ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190AC8u;
            // 0x190acc: 0xdba10090  lqc2        $vf1, 0x90($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ac8) {
            ctx->pc = 0x190B20u;
            goto label_190b20;
        }
    }
    ctx->pc = 0x190AD0u;
label_190ad0:
    // 0x190ad0: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x190ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190ad4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x190ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x190ad8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x190ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190adc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x190adcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x190ae0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x190ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x190ae4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x190ae4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x190ae8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x190ae8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x190aec: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x190aecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x190af0: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x190af0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x190af4: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x190af4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190af8: 0x4be12068  vadd.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x190af8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190afc: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x190afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190b00: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x190b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x190b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x190b08: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x190b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x190b0c: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x190b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190b10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x190b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x190b14: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x190b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x190b18: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x190b18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x190b1c: 0x0  nop
    ctx->pc = 0x190b1cu;
    // NOP
label_190b20:
    // 0x190b20: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x190b20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190b24: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x190b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_190b28:
    // 0x190b28: 0x12a000b8  beqz        $s5, . + 4 + (0xB8 << 2)
    ctx->pc = 0x190B28u;
    {
        const bool branch_taken_0x190b28 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190B28u;
            // 0x190b2c: 0x27a20090  addiu       $v0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b28) {
            ctx->pc = 0x190E0Cu;
            goto label_190e0c;
        }
    }
    ctx->pc = 0x190B30u;
    // 0x190b30: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x190b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x190b34: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x190b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x190b38: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x190B38u;
    {
        const bool branch_taken_0x190b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190B38u;
            // 0x190b3c: 0x3c170033  lui         $s7, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b38) {
            ctx->pc = 0x190CA8u;
            goto label_190ca8;
        }
    }
    ctx->pc = 0x190B40u;
    // 0x190b40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190b44: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x190b44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x190b48: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x190b48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190b4c: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x190b4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190b50: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x190b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190b54: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x190b54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x190b58: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x190b58u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x190b5c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x190b5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190b60: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x190b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x190b64: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x190b64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190b68: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x190b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190b6c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x190b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x190b70: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x190b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x190b74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x190B74u;
    {
        const bool branch_taken_0x190b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190b74) {
            ctx->pc = 0x190B90u;
            goto label_190b90;
        }
    }
    ctx->pc = 0x190B7Cu;
    // 0x190b7c: 0xc661002c  lwc1        $f1, 0x2C($s3)
    ctx->pc = 0x190b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190b80: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x190b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x190b84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190b88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x190B88u;
    {
        const bool branch_taken_0x190b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190B88u;
            // 0x190b8c: 0x460008c2  mul.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b88) {
            ctx->pc = 0x190B98u;
            goto label_190b98;
        }
    }
    ctx->pc = 0x190B90u;
label_190b90:
    // 0x190b90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x190b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x190b94: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x190b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_190b98:
    // 0x190b98: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x190b98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x190b9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x190ba0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x190BA0u;
    {
        const bool branch_taken_0x190ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190ba0) {
            ctx->pc = 0x190BBCu;
            goto label_190bbc;
        }
    }
    ctx->pc = 0x190BA8u;
    // 0x190ba8: 0xc661002c  lwc1        $f1, 0x2C($s3)
    ctx->pc = 0x190ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190bac: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x190bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x190bb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190bb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x190BB4u;
    {
        const bool branch_taken_0x190bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190BB4u;
            // 0x190bb8: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190bb4) {
            ctx->pc = 0x190BC4u;
            goto label_190bc4;
        }
    }
    ctx->pc = 0x190BBCu;
label_190bbc:
    // 0x190bbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x190bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x190bc0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x190bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_190bc4:
    // 0x190bc4: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x190bc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x190bc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x190bcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x190BCCu;
    {
        const bool branch_taken_0x190bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190bcc) {
            ctx->pc = 0x190BE8u;
            goto label_190be8;
        }
    }
    ctx->pc = 0x190BD4u;
    // 0x190bd4: 0xc661002c  lwc1        $f1, 0x2C($s3)
    ctx->pc = 0x190bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190bd8: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x190bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x190bdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190be0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x190BE0u;
    {
        const bool branch_taken_0x190be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190BE0u;
            // 0x190be4: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190be0) {
            ctx->pc = 0x190BF0u;
            goto label_190bf0;
        }
    }
    ctx->pc = 0x190BE8u;
label_190be8:
    // 0x190be8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x190be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x190bec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x190becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190bf0:
    // 0x190bf0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x190bf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x190bf4: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x190bf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x190bf8: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x190bf8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x190bfc: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x190bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x190c00: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x190c00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x190c04: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x190c04u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x190c08: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x190c08u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190c0c: 0x70433cc8  ppacw       $a3, $v0, $v1
    ctx->pc = 0x190c0cu;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x190c10: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x190c10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190c14: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x190c14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190c18: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x190c18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x190c1c: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x190c1cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190c20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x190c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c24: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x190c24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x190c28: 0xdca4bdf8  ld          $a0, -0x4208($a1)
    ctx->pc = 0x190c28u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x190c2c: 0x4be1212a  vmul.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x190c2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x190c30: 0x4be1296a  vmul.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x190c30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x190c34: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x190c34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x190c38: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x190c38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x190c3c: 0xfba50030  sqc2        $vf5, 0x30($sp)
    ctx->pc = 0x190c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190c40: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x190c40u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x190c44: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x190c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x190c48: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x190c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x190c4c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x190c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190c50: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x190c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x190c54: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x190c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190c58: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x190c58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190c5c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x190c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x190c60: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x190c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x190c64: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x190c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x190c68: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x190c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x190c6c: 0xfba50080  sqc2        $vf5, 0x80($sp)
    ctx->pc = 0x190c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190c70: 0xfaa40020  sqc2        $vf4, 0x20($s5)
    ctx->pc = 0x190c70u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x190c74: 0x86a30060  lh          $v1, 0x60($s5)
    ctx->pc = 0x190c74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x190c78: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x190c78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190c7c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x190c7cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x190c80: 0x7ea20030  sq          $v0, 0x30($s5)
    ctx->pc = 0x190c80u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), GPR_VEC(ctx, 2));
    // 0x190c84: 0x83300a  movz        $a2, $a0, $v1
    ctx->pc = 0x190c84u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x190c88: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x190c88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c8c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x190c8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190c90: 0x7ea20040  sq          $v0, 0x40($s5)
    ctx->pc = 0x190c90u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), GPR_VEC(ctx, 2));
    // 0x190c94: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x190c94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190c98: 0x7ea20050  sq          $v0, 0x50($s5)
    ctx->pc = 0x190c98u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 80), GPR_VEC(ctx, 2));
    // 0x190c9c: 0xfca4bdf8  sd          $a0, -0x4208($a1)
    ctx->pc = 0x190c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294950392), GPR_U64(ctx, 4));
    // 0x190ca0: 0xfea30068  sd          $v1, 0x68($s5)
    ctx->pc = 0x190ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 104), GPR_U64(ctx, 3));
    // 0x190ca4: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x190ca4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
label_190ca8:
    // 0x190ca8: 0x26e2ec58  addiu       $v0, $s7, -0x13A8
    ctx->pc = 0x190ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
    // 0x190cac: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x190cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x190cb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x190cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x190cb4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x190cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x190cb8: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x190cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x190cbc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x190CBCu;
    {
        const bool branch_taken_0x190cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x190CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190CBCu;
            // 0x190cc0: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190cbc) {
            ctx->pc = 0x190CD0u;
            goto label_190cd0;
        }
    }
    ctx->pc = 0x190CC4u;
    // 0x190cc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x190cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190cc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190CC8u;
    {
        const bool branch_taken_0x190cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190CC8u;
            // 0x190ccc: 0x44800b  movn        $s0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190cc8) {
            ctx->pc = 0x190CD4u;
            goto label_190cd4;
        }
    }
    ctx->pc = 0x190CD0u;
label_190cd0:
    // 0x190cd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x190cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190cd4:
    // 0x190cd4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x190CD4u;
    {
        const bool branch_taken_0x190cd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x190CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190CD4u;
            // 0x190cd8: 0x26e2ec58  addiu       $v0, $s7, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190cd4) {
            ctx->pc = 0x190D08u;
            goto label_190d08;
        }
    }
    ctx->pc = 0x190CDCu;
    // 0x190cdc: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x190cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x190ce0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x190ce0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x190ce4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x190ce8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x190CE8u;
    {
        const bool branch_taken_0x190ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190CE8u;
            // 0x190cec: 0x26e2ec58  addiu       $v0, $s7, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ce8) {
            ctx->pc = 0x190D08u;
            goto label_190d08;
        }
    }
    ctx->pc = 0x190CF0u;
    // 0x190cf0: 0xc0402fc  jal         func_100BF0
    ctx->pc = 0x190CF0u;
    SET_GPR_U32(ctx, 31, 0x190CF8u);
    ctx->pc = 0x190CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190CF0u;
            // 0x190cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100BF0u;
    if (runtime->hasFunction(0x100BF0u)) {
        auto targetFn = runtime->lookupFunction(0x100BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190CF8u; }
        if (ctx->pc != 0x190CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100BF0_0x100bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190CF8u; }
        if (ctx->pc != 0x190CF8u) { return; }
    }
    ctx->pc = 0x190CF8u;
    // 0x190cf8: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x190cf8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x190cfc: 0xc04015e  jal         func_100578
    ctx->pc = 0x190CFCu;
    SET_GPR_U32(ctx, 31, 0x190D04u);
    ctx->pc = 0x190D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190CFCu;
            // 0x190d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D04u; }
        if (ctx->pc != 0x190D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D04u; }
        if (ctx->pc != 0x190D04u) { return; }
    }
    ctx->pc = 0x190D04u;
    // 0x190d04: 0x26e2ec58  addiu       $v0, $s7, -0x13A8
    ctx->pc = 0x190d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
label_190d08:
    // 0x190d08: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x190d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x190d0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x190d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x190d10: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x190d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x190d14: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x190d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x190d18: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x190D18u;
    {
        const bool branch_taken_0x190d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190D18u;
            // 0x190d1c: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d18) {
            ctx->pc = 0x190D2Cu;
            goto label_190d2c;
        }
    }
    ctx->pc = 0x190D20u;
    // 0x190d20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x190d20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190D24u;
    {
        const bool branch_taken_0x190d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190D24u;
            // 0x190d28: 0x43900b  movn        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d24) {
            ctx->pc = 0x190D30u;
            goto label_190d30;
        }
    }
    ctx->pc = 0x190D2Cu;
label_190d2c:
    // 0x190d2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x190d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190d30:
    // 0x190d30: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x190D30u;
    {
        const bool branch_taken_0x190d30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x190d30) {
            ctx->pc = 0x190DA0u;
            goto label_190da0;
        }
    }
    ctx->pc = 0x190D38u;
    // 0x190d38: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x190d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x190d3c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x190d3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x190d40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x190d44: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x190D44u;
    {
        const bool branch_taken_0x190d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190d44) {
            ctx->pc = 0x190DA0u;
            goto label_190da0;
        }
    }
    ctx->pc = 0x190D4Cu;
    // 0x190d4c: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x190d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x190d50: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x190d50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190d54: 0x1a800012  blez        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x190D54u;
    {
        const bool branch_taken_0x190d54 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x190D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190D54u;
            // 0x190d58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d54) {
            ctx->pc = 0x190DA0u;
            goto label_190da0;
        }
    }
    ctx->pc = 0x190D5Cu;
    // 0x190d5c: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x190d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_190d60:
    // 0x190d60: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x190d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x190d64: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x190d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x190d68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x190d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190d6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x190d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190d70: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x190d70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x190d74: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x190D74u;
    {
        const bool branch_taken_0x190d74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x190d74) {
            ctx->pc = 0x190D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190D74u;
            // 0x190d78: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x190D94u;
            goto label_190d94;
        }
    }
    ctx->pc = 0x190D7Cu;
    // 0x190d7c: 0xc0402fc  jal         func_100BF0
    ctx->pc = 0x190D7Cu;
    SET_GPR_U32(ctx, 31, 0x190D84u);
    ctx->pc = 0x190D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190D7Cu;
            // 0x190d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100BF0u;
    if (runtime->hasFunction(0x100BF0u)) {
        auto targetFn = runtime->lookupFunction(0x100BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D84u; }
        if (ctx->pc != 0x190D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100BF0_0x100bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D84u; }
        if (ctx->pc != 0x190D84u) { return; }
    }
    ctx->pc = 0x190D84u;
    // 0x190d84: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x190d84u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x190d88: 0xc04015e  jal         func_100578
    ctx->pc = 0x190D88u;
    SET_GPR_U32(ctx, 31, 0x190D90u);
    ctx->pc = 0x190D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190D88u;
            // 0x190d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D90u; }
        if (ctx->pc != 0x190D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D90u; }
        if (ctx->pc != 0x190D90u) { return; }
    }
    ctx->pc = 0x190D90u;
    // 0x190d90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x190d90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_190d94:
    // 0x190d94: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x190d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x190d98: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x190D98u;
    {
        const bool branch_taken_0x190d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190d98) {
            ctx->pc = 0x190D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190D98u;
            // 0x190d9c: 0x8e4300d0  lw          $v1, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x190D60u;
            runtime->cooperativeGuestYield();
            goto label_190d60;
        }
    }
    ctx->pc = 0x190DA0u;
label_190da0:
    // 0x190da0: 0x12a00019  beqz        $s5, . + 4 + (0x19 << 2)
    ctx->pc = 0x190DA0u;
    {
        const bool branch_taken_0x190da0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190DA0u;
            // 0x190da4: 0x26e2ec58  addiu       $v0, $s7, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190da0) {
            ctx->pc = 0x190E08u;
            goto label_190e08;
        }
    }
    ctx->pc = 0x190DA8u;
    // 0x190da8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x190da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x190dac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x190dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x190db0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x190db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x190db4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x190db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x190db8: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x190DB8u;
    {
        const bool branch_taken_0x190db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190db8) {
            ctx->pc = 0x190DBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190DB8u;
            // 0x190dbc: 0x27a20090  addiu       $v0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
            ctx->pc = 0x190E0Cu;
            goto label_190e0c;
        }
    }
    ctx->pc = 0x190DC0u;
    // 0x190dc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x190dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190dc4: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x190DC4u;
    {
        const bool branch_taken_0x190dc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190DC4u;
            // 0x190dc8: 0x27a20090  addiu       $v0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190dc4) {
            ctx->pc = 0x190E0Cu;
            goto label_190e0c;
        }
    }
    ctx->pc = 0x190DCCu;
    // 0x190dcc: 0x2622ffec  addiu       $v0, $s1, -0x14
    ctx->pc = 0x190dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
label_190dd0:
    // 0x190dd0: 0x11100a  movz        $v0, $zero, $s1
    ctx->pc = 0x190dd0u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x190dd4: 0x8c500048  lw          $s0, 0x48($v0)
    ctx->pc = 0x190dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x190dd8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x190dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x190ddc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x190DDCu;
    {
        const bool branch_taken_0x190ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190ddc) {
            ctx->pc = 0x190DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190DDCu;
            // 0x190de0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x190E00u;
            goto label_190e00;
        }
    }
    ctx->pc = 0x190DE4u;
    // 0x190de4: 0xc08f4a8  jal         func_23D2A0
    ctx->pc = 0x190DE4u;
    SET_GPR_U32(ctx, 31, 0x190DECu);
    ctx->pc = 0x190DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190DE4u;
            // 0x190de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D2A0u;
    if (runtime->hasFunction(0x23D2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23D2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DECu; }
        if (ctx->pc != 0x190DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023D2A0_0x23d2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DECu; }
        if (ctx->pc != 0x190DECu) { return; }
    }
    ctx->pc = 0x190DECu;
    // 0x190dec: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x190decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x190df0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x190df0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190df4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x190df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x190df8: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x190df8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190dfc: 0x0  nop
    ctx->pc = 0x190dfcu;
    // NOP
label_190e00:
    // 0x190e00: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x190E00u;
    {
        const bool branch_taken_0x190e00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x190E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190E00u;
            // 0x190e04: 0x2622ffec  addiu       $v0, $s1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e00) {
            ctx->pc = 0x190DD0u;
            runtime->cooperativeGuestYield();
            goto label_190dd0;
        }
    }
    ctx->pc = 0x190E08u;
label_190e08:
    // 0x190e08: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x190e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_190e0c:
    // 0x190e0c: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x190e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x190e10: 0x8ec40068  lw          $a0, 0x68($s6)
    ctx->pc = 0x190e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
    // 0x190e14: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x190e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x190e18: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x190E18u;
    {
        const bool branch_taken_0x190e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190E18u;
            // 0x190e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e18) {
            ctx->pc = 0x190E4Cu;
            goto label_190e4c;
        }
    }
    ctx->pc = 0x190E20u;
    // 0x190e20: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x190e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x190e24: 0x415c2  srl         $v0, $a0, 23
    ctx->pc = 0x190e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x190e28: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x190e28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x190e2c: 0x8fc3d2ac  lw          $v1, -0x2D54($fp)
    ctx->pc = 0x190e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294955692)));
    // 0x190e30: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x190e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x190e34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x190e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190e38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190e3c: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x190E3Cu;
    {
        const bool branch_taken_0x190e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x190E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190E3Cu;
            // 0x190e40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e3c) {
            ctx->pc = 0x190E48u;
            goto label_190e48;
        }
    }
    ctx->pc = 0x190E44u;
    // 0x190e44: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x190e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_190e48:
    // 0x190e48: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x190e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_190e4c:
    // 0x190e4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x190E4Cu;
    {
        const bool branch_taken_0x190e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190E4Cu;
            // 0x190e50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e4c) {
            ctx->pc = 0x190E58u;
            goto label_190e58;
        }
    }
    ctx->pc = 0x190E54u;
    // 0x190e54: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x190e54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_190e58:
    // 0x190e58: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x190e58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x190e5c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x190e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x190e60: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x190e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x190e64: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x190e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x190e68: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x190e68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x190e6c: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x190e6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x190e70: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x190e70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190e74: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x190e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
    // 0x190e78: 0x24e2f170  addiu       $v0, $a3, -0xE90
    ctx->pc = 0x190e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963568));
    // 0x190e7c: 0xace5f170  sw          $a1, -0xE90($a3)
    ctx->pc = 0x190e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963568), GPR_U32(ctx, 5));
    // 0x190e80: 0x246302c8  addiu       $v1, $v1, 0x2C8
    ctx->pc = 0x190e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 712));
    // 0x190e84: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x190e84u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190e88: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x190e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x190e8c: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x190e8cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x190e90: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x190e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x190e94: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x190e94u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x190e98: 0xac560020  sw          $s6, 0x20($v0)
    ctx->pc = 0x190e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 22));
    // 0x190e9c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x190e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x190ea0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x190ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x190ea4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x190ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x190ea8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x190ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x190eac: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x190eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x190eb0: 0xc047a34  jal         func_11E8D0
    ctx->pc = 0x190EB0u;
    SET_GPR_U32(ctx, 31, 0x190EB8u);
    ctx->pc = 0x190EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190EB0u;
            // 0x190eb4: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E8D0u;
    if (runtime->hasFunction(0x11E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x11E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EB8u; }
        if (ctx->pc != 0x190EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11e8d0_0x11ea98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EB8u; }
        if (ctx->pc != 0x190EB8u) { return; }
    }
    ctx->pc = 0x190EB8u;
    // 0x190eb8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x190eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x190ebc: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x190ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190ec0: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x190ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190ec4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x190ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x190ec8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x190ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x190ecc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190eccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x190ed0: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x190ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190ed4: 0x0  nop
    ctx->pc = 0x190ed4u;
    // NOP
    // 0x190ed8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x190ED8u;
    {
        const bool branch_taken_0x190ed8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190ED8u;
            // 0x190edc: 0xe6600024  swc1        $f0, 0x24($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ed8) {
            ctx->pc = 0x190EECu;
            goto label_190eec;
        }
    }
    ctx->pc = 0x190EE0u;
    // 0x190ee0: 0x96c20004  lhu         $v0, 0x4($s6)
    ctx->pc = 0x190ee0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x190ee4: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x190ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x190ee8: 0xa6c20004  sh          $v0, 0x4($s6)
    ctx->pc = 0x190ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 4), (uint16_t)GPR_U32(ctx, 2));
label_190eec:
    // 0x190eec: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x190eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x190ef0: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x190ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x190ef4: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x190ef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x190ef8: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x190ef8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x190efc: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x190efcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x190f00: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x190f00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x190f04: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x190f04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x190f08: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x190f08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x190f0c: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x190f0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x190f10: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x190f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x190f14: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x190f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x190f18: 0x3e00008  jr          $ra
    ctx->pc = 0x190F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190F18u;
            // 0x190f1c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190140u: goto label_190140;
            case 0x1901C4u: goto label_1901c4;
            case 0x1901E8u: goto label_1901e8;
            case 0x190228u: goto label_190228;
            case 0x1902A0u: goto label_1902a0;
            case 0x1902A4u: goto label_1902a4;
            case 0x1902A8u: goto label_1902a8;
            case 0x190320u: goto label_190320;
            case 0x190328u: goto label_190328;
            case 0x190338u: goto label_190338;
            case 0x190354u: goto label_190354;
            case 0x190390u: goto label_190390;
            case 0x190394u: goto label_190394;
            case 0x1903A8u: goto label_1903a8;
            case 0x1903D8u: goto label_1903d8;
            case 0x190400u: goto label_190400;
            case 0x190438u: goto label_190438;
            case 0x19043Cu: goto label_19043c;
            case 0x1904F0u: goto label_1904f0;
            case 0x1905B8u: goto label_1905b8;
            case 0x190640u: goto label_190640;
            case 0x190764u: goto label_190764;
            case 0x19076Cu: goto label_19076c;
            case 0x190770u: goto label_190770;
            case 0x1907CCu: goto label_1907cc;
            case 0x1907F8u: goto label_1907f8;
            case 0x190810u: goto label_190810;
            case 0x19082Cu: goto label_19082c;
            case 0x190840u: goto label_190840;
            case 0x19088Cu: goto label_19088c;
            case 0x190894u: goto label_190894;
            case 0x1908E8u: goto label_1908e8;
            case 0x190900u: goto label_190900;
            case 0x190904u: goto label_190904;
            case 0x1909A0u: goto label_1909a0;
            case 0x1909B8u: goto label_1909b8;
            case 0x1909F4u: goto label_1909f4;
            case 0x190A38u: goto label_190a38;
            case 0x190A68u: goto label_190a68;
            case 0x190A80u: goto label_190a80;
            case 0x190A90u: goto label_190a90;
            case 0x190AD0u: goto label_190ad0;
            case 0x190B20u: goto label_190b20;
            case 0x190B28u: goto label_190b28;
            case 0x190B90u: goto label_190b90;
            case 0x190B98u: goto label_190b98;
            case 0x190BBCu: goto label_190bbc;
            case 0x190BC4u: goto label_190bc4;
            case 0x190BE8u: goto label_190be8;
            case 0x190BF0u: goto label_190bf0;
            case 0x190CA8u: goto label_190ca8;
            case 0x190CD0u: goto label_190cd0;
            case 0x190CD4u: goto label_190cd4;
            case 0x190D08u: goto label_190d08;
            case 0x190D2Cu: goto label_190d2c;
            case 0x190D30u: goto label_190d30;
            case 0x190D60u: goto label_190d60;
            case 0x190D94u: goto label_190d94;
            case 0x190DA0u: goto label_190da0;
            case 0x190DD0u: goto label_190dd0;
            case 0x190E00u: goto label_190e00;
            case 0x190E08u: goto label_190e08;
            case 0x190E0Cu: goto label_190e0c;
            case 0x190E48u: goto label_190e48;
            case 0x190E4Cu: goto label_190e4c;
            case 0x190E58u: goto label_190e58;
            case 0x190EECu: goto label_190eec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x190F20u;
}
