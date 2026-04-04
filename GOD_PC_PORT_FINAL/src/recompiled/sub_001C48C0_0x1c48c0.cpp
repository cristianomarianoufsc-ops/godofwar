#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C48C0
// Address: 0x1c48c0 - 0x1c4c80
void sub_001C48C0_0x1c48c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C48C0_0x1c48c0");
#endif

    ctx->pc = 0x1c48c0u;

    // 0x1c48c0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1c48c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1c48c4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1c48c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1c48c8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1c48c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1c48cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c48ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48d0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1c48d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1c48d4: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x1c48d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x1c48d8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1c48d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1c48dc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1c48dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1c48e0: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1c48e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1c48e4: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x1c48e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x1c48e8: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1c48e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1c48ec: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C48ECu;
    {
        const bool branch_taken_0x1c48ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C48F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C48ECu;
            // 0x1c48f0: 0x70069ca9  por         $s3, $zero, $a2 (Delay Slot)
        SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c48ec) {
            ctx->pc = 0x1C4944u;
            goto label_1c4944;
        }
    }
    ctx->pc = 0x1C48F4u;
    // 0x1c48f4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c48f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c48f8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c48fc: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1c48fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c4900: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1c4900u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1c4904: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1c4904u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1c4908: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1c4908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1c490c: 0x40f809  jalr        $v0
    ctx->pc = 0x1C490Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C4914u);
        ctx->pc = 0x1C4910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C490Cu;
            // 0x1c4910: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C4914u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4944u: goto label_1c4944;
            case 0x1C4998u: goto label_1c4998;
            case 0x1C49BCu: goto label_1c49bc;
            case 0x1C4A80u: goto label_1c4a80;
            case 0x1C4B10u: goto label_1c4b10;
            case 0x1C4B14u: goto label_1c4b14;
            case 0x1C4B18u: goto label_1c4b18;
            case 0x1C4B48u: goto label_1c4b48;
            case 0x1C4B78u: goto label_1c4b78;
            case 0x1C4B8Cu: goto label_1c4b8c;
            case 0x1C4C58u: goto label_1c4c58;
            case 0x1C4C5Cu: goto label_1c4c5c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C4914u; }
            if (ctx->pc != 0x1C4914u) { return; }
        }
        }
    }
    ctx->pc = 0x1C4914u;
    // 0x1c4914: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c4914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c4918: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c4918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c491c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1c491cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1c4920: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c4920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c4924: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c4924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c4928: 0xc622016c  lwc1        $f2, 0x16C($s1)
    ctx->pc = 0x1c4928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c492c: 0xc601cd34  lwc1        $f1, -0x32CC($s0)
    ctx->pc = 0x1c492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294954292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4930: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1c4930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1c4934: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c4934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c4938: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1c4938u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c493c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x1c493cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x1c4940: 0xe601cd34  swc1        $f1, -0x32CC($s0)
    ctx->pc = 0x1c4940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294954292), bits); }
label_1c4944:
    // 0x1c4944: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x1c4944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x1c4948: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c4948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c494c: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x1C494Cu;
    {
        const bool branch_taken_0x1c494c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C494Cu;
            // 0x1c4950: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c494c) {
            ctx->pc = 0x1C4C58u;
            goto label_1c4c58;
        }
    }
    ctx->pc = 0x1C4954u;
    // 0x1c4954: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1c4954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1c4958: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c4958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c495c: 0x144000bf  bnez        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x1C495Cu;
    {
        const bool branch_taken_0x1c495c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C495Cu;
            // 0x1c4960: 0x701314a9  por         $v0, $zero, $s3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c495c) {
            ctx->pc = 0x1C4C5Cu;
            goto label_1c4c5c;
        }
    }
    ctx->pc = 0x1C4964u;
    // 0x1c4964: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1c4964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1c4968: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c4968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c496c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C496Cu;
    {
        const bool branch_taken_0x1c496c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C496Cu;
            // 0x1c4970: 0x721024  and         $v0, $v1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c496c) {
            ctx->pc = 0x1C49BCu;
            goto label_1c49bc;
        }
    }
    ctx->pc = 0x1C4974u;
    // 0x1c4974: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4974u;
    {
        const bool branch_taken_0x1c4974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4974u;
            // 0x1c4978: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4974) {
            ctx->pc = 0x1C4998u;
            goto label_1c4998;
        }
    }
    ctx->pc = 0x1C497Cu;
    // 0x1c497c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c497cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c4980: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c4980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4984: 0xc440cd34  lwc1        $f0, -0x32CC($v0)
    ctx->pc = 0x1c4984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4988: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c4988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c498c: 0x0  nop
    ctx->pc = 0x1c498cu;
    // NOP
    // 0x1c4990: 0x450000b2  bc1f        . + 4 + (0xB2 << 2)
    ctx->pc = 0x1C4990u;
    {
        const bool branch_taken_0x1c4990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4990u;
            // 0x1c4994: 0x701314a9  por         $v0, $zero, $s3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4990) {
            ctx->pc = 0x1C4C5Cu;
            goto label_1c4c5c;
        }
    }
    ctx->pc = 0x1C4998u;
