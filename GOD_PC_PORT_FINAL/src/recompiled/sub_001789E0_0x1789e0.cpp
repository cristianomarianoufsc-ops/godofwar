#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001789E0 (Bug AS fix — label interno de sub_001785F0, extraido como entry point separado)
// Address: 0x1789e0 - 0x178be8
// Extraido de sub_001785F0_0x1785f0.cpp linhas 1161-1944
void sub_001789E0_0x1789e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001789E0_0x1789e0");
#endif

    ctx->pc = 0x1789e0u;

    // 0x1789e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1789e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1789e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1789e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1789e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1789e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1789ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1789f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1789f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1789f4: 0x26130008  addiu       $s3, $s0, 0x8
    ctx->pc = 0x1789f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1789f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1789f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1789fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1789fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178a04: 0xc05e996  jal         func_17A658
    ctx->pc = 0x178A04u;
    SET_GPR_U32(ctx, 31, 0x178A0Cu);
    ctx->pc = 0x178A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178A04u;
            // 0x178a08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A0Cu; }
        if (ctx->pc != 0x178A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A0Cu; }
        if (ctx->pc != 0x178A0Cu) { return; }
    }
    ctx->pc = 0x178A0Cu;
    // 0x178a0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x178a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x178a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x178a14: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x178A14u;
    {
        const bool branch_taken_0x178a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178a14) {
            ctx->pc = 0x178A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178A14u;
            // 0x178a18: 0x96430000  lhu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178A30u;
            goto label_178a30;
        }
    }
    ctx->pc = 0x178A1Cu;
    // 0x178a1c: 0x1220006a  beqz        $s1, . + 4 + (0x6A << 2)
    ctx->pc = 0x178A1Cu;
    {
        const bool branch_taken_0x178a1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A1Cu;
            // 0x178a20: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a1c) {
            ctx->pc = 0x178BC8u;
            goto label_178bc8;
        }
    }
    ctx->pc = 0x178A24u;
    // 0x178a24: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x178A24u;
    {
        const bool branch_taken_0x178a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A24u;
            // 0x178a28: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a24) {
            ctx->pc = 0x178AF8u;
            goto label_178af8;
        }
    }
    ctx->pc = 0x178A2Cu;
    // 0x178a2c: 0x0  nop
    ctx->pc = 0x178a2cu;
    // NOP
label_178a30:
    // 0x178a30: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x178a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x178a34: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x178a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x178a38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x178a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x178a3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x178a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178a40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x178a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x178a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178a48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a4c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x178a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x178a50: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x178a50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x178a54: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x178a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x178a58: 0x40f809  jalr        $v0
    ctx->pc = 0x178A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178A60u);
        ctx->pc = 0x178A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A58u;
            // 0x178a5c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178A60u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178A30u: goto label_178a30;
            case 0x178A98u: goto label_178a98;
            case 0x178ABCu: goto label_178abc;
            case 0x178ADCu: goto label_178adc;
            case 0x178AF4u: goto label_178af4;
            case 0x178AF8u: goto label_178af8;
            case 0x178B60u: goto label_178b60;
            case 0x178B98u: goto label_178b98;
            case 0x178BC8u: goto label_178bc8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178A60u; }
            if (ctx->pc != 0x178A60u) { return; }
        }
        }
    }
    ctx->pc = 0x178A60u;
    // 0x178a60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x178a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a64: 0x1240004c  beqz        $s2, . + 4 + (0x4C << 2)
    ctx->pc = 0x178A64u;
    {
        const bool branch_taken_0x178a64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A64u;
            // 0x178a68: 0x3c060033  lui         $a2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a64) {
            ctx->pc = 0x178B98u;
            goto label_178b98;
        }
    }
    ctx->pc = 0x178A6Cu;
    // 0x178a6c: 0x82040008  lb          $a0, 0x8($s0)
    ctx->pc = 0x178a6cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x178a70: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x178A70u;
    {
        const bool branch_taken_0x178a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A70u;
            // 0x178a74: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a70) {
            ctx->pc = 0x178AF4u;
            goto label_178af4;
        }
    }
    ctx->pc = 0x178A78u;
    // 0x178a78: 0x1082001f  beq         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x178A78u;
    {
        const bool branch_taken_0x178a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x178A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A78u;
            // 0x178a7c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a78) {
            ctx->pc = 0x178AF8u;
            goto label_178af8;
        }
    }
    ctx->pc = 0x178A80u;
    // 0x178a80: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x178a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x178a84: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x178A84u;
    {
        const bool branch_taken_0x178a84 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x178A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A84u;
            // 0x178a88: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a84) {
            ctx->pc = 0x178A98u;
            goto label_178a98;
        }
    }
    ctx->pc = 0x178A8Cu;
    // 0x178a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178a90: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x178A90u;
    {
        const bool branch_taken_0x178a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x178A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A90u;
            // 0x178a94: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a90) {
            ctx->pc = 0x178AF8u;
            goto label_178af8;
        }
    }
    ctx->pc = 0x178A98u;
