#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C2A0
// Address: 0x20c2a0 - 0x20c2e0
void sub_0020C2A0_0x20c2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C2A0_0x20c2a0");
#endif

    ctx->pc = 0x20c2a0u;

    // 0x20c2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c2a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20c2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20c2a8: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x20c2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x20c2ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c2b0: 0x8e0234a0  lw          $v0, 0x34A0($s0)
    ctx->pc = 0x20c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13472)));
    // 0x20c2b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C2B4u;
    {
        const bool branch_taken_0x20c2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c2b4) {
            ctx->pc = 0x20C2C8u;
            goto label_20c2c8;
        }
    }
    ctx->pc = 0x20C2BCu;
    // 0x20c2bc: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x20C2BCu;
    SET_GPR_U32(ctx, 31, 0x20C2C4u);
    ctx->pc = 0x20C2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C2BCu;
            // 0x20c2c0: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C2C4u; }
        if (ctx->pc != 0x20C2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C2C4u; }
        if (ctx->pc != 0x20C2C4u) { return; }
    }
    ctx->pc = 0x20C2C4u;
    // 0x20c2c4: 0xae0234a0  sw          $v0, 0x34A0($s0)
    ctx->pc = 0x20c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13472), GPR_U32(ctx, 2));
label_20c2c8:
    // 0x20c2c8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x20C2C8u;
    SET_GPR_U32(ctx, 31, 0x20C2D0u);
    ctx->pc = 0x20C2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C2C8u;
            // 0x20c2cc: 0x8e0434a0  lw          $a0, 0x34A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13472)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C2D0u; }
        if (ctx->pc != 0x20C2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C2D0u; }
        if (ctx->pc != 0x20C2D0u) { return; }
    }
    ctx->pc = 0x20C2D0u;
    // 0x20c2d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20c2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c2d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x20C2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C2D8u;
            // 0x20c2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C2C8u: goto label_20c2c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C2E0u;
}