label_1c4998:
    // 0x1c4998: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x1c4998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x1c499c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1c499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c49a0: 0x144000ae  bnez        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x1C49A0u;
    {
        const bool branch_taken_0x1c49a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C49A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C49A0u;
            // 0x1c49a4: 0x701314a9  por         $v0, $zero, $s3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49a0) {
            ctx->pc = 0x1C4C5Cu;
            goto label_1c4c5c;
        }
    }
    ctx->pc = 0x1C49A8u;
    // 0x1c49a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c49a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49ac: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1C49ACu;
    SET_GPR_U32(ctx, 31, 0x1C49B4u);
    ctx->pc = 0x1C49B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C49ACu;
            // 0x1c49b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C49B4u; }
        if (ctx->pc != 0x1C49B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C49B4u; }
        if (ctx->pc != 0x1C49B4u) { return; }
    }
    ctx->pc = 0x1C49B4u;
    // 0x1c49b4: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x1C49B4u;
    {
        const bool branch_taken_0x1c49b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C49B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C49B4u;
            // 0x1c49b8: 0x701314a9  por         $v0, $zero, $s3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49b4) {
            ctx->pc = 0x1C4C5Cu;
            goto label_1c4c5c;
        }
    }
    ctx->pc = 0x1C49BCu;
label_1c49bc:
    // 0x1c49bc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c49bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c49c0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1c49c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c49c4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1c49c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1c49c8: 0x40f809  jalr        $v0
    ctx->pc = 0x1C49C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C49D0u);
        ctx->pc = 0x1C49CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C49C8u;
            // 0x1c49cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C49D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4944u: goto label_1c4944;
            case 0x1C4998u: goto label_1c4998;
            case 0x1C49BCu: goto label_1c49bc;
            case 0x1C4A80u: goto label_1c4a80;
            case 0x1C4B10u: goto label_1c4b10;
            case 0x1C4B14u: goto label_1c4b14;
            case 0x1C4B18u: goto label_1c4b18;
            case 0x1C4B48u: goto label_1c4b48;
            case 0x1C4B78u: goto label_1c4b78;
            case 0x1C4B8Cu: goto label_1c4b8c;
            case 0x1C4C58u: goto label_1c4c58;
            case 0x1C4C5Cu: goto label_1c4c5c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C49D0u; }
            if (ctx->pc != 0x1C49D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C49D0u;
    // 0x1c49d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c49d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49d4: 0x10e000a0  beqz        $a3, . + 4 + (0xA0 << 2)
    ctx->pc = 0x1C49D4u;
    {
        const bool branch_taken_0x1c49d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C49D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C49D4u;
            // 0x1c49d8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49d4) {
            ctx->pc = 0x1C4C58u;
            goto label_1c4c58;
        }
    }
    ctx->pc = 0x1C49DCu;
    // 0x1c49dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c49dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c49e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c49e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c49e4: 0xc440cd34  lwc1        $f0, -0x32CC($v0)
    ctx->pc = 0x1c49e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c49e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c49e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c49ec: 0x0  nop
    ctx->pc = 0x1c49ecu;
    // NOP
    // 0x1c49f0: 0x4500009a  bc1f        . + 4 + (0x9A << 2)
    ctx->pc = 0x1C49F0u;
    {
        const bool branch_taken_0x1c49f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C49F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C49F0u;
            // 0x1c49f4: 0x701314a9  por         $v0, $zero, $s3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49f0) {
            ctx->pc = 0x1C4C5Cu;
            goto label_1c4c5c;
        }
    }
    ctx->pc = 0x1C49F8u;
    // 0x1c49f8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c49f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c49fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c49fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c4a00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c4a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4a04: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1c4a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1c4a08: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1c4a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1c4a0c: 0x342138da  ori         $at, $at, 0x38DA
    ctx->pc = 0x1c4a0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14554);
    // 0x1c4a10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c4a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4a14: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1c4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1c4a18: 0xe6210150  swc1        $f1, 0x150($s1)
    ctx->pc = 0x1c4a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
    // 0x1c4a1c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c4a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c4a20: 0xe6200154  swc1        $f0, 0x154($s1)
    ctx->pc = 0x1c4a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
    // 0x1c4a24: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c4a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c4a28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c4a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4a2c: 0xc4600140  lwc1        $f0, 0x140($v1)
    ctx->pc = 0x1c4a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4a30: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1c4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1c4a34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c4a34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c4a38: 0x7a3300c0  lq          $s3, 0xC0($s1)
    ctx->pc = 0x1c4a38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x1c4a3c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c4a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c4a40: 0xae220174  sw          $v0, 0x174($s1)
    ctx->pc = 0x1c4a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 2));
    // 0x1c4a44: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1c4a44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c4a48: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1c4a48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1c4a4c: 0xda210260  lqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1c4a4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c4a50: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c4a50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4a54: 0xc4600144  lwc1        $f0, 0x144($v1)
    ctx->pc = 0x1c4a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4a58: 0xfa210260  sqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1c4a58u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4a5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c4a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c4a60: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c4a60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1c4a64: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x1c4a64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1c4a68: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c4a68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4a6c: 0xfa210260  sqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1c4a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4a70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c4a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4a74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c4a78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c4a7c: 0x0  nop
    ctx->pc = 0x1c4a7cu;
    // NOP
