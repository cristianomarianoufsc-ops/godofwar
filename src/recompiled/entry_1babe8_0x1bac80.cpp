#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1babe8
// Address: 0x1babe8 - 0x1bac80
void entry_1babe8_0x1bac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1babe8_0x1bac80");
#endif

    ctx->pc = 0x1babe8u;

    // 0x1babe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1babe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1babec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1babecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1babf0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1babf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1babf4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1babf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1babf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1babf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1babfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1babfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac00: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1bac00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac04: 0x8c44cc58  lw          $a0, -0x33A8($v0)
    ctx->pc = 0x1bac04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954072)));
    // 0x1bac08: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bac08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1bac0c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1bac0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bac14: 0xc0619c4  jal         func_186710
    ctx->pc = 0x1BAC14u;
    SET_GPR_U32(ctx, 31, 0x1BAC1Cu);
    ctx->pc = 0x1BAC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC14u;
            // 0x1bac18: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186710u;
    if (runtime->hasFunction(0x186710u)) {
        auto targetFn = runtime->lookupFunction(0x186710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC1Cu; }
        if (ctx->pc != 0x1BAC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186710_0x186710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC1Cu; }
        if (ctx->pc != 0x1BAC1Cu) { return; }
    }
    ctx->pc = 0x1BAC1Cu;
    // 0x1bac1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bac1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac20: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bac24: 0xc04f856  jal         func_13E158
    ctx->pc = 0x1BAC24u;
    SET_GPR_U32(ctx, 31, 0x1BAC2Cu);
    ctx->pc = 0x1BAC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC24u;
            // 0x1bac28: 0x8c44f198  lw          $a0, -0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC2Cu; }
        if (ctx->pc != 0x1BAC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC2Cu; }
        if (ctx->pc != 0x1BAC2Cu) { return; }
    }
    ctx->pc = 0x1BAC2Cu;
    // 0x1bac2c: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x1bac2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1bac30: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1BAC30u;
    SET_GPR_U32(ctx, 31, 0x1BAC38u);
    ctx->pc = 0x1BAC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC30u;
            // 0x1bac34: 0x26100300  addiu       $s0, $s0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC38u; }
        if (ctx->pc != 0x1BAC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC38u; }
        if (ctx->pc != 0x1BAC38u) { return; }
    }
    ctx->pc = 0x1BAC38u;
    // 0x1bac38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bac38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bac3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac40: 0xc04f78a  jal         func_13DE28
    ctx->pc = 0x1BAC40u;
    SET_GPR_U32(ctx, 31, 0x1BAC48u);
    ctx->pc = 0x1BAC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC40u;
            // 0x1bac44: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DE28u;
    if (runtime->hasFunction(0x13DE28u)) {
        auto targetFn = runtime->lookupFunction(0x13DE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC48u; }
        if (ctx->pc != 0x1BAC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DE28_0x13de28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC48u; }
        if (ctx->pc != 0x1BAC48u) { return; }
    }
    ctx->pc = 0x1BAC48u;
    // 0x1bac48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bac48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bac4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac50: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1bac50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bac54: 0xc04f5c4  jal         func_13D710
    ctx->pc = 0x1BAC54u;
    SET_GPR_U32(ctx, 31, 0x1BAC5Cu);
    ctx->pc = 0x1BAC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC54u;
            // 0x1bac58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D710u;
    if (runtime->hasFunction(0x13D710u)) {
        auto targetFn = runtime->lookupFunction(0x13D710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC5Cu; }
        if (ctx->pc != 0x1BAC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13d710_0x13d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC5Cu; }
        if (ctx->pc != 0x1BAC5Cu) { return; }
    }
    ctx->pc = 0x1BAC5Cu;
    // 0x1bac5c: 0xc04f860  jal         func_13E180
    ctx->pc = 0x1BAC5Cu;
    SET_GPR_U32(ctx, 31, 0x1BAC64u);
    ctx->pc = 0x1BAC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC5Cu;
            // 0x1bac60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC64u; }
        if (ctx->pc != 0x1BAC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC64u; }
        if (ctx->pc != 0x1BAC64u) { return; }
    }
    ctx->pc = 0x1BAC64u;
    // 0x1bac64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bac64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac68: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bac68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bac6c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1bac6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bac70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bac70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bac74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bac74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bac78: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC78u;
            // 0x1bac7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAC80u;
}
