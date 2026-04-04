#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023B278
// Address: 0x23b278 - 0x23b2a8
void sub_0023B278_0x23b278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B278_0x23b278");
#endif

    ctx->pc = 0x23b278u;

    // 0x23b278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b27c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23b280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b284: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23b284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b288: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x23b288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x23b28c: 0xc08e218  jal         func_238860
    ctx->pc = 0x23B28Cu;
    SET_GPR_U32(ctx, 31, 0x23B294u);
    ctx->pc = 0x23B290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B28Cu;
            // 0x23b290: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B294u; }
        if (ctx->pc != 0x23B294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B294u; }
        if (ctx->pc != 0x23B294u) { return; }
    }
    ctx->pc = 0x23B294u;
    // 0x23b294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b298: 0x3e00008  jr          $ra
    ctx->pc = 0x23B298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B298u;
            // 0x23b29c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B2A0u;
    // 0x23b2a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23b2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23b2a4: 0x0  nop
    ctx->pc = 0x23b2a4u;
    // NOP
}
