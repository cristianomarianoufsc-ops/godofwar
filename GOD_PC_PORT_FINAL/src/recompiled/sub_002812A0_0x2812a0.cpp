#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002812A0
// Address: 0x2812a0 - 0x281470
void sub_002812A0_0x2812a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002812A0_0x2812a0");
#endif

    ctx->pc = 0x2812a0u;

    // 0x2812a0: 0x27bdfc80  addiu       $sp, $sp, -0x380
    ctx->pc = 0x2812a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966400));
    // 0x2812a4: 0xffb10320  sd          $s1, 0x320($sp)
    ctx->pc = 0x2812a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 17));
    // 0x2812a8: 0xffb40350  sd          $s4, 0x350($sp)
    ctx->pc = 0x2812a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 20));
    // 0x2812ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2812acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2812b0: 0xffb20330  sd          $s2, 0x330($sp)
    ctx->pc = 0x2812b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 18));
    // 0x2812b4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2812b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2812b8: 0xffbf0370  sd          $ra, 0x370($sp)
    ctx->pc = 0x2812b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 31));
    // 0x2812bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2812bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2812c0: 0xffb50360  sd          $s5, 0x360($sp)
    ctx->pc = 0x2812c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 21));
    // 0x2812c4: 0xffb30340  sd          $s3, 0x340($sp)
    ctx->pc = 0x2812c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 19));
    // 0x2812c8: 0xc0a0b74  jal         func_282DD0
    ctx->pc = 0x2812C8u;
    SET_GPR_U32(ctx, 31, 0x2812D0u);
    ctx->pc = 0x2812CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2812C8u;
            // 0x2812cc: 0xffb00310  sd          $s0, 0x310($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282DD0u;
    if (runtime->hasFunction(0x282DD0u)) {
        auto targetFn = runtime->lookupFunction(0x282DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2812D0u; }
        if (ctx->pc != 0x2812D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282dd0_0x282e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2812D0u; }
        if (ctx->pc != 0x2812D0u) { return; }
    }
    ctx->pc = 0x2812D0u;
    // 0x2812d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2812D0u;
    {
        const bool branch_taken_0x2812d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2812D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2812D0u;
            // 0x2812d4: 0x24030898  addiu       $v1, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812d0) {
            ctx->pc = 0x2812E4u;
            goto label_2812e4;
        }
    }
    ctx->pc = 0x2812D8u;
    // 0x2812d8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2812d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2812dc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2812DCu;
    {
        const bool branch_taken_0x2812dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2812E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2812DCu;
            // 0x2812e0: 0x34420013  ori         $v0, $v0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812dc) {
            ctx->pc = 0x281448u;
            goto label_281448;
        }
    }
    ctx->pc = 0x2812E4u;
label_2812e4:
    // 0x2812e4: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x2812e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x2812e8: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x2812e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2812ec: 0x2442c9c8  addiu       $v0, $v0, -0x3638
    ctx->pc = 0x2812ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953416));
    // 0x2812f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2812f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2812f4: 0x8c44088c  lw          $a0, 0x88C($v0)
    ctx->pc = 0x2812f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2188)));
    // 0x2812f8: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2812F8u;
    {
        const bool branch_taken_0x2812f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2812FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2812F8u;
            // 0x2812fc: 0x27b50200  addiu       $s5, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812f8) {
            ctx->pc = 0x28130Cu;
            goto label_28130c;
        }
    }
    ctx->pc = 0x281300u;
    // 0x281300: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x281300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x281304: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x281304u;
    {
        const bool branch_taken_0x281304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281304u;
            // 0x281308: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281304) {
            ctx->pc = 0x281448u;
            goto label_281448;
        }
    }
    ctx->pc = 0x28130Cu;
