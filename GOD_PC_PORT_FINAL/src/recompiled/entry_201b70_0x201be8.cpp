#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_201b70
// Address: 0x201b70 - 0x201be8
void entry_201b70_0x201be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_201b70_0x201be8");
#endif

    ctx->pc = 0x201b70u;

    // 0x201b70: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x201b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x201b74: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201b74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x201b78: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x201b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x201b7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x201b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x201b80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x201b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201b88: 0xc04f856  jal         func_13E158
    ctx->pc = 0x201B88u;
    SET_GPR_U32(ctx, 31, 0x201B90u);
    ctx->pc = 0x201B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201B88u;
            // 0x201b8c: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B90u; }
        if (ctx->pc != 0x201B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B90u; }
        if (ctx->pc != 0x201B90u) { return; }
    }
    ctx->pc = 0x201B90u;
    // 0x201b90: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x201B90u;
    SET_GPR_U32(ctx, 31, 0x201B98u);
    ctx->pc = 0x201B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201B90u;
            // 0x201b94: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B98u; }
        if (ctx->pc != 0x201B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B98u; }
        if (ctx->pc != 0x201B98u) { return; }
    }
    ctx->pc = 0x201B98u;
    // 0x201b98: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x201B98u;
    SET_GPR_U32(ctx, 31, 0x201BA0u);
    ctx->pc = 0x201B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201B98u;
            // 0x201b9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BA0u; }
        if (ctx->pc != 0x201BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BA0u; }
        if (ctx->pc != 0x201BA0u) { return; }
    }
    ctx->pc = 0x201BA0u;
    // 0x201ba0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ba4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x201ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x201ba8: 0x24a57a18  addiu       $a1, $a1, 0x7A18
    ctx->pc = 0x201ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31256));
    // 0x201bac: 0xc060978  jal         func_1825E0
    ctx->pc = 0x201BACu;
    SET_GPR_U32(ctx, 31, 0x201BB4u);
    ctx->pc = 0x201BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201BACu;
            // 0x201bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BB4u; }
        if (ctx->pc != 0x201BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BB4u; }
        if (ctx->pc != 0x201BB4u) { return; }
    }
    ctx->pc = 0x201BB4u;
    // 0x201bb4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x201bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x201bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201bbc: 0x2442a0b0  addiu       $v0, $v0, -0x5F50
    ctx->pc = 0x201bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942896));
    // 0x201bc0: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x201BC0u;
    SET_GPR_U32(ctx, 31, 0x201BC8u);
    ctx->pc = 0x201BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201BC0u;
            // 0x201bc4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BC8u; }
        if (ctx->pc != 0x201BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BC8u; }
        if (ctx->pc != 0x201BC8u) { return; }
    }
    ctx->pc = 0x201BC8u;
    // 0x201bc8: 0xc04f860  jal         func_13E180
    ctx->pc = 0x201BC8u;
    SET_GPR_U32(ctx, 31, 0x201BD0u);
    ctx->pc = 0x201BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201BC8u;
            // 0x201bcc: 0xae30e434  sw          $s0, -0x1BCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294960180), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BD0u; }
        if (ctx->pc != 0x201BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BD0u; }
        if (ctx->pc != 0x201BD0u) { return; }
    }
    ctx->pc = 0x201BD0u;
    // 0x201bd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x201bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201bd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x201BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201BDCu;
            // 0x201be0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201BE4u;
    // 0x201be4: 0x0  nop
    ctx->pc = 0x201be4u;
    // NOP
}
