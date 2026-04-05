#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_169d70
// Address: 0x169d70 - 0x169df0
void entry_169d70_0x169df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_169d70_0x169df0");
#endif

    ctx->pc = 0x169d70u;

    // 0x169d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169d74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x169d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x169d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d80: 0x26020360  addiu       $v0, $s0, 0x360
    ctx->pc = 0x169d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x169d84: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x169d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x169d88: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x169D88u;
    {
        const bool branch_taken_0x169d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x169D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169D88u;
            // 0x169d8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d88) {
            ctx->pc = 0x169D94u;
            goto label_169d94;
        }
    }
    ctx->pc = 0x169D90u;
    // 0x169d90: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x169d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_169d94:
    // 0x169d94: 0x8e02039c  lw          $v0, 0x39C($s0)
    ctx->pc = 0x169d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 924)));
    // 0x169d98: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x169D98u;
    {
        const bool branch_taken_0x169d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169d98) {
            ctx->pc = 0x169DBCu;
            goto label_169dbc;
        }
    }
    ctx->pc = 0x169DA0u;
    // 0x169da0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x169DA0u;
    {
        const bool branch_taken_0x169da0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169DA0u;
            // 0x169da4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169da0) {
            ctx->pc = 0x169DC8u;
            goto label_169dc8;
        }
    }
    ctx->pc = 0x169DA8u;
    // 0x169da8: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x169da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x169dac: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x169dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x169db0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x169db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x169db4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169DB4u;
    {
        const bool branch_taken_0x169db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169DB4u;
            // 0x169db8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169db4) {
            ctx->pc = 0x169DC8u;
            goto label_169dc8;
        }
    }
    ctx->pc = 0x169DBCu;
label_169dbc:
    // 0x169dbc: 0xc05a5fc  jal         func_1697F0
    ctx->pc = 0x169DBCu;
    SET_GPR_U32(ctx, 31, 0x169DC4u);
    ctx->pc = 0x169DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169DBCu;
            // 0x169dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1697F0u;
    if (runtime->hasFunction(0x1697F0u)) {
        auto targetFn = runtime->lookupFunction(0x1697F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DC4u; }
        if (ctx->pc != 0x169DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001697F0_0x1697f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DC4u; }
        if (ctx->pc != 0x169DC4u) { return; }
    }
    ctx->pc = 0x169DC4u;
    // 0x169dc4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x169dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_169dc8:
    // 0x169dc8: 0x8c421048  lw          $v0, 0x1048($v0)
    ctx->pc = 0x169dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4168)));
    // 0x169dcc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x169dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x169dd0: 0x2484feb0  addiu       $a0, $a0, -0x150
    ctx->pc = 0x169dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966960));
    // 0x169dd4: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x169dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x169dd8: 0xc05a77c  jal         func_169DF0
    ctx->pc = 0x169DD8u;
    SET_GPR_U32(ctx, 31, 0x169DE0u);
    ctx->pc = 0x169DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169DD8u;
            // 0x169ddc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169DF0u;
    if (runtime->hasFunction(0x169DF0u)) {
        auto targetFn = runtime->lookupFunction(0x169DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DE0u; }
        if (ctx->pc != 0x169DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169DF0_0x169df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DE0u; }
        if (ctx->pc != 0x169DE0u) { return; }
    }
    ctx->pc = 0x169DE0u;
    // 0x169de0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x169de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169de8: 0x3e00008  jr          $ra
    ctx->pc = 0x169DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169DE8u;
            // 0x169dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169D94u: goto label_169d94;
            case 0x169DBCu: goto label_169dbc;
            case 0x169DC8u: goto label_169dc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169DF0u;
}
