#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD918
// Address: 0x1dd918 - 0x1ddaf8
void sub_001DD918_0x1dd918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD918_0x1dd918");
#endif

    ctx->pc = 0x1dd918u;

    // 0x1dd918: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1dd918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1dd91c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1dd91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1dd920: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1dd920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1dd924: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dd924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd928: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dd928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dd92c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dd92cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd930: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1dd930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1dd934: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1dd934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1dd938: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1dd938u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd93c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dd93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dd940: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1dd940u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1dd944: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1dd944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1dd948: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1dd948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1dd94c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1dd94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1dd950: 0x40f809  jalr        $v0
    ctx->pc = 0x1DD950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD958u);
        ctx->pc = 0x1DD954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD950u;
            // 0x1dd954: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DD958u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD998u: goto label_1dd998;
            case 0x1DD9C4u: goto label_1dd9c4;
            case 0x1DDA28u: goto label_1dda28;
            case 0x1DDAD0u: goto label_1ddad0;
            case 0x1DDAD4u: goto label_1ddad4;
            case 0x1DDAD8u: goto label_1ddad8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DD958u; }
            if (ctx->pc != 0x1DD958u) { return; }
        }
        }
    }
    ctx->pc = 0x1DD958u;
    // 0x1dd958: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dd958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd95c: 0x5260005d  beql        $s3, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x1DD95Cu;
    {
        const bool branch_taken_0x1dd95c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd95c) {
            ctx->pc = 0x1DD960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD95Cu;
            // 0x1dd960: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDAD4u;
            goto label_1ddad4;
        }
    }
    ctx->pc = 0x1DD964u;
    // 0x1dd964: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x1dd964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1dd968: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1dd968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dd96c: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x1dd96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1dd970: 0x50430058  beql        $v0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1DD970u;
    {
        const bool branch_taken_0x1dd970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dd970) {
            ctx->pc = 0x1DD974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD970u;
            // 0x1dd974: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDAD4u;
            goto label_1ddad4;
        }
    }
    ctx->pc = 0x1DD978u;
    // 0x1dd978: 0x8c8300fc  lw          $v1, 0xFC($a0)
    ctx->pc = 0x1dd978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x1dd97c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DD97Cu;
    {
        const bool branch_taken_0x1dd97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD97Cu;
            // 0x1dd980: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd97c) {
            ctx->pc = 0x1DD9C4u;
            goto label_1dd9c4;
        }
    }
    ctx->pc = 0x1DD984u;
    // 0x1dd984: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1dd984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1dd988: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd98c: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1DD98Cu;
    {
        const bool branch_taken_0x1dd98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DD990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD98Cu;
            // 0x1dd990: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd98c) {
            ctx->pc = 0x1DD9C4u;
            goto label_1dd9c4;
        }
    }
    ctx->pc = 0x1DD994u;
    // 0x1dd994: 0x0  nop
    ctx->pc = 0x1dd994u;
    // NOP
