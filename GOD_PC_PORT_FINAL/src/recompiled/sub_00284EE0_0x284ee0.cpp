#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00284EE0
// Address: 0x284ee0 - 0x284f30
void sub_00284EE0_0x284ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284EE0_0x284ee0");
#endif

    ctx->pc = 0x284ee0u;

    // 0x284ee0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x284ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x284ee4: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x284ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x284ee8: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x284ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x284eec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x284eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x284ef0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x284ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x284ef4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x284ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x284ef8: 0xc0a1186  jal         func_284618
    ctx->pc = 0x284EF8u;
    SET_GPR_U32(ctx, 31, 0x284F00u);
    ctx->pc = 0x284EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284EF8u;
            // 0x284efc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284618u;
    if (runtime->hasFunction(0x284618u)) {
        auto targetFn = runtime->lookupFunction(0x284618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F00u; }
        if (ctx->pc != 0x284F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_284618_0x2846b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F00u; }
        if (ctx->pc != 0x284F00u) { return; }
    }
    ctx->pc = 0x284F00u;
    // 0x284f00: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x284f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x284f04: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x284f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x284f08: 0xc0a1186  jal         func_284618
    ctx->pc = 0x284F08u;
    SET_GPR_U32(ctx, 31, 0x284F10u);
    ctx->pc = 0x284F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284F08u;
            // 0x284f0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284618u;
    if (runtime->hasFunction(0x284618u)) {
        auto targetFn = runtime->lookupFunction(0x284618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F10u; }
        if (ctx->pc != 0x284F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_284618_0x2846b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F10u; }
        if (ctx->pc != 0x284F10u) { return; }
    }
    ctx->pc = 0x284F10u;
    // 0x284f10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284f14: 0xc0a1372  jal         func_284DC8
    ctx->pc = 0x284F14u;
    SET_GPR_U32(ctx, 31, 0x284F1Cu);
    ctx->pc = 0x284F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284F14u;
            // 0x284f18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284DC8u;
    if (runtime->hasFunction(0x284DC8u)) {
        auto targetFn = runtime->lookupFunction(0x284DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F1Cu; }
        if (ctx->pc != 0x284F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_284dc8_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F1Cu; }
        if (ctx->pc != 0x284F1Cu) { return; }
    }
    ctx->pc = 0x284F1Cu;
    // 0x284f1c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x284f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x284f20: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x284f20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x284f24: 0x3e00008  jr          $ra
    ctx->pc = 0x284F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F24u;
            // 0x284f28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284F2Cu;
    // 0x284f2c: 0x0  nop
    ctx->pc = 0x284f2cu;
    // NOP
}
