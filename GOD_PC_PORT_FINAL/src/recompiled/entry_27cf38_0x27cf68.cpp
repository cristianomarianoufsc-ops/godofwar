#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27cf38
// Address: 0x27cf38 - 0x27cf68
void entry_27cf38_0x27cf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27cf38_0x27cf68");
#endif

    ctx->pc = 0x27cf38u;

    // 0x27cf38: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x27cf38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27cf3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27cf40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27cf40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27cf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27cf48: 0xc09f3a4  jal         func_27CE90
    ctx->pc = 0x27CF48u;
    SET_GPR_U32(ctx, 31, 0x27CF50u);
    ctx->pc = 0x27CF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CF48u;
            // 0x27cf4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27CE90u;
    if (runtime->hasFunction(0x27CE90u)) {
        auto targetFn = runtime->lookupFunction(0x27CE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CF50u; }
        if (ctx->pc != 0x27CF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27ce90_0x27cf38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CF50u; }
        if (ctx->pc != 0x27CF50u) { return; }
    }
    ctx->pc = 0x27CF50u;
    // 0x27cf50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27cf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27cf54: 0x3e00008  jr          $ra
    ctx->pc = 0x27CF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CF54u;
            // 0x27cf58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27CF5Cu;
    // 0x27cf5c: 0x0  nop
    ctx->pc = 0x27cf5cu;
    // NOP
    // 0x27cf60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27cf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27cf64: 0x0  nop
    ctx->pc = 0x27cf64u;
    // NOP
}
