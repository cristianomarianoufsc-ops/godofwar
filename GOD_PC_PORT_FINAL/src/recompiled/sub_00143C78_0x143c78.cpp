#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00143C78
// Address: 0x143c78 - 0x143c98
void sub_00143C78_0x143c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143C78_0x143c78");
#endif

    ctx->pc = 0x143c78u;

    // 0x143c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143c7c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143C7Cu;
    {
        const bool branch_taken_0x143c7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x143C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143C7Cu;
            // 0x143c80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c7c) {
            ctx->pc = 0x143C8Cu;
            goto label_143c8c;
        }
    }
    ctx->pc = 0x143C84u;
    // 0x143c84: 0xc0530bc  jal         func_14C2F0
    ctx->pc = 0x143C84u;
    SET_GPR_U32(ctx, 31, 0x143C8Cu);
    ctx->pc = 0x14C2F0u;
    if (runtime->hasFunction(0x14C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x14C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C8Cu; }
        if (ctx->pc != 0x143C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C2F0_0x14c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C8Cu; }
        if (ctx->pc != 0x143C8Cu) { return; }
    }
    ctx->pc = 0x143C8Cu;
label_143c8c:
    // 0x143c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143c90: 0x3e00008  jr          $ra
    ctx->pc = 0x143C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143C90u;
            // 0x143c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143C8Cu: goto label_143c8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143C98u;
}
