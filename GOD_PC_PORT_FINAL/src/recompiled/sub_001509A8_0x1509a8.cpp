#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001509A8
// Address: 0x1509a8 - 0x150f80
void sub_001509A8_0x1509a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001509A8_0x1509a8");
#endif

    ctx->pc = 0x1509a8u;

    // 0x1509a8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1509a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1509ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1509acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1509b0: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1509b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x1509b4: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1509b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x1509b8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1509b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x1509bc: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1509bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x1509c0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1509c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x1509c4: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1509c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x1509c8: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1509c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x1509cc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1509ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1509d0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1509d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1509d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1509d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1509d8: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x1509d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x1509dc: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x1509dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1509e0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1509e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1509e4: 0x1462015a  bne         $v1, $v0, . + 4 + (0x15A << 2)
    ctx->pc = 0x1509E4u;
    {
        const bool branch_taken_0x1509e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1509E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1509E4u;
            // 0x1509e8: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1509e4) {
            ctx->pc = 0x150F50u;
            goto label_150f50;
        }
    }
    ctx->pc = 0x1509ECu;
    // 0x1509ec: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1509ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1509f0: 0x8cb400d0  lw          $s4, 0xD0($a1)
    ctx->pc = 0x1509f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x1509f4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1509f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x1509f8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1509f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1509fc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1509fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x150a00: 0x8c46e868  lw          $a2, -0x1798($v0)
    ctx->pc = 0x150a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961256)));
    // 0x150a04: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x150a04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150a08: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x150a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150a0c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x150a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x150a10: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x150a10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x150a14: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x150a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x150a18: 0x40f809  jalr        $v0
    ctx->pc = 0x150A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x150A20u);
        ctx->pc = 0x150A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150A18u;
            // 0x150a1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x150A20u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150AA0u: goto label_150aa0;
            case 0x150AB8u: goto label_150ab8;
            case 0x150AE4u: goto label_150ae4;
            case 0x150AE8u: goto label_150ae8;
            case 0x150B00u: goto label_150b00;
            case 0x150B78u: goto label_150b78;
            case 0x150B7Cu: goto label_150b7c;
            case 0x150B88u: goto label_150b88;
            case 0x150B8Cu: goto label_150b8c;
            case 0x150BA0u: goto label_150ba0;
            case 0x150C30u: goto label_150c30;
            case 0x150C58u: goto label_150c58;
            case 0x150C70u: goto label_150c70;
            case 0x150C9Cu: goto label_150c9c;
            case 0x150CA0u: goto label_150ca0;
            case 0x150CC0u: goto label_150cc0;
            case 0x150D90u: goto label_150d90;
            case 0x150DA0u: goto label_150da0;
            case 0x150DA4u: goto label_150da4;
            case 0x150DBCu: goto label_150dbc;
            case 0x150DE8u: goto label_150de8;
            case 0x150E10u: goto label_150e10;
            case 0x150E34u: goto label_150e34;
            case 0x150E40u: goto label_150e40;
            case 0x150E70u: goto label_150e70;
            case 0x150E74u: goto label_150e74;
            case 0x150EF0u: goto label_150ef0;
            case 0x150F50u: goto label_150f50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x150A20u; }
            if (ctx->pc != 0x150A20u) { return; }
        }
        }
    }
    ctx->pc = 0x150A20u;
    // 0x150a20: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x150a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x150a24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x150a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a28: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x150a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x150a2c: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x150a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x150a30: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x150a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x150a34: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x150a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150a38: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x150a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x150a3c: 0xc08c85c  jal         func_232170
    ctx->pc = 0x150A3Cu;
    SET_GPR_U32(ctx, 31, 0x150A44u);
    ctx->pc = 0x150A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150A3Cu;
            // 0x150a40: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232170u;
    if (runtime->hasFunction(0x232170u)) {
        auto targetFn = runtime->lookupFunction(0x232170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150A44u; }
        if (ctx->pc != 0x150A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232170_0x232170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150A44u; }
        if (ctx->pc != 0x150A44u) { return; }
    }
    ctx->pc = 0x150A44u;
    // 0x150a44: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x150a44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a48: 0x16a000fd  bnez        $s5, . + 4 + (0xFD << 2)
    ctx->pc = 0x150A48u;
    {
        const bool branch_taken_0x150a48 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x150A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150A48u;
            // 0x150a4c: 0x26a6000c  addiu       $a2, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a48) {
            ctx->pc = 0x150E40u;
            goto label_150e40;
        }
    }
    ctx->pc = 0x150A50u;
    // 0x150a50: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x150a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x150a54: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x150a54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a58: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x150a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x150a5c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x150a5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a60: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x150a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x150a64: 0xc04f856  jal         func_13E158
    ctx->pc = 0x150A64u;
    SET_GPR_U32(ctx, 31, 0x150A6Cu);
    ctx->pc = 0x150A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150A64u;
            // 0x150a68: 0x8c440074  lw          $a0, 0x74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150A6Cu; }
        if (ctx->pc != 0x150A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150A6Cu; }
        if (ctx->pc != 0x150A6Cu) { return; }
    }
    ctx->pc = 0x150A6Cu;
    // 0x150a6c: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x150a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x150a70: 0xc090516  jal         func_241458
    ctx->pc = 0x150A70u;
    SET_GPR_U32(ctx, 31, 0x150A78u);
    ctx->pc = 0x150A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150A70u;
            // 0x150a74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241458u;
    if (runtime->hasFunction(0x241458u)) {
        auto targetFn = runtime->lookupFunction(0x241458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150A78u; }
        if (ctx->pc != 0x150A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_241458_0x2414b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150A78u; }
        if (ctx->pc != 0x150A78u) { return; }
    }
    ctx->pc = 0x150A78u;
    // 0x150a78: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x150a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x150a7c: 0x8cc200d0  lw          $v0, 0xD0($a2)
    ctx->pc = 0x150a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x150a80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x150a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150a84: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x150a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x150a88: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x150a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x150a8c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x150a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x150a90: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x150A90u;
    {
        const bool branch_taken_0x150a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150A90u;
            // 0x150a94: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a90) {
            ctx->pc = 0x150BA0u;
            goto label_150ba0;
        }
    }
    ctx->pc = 0x150A98u;
    // 0x150a98: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x150a98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a9c: 0x0  nop
    ctx->pc = 0x150a9cu;
    // NOP
