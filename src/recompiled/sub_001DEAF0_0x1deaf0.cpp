#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DEAF0
// Address: 0x1deaf0 - 0x1deb28
void sub_001DEAF0_0x1deaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEAF0_0x1deaf0");
#endif

    ctx->pc = 0x1deaf0u;

    // 0x1deaf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1deaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1deaf4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1deaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1deaf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1deaf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deafc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1deafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1deb00: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1deb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb04: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1DEB04u;
    SET_GPR_U32(ctx, 31, 0x1DEB0Cu);
    ctx->pc = 0x1DEB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB04u;
            // 0x1deb08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB0Cu; }
        if (ctx->pc != 0x1DEB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB0Cu; }
        if (ctx->pc != 0x1DEB0Cu) { return; }
    }
    ctx->pc = 0x1DEB0Cu;
    // 0x1deb0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1deb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb10: 0xc077aa6  jal         func_1DEA98
    ctx->pc = 0x1DEB10u;
    SET_GPR_U32(ctx, 31, 0x1DEB18u);
    ctx->pc = 0x1DEB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB10u;
            // 0x1deb14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA98u;
    if (runtime->hasFunction(0x1DEA98u)) {
        auto targetFn = runtime->lookupFunction(0x1DEA98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB18u; }
        if (ctx->pc != 0x1DEB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEA98_0x1dea98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB18u; }
        if (ctx->pc != 0x1DEB18u) { return; }
    }
    ctx->pc = 0x1DEB18u;
    // 0x1deb18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1deb18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deb1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1deb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deb20: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB20u;
            // 0x1deb24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DEB28u;
}