label_28130c:
    // 0x28130c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28130cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281310: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x281310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281314: 0xc09f50c  jal         func_27D430
    ctx->pc = 0x281314u;
    SET_GPR_U32(ctx, 31, 0x28131Cu);
    ctx->pc = 0x281318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281314u;
            // 0x281318: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D430u;
    if (runtime->hasFunction(0x27D430u)) {
        auto targetFn = runtime->lookupFunction(0x27D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28131Cu; }
        if (ctx->pc != 0x28131Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D430_0x27d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28131Cu; }
        if (ctx->pc != 0x28131Cu) { return; }
    }
    ctx->pc = 0x28131Cu;
    // 0x28131c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x28131Cu;
    {
        const bool branch_taken_0x28131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28131c) {
            ctx->pc = 0x28137Cu;
            goto label_28137c;
        }
    }
    ctx->pc = 0x281324u;
    // 0x281324: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x281324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281328: 0xc0a2589  jal         func_289624
    ctx->pc = 0x281328u;
    SET_GPR_U32(ctx, 31, 0x281330u);
    ctx->pc = 0x28132Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281328u;
            // 0x28132c: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289624u;
    if (runtime->hasFunction(0x289624u)) {
        auto targetFn = runtime->lookupFunction(0x289624u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281330u; }
        if (ctx->pc != 0x281330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289624_0x2897c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281330u; }
        if (ctx->pc != 0x281330u) { return; }
    }
    ctx->pc = 0x281330u;
    // 0x281330: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x281330u;
    {
        const bool branch_taken_0x281330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281330u;
            // 0x281334: 0x27b00280  addiu       $s0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281330) {
            ctx->pc = 0x28137Cu;
            goto label_28137c;
        }
    }
    ctx->pc = 0x281338u;
    // 0x281338: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x281338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28133c: 0xc0a2644  jal         func_289910
    ctx->pc = 0x28133Cu;
    SET_GPR_U32(ctx, 31, 0x281344u);
    ctx->pc = 0x281340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28133Cu;
            // 0x281340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281344u; }
        if (ctx->pc != 0x281344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281344u; }
        if (ctx->pc != 0x281344u) { return; }
    }
    ctx->pc = 0x281344u;
    // 0x281344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281348: 0xc0a34ee  jal         func_28D3B8
    ctx->pc = 0x281348u;
    SET_GPR_U32(ctx, 31, 0x281350u);
    ctx->pc = 0x28134Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281348u;
            // 0x28134c: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D3B8u;
    if (runtime->hasFunction(0x28D3B8u)) {
        auto targetFn = runtime->lookupFunction(0x28D3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281350u; }
        if (ctx->pc != 0x281350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28d3b8_0x28d408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281350u; }
        if (ctx->pc != 0x281350u) { return; }
    }
    ctx->pc = 0x281350u;
    // 0x281350: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x281350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x281354: 0xc0a2644  jal         func_289910
    ctx->pc = 0x281354u;
    SET_GPR_U32(ctx, 31, 0x28135Cu);
    ctx->pc = 0x281358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281354u;
            // 0x281358: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28135Cu; }
        if (ctx->pc != 0x28135Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28135Cu; }
        if (ctx->pc != 0x28135Cu) { return; }
    }
    ctx->pc = 0x28135Cu;
    // 0x28135c: 0xc09f43a  jal         func_27D0E8
    ctx->pc = 0x28135Cu;
    SET_GPR_U32(ctx, 31, 0x281364u);
    ctx->pc = 0x281360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28135Cu;
            // 0x281360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D0E8u;
    if (runtime->hasFunction(0x27D0E8u)) {
        auto targetFn = runtime->lookupFunction(0x27D0E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281364u; }
        if (ctx->pc != 0x281364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d0e8_0x27d148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281364u; }
        if (ctx->pc != 0x281364u) { return; }
    }
    ctx->pc = 0x281364u;
    // 0x281364: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281364u;
    {
        const bool branch_taken_0x281364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281364) {
            ctx->pc = 0x28137Cu;
            goto label_28137c;
        }
    }
    ctx->pc = 0x28136Cu;
    // 0x28136c: 0xc09f43a  jal         func_27D0E8
    ctx->pc = 0x28136Cu;
    SET_GPR_U32(ctx, 31, 0x281374u);
    ctx->pc = 0x281370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28136Cu;
            // 0x281370: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D0E8u;
    if (runtime->hasFunction(0x27D0E8u)) {
        auto targetFn = runtime->lookupFunction(0x27D0E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281374u; }
        if (ctx->pc != 0x281374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d0e8_0x27d148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281374u; }
        if (ctx->pc != 0x281374u) { return; }
    }
    ctx->pc = 0x281374u;
    // 0x281374: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281374u;
    {
        const bool branch_taken_0x281374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281374) {
            ctx->pc = 0x281388u;
            goto label_281388;
        }
    }
    ctx->pc = 0x28137Cu;
