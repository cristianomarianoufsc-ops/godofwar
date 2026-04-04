#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D488
// Address: 0x22d488 - 0x22d4c0
void sub_0022D488_0x22d488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D488_0x22d488");
#endif

    ctx->pc = 0x22d488u;

    // 0x22d488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22d488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22d48c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22d490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22d494: 0x2442b6c0  addiu       $v0, $v0, -0x4940
    ctx->pc = 0x22d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948544));
    // 0x22d498: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22d498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22d49c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x22d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22d4a0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x22d4a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22d4a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22d4a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22d4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22d4ac: 0xc08b422  jal         func_22D088
    ctx->pc = 0x22D4ACu;
    SET_GPR_U32(ctx, 31, 0x22D4B4u);
    ctx->pc = 0x22D4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D4ACu;
            // 0x22d4b0: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D4B4u; }
        if (ctx->pc != 0x22D4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D4B4u; }
        if (ctx->pc != 0x22D4B4u) { return; }
    }
    ctx->pc = 0x22D4B4u;
    // 0x22d4b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x22D4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D4B8u;
            // 0x22d4bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D4C0u;
}