label_150aa0:
    // 0x150aa0: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x150aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x150aa4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x150aa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150aa8: 0x86420040  lh          $v0, 0x40($s2)
    ctx->pc = 0x150aa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x150aac: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x150AACu;
    {
        const bool branch_taken_0x150aac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x150AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150AACu;
            // 0x150ab0: 0x96440040  lhu         $a0, 0x40($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150aac) {
            ctx->pc = 0x150AE4u;
            goto label_150ae4;
        }
    }
    ctx->pc = 0x150AB4u;
    // 0x150ab4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x150ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_150ab8:
    // 0x150ab8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x150ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x150abc: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x150abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x150ac0: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x150ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x150ac4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x150AC4u;
    {
        const bool branch_taken_0x150ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150AC4u;
            // 0x150ac8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ac4) {
            ctx->pc = 0x150AE8u;
            goto label_150ae8;
        }
    }
    ctx->pc = 0x150ACCu;
    // 0x150acc: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x150accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x150ad0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x150ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x150ad4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x150ad4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x150ad8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x150ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x150adc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x150ADCu;
    {
        const bool branch_taken_0x150adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150ADCu;
            // 0x150ae0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150adc) {
            ctx->pc = 0x150AB8u;
            runtime->cooperativeGuestYield();
            goto label_150ab8;
        }
    }
    ctx->pc = 0x150AE4u;