label_28137c:
    // 0x28137c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x28137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x281380: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x281380u;
    {
        const bool branch_taken_0x281380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281380u;
            // 0x281384: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281380) {
            ctx->pc = 0x281448u;
            goto label_281448;
        }
    }
    ctx->pc = 0x281388u;
label_281388:
    // 0x281388: 0xc09f41e  jal         func_27D078
    ctx->pc = 0x281388u;
    SET_GPR_U32(ctx, 31, 0x281390u);
    ctx->pc = 0x28138Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281388u;
            // 0x28138c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D078u;
    if (runtime->hasFunction(0x27D078u)) {
        auto targetFn = runtime->lookupFunction(0x27D078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281390u; }
        if (ctx->pc != 0x281390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D078_0x27d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281390u; }
        if (ctx->pc != 0x281390u) { return; }
    }
    ctx->pc = 0x281390u;
    // 0x281390: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281390u;
    {
        const bool branch_taken_0x281390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281390) {
            ctx->pc = 0x2813A8u;
            goto label_2813a8;
        }
    }
    ctx->pc = 0x281398u;
    // 0x281398: 0xc09f41e  jal         func_27D078
    ctx->pc = 0x281398u;
    SET_GPR_U32(ctx, 31, 0x2813A0u);
    ctx->pc = 0x28139Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281398u;
            // 0x28139c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D078u;
    if (runtime->hasFunction(0x27D078u)) {
        auto targetFn = runtime->lookupFunction(0x27D078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2813A0u; }
        if (ctx->pc != 0x2813A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D078_0x27d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2813A0u; }
        if (ctx->pc != 0x2813A0u) { return; }
    }
    ctx->pc = 0x2813A0u;
    // 0x2813a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2813A0u;
    {
        const bool branch_taken_0x2813a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2813A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2813A0u;
            // 0x2813a4: 0x27b20300  addiu       $s2, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2813a0) {
            ctx->pc = 0x2813B4u;
            goto label_2813b4;
        }
    }
    ctx->pc = 0x2813A8u;
label_2813a8:
    // 0x2813a8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2813a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2813ac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2813ACu;
    {
        const bool branch_taken_0x2813ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2813B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2813ACu;
            // 0x2813b0: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2813ac) {
            ctx->pc = 0x281448u;
            goto label_281448;
        }
    }
    ctx->pc = 0x2813B4u;
