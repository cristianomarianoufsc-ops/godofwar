#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B908
// Address: 0x22b908 - 0x22b938
void sub_0022B908_0x22b908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B908_0x22b908");
#endif

    ctx->pc = 0x22b908u;

    // 0x22b908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b90c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22b90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22b910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b918: 0xc05f9de  jal         func_17E778
    ctx->pc = 0x22B918u;
    SET_GPR_U32(ctx, 31, 0x22B920u);
    ctx->pc = 0x22B91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B918u;
            // 0x22b91c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E778u;
    if (runtime->hasFunction(0x17E778u)) {
        auto targetFn = runtime->lookupFunction(0x17E778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B920u; }
        if (ctx->pc != 0x22B920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e778_0x17e7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B920u; }
        if (ctx->pc != 0x22B920u) { return; }
    }
    ctx->pc = 0x22B920u;
    // 0x22b920: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x22b920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x22b924: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22b924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b92c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B92Cu;
            // 0x22b930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B934u;
    // 0x22b934: 0x0  nop
    ctx->pc = 0x22b934u;
    // NOP
}