label_178a98:
    // 0x178a98: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x178A98u;
    {
        const bool branch_taken_0x178a98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x178a98) {
            ctx->pc = 0x178ABCu;
            goto label_178abc;
        }
    }
    ctx->pc = 0x178AA0u;
    // 0x178aa0: 0xc05d656  jal         func_175958
    ctx->pc = 0x178AA0u;
    SET_GPR_U32(ctx, 31, 0x178AA8u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AA8u; }
        if (ctx->pc != 0x178AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AA8u; }
        if (ctx->pc != 0x178AA8u) { return; }
    }
    ctx->pc = 0x178AA8u;
    // 0x178aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178aac: 0xc05d69c  jal         func_175A70
    ctx->pc = 0x178AACu;
    SET_GPR_U32(ctx, 31, 0x178AB4u);
    ctx->pc = 0x178AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178AACu;
            // 0x178ab0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A70u;
    if (runtime->hasFunction(0x175A70u)) {
        auto targetFn = runtime->lookupFunction(0x175A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AB4u; }
        if (ctx->pc != 0x178AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A70_0x175a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AB4u; }
        if (ctx->pc != 0x178AB4u) { return; }
    }
    ctx->pc = 0x178AB4u;
    // 0x178ab4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x178AB4u;
    {
        const bool branch_taken_0x178ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178ab4) {
            ctx->pc = 0x178ADCu;
            goto label_178adc;
        }
    }
    ctx->pc = 0x178ABCu;
label_178abc:
    // 0x178abc: 0xc05d656  jal         func_175958
    ctx->pc = 0x178ABCu;
    SET_GPR_U32(ctx, 31, 0x178AC4u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AC4u; }
        if (ctx->pc != 0x178AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AC4u; }
        if (ctx->pc != 0x178AC4u) { return; }
    }
    ctx->pc = 0x178AC4u;
    // 0x178ac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ac8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x178ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178acc: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x178ACCu;
    SET_GPR_U32(ctx, 31, 0x178AD4u);
    ctx->pc = 0x178AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178ACCu;
            // 0x178ad0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AD4u; }
        if (ctx->pc != 0x178AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AD4u; }
        if (ctx->pc != 0x178AD4u) { return; }
    }
    ctx->pc = 0x178AD4u;
    // 0x178ad4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x178AD4u;
    {
        const bool branch_taken_0x178ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178AD4u;
            // 0x178ad8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ad4) {
            ctx->pc = 0x178AF8u;
            goto label_178af8;
        }
    }
    ctx->pc = 0x178ADCu;
label_178adc:
    // 0x178adc: 0xc05d656  jal         func_175958
    ctx->pc = 0x178ADCu;
    SET_GPR_U32(ctx, 31, 0x178AE4u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AE4u; }
        if (ctx->pc != 0x178AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AE4u; }
        if (ctx->pc != 0x178AE4u) { return; }
    }
    ctx->pc = 0x178AE4u;
    // 0x178ae4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ae8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x178ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178aec: 0xc05d6c2  jal         func_175B08
    ctx->pc = 0x178AECu;
    SET_GPR_U32(ctx, 31, 0x178AF4u);
    ctx->pc = 0x178AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178AECu;
            // 0x178af0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B08u;
    if (runtime->hasFunction(0x175B08u)) {
        auto targetFn = runtime->lookupFunction(0x175B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AF4u; }
        if (ctx->pc != 0x178AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B08_0x175b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AF4u; }
        if (ctx->pc != 0x178AF4u) { return; }
    }
    ctx->pc = 0x178AF4u;
