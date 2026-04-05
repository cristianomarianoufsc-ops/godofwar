#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00298AA0
// Address: 0x298aa0 - 0x298ad8
void sub_00298AA0_0x298aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298AA0_0x298aa0");
#endif

    ctx->pc = 0x298aa0u;

    // 0x298aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298aa4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x298aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x298aa8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x298aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x298aac: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x298aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x298ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298ab4: 0x2484af28  addiu       $a0, $a0, -0x50D8
    ctx->pc = 0x298ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946600));
    // 0x298ab8: 0xac434b60  sw          $v1, 0x4B60($v0)
    ctx->pc = 0x298ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19296), GPR_U32(ctx, 3));
    // 0x298abc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ac0: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x298AC0u;
    SET_GPR_U32(ctx, 31, 0x298AC8u);
    ctx->pc = 0x298AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298AC0u;
            // 0x298ac4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298AC8u; }
        if (ctx->pc != 0x298AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298AC8u; }
        if (ctx->pc != 0x298AC8u) { return; }
    }
    ctx->pc = 0x298AC8u;
    // 0x298ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298acc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x298accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x298AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298AD0u;
            // 0x298ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298AD8u;
}
