#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161EF0
// Address: 0x161ef0 - 0x161f68
void sub_00161EF0_0x161ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161EF0_0x161ef0");
#endif

    ctx->pc = 0x161ef0u;

    // 0x161ef0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x161ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x161ef4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161ef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161ef8: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x161ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x161efc: 0x8c42c298  lw          $v0, -0x3D68($v0)
    ctx->pc = 0x161efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951576)));
    // 0x161f00: 0x2464a600  addiu       $a0, $v1, -0x5A00
    ctx->pc = 0x161f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944256));
    // 0x161f04: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x161F04u;
    {
        const bool branch_taken_0x161f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x161F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161F04u;
            // 0x161f08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f04) {
            ctx->pc = 0x161F34u;
            goto label_161f34;
        }
    }
    ctx->pc = 0x161F0Cu;
    // 0x161f0c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x161f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x161f10: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x161f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x161f14: 0xac404a4c  sw          $zero, 0x4A4C($v0)
    ctx->pc = 0x161f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19020), GPR_U32(ctx, 0));
    // 0x161f18: 0x24a5cb00  addiu       $a1, $a1, -0x3500
    ctx->pc = 0x161f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953728));
    // 0x161f1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f20: 0xc05875c  jal         func_161D70
    ctx->pc = 0x161F20u;
    SET_GPR_U32(ctx, 31, 0x161F28u);
    ctx->pc = 0x161F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F20u;
            // 0x161f24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161D70u;
    if (runtime->hasFunction(0x161D70u)) {
        auto targetFn = runtime->lookupFunction(0x161D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F28u; }
        if (ctx->pc != 0x161F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_161d70_0x161df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F28u; }
        if (ctx->pc != 0x161F28u) { return; }
    }
    ctx->pc = 0x161F28u;
    // 0x161f28: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x161f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x161f2c: 0xc05aa8c  jal         func_16AA30
    ctx->pc = 0x161F2Cu;
    SET_GPR_U32(ctx, 31, 0x161F34u);
    ctx->pc = 0x161F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F2Cu;
            // 0x161f30: 0x8c44c29c  lw          $a0, -0x3D64($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951580)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AA30u;
    if (runtime->hasFunction(0x16AA30u)) {
        auto targetFn = runtime->lookupFunction(0x16AA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F34u; }
        if (ctx->pc != 0x161F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16aa30_0x16ab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F34u; }
        if (ctx->pc != 0x161F34u) { return; }
    }
    ctx->pc = 0x161F34u;
label_161f34:
    // 0x161f34: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x161f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x161f38: 0x2402024b  addiu       $v0, $zero, 0x24B
    ctx->pc = 0x161f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 587));
    // 0x161f3c: 0x24851080  addiu       $a1, $a0, 0x1080
    ctx->pc = 0x161f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4224));
    // 0x161f40: 0x240300f6  addiu       $v1, $zero, 0xF6
    ctx->pc = 0x161f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x161f44: 0xac821080  sw          $v0, 0x1080($a0)
    ctx->pc = 0x161f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4224), GPR_U32(ctx, 2));
    // 0x161f48: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x161f48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x161f4c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x161f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x161f50: 0xc05877c  jal         func_161DF0
    ctx->pc = 0x161F50u;
    SET_GPR_U32(ctx, 31, 0x161F58u);
    ctx->pc = 0x161F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F50u;
            // 0x161f54: 0xacc01088  sw          $zero, 0x1088($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161DF0u;
    if (runtime->hasFunction(0x161DF0u)) {
        auto targetFn = runtime->lookupFunction(0x161DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F58u; }
        if (ctx->pc != 0x161F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161DF0_0x161df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F58u; }
        if (ctx->pc != 0x161F58u) { return; }
    }
    ctx->pc = 0x161F58u;
    // 0x161f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x161F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161F5Cu;
            // 0x161f60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161F34u: goto label_161f34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161F64u;
    // 0x161f64: 0x0  nop
    ctx->pc = 0x161f64u;
    // NOP
}
