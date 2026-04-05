#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22b238
// Address: 0x22b238 - 0x22b260
void entry_22b238_0x22b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22b238_0x22b260");
#endif

    ctx->pc = 0x22b238u;

    // 0x22b238: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x22b238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b23c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22b240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22b240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22b244: 0x8c4411d0  lw          $a0, 0x11D0($v0)
    ctx->pc = 0x22b244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
    // 0x22b248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b24c: 0xc08ac00  jal         func_22B000
    ctx->pc = 0x22B24Cu;
    SET_GPR_U32(ctx, 31, 0x22B254u);
    ctx->pc = 0x22B000u;
    if (runtime->hasFunction(0x22B000u)) {
        auto targetFn = runtime->lookupFunction(0x22B000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B254u; }
        if (ctx->pc != 0x22B254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B000_0x22b000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B254u; }
        if (ctx->pc != 0x22B254u) { return; }
    }
    ctx->pc = 0x22B254u;
    // 0x22b254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b258: 0x3e00008  jr          $ra
    ctx->pc = 0x22B258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B258u;
            // 0x22b25c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B260u;
}
