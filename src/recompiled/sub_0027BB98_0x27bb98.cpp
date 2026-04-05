#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027BB98
// Address: 0x27bb98 - 0x27bcd8
void sub_0027BB98_0x27bb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BB98_0x27bb98");
#endif

    ctx->pc = 0x27bb98u;

    // 0x27bb98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27bb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27bb9c: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x27bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x27bba0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27bba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27bba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27bba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bba8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27bba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27bbac: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x27bbacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27bbb0: 0x3c120031  lui         $s2, 0x31
    ctx->pc = 0x27bbb0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49 << 16));
    // 0x27bbb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27bbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27bbb8: 0x2642d008  addiu       $v0, $s2, -0x2FF8
    ctx->pc = 0x27bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955016));
    // 0x27bbbc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27bbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27bbc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27bbc4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27bbc8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27BBC8u;
    {
        const bool branch_taken_0x27bbc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bbc8) {
            ctx->pc = 0x27BBE0u;
            goto label_27bbe0;
        }
    }
    ctx->pc = 0x27BBD0u;
    // 0x27bbd0: 0xc09ef54  jal         func_27BD50
    ctx->pc = 0x27BBD0u;
    SET_GPR_U32(ctx, 31, 0x27BBD8u);
    ctx->pc = 0x27BBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BBD0u;
            // 0x27bbd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BD50u;
    if (runtime->hasFunction(0x27BD50u)) {
        auto targetFn = runtime->lookupFunction(0x27BD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BBD8u; }
        if (ctx->pc != 0x27BBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027BD50_0x27bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BBD8u; }
        if (ctx->pc != 0x27BBD8u) { return; }
    }
    ctx->pc = 0x27BBD8u;
    // 0x27bbd8: 0x4400039  bltz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x27BBD8u;
    {
        const bool branch_taken_0x27bbd8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27BBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BBD8u;
            // 0x27bbdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bbd8) {
            ctx->pc = 0x27BCC0u;
            goto label_27bcc0;
        }
    }
    ctx->pc = 0x27BBE0u;
label_27bbe0:
    // 0x27bbe0: 0xc09ef9e  jal         func_27BE78
    ctx->pc = 0x27BBE0u;
    SET_GPR_U32(ctx, 31, 0x27BBE8u);
    ctx->pc = 0x27BBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BBE0u;
            // 0x27bbe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BE78u;
    if (runtime->hasFunction(0x27BE78u)) {
        auto targetFn = runtime->lookupFunction(0x27BE78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BBE8u; }
        if (ctx->pc != 0x27BBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027BE78_0x27be78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BBE8u; }
        if (ctx->pc != 0x27BBE8u) { return; }
    }
    ctx->pc = 0x27BBE8u;
    // 0x27bbe8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27BBE8u;
    {
        const bool branch_taken_0x27bbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BBE8u;
            // 0x27bbec: 0x2402c000  addiu       $v0, $zero, -0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bbe8) {
            ctx->pc = 0x27BC24u;
            goto label_27bc24;
        }
    }
    ctx->pc = 0x27BBF0u;
    // 0x27bbf0: 0xc09ef84  jal         func_27BE10
    ctx->pc = 0x27BBF0u;
    SET_GPR_U32(ctx, 31, 0x27BBF8u);
    ctx->pc = 0x27BBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BBF0u;
            // 0x27bbf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BE10u;
    if (runtime->hasFunction(0x27BE10u)) {
        auto targetFn = runtime->lookupFunction(0x27BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BBF8u; }
        if (ctx->pc != 0x27BBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27be10_0x27be78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BBF8u; }
        if (ctx->pc != 0x27BBF8u) { return; }
    }
    ctx->pc = 0x27BBF8u;
    // 0x27bbf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27bbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bbfc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x27bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27bc00: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27BC00u;
    {
        const bool branch_taken_0x27bc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bc00) {
            ctx->pc = 0x27BC04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC00u;
            // 0x27bc04: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27BC1Cu;
            goto label_27bc1c;
        }
    }
    ctx->pc = 0x27BC08u;
    // 0x27bc08: 0xc09ef54  jal         func_27BD50
    ctx->pc = 0x27BC08u;
    SET_GPR_U32(ctx, 31, 0x27BC10u);
    ctx->pc = 0x27BC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC08u;
            // 0x27bc0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BD50u;
    if (runtime->hasFunction(0x27BD50u)) {
        auto targetFn = runtime->lookupFunction(0x27BD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BC10u; }
        if (ctx->pc != 0x27BC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027BD50_0x27bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BC10u; }
        if (ctx->pc != 0x27BC10u) { return; }
    }
    ctx->pc = 0x27BC10u;
    // 0x27bc10: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x27BC10u;
    {
        const bool branch_taken_0x27bc10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27BC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC10u;
            // 0x27bc14: 0x24020334  addiu       $v0, $zero, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc10) {
            ctx->pc = 0x27BC9Cu;
            goto label_27bc9c;
        }
    }
    ctx->pc = 0x27BC18u;
    // 0x27bc18: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x27bc18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_27bc1c:
    // 0x27bc1c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x27BC1Cu;
    {
        const bool branch_taken_0x27bc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC1Cu;
            // 0x27bc20: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc1c) {
            ctx->pc = 0x27BCBCu;
            goto label_27bcbc;
        }
    }
    ctx->pc = 0x27BC24u;
