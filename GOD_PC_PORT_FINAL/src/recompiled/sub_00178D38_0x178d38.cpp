#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178D38
// Address: 0x178d38 - 0x178d60
void sub_00178D38_0x178d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178D38_0x178d38");
#endif

    ctx->pc = 0x178d38u;

    // 0x178d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178d40: 0xc05e358  jal         func_178D60
    ctx->pc = 0x178D40u;
    SET_GPR_U32(ctx, 31, 0x178D48u);
    ctx->pc = 0x178D60u;
    if (runtime->hasFunction(0x178D60u)) {
        auto targetFn = runtime->lookupFunction(0x178D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D48u; }
        if (ctx->pc != 0x178D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178D60_0x178d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D48u; }
        if (ctx->pc != 0x178D48u) { return; }
    }
    ctx->pc = 0x178D48u;
    // 0x178d48: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x178d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x178d4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178d50: 0xac62c4c0  sw          $v0, -0x3B40($v1)
    ctx->pc = 0x178d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952128), GPR_U32(ctx, 2));
    // 0x178d54: 0x3e00008  jr          $ra
    ctx->pc = 0x178D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178D54u;
            // 0x178d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178D5Cu;
    // 0x178d5c: 0x0  nop
    ctx->pc = 0x178d5cu;
    // NOP
}
