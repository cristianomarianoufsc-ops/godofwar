#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001809D0
// Address: 0x1809d0 - 0x180a10
void sub_001809D0_0x1809d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001809D0_0x1809d0");
#endif

    ctx->pc = 0x1809d0u;

    // 0x1809d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1809d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1809d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1809d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1809d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1809d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1809dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1809dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1809e0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1809e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1809e4: 0xae02c748  sw          $v0, -0x38B8($s0)
    ctx->pc = 0x1809e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952776), GPR_U32(ctx, 2));
    // 0x1809e8: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x1809e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1809ec: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1809ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1809f0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1809f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1809f4: 0x60f809  jalr        $v1
    ctx->pc = 0x1809F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1809FCu);
        ctx->pc = 0x1809F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1809F4u;
            // 0x1809f8: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1809FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1809FCu; }
            if (ctx->pc != 0x1809FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1809FCu;
    // 0x1809fc: 0xae00c748  sw          $zero, -0x38B8($s0)
    ctx->pc = 0x1809fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952776), GPR_U32(ctx, 0));
    // 0x180a00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x180a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180a08: 0x3e00008  jr          $ra
    ctx->pc = 0x180A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180A08u;
            // 0x180a0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180A10u;
}
