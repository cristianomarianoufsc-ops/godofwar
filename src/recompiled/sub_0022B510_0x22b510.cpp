#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B510
// Address: 0x22b510 - 0x22b570
void sub_0022B510_0x22b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B510_0x22b510");
#endif

    ctx->pc = 0x22b510u;

    // 0x22b510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b514: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22b514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b518: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22b518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22b51c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b524: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22b524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22b528:
    // 0x22b528: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x22b528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22b52c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22b530: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x22b530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x22b534: 0x2862004a  slti        $v0, $v1, 0x4A
    ctx->pc = 0x22b534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x22b538: 0x0  nop
    ctx->pc = 0x22b538u;
    // NOP
    // 0x22b53c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22B53Cu;
    {
        const bool branch_taken_0x22b53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B53Cu;
            // 0x22b540: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b53c) {
            ctx->pc = 0x22B528u;
            runtime->cooperativeGuestYield();
            goto label_22b528;
        }
    }
    ctx->pc = 0x22B544u;
    // 0x22b544: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x22B544u;
    SET_GPR_U32(ctx, 31, 0x22B54Cu);
    ctx->pc = 0x22B548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B544u;
            // 0x22b548: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B54Cu; }
        if (ctx->pc != 0x22B54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B54Cu; }
        if (ctx->pc != 0x22B54Cu) { return; }
    }
    ctx->pc = 0x22B54Cu;
    // 0x22b54c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x22B54Cu;
    SET_GPR_U32(ctx, 31, 0x22B554u);
    ctx->pc = 0x22B550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B54Cu;
            // 0x22b550: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B554u; }
        if (ctx->pc != 0x22B554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B554u; }
        if (ctx->pc != 0x22B554u) { return; }
    }
    ctx->pc = 0x22B554u;
    // 0x22b554: 0xc0912b8  jal         func_244AE0
    ctx->pc = 0x22B554u;
    SET_GPR_U32(ctx, 31, 0x22B55Cu);
    ctx->pc = 0x22B558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B554u;
            // 0x22b558: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244AE0u;
    if (runtime->hasFunction(0x244AE0u)) {
        auto targetFn = runtime->lookupFunction(0x244AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B55Cu; }
        if (ctx->pc != 0x22B55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244ae0_0x244b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B55Cu; }
        if (ctx->pc != 0x22B55Cu) { return; }
    }
    ctx->pc = 0x22B55Cu;
    // 0x22b55c: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x22b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x22b560: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22b560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b568: 0x3e00008  jr          $ra
    ctx->pc = 0x22B568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B568u;
            // 0x22b56c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B528u: goto label_22b528;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B570u;
}