label_150ae4:
    // 0x150ae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x150ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150ae8:
    // 0x150ae8: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x150AE8u;
    {
        const bool branch_taken_0x150ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150ae8) {
            ctx->pc = 0x150AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x150AE8u;
            // 0x150aec: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x150B8Cu;
            goto label_150b8c;
        }
    }
    ctx->pc = 0x150AF0u;
    // 0x150af0: 0x86550040  lh          $s5, 0x40($s2)
    ctx->pc = 0x150af0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x150af4: 0x12a00024  beqz        $s5, . + 4 + (0x24 << 2)
    ctx->pc = 0x150AF4u;
    {
        const bool branch_taken_0x150af4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x150AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150AF4u;
            // 0x150af8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150af4) {
            ctx->pc = 0x150B88u;
            goto label_150b88;
        }
    }
    ctx->pc = 0x150AFCu;
    // 0x150afc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x150afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_150b00:
    // 0x150b00: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x150b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x150b04: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x150b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x150b08: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x150b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x150b0c: 0x50a0001b  beql        $a1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x150B0Cu;
    {
        const bool branch_taken_0x150b0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x150b0c) {
            ctx->pc = 0x150B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x150B0Cu;
            // 0x150b10: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x150B7Cu;
            goto label_150b7c;
        }
    }
    ctx->pc = 0x150B14u;
    // 0x150b14: 0x8cb00014  lw          $s0, 0x14($a1)
    ctx->pc = 0x150b14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x150b18: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x150B18u;
    {
        const bool branch_taken_0x150b18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x150B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150B18u;
            // 0x150b1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150b18) {
            ctx->pc = 0x150B78u;
            goto label_150b78;
        }
    }
    ctx->pc = 0x150B20u;
    // 0x150b20: 0xc054228  jal         func_1508A0
    ctx->pc = 0x150B20u;
    SET_GPR_U32(ctx, 31, 0x150B28u);
    ctx->pc = 0x150B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150B20u;
            // 0x150b24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1508A0u;
    if (runtime->hasFunction(0x1508A0u)) {
        auto targetFn = runtime->lookupFunction(0x1508A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B28u; }
        if (ctx->pc != 0x150B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001508a0_0x1508a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B28u; }
        if (ctx->pc != 0x150B28u) { return; }
    }
    ctx->pc = 0x150B28u;
    // 0x150b28: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x150B28u;
    {
        const bool branch_taken_0x150b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150b28) {
            ctx->pc = 0x150B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x150B28u;
            // 0x150b2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x150B7Cu;
            goto label_150b7c;
        }
    }
    ctx->pc = 0x150B30u;
    // 0x150b30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x150b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x150b34: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x150b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x150b38: 0x96050014  lhu         $a1, 0x14($s0)
    ctx->pc = 0x150b38u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x150b3c: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x150b3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x150b40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x150b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x150b44: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x150b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x150b48: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x150b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x150b4c: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x150b4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x150b50: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x150B50u;
    SET_GPR_U32(ctx, 31, 0x150B58u);
    ctx->pc = 0x150B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150B50u;
            // 0x150b54: 0x5ef021  addu        $fp, $v0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B58u; }
        if (ctx->pc != 0x150B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B58u; }
        if (ctx->pc != 0x150B58u) { return; }
    }
    ctx->pc = 0x150B58u;
    // 0x150b58: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x150b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x150b5c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x150b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x150b60: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x150b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x150b64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x150b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150b68: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x150b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x150b6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x150b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x150b70: 0xac5d0004  sw          $sp, 0x4($v0)
    ctx->pc = 0x150b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
    // 0x150b74: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x150b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_150b78:
    // 0x150b78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x150b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_150b7c:
    // 0x150b7c: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x150b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x150b80: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x150B80u;
    {
        const bool branch_taken_0x150b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150B80u;
            // 0x150b84: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150b80) {
            ctx->pc = 0x150B00u;
            runtime->cooperativeGuestYield();
            goto label_150b00;
        }
    }
    ctx->pc = 0x150B88u;
