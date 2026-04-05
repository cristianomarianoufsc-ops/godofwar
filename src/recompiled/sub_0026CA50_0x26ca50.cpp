#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026CA50
// Address: 0x26ca50 - 0x26ca90
void sub_0026CA50_0x26ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CA50_0x26ca50");
#endif

    ctx->pc = 0x26ca50u;

    // 0x26ca50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26ca54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26ca54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca58: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x26ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x26ca5c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26ca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26ca60: 0x24c5000c  addiu       $a1, $a2, 0xC
    ctx->pc = 0x26ca60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x26ca64: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x26ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x26ca68: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x26ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x26ca6c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x26ca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x26ca70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26ca70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26ca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26ca78: 0xc09b054  jal         func_26C150
    ctx->pc = 0x26CA78u;
    SET_GPR_U32(ctx, 31, 0x26CA80u);
    ctx->pc = 0x26CA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA78u;
            // 0x26ca7c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C150u;
    if (runtime->hasFunction(0x26C150u)) {
        auto targetFn = runtime->lookupFunction(0x26C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA80u; }
        if (ctx->pc != 0x26CA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C150_0x26c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA80u; }
        if (ctx->pc != 0x26CA80u) { return; }
    }
    ctx->pc = 0x26CA80u;
    // 0x26ca80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26ca80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ca84: 0x3e00008  jr          $ra
    ctx->pc = 0x26CA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA84u;
            // 0x26ca88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CA8Cu;
    // 0x26ca8c: 0x0  nop
    ctx->pc = 0x26ca8cu;
    // NOP
}
