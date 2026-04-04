#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186678
// Address: 0x186678 - 0x186710
void sub_00186678_0x186678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186678_0x186678");
#endif

    ctx->pc = 0x186678u;

label_186678:
    // 0x186678: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x186678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18667c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18667cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x186680: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x186680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x186684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186688: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x186688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18668c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18668cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x186690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x186694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186698: 0xc05d69c  jal         func_175A70
    ctx->pc = 0x186698u;
    SET_GPR_U32(ctx, 31, 0x1866A0u);
    ctx->pc = 0x18669Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186698u;
            // 0x18669c: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A70u;
    if (runtime->hasFunction(0x175A70u)) {
        auto targetFn = runtime->lookupFunction(0x175A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866A0u; }
        if (ctx->pc != 0x1866A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A70_0x175a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866A0u; }
        if (ctx->pc != 0x1866A0u) { return; }
    }
    ctx->pc = 0x1866A0u;
    // 0x1866a0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1866A0u;
    {
        const bool branch_taken_0x1866a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1866A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1866A0u;
            // 0x1866a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866a0) {
            ctx->pc = 0x1866F4u;
            goto label_1866f4;
        }
    }
    ctx->pc = 0x1866A8u;
    // 0x1866a8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1866a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1866ac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1866ACu;
    {
        const bool branch_taken_0x1866ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1866B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1866ACu;
            // 0x1866b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866ac) {
            ctx->pc = 0x1866F0u;
            goto label_1866f0;
        }
    }
    ctx->pc = 0x1866B4u;
    // 0x1866b4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1866b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1866b8:
    // 0x1866b8: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x1866b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1866bc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1866bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1866c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1866c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1866c4: 0xc06199e  jal         func_186678
    ctx->pc = 0x1866C4u;
    SET_GPR_U32(ctx, 31, 0x1866CCu);
    ctx->pc = 0x1866C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1866C4u;
            // 0x1866c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186678u;
    runtime->cooperativeGuestYield();
    goto label_186678;
    ctx->pc = 0x1866CCu;
label_1866cc:
    // 0x1866cc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1866CCu;
    {
        const bool branch_taken_0x1866cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1866D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1866CCu;
            // 0x1866d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866cc) {
            ctx->pc = 0x1866F4u;
            goto label_1866f4;
        }
    }
    ctx->pc = 0x1866D4u;
    // 0x1866d4: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x1866d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1866d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1866D8u;
    {
        const bool branch_taken_0x1866d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1866DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1866D8u;
            // 0x1866dc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866d8) {
            ctx->pc = 0x1866F0u;
            goto label_1866f0;
        }
    }
    ctx->pc = 0x1866E0u;
    // 0x1866e0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1866e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1866e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1866e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1866e8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1866E8u;
    {
        const bool branch_taken_0x1866e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1866ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1866E8u;
            // 0x1866ec: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866e8) {
            ctx->pc = 0x1866B8u;
            runtime->cooperativeGuestYield();
            goto label_1866b8;
        }
    }
    ctx->pc = 0x1866F0u;
label_1866f0:
    // 0x1866f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1866f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1866f4:
    // 0x1866f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1866f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1866f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1866f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1866fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1866fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186700: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x186700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186708: 0x3e00008  jr          $ra
    ctx->pc = 0x186708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18670Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186708u;
            // 0x18670c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186678u: goto label_186678;
            case 0x1866B8u: goto label_1866b8;
            case 0x1866CCu: goto label_1866cc;
            case 0x1866F0u: goto label_1866f0;
            case 0x1866F4u: goto label_1866f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186710u;
}