label_1c4a80:
    // 0x1c4a80: 0x0  nop
    ctx->pc = 0x1c4a80u;
    // NOP
    // 0x1c4a84: 0x0  nop
    ctx->pc = 0x1c4a84u;
    // NOP
    // 0x1c4a88: 0x0  nop
    ctx->pc = 0x1c4a88u;
    // NOP
    // 0x1c4a8c: 0x0  nop
    ctx->pc = 0x1c4a8cu;
    // NOP
    // 0x1c4a90: 0x0  nop
    ctx->pc = 0x1c4a90u;
    // NOP
    // 0x1c4a94: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C4A94u;
    {
        const bool branch_taken_0x1c4a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4A94u;
            // 0x1c4a98: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a94) {
            ctx->pc = 0x1C4A80u;
            runtime->cooperativeGuestYield();
            goto label_1c4a80;
        }
    }
    ctx->pc = 0x1C4A9Cu;
    // 0x1c4a9c: 0xd8e30020  lqc2        $vf3, 0x20($a3)
    ctx->pc = 0x1c4a9cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c4aa0: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1c4aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c4aa4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c4aa8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c4aa8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c4aac: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1c4aacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c4ab0: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x1c4ab0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x1c4ab4: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1c4ab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4ab8: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x1c4ab8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]);
    // 0x1c4abc: 0x4bc3086e  vopmsub.xyz $vf1, $vf1, $vf3
    ctx->pc = 0x1c4abcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c4ac0: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1c4ac0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4ac4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1c4ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4ac8: 0x4be320ac  vsub.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x1c4ac8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c4acc: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1c4accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c4ad0: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1c4ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c4ad4: 0x4be120ac  vsub.xyzw   $vf2, $vf4, $vf1
    ctx->pc = 0x1c4ad4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c4ad8: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1c4ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c4adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4ae0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1c4ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4ae4: 0x8ce20388  lw          $v0, 0x388($a3)
    ctx->pc = 0x1c4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 904)));
    // 0x1c4ae8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1c4ae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1c4aec: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4AECu;
    {
        const bool branch_taken_0x1c4aec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C4AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4AECu;
            // 0x1c4af0: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4aec) {
            ctx->pc = 0x1C4B10u;
            goto label_1c4b10;
        }
    }
    ctx->pc = 0x1C4AF4u;
    // 0x1c4af4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4AF4u;
    {
        const bool branch_taken_0x1c4af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4AF4u;
            // 0x1c4af8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4af4) {
            ctx->pc = 0x1C4B14u;
            goto label_1c4b14;
        }
    }
    ctx->pc = 0x1C4AFCu;
    // 0x1c4afc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4AFCu;
    {
        const bool branch_taken_0x1c4afc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4AFCu;
            // 0x1c4b00: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4afc) {
            ctx->pc = 0x1C4B18u;
            goto label_1c4b18;
        }
    }
    ctx->pc = 0x1C4B04u;
    // 0x1c4b04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c4b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4B08u;
    {
        const bool branch_taken_0x1c4b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B08u;
            // 0x1c4b0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b08) {
            ctx->pc = 0x1C4B18u;
            goto label_1c4b18;
        }
    }
    ctx->pc = 0x1C4B10u;
