#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025A9E0
// Address: 0x25a9e0 - 0x25aa28
void sub_0025A9E0_0x25a9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A9E0_0x25a9e0");
#endif

    ctx->pc = 0x25a9e0u;

    // 0x25a9e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25a9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25a9e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25a9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25a9e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25a9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a9ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25a9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25a9f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a9f4: 0xc096402  jal         func_259008
    ctx->pc = 0x25A9F4u;
    SET_GPR_U32(ctx, 31, 0x25A9FCu);
    ctx->pc = 0x25A9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A9F4u;
            // 0x25a9f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A9FCu; }
        if (ctx->pc != 0x25A9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A9FCu; }
        if (ctx->pc != 0x25A9FCu) { return; }
    }
    ctx->pc = 0x25A9FCu;
    // 0x25a9fc: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x25a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x25aa00: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x25aa00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x25aa04: 0x246336f8  addiu       $v1, $v1, 0x36F8
    ctx->pc = 0x25aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14072));
    // 0x25aa08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25aa08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25aa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x25aa10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25aa10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25aa14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25aa14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25aa18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25aa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25aa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x25AA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AA1Cu;
            // 0x25aa20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25AA24u;
    // 0x25aa24: 0x0  nop
    ctx->pc = 0x25aa24u;
    // NOP
}
