#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DB838
// Address: 0x1db838 - 0x1dbab8
void sub_001DB838_0x1db838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB838_0x1db838");
#endif

    ctx->pc = 0x1db838u;

    // 0x1db838: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1db838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1db83c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1db83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1db840: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1db840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1db844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db848: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1db848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1db84c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1db84cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db850: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db858: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1db858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1db85c: 0x8c420174  lw          $v0, 0x174($v0)
    ctx->pc = 0x1db85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x1db860: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1db860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1db864: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB864u;
    {
        const bool branch_taken_0x1db864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB864u;
            // 0x1db868: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db864) {
            ctx->pc = 0x1DB884u;
            goto label_1db884;
        }
    }
    ctx->pc = 0x1DB86Cu;
    // 0x1db86c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1db86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1db870: 0x8c425a40  lw          $v0, 0x5A40($v0)
    ctx->pc = 0x1db870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23104)));
    // 0x1db874: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1db874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1db878: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1db878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1db87c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB87Cu;
    {
        const bool branch_taken_0x1db87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db87c) {
            ctx->pc = 0x1DB890u;
            goto label_1db890;
        }
    }
    ctx->pc = 0x1DB884u;
label_1db884:
    // 0x1db884: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1db884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1db888: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1db888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db88c: 0xac62cda8  sw          $v0, -0x3258($v1)
    ctx->pc = 0x1db88cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954408), GPR_U32(ctx, 2));
label_1db890:
    // 0x1db890: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1DB890u;
    SET_GPR_U32(ctx, 31, 0x1DB898u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB898u; }
        if (ctx->pc != 0x1DB898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB898u; }
        if (ctx->pc != 0x1DB898u) { return; }
    }
    ctx->pc = 0x1DB898u;
    // 0x1db898: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1DB898u;
    {
        const bool branch_taken_0x1db898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB898u;
            // 0x1db89c: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db898) {
            ctx->pc = 0x1DBA50u;
            goto label_1dba50;
        }
    }
    ctx->pc = 0x1DB8A0u;
    // 0x1db8a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1db8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1db8a4: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1DB8A4u;
    {
        const bool branch_taken_0x1db8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB8A4u;
            // 0x1db8a8: 0x8c62cda8  lw          $v0, -0x3258($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8a4) {
            ctx->pc = 0x1DBA54u;
            goto label_1dba54;
        }
    }
    ctx->pc = 0x1DB8ACu;
    // 0x1db8ac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1db8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1db8b0: 0x8c42cda8  lw          $v0, -0x3258($v0)
    ctx->pc = 0x1db8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954408)));
    // 0x1db8b4: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1DB8B4u;
    {
        const bool branch_taken_0x1db8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB8B4u;
            // 0x1db8b8: 0x8c62cda8  lw          $v0, -0x3258($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8b4) {
            ctx->pc = 0x1DBA54u;
            goto label_1dba54;
        }
    }
    ctx->pc = 0x1DB8BCu;
    // 0x1db8bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1db8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1db8c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1db8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1db8c4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1db8c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1db8c8: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1db8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1db8cc: 0x40f809  jalr        $v0
    ctx->pc = 0x1DB8CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB8D4u);
        ctx->pc = 0x1DB8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB8CCu;
            // 0x1db8d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DB8D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB884u: goto label_1db884;
            case 0x1DB890u: goto label_1db890;
            case 0x1DB92Cu: goto label_1db92c;
            case 0x1DB930u: goto label_1db930;
            case 0x1DB934u: goto label_1db934;
            case 0x1DB974u: goto label_1db974;
            case 0x1DB9B8u: goto label_1db9b8;
            case 0x1DB9D4u: goto label_1db9d4;
            case 0x1DB9F8u: goto label_1db9f8;
            case 0x1DBA50u: goto label_1dba50;
            case 0x1DBA54u: goto label_1dba54;
            case 0x1DBA60u: goto label_1dba60;
            case 0x1DBA88u: goto label_1dba88;
            case 0x1DBAA0u: goto label_1dbaa0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB8D4u; }
            if (ctx->pc != 0x1DB8D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DB8D4u;
    // 0x1db8d4: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x1db8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1db8d8: 0x18800026  blez        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1DB8D8u;
    {
        const bool branch_taken_0x1db8d8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1DB8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB8D8u;
            // 0x1db8dc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8d8) {
            ctx->pc = 0x1DB974u;
            goto label_1db974;
        }
    }
    ctx->pc = 0x1DB8E0u;
    // 0x1db8e0: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x1db8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db8e4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1db8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1db8e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1db8e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db8ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1db8ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db8f0: 0x0  nop
    ctx->pc = 0x1db8f0u;
    // NOP
    // 0x1db8f4: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x1DB8F4u;
    {
        const bool branch_taken_0x1db8f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db8f4) {
            ctx->pc = 0x1DB8F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB8F4u;
            // 0x1db8f8: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB934u;
            goto label_1db934;
        }
    }
    ctx->pc = 0x1DB8FCu;
    // 0x1db8fc: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1db8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1db900: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1db900u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x1db904: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1db904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1db908: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB908u;
    {
        const bool branch_taken_0x1db908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB908u;
            // 0x1db90c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db908) {
            ctx->pc = 0x1DB92Cu;
            goto label_1db92c;
        }
    }
    ctx->pc = 0x1DB910u;
    // 0x1db910: 0x8c42cd98  lw          $v0, -0x3268($v0)
    ctx->pc = 0x1db910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x1db914: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DB914u;
    {
        const bool branch_taken_0x1db914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db914) {
            ctx->pc = 0x1DB918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB914u;
            // 0x1db918: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB930u;
            goto label_1db930;
        }
    }
    ctx->pc = 0x1DB91Cu;
    // 0x1db91c: 0xc08b212  jal         func_22C848
    ctx->pc = 0x1DB91Cu;
    SET_GPR_U32(ctx, 31, 0x1DB924u);
    ctx->pc = 0x1DB920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB91Cu;
            // 0x1db920: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C848u;
    if (runtime->hasFunction(0x22C848u)) {
        auto targetFn = runtime->lookupFunction(0x22C848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB924u; }
        if (ctx->pc != 0x1DB924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C848_0x22c848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB924u; }
        if (ctx->pc != 0x1DB924u) { return; }
    }
    ctx->pc = 0x1DB924u;
    // 0x1db924: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB924u;
    {
        const bool branch_taken_0x1db924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB924u;
            // 0x1db928: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db924) {
            ctx->pc = 0x1DB934u;
            goto label_1db934;
        }
    }
    ctx->pc = 0x1DB92Cu;
