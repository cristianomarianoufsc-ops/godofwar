#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00258B98
// Address: 0x258b98 - 0x258bc0
void sub_00258B98_0x258b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258B98_0x258b98");
#endif

    ctx->pc = 0x258b98u;

    // 0x258b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x258b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x258b9c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x258b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x258ba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258ba4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x258ba4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258ba8: 0x24423b28  addiu       $v0, $v0, 0x3B28
    ctx->pc = 0x258ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15144));
    // 0x258bac: 0xc08e330  jal         func_238CC0
    ctx->pc = 0x258BACu;
    SET_GPR_U32(ctx, 31, 0x258BB4u);
    ctx->pc = 0x258BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258BACu;
            // 0x258bb0: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CC0u;
    if (runtime->hasFunction(0x238CC0u)) {
        auto targetFn = runtime->lookupFunction(0x238CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258BB4u; }
        if (ctx->pc != 0x258BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238CC0_0x238cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258BB4u; }
        if (ctx->pc != 0x258BB4u) { return; }
    }
    ctx->pc = 0x258BB4u;
    // 0x258bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x258BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258BB8u;
            // 0x258bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x258BC0u;
}
