#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13e3e0
// Address: 0x13e3e0 - 0x13e420
void entry_13e3e0_0x13e420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13e3e0_0x13e420");
#endif

    ctx->pc = 0x13e3e0u;

    // 0x13e3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e3e4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13e3e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13e3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13e3ec: 0x3c0302c0  lui         $v1, 0x2C0
    ctx->pc = 0x13e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)704 << 16));
    // 0x13e3f0: 0x8c50ed58  lw          $s0, -0x12A8($v0)
    ctx->pc = 0x13e3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x13e3f4: 0x3463b4dc  ori         $v1, $v1, 0xB4DC
    ctx->pc = 0x13e3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46300);
    // 0x13e3f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e3fc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x13e3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x13e400: 0xc04f908  jal         func_13E420
    ctx->pc = 0x13E400u;
    SET_GPR_U32(ctx, 31, 0x13E408u);
    ctx->pc = 0x13E404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E400u;
            // 0x13e404: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E420u;
    if (runtime->hasFunction(0x13E420u)) {
        auto targetFn = runtime->lookupFunction(0x13E420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E408u; }
        if (ctx->pc != 0x13E408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e420_0x13e460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E408u; }
        if (ctx->pc != 0x13E408u) { return; }
    }
    ctx->pc = 0x13E408u;
    // 0x13e408: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e40c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e410: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13e410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e414: 0x3e00008  jr          $ra
    ctx->pc = 0x13E414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E414u;
            // 0x13e418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E41Cu;
    // 0x13e41c: 0x0  nop
    ctx->pc = 0x13e41cu;
    // NOP
}
