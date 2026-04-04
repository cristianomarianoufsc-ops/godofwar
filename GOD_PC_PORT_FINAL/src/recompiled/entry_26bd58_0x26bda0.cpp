#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26bd58
// Address: 0x26bd58 - 0x26bda0
void entry_26bd58_0x26bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26bd58_0x26bda0");
#endif

    ctx->pc = 0x26bd58u;

    // 0x26bd58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bd5c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26bd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26bd60: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26bd64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26bd64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26bd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26bd6c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x26bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x26bd70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26bd70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd74: 0xc09b054  jal         func_26C150
    ctx->pc = 0x26BD74u;
    SET_GPR_U32(ctx, 31, 0x26BD7Cu);
    ctx->pc = 0x26BD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD74u;
            // 0x26bd78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C150u;
    if (runtime->hasFunction(0x26C150u)) {
        auto targetFn = runtime->lookupFunction(0x26C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD7Cu; }
        if (ctx->pc != 0x26BD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C150_0x26c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD7Cu; }
        if (ctx->pc != 0x26BD7Cu) { return; }
    }
    ctx->pc = 0x26BD7Cu;
    // 0x26bd7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26bd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bd80: 0x3e00008  jr          $ra
    ctx->pc = 0x26BD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD80u;
            // 0x26bd84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BD88u;
    // 0x26bd88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26bd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26bd8c: 0x0  nop
    ctx->pc = 0x26bd8cu;
    // NOP
    // 0x26bd90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26bd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26bd94: 0x0  nop
    ctx->pc = 0x26bd94u;
    // NOP
    // 0x26bd98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26bd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26bd9c: 0x0  nop
    ctx->pc = 0x26bd9cu;
    // NOP
}
