#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A960
// Address: 0x26a960 - 0x26a998
void sub_0026A960_0x26a960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A960_0x26a960");
#endif

    ctx->pc = 0x26a960u;

    // 0x26a960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26a960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26a964: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26a964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26a968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26a96c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x26a96cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a970: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x26a970u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x26a974: 0xc077b96  jal         func_1DEE58
    ctx->pc = 0x26A974u;
    SET_GPR_U32(ctx, 31, 0x26A97Cu);
    ctx->pc = 0x26A978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A974u;
            // 0x26a978: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE58u;
    if (runtime->hasFunction(0x1DEE58u)) {
        auto targetFn = runtime->lookupFunction(0x1DEE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A97Cu; }
        if (ctx->pc != 0x26A97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEE58_0x1dee58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A97Cu; }
        if (ctx->pc != 0x26A97Cu) { return; }
    }
    ctx->pc = 0x26A97Cu;
    // 0x26a97c: 0xc077cfa  jal         func_1DF3E8
    ctx->pc = 0x26A97Cu;
    SET_GPR_U32(ctx, 31, 0x26A984u);
    ctx->pc = 0x26A980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A97Cu;
            // 0x26a980: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF3E8u;
    if (runtime->hasFunction(0x1DF3E8u)) {
        auto targetFn = runtime->lookupFunction(0x1DF3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A984u; }
        if (ctx->pc != 0x26A984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF3E8_0x1df3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A984u; }
        if (ctx->pc != 0x26A984u) { return; }
    }
    ctx->pc = 0x26A984u;
    // 0x26a984: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26a984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a98c: 0x3e00008  jr          $ra
    ctx->pc = 0x26A98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A98Cu;
            // 0x26a990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A994u;
    // 0x26a994: 0x0  nop
    ctx->pc = 0x26a994u;
    // NOP
}
