#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182F68
// Address: 0x182f68 - 0x182fb0
void sub_00182F68_0x182f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182F68_0x182f68");
#endif

    ctx->pc = 0x182f68u;

    // 0x182f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182f6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_182f70:
    // 0x182f70: 0xc09e690  jal         func_279A40
    ctx->pc = 0x182F70u;
    SET_GPR_U32(ctx, 31, 0x182F78u);
    ctx->pc = 0x182F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182F70u;
            // 0x182f74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279A40u;
    if (runtime->hasFunction(0x279A40u)) {
        auto targetFn = runtime->lookupFunction(0x279A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F78u; }
        if (ctx->pc != 0x182F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279A40_0x279a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F78u; }
        if (ctx->pc != 0x182F78u) { return; }
    }
    ctx->pc = 0x182F78u;
    // 0x182f78: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x182F78u;
    {
        const bool branch_taken_0x182f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182F78u;
            // 0x182f7c: 0x3c050018  lui         $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f78) {
            ctx->pc = 0x182F70u;
            runtime->cooperativeGuestYield();
            goto label_182f70;
        }
    }
    ctx->pc = 0x182F80u;
    // 0x182f80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x182f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x182f84: 0x24a52f28  addiu       $a1, $a1, 0x2F28
    ctx->pc = 0x182f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12072));
    // 0x182f88: 0xc0a4e40  jal         func_293900
    ctx->pc = 0x182F88u;
    SET_GPR_U32(ctx, 31, 0x182F90u);
    ctx->pc = 0x182F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182F88u;
            // 0x182f8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293900u;
    if (runtime->hasFunction(0x293900u)) {
        auto targetFn = runtime->lookupFunction(0x293900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F90u; }
        if (ctx->pc != 0x182F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293900_0x293910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F90u; }
        if (ctx->pc != 0x182F90u) { return; }
    }
    ctx->pc = 0x182F90u;
    // 0x182f90: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x182f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x182f94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x182f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x182f98: 0xc0a51a4  jal         func_294690
    ctx->pc = 0x182F98u;
    SET_GPR_U32(ctx, 31, 0x182FA0u);
    ctx->pc = 0x182F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182F98u;
            // 0x182f9c: 0xac62c7c4  sw          $v0, -0x383C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952900), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294690u;
    if (runtime->hasFunction(0x294690u)) {
        auto targetFn = runtime->lookupFunction(0x294690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FA0u; }
        if (ctx->pc != 0x182FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294690_0x294690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FA0u; }
        if (ctx->pc != 0x182FA0u) { return; }
    }
    ctx->pc = 0x182FA0u;
    // 0x182fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x182FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182FA4u;
            // 0x182fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182F70u: goto label_182f70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182FACu;
    // 0x182fac: 0x0  nop
    ctx->pc = 0x182facu;
    // NOP
}
