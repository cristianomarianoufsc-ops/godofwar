#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175A70
// Address: 0x175a70 - 0x175a90
void sub_00175A70_0x175a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175A70_0x175a70");
#endif

    ctx->pc = 0x175a70u;

    // 0x175a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175a78: 0xc05d624  jal         func_175890
    ctx->pc = 0x175A78u;
    SET_GPR_U32(ctx, 31, 0x175A80u);
    ctx->pc = 0x175890u;
    if (runtime->hasFunction(0x175890u)) {
        auto targetFn = runtime->lookupFunction(0x175890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A80u; }
        if (ctx->pc != 0x175A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175890_0x175890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A80u; }
        if (ctx->pc != 0x175A80u) { return; }
    }
    ctx->pc = 0x175A80u;
    // 0x175a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175a84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x175a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x175a88: 0x3e00008  jr          $ra
    ctx->pc = 0x175A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175A88u;
            // 0x175a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175A90u;
}