label_150b88:
    // 0x150b88: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x150b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_150b8c:
    // 0x150b8c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x150b8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x150b90: 0x2e3102b  sltu        $v0, $s7, $v1
    ctx->pc = 0x150b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x150b94: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x150B94u;
    {
        const bool branch_taken_0x150b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150B94u;
            // 0x150b98: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150b94) {
            ctx->pc = 0x150AA0u;
            runtime->cooperativeGuestYield();
            goto label_150aa0;
        }
    }
    ctx->pc = 0x150B9Cu;
    // 0x150b9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x150b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_150ba0:
    // 0x150ba0: 0x1e48c0  sll         $t1, $fp, 3
    ctx->pc = 0x150ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x150ba4: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x150ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150ba8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x150ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150bac: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x150bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x150bb0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x150bb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150bb4: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x150bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x150bb8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x150bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150bbc: 0x1364818  mult        $t1, $t1, $s6
    ctx->pc = 0x150bbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x150bc0: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x150bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x150bc4: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x150bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x150bc8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x150bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x150bcc: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x150bccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x150bd0: 0xc055900  jal         func_156400
    ctx->pc = 0x150BD0u;
    SET_GPR_U32(ctx, 31, 0x150BD8u);
    ctx->pc = 0x150BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150BD0u;
            // 0x150bd4: 0x494821  addu        $t1, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156400u;
    if (runtime->hasFunction(0x156400u)) {
        auto targetFn = runtime->lookupFunction(0x156400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150BD8u; }
        if (ctx->pc != 0x150BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156400_0x156400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150BD8u; }
        if (ctx->pc != 0x150BD8u) { return; }
    }
    ctx->pc = 0x150BD8u;
    // 0x150bd8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x150bd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150bdc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x150bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x150be0: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x150be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x150be4: 0x26a60018  addiu       $a2, $s5, 0x18
    ctx->pc = 0x150be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x150be8: 0xafa6005c  sw          $a2, 0x5C($sp)
    ctx->pc = 0x150be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 6));
    // 0x150bec: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x150becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x150bf0: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x150bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x150bf4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x150bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x150bf8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x150bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x150bfc: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x150bfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x150c00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150c04: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x150c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x150c08: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x150c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x150c0c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x150c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x150c10: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x150c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x150c14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x150c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x150c18: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x150c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x150c1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x150c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x150c20: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x150C20u;
    {
        const bool branch_taken_0x150c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c20) {
            ctx->pc = 0x150DE8u;
            goto label_150de8;
        }
    }
    ctx->pc = 0x150C28u;
    // 0x150c28: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x150c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x150c2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x150c2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_150c30:
    // 0x150c30: 0xae940000  sw          $s4, 0x0($s4)
    ctx->pc = 0x150c30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 20));
    // 0x150c34: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x150c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x150c38: 0xae940004  sw          $s4, 0x4($s4)
    ctx->pc = 0x150c38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 20));
    // 0x150c3c: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x150c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x150c40: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x150C40u;
    {
        const bool branch_taken_0x150c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150C40u;
            // 0x150c44: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c40) {
            ctx->pc = 0x150DBCu;
            goto label_150dbc;
        }
    }
    ctx->pc = 0x150C48u;
    // 0x150c48: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x150c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x150c4c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x150c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x150c50: 0x45f021  addu        $fp, $v0, $a1
    ctx->pc = 0x150c50u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x150c54: 0x0  nop
    ctx->pc = 0x150c54u;
    // NOP
label_150c58:
    // 0x150c58: 0x8fd70000  lw          $s7, 0x0($fp)
    ctx->pc = 0x150c58u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x150c5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x150c5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c60: 0x86e20040  lh          $v0, 0x40($s7)
    ctx->pc = 0x150c60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 64)));
    // 0x150c64: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x150C64u;
    {
        const bool branch_taken_0x150c64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x150C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150C64u;
            // 0x150c68: 0x96e40040  lhu         $a0, 0x40($s7) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c64) {
            ctx->pc = 0x150C9Cu;
            goto label_150c9c;
        }
    }
    ctx->pc = 0x150C6Cu;
    // 0x150c6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x150c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_150c70:
    // 0x150c70: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x150c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x150c74: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x150c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x150c78: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x150c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x150c7c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x150C7Cu;
    {
        const bool branch_taken_0x150c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150C7Cu;
            // 0x150c80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c7c) {
            ctx->pc = 0x150CA0u;
            goto label_150ca0;
        }
    }
    ctx->pc = 0x150C84u;
    // 0x150c84: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x150c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x150c88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x150c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x150c8c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x150c8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x150c90: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x150c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x150c94: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x150C94u;
    {
        const bool branch_taken_0x150c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150C94u;
            // 0x150c98: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c94) {
            ctx->pc = 0x150C70u;
            runtime->cooperativeGuestYield();
            goto label_150c70;
        }
    }
    ctx->pc = 0x150C9Cu;
