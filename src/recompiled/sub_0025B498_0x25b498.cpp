#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025B498
// Address: 0x25b498 - 0x25b4e0
void sub_0025B498_0x25b498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B498_0x25b498");
#endif

    ctx->pc = 0x25b498u;

    // 0x25b498: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b49c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25b49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25b4a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b4a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b4a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b4a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b4ac: 0xc096402  jal         func_259008
    ctx->pc = 0x25B4ACu;
    SET_GPR_U32(ctx, 31, 0x25B4B4u);
    ctx->pc = 0x25B4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B4ACu;
            // 0x25b4b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B4B4u; }
        if (ctx->pc != 0x25B4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B4B4u; }
        if (ctx->pc != 0x25B4B4u) { return; }
    }
    ctx->pc = 0x25B4B4u;
    // 0x25b4b4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x25b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x25b4b8: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x25b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x25b4bc: 0x246334d8  addiu       $v1, $v1, 0x34D8
    ctx->pc = 0x25b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13528));
    // 0x25b4c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25b4c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b4c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x25b4c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25b4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b4cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b4ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b4d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x25B4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B4D4u;
            // 0x25b4d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B4DCu;
    // 0x25b4dc: 0x0  nop
    ctx->pc = 0x25b4dcu;
    // NOP
}
