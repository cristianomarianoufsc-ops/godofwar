#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025B4E0
// Address: 0x25b4e0 - 0x25b538
void sub_0025B4E0_0x25b4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B4E0_0x25b4e0");
#endif

    ctx->pc = 0x25b4e0u;

    // 0x25b4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b4e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25b4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25b4e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b4e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b4ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b4f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b4f4: 0xc096402  jal         func_259008
    ctx->pc = 0x25B4F4u;
    SET_GPR_U32(ctx, 31, 0x25B4FCu);
    ctx->pc = 0x25B4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B4F4u;
            // 0x25b4f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B4FCu; }
        if (ctx->pc != 0x25B4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B4FCu; }
        if (ctx->pc != 0x25B4FCu) { return; }
    }
    ctx->pc = 0x25B4FCu;
    // 0x25b4fc: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x25b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x25b500: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x25b500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x25b504: 0x246334b8  addiu       $v1, $v1, 0x34B8
    ctx->pc = 0x25b504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13496));
    // 0x25b508: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25b508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b50c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x25b510: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25b510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b514: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b51c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B51Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B51Cu;
            // 0x25b520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B524u;
    // 0x25b524: 0x0  nop
    ctx->pc = 0x25b524u;
    // NOP
    // 0x25b528: 0x3e00008  jr          $ra
    ctx->pc = 0x25B528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B530u;
    // 0x25b530: 0x3e00008  jr          $ra
    ctx->pc = 0x25B530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B530u;
            // 0x25b534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B538u;
}
