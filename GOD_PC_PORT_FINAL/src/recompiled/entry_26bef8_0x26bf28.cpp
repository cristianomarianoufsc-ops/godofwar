#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26bef8
// Address: 0x26bef8 - 0x26bf28
void entry_26bef8_0x26bf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26bef8_0x26bf28");
#endif

    ctx->pc = 0x26bef8u;

    // 0x26bef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26befc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x26befcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf00: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26bf00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26bf04: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x26bf04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26bf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26bf0c: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x26bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x26bf10: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26bf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26bf14: 0xc09b054  jal         func_26C150
    ctx->pc = 0x26BF14u;
    SET_GPR_U32(ctx, 31, 0x26BF1Cu);
    ctx->pc = 0x26BF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF14u;
            // 0x26bf18: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C150u;
    if (runtime->hasFunction(0x26C150u)) {
        auto targetFn = runtime->lookupFunction(0x26C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF1Cu; }
        if (ctx->pc != 0x26BF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C150_0x26c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF1Cu; }
        if (ctx->pc != 0x26BF1Cu) { return; }
    }
    ctx->pc = 0x26BF1Cu;
    // 0x26bf1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26bf1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bf20: 0x3e00008  jr          $ra
    ctx->pc = 0x26BF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF20u;
            // 0x26bf24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BF28u;
}
