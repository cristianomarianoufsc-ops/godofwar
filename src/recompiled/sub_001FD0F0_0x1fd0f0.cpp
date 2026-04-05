#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD0F0
// Address: 0x1fd0f0 - 0x1fd1a0
void sub_001FD0F0_0x1fd0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD0F0_0x1fd0f0");
#endif

    ctx->pc = 0x1fd0f0u;

    // 0x1fd0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd0f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fd0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fd0f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd0fc: 0xc07f394  jal         func_1FCE50
    ctx->pc = 0x1FD0FCu;
    SET_GPR_U32(ctx, 31, 0x1FD104u);
    ctx->pc = 0x1FD100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD0FCu;
            // 0x1fd100: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCE50u;
    if (runtime->hasFunction(0x1FCE50u)) {
        auto targetFn = runtime->lookupFunction(0x1FCE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD104u; }
        if (ctx->pc != 0x1FD104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCE50_0x1fce50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD104u; }
        if (ctx->pc != 0x1FD104u) { return; }
    }
    ctx->pc = 0x1FD104u;
    // 0x1fd104: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x1fd104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1fd108: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1fd108u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fd10c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fd10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fd110: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FD110u;
    {
        const bool branch_taken_0x1fd110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD110u;
            // 0x1fd114: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd110) {
            ctx->pc = 0x1FD140u;
            goto label_1fd140;
        }
    }
    ctx->pc = 0x1FD118u;
    // 0x1fd118: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1fd118u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fd11c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1fd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1fd120: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fd120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fd124: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fd124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fd128: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fd128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd12c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fd12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fd130: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fd130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1fd134: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1fd134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1fd138: 0x40f809  jalr        $v0
    ctx->pc = 0x1FD138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD140u);
        ctx->pc = 0x1FD13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD138u;
            // 0x1fd13c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD140u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD140u: goto label_1fd140;
            case 0x1FD180u: goto label_1fd180;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD140u; }
            if (ctx->pc != 0x1FD140u) { return; }
        }
        }
    }
    ctx->pc = 0x1FD140u;
label_1fd140:
    // 0x1fd140: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x1fd140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1fd144: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1fd144u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fd148: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fd148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fd14c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD14Cu;
    {
        const bool branch_taken_0x1fd14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD14Cu;
            // 0x1fd150: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd14c) {
            ctx->pc = 0x1FD180u;
            goto label_1fd180;
        }
    }
    ctx->pc = 0x1FD154u;
    // 0x1fd154: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1fd154u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fd158: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1fd158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1fd15c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fd15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fd160: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fd160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fd164: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fd164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd168: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fd168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fd16c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fd16cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1fd170: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1fd170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1fd174: 0x40f809  jalr        $v0
    ctx->pc = 0x1FD174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD17Cu);
        ctx->pc = 0x1FD178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD174u;
            // 0x1fd178: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD17Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD140u: goto label_1fd140;
            case 0x1FD180u: goto label_1fd180;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD17Cu; }
            if (ctx->pc != 0x1FD17Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FD17Cu;
    // 0x1fd17c: 0x0  nop
    ctx->pc = 0x1fd17cu;
    // NOP
label_1fd180:
    // 0x1fd180: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x1fd180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1fd184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd188: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1fd188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1fd18c: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x1fd18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x1fd190: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fd190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd194: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD194u;
            // 0x1fd198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD140u: goto label_1fd140;
            case 0x1FD180u: goto label_1fd180;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD19Cu;
    // 0x1fd19c: 0x0  nop
    ctx->pc = 0x1fd19cu;
    // NOP
}