label_1dd998:
    // 0x1dd998: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1dd998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1dd99c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1dd99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1dd9a0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1dd9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1dd9a4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1dd9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1dd9a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD9A8u;
    {
        const bool branch_taken_0x1dd9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9A8u;
            // 0x1dd9ac: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9a8) {
            ctx->pc = 0x1DD9C4u;
            goto label_1dd9c4;
        }
    }
    ctx->pc = 0x1DD9B0u;
    // 0x1dd9b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd9b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dd9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd9b8: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DD9B8u;
    {
        const bool branch_taken_0x1dd9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DD9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9B8u;
            // 0x1dd9bc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9b8) {
            ctx->pc = 0x1DD998u;
            runtime->cooperativeGuestYield();
            goto label_1dd998;
        }
    }
    ctx->pc = 0x1DD9C0u;
    // 0x1dd9c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dd9c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd9c4:
    // 0x1dd9c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dd9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dd9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9cc: 0xc0823c4  jal         func_208F10
    ctx->pc = 0x1DD9CCu;
    SET_GPR_U32(ctx, 31, 0x1DD9D4u);
    ctx->pc = 0x1DD9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9CCu;
            // 0x1dd9d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208F10u;
    if (runtime->hasFunction(0x208F10u)) {
        auto targetFn = runtime->lookupFunction(0x208F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9D4u; }
        if (ctx->pc != 0x1DD9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_208f10_0x2090b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9D4u; }
        if (ctx->pc != 0x1DD9D4u) { return; }
    }
    ctx->pc = 0x1DD9D4u;
    // 0x1dd9d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9d8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DD9D8u;
    {
        const bool branch_taken_0x1dd9d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9D8u;
            // 0x1dd9dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9d8) {
            ctx->pc = 0x1DDA28u;
            goto label_1dda28;
        }
    }
    ctx->pc = 0x1DD9E0u;
    // 0x1dd9e0: 0x82020019  lb          $v0, 0x19($s0)
    ctx->pc = 0x1dd9e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x1dd9e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd9e8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1dd9e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1dd9ec: 0xc07748c  jal         func_1DD230
    ctx->pc = 0x1DD9ECu;
    SET_GPR_U32(ctx, 31, 0x1DD9F4u);
    ctx->pc = 0x1DD9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9ECu;
            // 0x1dd9f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD230u;
    if (runtime->hasFunction(0x1DD230u)) {
        auto targetFn = runtime->lookupFunction(0x1DD230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9F4u; }
        if (ctx->pc != 0x1DD9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD230_0x1dd230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9F4u; }
        if (ctx->pc != 0x1DD9F4u) { return; }
    }
    ctx->pc = 0x1DD9F4u;
    // 0x1dd9f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dd9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dd9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9fc: 0xc08242c  jal         func_2090B0
    ctx->pc = 0x1DD9FCu;
    SET_GPR_U32(ctx, 31, 0x1DDA04u);
    ctx->pc = 0x1DDA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9FCu;
            // 0x1dda00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2090B0u;
    if (runtime->hasFunction(0x2090B0u)) {
        auto targetFn = runtime->lookupFunction(0x2090B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA04u; }
        if (ctx->pc != 0x1DDA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2090b0_0x2090d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA04u; }
        if (ctx->pc != 0x1DDA04u) { return; }
    }
    ctx->pc = 0x1DDA04u;
    // 0x1dda04: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1dda04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1dda08: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1dda08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1dda0c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1dda0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1dda10: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1DDA10u;
    {
        const bool branch_taken_0x1dda10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA10u;
            // 0x1dda14: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda10) {
            ctx->pc = 0x1DDAD4u;
            goto label_1ddad4;
        }
    }
    ctx->pc = 0x1DDA18u;
    // 0x1dda18: 0xc082448  jal         func_209120
    ctx->pc = 0x1DDA18u;
    SET_GPR_U32(ctx, 31, 0x1DDA20u);
    ctx->pc = 0x1DDA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA18u;
            // 0x1dda1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209120u;
    if (runtime->hasFunction(0x209120u)) {
        auto targetFn = runtime->lookupFunction(0x209120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA20u; }
        if (ctx->pc != 0x1DDA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_209120_0x209140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA20u; }
        if (ctx->pc != 0x1DDA20u) { return; }
    }
    ctx->pc = 0x1DDA20u;
    // 0x1dda20: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1DDA20u;
    {
        const bool branch_taken_0x1dda20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA20u;
            // 0x1dda24: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda20) {
            ctx->pc = 0x1DDAD4u;
            goto label_1ddad4;
        }
    }
    ctx->pc = 0x1DDA28u;
