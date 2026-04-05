#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00208830
// Address: 0x208830 - 0x208860
void sub_00208830_0x208830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208830_0x208830");
#endif

    ctx->pc = 0x208830u;

    // 0x208830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208834: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x208834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x208838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20883c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20883cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208840: 0xc080854  jal         func_202150
    ctx->pc = 0x208840u;
    SET_GPR_U32(ctx, 31, 0x208848u);
    ctx->pc = 0x208844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208840u;
            // 0x208844: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202150u;
    if (runtime->hasFunction(0x202150u)) {
        auto targetFn = runtime->lookupFunction(0x202150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208848u; }
        if (ctx->pc != 0x208848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_202150_0x202178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208848u; }
        if (ctx->pc != 0x208848u) { return; }
    }
    ctx->pc = 0x208848u;
    // 0x208848: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x208848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x20884c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20884cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208854: 0x3e00008  jr          $ra
    ctx->pc = 0x208854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208854u;
            // 0x208858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20885Cu;
    // 0x20885c: 0x0  nop
    ctx->pc = 0x20885cu;
    // NOP
}
