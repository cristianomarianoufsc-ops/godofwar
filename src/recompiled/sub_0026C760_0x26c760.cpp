#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026C760
// Address: 0x26c760 - 0x26c7e0
void sub_0026C760_0x26c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C760_0x26c760");
#endif

    ctx->pc = 0x26c760u;

    // 0x26c760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26c764: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x26c764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c768: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26c768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26c76c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x26c76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26c770: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x26c770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x26c774: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x26c774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26c778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26c77c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26c77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c780: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26c780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26c784: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c788: 0xc09b054  jal         func_26C150
    ctx->pc = 0x26C788u;
    SET_GPR_U32(ctx, 31, 0x26C790u);
    ctx->pc = 0x26C78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C788u;
            // 0x26c78c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C150u;
    if (runtime->hasFunction(0x26C150u)) {
        auto targetFn = runtime->lookupFunction(0x26C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C790u; }
        if (ctx->pc != 0x26C790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C150_0x26c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C790u; }
        if (ctx->pc != 0x26C790u) { return; }
    }
    ctx->pc = 0x26C790u;
    // 0x26c790: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c794: 0x3e00008  jr          $ra
    ctx->pc = 0x26C794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C794u;
            // 0x26c798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C79Cu;
    // 0x26c79c: 0x0  nop
    ctx->pc = 0x26c79cu;
    // NOP
    // 0x26c7a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26c7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c7a4: 0x0  nop
    ctx->pc = 0x26c7a4u;
    // NOP
    // 0x26c7a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26c7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c7ac: 0x0  nop
    ctx->pc = 0x26c7acu;
    // NOP
    // 0x26c7b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c7b4: 0x0  nop
    ctx->pc = 0x26c7b4u;
    // NOP
    // 0x26c7b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26c7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c7bc: 0x0  nop
    ctx->pc = 0x26c7bcu;
    // NOP
    // 0x26c7c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26c7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c7c4: 0x0  nop
    ctx->pc = 0x26c7c4u;
    // NOP
    // 0x26c7c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26c7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c7cc: 0x0  nop
    ctx->pc = 0x26c7ccu;
    // NOP
    // 0x26c7d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26c7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c7d4: 0x0  nop
    ctx->pc = 0x26c7d4u;
    // NOP
    // 0x26c7d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26c7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c7dc: 0x0  nop
    ctx->pc = 0x26c7dcu;
    // NOP
}
