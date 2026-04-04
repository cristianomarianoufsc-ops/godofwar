#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1389d8
// Address: 0x1389d8 - 0x138cb0
void entry_1389d8_0x138cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1389d8_0x138cb0");
#endif

    ctx->pc = 0x1389d8u;

    // 0x1389d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1389d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1389dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1389dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1389e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1389e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1389e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1389e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1389e8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1389e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1389ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1389ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1389f0: 0xc09adb4  jal         func_26B6D0
    ctx->pc = 0x1389F0u;
    SET_GPR_U32(ctx, 31, 0x1389F8u);
    ctx->pc = 0x1389F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1389F0u;
            // 0x1389f4: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B6D0u;
    if (runtime->hasFunction(0x26B6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1389F8u; }
        if (ctx->pc != 0x1389F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B6D0_0x26b6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1389F8u; }
        if (ctx->pc != 0x1389F8u) { return; }
    }
    ctx->pc = 0x1389F8u;
    // 0x1389f8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1389f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1389fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1389FCu;
    {
        const bool branch_taken_0x1389fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1389fc) {
            ctx->pc = 0x138A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1389FCu;
            // 0x138a00: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x138A04u;
            goto label_138a04;
        }
    }
    ctx->pc = 0x138A04u;
label_138a04:
    // 0x138a04: 0xc04f824  jal         func_13E090
    ctx->pc = 0x138A04u;
    SET_GPR_U32(ctx, 31, 0x138A0Cu);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A0Cu; }
        if (ctx->pc != 0x138A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A0Cu; }
        if (ctx->pc != 0x138A0Cu) { return; }
    }
    ctx->pc = 0x138A0Cu;
    // 0x138a0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a10: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x138a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x138a14: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x138A14u;
    SET_GPR_U32(ctx, 31, 0x138A1Cu);
    ctx->pc = 0x138A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138A14u;
            // 0x138a18: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A1Cu; }
        if (ctx->pc != 0x138A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A1Cu; }
        if (ctx->pc != 0x138A1Cu) { return; }
    }
    ctx->pc = 0x138A1Cu;
    // 0x138a1c: 0xae22be4c  sw          $v0, -0x41B4($s1)
    ctx->pc = 0x138a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950476), GPR_U32(ctx, 2));
    // 0x138a20: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x138a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x138a24: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x138A24u;
    {
        const bool branch_taken_0x138a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138a24) {
            ctx->pc = 0x138A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138A24u;
            // 0x138a28: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x138A2Cu;
            goto label_138a2c;
        }
    }
    ctx->pc = 0x138A2Cu;
label_138a2c:
    // 0x138a2c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x138A2Cu;
    SET_GPR_U32(ctx, 31, 0x138A34u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A34u; }
        if (ctx->pc != 0x138A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A34u; }
        if (ctx->pc != 0x138A34u) { return; }
    }
    ctx->pc = 0x138A34u;
    // 0x138a34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a38: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x138a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x138a3c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x138A3Cu;
    SET_GPR_U32(ctx, 31, 0x138A44u);
    ctx->pc = 0x138A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138A3Cu;
            // 0x138a40: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A44u; }
        if (ctx->pc != 0x138A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A44u; }
        if (ctx->pc != 0x138A44u) { return; }
    }
    ctx->pc = 0x138A44u;
    // 0x138a44: 0xc05ea9e  jal         func_17AA78
    ctx->pc = 0x138A44u;
    SET_GPR_U32(ctx, 31, 0x138A4Cu);
    ctx->pc = 0x138A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138A44u;
            // 0x138a48: 0xae02be50  sw          $v0, -0x41B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294950480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AA78u;
    if (runtime->hasFunction(0x17AA78u)) {
        auto targetFn = runtime->lookupFunction(0x17AA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A4Cu; }
        if (ctx->pc != 0x138A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17aa78_0x17aa88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A4Cu; }
        if (ctx->pc != 0x138A4Cu) { return; }
    }
    ctx->pc = 0x138A4Cu;
    // 0x138a4c: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x138a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x138a50: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x138a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x138a54: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x138A54u;
    {
        const bool branch_taken_0x138a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A54u;
            // 0x138a58: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a54) {
            ctx->pc = 0x138A8Cu;
            goto label_138a8c;
        }
    }
    ctx->pc = 0x138A5Cu;
    // 0x138a5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x138a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138a60: 0x24421670  addiu       $v0, $v0, 0x1670
    ctx->pc = 0x138a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5744));
    // 0x138a64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x138a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138a68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x138a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138a6c: 0x400008  jr          $v0
    ctx->pc = 0x138A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138A74u: goto label_138a74;
            case 0x138A80u: goto label_138a80;
            case 0x138A8Cu: goto label_138a8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138A74u;
