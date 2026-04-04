#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CFB88
// Address: 0x1cfb88 - 0x1cfbd0
void sub_001CFB88_0x1cfb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFB88_0x1cfb88");
#endif

    ctx->pc = 0x1cfb88u;

    // 0x1cfb88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cfb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cfb8c: 0x24020411  addiu       $v0, $zero, 0x411
    ctx->pc = 0x1cfb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
    // 0x1cfb90: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1cfb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1cfb94: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x1cfb94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cfb98: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cfb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1cfb9c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1cfb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1cfba0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1cfba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1cfba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cfba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cfba8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1cfba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1cfbac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cfbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cfbb0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cfbb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfbb4: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1cfbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1cfbb8: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1CFBB8u;
    SET_GPR_U32(ctx, 31, 0x1CFBC0u);
    ctx->pc = 0x1CFBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFBB8u;
            // 0x1cfbbc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFBC0u; }
        if (ctx->pc != 0x1CFBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFBC0u; }
        if (ctx->pc != 0x1CFBC0u) { return; }
    }
    ctx->pc = 0x1CFBC0u;
    // 0x1cfbc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cfbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFBC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFBC4u;
            // 0x1cfbc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CFBCCu;
    // 0x1cfbcc: 0x0  nop
    ctx->pc = 0x1cfbccu;
    // NOP
}
