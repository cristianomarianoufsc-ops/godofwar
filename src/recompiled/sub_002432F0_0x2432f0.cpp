#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002432F0
// Address: 0x2432f0 - 0x243320
void sub_002432F0_0x2432f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002432F0_0x2432f0");
#endif

    ctx->pc = 0x2432f0u;

    // 0x2432f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2432f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2432f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2432f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2432f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2432f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2432fc: 0xc09667c  jal         func_2599F0
    ctx->pc = 0x2432FCu;
    SET_GPR_U32(ctx, 31, 0x243304u);
    ctx->pc = 0x243300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2432FCu;
            // 0x243300: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2599F0u;
    if (runtime->hasFunction(0x2599F0u)) {
        auto targetFn = runtime->lookupFunction(0x2599F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243304u; }
        if (ctx->pc != 0x243304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2599f0_0x259a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243304u; }
        if (ctx->pc != 0x243304u) { return; }
    }
    ctx->pc = 0x243304u;
    // 0x243304: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x243304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24330c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24330cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243310: 0x3e00008  jr          $ra
    ctx->pc = 0x243310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243310u;
            // 0x243314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243318u;
    // 0x243318: 0x8c42c31c  lw          $v0, -0x3CE4($v0)
    ctx->pc = 0x243318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951708)));
    // 0x24331c: 0x0  nop
    ctx->pc = 0x24331cu;
    // NOP
}