label_138a74:
    // 0x138a74: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x138a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x138a78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x138A78u;
    {
        const bool branch_taken_0x138a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A78u;
            // 0x138a7c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a78) {
            ctx->pc = 0x138A88u;
            goto label_138a88;
        }
    }
    ctx->pc = 0x138A80u;
label_138a80:
    // 0x138a80: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x138a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x138a84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x138a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_138a88:
    // 0x138a88: 0xac6253d0  sw          $v0, 0x53D0($v1)
    ctx->pc = 0x138a88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21456), GPR_U32(ctx, 2));
label_138a8c:
    // 0x138a8c: 0x8e25be4c  lw          $a1, -0x41B4($s1)
    ctx->pc = 0x138a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950476)));
    // 0x138a90: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x138a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x138a94: 0x8e08be50  lw          $t0, -0x41B0($s0)
    ctx->pc = 0x138a94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950480)));
    // 0x138a98: 0x244253d0  addiu       $v0, $v0, 0x53D0
    ctx->pc = 0x138a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21456));
    // 0x138a9c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x138a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x138aa0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x138aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x138aa4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x138aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x138aa8: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x138aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x138aac: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x138aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x138ab0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x138ab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ab4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x138ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x138ab8: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x138ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x138abc: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x138abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x138ac0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x138ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138ac4: 0xc09b286  jal         func_26CA18
    ctx->pc = 0x138AC4u;
    SET_GPR_U32(ctx, 31, 0x138ACCu);
    ctx->pc = 0x138AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138AC4u;
            // 0x138ac8: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CA18u;
    if (runtime->hasFunction(0x26CA18u)) {
        auto targetFn = runtime->lookupFunction(0x26CA18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138ACCu; }
        if (ctx->pc != 0x138ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CA18_0x26ca18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138ACCu; }
        if (ctx->pc != 0x138ACCu) { return; }
    }
    ctx->pc = 0x138ACCu;
    // 0x138acc: 0x8e24be4c  lw          $a0, -0x41B4($s1)
    ctx->pc = 0x138accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950476)));
    // 0x138ad0: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x138ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x138ad4: 0x8e03be50  lw          $v1, -0x41B0($s0)
    ctx->pc = 0x138ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950480)));
    // 0x138ad8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x138ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x138adc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138ae0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x138ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x138ae4: 0xae24be4c  sw          $a0, -0x41B4($s1)
    ctx->pc = 0x138ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950476), GPR_U32(ctx, 4));
    // 0x138ae8: 0xae03be50  sw          $v1, -0x41B0($s0)
    ctx->pc = 0x138ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950480), GPR_U32(ctx, 3));
    // 0x138aec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x138aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138af0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x138af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138af4: 0x3e00008  jr          $ra
    ctx->pc = 0x138AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138AF4u;
            // 0x138af8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138A04u: goto label_138a04;
            case 0x138A2Cu: goto label_138a2c;
            case 0x138A74u: goto label_138a74;
            case 0x138A80u: goto label_138a80;
            case 0x138A88u: goto label_138a88;
            case 0x138A8Cu: goto label_138a8c;
            case 0x138BA0u: goto label_138ba0;
            case 0x138BE4u: goto label_138be4;
            case 0x138C28u: goto label_138c28;
            case 0x138C6Cu: goto label_138c6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138AFCu;
    // 0x138afc: 0x0  nop
    ctx->pc = 0x138afcu;
    // NOP
    // 0x138b00: 0x8c42e1d0  lw          $v0, -0x1E30($v0)
    ctx->pc = 0x138b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959568)));
    // 0x138b04: 0x0  nop
    ctx->pc = 0x138b04u;
    // NOP
    // 0x138b08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x138b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x138b0c: 0x0  nop
    ctx->pc = 0x138b0cu;
    // NOP
    // 0x138b10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x138b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x138b14: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x138b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x138b18: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x138b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x138b1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x138b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x138b20: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x138b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x138b24: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x138b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x138b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138b2c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x138B2Cu;
    SET_GPR_U32(ctx, 31, 0x138B34u);
    ctx->pc = 0x138B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138B2Cu;
            // 0x138b30: 0x3c11002c  lui         $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B34u; }
        if (ctx->pc != 0x138B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B34u; }
        if (ctx->pc != 0x138B34u) { return; }
    }
    ctx->pc = 0x138B34u;
    // 0x138b34: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x138b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x138b38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b3c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x138b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x138b40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b44: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x138b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x138b48: 0xc04f644  jal         func_13D910
    ctx->pc = 0x138B48u;
    SET_GPR_U32(ctx, 31, 0x138B50u);
    ctx->pc = 0x138B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138B48u;
            // 0x138b4c: 0x3c10002c  lui         $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B50u; }
        if (ctx->pc != 0x138B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B50u; }
        if (ctx->pc != 0x138B50u) { return; }
    }
    ctx->pc = 0x138B50u;
    // 0x138b50: 0x26147920  addiu       $s4, $s0, 0x7920
    ctx->pc = 0x138b50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 31008));
    // 0x138b54: 0xae227910  sw          $v0, 0x7910($s1)
    ctx->pc = 0x138b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30992), GPR_U32(ctx, 2));
    // 0x138b58: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x138b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x138b5c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x138b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x138b60: 0xc05e34e  jal         func_178D38
    ctx->pc = 0x138B60u;
    SET_GPR_U32(ctx, 31, 0x138B68u);
    ctx->pc = 0x138B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138B60u;
            // 0x138b64: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178D38u;
    if (runtime->hasFunction(0x178D38u)) {
        auto targetFn = runtime->lookupFunction(0x178D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B68u; }
        if (ctx->pc != 0x138B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178D38_0x178d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B68u; }
        if (ctx->pc != 0x138B68u) { return; }
    }
    ctx->pc = 0x138B68u;
    // 0x138b68: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x138b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x138b6c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x138b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x138b70: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x138b70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x138b74: 0xc04f824  jal         func_13E090
    ctx->pc = 0x138B74u;
    SET_GPR_U32(ctx, 31, 0x138B7Cu);
    ctx->pc = 0x138B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138B74u;
            // 0x138b78: 0xae037920  sw          $v1, 0x7920($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 31008), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B7Cu; }
        if (ctx->pc != 0x138B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B7Cu; }
        if (ctx->pc != 0x138B7Cu) { return; }
    }
    ctx->pc = 0x138B7Cu;
    // 0x138b7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b80: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x138b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x138b84: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x138B84u;
    SET_GPR_U32(ctx, 31, 0x138B8Cu);
    ctx->pc = 0x138B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138B84u;
            // 0x138b88: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B8Cu; }
        if (ctx->pc != 0x138B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B8Cu; }
        if (ctx->pc != 0x138B8Cu) { return; }
    }
    ctx->pc = 0x138B8Cu;
    // 0x138b8c: 0x8e037920  lw          $v1, 0x7920($s0)
    ctx->pc = 0x138b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31008)));
    // 0x138b90: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x138b90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x138b94: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x138B94u;
    {
        const bool branch_taken_0x138b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138B94u;
            // 0x138b98: 0x8e910004  lw          $s1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b94) {
            ctx->pc = 0x138BE4u;
            goto label_138be4;
        }
    }
    ctx->pc = 0x138B9Cu;
    // 0x138b9c: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x138b9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_138ba0:
    // 0x138ba0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x138BA0u;
    SET_GPR_U32(ctx, 31, 0x138BA8u);
    ctx->pc = 0x138BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138BA0u;
            // 0x138ba4: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138BA8u; }
        if (ctx->pc != 0x138BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138BA8u; }
        if (ctx->pc != 0x138BA8u) { return; }
    }
    ctx->pc = 0x138BA8u;
    // 0x138ba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x138bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x138bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bb8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x138bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x138bbc: 0xc04f644  jal         func_13D910
    ctx->pc = 0x138BBCu;
    SET_GPR_U32(ctx, 31, 0x138BC4u);
    ctx->pc = 0x138BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138BBCu;
            // 0x138bc0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138BC4u; }
        if (ctx->pc != 0x138BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138BC4u; }
        if (ctx->pc != 0x138BC4u) { return; }
    }
    ctx->pc = 0x138BC4u;
    // 0x138bc4: 0x118842  srl         $s1, $s1, 1
    ctx->pc = 0x138bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x138bc8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x138bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x138bcc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x138bccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x138bd0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x138bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x138bd4: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x138bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x138bd8: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x138bd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x138bdc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x138BDCu;
    {
        const bool branch_taken_0x138bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138BDCu;
            // 0x138be0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138bdc) {
            ctx->pc = 0x138BA0u;
            runtime->cooperativeGuestYield();
            goto label_138ba0;
        }
    }
    ctx->pc = 0x138BE4u;
