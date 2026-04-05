#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00107878
// Address: 0x107878 - 0x107928
void sub_00107878_0x107878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107878_0x107878");
#endif

    ctx->pc = 0x107878u;

    // 0x107878: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x107878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10787c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10787cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x107880: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x107880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x107884: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x107884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107888: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x107888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10788c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10788cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107890: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x107890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x107894: 0x3c05000c  lui         $a1, 0xC
    ctx->pc = 0x107894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12 << 16));
    // 0x107898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10789c: 0x34a50e68  ori         $a1, $a1, 0xE68
    ctx->pc = 0x10789cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3688);
    // 0x1078a0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1078a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1078a4: 0xc041902  jal         func_106408
    ctx->pc = 0x1078A4u;
    SET_GPR_U32(ctx, 31, 0x1078ACu);
    ctx->pc = 0x1078A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1078A4u;
            // 0x1078a8: 0x452824  and         $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106408u;
    if (runtime->hasFunction(0x106408u)) {
        auto targetFn = runtime->lookupFunction(0x106408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1078ACu; }
        if (ctx->pc != 0x1078ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106408_0x106408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1078ACu; }
        if (ctx->pc != 0x1078ACu) { return; }
    }
    ctx->pc = 0x1078ACu;
    // 0x1078ac: 0x8e33000c  lw          $s3, 0xC($s1)
    ctx->pc = 0x1078acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1078b0: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x1078B0u;
    {
        const bool branch_taken_0x1078b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1078B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1078B0u;
            // 0x1078b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1078b0) {
            ctx->pc = 0x1078F0u;
            goto label_1078f0;
        }
    }
    ctx->pc = 0x1078B8u;
    // 0x1078b8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1078b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1078bc: 0x0  nop
    ctx->pc = 0x1078bcu;
    // NOP
label_1078c0:
    // 0x1078c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1078c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1078c4: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1078c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1078c8: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x1078c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1078cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1078ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1078d0: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x1078d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1078d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1078d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1078d8: 0xc045e22  jal         func_117888
    ctx->pc = 0x1078D8u;
    SET_GPR_U32(ctx, 31, 0x1078E0u);
    ctx->pc = 0x1078DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1078D8u;
            // 0x1078dc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117888u;
    if (runtime->hasFunction(0x117888u)) {
        auto targetFn = runtime->lookupFunction(0x117888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1078E0u; }
        if (ctx->pc != 0x1078E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117888_0x117888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1078E0u; }
        if (ctx->pc != 0x1078E0u) { return; }
    }
    ctx->pc = 0x1078E0u;
    // 0x1078e0: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1078e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1078e4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1078E4u;
    {
        const bool branch_taken_0x1078e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1078E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1078E4u;
            // 0x1078e8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1078e4) {
            ctx->pc = 0x1078C0u;
            runtime->cooperativeGuestYield();
            goto label_1078c0;
        }
    }
    ctx->pc = 0x1078ECu;
    // 0x1078ec: 0x0  nop
    ctx->pc = 0x1078ecu;
    // NOP
label_1078f0:
    // 0x1078f0: 0xae51001c  sw          $s1, 0x1C($s2)
    ctx->pc = 0x1078f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 17));
    // 0x1078f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1078f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1078f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1078f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1078fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1078fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x107900: 0xc045dbe  jal         func_1176F8
    ctx->pc = 0x107900u;
    SET_GPR_U32(ctx, 31, 0x107908u);
    ctx->pc = 0x107904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107900u;
            // 0x107904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1176F8u;
    if (runtime->hasFunction(0x1176F8u)) {
        auto targetFn = runtime->lookupFunction(0x1176F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107908u; }
        if (ctx->pc != 0x107908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001176F8_0x1176f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107908u; }
        if (ctx->pc != 0x107908u) { return; }
    }
    ctx->pc = 0x107908u;
    // 0x107908: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x107908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10790c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10790cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107910: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x107910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107914: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x107914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107918: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x107918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10791c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10791cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107920: 0x3e00008  jr          $ra
    ctx->pc = 0x107920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107920u;
            // 0x107924: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1078C0u: goto label_1078c0;
            case 0x1078F0u: goto label_1078f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107928u;
}
