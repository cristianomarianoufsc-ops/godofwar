#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201380
// Address: 0x201380 - 0x201408
void sub_00201380_0x201380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201380_0x201380");
#endif

    ctx->pc = 0x201380u;

    // 0x201380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x201384: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x201388: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x201388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20138c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20138cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201390: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x201390u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x201394: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x201394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x201398: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x201398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20139c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2013a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2013A0u;
    {
        const bool branch_taken_0x2013a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2013A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2013A0u;
            // 0x2013a4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013a0) {
            ctx->pc = 0x2013C0u;
            goto label_2013c0;
        }
    }
    ctx->pc = 0x2013A8u;
    // 0x2013a8: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x2013A8u;
    SET_GPR_U32(ctx, 31, 0x2013B0u);
    ctx->pc = 0x2013ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2013A8u;
            // 0x2013ac: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013B0u; }
        if (ctx->pc != 0x2013B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013B0u; }
        if (ctx->pc != 0x2013B0u) { return; }
    }
    ctx->pc = 0x2013B0u;
    // 0x2013b0: 0xc091382  jal         func_244E08
    ctx->pc = 0x2013B0u;
    SET_GPR_U32(ctx, 31, 0x2013B8u);
    ctx->pc = 0x2013B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2013B0u;
            // 0x2013b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244E08u;
    if (runtime->hasFunction(0x244E08u)) {
        auto targetFn = runtime->lookupFunction(0x244E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013B8u; }
        if (ctx->pc != 0x2013B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244e08_0x244e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013B8u; }
        if (ctx->pc != 0x2013B8u) { return; }
    }
    ctx->pc = 0x2013B8u;
    // 0x2013b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2013b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2013bc: 0x0  nop
    ctx->pc = 0x2013bcu;
    // NOP
label_2013c0:
    // 0x2013c0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2013c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2013c4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2013c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2013c8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2013C8u;
    SET_GPR_U32(ctx, 31, 0x2013D0u);
    ctx->pc = 0x2013CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2013C8u;
            // 0x2013cc: 0x8c447910  lw          $a0, 0x7910($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013D0u; }
        if (ctx->pc != 0x2013D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013D0u; }
        if (ctx->pc != 0x2013D0u) { return; }
    }
    ctx->pc = 0x2013D0u;
    // 0x2013d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2013d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2013d4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2013d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2013d8: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x2013d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x2013dc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2013dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2013e0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2013e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2013e4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2013e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2013e8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2013e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2013ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2013ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2013f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2013f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2013f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2013f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2013f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2013f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2013fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2013FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2013FCu;
            // 0x201400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2013C0u: goto label_2013c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201404u;
    // 0x201404: 0x0  nop
    ctx->pc = 0x201404u;
    // NOP
}
