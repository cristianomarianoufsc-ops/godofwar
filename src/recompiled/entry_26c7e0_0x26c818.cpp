#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26c7e0
// Address: 0x26c7e0 - 0x26c818
void entry_26c7e0_0x26c818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26c7e0_0x26c818");
#endif

    ctx->pc = 0x26c7e0u;

    // 0x26c7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26c7e4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x26c7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c7e8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x26c7e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c7ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26c7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26c7f0: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x26c7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x26c7f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26c7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c7f8: 0xc09b054  jal         func_26C150
    ctx->pc = 0x26C7F8u;
    SET_GPR_U32(ctx, 31, 0x26C800u);
    ctx->pc = 0x26C7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C7F8u;
            // 0x26c7fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C150u;
    if (runtime->hasFunction(0x26C150u)) {
        auto targetFn = runtime->lookupFunction(0x26C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C800u; }
        if (ctx->pc != 0x26C800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C150_0x26c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C800u; }
        if (ctx->pc != 0x26C800u) { return; }
    }
    ctx->pc = 0x26C800u;
    // 0x26c800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26c800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c804: 0x3e00008  jr          $ra
    ctx->pc = 0x26C804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C804u;
            // 0x26c808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C80Cu;
    // 0x26c80c: 0x0  nop
    ctx->pc = 0x26c80cu;
    // NOP
    // 0x26c810: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26c810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c814: 0x0  nop
    ctx->pc = 0x26c814u;
    // NOP
}
