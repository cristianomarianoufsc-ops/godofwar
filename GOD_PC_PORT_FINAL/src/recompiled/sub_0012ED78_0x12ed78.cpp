#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012ED78
// Address: 0x12ed78 - 0x12eda8
void sub_0012ED78_0x12ed78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012ED78_0x12ed78");
#endif

    ctx->pc = 0x12ed78u;

    // 0x12ed78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ed78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ed7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12ed7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12ed80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ed80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12ed84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ed84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed88: 0xc04bb40  jal         func_12ED00
    ctx->pc = 0x12ED88u;
    SET_GPR_U32(ctx, 31, 0x12ED90u);
    ctx->pc = 0x12ED8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED88u;
            // 0x12ed8c: 0xae050090  sw          $a1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ED00u;
    if (runtime->hasFunction(0x12ED00u)) {
        auto targetFn = runtime->lookupFunction(0x12ED00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED90u; }
        if (ctx->pc != 0x12ED90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12ed00_0x12ed78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED90u; }
        if (ctx->pc != 0x12ED90u) { return; }
    }
    ctx->pc = 0x12ED90u;
    // 0x12ed90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12ed90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ed94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ed98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12ed98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ed9c: 0x3e00008  jr          $ra
    ctx->pc = 0x12ED9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED9Cu;
            // 0x12eda0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EDA4u;
    // 0x12eda4: 0x0  nop
    ctx->pc = 0x12eda4u;
    // NOP
}
