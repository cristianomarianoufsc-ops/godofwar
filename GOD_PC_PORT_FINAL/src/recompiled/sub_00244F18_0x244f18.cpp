#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244F18
// Address: 0x244f18 - 0x244f98
void sub_00244F18_0x244f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244F18_0x244f18");
#endif

    ctx->pc = 0x244f18u;

    // 0x244f18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244f1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x244f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x244f20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x244f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x244f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244f28: 0xc096408  jal         func_259020
    ctx->pc = 0x244F28u;
    SET_GPR_U32(ctx, 31, 0x244F30u);
    ctx->pc = 0x244F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244F28u;
            // 0x244f2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259020u;
    if (runtime->hasFunction(0x259020u)) {
        auto targetFn = runtime->lookupFunction(0x259020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F30u; }
        if (ctx->pc != 0x244F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259020_0x259038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F30u; }
        if (ctx->pc != 0x244F30u) { return; }
    }
    ctx->pc = 0x244F30u;
    // 0x244f30: 0x261101f0  addiu       $s1, $s0, 0x1F0
    ctx->pc = 0x244f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x244f34: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x244f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x244f38: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x244f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x244f3c: 0x24428868  addiu       $v0, $v0, -0x7798
    ctx->pc = 0x244f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936680));
    // 0x244f40: 0xc075768  jal         func_1D5DA0
    ctx->pc = 0x244F40u;
    SET_GPR_U32(ctx, 31, 0x244F48u);
    ctx->pc = 0x244F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244F40u;
            // 0x244f44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DA0u;
    if (runtime->hasFunction(0x1D5DA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F48u; }
        if (ctx->pc != 0x244F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5DA0_0x1d5da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F48u; }
        if (ctx->pc != 0x244F48u) { return; }
    }
    ctx->pc = 0x244F48u;
    // 0x244f48: 0xc096402  jal         func_259008
    ctx->pc = 0x244F48u;
    SET_GPR_U32(ctx, 31, 0x244F50u);
    ctx->pc = 0x244F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244F48u;
            // 0x244f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F50u; }
        if (ctx->pc != 0x244F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F50u; }
        if (ctx->pc != 0x244F50u) { return; }
    }
    ctx->pc = 0x244F50u;
    // 0x244f50: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x244f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x244f54: 0x260401f4  addiu       $a0, $s0, 0x1F4
    ctx->pc = 0x244f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 500));
    // 0x244f58: 0x24421e60  addiu       $v0, $v0, 0x1E60
    ctx->pc = 0x244f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7776));
    // 0x244f5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x244f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244f60: 0xc096a64  jal         func_25A990
    ctx->pc = 0x244F60u;
    SET_GPR_U32(ctx, 31, 0x244F68u);
    ctx->pc = 0x244F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244F60u;
            // 0x244f64: 0xae0201f0  sw          $v0, 0x1F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A990u;
    if (runtime->hasFunction(0x25A990u)) {
        auto targetFn = runtime->lookupFunction(0x25A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F68u; }
        if (ctx->pc != 0x244F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A990_0x25a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F68u; }
        if (ctx->pc != 0x244F68u) { return; }
    }
    ctx->pc = 0x244F68u;
    // 0x244f68: 0x26040214  addiu       $a0, $s0, 0x214
    ctx->pc = 0x244f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 532));
    // 0x244f6c: 0xc096a78  jal         func_25A9E0
    ctx->pc = 0x244F6Cu;
    SET_GPR_U32(ctx, 31, 0x244F74u);
    ctx->pc = 0x244F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244F6Cu;
            // 0x244f70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A9E0u;
    if (runtime->hasFunction(0x25A9E0u)) {
        auto targetFn = runtime->lookupFunction(0x25A9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F74u; }
        if (ctx->pc != 0x244F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A9E0_0x25a9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F74u; }
        if (ctx->pc != 0x244F74u) { return; }
    }
    ctx->pc = 0x244F74u;
    // 0x244f74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x244f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244f78: 0xc096a8a  jal         func_25AA28
    ctx->pc = 0x244F78u;
    SET_GPR_U32(ctx, 31, 0x244F80u);
    ctx->pc = 0x244F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244F78u;
            // 0x244f7c: 0x26040220  addiu       $a0, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25AA28u;
    if (runtime->hasFunction(0x25AA28u)) {
        auto targetFn = runtime->lookupFunction(0x25AA28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F80u; }
        if (ctx->pc != 0x244F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025AA28_0x25aa28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F80u; }
        if (ctx->pc != 0x244F80u) { return; }
    }
    ctx->pc = 0x244F80u;
    // 0x244f80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244f84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x244f84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244f88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x244f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244f90: 0x3e00008  jr          $ra
    ctx->pc = 0x244F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244F90u;
            // 0x244f94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244F98u;
}
