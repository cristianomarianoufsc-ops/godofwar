#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00243A50
// Address: 0x243a50 - 0x243a98
void sub_00243A50_0x243a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243A50_0x243a50");
#endif

    ctx->pc = 0x243a50u;

    // 0x243a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243a54: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x243a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x243a58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x243a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x243a5c: 0x244221d8  addiu       $v0, $v0, 0x21D8
    ctx->pc = 0x243a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8664));
    // 0x243a60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243a64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x243a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243a68: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x243a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x243a6c: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x243a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x243a70: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x243a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x243a74: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x243a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x243a78: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x243a78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x243a7c: 0xc08eb9c  jal         func_23AE70
    ctx->pc = 0x243A7Cu;
    SET_GPR_U32(ctx, 31, 0x243A84u);
    ctx->pc = 0x243A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243A7Cu;
            // 0x243a80: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AE70u;
    if (runtime->hasFunction(0x23AE70u)) {
        auto targetFn = runtime->lookupFunction(0x23AE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A84u; }
        if (ctx->pc != 0x243A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ae70_0x23ae80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A84u; }
        if (ctx->pc != 0x243A84u) { return; }
    }
    ctx->pc = 0x243A84u;
    // 0x243a84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x243a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243a88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243a8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x243a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243a90: 0x3e00008  jr          $ra
    ctx->pc = 0x243A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243A90u;
            // 0x243a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243A98u;
}
