#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DE520
// Address: 0x1de520 - 0x1de548
void sub_001DE520_0x1de520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE520_0x1de520");
#endif

    ctx->pc = 0x1de520u;

    // 0x1de520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de524: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1de524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1de528: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1de528u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1de52c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de530: 0x24a56d20  addiu       $a1, $a1, 0x6D20
    ctx->pc = 0x1de530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27936));
    // 0x1de534: 0xc05f794  jal         func_17DE50
    ctx->pc = 0x1DE534u;
    SET_GPR_U32(ctx, 31, 0x1DE53Cu);
    ctx->pc = 0x1DE538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE534u;
            // 0x1de538: 0x24c6d2a4  addiu       $a2, $a2, -0x2D5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955684));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DE50u;
    if (runtime->hasFunction(0x17DE50u)) {
        auto targetFn = runtime->lookupFunction(0x17DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE53Cu; }
        if (ctx->pc != 0x1DE53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DE50_0x17de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE53Cu; }
        if (ctx->pc != 0x1DE53Cu) { return; }
    }
    ctx->pc = 0x1DE53Cu;
    // 0x1de53c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de540: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE540u;
            // 0x1de544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DE548u;
}