label_150c9c:
    // 0x150c9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x150c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150ca0:
    // 0x150ca0: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x150CA0u;
    {
        const bool branch_taken_0x150ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150CA0u;
            // 0x150ca4: 0x8fa20064  lw          $v0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ca0) {
            ctx->pc = 0x150DA4u;
            goto label_150da4;
        }
    }
    ctx->pc = 0x150CA8u;
    // 0x150ca8: 0x86e60040  lh          $a2, 0x40($s7)
    ctx->pc = 0x150ca8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 64)));
    // 0x150cac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x150cacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150cb0: 0x10c0003b  beqz        $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x150CB0u;
    {
        const bool branch_taken_0x150cb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x150CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150CB0u;
            // 0x150cb4: 0xafa60068  sw          $a2, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150cb0) {
            ctx->pc = 0x150DA0u;
            goto label_150da0;
        }
    }
    ctx->pc = 0x150CB8u;
    // 0x150cb8: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x150cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x150cbc: 0x0  nop
    ctx->pc = 0x150cbcu;
    // NOP
label_150cc0:
    // 0x150cc0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x150cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x150cc4: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x150cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x150cc8: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x150cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x150ccc: 0x10a00030  beqz        $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x150CCCu;
    {
        const bool branch_taken_0x150ccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x150CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150CCCu;
            // 0x150cd0: 0x8fa60068  lw          $a2, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ccc) {
            ctx->pc = 0x150D90u;
            goto label_150d90;
        }
    }
    ctx->pc = 0x150CD4u;
    // 0x150cd4: 0x8cb30014  lw          $s3, 0x14($a1)
    ctx->pc = 0x150cd4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x150cd8: 0x1260002d  beqz        $s3, . + 4 + (0x2D << 2)
    ctx->pc = 0x150CD8u;
    {
        const bool branch_taken_0x150cd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x150CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150CD8u;
            // 0x150cdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150cd8) {
            ctx->pc = 0x150D90u;
            goto label_150d90;
        }
    }
    ctx->pc = 0x150CE0u;
    // 0x150ce0: 0xc054228  jal         func_1508A0
    ctx->pc = 0x150CE0u;
    SET_GPR_U32(ctx, 31, 0x150CE8u);
    ctx->pc = 0x150CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150CE0u;
            // 0x150ce4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1508A0u;
    if (runtime->hasFunction(0x1508A0u)) {
        auto targetFn = runtime->lookupFunction(0x1508A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150CE8u; }
        if (ctx->pc != 0x150CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001508a0_0x1508a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150CE8u; }
        if (ctx->pc != 0x150CE8u) { return; }
    }
    ctx->pc = 0x150CE8u;
    // 0x150ce8: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x150CE8u;
    {
        const bool branch_taken_0x150ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150ce8) {
            ctx->pc = 0x150CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x150CE8u;
            // 0x150cec: 0x8fa60068  lw          $a2, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x150D90u;
            goto label_150d90;
        }
    }
    ctx->pc = 0x150CF0u;
    // 0x150cf0: 0x96700014  lhu         $s0, 0x14($s3)
    ctx->pc = 0x150cf0u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x150cf4: 0x9662001a  lhu         $v0, 0x1A($s3)
    ctx->pc = 0x150cf4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x150cf8: 0x8e720038  lw          $s2, 0x38($s3)
    ctx->pc = 0x150cf8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x150cfc: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x150cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x150d00: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x150d00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x150d04: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x150d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x150d08: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x150d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x150d0c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x150d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x150d10: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x150d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150d14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x150d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d1c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x150D1Cu;
    SET_GPR_U32(ctx, 31, 0x150D24u);
    ctx->pc = 0x150D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150D1Cu;
            // 0x150d20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D24u; }
        if (ctx->pc != 0x150D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D24u; }
        if (ctx->pc != 0x150D24u) { return; }
    }
    ctx->pc = 0x150D24u;
    // 0x150d24: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x150d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x150d28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x150d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d2c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x150D2Cu;
    SET_GPR_U32(ctx, 31, 0x150D34u);
    ctx->pc = 0x150D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150D2Cu;
            // 0x150d30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D34u; }
        if (ctx->pc != 0x150D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D34u; }
        if (ctx->pc != 0x150D34u) { return; }
    }
    ctx->pc = 0x150D34u;
    // 0x150d34: 0x92620030  lbu         $v0, 0x30($s3)
    ctx->pc = 0x150d34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x150d38: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x150d38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x150d3c: 0xae710038  sw          $s1, 0x38($s3)
    ctx->pc = 0x150d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 17));
    // 0x150d40: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x150d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x150d44: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x150d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x150d48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x150d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150d4c: 0xa2620030  sb          $v0, 0x30($s3)
    ctx->pc = 0x150d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x150d50: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x150d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x150d54: 0x8c847910  lw          $a0, 0x7910($a0)
    ctx->pc = 0x150d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30992)));
    // 0x150d58: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x150d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x150d5c: 0xafa5004c  sw          $a1, 0x4C($sp)
    ctx->pc = 0x150d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 5));
    // 0x150d60: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x150D60u;
    SET_GPR_U32(ctx, 31, 0x150D68u);
    ctx->pc = 0x150D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150D60u;
            // 0x150d64: 0xa663001c  sh          $v1, 0x1C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D68u; }
        if (ctx->pc != 0x150D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D68u; }
        if (ctx->pc != 0x150D68u) { return; }
    }
    ctx->pc = 0x150D68u;
    // 0x150d68: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x150d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x150d6c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x150d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x150d70: 0xac530008  sw          $s3, 0x8($v0)
    ctx->pc = 0x150d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
    // 0x150d74: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x150d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x150d78: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x150d78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x150d7c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x150d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x150d80: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x150d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x150d84: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x150d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x150d88: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x150d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x150d8c: 0x0  nop
    ctx->pc = 0x150d8cu;
    // NOP
