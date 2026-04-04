#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023C748
// Address: 0x23c748 - 0x23c780
void sub_0023C748_0x23c748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C748_0x23c748");
#endif

    ctx->pc = 0x23c748u;

    // 0x23c748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23c74c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23c74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23c750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c758: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x23C758u;
    SET_GPR_U32(ctx, 31, 0x23C760u);
    ctx->pc = 0x23C75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C758u;
            // 0x23c75c: 0x8e04fffc  lw          $a0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C760u; }
        if (ctx->pc != 0x23C760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C760u; }
        if (ctx->pc != 0x23C760u) { return; }
    }
    ctx->pc = 0x23C760u;
    // 0x23c760: 0x2605fffc  addiu       $a1, $s0, -0x4
    ctx->pc = 0x23c760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x23c764: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23C764u;
    SET_GPR_U32(ctx, 31, 0x23C76Cu);
    ctx->pc = 0x23C768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C764u;
            // 0x23c768: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C76Cu; }
        if (ctx->pc != 0x23C76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C76Cu; }
        if (ctx->pc != 0x23C76Cu) { return; }
    }
    ctx->pc = 0x23C76Cu;
    // 0x23c76c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23c76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c774: 0x3e00008  jr          $ra
    ctx->pc = 0x23C774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C774u;
            // 0x23c778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23C77Cu;
    // 0x23c77c: 0x0  nop
    ctx->pc = 0x23c77cu;
    // NOP
}
