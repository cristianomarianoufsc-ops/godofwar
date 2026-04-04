#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6378
// Address: 0x1a6378 - 0x1a63e8
void sub_001A6378_0x1a6378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6378_0x1a6378");
#endif

    ctx->pc = 0x1a6378u;

    // 0x1a6378: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a6378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a637c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a6380: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a6380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a6384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a638c: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1a638cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a6390: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a6390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a6394: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1a6394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a6398: 0x8c510088  lw          $s1, 0x88($v0)
    ctx->pc = 0x1a6398u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1a639c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a639cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a63a0: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A63A0u;
    {
        const bool branch_taken_0x1a63a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1A63A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A63A0u;
            // 0x1a63a4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63a0) {
            ctx->pc = 0x1A63C8u;
            goto label_1a63c8;
        }
    }
    ctx->pc = 0x1A63A8u;
label_1a63a8:
    // 0x1a63a8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1a63a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a63ac: 0xc069726  jal         func_1A5C98
    ctx->pc = 0x1A63ACu;
    SET_GPR_U32(ctx, 31, 0x1A63B4u);
    ctx->pc = 0x1A63B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A63ACu;
            // 0x1a63b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C98u;
    if (runtime->hasFunction(0x1A5C98u)) {
        auto targetFn = runtime->lookupFunction(0x1A5C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63B4u; }
        if (ctx->pc != 0x1A63B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5C98_0x1a5c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63B4u; }
        if (ctx->pc != 0x1A63B4u) { return; }
    }
    ctx->pc = 0x1A63B4u;
    // 0x1a63b4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a63b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a63b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a63bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a63c0: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A63C0u;
    {
        const bool branch_taken_0x1a63c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A63C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A63C0u;
            // 0x1a63c4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63c0) {
            ctx->pc = 0x1A63A8u;
            runtime->cooperativeGuestYield();
            goto label_1a63a8;
        }
    }
    ctx->pc = 0x1A63C8u;
label_1a63c8:
    // 0x1a63c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a63c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a63cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a63ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a63d0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a63d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1a63d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a63d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a63d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a63d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a63dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A63DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A63E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A63DCu;
            // 0x1a63e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A63A8u: goto label_1a63a8;
            case 0x1A63C8u: goto label_1a63c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A63E4u;
    // 0x1a63e4: 0x0  nop
    ctx->pc = 0x1a63e4u;
    // NOP
}
