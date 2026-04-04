#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00230988
// Address: 0x230988 - 0x230b18
void sub_00230988_0x230988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230988_0x230988");
#endif

    ctx->pc = 0x230988u;

    // 0x230988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23098c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x230990: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x230990u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x230994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230998: 0x8e02be10  lw          $v0, -0x41F0($s0)
    ctx->pc = 0x230998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
    // 0x23099c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23099Cu;
    {
        const bool branch_taken_0x23099c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23099c) {
            ctx->pc = 0x2309ACu;
            goto label_2309ac;
        }
    }
    ctx->pc = 0x2309A4u;
    // 0x2309a4: 0xc04e24c  jal         func_138930
    ctx->pc = 0x2309A4u;
    SET_GPR_U32(ctx, 31, 0x2309ACu);
    ctx->pc = 0x138930u;
    if (runtime->hasFunction(0x138930u)) {
        auto targetFn = runtime->lookupFunction(0x138930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2309ACu; }
        if (ctx->pc != 0x2309ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138930_0x138930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2309ACu; }
        if (ctx->pc != 0x2309ACu) { return; }
    }
    ctx->pc = 0x2309ACu;
label_2309ac:
    // 0x2309ac: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2309ACu;
    SET_GPR_U32(ctx, 31, 0x2309B4u);
    ctx->pc = 0x2309B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2309ACu;
            // 0x2309b0: 0x8e04be10  lw          $a0, -0x41F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2309B4u; }
        if (ctx->pc != 0x2309B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2309B4u; }
        if (ctx->pc != 0x2309B4u) { return; }
    }
    ctx->pc = 0x2309B4u;
    // 0x2309b4: 0xc0915da  jal         func_245768
    ctx->pc = 0x2309B4u;
    SET_GPR_U32(ctx, 31, 0x2309BCu);
    ctx->pc = 0x2309B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2309B4u;
            // 0x2309b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245768u;
    if (runtime->hasFunction(0x245768u)) {
        auto targetFn = runtime->lookupFunction(0x245768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2309BCu; }
        if (ctx->pc != 0x2309BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245768_0x245768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2309BCu; }
        if (ctx->pc != 0x2309BCu) { return; }
    }
    ctx->pc = 0x2309BCu;
    // 0x2309bc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2309bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2309c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2309c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2309c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2309c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2309c8: 0xac6253a4  sw          $v0, 0x53A4($v1)
    ctx->pc = 0x2309c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21412), GPR_U32(ctx, 2));
    // 0x2309cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2309CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2309D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2309CCu;
            // 0x2309d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2309ACu: goto label_2309ac;
            case 0x230A50u: goto label_230a50;
            case 0x230AD8u: goto label_230ad8;
            case 0x230AF8u: goto label_230af8;
            case 0x230B00u: goto label_230b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2309D4u;
    // 0x2309d4: 0x0  nop
    ctx->pc = 0x2309d4u;
    // NOP
    // 0x2309d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2309d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2309dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2309dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2309e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2309e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2309e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2309e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2309e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2309e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2309ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2309ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2309f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2309f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2309f4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2309f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2309f8: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x2309f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2309fc: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x2309fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x230a00: 0x40f809  jalr        $v0
    ctx->pc = 0x230A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230A08u);
        ctx->pc = 0x230A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A00u;
            // 0x230a04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230A08u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2309ACu: goto label_2309ac;
            case 0x230A50u: goto label_230a50;
            case 0x230AD8u: goto label_230ad8;
            case 0x230AF8u: goto label_230af8;
            case 0x230B00u: goto label_230b00;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230A08u; }
            if (ctx->pc != 0x230A08u) { return; }
        }
        }
    }
    ctx->pc = 0x230A08u;
    // 0x230a08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a0c: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x230A0Cu;
    {
        const bool branch_taken_0x230a0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x230A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A0Cu;
            // 0x230a10: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a0c) {
            ctx->pc = 0x230A50u;
            goto label_230a50;
        }
    }
    ctx->pc = 0x230A14u;
    // 0x230a14: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x230a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x230a18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x230a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a1c: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x230a1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x230a20: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x230a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x230a24: 0x40f809  jalr        $v0
    ctx->pc = 0x230A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230A2Cu);
        ctx->pc = 0x230A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A24u;
            // 0x230a28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230A2Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2309ACu: goto label_2309ac;
            case 0x230A50u: goto label_230a50;
            case 0x230AD8u: goto label_230ad8;
            case 0x230AF8u: goto label_230af8;
            case 0x230B00u: goto label_230b00;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230A2Cu; }
            if (ctx->pc != 0x230A2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x230A2Cu;
    // 0x230a2c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x230a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x230a30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a34: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x230a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x230a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a3c: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x230a3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x230a40: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x230a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x230a44: 0x40f809  jalr        $v0
    ctx->pc = 0x230A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230A4Cu);
        ctx->pc = 0x230A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A44u;
            // 0x230a48: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230A4Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2309ACu: goto label_2309ac;
            case 0x230A50u: goto label_230a50;
            case 0x230AD8u: goto label_230ad8;
            case 0x230AF8u: goto label_230af8;
            case 0x230B00u: goto label_230b00;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230A4Cu; }
            if (ctx->pc != 0x230A4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x230A4Cu;
    // 0x230a4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230a50:
    // 0x230a50: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x230a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230a54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x230a54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230a58: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x230a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230a5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230a60: 0x3e00008  jr          $ra
    ctx->pc = 0x230A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A60u;
            // 0x230a64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2309ACu: goto label_2309ac;
            case 0x230A50u: goto label_230a50;
            case 0x230AD8u: goto label_230ad8;
            case 0x230AF8u: goto label_230af8;
            case 0x230B00u: goto label_230b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x230A68u;
    // 0x230a68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x230a6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x230a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x230a70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x230a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230a7c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x230a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x230a80: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x230a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x230a84: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x230a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x230a88: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x230A88u;
    {
        const bool branch_taken_0x230a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A88u;
            // 0x230a8c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a88) {
            ctx->pc = 0x230AF8u;
            goto label_230af8;
        }
    }
    ctx->pc = 0x230A90u;
    // 0x230a90: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x230a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x230a94: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x230a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x230a98: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x230a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x230a9c: 0x40f809  jalr        $v0
    ctx->pc = 0x230A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230AA4u);
        ctx->pc = 0x230AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A9Cu;
            // 0x230aa0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230AA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2309ACu: goto label_2309ac;
            case 0x230A50u: goto label_230a50;
            case 0x230AD8u: goto label_230ad8;
            case 0x230AF8u: goto label_230af8;
            case 0x230B00u: goto label_230b00;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230AA4u; }
            if (ctx->pc != 0x230AA4u) { return; }
        }
        }
    }
    ctx->pc = 0x230AA4u;
    // 0x230aa4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x230AA4u;
    {
        const bool branch_taken_0x230aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230AA4u;
            // 0x230aa8: 0x26220008  addiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230aa4) {
            ctx->pc = 0x230AF8u;
            goto label_230af8;
        }
    }
    ctx->pc = 0x230AACu;
    // 0x230aac: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x230aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x230ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ab4: 0x26060024  addiu       $a2, $s0, 0x24
    ctx->pc = 0x230ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x230ab8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x230ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x230abc: 0x51280b  movn        $a1, $v0, $s1
    ctx->pc = 0x230abcu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x230ac0: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x230ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x230ac4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x230ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x230ac8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x230AC8u;
    {
        const bool branch_taken_0x230ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230ac8) {
            ctx->pc = 0x230ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230AC8u;
            // 0x230acc: 0xae050024  sw          $a1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230AD8u;
            goto label_230ad8;
        }
    }
    ctx->pc = 0x230AD0u;
    // 0x230ad0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x230ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x230ad4: 0x0  nop
    ctx->pc = 0x230ad4u;
    // NOP
label_230ad8:
    // 0x230ad8: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x230ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x230adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230ae0: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x230ae0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x230ae4: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x230ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x230ae8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x230ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x230aec: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x230aecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x230af0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x230AF0u;
    {
        const bool branch_taken_0x230af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230AF0u;
            // 0x230af4: 0xa6230004  sh          $v1, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230af0) {
            ctx->pc = 0x230B00u;
            goto label_230b00;
        }
    }
    ctx->pc = 0x230AF8u;
label_230af8:
    // 0x230af8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x230af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230afc: 0x0  nop
    ctx->pc = 0x230afcu;
    // NOP
label_230b00:
    // 0x230b00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x230b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230b04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x230b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x230B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230B0Cu;
            // 0x230b10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2309ACu: goto label_2309ac;
            case 0x230A50u: goto label_230a50;
            case 0x230AD8u: goto label_230ad8;
            case 0x230AF8u: goto label_230af8;
            case 0x230B00u: goto label_230b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x230B14u;
    // 0x230b14: 0x0  nop
    ctx->pc = 0x230b14u;
    // NOP
}
