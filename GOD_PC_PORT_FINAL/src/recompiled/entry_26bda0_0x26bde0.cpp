#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26bda0
// Address: 0x26bda0 - 0x26bde0
void entry_26bda0_0x26bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26bda0_0x26bde0");
#endif

    ctx->pc = 0x26bda0u;

    // 0x26bda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bda4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x26bda4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bda8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26bdac: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x26bdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26bdb0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x26bdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x26bdb4: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x26bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x26bdb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26bdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26bdbc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26bdbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdc0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26bdc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26bdc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdc8: 0xc09b054  jal         func_26C150
    ctx->pc = 0x26BDC8u;
    SET_GPR_U32(ctx, 31, 0x26BDD0u);
    ctx->pc = 0x26BDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BDC8u;
            // 0x26bdcc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C150u;
    if (runtime->hasFunction(0x26C150u)) {
        auto targetFn = runtime->lookupFunction(0x26C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BDD0u; }
        if (ctx->pc != 0x26BDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C150_0x26c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BDD0u; }
        if (ctx->pc != 0x26BDD0u) { return; }
    }
    ctx->pc = 0x26BDD0u;
    // 0x26bdd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26bdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x26BDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BDD4u;
            // 0x26bdd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BDDCu;
    // 0x26bddc: 0x0  nop
    ctx->pc = 0x26bddcu;
    // NOP
}
