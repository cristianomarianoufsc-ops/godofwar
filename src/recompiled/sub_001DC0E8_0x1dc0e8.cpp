#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC0E8
// Address: 0x1dc0e8 - 0x1dc108
void sub_001DC0E8_0x1dc0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC0E8_0x1dc0e8");
#endif

    ctx->pc = 0x1dc0e8u;

    // 0x1dc0e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc0ec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dc0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dc0f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc0f4: 0xc07cce4  jal         func_1F3390
    ctx->pc = 0x1DC0F4u;
    SET_GPR_U32(ctx, 31, 0x1DC0FCu);
    ctx->pc = 0x1DC0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC0F4u;
            // 0x1dc0f8: 0xac40cd60  sw          $zero, -0x32A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3390u;
    if (runtime->hasFunction(0x1F3390u)) {
        auto targetFn = runtime->lookupFunction(0x1F3390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC0FCu; }
        if (ctx->pc != 0x1DC0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3390_0x1f3390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC0FCu; }
        if (ctx->pc != 0x1DC0FCu) { return; }
    }
    ctx->pc = 0x1DC0FCu;
    // 0x1dc0fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc100: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC100u;
            // 0x1dc104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC108u;
}