label_1c4b10:
    // 0x1c4b10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c4b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4b14:
    // 0x1c4b14: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c4b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c4b18:
    // 0x1c4b18: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1c4b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1c4b1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c4b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4b20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c4b20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b24: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1c4b24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4b28: 0x4be120ec  vsub.xyzw   $vf3, $vf4, $vf1
    ctx->pc = 0x1c4b28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c4b2c: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1c4b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c4b30: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C4B30u;
    {
        const bool branch_taken_0x1c4b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B30u;
            // 0x1c4b34: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b30) {
            ctx->pc = 0x1C4B8Cu;
            goto label_1c4b8c;
        }
    }
    ctx->pc = 0x1C4B38u;
    // 0x1c4b38: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1c4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c4b3c: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x1c4b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c4b40: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1c4b40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c4b44: 0x0  nop
    ctx->pc = 0x1c4b44u;
    // NOP
label_1c4b48:
    // 0x1c4b48: 0x4be3086a  vmul.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1c4b48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4b4c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1c4b4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c4b50: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1c4b50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c4b54: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x1c4b54u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c4b58: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1c4b58u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4b5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c4b5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4b60: 0x0  nop
    ctx->pc = 0x1c4b60u;
    // NOP
    // 0x1c4b64: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4B64u;
    {
        const bool branch_taken_0x1c4b64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B64u;
            // 0x1c4b68: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b64) {
            ctx->pc = 0x1C4B78u;
            goto label_1c4b78;
        }
    }
    ctx->pc = 0x1C4B6Cu;
    // 0x1c4b6c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1c4b6cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1c4b70: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1c4b70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b74: 0x0  nop
    ctx->pc = 0x1c4b74u;
    // NOP
label_1c4b78:
    // 0x1c4b78: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1c4b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1c4b7c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1c4b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c4b80: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1c4b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c4b84: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C4B84u;
    {
        const bool branch_taken_0x1c4b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4b84) {
            ctx->pc = 0x1C4B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B84u;
            // 0x1c4b88: 0xd8810000  lqc2        $vf1, 0x0($a0) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4B48u;
            runtime->cooperativeGuestYield();
            goto label_1c4b48;
        }
    }
    ctx->pc = 0x1C4B8Cu;
