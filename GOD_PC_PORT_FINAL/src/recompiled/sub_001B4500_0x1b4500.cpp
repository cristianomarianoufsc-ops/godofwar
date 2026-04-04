#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4500
// Address: 0x1b4500 - 0x1b45b0
void sub_001B4500_0x1b4500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4500_0x1b4500");
#endif

    ctx->pc = 0x1b4500u;

    // 0x1b4500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b4500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b4504: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b4504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b4508: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b450c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b450cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b4510: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b4510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b4514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4518: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b4518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b451c: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1b451cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1b4520: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b4520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4524: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b4524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b4528: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1b4528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1b452c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1b452cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1b4530: 0x40f809  jalr        $v0
    ctx->pc = 0x1B4530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4538u);
        ctx->pc = 0x1B4534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4530u;
            // 0x1b4534: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4538u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4598u: goto label_1b4598;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4538u; }
            if (ctx->pc != 0x1B4538u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4538u;
    // 0x1b4538: 0xc06cd0c  jal         func_1B3430
    ctx->pc = 0x1B4538u;
    SET_GPR_U32(ctx, 31, 0x1B4540u);
    ctx->pc = 0x1B453Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4538u;
            // 0x1b453c: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3430u;
    if (runtime->hasFunction(0x1B3430u)) {
        auto targetFn = runtime->lookupFunction(0x1B3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4540u; }
        if (ctx->pc != 0x1B4540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3430_0x1b3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4540u; }
        if (ctx->pc != 0x1B4540u) { return; }
    }
    ctx->pc = 0x1B4540u;
    // 0x1b4540: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b4540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4544: 0x52400014  beql        $s2, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B4544u;
    {
        const bool branch_taken_0x1b4544 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4544) {
            ctx->pc = 0x1B4548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4544u;
            // 0x1b4548: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4598u;
            goto label_1b4598;
        }
    }
    ctx->pc = 0x1B454Cu;
    // 0x1b454c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1b454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b4550: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b4550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b4554: 0xc0694e2  jal         func_1A5388
    ctx->pc = 0x1B4554u;
    SET_GPR_U32(ctx, 31, 0x1B455Cu);
    ctx->pc = 0x1B4558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4554u;
            // 0x1b4558: 0x94510024  lhu         $s1, 0x24($v0) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5388u;
    if (runtime->hasFunction(0x1A5388u)) {
        auto targetFn = runtime->lookupFunction(0x1A5388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B455Cu; }
        if (ctx->pc != 0x1B455Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5388_0x1a5388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B455Cu; }
        if (ctx->pc != 0x1B455Cu) { return; }
    }
    ctx->pc = 0x1B455Cu;
    // 0x1b455c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b455cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4560: 0x3231ffff  andi        $s1, $s1, 0xFFFF
    ctx->pc = 0x1b4560u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1b4564: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1B4564u;
    SET_GPR_U32(ctx, 31, 0x1B456Cu);
    ctx->pc = 0x1B4568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4564u;
            // 0x1b4568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B456Cu; }
        if (ctx->pc != 0x1B456Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B456Cu; }
        if (ctx->pc != 0x1B456Cu) { return; }
    }
    ctx->pc = 0x1B456Cu;
    // 0x1b456c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1b456cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1b4570: 0xa611000c  sh          $s1, 0xC($s0)
    ctx->pc = 0x1b4570u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 17));
    // 0x1b4574: 0x2442a9f8  addiu       $v0, $v0, -0x5608
    ctx->pc = 0x1b4574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945272));
    // 0x1b4578: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x1b4578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1b457c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b457cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1b4580: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b4580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b4584: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x1b4584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x1b4588: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1b4588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1b458c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1b458cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1b4590: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b4590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b4594: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b4594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b4598:
    // 0x1b4598: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b4598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b459c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b459cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b45a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b45a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b45a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B45A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B45A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B45A4u;
            // 0x1b45a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4598u: goto label_1b4598;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B45ACu;
    // 0x1b45ac: 0x0  nop
    ctx->pc = 0x1b45acu;
    // NOP
}
