#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_200d88
// Address: 0x200d88 - 0x200db0
void entry_200d88_0x200db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_200d88_0x200db0");
#endif

    ctx->pc = 0x200d88u;

    // 0x200d88: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x200d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x200d8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200d90: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x200d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x200d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200d98: 0xc080566  jal         func_201598
    ctx->pc = 0x200D98u;
    SET_GPR_U32(ctx, 31, 0x200DA0u);
    ctx->pc = 0x200D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200D98u;
            // 0x200d9c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201598u;
    if (runtime->hasFunction(0x201598u)) {
        auto targetFn = runtime->lookupFunction(0x201598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DA0u; }
        if (ctx->pc != 0x200DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201598_0x201598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DA0u; }
        if (ctx->pc != 0x200DA0u) { return; }
    }
    ctx->pc = 0x200DA0u;
    // 0x200da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200da4: 0x3e00008  jr          $ra
    ctx->pc = 0x200DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200DA4u;
            // 0x200da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200DACu;
    // 0x200dac: 0x0  nop
    ctx->pc = 0x200dacu;
    // NOP
}
