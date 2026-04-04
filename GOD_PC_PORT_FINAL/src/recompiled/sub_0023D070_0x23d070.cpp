#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023D070
// Address: 0x23d070 - 0x23d0a8
void sub_0023D070_0x23d070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D070_0x23d070");
#endif

    ctx->pc = 0x23d070u;

    // 0x23d070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23d070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23d074: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23d074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23d078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d07c: 0xc04e1c2  jal         func_138708
    ctx->pc = 0x23D07Cu;
    SET_GPR_U32(ctx, 31, 0x23D084u);
    ctx->pc = 0x23D080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D07Cu;
            // 0x23d080: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138708u;
    if (runtime->hasFunction(0x138708u)) {
        auto targetFn = runtime->lookupFunction(0x138708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D084u; }
        if (ctx->pc != 0x23D084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138708_0x138708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D084u; }
        if (ctx->pc != 0x23D084u) { return; }
    }
    ctx->pc = 0x23D084u;
    // 0x23d084: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x23d084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23d088: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23d088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d08c: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x23d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x23d090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d094: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x23d094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x23d098: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23d098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d09c: 0x3e00008  jr          $ra
    ctx->pc = 0x23D09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D09Cu;
            // 0x23d0a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23D0A4u;
    // 0x23d0a4: 0x0  nop
    ctx->pc = 0x23d0a4u;
    // NOP
}
