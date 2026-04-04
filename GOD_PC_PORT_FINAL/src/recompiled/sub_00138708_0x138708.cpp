#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138708
// Address: 0x138708 - 0x138740
void sub_00138708_0x138708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138708_0x138708");
#endif

    ctx->pc = 0x138708u;

    // 0x138708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13870c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13870cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x138710: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x138710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x138714: 0x2442e810  addiu       $v0, $v0, -0x17F0
    ctx->pc = 0x138714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961168));
    // 0x138718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13871c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13871cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138720: 0xc04e1de  jal         func_138778
    ctx->pc = 0x138720u;
    SET_GPR_U32(ctx, 31, 0x138728u);
    ctx->pc = 0x138724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138720u;
            // 0x138724: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138778u;
    if (runtime->hasFunction(0x138778u)) {
        auto targetFn = runtime->lookupFunction(0x138778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138728u; }
        if (ctx->pc != 0x138728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138778_0x1387c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138728u; }
        if (ctx->pc != 0x138728u) { return; }
    }
    ctx->pc = 0x138728u;
    // 0x138728: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x138728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13872c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13872cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138730: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x138730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138734: 0x3e00008  jr          $ra
    ctx->pc = 0x138734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138734u;
            // 0x138738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13873Cu;
    // 0x13873c: 0x0  nop
    ctx->pc = 0x13873cu;
    // NOP
}
