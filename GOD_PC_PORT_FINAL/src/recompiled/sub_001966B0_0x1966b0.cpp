#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001966B0
// Address: 0x1966b0 - 0x196748
void sub_001966B0_0x1966b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001966B0_0x1966b0");
#endif

    ctx->pc = 0x1966b0u;

    // 0x1966b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1966b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1966b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1966b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1966b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1966b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1966bc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1966bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1966c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1966c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1966c4: 0x248438d8  addiu       $a0, $a0, 0x38D8
    ctx->pc = 0x1966c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14552));
    // 0x1966c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1966c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1966cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1966ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1966d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1966d4: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1966d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1966d8: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1966d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1966dc: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1966dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x1966e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1966e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1966e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1966e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1966e8: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x1966e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1966ec: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1966ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1966f0: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1966F0u;
    SET_GPR_U32(ctx, 31, 0x1966F8u);
    ctx->pc = 0x1966F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1966F0u;
            // 0x1966f4: 0x8c50001c  lw          $s0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1966F8u; }
        if (ctx->pc != 0x1966F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1966F8u; }
        if (ctx->pc != 0x1966F8u) { return; }
    }
    ctx->pc = 0x1966F8u;
    // 0x1966f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1966f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1966fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196700: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x196700u;
    SET_GPR_U32(ctx, 31, 0x196708u);
    ctx->pc = 0x196704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196700u;
            // 0x196704: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196708u; }
        if (ctx->pc != 0x196708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196708u; }
        if (ctx->pc != 0x196708u) { return; }
    }
    ctx->pc = 0x196708u;
    // 0x196708: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x196708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x19670c: 0xa622505c  sh          $v0, 0x505C($s1)
    ctx->pc = 0x19670cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20572), (uint16_t)GPR_U32(ctx, 2));
    // 0x196710: 0x248438e8  addiu       $a0, $a0, 0x38E8
    ctx->pc = 0x196710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14568));
    // 0x196714: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x196714u;
    SET_GPR_U32(ctx, 31, 0x19671Cu);
    ctx->pc = 0x196718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196714u;
            // 0x196718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19671Cu; }
        if (ctx->pc != 0x19671Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19671Cu; }
        if (ctx->pc != 0x19671Cu) { return; }
    }
    ctx->pc = 0x19671Cu;
    // 0x19671c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19671cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196720: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196724: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x196724u;
    SET_GPR_U32(ctx, 31, 0x19672Cu);
    ctx->pc = 0x196728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196724u;
            // 0x196728: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19672Cu; }
        if (ctx->pc != 0x19672Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19672Cu; }
        if (ctx->pc != 0x19672Cu) { return; }
    }
    ctx->pc = 0x19672Cu;
    // 0x19672c: 0xa642505e  sh          $v0, 0x505E($s2)
    ctx->pc = 0x19672cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20574), (uint16_t)GPR_U32(ctx, 2));
    // 0x196730: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x196730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196734: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x196734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196738: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x196738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19673c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19673cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196740: 0x3e00008  jr          $ra
    ctx->pc = 0x196740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196740u;
            // 0x196744: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196748u;
}
