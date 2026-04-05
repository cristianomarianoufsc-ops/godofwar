#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F63E8
// Address: 0x1f63e8 - 0x1f6410
void sub_001F63E8_0x1f63e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F63E8_0x1f63e8");
#endif

    ctx->pc = 0x1f63e8u;

    // 0x1f63e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f63e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f63ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f63ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f63f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f63f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f63f4: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1f63f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x1f63f8: 0xc040144  jal         func_100510
    ctx->pc = 0x1F63F8u;
    SET_GPR_U32(ctx, 31, 0x1F6400u);
    ctx->pc = 0x1F63FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F63F8u;
            // 0x1f63fc: 0x8c4500bc  lw          $a1, 0xBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100510u;
    if (runtime->hasFunction(0x100510u)) {
        auto targetFn = runtime->lookupFunction(0x100510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6400u; }
        if (ctx->pc != 0x1F6400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100510_0x100510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6400u; }
        if (ctx->pc != 0x1F6400u) { return; }
    }
    ctx->pc = 0x1F6400u;
    // 0x1f6400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6404: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6404u;
            // 0x1f6408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F640Cu;
    // 0x1f640c: 0x0  nop
    ctx->pc = 0x1f640cu;
    // NOP
}