label_1c4b8c:
    // 0x1c4b8c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1c4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c4b90: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1c4b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1c4b94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c4b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c4b98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c4b9c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1c4b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c4ba0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1c4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c4ba4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c4ba4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4ba8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c4ba8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4bac: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x1c4bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1c4bb0: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x1c4bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x1c4bb4: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1c4bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4bb8: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x1c4bb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c4bbc: 0xda230260  lqc2        $vf3, 0x260($s1)
    ctx->pc = 0x1c4bbcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c4bc0: 0x4be31099  vmuly.xyzw  $vf2, $vf2, $vf3y
    ctx->pc = 0x1c4bc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c4bc4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1c4bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4bc8: 0x4be1206c  vsub.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x1c4bc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4bcc: 0x4be3085a  vmulz.xyzw  $vf1, $vf1, $vf3z
    ctx->pc = 0x1c4bccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4bd0: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1c4bd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c4bd4: 0xfa2200e0  sqc2        $vf2, 0xE0($s1)
    ctx->pc = 0x1c4bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c4bd8: 0x4be220ac  vsub.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x1c4bd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c4bdc: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1c4bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c4be0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1c4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1c4be4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c4be4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c4be8: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1c4be8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c4bec: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1c4becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c4bf0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c4bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c4bf4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c4bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c4bf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c4bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c4bfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c4bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4c00: 0xc6210294  lwc1        $f1, 0x294($s1)
    ctx->pc = 0x1c4c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4c04: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c4c04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c4c08: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1c4c08u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1c4c0c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c4c0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c4c10: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1c4c10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c4c14: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1c4c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c18: 0x4be110d8  vmulx.xyzw  $vf3, $vf2, $vf1x
    ctx->pc = 0x1c4c18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c4c1c: 0x8e25029c  lw          $a1, 0x29C($s1)
    ctx->pc = 0x1c4c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
    // 0x1c4c20: 0xc085e34  jal         func_2178D0
    ctx->pc = 0x1C4C20u;
    SET_GPR_U32(ctx, 31, 0x1C4C28u);
    ctx->pc = 0x1C4C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C20u;
            // 0x1c4c24: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2178D0u;
    if (runtime->hasFunction(0x2178D0u)) {
        auto targetFn = runtime->lookupFunction(0x2178D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4C28u; }
        if (ctx->pc != 0x1C4C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2178d0_0x2178e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4C28u; }
        if (ctx->pc != 0x1C4C28u) { return; }
    }
    ctx->pc = 0x1C4C28u;
    // 0x1c4c28: 0xc07a340  jal         func_1E8D00
    ctx->pc = 0x1C4C28u;
    SET_GPR_U32(ctx, 31, 0x1C4C30u);
    ctx->pc = 0x1C4C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C28u;
            // 0x1c4c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8D00u;
    if (runtime->hasFunction(0x1E8D00u)) {
        auto targetFn = runtime->lookupFunction(0x1E8D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4C30u; }
        if (ctx->pc != 0x1C4C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8D00_0x1e8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4C30u; }
        if (ctx->pc != 0x1C4C30u) { return; }
    }
    ctx->pc = 0x1C4C30u;
    // 0x1c4c30: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1c4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1c4c34: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1c4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1c4c38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c4c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c4c3c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4C3Cu;
    {
        const bool branch_taken_0x1c4c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C3Cu;
            // 0x1c4c40: 0x701314a9  por         $v0, $zero, $s3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c3c) {
            ctx->pc = 0x1C4C5Cu;
            goto label_1c4c5c;
        }
    }
    ctx->pc = 0x1C4C44u;
    // 0x1c4c44: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c4c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1c4c48: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1c4c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1c4c4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c4c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c4c50: 0xae2202d8  sw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c4c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 2));
    // 0x1c4c54: 0x0  nop
    ctx->pc = 0x1c4c54u;
    // NOP
label_1c4c58:
    // 0x1c4c58: 0x701314a9  por         $v0, $zero, $s3
    ctx->pc = 0x1c4c58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 19)));
label_1c4c5c:
    // 0x1c4c5c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1c4c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c4c60: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1c4c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c4c64: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1c4c64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c4c68: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1c4c68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c4c6c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c4c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c4c70: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1c4c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c4c74: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C74u;
            // 0x1c4c78: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4944u: goto label_1c4944;
            case 0x1C4998u: goto label_1c4998;
            case 0x1C49BCu: goto label_1c49bc;
            case 0x1C4A80u: goto label_1c4a80;
            case 0x1C4B10u: goto label_1c4b10;
            case 0x1C4B14u: goto label_1c4b14;
            case 0x1C4B18u: goto label_1c4b18;
            case 0x1C4B48u: goto label_1c4b48;
            case 0x1C4B78u: goto label_1c4b78;
            case 0x1C4B8Cu: goto label_1c4b8c;
            case 0x1C4C58u: goto label_1c4c58;
            case 0x1C4C5Cu: goto label_1c4c5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C4C7Cu;
    // 0x1c4c7c: 0x0  nop
    ctx->pc = 0x1c4c7cu;
    // NOP
}
