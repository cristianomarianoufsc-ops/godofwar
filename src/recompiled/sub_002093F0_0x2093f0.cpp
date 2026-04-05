#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002093F0
// Address: 0x2093f0 - 0x209480
void sub_002093F0_0x2093f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002093F0_0x2093f0");
#endif

    ctx->pc = 0x2093f0u;

    // 0x2093f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2093f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2093f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2093f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2093f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2093f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2093fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2093fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209400: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x209400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x209404: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20940c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x209410: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x209410u;
    {
        const bool branch_taken_0x209410 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x209414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209410u;
            // 0x209414: 0x30b2ffff  andi        $s2, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209410) {
            ctx->pc = 0x209460u;
            goto label_209460;
        }
    }
    ctx->pc = 0x209418u;
    // 0x209418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20941c: 0x0  nop
    ctx->pc = 0x20941cu;
    // NOP
label_209420:
    // 0x209420: 0xc0824f4  jal         func_2093D0
    ctx->pc = 0x209420u;
    SET_GPR_U32(ctx, 31, 0x209428u);
    ctx->pc = 0x209424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209420u;
            // 0x209424: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2093D0u;
    if (runtime->hasFunction(0x2093D0u)) {
        auto targetFn = runtime->lookupFunction(0x2093D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209428u; }
        if (ctx->pc != 0x209428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002093D0_0x2093d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209428u; }
        if (ctx->pc != 0x209428u) { return; }
    }
    ctx->pc = 0x209428u;
    // 0x209428: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209428u;
    {
        const bool branch_taken_0x209428 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20942Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209428u;
            // 0x20942c: 0x242102a  slt         $v0, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209428) {
            ctx->pc = 0x209444u;
            goto label_209444;
        }
    }
    ctx->pc = 0x209430u;
    // 0x209430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209434: 0xc0824ee  jal         func_2093B8
    ctx->pc = 0x209434u;
    SET_GPR_U32(ctx, 31, 0x20943Cu);
    ctx->pc = 0x209438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209434u;
            // 0x209438: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2093B8u;
    if (runtime->hasFunction(0x2093B8u)) {
        auto targetFn = runtime->lookupFunction(0x2093B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20943Cu; }
        if (ctx->pc != 0x20943Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2093b8_0x2093d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20943Cu; }
        if (ctx->pc != 0x20943Cu) { return; }
    }
    ctx->pc = 0x20943Cu;
    // 0x20943c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20943Cu;
    {
        const bool branch_taken_0x20943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20943Cu;
            // 0x209440: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20943c) {
            ctx->pc = 0x209468u;
            goto label_209468;
        }
    }
    ctx->pc = 0x209444u;
label_209444:
    // 0x209444: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x209444u;
    {
        const bool branch_taken_0x209444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209444u;
            // 0x209448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209444) {
            ctx->pc = 0x209464u;
            goto label_209464;
        }
    }
    ctx->pc = 0x20944Cu;
    // 0x20944c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x209450: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x209450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x209454: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x209454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x209458: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x209458u;
    {
        const bool branch_taken_0x209458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20945Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209458u;
            // 0x20945c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209458) {
            ctx->pc = 0x209420u;
            runtime->cooperativeGuestYield();
            goto label_209420;
        }
    }
    ctx->pc = 0x209460u;
label_209460:
    // 0x209460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x209460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209464:
    // 0x209464: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x209464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_209468:
    // 0x209468: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x209468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20946c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20946cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209474: 0x3e00008  jr          $ra
    ctx->pc = 0x209474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209474u;
            // 0x209478: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209420u: goto label_209420;
            case 0x209444u: goto label_209444;
            case 0x209460u: goto label_209460;
            case 0x209464u: goto label_209464;
            case 0x209468u: goto label_209468;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20947Cu;
    // 0x20947c: 0x0  nop
    ctx->pc = 0x20947cu;
    // NOP
}