label_178af4:
    // 0x178af4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x178af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_178af8:
    // 0x178af8: 0x8c433834  lw          $v1, 0x3834($v0)
    ctx->pc = 0x178af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14388)));
    // 0x178afc: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x178afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x178b00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x178b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x178b04: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x178B04u;
    {
        const bool branch_taken_0x178b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B04u;
            // 0x178b08: 0x3c060033  lui         $a2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b04) {
            ctx->pc = 0x178B98u;
            goto label_178b98;
        }
    }
    ctx->pc = 0x178B0Cu;
    // 0x178b0c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x178b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x178b10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x178b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x178b14: 0x24423838  addiu       $v0, $v0, 0x3838
    ctx->pc = 0x178b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14392));
    // 0x178b18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x178b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178b1c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x178b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178b20: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x178b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x178b24: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x178B24u;
    {
        const bool branch_taken_0x178b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178b24) {
            ctx->pc = 0x178B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178B24u;
            // 0x178b28: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178B60u;
            goto label_178b60;
        }
    }
    ctx->pc = 0x178B2Cu;
    // 0x178b2c: 0xc05e37e  jal         func_178DF8
    ctx->pc = 0x178B2Cu;
    SET_GPR_U32(ctx, 31, 0x178B34u);
    ctx->pc = 0x178DF8u;
    if (runtime->hasFunction(0x178DF8u)) {
        auto targetFn = runtime->lookupFunction(0x178DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B34u; }
        if (ctx->pc != 0x178B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178DF8_0x178df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B34u; }
        if (ctx->pc != 0x178B34u) { return; }
    }
    ctx->pc = 0x178B34u;
    // 0x178b34: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x178B34u;
    SET_GPR_U32(ctx, 31, 0x178B3Cu);
    ctx->pc = 0x178B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178B34u;
            // 0x178b38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B3Cu; }
        if (ctx->pc != 0x178B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B3Cu; }
        if (ctx->pc != 0x178B3Cu) { return; }
    }
    ctx->pc = 0x178B3Cu;
    // 0x178b3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x178b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b40: 0xc08e200  jal         func_238800
    ctx->pc = 0x178B40u;
    SET_GPR_U32(ctx, 31, 0x178B48u);
    ctx->pc = 0x178B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178B40u;
            // 0x178b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238800u;
    if (runtime->hasFunction(0x238800u)) {
        auto targetFn = runtime->lookupFunction(0x238800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B48u; }
        if (ctx->pc != 0x178B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238800_0x238810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B48u; }
        if (ctx->pc != 0x178B48u) { return; }
    }
    ctx->pc = 0x178B48u;
    // 0x178b48: 0xc05e37e  jal         func_178DF8
    ctx->pc = 0x178B48u;
    SET_GPR_U32(ctx, 31, 0x178B50u);
    ctx->pc = 0x178DF8u;
    if (runtime->hasFunction(0x178DF8u)) {
        auto targetFn = runtime->lookupFunction(0x178DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B50u; }
        if (ctx->pc != 0x178B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178DF8_0x178df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B50u; }
        if (ctx->pc != 0x178B50u) { return; }
    }
    ctx->pc = 0x178B50u;
    // 0x178b50: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x178b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x178b54: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x178b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x178b58: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x178b58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x178b5c: 0x0  nop
    ctx->pc = 0x178b5cu;
    // NOP
label_178b60:
    // 0x178b60: 0xc05e394  jal         func_178E50
    ctx->pc = 0x178B60u;
    SET_GPR_U32(ctx, 31, 0x178B68u);
    ctx->pc = 0x178B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178B60u;
            // 0x178b64: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178E50u;
    if (runtime->hasFunction(0x178E50u)) {
        auto targetFn = runtime->lookupFunction(0x178E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B68u; }
        if (ctx->pc != 0x178B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_178e50_0x178e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B68u; }
        if (ctx->pc != 0x178B68u) { return; }
    }
    ctx->pc = 0x178B68u;
    // 0x178b68: 0xc05e36a  jal         func_178DA8
    ctx->pc = 0x178B68u;
    SET_GPR_U32(ctx, 31, 0x178B70u);
    ctx->pc = 0x178DA8u;
    if (runtime->hasFunction(0x178DA8u)) {
        auto targetFn = runtime->lookupFunction(0x178DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B70u; }
        if (ctx->pc != 0x178B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178DA8_0x178da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B70u; }
        if (ctx->pc != 0x178B70u) { return; }
    }
    ctx->pc = 0x178B70u;
    // 0x178b70: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x178b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x178b74: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x178b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x178b78: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x178b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x178b7c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x178b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x178b80: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x178b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x178b84: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x178b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x178b88: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x178b8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x178b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x178b90: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x178b90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x178b94: 0x0  nop
    ctx->pc = 0x178b94u;
    // NOP
label_178b98:
    // 0x178b98: 0x8cc23830  lw          $v0, 0x3830($a2)
    ctx->pc = 0x178b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 14384)));
    // 0x178b9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x178B9Cu;
    {
        const bool branch_taken_0x178b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B9Cu;
            // 0x178ba0: 0x3c050033  lui         $a1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b9c) {
            ctx->pc = 0x178BC8u;
            goto label_178bc8;
        }
    }
    ctx->pc = 0x178BA4u;
    // 0x178ba4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x178ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x178ba8: 0x8ca33834  lw          $v1, 0x3834($a1)
    ctx->pc = 0x178ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 14388)));
    // 0x178bac: 0x24843838  addiu       $a0, $a0, 0x3838
    ctx->pc = 0x178bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14392));
    // 0x178bb0: 0xacc03830  sw          $zero, 0x3830($a2)
    ctx->pc = 0x178bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 14384), GPR_U32(ctx, 0));
    // 0x178bb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x178bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x178bb8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x178bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x178bbc: 0xaca33834  sw          $v1, 0x3834($a1)
    ctx->pc = 0x178bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14388), GPR_U32(ctx, 3));
    // 0x178bc0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x178bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x178bc4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x178bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_178bc8:
    // 0x178bc8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x178bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178bcc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x178bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178bd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178bd4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x178bd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x178BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178BDCu;
            // 0x178be0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178A30u: goto label_178a30;
            case 0x178A98u: goto label_178a98;
            case 0x178ABCu: goto label_178abc;
            case 0x178ADCu: goto label_178adc;
            case 0x178AF4u: goto label_178af4;
            case 0x178AF8u: goto label_178af8;
            case 0x178B60u: goto label_178b60;
            case 0x178B98u: goto label_178b98;
            case 0x178BC8u: goto label_178bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178BE4u;
    // 0x178be4: 0x0  nop
    ctx->pc = 0x178be4u;
    // NOP
}