label_27bc24:
    // 0x27bc24: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x27bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27bc28: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x27bc28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x27bc2c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x27bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x27bc30: 0x34843fff  ori         $a0, $a0, 0x3FFF
    ctx->pc = 0x27bc30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16383);
    // 0x27bc34: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x27bc34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x27bc38: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x27bc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27bc3c: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x27bc3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x27bc40: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x27bc40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x27bc44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x27bc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x27bc48: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x27bc48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x27bc4c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x27bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x27bc50: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x27bc50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x27bc54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27bc58: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x27bc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x27bc5c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x27bc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x27bc60: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x27bc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x27bc64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27bc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27bc68: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x27bc68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x27bc6c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x27bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x27bc70: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x27bc70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x27bc74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bc78: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x27bc78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x27bc7c: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x27bc7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x27bc80: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x27bc80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x27bc84: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x27bc84u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x27bc88: 0xc09edb4  jal         func_27B6D0
    ctx->pc = 0x27BC88u;
    SET_GPR_U32(ctx, 31, 0x27BC90u);
    ctx->pc = 0x27BC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC88u;
            // 0x27bc8c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B6D0u;
    if (runtime->hasFunction(0x27B6D0u)) {
        auto targetFn = runtime->lookupFunction(0x27B6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BC90u; }
        if (ctx->pc != 0x27BC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B6D0_0x27b6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BC90u; }
        if (ctx->pc != 0x27BC90u) { return; }
    }
    ctx->pc = 0x27BC90u;
    // 0x27bc90: 0x443000b  bgezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27BC90u;
    {
        const bool branch_taken_0x27bc90 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27bc90) {
            ctx->pc = 0x27BC94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC90u;
            // 0x27bc94: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27BCC0u;
            goto label_27bcc0;
        }
    }
    ctx->pc = 0x27BC98u;
    // 0x27bc98: 0x24020334  addiu       $v0, $zero, 0x334
    ctx->pc = 0x27bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
label_27bc9c:
    // 0x27bc9c: 0x2643d008  addiu       $v1, $s2, -0x2FF8
    ctx->pc = 0x27bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955016));
    // 0x27bca0: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x27bca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27bca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27bca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bca8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27bcac: 0xc09ef36  jal         func_27BCD8
    ctx->pc = 0x27BCACu;
    SET_GPR_U32(ctx, 31, 0x27BCB4u);
    ctx->pc = 0x27BCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BCACu;
            // 0x27bcb0: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BCD8u;
    if (runtime->hasFunction(0x27BCD8u)) {
        auto targetFn = runtime->lookupFunction(0x27BCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BCB4u; }
        if (ctx->pc != 0x27BCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27bcd8_0x27bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BCB4u; }
        if (ctx->pc != 0x27BCB4u) { return; }
    }
    ctx->pc = 0x27BCB4u;
    // 0x27bcb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27BCB4u;
    {
        const bool branch_taken_0x27bcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BCB4u;
            // 0x27bcb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bcb4) {
            ctx->pc = 0x27BCC0u;
            goto label_27bcc0;
        }
    }
    ctx->pc = 0x27BCBCu;
label_27bcbc:
    // 0x27bcbc: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x27bcbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_27bcc0:
    // 0x27bcc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27bcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27bcc4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27bcc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27bcc8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27bcc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bccc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27bcccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x27BCD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BCD0u;
            // 0x27bcd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27BBE0u: goto label_27bbe0;
            case 0x27BC1Cu: goto label_27bc1c;
            case 0x27BC24u: goto label_27bc24;
            case 0x27BC9Cu: goto label_27bc9c;
            case 0x27BCBCu: goto label_27bcbc;
            case 0x27BCC0u: goto label_27bcc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27BCD8u;
}