label_1db92c:
    // 0x1db92c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1db92cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db930:
    // 0x1db930: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1db930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1db934:
    // 0x1db934: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DB934u;
    {
        const bool branch_taken_0x1db934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db934) {
            ctx->pc = 0x1DB974u;
            goto label_1db974;
        }
    }
    ctx->pc = 0x1DB93Cu;
    // 0x1db93c: 0xc6020090  lwc1        $f2, 0x90($s0)
    ctx->pc = 0x1db93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db940: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1db940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1db944: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1db944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1db948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db94c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1db94cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1db950: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x1db950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x1db954: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1db954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1db958: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1db958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1db95c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1db95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1db960: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x1db960u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x1db964: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1db964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1db968: 0x46000829  min.s       $f0, $f1, $f0
    ctx->pc = 0x1db968u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[0]);
    // 0x1db96c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1db96cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1db970: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x1db970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_1db974:
    // 0x1db974: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x1DB974u;
    {
        const bool branch_taken_0x1db974 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB974u;
            // 0x1db978: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db974) {
            ctx->pc = 0x1DBA50u;
            goto label_1dba50;
        }
    }
    ctx->pc = 0x1DB97Cu;
    // 0x1db97c: 0xc070cd4  jal         func_1C3350
    ctx->pc = 0x1DB97Cu;
    SET_GPR_U32(ctx, 31, 0x1DB984u);
    ctx->pc = 0x1DB980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB97Cu;
            // 0x1db980: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3350u;
    if (runtime->hasFunction(0x1C3350u)) {
        auto targetFn = runtime->lookupFunction(0x1C3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB984u; }
        if (ctx->pc != 0x1DB984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3350_0x1c3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB984u; }
        if (ctx->pc != 0x1DB984u) { return; }
    }
    ctx->pc = 0x1DB984u;
    // 0x1db984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db988: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DB988u;
    {
        const bool branch_taken_0x1db988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB988u;
            // 0x1db98c: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db988) {
            ctx->pc = 0x1DB9F8u;
            goto label_1db9f8;
        }
    }
    ctx->pc = 0x1DB990u;
    // 0x1db990: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1db990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1db994: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x1db994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x1db998: 0x8c6300f4  lw          $v1, 0xF4($v1)
    ctx->pc = 0x1db998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x1db99c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1db99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1db9a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB9A0u;
    {
        const bool branch_taken_0x1db9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9A0u;
            // 0x1db9a4: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db9a0) {
            ctx->pc = 0x1DB9B8u;
            goto label_1db9b8;
        }
    }
    ctx->pc = 0x1DB9A8u;
    // 0x1db9a8: 0x8c820260  lw          $v0, 0x260($a0)
    ctx->pc = 0x1db9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 608)));
    // 0x1db9ac: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1db9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1db9b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DB9B0u;
    {
        const bool branch_taken_0x1db9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9B0u;
            // 0x1db9b4: 0x30510008  andi        $s1, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db9b0) {
            ctx->pc = 0x1DB9F8u;
            goto label_1db9f8;
        }
    }
    ctx->pc = 0x1DB9B8u;
