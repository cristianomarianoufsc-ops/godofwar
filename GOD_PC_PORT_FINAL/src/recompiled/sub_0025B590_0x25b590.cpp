#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025B590
// Address: 0x25b590 - 0x25b5d8
void sub_0025B590_0x25b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B590_0x25b590");
#endif

    ctx->pc = 0x25b590u;

    // 0x25b590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b594: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25b594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25b598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b59c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b5a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b5a4: 0xc096402  jal         func_259008
    ctx->pc = 0x25B5A4u;
    SET_GPR_U32(ctx, 31, 0x25B5ACu);
    ctx->pc = 0x25B5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B5A4u;
            // 0x25b5a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B5ACu; }
        if (ctx->pc != 0x25B5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B5ACu; }
        if (ctx->pc != 0x25B5ACu) { return; }
    }
    ctx->pc = 0x25B5ACu;
    // 0x25b5ac: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x25b5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x25b5b0: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x25b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x25b5b4: 0x24633478  addiu       $v1, $v1, 0x3478
    ctx->pc = 0x25b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13432));
    // 0x25b5b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25b5b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b5bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x25b5c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25b5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b5c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x25B5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B5CCu;
            // 0x25b5d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B5D4u;
    // 0x25b5d4: 0x0  nop
    ctx->pc = 0x25b5d4u;
    // NOP
}