label_150d90:
    // 0x150d90: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x150d90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x150d94: 0x2c6102b  sltu        $v0, $s6, $a2
    ctx->pc = 0x150d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x150d98: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x150D98u;
    {
        const bool branch_taken_0x150d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150D98u;
            // 0x150d9c: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d98) {
            ctx->pc = 0x150CC0u;
            runtime->cooperativeGuestYield();
            goto label_150cc0;
        }
    }
    ctx->pc = 0x150DA0u;
label_150da0:
    // 0x150da0: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x150da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_150da4:
    // 0x150da4: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x150da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x150da8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150dac: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x150dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x150db0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x150db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x150db4: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x150DB4u;
    {
        const bool branch_taken_0x150db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150DB4u;
            // 0x150db8: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150db4) {
            ctx->pc = 0x150C58u;
            runtime->cooperativeGuestYield();
            goto label_150c58;
        }
    }
    ctx->pc = 0x150DBCu;
label_150dbc:
    // 0x150dbc: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x150dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x150dc0: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x150dc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x150dc4: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x150dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x150dc8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x150dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150dcc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x150dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x150dd0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x150dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x150dd4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x150dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x150dd8: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x150dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x150ddc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x150ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x150de0: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x150DE0u;
    {
        const bool branch_taken_0x150de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150DE0u;
            // 0x150de4: 0xafa5006c  sw          $a1, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150de0) {
            ctx->pc = 0x150C30u;
            runtime->cooperativeGuestYield();
            goto label_150c30;
        }
    }
    ctx->pc = 0x150DE8u;
