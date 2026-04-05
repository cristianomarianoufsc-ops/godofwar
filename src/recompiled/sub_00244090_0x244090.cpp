#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244090
// Address: 0x244090 - 0x2440b8
void sub_00244090_0x244090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244090_0x244090");
#endif

    ctx->pc = 0x244090u;

    // 0x244090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x244094: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x244094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x244098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24409c: 0xc091022  jal         func_244088
    ctx->pc = 0x24409Cu;
    SET_GPR_U32(ctx, 31, 0x2440A4u);
    ctx->pc = 0x2440A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24409Cu;
            // 0x2440a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244088u;
    if (runtime->hasFunction(0x244088u)) {
        auto targetFn = runtime->lookupFunction(0x244088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2440A4u; }
        if (ctx->pc != 0x2440A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244088_0x244090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2440A4u; }
        if (ctx->pc != 0x2440A4u) { return; }
    }
    ctx->pc = 0x2440A4u;
    // 0x2440a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2440a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2440a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2440a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2440ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2440acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2440b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2440B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2440B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2440B0u;
            // 0x2440b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2440B8u;
}
