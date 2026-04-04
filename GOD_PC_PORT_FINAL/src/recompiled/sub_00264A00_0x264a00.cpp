#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00264A00
// Address: 0x264a00 - 0x264a48
void sub_00264A00_0x264a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264A00_0x264a00");
#endif

    ctx->pc = 0x264a00u;

    // 0x264a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x264a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x264a04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x264a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x264a08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x264a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x264a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x264a10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264a14: 0xc096402  jal         func_259008
    ctx->pc = 0x264A14u;
    SET_GPR_U32(ctx, 31, 0x264A1Cu);
    ctx->pc = 0x264A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264A14u;
            // 0x264a18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A1Cu; }
        if (ctx->pc != 0x264A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A1Cu; }
        if (ctx->pc != 0x264A1Cu) { return; }
    }
    ctx->pc = 0x264A1Cu;
    // 0x264a1c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x264a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x264a20: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x264a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x264a24: 0x24633c28  addiu       $v1, $v1, 0x3C28
    ctx->pc = 0x264a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15400));
    // 0x264a28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x264a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x264a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x264a30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x264a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264a34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x264A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264A3Cu;
            // 0x264a40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x264A44u;
    // 0x264a44: 0x0  nop
    ctx->pc = 0x264a44u;
    // NOP
}
