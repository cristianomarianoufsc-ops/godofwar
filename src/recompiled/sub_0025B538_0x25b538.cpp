#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025B538
// Address: 0x25b538 - 0x25b590
void sub_0025B538_0x25b538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B538_0x25b538");
#endif

    ctx->pc = 0x25b538u;

    // 0x25b538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b53c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25b53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25b540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b544: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b54c: 0xc096402  jal         func_259008
    ctx->pc = 0x25B54Cu;
    SET_GPR_U32(ctx, 31, 0x25B554u);
    ctx->pc = 0x25B550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B54Cu;
            // 0x25b550: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B554u; }
        if (ctx->pc != 0x25B554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B554u; }
        if (ctx->pc != 0x25B554u) { return; }
    }
    ctx->pc = 0x25B554u;
    // 0x25b554: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x25b554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x25b558: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x25b558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x25b55c: 0x24633498  addiu       $v1, $v1, 0x3498
    ctx->pc = 0x25b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13464));
    // 0x25b560: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25b560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b564: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25b564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x25b568: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25b568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b56c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b56cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b574: 0x3e00008  jr          $ra
    ctx->pc = 0x25B574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B574u;
            // 0x25b578: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B57Cu;
    // 0x25b57c: 0x0  nop
    ctx->pc = 0x25b57cu;
    // NOP
    // 0x25b580: 0x3e00008  jr          $ra
    ctx->pc = 0x25B580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B588u;
    // 0x25b588: 0x3e00008  jr          $ra
    ctx->pc = 0x25B588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B588u;
            // 0x25b58c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B590u;
}
