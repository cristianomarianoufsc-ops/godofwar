#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_200d60
// Address: 0x200d60 - 0x200d88
void entry_200d60_0x200d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_200d60_0x200d88");
#endif

    ctx->pc = 0x200d60u;

    // 0x200d60: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x200d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x200d64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200d64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200d68: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x200d68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x200d6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200d70: 0xc080554  jal         func_201550
    ctx->pc = 0x200D70u;
    SET_GPR_U32(ctx, 31, 0x200D78u);
    ctx->pc = 0x200D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200D70u;
            // 0x200d74: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201550u;
    if (runtime->hasFunction(0x201550u)) {
        auto targetFn = runtime->lookupFunction(0x201550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D78u; }
        if (ctx->pc != 0x200D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201550_0x201550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D78u; }
        if (ctx->pc != 0x200D78u) { return; }
    }
    ctx->pc = 0x200D78u;
    // 0x200d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x200D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200D7Cu;
            // 0x200d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200D84u;
    // 0x200d84: 0x0  nop
    ctx->pc = 0x200d84u;
    // NOP
}
