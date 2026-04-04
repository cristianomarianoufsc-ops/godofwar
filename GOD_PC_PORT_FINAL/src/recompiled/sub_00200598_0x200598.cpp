#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200598
// Address: 0x200598 - 0x2005c8
void sub_00200598_0x200598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200598_0x200598");
#endif

    ctx->pc = 0x200598u;

    // 0x200598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20059c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20059cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2005a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2005a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2005a4: 0xc080536  jal         func_2014D8
    ctx->pc = 0x2005A4u;
    SET_GPR_U32(ctx, 31, 0x2005ACu);
    ctx->pc = 0x2005A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2005A4u;
            // 0x2005a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2014D8u;
    if (runtime->hasFunction(0x2014D8u)) {
        auto targetFn = runtime->lookupFunction(0x2014D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2005ACu; }
        if (ctx->pc != 0x2005ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002014D8_0x2014d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2005ACu; }
        if (ctx->pc != 0x2005ACu) { return; }
    }
    ctx->pc = 0x2005ACu;
    // 0x2005ac: 0xc080536  jal         func_2014D8
    ctx->pc = 0x2005ACu;
    SET_GPR_U32(ctx, 31, 0x2005B4u);
    ctx->pc = 0x2005B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2005ACu;
            // 0x2005b0: 0x26040034  addiu       $a0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2014D8u;
    if (runtime->hasFunction(0x2014D8u)) {
        auto targetFn = runtime->lookupFunction(0x2014D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2005B4u; }
        if (ctx->pc != 0x2005B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002014D8_0x2014d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2005B4u; }
        if (ctx->pc != 0x2005B4u) { return; }
    }
    ctx->pc = 0x2005B4u;
    // 0x2005b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2005b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2005b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2005b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2005bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2005BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2005C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2005BCu;
            // 0x2005c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2005C4u;
    // 0x2005c4: 0x0  nop
    ctx->pc = 0x2005c4u;
    // NOP
}
