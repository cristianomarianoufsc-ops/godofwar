#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_241458
// Address: 0x241458 - 0x2414b0
void entry_241458_0x2414b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_241458_0x2414b0");
#endif

    ctx->pc = 0x241458u;

    // 0x241458: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x241458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24145c: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x24145cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x241460: 0x3e00008  jr          $ra
    ctx->pc = 0x241460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241460u;
            // 0x241464: 0xac840004  sw          $a0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241468u;
    // 0x241468: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x241468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24146c: 0x0  nop
    ctx->pc = 0x24146cu;
    // NOP
    // 0x241470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x241470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x241474: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x241474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x241478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x241478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24147c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x24147cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241480: 0x2442b798  addiu       $v0, $v0, -0x4868
    ctx->pc = 0x241480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948760));
    // 0x241484: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x241484u;
    SET_GPR_U32(ctx, 31, 0x24148Cu);
    ctx->pc = 0x241488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241484u;
            // 0x241488: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B170u;
    if (runtime->hasFunction(0x23B170u)) {
        auto targetFn = runtime->lookupFunction(0x23B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24148Cu; }
        if (ctx->pc != 0x24148Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B170_0x23b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24148Cu; }
        if (ctx->pc != 0x24148Cu) { return; }
    }
    ctx->pc = 0x24148Cu;
    // 0x24148c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24148cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241490: 0x3e00008  jr          $ra
    ctx->pc = 0x241490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241490u;
            // 0x241494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241498u;
    // 0x241498: 0x3e00008  jr          $ra
    ctx->pc = 0x241498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2414A0u;
    // 0x2414a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2414A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2414A8u;
    // 0x2414a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2414A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2414B0u;
}
