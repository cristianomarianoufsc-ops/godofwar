#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022CED8
// Address: 0x22ced8 - 0x22cf40
void sub_0022CED8_0x22ced8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CED8_0x22ced8");
#endif

    ctx->pc = 0x22ced8u;

    // 0x22ced8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ced8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22cedc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x22cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x22cee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22cee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22cee4: 0x24844f90  addiu       $a0, $a0, 0x4F90
    ctx->pc = 0x22cee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20368));
    // 0x22cee8: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x22CEE8u;
    SET_GPR_U32(ctx, 31, 0x22CEF0u);
    ctx->pc = 0x22CEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CEE8u;
            // 0x22ceec: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CEF0u; }
        if (ctx->pc != 0x22CEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CEF0u; }
        if (ctx->pc != 0x22CEF0u) { return; }
    }
    ctx->pc = 0x22CEF0u;
    // 0x22cef0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x22cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x22cef4: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x22cef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x22cef8: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x22CEF8u;
    SET_GPR_U32(ctx, 31, 0x22CF00u);
    ctx->pc = 0x22CEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CEF8u;
            // 0x22cefc: 0x24845020  addiu       $a0, $a0, 0x5020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF00u; }
        if (ctx->pc != 0x22CF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF00u; }
        if (ctx->pc != 0x22CF00u) { return; }
    }
    ctx->pc = 0x22CF00u;
    // 0x22cf00: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x22cf00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x22cf04: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x22cf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x22cf08: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x22CF08u;
    SET_GPR_U32(ctx, 31, 0x22CF10u);
    ctx->pc = 0x22CF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF08u;
            // 0x22cf0c: 0x248450e0  addiu       $a0, $a0, 0x50E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF10u; }
        if (ctx->pc != 0x22CF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF10u; }
        if (ctx->pc != 0x22CF10u) { return; }
    }
    ctx->pc = 0x22CF10u;
    // 0x22cf10: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x22cf10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x22cf14: 0x240501c4  addiu       $a1, $zero, 0x1C4
    ctx->pc = 0x22cf14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x22cf18: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x22CF18u;
    SET_GPR_U32(ctx, 31, 0x22CF20u);
    ctx->pc = 0x22CF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF18u;
            // 0x22cf1c: 0x248451d0  addiu       $a0, $a0, 0x51D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF20u; }
        if (ctx->pc != 0x22CF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF20u; }
        if (ctx->pc != 0x22CF20u) { return; }
    }
    ctx->pc = 0x22CF20u;
    // 0x22cf20: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x22cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x22cf24: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x22cf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x22cf28: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x22CF28u;
    SET_GPR_U32(ctx, 31, 0x22CF30u);
    ctx->pc = 0x22CF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF28u;
            // 0x22cf2c: 0x24845398  addiu       $a0, $a0, 0x5398 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF30u; }
        if (ctx->pc != 0x22CF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF30u; }
        if (ctx->pc != 0x22CF30u) { return; }
    }
    ctx->pc = 0x22CF30u;
    // 0x22cf30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22cf30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cf34: 0x3e00008  jr          $ra
    ctx->pc = 0x22CF34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF34u;
            // 0x22cf38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22CF3Cu;
    // 0x22cf3c: 0x0  nop
    ctx->pc = 0x22cf3cu;
    // NOP
}