label_1db9b8:
    // 0x1db9b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1db9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1db9bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB9BCu;
    {
        const bool branch_taken_0x1db9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9BCu;
            // 0x1db9c0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db9bc) {
            ctx->pc = 0x1DB9D4u;
            goto label_1db9d4;
        }
    }
    ctx->pc = 0x1DB9C4u;
    // 0x1db9c4: 0x8c8201c0  lw          $v0, 0x1C0($a0)
    ctx->pc = 0x1db9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x1db9c8: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x1db9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x1db9cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DB9CCu;
    {
        const bool branch_taken_0x1db9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9CCu;
            // 0x1db9d0: 0x30510002  andi        $s1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db9cc) {
            ctx->pc = 0x1DB9F8u;
            goto label_1db9f8;
        }
    }
    ctx->pc = 0x1DB9D4u;
label_1db9d4:
    // 0x1db9d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1db9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1db9d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB9D8u;
    {
        const bool branch_taken_0x1db9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db9d8) {
            ctx->pc = 0x1DB9F8u;
            goto label_1db9f8;
        }
    }
    ctx->pc = 0x1DB9E0u;
    // 0x1db9e0: 0x8c8201c0  lw          $v0, 0x1C0($a0)
    ctx->pc = 0x1db9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x1db9e4: 0x8443009e  lh          $v1, 0x9E($v0)
    ctx->pc = 0x1db9e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 158)));
    // 0x1db9e8: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x1db9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1db9ec: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1db9ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1db9f0: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x1db9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x1db9f4: 0x30510004  andi        $s1, $v0, 0x4
    ctx->pc = 0x1db9f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1db9f8:
    // 0x1db9f8: 0x16600015  bnez        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DB9F8u;
    {
        const bool branch_taken_0x1db9f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9F8u;
            // 0x1db9fc: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db9f8) {
            ctx->pc = 0x1DBA50u;
            goto label_1dba50;
        }
    }
    ctx->pc = 0x1DBA00u;
    // 0x1dba00: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1dba00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1dba04: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1dba04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x1dba08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dba08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dba0c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DBA0Cu;
    {
        const bool branch_taken_0x1dba0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA0Cu;
            // 0x1dba10: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba0c) {
            ctx->pc = 0x1DBA50u;
            goto label_1dba50;
        }
    }
    ctx->pc = 0x1DBA14u;
    // 0x1dba14: 0x8c42cd98  lw          $v0, -0x3268($v0)
    ctx->pc = 0x1dba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x1dba18: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DBA18u;
    {
        const bool branch_taken_0x1dba18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA18u;
            // 0x1dba1c: 0x8c62cda8  lw          $v0, -0x3258($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba18) {
            ctx->pc = 0x1DBA54u;
            goto label_1dba54;
        }
    }
    ctx->pc = 0x1DBA20u;
    // 0x1dba20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dba24: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1dba24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1dba28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dba28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dba2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba30: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1dba30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dba34: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x1DBA34u;
    SET_GPR_U32(ctx, 31, 0x1DBA3Cu);
    ctx->pc = 0x1DBA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA34u;
            // 0x1dba38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA3Cu; }
        if (ctx->pc != 0x1DBA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA3Cu; }
        if (ctx->pc != 0x1DBA3Cu) { return; }
    }
    ctx->pc = 0x1DBA3Cu;
    // 0x1dba3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1dba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dba40: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x1DBA40u;
    SET_GPR_U32(ctx, 31, 0x1DBA48u);
    ctx->pc = 0x1DBA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA40u;
            // 0x1dba44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA48u; }
        if (ctx->pc != 0x1DBA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA48u; }
        if (ctx->pc != 0x1DBA48u) { return; }
    }
    ctx->pc = 0x1DBA48u;
    // 0x1dba48: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1dba48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1dba4c: 0x0  nop
    ctx->pc = 0x1dba4cu;
    // NOP
