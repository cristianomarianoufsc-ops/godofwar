#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00298058
// Address: 0x298058 - 0x298090
void sub_00298058_0x298058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298058_0x298058");
#endif

    ctx->pc = 0x298058u;

    // 0x298058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29805c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x29805cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x298060: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x298060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x298064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298068: 0xac404b44  sw          $zero, 0x4B44($v0)
    ctx->pc = 0x298068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19268), GPR_U32(ctx, 0));
    // 0x29806c: 0x2484aa68  addiu       $a0, $a0, -0x5598
    ctx->pc = 0x29806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945384));
    // 0x298070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298074: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x298074u;
    SET_GPR_U32(ctx, 31, 0x29807Cu);
    ctx->pc = 0x298078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298074u;
            // 0x298078: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29807Cu; }
        if (ctx->pc != 0x29807Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29807Cu; }
        if (ctx->pc != 0x29807Cu) { return; }
    }
    ctx->pc = 0x29807Cu;
    // 0x29807c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29807cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298080: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x298080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298084: 0x3e00008  jr          $ra
    ctx->pc = 0x298084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298084u;
            // 0x298088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29808Cu;
    // 0x29808c: 0x0  nop
    ctx->pc = 0x29808cu;
    // NOP
}
