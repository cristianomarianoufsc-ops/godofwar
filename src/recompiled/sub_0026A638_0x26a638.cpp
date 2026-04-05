#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A638
// Address: 0x26a638 - 0x26a680
void sub_0026A638_0x26a638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A638_0x26a638");
#endif

    ctx->pc = 0x26a638u;

    // 0x26a638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26a638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26a63c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26a63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26a640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26a640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a644: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26a64c: 0xc096402  jal         func_259008
    ctx->pc = 0x26A64Cu;
    SET_GPR_U32(ctx, 31, 0x26A654u);
    ctx->pc = 0x26A650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A64Cu;
            // 0x26a650: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A654u; }
        if (ctx->pc != 0x26A654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A654u; }
        if (ctx->pc != 0x26A654u) { return; }
    }
    ctx->pc = 0x26A654u;
    // 0x26a654: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x26a654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x26a658: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x26a658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x26a65c: 0x24633d38  addiu       $v1, $v1, 0x3D38
    ctx->pc = 0x26a65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15672));
    // 0x26a660: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26a660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a664: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x26a664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x26a668: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26a668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a66c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a674: 0x3e00008  jr          $ra
    ctx->pc = 0x26A674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A674u;
            // 0x26a678: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A67Cu;
    // 0x26a67c: 0x0  nop
    ctx->pc = 0x26a67cu;
    // NOP
}
