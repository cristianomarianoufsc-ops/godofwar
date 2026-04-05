#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238810
// Address: 0x238810 - 0x238840
void sub_00238810_0x238810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238810_0x238810");
#endif

    ctx->pc = 0x238810u;

    // 0x238810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238814: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x238814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x238818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23881c: 0xc05e37e  jal         func_178DF8
    ctx->pc = 0x23881Cu;
    SET_GPR_U32(ctx, 31, 0x238824u);
    ctx->pc = 0x238820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23881Cu;
            // 0x238820: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178DF8u;
    if (runtime->hasFunction(0x178DF8u)) {
        auto targetFn = runtime->lookupFunction(0x178DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238824u; }
        if (ctx->pc != 0x238824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178DF8_0x178df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238824u; }
        if (ctx->pc != 0x238824u) { return; }
    }
    ctx->pc = 0x238824u;
    // 0x238824: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238828: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x238828u;
    SET_GPR_U32(ctx, 31, 0x238830u);
    ctx->pc = 0x23882Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238828u;
            // 0x23882c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238830u; }
        if (ctx->pc != 0x238830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238830u; }
        if (ctx->pc != 0x238830u) { return; }
    }
    ctx->pc = 0x238830u;
    // 0x238830: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x238830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238838: 0x3e00008  jr          $ra
    ctx->pc = 0x238838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23883Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238838u;
            // 0x23883c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238840u;
}
