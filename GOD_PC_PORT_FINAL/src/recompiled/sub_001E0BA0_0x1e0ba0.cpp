#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0BA0
// Address: 0x1e0ba0 - 0x1e0bc0
void sub_001E0BA0_0x1e0ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0BA0_0x1e0ba0");
#endif

    ctx->pc = 0x1e0ba0u;

    // 0x1e0ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0ba8: 0xc4800178  lwc1        $f0, 0x178($a0)
    ctx->pc = 0x1e0ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0bac: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1E0BACu;
    SET_GPR_U32(ctx, 31, 0x1E0BB4u);
    ctx->pc = 0x1E0BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BACu;
            // 0x1e0bb0: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BB4u; }
        if (ctx->pc != 0x1E0BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BB4u; }
        if (ctx->pc != 0x1E0BB4u) { return; }
    }
    ctx->pc = 0x1E0BB4u;
    // 0x1e0bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BB8u;
            // 0x1e0bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0BC0u;
}
