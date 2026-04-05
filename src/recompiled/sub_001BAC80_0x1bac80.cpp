#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BAC80
// Address: 0x1bac80 - 0x1bacc8
void sub_001BAC80_0x1bac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAC80_0x1bac80");
#endif

    ctx->pc = 0x1bac80u;

    // 0x1bac80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bac84: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1bac84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1bac88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bac88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bac8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bac8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bac90: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1BAC90u;
    SET_GPR_U32(ctx, 31, 0x1BAC98u);
    ctx->pc = 0x1BAC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC90u;
            // 0x1bac94: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC98u; }
        if (ctx->pc != 0x1BAC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC98u; }
        if (ctx->pc != 0x1BAC98u) { return; }
    }
    ctx->pc = 0x1BAC98u;
    // 0x1bac98: 0xc061612  jal         func_185848
    ctx->pc = 0x1BAC98u;
    SET_GPR_U32(ctx, 31, 0x1BACA0u);
    ctx->pc = 0x1BAC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC98u;
            // 0x1bac9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185848u;
    if (runtime->hasFunction(0x185848u)) {
        auto targetFn = runtime->lookupFunction(0x185848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACA0u; }
        if (ctx->pc != 0x1BACA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185848_0x185848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACA0u; }
        if (ctx->pc != 0x1BACA0u) { return; }
    }
    ctx->pc = 0x1BACA0u;
    // 0x1baca0: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1baca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1baca4: 0xae025a28  sw          $v0, 0x5A28($s0)
    ctx->pc = 0x1baca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23080), GPR_U32(ctx, 2));
    // 0x1baca8: 0x24a5b000  addiu       $a1, $a1, -0x5000
    ctx->pc = 0x1baca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    // 0x1bacac: 0xc0618c0  jal         func_186300
    ctx->pc = 0x1BACACu;
    SET_GPR_U32(ctx, 31, 0x1BACB4u);
    ctx->pc = 0x1BACB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BACACu;
            // 0x1bacb0: 0x240401f4  addiu       $a0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACB4u; }
        if (ctx->pc != 0x1BACB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACB4u; }
        if (ctx->pc != 0x1BACB4u) { return; }
    }
    ctx->pc = 0x1BACB4u;
    // 0x1bacb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bacb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bacb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bacb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bacbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BACBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BACC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BACBCu;
            // 0x1bacc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BACC4u;
    // 0x1bacc4: 0x0  nop
    ctx->pc = 0x1bacc4u;
    // NOP
}
