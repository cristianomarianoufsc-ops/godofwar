#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6F98
// Address: 0x1e6f98 - 0x1e6fd8
void sub_001E6F98_0x1e6f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6F98_0x1e6f98");
#endif

    ctx->pc = 0x1e6f98u;

    // 0x1e6f98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6f9c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1e6f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1e6fa0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e6fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e6fa4: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1e6fa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e6fa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6fac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6fb0: 0xc079b96  jal         func_1E6E58
    ctx->pc = 0x1E6FB0u;
    SET_GPR_U32(ctx, 31, 0x1E6FB8u);
    ctx->pc = 0x1E6FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FB0u;
            // 0x1e6fb4: 0xa202035c  sb          $v0, 0x35C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 860), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E58u;
    if (runtime->hasFunction(0x1E6E58u)) {
        auto targetFn = runtime->lookupFunction(0x1E6E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FB8u; }
        if (ctx->pc != 0x1E6FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6E58_0x1e6e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FB8u; }
        if (ctx->pc != 0x1E6FB8u) { return; }
    }
    ctx->pc = 0x1E6FB8u;
    // 0x1e6fb8: 0x9205035c  lbu         $a1, 0x35C($s0)
    ctx->pc = 0x1e6fb8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1e6fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6fc0: 0xc07821c  jal         func_1E0870
    ctx->pc = 0x1E6FC0u;
    SET_GPR_U32(ctx, 31, 0x1E6FC8u);
    ctx->pc = 0x1E6FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FC0u;
            // 0x1e6fc4: 0x30a50002  andi        $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0870u;
    if (runtime->hasFunction(0x1E0870u)) {
        auto targetFn = runtime->lookupFunction(0x1E0870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FC8u; }
        if (ctx->pc != 0x1E6FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0870_0x1e0870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FC8u; }
        if (ctx->pc != 0x1E6FC8u) { return; }
    }
    ctx->pc = 0x1E6FC8u;
    // 0x1e6fc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e6fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FD0u;
            // 0x1e6fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6FD8u;
}
