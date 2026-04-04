#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26c728
// Address: 0x26c728 - 0x26c760
void entry_26c728_0x26c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26c728_0x26c760");
#endif

    ctx->pc = 0x26c728u;

    // 0x26c728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26c72c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c72cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c730: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26c730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26c734: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26c734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c738: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x26c738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x26c73c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x26c73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26c740: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26c744: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x26c744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26c748: 0xc09b054  jal         func_26C150
    ctx->pc = 0x26C748u;
    SET_GPR_U32(ctx, 31, 0x26C750u);
    ctx->pc = 0x26C74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C748u;
            // 0x26c74c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C150u;
    if (runtime->hasFunction(0x26C150u)) {
        auto targetFn = runtime->lookupFunction(0x26C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C750u; }
        if (ctx->pc != 0x26C750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C150_0x26c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C750u; }
        if (ctx->pc != 0x26C750u) { return; }
    }
    ctx->pc = 0x26C750u;
    // 0x26c750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c754: 0x3e00008  jr          $ra
    ctx->pc = 0x26C754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C754u;
            // 0x26c758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C75Cu;
    // 0x26c75c: 0x0  nop
    ctx->pc = 0x26c75cu;
    // NOP
}