label_150de8:
    // 0x150de8: 0xc04f860  jal         func_13E180
    ctx->pc = 0x150DE8u;
    SET_GPR_U32(ctx, 31, 0x150DF0u);
    ctx->pc = 0x150DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150DE8u;
            // 0x150dec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DF0u; }
        if (ctx->pc != 0x150DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DF0u; }
        if (ctx->pc != 0x150DF0u) { return; }
    }
    ctx->pc = 0x150DF0u;
    // 0x150df0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x150df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150df4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x150df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150df8: 0xafbd0010  sw          $sp, 0x10($sp)
    ctx->pc = 0x150df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
    // 0x150dfc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x150dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x150e00: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x150e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x150e04: 0x105d000b  beq         $v0, $sp, . + 4 + (0xB << 2)
    ctx->pc = 0x150E04u;
    {
        const bool branch_taken_0x150e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x150E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150E04u;
            // 0x150e08: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e04) {
            ctx->pc = 0x150E34u;
            goto label_150e34;
        }
    }
    ctx->pc = 0x150E0Cu;
    // 0x150e0c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x150e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_150e10:
    // 0x150e10: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x150e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x150e14: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x150e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x150e18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x150e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x150e1c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x150E1Cu;
    SET_GPR_U32(ctx, 31, 0x150E24u);
    ctx->pc = 0x150E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150E1Cu;
            // 0x150e20: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E24u; }
        if (ctx->pc != 0x150E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E24u; }
        if (ctx->pc != 0x150E24u) { return; }
    }
    ctx->pc = 0x150E24u;
    // 0x150e24: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x150e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x150e28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x150e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150e2c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x150E2Cu;
    {
        const bool branch_taken_0x150e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x150E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150E2Cu;
            // 0x150e30: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e2c) {
            ctx->pc = 0x150E10u;
            runtime->cooperativeGuestYield();
            goto label_150e10;
        }
    }
    ctx->pc = 0x150E34u;
label_150e34:
    // 0x150e34: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x150e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x150e38: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x150e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x150e3c: 0x26a6000c  addiu       $a2, $s5, 0xC
    ctx->pc = 0x150e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_150e40:
    // 0x150e40: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x150e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x150e44: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x150e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x150e48: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x150E48u;
    {
        const bool branch_taken_0x150e48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x150E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150E48u;
            // 0x150e4c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e48) {
            ctx->pc = 0x150E70u;
            goto label_150e70;
        }
    }
    ctx->pc = 0x150E50u;
    // 0x150e50: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x150e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x150e54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150e58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x150e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150e5c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x150e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x150e60: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x150e60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x150e64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x150E64u;
    {
        const bool branch_taken_0x150e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150E64u;
            // 0x150e68: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e64) {
            ctx->pc = 0x150E74u;
            goto label_150e74;
        }
    }
    ctx->pc = 0x150E6Cu;
    // 0x150e6c: 0x0  nop
    ctx->pc = 0x150e6cu;
    // NOP
label_150e70:
    // 0x150e70: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x150e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_150e74:
    // 0x150e74: 0x6000036  bltz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x150E74u;
    {
        const bool branch_taken_0x150e74 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x150E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150E74u;
            // 0x150e78: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e74) {
            ctx->pc = 0x150F50u;
            goto label_150f50;
        }
    }
    ctx->pc = 0x150E7Cu;
    // 0x150e7c: 0xac900020  sw          $s0, 0x20($a0)
    ctx->pc = 0x150e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 16));
    // 0x150e80: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x150e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x150e84: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x150e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x150e88: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x150e88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x150e8c: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x150e8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x150e90: 0xacc500d0  sw          $a1, 0xD0($a2)
    ctx->pc = 0x150e90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 208), GPR_U32(ctx, 5));
    // 0x150e94: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x150e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x150e98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x150e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x150e9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150ea0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x150ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x150ea4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x150ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x150ea8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x150ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x150eac: 0xc054168  jal         func_1505A0
    ctx->pc = 0x150EACu;
    SET_GPR_U32(ctx, 31, 0x150EB4u);
    ctx->pc = 0x150EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150EACu;
            // 0x150eb0: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1505A0u;
    if (runtime->hasFunction(0x1505A0u)) {
        auto targetFn = runtime->lookupFunction(0x1505A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150EB4u; }
        if (ctx->pc != 0x150EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1505a0_0x150698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150EB4u; }
        if (ctx->pc != 0x150EB4u) { return; }
    }
    ctx->pc = 0x150EB4u;
    // 0x150eb4: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x150eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x150eb8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x150eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x150ebc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x150ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x150ec0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x150ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x150ec4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150ec8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x150ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x150ecc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x150eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x150ed0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x150ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x150ed4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x150ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x150ed8: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x150ED8u;
    {
        const bool branch_taken_0x150ed8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x150EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150ED8u;
            // 0x150edc: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ed8) {
            ctx->pc = 0x150F50u;
            goto label_150f50;
        }
    }
    ctx->pc = 0x150EE0u;
    // 0x150ee0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x150ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x150ee4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x150ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150ee8: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x150EE8u;
    {
        const bool branch_taken_0x150ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x150EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150EE8u;
            // 0x150eec: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ee8) {
            ctx->pc = 0x150F50u;
            goto label_150f50;
        }
    }
    ctx->pc = 0x150EF0u;