label_1dba50:
    // 0x1dba50: 0x8c62cda8  lw          $v0, -0x3258($v1)
    ctx->pc = 0x1dba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954408)));
label_1dba54:
    // 0x1dba54: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DBA54u;
    {
        const bool branch_taken_0x1dba54 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DBA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA54u;
            // 0x1dba58: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba54) {
            ctx->pc = 0x1DBA60u;
            goto label_1dba60;
        }
    }
    ctx->pc = 0x1DBA5Cu;
    // 0x1dba5c: 0xac62cda8  sw          $v0, -0x3258($v1)
    ctx->pc = 0x1dba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954408), GPR_U32(ctx, 2));
label_1dba60:
    // 0x1dba60: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1dba60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1dba64: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x1dba64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x1dba68: 0xc4406c78  lwc1        $f0, 0x6C78($v0)
    ctx->pc = 0x1dba68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 27768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dba6c: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1dba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x1dba70: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBA70u;
    {
        const bool branch_taken_0x1dba70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA70u;
            // 0x1dba74: 0xe6000090  swc1        $f0, 0x90($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba70) {
            ctx->pc = 0x1DBA88u;
            goto label_1dba88;
        }
    }
    ctx->pc = 0x1DBA78u;
    // 0x1dba78: 0xc0873c6  jal         func_21CF18
    ctx->pc = 0x1DBA78u;
    SET_GPR_U32(ctx, 31, 0x1DBA80u);
    ctx->pc = 0x21CF18u;
    if (runtime->hasFunction(0x21CF18u)) {
        auto targetFn = runtime->lookupFunction(0x21CF18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA80u; }
        if (ctx->pc != 0x1DBA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CF18_0x21cf18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA80u; }
        if (ctx->pc != 0x1DBA80u) { return; }
    }
    ctx->pc = 0x1DBA80u;
    // 0x1dba80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBA80u;
    {
        const bool branch_taken_0x1dba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA80u;
            // 0x1dba84: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba80) {
            ctx->pc = 0x1DBAA0u;
            goto label_1dbaa0;
        }
    }
    ctx->pc = 0x1DBA88u;
label_1dba88:
    // 0x1dba88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dba8c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1dba8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1dba90: 0x51280a  movz        $a1, $v0, $s1
    ctx->pc = 0x1dba90u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1dba94: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x1DBA94u;
    SET_GPR_U32(ctx, 31, 0x1DBA9Cu);
    ctx->pc = 0x1DBA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA94u;
            // 0x1dba98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA9Cu; }
        if (ctx->pc != 0x1DBA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA9Cu; }
        if (ctx->pc != 0x1DBA9Cu) { return; }
    }
    ctx->pc = 0x1DBA9Cu;
    // 0x1dba9c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1dba9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dbaa0:
    // 0x1dbaa0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dbaa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dbaa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dbaa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbaa8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1dbaa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbaac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBAB0u;
            // 0x1dbab4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB884u: goto label_1db884;
            case 0x1DB890u: goto label_1db890;
            case 0x1DB92Cu: goto label_1db92c;
            case 0x1DB930u: goto label_1db930;
            case 0x1DB934u: goto label_1db934;
            case 0x1DB974u: goto label_1db974;
            case 0x1DB9B8u: goto label_1db9b8;
            case 0x1DB9D4u: goto label_1db9d4;
            case 0x1DB9F8u: goto label_1db9f8;
            case 0x1DBA50u: goto label_1dba50;
            case 0x1DBA54u: goto label_1dba54;
            case 0x1DBA60u: goto label_1dba60;
            case 0x1DBA88u: goto label_1dba88;
            case 0x1DBAA0u: goto label_1dbaa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DBAB8u;
}
