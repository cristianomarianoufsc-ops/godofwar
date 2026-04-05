#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025B2F8
// Address: 0x25b2f8 - 0x25b340
void sub_0025B2F8_0x25b2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B2F8_0x25b2f8");
#endif

    ctx->pc = 0x25b2f8u;

    // 0x25b2f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b2fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25b2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25b300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b304: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b30c: 0xc096402  jal         func_259008
    ctx->pc = 0x25B30Cu;
    SET_GPR_U32(ctx, 31, 0x25B314u);
    ctx->pc = 0x25B310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B30Cu;
            // 0x25b310: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B314u; }
        if (ctx->pc != 0x25B314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B314u; }
        if (ctx->pc != 0x25B314u) { return; }
    }
    ctx->pc = 0x25B314u;
    // 0x25b314: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x25b314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x25b318: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x25b318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x25b31c: 0x24633578  addiu       $v1, $v1, 0x3578
    ctx->pc = 0x25b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13688));
    // 0x25b320: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25b320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b324: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25b324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x25b328: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25b328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b32c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b32cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b334: 0x3e00008  jr          $ra
    ctx->pc = 0x25B334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B334u;
            // 0x25b338: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B33Cu;
    // 0x25b33c: 0x0  nop
    ctx->pc = 0x25b33cu;
    // NOP
}