label_138be4:
    // 0x138be4: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x138be4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x138be8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x138be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x138bec: 0x26147930  addiu       $s4, $s0, 0x7930
    ctx->pc = 0x138becu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 31024));
    // 0x138bf0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x138bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x138bf4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x138bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x138bf8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x138bf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bfc: 0xc04f824  jal         func_13E090
    ctx->pc = 0x138BFCu;
    SET_GPR_U32(ctx, 31, 0x138C04u);
    ctx->pc = 0x138C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138BFCu;
            // 0x138c00: 0xae037930  sw          $v1, 0x7930($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 31024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C04u; }
        if (ctx->pc != 0x138C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C04u; }
        if (ctx->pc != 0x138C04u) { return; }
    }
    ctx->pc = 0x138C04u;
    // 0x138c04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c08: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x138c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x138c0c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x138C0Cu;
    SET_GPR_U32(ctx, 31, 0x138C14u);
    ctx->pc = 0x138C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138C0Cu;
            // 0x138c10: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C14u; }
        if (ctx->pc != 0x138C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C14u; }
        if (ctx->pc != 0x138C14u) { return; }
    }
    ctx->pc = 0x138C14u;
    // 0x138c14: 0x8e037930  lw          $v1, 0x7930($s0)
    ctx->pc = 0x138c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31024)));
    // 0x138c18: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x138c18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x138c1c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x138C1Cu;
    {
        const bool branch_taken_0x138c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138C1Cu;
            // 0x138c20: 0x8e910004  lw          $s1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c1c) {
            ctx->pc = 0x138C6Cu;
            goto label_138c6c;
        }
    }
    ctx->pc = 0x138C24u;
    // 0x138c24: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x138c24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_138c28:
    // 0x138c28: 0xc04f824  jal         func_13E090
    ctx->pc = 0x138C28u;
    SET_GPR_U32(ctx, 31, 0x138C30u);
    ctx->pc = 0x138C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138C28u;
            // 0x138c2c: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C30u; }
        if (ctx->pc != 0x138C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C30u; }
        if (ctx->pc != 0x138C30u) { return; }
    }
    ctx->pc = 0x138C30u;
    // 0x138c30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x138c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x138c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c40: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x138c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x138c44: 0xc04f644  jal         func_13D910
    ctx->pc = 0x138C44u;
    SET_GPR_U32(ctx, 31, 0x138C4Cu);
    ctx->pc = 0x138C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138C44u;
            // 0x138c48: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C4Cu; }
        if (ctx->pc != 0x138C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C4Cu; }
        if (ctx->pc != 0x138C4Cu) { return; }
    }
    ctx->pc = 0x138C4Cu;
    // 0x138c4c: 0x118842  srl         $s1, $s1, 1
    ctx->pc = 0x138c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x138c50: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x138c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x138c54: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x138c54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x138c58: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x138c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x138c5c: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x138c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x138c60: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x138c60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x138c64: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x138C64u;
    {
        const bool branch_taken_0x138c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138C64u;
            // 0x138c68: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c64) {
            ctx->pc = 0x138C28u;
            runtime->cooperativeGuestYield();
            goto label_138c28;
        }
    }
    ctx->pc = 0x138C6Cu;
