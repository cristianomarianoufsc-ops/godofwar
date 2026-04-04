#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00141768
// Address: 0x141768 - 0x1417d8
void sub_00141768_0x141768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141768_0x141768");
#endif

    ctx->pc = 0x141768u;

    // 0x141768: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x141768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14176c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14176cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x141770: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x141770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x141774: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x141774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141778: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x141778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14177c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x141780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141784: 0xc0505c4  jal         func_141710
    ctx->pc = 0x141784u;
    SET_GPR_U32(ctx, 31, 0x14178Cu);
    ctx->pc = 0x141788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141784u;
            // 0x141788: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141710u;
    if (runtime->hasFunction(0x141710u)) {
        auto targetFn = runtime->lookupFunction(0x141710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14178Cu; }
        if (ctx->pc != 0x14178Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_141710_0x141768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14178Cu; }
        if (ctx->pc != 0x14178Cu) { return; }
    }
    ctx->pc = 0x14178Cu;
    // 0x14178c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x14178cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x141790: 0x8c520034  lw          $s2, 0x34($v0)
    ctx->pc = 0x141790u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x141794: 0x1a400009  blez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x141794u;
    {
        const bool branch_taken_0x141794 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x141798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141794u;
            // 0x141798: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141794) {
            ctx->pc = 0x1417BCu;
            goto label_1417bc;
        }
    }
    ctx->pc = 0x14179Cu;
    // 0x14179c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14179cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1417a0:
    // 0x1417a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1417a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1417a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1417a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1417a8: 0xc0504fa  jal         func_1413E8
    ctx->pc = 0x1417A8u;
    SET_GPR_U32(ctx, 31, 0x1417B0u);
    ctx->pc = 0x1417ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1417A8u;
            // 0x1417ac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1413E8u;
    if (runtime->hasFunction(0x1413E8u)) {
        auto targetFn = runtime->lookupFunction(0x1413E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417B0u; }
        if (ctx->pc != 0x1417B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001413E8_0x1413e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417B0u; }
        if (ctx->pc != 0x1417B0u) { return; }
    }
    ctx->pc = 0x1417B0u;
    // 0x1417b0: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1417b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1417b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1417B4u;
    {
        const bool branch_taken_0x1417b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1417B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1417B4u;
            // 0x1417b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1417b4) {
            ctx->pc = 0x1417A0u;
            runtime->cooperativeGuestYield();
            goto label_1417a0;
        }
    }
    ctx->pc = 0x1417BCu;
label_1417bc:
    // 0x1417bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1417bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1417c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1417c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1417c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1417c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1417c8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1417c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1417cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1417ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1417d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1417D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1417D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1417D0u;
            // 0x1417d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1417A0u: goto label_1417a0;
            case 0x1417BCu: goto label_1417bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1417D8u;
}
