#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002284B8
// Address: 0x2284b8 - 0x2284f8
void sub_002284B8_0x2284b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002284B8_0x2284b8");
#endif

    ctx->pc = 0x2284b8u;

    // 0x2284b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2284b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2284bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2284bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2284c0: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x2284c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x2284c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2284c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2284c8: 0x8e02351c  lw          $v0, 0x351C($s0)
    ctx->pc = 0x2284c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13596)));
    // 0x2284cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2284CCu;
    {
        const bool branch_taken_0x2284cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2284cc) {
            ctx->pc = 0x2284E0u;
            goto label_2284e0;
        }
    }
    ctx->pc = 0x2284D4u;
    // 0x2284d4: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x2284D4u;
    SET_GPR_U32(ctx, 31, 0x2284DCu);
    ctx->pc = 0x2284D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2284D4u;
            // 0x2284d8: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2284DCu; }
        if (ctx->pc != 0x2284DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2284DCu; }
        if (ctx->pc != 0x2284DCu) { return; }
    }
    ctx->pc = 0x2284DCu;
    // 0x2284dc: 0xae02351c  sw          $v0, 0x351C($s0)
    ctx->pc = 0x2284dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13596), GPR_U32(ctx, 2));
label_2284e0:
    // 0x2284e0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2284E0u;
    SET_GPR_U32(ctx, 31, 0x2284E8u);
    ctx->pc = 0x2284E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2284E0u;
            // 0x2284e4: 0x8e04351c  lw          $a0, 0x351C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13596)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2284E8u; }
        if (ctx->pc != 0x2284E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2284E8u; }
        if (ctx->pc != 0x2284E8u) { return; }
    }
    ctx->pc = 0x2284E8u;
    // 0x2284e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2284e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2284ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2284ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2284f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2284F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2284F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2284F0u;
            // 0x2284f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2284E0u: goto label_2284e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2284F8u;
}
