#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182EE8
// Address: 0x182ee8 - 0x182f68
void sub_00182EE8_0x182ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182EE8_0x182ee8");
#endif

    ctx->pc = 0x182ee8u;

    // 0x182ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182eec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182ef0: 0xc09e78c  jal         func_279E30
    ctx->pc = 0x182EF0u;
    SET_GPR_U32(ctx, 31, 0x182EF8u);
    ctx->pc = 0x279E30u;
    if (runtime->hasFunction(0x279E30u)) {
        auto targetFn = runtime->lookupFunction(0x279E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182EF8u; }
        if (ctx->pc != 0x182EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279E30_0x279e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182EF8u; }
        if (ctx->pc != 0x182EF8u) { return; }
    }
    ctx->pc = 0x182EF8u;
    // 0x182ef8: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x182ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x182efc: 0xc09e77c  jal         func_279DF0
    ctx->pc = 0x182EFCu;
    SET_GPR_U32(ctx, 31, 0x182F04u);
    ctx->pc = 0x182F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182EFCu;
            // 0x182f00: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279DF0u;
    if (runtime->hasFunction(0x279DF0u)) {
        auto targetFn = runtime->lookupFunction(0x279DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F04u; }
        if (ctx->pc != 0x182F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279DF0_0x279df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F04u; }
        if (ctx->pc != 0x182F04u) { return; }
    }
    ctx->pc = 0x182F04u;
    // 0x182f04: 0xc0a518a  jal         func_294628
    ctx->pc = 0x182F04u;
    SET_GPR_U32(ctx, 31, 0x182F0Cu);
    ctx->pc = 0x182F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182F04u;
            // 0x182f08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294628u;
    if (runtime->hasFunction(0x294628u)) {
        auto targetFn = runtime->lookupFunction(0x294628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F0Cu; }
        if (ctx->pc != 0x182F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294628_0x294628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F0Cu; }
        if (ctx->pc != 0x182F0Cu) { return; }
    }
    ctx->pc = 0x182F0Cu;
    // 0x182f0c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x182f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x182f10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x182f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f14: 0xc0a4e48  jal         func_293920
    ctx->pc = 0x182F14u;
    SET_GPR_U32(ctx, 31, 0x182F1Cu);
    ctx->pc = 0x182F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182F14u;
            // 0x182f18: 0x8c45c7c0  lw          $a1, -0x3840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293920u;
    if (runtime->hasFunction(0x293920u)) {
        auto targetFn = runtime->lookupFunction(0x293920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F1Cu; }
        if (ctx->pc != 0x182F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293920_0x293930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F1Cu; }
        if (ctx->pc != 0x182F1Cu) { return; }
    }
    ctx->pc = 0x182F1Cu;
    // 0x182f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182f20: 0x3e00008  jr          $ra
    ctx->pc = 0x182F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182F20u;
            // 0x182f24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182F28u;
    // 0x182f28: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x182f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x182f2c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x182f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x182f30: 0x8c62c7d8  lw          $v0, -0x3828($v1)
    ctx->pc = 0x182f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952920)));
    // 0x182f34: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x182f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x182f38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x182f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x182f3c: 0xac62c7d8  sw          $v0, -0x3828($v1)
    ctx->pc = 0x182f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952920), GPR_U32(ctx, 2));
    // 0x182f40: 0x8c82c7d4  lw          $v0, -0x382C($a0)
    ctx->pc = 0x182f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952916)));
    // 0x182f44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x182f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x182f48: 0xac82c7d4  sw          $v0, -0x382C($a0)
    ctx->pc = 0x182f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952916), GPR_U32(ctx, 2));
    // 0x182f4c: 0x8ca24f58  lw          $v0, 0x4F58($a1)
    ctx->pc = 0x182f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20312)));
    // 0x182f50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x182f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x182f54: 0xaca24f58  sw          $v0, 0x4F58($a1)
    ctx->pc = 0x182f54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20312), GPR_U32(ctx, 2));
    // 0x182f58: 0xf  sync
    ctx->pc = 0x182f58u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x182f5c: 0x42000038  ei
    ctx->pc = 0x182f5cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x182f60: 0x3e00008  jr          $ra
    ctx->pc = 0x182F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182F60u;
            // 0x182f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182F68u;
}
