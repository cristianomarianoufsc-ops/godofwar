#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026CA18
// Address: 0x26ca18 - 0x26ca50
void sub_0026CA18_0x26ca18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CA18_0x26ca18");
#endif

    ctx->pc = 0x26ca18u;

    // 0x26ca18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26ca18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26ca1c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x26ca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x26ca20: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26ca24: 0x24c5000c  addiu       $a1, $a2, 0xC
    ctx->pc = 0x26ca24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x26ca28: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x26ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x26ca2c: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x26ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x26ca30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26ca30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26ca34: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26ca34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca38: 0xc09afca  jal         func_26BF28
    ctx->pc = 0x26CA38u;
    SET_GPR_U32(ctx, 31, 0x26CA40u);
    ctx->pc = 0x26CA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA38u;
            // 0x26ca3c: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BF28u;
    if (runtime->hasFunction(0x26BF28u)) {
        auto targetFn = runtime->lookupFunction(0x26BF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA40u; }
        if (ctx->pc != 0x26CA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BF28_0x26bf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA40u; }
        if (ctx->pc != 0x26CA40u) { return; }
    }
    ctx->pc = 0x26CA40u;
    // 0x26ca40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26ca40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ca44: 0x3e00008  jr          $ra
    ctx->pc = 0x26CA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA44u;
            // 0x26ca48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CA4Cu;
    // 0x26ca4c: 0x0  nop
    ctx->pc = 0x26ca4cu;
    // NOP
}
