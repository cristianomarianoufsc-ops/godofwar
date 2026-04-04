#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17e690
// Address: 0x17e690 - 0x17e6b8
void entry_17e690_0x17e6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17e690_0x17e6b8");
#endif

    ctx->pc = 0x17e690u;

    // 0x17e690: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17e690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e694: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17e694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17e698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e69c: 0x8c44c744  lw          $a0, -0x38BC($v0)
    ctx->pc = 0x17e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952772)));
    // 0x17e6a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e6a4: 0xc06037c  jal         func_180DF0
    ctx->pc = 0x17E6A4u;
    SET_GPR_U32(ctx, 31, 0x17E6ACu);
    ctx->pc = 0x180DF0u;
    if (runtime->hasFunction(0x180DF0u)) {
        auto targetFn = runtime->lookupFunction(0x180DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6ACu; }
        if (ctx->pc != 0x17E6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_180df0_0x180e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6ACu; }
        if (ctx->pc != 0x17E6ACu) { return; }
    }
    ctx->pc = 0x17E6ACu;
    // 0x17e6ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x17E6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E6B0u;
            // 0x17e6b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E6B8u;
}
