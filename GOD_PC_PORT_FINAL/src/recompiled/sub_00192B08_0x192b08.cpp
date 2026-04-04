#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192B08
// Address: 0x192b08 - 0x192b88
void sub_00192B08_0x192b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192B08_0x192b08");
#endif

    ctx->pc = 0x192b08u;

    // 0x192b08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192b0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x192b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x192b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192b14: 0xc05d656  jal         func_175958
    ctx->pc = 0x192B14u;
    SET_GPR_U32(ctx, 31, 0x192B1Cu);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B1Cu; }
        if (ctx->pc != 0x192B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B1Cu; }
        if (ctx->pc != 0x192B1Cu) { return; }
    }
    ctx->pc = 0x192B1Cu;
    // 0x192b1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b20: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x192b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x192b24: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x192b24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x192b28: 0x24a53318  addiu       $a1, $a1, 0x3318
    ctx->pc = 0x192b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13080));
    // 0x192b2c: 0x24c62ad0  addiu       $a2, $a2, 0x2AD0
    ctx->pc = 0x192b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10960));
    // 0x192b30: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x192B30u;
    SET_GPR_U32(ctx, 31, 0x192B38u);
    ctx->pc = 0x192B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192B30u;
            // 0x192b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B38u; }
        if (ctx->pc != 0x192B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B38u; }
        if (ctx->pc != 0x192B38u) { return; }
    }
    ctx->pc = 0x192B38u;
    // 0x192b38: 0xc0645f4  jal         func_1917D0
    ctx->pc = 0x192B38u;
    SET_GPR_U32(ctx, 31, 0x192B40u);
    ctx->pc = 0x1917D0u;
    if (runtime->hasFunction(0x1917D0u)) {
        auto targetFn = runtime->lookupFunction(0x1917D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B40u; }
        if (ctx->pc != 0x192B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001917D0_0x1917d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B40u; }
        if (ctx->pc != 0x192B40u) { return; }
    }
    ctx->pc = 0x192B40u;
    // 0x192b40: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x192b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x192b44: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x192b44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x192b48: 0x24a53328  addiu       $a1, $a1, 0x3328
    ctx->pc = 0x192b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13096));
    // 0x192b4c: 0x24c61df0  addiu       $a2, $a2, 0x1DF0
    ctx->pc = 0x192b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7664));
    // 0x192b50: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x192B50u;
    SET_GPR_U32(ctx, 31, 0x192B58u);
    ctx->pc = 0x192B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192B50u;
            // 0x192b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B58u; }
        if (ctx->pc != 0x192B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B58u; }
        if (ctx->pc != 0x192B58u) { return; }
    }
    ctx->pc = 0x192B58u;
    // 0x192b58: 0xc064844  jal         func_192110
    ctx->pc = 0x192B58u;
    SET_GPR_U32(ctx, 31, 0x192B60u);
    ctx->pc = 0x192110u;
    if (runtime->hasFunction(0x192110u)) {
        auto targetFn = runtime->lookupFunction(0x192110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B60u; }
        if (ctx->pc != 0x192B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192110_0x192110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B60u; }
        if (ctx->pc != 0x192B60u) { return; }
    }
    ctx->pc = 0x192B60u;
    // 0x192b60: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x192b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x192b64: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x192b64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x192b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b6c: 0x24a53338  addiu       $a1, $a1, 0x3338
    ctx->pc = 0x192b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13112));
    // 0x192b70: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x192B70u;
    SET_GPR_U32(ctx, 31, 0x192B78u);
    ctx->pc = 0x192B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192B70u;
            // 0x192b74: 0x24c627d0  addiu       $a2, $a2, 0x27D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B78u; }
        if (ctx->pc != 0x192B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B78u; }
        if (ctx->pc != 0x192B78u) { return; }
    }
    ctx->pc = 0x192B78u;
    // 0x192b78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x192b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192b80: 0x3e00008  jr          $ra
    ctx->pc = 0x192B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192B80u;
            // 0x192b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192B88u;
}