label_2813b4:
    // 0x2813b4: 0x27b30304  addiu       $s3, $sp, 0x304
    ctx->pc = 0x2813b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 772));
    // 0x2813b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2813b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2813bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2813c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813c4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2813c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813c8: 0xc09fc16  jal         func_27F058
    ctx->pc = 0x2813C8u;
    SET_GPR_U32(ctx, 31, 0x2813D0u);
    ctx->pc = 0x2813CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2813C8u;
            // 0x2813cc: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F058u;
    if (runtime->hasFunction(0x27F058u)) {
        auto targetFn = runtime->lookupFunction(0x27F058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2813D0u; }
        if (ctx->pc != 0x2813D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F058_0x27f058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2813D0u; }
        if (ctx->pc != 0x2813D0u) { return; }
    }
    ctx->pc = 0x2813D0u;
    // 0x2813d0: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2813d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2813d4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2813d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2813d8: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2813D8u;
    {
        const bool branch_taken_0x2813d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2813DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2813D8u;
            // 0x2813dc: 0xdfbf0370  ld          $ra, 0x370($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2813d8) {
            ctx->pc = 0x28144Cu;
            goto label_28144c;
        }
    }
    ctx->pc = 0x2813E0u;
    // 0x2813e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2813e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813e4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2813e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813e8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2813e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2813ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813f0: 0xc09fc16  jal         func_27F058
    ctx->pc = 0x2813F0u;
    SET_GPR_U32(ctx, 31, 0x2813F8u);
    ctx->pc = 0x2813F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2813F0u;
            // 0x2813f4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F058u;
    if (runtime->hasFunction(0x27F058u)) {
        auto targetFn = runtime->lookupFunction(0x27F058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2813F8u; }
        if (ctx->pc != 0x2813F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F058_0x27f058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2813F8u; }
        if (ctx->pc != 0x2813F8u) { return; }
    }
    ctx->pc = 0x2813F8u;
    // 0x2813f8: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2813f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2813fc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2813fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x281400: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x281400u;
    {
        const bool branch_taken_0x281400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x281404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281400u;
            // 0x281404: 0xdfbf0370  ld          $ra, 0x370($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281400) {
            ctx->pc = 0x28144Cu;
            goto label_28144c;
        }
    }
    ctx->pc = 0x281408u;
    // 0x281408: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x281408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28140c: 0xc0a2644  jal         func_289910
    ctx->pc = 0x28140Cu;
    SET_GPR_U32(ctx, 31, 0x281414u);
    ctx->pc = 0x281410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28140Cu;
            // 0x281410: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281414u; }
        if (ctx->pc != 0x281414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281414u; }
        if (ctx->pc != 0x281414u) { return; }
    }
    ctx->pc = 0x281414u;
    // 0x281414: 0x8fa60300  lw          $a2, 0x300($sp)
    ctx->pc = 0x281414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x281418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x281418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28141c: 0x8fa70304  lw          $a3, 0x304($sp)
    ctx->pc = 0x28141cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x281420: 0xc09fd24  jal         func_27F490
    ctx->pc = 0x281420u;
    SET_GPR_U32(ctx, 31, 0x281428u);
    ctx->pc = 0x281424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281420u;
            // 0x281424: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F490u;
    if (runtime->hasFunction(0x27F490u)) {
        auto targetFn = runtime->lookupFunction(0x27F490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281428u; }
        if (ctx->pc != 0x281428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F490_0x27f490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281428u; }
        if (ctx->pc != 0x281428u) { return; }
    }
    ctx->pc = 0x281428u;
    // 0x281428: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x281428u;
    {
        const bool branch_taken_0x281428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28142Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281428u;
            // 0x28142c: 0xdfbf0370  ld          $ra, 0x370($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281428) {
            ctx->pc = 0x28144Cu;
            goto label_28144c;
        }
    }
    ctx->pc = 0x281430u;
    // 0x281430: 0xc0a0618  jal         func_281860
    ctx->pc = 0x281430u;
    SET_GPR_U32(ctx, 31, 0x281438u);
    ctx->pc = 0x281434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281430u;
            // 0x281434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281860u;
    if (runtime->hasFunction(0x281860u)) {
        auto targetFn = runtime->lookupFunction(0x281860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281438u; }
        if (ctx->pc != 0x281438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281860_0x2818d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281438u; }
        if (ctx->pc != 0x281438u) { return; }
    }
    ctx->pc = 0x281438u;
    // 0x281438: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x281438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x28143c: 0x3463006f  ori         $v1, $v1, 0x6F
    ctx->pc = 0x28143cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)111);
    // 0x281440: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x281440u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x281444: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x281444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_281448:
    // 0x281448: 0xdfbf0370  ld          $ra, 0x370($sp)
    ctx->pc = 0x281448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 880)));
label_28144c:
    // 0x28144c: 0xdfb50360  ld          $s5, 0x360($sp)
    ctx->pc = 0x28144cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x281450: 0xdfb40350  ld          $s4, 0x350($sp)
    ctx->pc = 0x281450u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x281454: 0xdfb30340  ld          $s3, 0x340($sp)
    ctx->pc = 0x281454u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x281458: 0xdfb20330  ld          $s2, 0x330($sp)
    ctx->pc = 0x281458u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x28145c: 0xdfb10320  ld          $s1, 0x320($sp)
    ctx->pc = 0x28145cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x281460: 0xdfb00310  ld          $s0, 0x310($sp)
    ctx->pc = 0x281460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x281464: 0x3e00008  jr          $ra
    ctx->pc = 0x281464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281464u;
            // 0x281468: 0x27bd0380  addiu       $sp, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2812E4u: goto label_2812e4;
            case 0x28130Cu: goto label_28130c;
            case 0x28137Cu: goto label_28137c;
            case 0x281388u: goto label_281388;
            case 0x2813A8u: goto label_2813a8;
            case 0x2813B4u: goto label_2813b4;
            case 0x281448u: goto label_281448;
            case 0x28144Cu: goto label_28144c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28146Cu;
    // 0x28146c: 0x0  nop
    ctx->pc = 0x28146cu;
    // NOP
}
