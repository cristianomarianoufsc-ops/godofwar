#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025B408
// Address: 0x25b408 - 0x25b450
void sub_0025B408_0x25b408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B408_0x25b408");
#endif

    ctx->pc = 0x25b408u;

    // 0x25b408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b40c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25b40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25b410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b414: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b41c: 0xc096402  jal         func_259008
    ctx->pc = 0x25B41Cu;
    SET_GPR_U32(ctx, 31, 0x25B424u);
    ctx->pc = 0x25B420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B41Cu;
            // 0x25b420: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B424u; }
        if (ctx->pc != 0x25B424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B424u; }
        if (ctx->pc != 0x25B424u) { return; }
    }
    ctx->pc = 0x25B424u;
    // 0x25b424: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x25b424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x25b428: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x25b428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x25b42c: 0x24633518  addiu       $v1, $v1, 0x3518
    ctx->pc = 0x25b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13592));
    // 0x25b430: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25b430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b434: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25b434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x25b438: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25b438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b43c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b43cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b444: 0x3e00008  jr          $ra
    ctx->pc = 0x25B444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B444u;
            // 0x25b448: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B44Cu;
    // 0x25b44c: 0x0  nop
    ctx->pc = 0x25b44cu;
    // NOP
}
