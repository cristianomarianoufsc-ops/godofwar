#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002743F0
// Address: 0x2743f0 - 0x274430
void sub_002743F0_0x2743f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002743F0_0x2743f0");
#endif

    ctx->pc = 0x2743f0u;

    // 0x2743f0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2743f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2743f4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2743f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2743f8: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2743f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2743fc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2743fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274400: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274404: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x274404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x274408: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x274408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x27440c: 0xc0a58de  jal         func_296378
    ctx->pc = 0x27440Cu;
    SET_GPR_U32(ctx, 31, 0x274414u);
    ctx->pc = 0x274410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27440Cu;
            // 0x274410: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296378u;
    if (runtime->hasFunction(0x296378u)) {
        auto targetFn = runtime->lookupFunction(0x296378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274414u; }
        if (ctx->pc != 0x274414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296378_0x296378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274414u; }
        if (ctx->pc != 0x274414u) { return; }
    }
    ctx->pc = 0x274414u;
    // 0x274414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274418: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x274418u;
    SET_GPR_U32(ctx, 31, 0x274420u);
    ctx->pc = 0x27441Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274418u;
            // 0x27441c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274420u; }
        if (ctx->pc != 0x274420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274420u; }
        if (ctx->pc != 0x274420u) { return; }
    }
    ctx->pc = 0x274420u;
    // 0x274420: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x274420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x274424: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x274424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x274428: 0x3e00008  jr          $ra
    ctx->pc = 0x274428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27442Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274428u;
            // 0x27442c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274430u;
}
