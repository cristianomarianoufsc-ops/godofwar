#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175AB0
// Address: 0x175ab0 - 0x175ad8
void sub_00175AB0_0x175ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175AB0_0x175ab0");
#endif

    ctx->pc = 0x175ab0u;

    // 0x175ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175ab8: 0xc05d624  jal         func_175890
    ctx->pc = 0x175AB8u;
    SET_GPR_U32(ctx, 31, 0x175AC0u);
    ctx->pc = 0x175890u;
    if (runtime->hasFunction(0x175890u)) {
        auto targetFn = runtime->lookupFunction(0x175890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AC0u; }
        if (ctx->pc != 0x175AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175890_0x175890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AC0u; }
        if (ctx->pc != 0x175AC0u) { return; }
    }
    ctx->pc = 0x175AC0u;
    // 0x175ac0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x175AC0u;
    {
        const bool branch_taken_0x175ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175ac0) {
            ctx->pc = 0x175AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175AC0u;
            // 0x175ac4: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175ACCu;
            goto label_175acc;
        }
    }
    ctx->pc = 0x175AC8u;
    // 0x175ac8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x175ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175acc:
    // 0x175acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x175AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175AD0u;
            // 0x175ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175ACCu: goto label_175acc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175AD8u;
}
