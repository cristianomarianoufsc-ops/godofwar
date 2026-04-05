#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027C8B8
// Address: 0x27c8b8 - 0x27c9a0
void sub_0027C8B8_0x27c8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C8B8_0x27c8b8");
#endif

    ctx->pc = 0x27c8b8u;

    // 0x27c8b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27c8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27c8bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27c8c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27c8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27c8c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27c8c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27c8c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c8cc: 0x8c433310  lw          $v1, 0x3310($v0)
    ctx->pc = 0x27c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13072)));
    // 0x27c8d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27c8d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c8d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27c8d8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C8D8u;
    {
        const bool branch_taken_0x27c8d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C8D8u;
            // 0x27c8dc: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c8d8) {
            ctx->pc = 0x27C8ECu;
            goto label_27c8ec;
        }
    }
    ctx->pc = 0x27C8E0u;
    // 0x27c8e0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c8e4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27C8E4u;
    {
        const bool branch_taken_0x27c8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C8E4u;
            // 0x27c8e8: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c8e4) {
            ctx->pc = 0x27C988u;
            goto label_27c988;
        }
    }
    ctx->pc = 0x27C8ECu;
label_27c8ec:
    // 0x27c8ec: 0xc0a0bd8  jal         func_282F60
    ctx->pc = 0x27C8ECu;
    SET_GPR_U32(ctx, 31, 0x27C8F4u);
    ctx->pc = 0x27C8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C8ECu;
            // 0x27c8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282F60u;
    if (runtime->hasFunction(0x282F60u)) {
        auto targetFn = runtime->lookupFunction(0x282F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C8F4u; }
        if (ctx->pc != 0x27C8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282f60_0x282fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C8F4u; }
        if (ctx->pc != 0x27C8F4u) { return; }
    }
    ctx->pc = 0x27C8F4u;
    // 0x27c8f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27c8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c8f8: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C8F8u;
    {
        const bool branch_taken_0x27c8f8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x27c8f8) {
            ctx->pc = 0x27C90Cu;
            goto label_27c90c;
        }
    }
    ctx->pc = 0x27C900u;
    // 0x27c900: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c904: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x27C904u;
    {
        const bool branch_taken_0x27c904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C904u;
            // 0x27c908: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c904) {
            ctx->pc = 0x27C988u;
            goto label_27c988;
        }
    }
    ctx->pc = 0x27C90Cu;
label_27c90c:
    // 0x27c90c: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x27C90Cu;
    SET_GPR_U32(ctx, 31, 0x27C914u);
    ctx->pc = 0x27C910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C90Cu;
            // 0x27c910: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C914u; }
        if (ctx->pc != 0x27C914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C914u; }
        if (ctx->pc != 0x27C914u) { return; }
    }
    ctx->pc = 0x27C914u;
    // 0x27c914: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x27c914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x27c918: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C918u;
    {
        const bool branch_taken_0x27c918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C918u;
            // 0x27c91c: 0x3c110031  lui         $s1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c918) {
            ctx->pc = 0x27C92Cu;
            goto label_27c92c;
        }
    }
    ctx->pc = 0x27C920u;
    // 0x27c920: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c924: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x27C924u;
    {
        const bool branch_taken_0x27c924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C924u;
            // 0x27c928: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c924) {
            ctx->pc = 0x27C988u;
            goto label_27c988;
        }
    }
    ctx->pc = 0x27C92Cu;
label_27c92c:
    // 0x27c92c: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x27C92Cu;
    SET_GPR_U32(ctx, 31, 0x27C934u);
    ctx->pc = 0x27C930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C92Cu;
            // 0x27c930: 0x8e2408ac  lw          $a0, 0x8AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C934u; }
        if (ctx->pc != 0x27C934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C934u; }
        if (ctx->pc != 0x27C934u) { return; }
    }
    ctx->pc = 0x27C934u;
    // 0x27c934: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27c934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27c938: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x27c938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x27c93c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x27c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27c940: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C940u;
    {
        const bool branch_taken_0x27c940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c940) {
            ctx->pc = 0x27C944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27C940u;
            // 0x27c944: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27C95Cu;
            goto label_27c95c;
        }
    }
    ctx->pc = 0x27C948u;
    // 0x27c948: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C948u;
    SET_GPR_U32(ctx, 31, 0x27C950u);
    ctx->pc = 0x27C94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C948u;
            // 0x27c94c: 0x8e2408ac  lw          $a0, 0x8AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C950u; }
        if (ctx->pc != 0x27C950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C950u; }
        if (ctx->pc != 0x27C950u) { return; }
    }
    ctx->pc = 0x27C950u;
    // 0x27c950: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c954: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27C954u;
    {
        const bool branch_taken_0x27c954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C954u;
            // 0x27c958: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c954) {
            ctx->pc = 0x27C988u;
            goto label_27c988;
        }
    }
    ctx->pc = 0x27C95Cu;
label_27c95c:
    // 0x27c95c: 0xac700380  sw          $s0, 0x380($v1)
    ctx->pc = 0x27c95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 16));
    // 0x27c960: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27c960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x27c964: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27c964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c968: 0xc0a2644  jal         func_289910
    ctx->pc = 0x27C968u;
    SET_GPR_U32(ctx, 31, 0x27C970u);
    ctx->pc = 0x27C96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C968u;
            // 0x27c96c: 0x2484041c  addiu       $a0, $a0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C970u; }
        if (ctx->pc != 0x27C970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C970u; }
        if (ctx->pc != 0x27C970u) { return; }
    }
    ctx->pc = 0x27C970u;
    // 0x27c970: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27c970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27c974: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C974u;
    SET_GPR_U32(ctx, 31, 0x27C97Cu);
    ctx->pc = 0x27C978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C974u;
            // 0x27c978: 0x8c6408a4  lw          $a0, 0x8A4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C97Cu; }
        if (ctx->pc != 0x27C97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C97Cu; }
        if (ctx->pc != 0x27C97Cu) { return; }
    }
    ctx->pc = 0x27C97Cu;
    // 0x27c97c: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C97Cu;
    SET_GPR_U32(ctx, 31, 0x27C984u);
    ctx->pc = 0x27C980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C97Cu;
            // 0x27c980: 0x8e2408ac  lw          $a0, 0x8AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C984u; }
        if (ctx->pc != 0x27C984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C984u; }
        if (ctx->pc != 0x27C984u) { return; }
    }
    ctx->pc = 0x27C984u;
    // 0x27c984: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27c984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c988:
    // 0x27c988: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27c988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27c98c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27c98cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c990: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27c990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27c994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c998: 0x3e00008  jr          $ra
    ctx->pc = 0x27C998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C998u;
            // 0x27c99c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27C8ECu: goto label_27c8ec;
            case 0x27C90Cu: goto label_27c90c;
            case 0x27C92Cu: goto label_27c92c;
            case 0x27C95Cu: goto label_27c95c;
            case 0x27C988u: goto label_27c988;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27C9A0u;
}
