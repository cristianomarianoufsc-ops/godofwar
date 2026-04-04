#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ed7f8
// Address: 0x1ed7f8 - 0x1ed828
void entry_1ed7f8_0x1ed828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ed7f8_0x1ed828");
#endif

    ctx->pc = 0x1ed7f8u;

    // 0x1ed7f8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ed7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ed7fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ed7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ed804: 0x8c44e2a4  lw          $a0, -0x1D5C($v0)
    ctx->pc = 0x1ed804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
    // 0x1ed808: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED808u;
    {
        const bool branch_taken_0x1ed808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED808u;
            // 0x1ed80c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed808) {
            ctx->pc = 0x1ED818u;
            goto label_1ed818;
        }
    }
    ctx->pc = 0x1ED810u;
    // 0x1ed810: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1ED810u;
    SET_GPR_U32(ctx, 31, 0x1ED818u);
    ctx->pc = 0x1ED688u;
    if (runtime->hasFunction(0x1ED688u)) {
        auto targetFn = runtime->lookupFunction(0x1ED688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED818u; }
        if (ctx->pc != 0x1ED818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED688_0x1ed688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED818u; }
        if (ctx->pc != 0x1ED818u) { return; }
    }
    ctx->pc = 0x1ED818u;
label_1ed818:
    // 0x1ed818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed81c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED81Cu;
            // 0x1ed820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED818u: goto label_1ed818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ED824u;
    // 0x1ed824: 0x0  nop
    ctx->pc = 0x1ed824u;
    // NOP
}
