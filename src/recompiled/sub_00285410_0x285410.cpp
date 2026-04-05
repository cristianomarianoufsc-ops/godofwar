#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285410
// Address: 0x285410 - 0x285440
void sub_00285410_0x285410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285410_0x285410");
#endif

    ctx->pc = 0x285410u;

    // 0x285410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x285410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x285414: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x285414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x285418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x285418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28541c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28541cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285420: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x285420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x285424: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x285424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x285428: 0xc0a146a  jal         func_2851A8
    ctx->pc = 0x285428u;
    SET_GPR_U32(ctx, 31, 0x285430u);
    ctx->pc = 0x28542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285428u;
            // 0x28542c: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2851A8u;
    if (runtime->hasFunction(0x2851A8u)) {
        auto targetFn = runtime->lookupFunction(0x2851A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285430u; }
        if (ctx->pc != 0x285430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2851a8_0x2852b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285430u; }
        if (ctx->pc != 0x285430u) { return; }
    }
    ctx->pc = 0x285430u;
    // 0x285430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x285430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285434: 0x3e00008  jr          $ra
    ctx->pc = 0x285434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285434u;
            // 0x285438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28543Cu;
    // 0x28543c: 0x0  nop
    ctx->pc = 0x28543cu;
    // NOP
}