label_1dda28:
    // 0x1dda28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1dda28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dda2c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1dda2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1dda30: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1dda30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1dda34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1dda34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1dda38: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1DDA38u;
    {
        const bool branch_taken_0x1dda38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA38u;
            // 0x1dda3c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda38) {
            ctx->pc = 0x1DDAD4u;
            goto label_1ddad4;
        }
    }
    ctx->pc = 0x1DDA40u;
    // 0x1dda40: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1dda40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1dda44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1dda44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1dda48: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1DDA48u;
    {
        const bool branch_taken_0x1dda48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA48u;
            // 0x1dda4c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda48) {
            ctx->pc = 0x1DDAD8u;
            goto label_1ddad8;
        }
    }
    ctx->pc = 0x1DDA50u;
    // 0x1dda50: 0xda2100e0  lqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x1dda50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1dda54: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1dda54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dda58: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1dda58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dda5c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1dda5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dda60: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1dda60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1dda64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dda64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dda68: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1dda68u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dda6c: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x1dda6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1dda70: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1dda70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1dda74: 0x46140504  c1          0x140504
    ctx->pc = 0x1dda74u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1dda78: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1DDA78u;
    SET_GPR_U32(ctx, 31, 0x1DDA80u);
    ctx->pc = 0x1DDA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA78u;
            // 0x1dda7c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA80u; }
        if (ctx->pc != 0x1DDA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA80u; }
        if (ctx->pc != 0x1DDA80u) { return; }
    }
    ctx->pc = 0x1DDA80u;
    // 0x1dda80: 0xc4400214  lwc1        $f0, 0x214($v0)
    ctx->pc = 0x1dda80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dda84: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1dda84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dda88: 0x0  nop
    ctx->pc = 0x1dda88u;
    // NOP
    // 0x1dda8c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1DDA8Cu;
    {
        const bool branch_taken_0x1dda8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DDA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA8Cu;
            // 0x1dda90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda8c) {
            ctx->pc = 0x1DDAD0u;
            goto label_1ddad0;
        }
    }
    ctx->pc = 0x1DDA94u;
    // 0x1dda94: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1dda94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1dda98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dda98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dda9c: 0xc07748c  jal         func_1DD230
    ctx->pc = 0x1DDA9Cu;
    SET_GPR_U32(ctx, 31, 0x1DDAA4u);
    ctx->pc = 0x1DDAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA9Cu;
            // 0x1ddaa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD230u;
    if (runtime->hasFunction(0x1DD230u)) {
        auto targetFn = runtime->lookupFunction(0x1DD230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAA4u; }
        if (ctx->pc != 0x1DDAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD230_0x1dd230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAA4u; }
        if (ctx->pc != 0x1DDAA4u) { return; }
    }
    ctx->pc = 0x1DDAA4u;
    // 0x1ddaa4: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1ddaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1ddaa8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ddaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ddaac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1ddaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1ddab0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DDAB0u;
    {
        const bool branch_taken_0x1ddab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAB0u;
            // 0x1ddab4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddab0) {
            ctx->pc = 0x1DDAD4u;
            goto label_1ddad4;
        }
    }
    ctx->pc = 0x1DDAB8u;
    // 0x1ddab8: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1DDAB8u;
    SET_GPR_U32(ctx, 31, 0x1DDAC0u);
    ctx->pc = 0x1DDABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAB8u;
            // 0x1ddabc: 0x8e240320  lw          $a0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAC0u; }
        if (ctx->pc != 0x1DDAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAC0u; }
        if (ctx->pc != 0x1DDAC0u) { return; }
    }
    ctx->pc = 0x1DDAC0u;
    // 0x1ddac0: 0x8c440210  lw          $a0, 0x210($v0)
    ctx->pc = 0x1ddac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x1ddac4: 0xc08a0b4  jal         func_2282D0
    ctx->pc = 0x1DDAC4u;
    SET_GPR_U32(ctx, 31, 0x1DDACCu);
    ctx->pc = 0x1DDAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAC4u;
            // 0x1ddac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2282D0u;
    if (runtime->hasFunction(0x2282D0u)) {
        auto targetFn = runtime->lookupFunction(0x2282D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDACCu; }
        if (ctx->pc != 0x1DDACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002282D0_0x2282d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDACCu; }
        if (ctx->pc != 0x1DDACCu) { return; }
    }
    ctx->pc = 0x1DDACCu;
    // 0x1ddacc: 0x0  nop
    ctx->pc = 0x1ddaccu;
    // NOP
label_1ddad0:
    // 0x1ddad0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ddad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ddad4:
    // 0x1ddad4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1ddad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ddad8:
    // 0x1ddad8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ddad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ddadc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ddadcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddae0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ddae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ddae4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1ddae4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ddae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddaec: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1ddaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ddaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAF0u;
            // 0x1ddaf4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD998u: goto label_1dd998;
            case 0x1DD9C4u: goto label_1dd9c4;
            case 0x1DDA28u: goto label_1dda28;
            case 0x1DDAD0u: goto label_1ddad0;
            case 0x1DDAD4u: goto label_1ddad4;
            case 0x1DDAD8u: goto label_1ddad8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DDAF8u;
}