label_138c6c:
    // 0x138c6c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x138c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x138c70: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x138c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x138c74: 0x8c45c4dc  lw          $a1, -0x3B24($v0)
    ctx->pc = 0x138c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952156)));
    // 0x138c78: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x138c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x138c7c: 0x8c63c4e0  lw          $v1, -0x3B20($v1)
    ctx->pc = 0x138c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952160)));
    // 0x138c80: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x138c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x138c84: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x138c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138c88: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x138c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x138c8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x138c8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138c90: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x138c90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138c94: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x138c94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138c9c: 0xac85463c  sw          $a1, 0x463C($a0)
    ctx->pc = 0x138c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17980), GPR_U32(ctx, 5));
    // 0x138ca0: 0xac434640  sw          $v1, 0x4640($v0)
    ctx->pc = 0x138ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17984), GPR_U32(ctx, 3));
    // 0x138ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x138CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138CA4u;
            // 0x138ca8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138A04u: goto label_138a04;
            case 0x138A2Cu: goto label_138a2c;
            case 0x138A74u: goto label_138a74;
            case 0x138A80u: goto label_138a80;
            case 0x138A88u: goto label_138a88;
            case 0x138A8Cu: goto label_138a8c;
            case 0x138BA0u: goto label_138ba0;
            case 0x138BE4u: goto label_138be4;
            case 0x138C28u: goto label_138c28;
            case 0x138C6Cu: goto label_138c6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138CACu;
    // 0x138cac: 0x0  nop
    ctx->pc = 0x138cacu;
    // NOP
}
