#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBCA0
// Address: 0x1bbca0 - 0x1bbcf8
void sub_001BBCA0_0x1bbca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBCA0_0x1bbca0");
#endif

    ctx->pc = 0x1bbca0u;

    // 0x1bbca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbca4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bbca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbcac: 0x8c425a40  lw          $v0, 0x5A40($v0)
    ctx->pc = 0x1bbcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23104)));
    // 0x1bbcb0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1bbcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bbcb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bbcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bbcb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBCB8u;
    {
        const bool branch_taken_0x1bbcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBCB8u;
            // 0x1bbcbc: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbcb8) {
            ctx->pc = 0x1BBCD0u;
            goto label_1bbcd0;
        }
    }
    ctx->pc = 0x1BBCC0u;
    // 0x1bbcc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbcc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bbcc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcc8: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BBCC8u;
    SET_GPR_U32(ctx, 31, 0x1BBCD0u);
    ctx->pc = 0x1BBCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBCC8u;
            // 0x1bbccc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBCD0u; }
        if (ctx->pc != 0x1BBCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBCD0u; }
        if (ctx->pc != 0x1BBCD0u) { return; }
    }
    ctx->pc = 0x1BBCD0u;
label_1bbcd0:
    // 0x1bbcd0: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1bbcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1bbcd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbcd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bbcd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcdc: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BBCDCu;
    SET_GPR_U32(ctx, 31, 0x1BBCE4u);
    ctx->pc = 0x1BBCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBCDCu;
            // 0x1bbce0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBCE4u; }
        if (ctx->pc != 0x1BBCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBCE4u; }
        if (ctx->pc != 0x1BBCE4u) { return; }
    }
    ctx->pc = 0x1BBCE4u;
    // 0x1bbce4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bbce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bbce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbcec: 0xac40cc54  sw          $zero, -0x33AC($v0)
    ctx->pc = 0x1bbcecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954068), GPR_U32(ctx, 0));
    // 0x1bbcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBCF0u;
            // 0x1bbcf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BBCD0u: goto label_1bbcd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BBCF8u;
}
