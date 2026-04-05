#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023F560
// Address: 0x23f560 - 0x23f598
void sub_0023F560_0x23f560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F560_0x23f560");
#endif

    ctx->pc = 0x23f560u;

    // 0x23f560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f564: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23f564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23f568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f56c: 0xc0964e8  jal         func_2593A0
    ctx->pc = 0x23F56Cu;
    SET_GPR_U32(ctx, 31, 0x23F574u);
    ctx->pc = 0x23F570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F56Cu;
            // 0x23f570: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2593A0u;
    if (runtime->hasFunction(0x2593A0u)) {
        auto targetFn = runtime->lookupFunction(0x2593A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F574u; }
        if (ctx->pc != 0x23F574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2593a0_0x2593c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F574u; }
        if (ctx->pc != 0x23F574u) { return; }
    }
    ctx->pc = 0x23F574u;
    // 0x23f574: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x23f574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23f578: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23f578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f57c: 0x246327a8  addiu       $v1, $v1, 0x27A8
    ctx->pc = 0x23f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10152));
    // 0x23f580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f584: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x23f584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x23f588: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23f588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f58c: 0x3e00008  jr          $ra
    ctx->pc = 0x23F58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F58Cu;
            // 0x23f590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23F594u;
    // 0x23f594: 0x0  nop
    ctx->pc = 0x23f594u;
    // NOP
}
