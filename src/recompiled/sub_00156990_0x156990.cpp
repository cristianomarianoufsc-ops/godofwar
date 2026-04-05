#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156990
// Address: 0x156990 - 0x1569c8
void sub_00156990_0x156990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156990_0x156990");
#endif

    ctx->pc = 0x156990u;

    // 0x156990: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x156990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x156994: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15699c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15699cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1569a0: 0x8c43e884  lw          $v1, -0x177C($v0)
    ctx->pc = 0x1569a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961284)));
    // 0x1569a4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1569a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1569a8: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1569a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1569ac: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1569acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1569b0: 0x40f809  jalr        $v0
    ctx->pc = 0x1569B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1569B8u);
        ctx->pc = 0x1569B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1569B0u;
            // 0x1569b4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1569B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1569B8u; }
            if (ctx->pc != 0x1569B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1569B8u;
    // 0x1569b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1569b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1569bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1569BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1569C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1569BCu;
            // 0x1569c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1569C4u;
    // 0x1569c4: 0x0  nop
    ctx->pc = 0x1569c4u;
    // NOP
}
