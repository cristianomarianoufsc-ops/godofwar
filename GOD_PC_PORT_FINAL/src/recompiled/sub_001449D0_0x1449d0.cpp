#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001449D0
// Address: 0x1449d0 - 0x144a20
void sub_001449D0_0x1449d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001449D0_0x1449d0");
#endif

    ctx->pc = 0x1449d0u;

    // 0x1449d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1449d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1449d4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1449d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1449d8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1449d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1449dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1449dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1449e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1449e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1449e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1449ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1449ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449f0: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x1449F0u;
    SET_GPR_U32(ctx, 31, 0x1449F8u);
    ctx->pc = 0x1449F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1449F0u;
            // 0x1449f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1449F8u; }
        if (ctx->pc != 0x1449F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1449F8u; }
        if (ctx->pc != 0x1449F8u) { return; }
    }
    ctx->pc = 0x1449F8u;
    // 0x1449f8: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x1449f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1449fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1449fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a04: 0xc051228  jal         func_1448A0
    ctx->pc = 0x144A04u;
    SET_GPR_U32(ctx, 31, 0x144A0Cu);
    ctx->pc = 0x144A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144A04u;
            // 0x144a08: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1448A0u;
    if (runtime->hasFunction(0x1448A0u)) {
        auto targetFn = runtime->lookupFunction(0x1448A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A0Cu; }
        if (ctx->pc != 0x144A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001448A0_0x1448a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A0Cu; }
        if (ctx->pc != 0x144A0Cu) { return; }
    }
    ctx->pc = 0x144A0Cu;
    // 0x144a0c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x144a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144a10: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x144a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144a14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x144a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144a18: 0x3e00008  jr          $ra
    ctx->pc = 0x144A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144A18u;
            // 0x144a1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144A20u;
}
