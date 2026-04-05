#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23b8e8
// Address: 0x23b8e8 - 0x23b988
void entry_23b8e8_0x23b988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23b8e8_0x23b988");
#endif

    ctx->pc = 0x23b8e8u;

    // 0x23b8e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23b8e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b8ec: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x23b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x23b8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x23B8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B8F0u;
            // 0x23b8f4: 0xac840004  sw          $a0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B950u: goto label_23b950;
            case 0x23B964u: goto label_23b964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B8F8u;
    // 0x23b8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x23B8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B8F8u;
            // 0x23b8fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B950u: goto label_23b950;
            case 0x23B964u: goto label_23b964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B900u;
    // 0x23b900: 0x3e00008  jr          $ra
    ctx->pc = 0x23B900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B900u;
            // 0x23b904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B950u: goto label_23b950;
            case 0x23B964u: goto label_23b964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B908u;
    // 0x23b908: 0xac85006c  sw          $a1, 0x6C($a0)
    ctx->pc = 0x23b908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
    // 0x23b90c: 0x0  nop
    ctx->pc = 0x23b90cu;
    // NOP
    // 0x23b910: 0x0  nop
    ctx->pc = 0x23b910u;
    // NOP
    // 0x23b914: 0x0  nop
    ctx->pc = 0x23b914u;
    // NOP
    // 0x23b918: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23b918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23b91c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23b920: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23b920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23b924: 0x2442fa00  addiu       $v0, $v0, -0x600
    ctx->pc = 0x23b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965760));
    // 0x23b928: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x23b928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x23b92c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23b92cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b934: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x23b934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x23b938: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23b938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23b93c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x23b93cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23b940: 0x12120008  beq         $s0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B940u;
    {
        const bool branch_taken_0x23b940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x23B944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B940u;
            // 0x23b944: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b940) {
            ctx->pc = 0x23B964u;
            goto label_23b964;
        }
    }
    ctx->pc = 0x23B948u;
    // 0x23b948: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23b948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b94c: 0x0  nop
    ctx->pc = 0x23b94cu;
    // NOP
label_23b950:
    // 0x23b950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23b950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b954: 0xc045e74  jal         func_1179D0
    ctx->pc = 0x23B954u;
    SET_GPR_U32(ctx, 31, 0x23B95Cu);
    ctx->pc = 0x23B958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B954u;
            // 0x23b958: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1179D0u;
    if (runtime->hasFunction(0x1179D0u)) {
        auto targetFn = runtime->lookupFunction(0x1179D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B95Cu; }
        if (ctx->pc != 0x23B95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001179D0_0x1179d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B95Cu; }
        if (ctx->pc != 0x23B95Cu) { return; }
    }
    ctx->pc = 0x23B95Cu;
    // 0x23b95c: 0x1612fffc  bne         $s0, $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x23B95Cu;
    {
        const bool branch_taken_0x23b95c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x23B960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B95Cu;
            // 0x23b960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b95c) {
            ctx->pc = 0x23B950u;
            runtime->cooperativeGuestYield();
            goto label_23b950;
        }
    }
    ctx->pc = 0x23B964u;
label_23b964:
    // 0x23b964: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23b964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b968: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23b968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b96c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x23b96cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b974: 0x3e00008  jr          $ra
    ctx->pc = 0x23B974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B974u;
            // 0x23b978: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B950u: goto label_23b950;
            case 0x23B964u: goto label_23b964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B97Cu;
    // 0x23b97c: 0x0  nop
    ctx->pc = 0x23b97cu;
    // NOP
    // 0x23b980: 0x3e00008  jr          $ra
    ctx->pc = 0x23B980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B980u;
            // 0x23b984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B950u: goto label_23b950;
            case 0x23B964u: goto label_23b964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B988u;
}
