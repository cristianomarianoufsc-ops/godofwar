#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023DD40
// Address: 0x23dd40 - 0x23dd78
void sub_0023DD40_0x23dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DD40_0x23dd40");
#endif

    ctx->pc = 0x23dd40u;

    // 0x23dd40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23dd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23dd44: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23dd48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23dd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23dd4c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23dd4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dd50: 0x2442d470  addiu       $v0, $v0, -0x2B90
    ctx->pc = 0x23dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956144));
    // 0x23dd54: 0xc08f6e2  jal         func_23DB88
    ctx->pc = 0x23DD54u;
    SET_GPR_U32(ctx, 31, 0x23DD5Cu);
    ctx->pc = 0x23DD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DD54u;
            // 0x23dd58: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DB88u;
    if (runtime->hasFunction(0x23DB88u)) {
        auto targetFn = runtime->lookupFunction(0x23DB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DD5Cu; }
        if (ctx->pc != 0x23DD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23db88_0x23dc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DD5Cu; }
        if (ctx->pc != 0x23DD5Cu) { return; }
    }
    ctx->pc = 0x23DD5Cu;
    // 0x23dd5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23dd5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23dd60: 0x3e00008  jr          $ra
    ctx->pc = 0x23DD60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DD60u;
            // 0x23dd64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23DD68u;
    // 0x23dd68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23dd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23dd6c: 0x0  nop
    ctx->pc = 0x23dd6cu;
    // NOP
    // 0x23dd70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23dd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23dd74: 0x0  nop
    ctx->pc = 0x23dd74u;
    // NOP
}
