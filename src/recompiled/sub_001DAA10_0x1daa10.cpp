#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DAA10
// Address: 0x1daa10 - 0x1daa48
void sub_001DAA10_0x1daa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAA10_0x1daa10");
#endif

    ctx->pc = 0x1daa10u;

    // 0x1daa10: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1daa10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1daa14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1daa14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1daa18: 0x94672d28  lhu         $a3, 0x2D28($v1)
    ctx->pc = 0x1daa18u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 11560)));
    // 0x1daa1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1daa1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1daa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1daa24: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1daa24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa28: 0xac4601d0  sw          $a2, 0x1D0($v0)
    ctx->pc = 0x1daa28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
    // 0x1daa2c: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x1daa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1daa30: 0xc076c94  jal         func_1DB250
    ctx->pc = 0x1DAA30u;
    SET_GPR_U32(ctx, 31, 0x1DAA38u);
    ctx->pc = 0x1DAA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA30u;
            // 0x1daa34: 0xac4301cc  sw          $v1, 0x1CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 460), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB250u;
    if (runtime->hasFunction(0x1DB250u)) {
        auto targetFn = runtime->lookupFunction(0x1DB250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA38u; }
        if (ctx->pc != 0x1DAA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1db250_0x1db2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA38u; }
        if (ctx->pc != 0x1DAA38u) { return; }
    }
    ctx->pc = 0x1DAA38u;
    // 0x1daa38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1daa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1daa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA3Cu;
            // 0x1daa40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DAA44u;
    // 0x1daa44: 0x0  nop
    ctx->pc = 0x1daa44u;
    // NOP
}
