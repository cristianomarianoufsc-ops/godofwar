#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001388F0
// Address: 0x1388f0 - 0x138930
void sub_001388F0_0x1388f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001388F0_0x1388f0");
#endif

    ctx->pc = 0x1388f0u;

    // 0x1388f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1388f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1388f4: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1388f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1388f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1388f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1388fc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1388fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x138900: 0x2442f1f8  addiu       $v0, $v0, -0xE08
    ctx->pc = 0x138900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963704));
    // 0x138904: 0x42583  sra         $a0, $a0, 22
    ctx->pc = 0x138904u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 22));
    // 0x138908: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x138908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13890c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13890cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x138910: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x138910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138914: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x138914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x138918: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x138918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x13891c: 0x40f809  jalr        $v0
    ctx->pc = 0x13891Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138924u);
        ctx->pc = 0x138920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13891Cu;
            // 0x138920: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x138924u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138924u; }
            if (ctx->pc != 0x138924u) { return; }
        }
        }
    }
    ctx->pc = 0x138924u;
    // 0x138924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138928: 0x3e00008  jr          $ra
    ctx->pc = 0x138928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13892Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138928u;
            // 0x13892c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138930u;
}
