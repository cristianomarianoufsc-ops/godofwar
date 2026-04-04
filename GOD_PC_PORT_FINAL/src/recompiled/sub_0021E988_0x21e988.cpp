#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021E988
// Address: 0x21e988 - 0x21e9d0
void sub_0021E988_0x21e988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E988_0x21e988");
#endif

    ctx->pc = 0x21e988u;

    // 0x21e988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e98c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e990: 0xc08bba2  jal         func_22EE88
    ctx->pc = 0x21E990u;
    SET_GPR_U32(ctx, 31, 0x21E998u);
    ctx->pc = 0x22EE88u;
    if (runtime->hasFunction(0x22EE88u)) {
        auto targetFn = runtime->lookupFunction(0x22EE88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E998u; }
        if (ctx->pc != 0x21E998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022EE88_0x22ee88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E998u; }
        if (ctx->pc != 0x21E998u) { return; }
    }
    ctx->pc = 0x21E998u;
    // 0x21e998: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21E998u;
    {
        const bool branch_taken_0x21e998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E998u;
            // 0x21e99c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e998) {
            ctx->pc = 0x21E9C0u;
            goto label_21e9c0;
        }
    }
    ctx->pc = 0x21E9A0u;
    // 0x21e9a0: 0x8c4212cc  lw          $v0, 0x12CC($v0)
    ctx->pc = 0x21e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4812)));
    // 0x21e9a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E9A4u;
    {
        const bool branch_taken_0x21e9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E9A4u;
            // 0x21e9a8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e9a4) {
            ctx->pc = 0x21E9B8u;
            goto label_21e9b8;
        }
    }
    ctx->pc = 0x21E9ACu;
    // 0x21e9ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21e9b0: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x21e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21e9b4: 0xac4301a8  sw          $v1, 0x1A8($v0)
    ctx->pc = 0x21e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 424), GPR_U32(ctx, 3));
label_21e9b8:
    // 0x21e9b8: 0xc087a74  jal         func_21E9D0
    ctx->pc = 0x21E9B8u;
    SET_GPR_U32(ctx, 31, 0x21E9C0u);
    ctx->pc = 0x21E9D0u;
    if (runtime->hasFunction(0x21E9D0u)) {
        auto targetFn = runtime->lookupFunction(0x21E9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E9C0u; }
        if (ctx->pc != 0x21E9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E9D0_0x21e9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E9C0u; }
        if (ctx->pc != 0x21E9C0u) { return; }
    }
    ctx->pc = 0x21E9C0u;
label_21e9c0:
    // 0x21e9c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x21E9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E9C4u;
            // 0x21e9c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21E9B8u: goto label_21e9b8;
            case 0x21E9C0u: goto label_21e9c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21E9CCu;
    // 0x21e9cc: 0x0  nop
    ctx->pc = 0x21e9ccu;
    // NOP
}
