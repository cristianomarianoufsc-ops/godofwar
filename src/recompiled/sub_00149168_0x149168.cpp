#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00149168
// Address: 0x149168 - 0x1491a0
void sub_00149168_0x149168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149168_0x149168");
#endif

    ctx->pc = 0x149168u;

    // 0x149168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14916c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14916cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x149170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149174: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149178: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x149178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x14917c: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x14917cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x149180: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x149180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x149184: 0xc05309e  jal         func_14C278
    ctx->pc = 0x149184u;
    SET_GPR_U32(ctx, 31, 0x14918Cu);
    ctx->pc = 0x149188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149184u;
            // 0x149188: 0x520c0  sll         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C278u;
    if (runtime->hasFunction(0x14C278u)) {
        auto targetFn = runtime->lookupFunction(0x14C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14918Cu; }
        if (ctx->pc != 0x14918Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C278_0x14c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14918Cu; }
        if (ctx->pc != 0x14918Cu) { return; }
    }
    ctx->pc = 0x14918Cu;
    // 0x14918c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x14918cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x149190: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x149190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149198: 0x3e00008  jr          $ra
    ctx->pc = 0x149198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14919Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149198u;
            // 0x14919c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1491A0u;
}