label_150ef0:
    // 0x150ef0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x150ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x150ef4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x150ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x150ef8: 0x94500014  lhu         $s0, 0x14($v0)
    ctx->pc = 0x150ef8u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x150efc: 0x9443001a  lhu         $v1, 0x1A($v0)
    ctx->pc = 0x150efcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x150f00: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x150f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x150f04: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x150f04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x150f08: 0x8c510038  lw          $s1, 0x38($v0)
    ctx->pc = 0x150f08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x150f0c: 0x8c920038  lw          $s2, 0x38($a0)
    ctx->pc = 0x150f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x150f10: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x150f10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x150f14: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x150f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x150f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x150f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f20: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x150F20u;
    SET_GPR_U32(ctx, 31, 0x150F28u);
    ctx->pc = 0x150F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F20u;
            // 0x150f24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F28u; }
        if (ctx->pc != 0x150F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F28u; }
        if (ctx->pc != 0x150F28u) { return; }
    }
    ctx->pc = 0x150F28u;
    // 0x150f28: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x150f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x150f2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x150f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f30: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x150F30u;
    SET_GPR_U32(ctx, 31, 0x150F38u);
    ctx->pc = 0x150F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F30u;
            // 0x150f34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F38u; }
        if (ctx->pc != 0x150F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F38u; }
        if (ctx->pc != 0x150F38u) { return; }
    }
    ctx->pc = 0x150F38u;
    // 0x150f38: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x150f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x150f3c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x150f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150f40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x150f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150f44: 0x1443ffea  bne         $v0, $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x150F44u;
    {
        const bool branch_taken_0x150f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x150F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150F44u;
            // 0x150f48: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f44) {
            ctx->pc = 0x150EF0u;
            runtime->cooperativeGuestYield();
            goto label_150ef0;
        }
    }
    ctx->pc = 0x150F4Cu;
    // 0x150f4c: 0x0  nop
    ctx->pc = 0x150f4cu;
    // NOP
label_150f50:
    // 0x150f50: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x150f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x150f54: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x150f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x150f58: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x150f58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x150f5c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x150f5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x150f60: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x150f60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x150f64: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x150f64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x150f68: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x150f68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x150f6c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x150f6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x150f70: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x150f70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x150f74: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x150f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x150f78: 0x3e00008  jr          $ra
    ctx->pc = 0x150F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150F78u;
            // 0x150f7c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150AA0u: goto label_150aa0;
            case 0x150AB8u: goto label_150ab8;
            case 0x150AE4u: goto label_150ae4;
            case 0x150AE8u: goto label_150ae8;
            case 0x150B00u: goto label_150b00;
            case 0x150B78u: goto label_150b78;
            case 0x150B7Cu: goto label_150b7c;
            case 0x150B88u: goto label_150b88;
            case 0x150B8Cu: goto label_150b8c;
            case 0x150BA0u: goto label_150ba0;
            case 0x150C30u: goto label_150c30;
            case 0x150C58u: goto label_150c58;
            case 0x150C70u: goto label_150c70;
            case 0x150C9Cu: goto label_150c9c;
            case 0x150CA0u: goto label_150ca0;
            case 0x150CC0u: goto label_150cc0;
            case 0x150D90u: goto label_150d90;
            case 0x150DA0u: goto label_150da0;
            case 0x150DA4u: goto label_150da4;
            case 0x150DBCu: goto label_150dbc;
            case 0x150DE8u: goto label_150de8;
            case 0x150E10u: goto label_150e10;
            case 0x150E34u: goto label_150e34;
            case 0x150E40u: goto label_150e40;
            case 0x150E70u: goto label_150e70;
            case 0x150E74u: goto label_150e74;
            case 0x150EF0u: goto label_150ef0;
            case 0x150F50u: goto label_150f50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x150F80u;
}
