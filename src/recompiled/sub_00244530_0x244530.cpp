#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244530
// Address: 0x244530 - 0x244960
void sub_00244530_0x244530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244530_0x244530");
#endif

    ctx->pc = 0x244530u;

    // 0x244530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244534: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x244534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x244538: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x244538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x24453c: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x24453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x244540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x244540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x244544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24454c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x24454cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x244550: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x244550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x244554: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x244554u;
    {
        const bool branch_taken_0x244554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x244558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244554u;
            // 0x244558: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244554) {
            ctx->pc = 0x244568u;
            goto label_244568;
        }
    }
    ctx->pc = 0x24455Cu;
    // 0x24455c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x24455cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x244560: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x244560u;
    SET_GPR_U32(ctx, 31, 0x244568u);
    ctx->pc = 0x244564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244560u;
            // 0x244564: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244568u; }
        if (ctx->pc != 0x244568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244568u; }
        if (ctx->pc != 0x244568u) { return; }
    }
    ctx->pc = 0x244568u;
label_244568:
    // 0x244568: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x244568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x24456c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24456Cu;
    {
        const bool branch_taken_0x24456c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24456c) {
            ctx->pc = 0x244570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24456Cu;
            // 0x244570: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x244580u;
            goto label_244580;
        }
    }
    ctx->pc = 0x244574u;
    // 0x244574: 0xc08a448  jal         func_229120
    ctx->pc = 0x244574u;
    SET_GPR_U32(ctx, 31, 0x24457Cu);
    ctx->pc = 0x244578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244574u;
            // 0x244578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229120u;
    if (runtime->hasFunction(0x229120u)) {
        auto targetFn = runtime->lookupFunction(0x229120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24457Cu; }
        if (ctx->pc != 0x24457Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_229120_0x229148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24457Cu; }
        if (ctx->pc != 0x24457Cu) { return; }
    }
    ctx->pc = 0x24457Cu;
    // 0x24457c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24457cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_244580:
    // 0x244580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x244580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244588: 0x3e00008  jr          $ra
    ctx->pc = 0x244588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24458Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244588u;
            // 0x24458c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244590u;
    // 0x244590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244598: 0xc04f824  jal         func_13E090
    ctx->pc = 0x244598u;
    SET_GPR_U32(ctx, 31, 0x2445A0u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445A0u; }
        if (ctx->pc != 0x2445A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445A0u; }
        if (ctx->pc != 0x2445A0u) { return; }
    }
    ctx->pc = 0x2445A0u;
    // 0x2445a0: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x2445a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2445a4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2445a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2445a8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x2445A8u;
    SET_GPR_U32(ctx, 31, 0x2445B0u);
    ctx->pc = 0x2445ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2445A8u;
            // 0x2445ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445B0u; }
        if (ctx->pc != 0x2445B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445B0u; }
        if (ctx->pc != 0x2445B0u) { return; }
    }
    ctx->pc = 0x2445B0u;
    // 0x2445b0: 0xc0967c0  jal         func_259F00
    ctx->pc = 0x2445B0u;
    SET_GPR_U32(ctx, 31, 0x2445B8u);
    ctx->pc = 0x2445B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2445B0u;
            // 0x2445b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259F00u;
    if (runtime->hasFunction(0x259F00u)) {
        auto targetFn = runtime->lookupFunction(0x259F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445B8u; }
        if (ctx->pc != 0x2445B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00259F00_0x259f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445B8u; }
        if (ctx->pc != 0x2445B8u) { return; }
    }
    ctx->pc = 0x2445B8u;
    // 0x2445b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2445b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2445bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2445BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2445C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2445BCu;
            // 0x2445c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2445C4u;
    // 0x2445c4: 0x0  nop
    ctx->pc = 0x2445c4u;
    // NOP
    // 0x2445c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2445c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2445cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2445ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2445d0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x2445D0u;
    SET_GPR_U32(ctx, 31, 0x2445D8u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445D8u; }
        if (ctx->pc != 0x2445D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445D8u; }
        if (ctx->pc != 0x2445D8u) { return; }
    }
    ctx->pc = 0x2445D8u;
    // 0x2445d8: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x2445d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2445dc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2445dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2445e0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x2445E0u;
    SET_GPR_U32(ctx, 31, 0x2445E8u);
    ctx->pc = 0x2445E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2445E0u;
            // 0x2445e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445E8u; }
        if (ctx->pc != 0x2445E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445E8u; }
        if (ctx->pc != 0x2445E8u) { return; }
    }
    ctx->pc = 0x2445E8u;
    // 0x2445e8: 0xc0967ce  jal         func_259F38
    ctx->pc = 0x2445E8u;
    SET_GPR_U32(ctx, 31, 0x2445F0u);
    ctx->pc = 0x2445ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2445E8u;
            // 0x2445ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259F38u;
    if (runtime->hasFunction(0x259F38u)) {
        auto targetFn = runtime->lookupFunction(0x259F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445F0u; }
        if (ctx->pc != 0x2445F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00259F38_0x259f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445F0u; }
        if (ctx->pc != 0x2445F0u) { return; }
    }
    ctx->pc = 0x2445F0u;
    // 0x2445f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2445f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2445f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2445F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2445F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2445F4u;
            // 0x2445f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2445FCu;
    // 0x2445fc: 0x0  nop
    ctx->pc = 0x2445fcu;
    // NOP
    // 0x244600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244608: 0xc04f824  jal         func_13E090
    ctx->pc = 0x244608u;
    SET_GPR_U32(ctx, 31, 0x244610u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244610u; }
        if (ctx->pc != 0x244610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244610u; }
        if (ctx->pc != 0x244610u) { return; }
    }
    ctx->pc = 0x244610u;
    // 0x244610: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x244610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x244614: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x244614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x244618: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x244618u;
    SET_GPR_U32(ctx, 31, 0x244620u);
    ctx->pc = 0x24461Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244618u;
            // 0x24461c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244620u; }
        if (ctx->pc != 0x244620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244620u; }
        if (ctx->pc != 0x244620u) { return; }
    }
    ctx->pc = 0x244620u;
    // 0x244620: 0xc0967dc  jal         func_259F70
    ctx->pc = 0x244620u;
    SET_GPR_U32(ctx, 31, 0x244628u);
    ctx->pc = 0x244624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244620u;
            // 0x244624: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259F70u;
    if (runtime->hasFunction(0x259F70u)) {
        auto targetFn = runtime->lookupFunction(0x259F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244628u; }
        if (ctx->pc != 0x244628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00259F70_0x259f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244628u; }
        if (ctx->pc != 0x244628u) { return; }
    }
    ctx->pc = 0x244628u;
    // 0x244628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24462c: 0x3e00008  jr          $ra
    ctx->pc = 0x24462Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24462Cu;
            // 0x244630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244634u;
    // 0x244634: 0x0  nop
    ctx->pc = 0x244634u;
    // NOP
    // 0x244638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24463c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24463cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244640: 0xc04f824  jal         func_13E090
    ctx->pc = 0x244640u;
    SET_GPR_U32(ctx, 31, 0x244648u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244648u; }
        if (ctx->pc != 0x244648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244648u; }
        if (ctx->pc != 0x244648u) { return; }
    }
    ctx->pc = 0x244648u;
    // 0x244648: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x244648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x24464c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x24464cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x244650: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x244650u;
    SET_GPR_U32(ctx, 31, 0x244658u);
    ctx->pc = 0x244654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244650u;
            // 0x244654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244658u; }
        if (ctx->pc != 0x244658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244658u; }
        if (ctx->pc != 0x244658u) { return; }
    }
    ctx->pc = 0x244658u;
    // 0x244658: 0xc0967ea  jal         func_259FA8
    ctx->pc = 0x244658u;
    SET_GPR_U32(ctx, 31, 0x244660u);
    ctx->pc = 0x24465Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244658u;
            // 0x24465c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259FA8u;
    if (runtime->hasFunction(0x259FA8u)) {
        auto targetFn = runtime->lookupFunction(0x259FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244660u; }
        if (ctx->pc != 0x244660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00259FA8_0x259fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244660u; }
        if (ctx->pc != 0x244660u) { return; }
    }
    ctx->pc = 0x244660u;
    // 0x244660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244664: 0x3e00008  jr          $ra
    ctx->pc = 0x244664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244664u;
            // 0x244668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24466Cu;
    // 0x24466c: 0x0  nop
    ctx->pc = 0x24466cu;
    // NOP
    // 0x244670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244678: 0xc04f824  jal         func_13E090
    ctx->pc = 0x244678u;
    SET_GPR_U32(ctx, 31, 0x244680u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244680u; }
        if (ctx->pc != 0x244680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244680u; }
        if (ctx->pc != 0x244680u) { return; }
    }
    ctx->pc = 0x244680u;
    // 0x244680: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x244680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x244684: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x244684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x244688: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x244688u;
    SET_GPR_U32(ctx, 31, 0x244690u);
    ctx->pc = 0x24468Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244688u;
            // 0x24468c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244690u; }
        if (ctx->pc != 0x244690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244690u; }
        if (ctx->pc != 0x244690u) { return; }
    }
    ctx->pc = 0x244690u;
    // 0x244690: 0xc0967f8  jal         func_259FE0
    ctx->pc = 0x244690u;
    SET_GPR_U32(ctx, 31, 0x244698u);
    ctx->pc = 0x244694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244690u;
            // 0x244694: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259FE0u;
    if (runtime->hasFunction(0x259FE0u)) {
        auto targetFn = runtime->lookupFunction(0x259FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244698u; }
        if (ctx->pc != 0x244698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00259FE0_0x259fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244698u; }
        if (ctx->pc != 0x244698u) { return; }
    }
    ctx->pc = 0x244698u;
    // 0x244698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24469c: 0x3e00008  jr          $ra
    ctx->pc = 0x24469Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2446A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24469Cu;
            // 0x2446a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2446A4u;
    // 0x2446a4: 0x0  nop
    ctx->pc = 0x2446a4u;
    // NOP
    // 0x2446a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2446a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2446ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2446acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2446b0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x2446B0u;
    SET_GPR_U32(ctx, 31, 0x2446B8u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2446B8u; }
        if (ctx->pc != 0x2446B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2446B8u; }
        if (ctx->pc != 0x2446B8u) { return; }
    }
    ctx->pc = 0x2446B8u;
    // 0x2446b8: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x2446b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2446bc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2446bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2446c0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x2446C0u;
    SET_GPR_U32(ctx, 31, 0x2446C8u);
    ctx->pc = 0x2446C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2446C0u;
            // 0x2446c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2446C8u; }
        if (ctx->pc != 0x2446C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2446C8u; }
        if (ctx->pc != 0x2446C8u) { return; }
    }
    ctx->pc = 0x2446C8u;
    // 0x2446c8: 0xc09680c  jal         func_25A030
    ctx->pc = 0x2446C8u;
    SET_GPR_U32(ctx, 31, 0x2446D0u);
    ctx->pc = 0x2446CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2446C8u;
            // 0x2446cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A030u;
    if (runtime->hasFunction(0x25A030u)) {
        auto targetFn = runtime->lookupFunction(0x25A030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2446D0u; }
        if (ctx->pc != 0x2446D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A030_0x25a030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2446D0u; }
        if (ctx->pc != 0x2446D0u) { return; }
    }
    ctx->pc = 0x2446D0u;
    // 0x2446d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2446d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2446d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2446D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2446D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2446D4u;
            // 0x2446d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2446DCu;
    // 0x2446dc: 0x0  nop
    ctx->pc = 0x2446dcu;
    // NOP
    // 0x2446e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2446e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2446e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2446e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2446e8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x2446E8u;
    SET_GPR_U32(ctx, 31, 0x2446F0u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2446F0u; }
        if (ctx->pc != 0x2446F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2446F0u; }
        if (ctx->pc != 0x2446F0u) { return; }
    }
    ctx->pc = 0x2446F0u;
    // 0x2446f0: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x2446f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2446f4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2446f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2446f8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x2446F8u;
    SET_GPR_U32(ctx, 31, 0x244700u);
    ctx->pc = 0x2446FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2446F8u;
            // 0x2446fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244700u; }
        if (ctx->pc != 0x244700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244700u; }
        if (ctx->pc != 0x244700u) { return; }
    }
    ctx->pc = 0x244700u;
    // 0x244700: 0xc096822  jal         func_25A088
    ctx->pc = 0x244700u;
    SET_GPR_U32(ctx, 31, 0x244708u);
    ctx->pc = 0x244704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244700u;
            // 0x244704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A088u;
    if (runtime->hasFunction(0x25A088u)) {
        auto targetFn = runtime->lookupFunction(0x25A088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244708u; }
        if (ctx->pc != 0x244708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A088_0x25a088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244708u; }
        if (ctx->pc != 0x244708u) { return; }
    }
    ctx->pc = 0x244708u;
    // 0x244708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24470c: 0x3e00008  jr          $ra
    ctx->pc = 0x24470Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24470Cu;
            // 0x244710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244714u;
    // 0x244714: 0x0  nop
    ctx->pc = 0x244714u;
    // NOP
    // 0x244718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24471c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24471cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244720: 0xc04f824  jal         func_13E090
    ctx->pc = 0x244720u;
    SET_GPR_U32(ctx, 31, 0x244728u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244728u; }
        if (ctx->pc != 0x244728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244728u; }
        if (ctx->pc != 0x244728u) { return; }
    }
    ctx->pc = 0x244728u;
    // 0x244728: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x244728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x24472c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x24472cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x244730: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x244730u;
    SET_GPR_U32(ctx, 31, 0x244738u);
    ctx->pc = 0x244734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244730u;
            // 0x244734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244738u; }
        if (ctx->pc != 0x244738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244738u; }
        if (ctx->pc != 0x244738u) { return; }
    }
    ctx->pc = 0x244738u;
    // 0x244738: 0xc09683e  jal         func_25A0F8
    ctx->pc = 0x244738u;
    SET_GPR_U32(ctx, 31, 0x244740u);
    ctx->pc = 0x24473Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244738u;
            // 0x24473c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A0F8u;
    if (runtime->hasFunction(0x25A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x25A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244740u; }
        if (ctx->pc != 0x244740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A0F8_0x25a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244740u; }
        if (ctx->pc != 0x244740u) { return; }
    }
    ctx->pc = 0x244740u;
    // 0x244740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244744: 0x3e00008  jr          $ra
    ctx->pc = 0x244744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244744u;
            // 0x244748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24474Cu;
    // 0x24474c: 0x0  nop
    ctx->pc = 0x24474cu;
    // NOP
    // 0x244750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244758: 0xc04f824  jal         func_13E090
    ctx->pc = 0x244758u;
    SET_GPR_U32(ctx, 31, 0x244760u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244760u; }
        if (ctx->pc != 0x244760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244760u; }
        if (ctx->pc != 0x244760u) { return; }
    }
    ctx->pc = 0x244760u;
    // 0x244760: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x244760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x244764: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x244764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x244768: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x244768u;
    SET_GPR_U32(ctx, 31, 0x244770u);
    ctx->pc = 0x24476Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244768u;
            // 0x24476c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244770u; }
        if (ctx->pc != 0x244770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244770u; }
        if (ctx->pc != 0x244770u) { return; }
    }
    ctx->pc = 0x244770u;
    // 0x244770: 0xc096862  jal         func_25A188
    ctx->pc = 0x244770u;
    SET_GPR_U32(ctx, 31, 0x244778u);
    ctx->pc = 0x244774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244770u;
            // 0x244774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A188u;
    if (runtime->hasFunction(0x25A188u)) {
        auto targetFn = runtime->lookupFunction(0x25A188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244778u; }
        if (ctx->pc != 0x244778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A188_0x25a188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244778u; }
        if (ctx->pc != 0x244778u) { return; }
    }
    ctx->pc = 0x244778u;
    // 0x244778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24477c: 0x3e00008  jr          $ra
    ctx->pc = 0x24477Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24477Cu;
            // 0x244780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244784u;
    // 0x244784: 0x0  nop
    ctx->pc = 0x244784u;
    // NOP
    // 0x244788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24478c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24478cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244790: 0xc04f824  jal         func_13E090
    ctx->pc = 0x244790u;
    SET_GPR_U32(ctx, 31, 0x244798u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244798u; }
        if (ctx->pc != 0x244798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244798u; }
        if (ctx->pc != 0x244798u) { return; }
    }
    ctx->pc = 0x244798u;
    // 0x244798: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x244798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x24479c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x24479cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2447a0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x2447A0u;
    SET_GPR_U32(ctx, 31, 0x2447A8u);
    ctx->pc = 0x2447A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2447A0u;
            // 0x2447a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447A8u; }
        if (ctx->pc != 0x2447A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447A8u; }
        if (ctx->pc != 0x2447A8u) { return; }
    }
    ctx->pc = 0x2447A8u;
    // 0x2447a8: 0xc096876  jal         func_25A1D8
    ctx->pc = 0x2447A8u;
    SET_GPR_U32(ctx, 31, 0x2447B0u);
    ctx->pc = 0x2447ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2447A8u;
            // 0x2447ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A1D8u;
    if (runtime->hasFunction(0x25A1D8u)) {
        auto targetFn = runtime->lookupFunction(0x25A1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447B0u; }
        if (ctx->pc != 0x2447B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A1D8_0x25a1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447B0u; }
        if (ctx->pc != 0x2447B0u) { return; }
    }
    ctx->pc = 0x2447B0u;
    // 0x2447b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2447b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2447b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2447B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2447B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2447B4u;
            // 0x2447b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2447BCu;
    // 0x2447bc: 0x0  nop
    ctx->pc = 0x2447bcu;
    // NOP
    // 0x2447c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2447c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2447c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2447c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2447c8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x2447C8u;
    SET_GPR_U32(ctx, 31, 0x2447D0u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447D0u; }
        if (ctx->pc != 0x2447D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447D0u; }
        if (ctx->pc != 0x2447D0u) { return; }
    }
    ctx->pc = 0x2447D0u;
    // 0x2447d0: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x2447d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2447d4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2447d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2447d8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x2447D8u;
    SET_GPR_U32(ctx, 31, 0x2447E0u);
    ctx->pc = 0x2447DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2447D8u;
            // 0x2447dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447E0u; }
        if (ctx->pc != 0x2447E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447E0u; }
        if (ctx->pc != 0x2447E0u) { return; }
    }
    ctx->pc = 0x2447E0u;
    // 0x2447e0: 0xc096888  jal         func_25A220
    ctx->pc = 0x2447E0u;
    SET_GPR_U32(ctx, 31, 0x2447E8u);
    ctx->pc = 0x2447E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2447E0u;
            // 0x2447e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A220u;
    if (runtime->hasFunction(0x25A220u)) {
        auto targetFn = runtime->lookupFunction(0x25A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447E8u; }
        if (ctx->pc != 0x2447E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A220_0x25a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447E8u; }
        if (ctx->pc != 0x2447E8u) { return; }
    }
    ctx->pc = 0x2447E8u;
    // 0x2447e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2447e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2447ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2447ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2447F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2447ECu;
            // 0x2447f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2447F4u;
    // 0x2447f4: 0x0  nop
    ctx->pc = 0x2447f4u;
    // NOP
    // 0x2447f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2447f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2447fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2447fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244800: 0xc04f824  jal         func_13E090
    ctx->pc = 0x244800u;
    SET_GPR_U32(ctx, 31, 0x244808u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244808u; }
        if (ctx->pc != 0x244808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244808u; }
        if (ctx->pc != 0x244808u) { return; }
    }
    ctx->pc = 0x244808u;
    // 0x244808: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x244808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x24480c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x24480cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x244810: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x244810u;
    SET_GPR_U32(ctx, 31, 0x244818u);
    ctx->pc = 0x244814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244810u;
            // 0x244814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244818u; }
        if (ctx->pc != 0x244818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244818u; }
        if (ctx->pc != 0x244818u) { return; }
    }
    ctx->pc = 0x244818u;
    // 0x244818: 0xc0968aa  jal         func_25A2A8
    ctx->pc = 0x244818u;
    SET_GPR_U32(ctx, 31, 0x244820u);
    ctx->pc = 0x24481Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244818u;
            // 0x24481c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A2A8u;
    if (runtime->hasFunction(0x25A2A8u)) {
        auto targetFn = runtime->lookupFunction(0x25A2A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244820u; }
        if (ctx->pc != 0x244820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A2A8_0x25a2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244820u; }
        if (ctx->pc != 0x244820u) { return; }
    }
    ctx->pc = 0x244820u;
    // 0x244820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244824: 0x3e00008  jr          $ra
    ctx->pc = 0x244824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244824u;
            // 0x244828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24482Cu;
    // 0x24482c: 0x0  nop
    ctx->pc = 0x24482cu;
    // NOP
    // 0x244830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244838: 0xc04f824  jal         func_13E090
    ctx->pc = 0x244838u;
    SET_GPR_U32(ctx, 31, 0x244840u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244840u; }
        if (ctx->pc != 0x244840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244840u; }
        if (ctx->pc != 0x244840u) { return; }
    }
    ctx->pc = 0x244840u;
    // 0x244840: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x244840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x244844: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x244844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x244848: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x244848u;
    SET_GPR_U32(ctx, 31, 0x244850u);
    ctx->pc = 0x24484Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244848u;
            // 0x24484c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244850u; }
        if (ctx->pc != 0x244850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244850u; }
        if (ctx->pc != 0x244850u) { return; }
    }
    ctx->pc = 0x244850u;
    // 0x244850: 0xc0968ce  jal         func_25A338
    ctx->pc = 0x244850u;
    SET_GPR_U32(ctx, 31, 0x244858u);
    ctx->pc = 0x244854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244850u;
            // 0x244854: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A338u;
    if (runtime->hasFunction(0x25A338u)) {
        auto targetFn = runtime->lookupFunction(0x25A338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244858u; }
        if (ctx->pc != 0x244858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A338_0x25a338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244858u; }
        if (ctx->pc != 0x244858u) { return; }
    }
    ctx->pc = 0x244858u;
    // 0x244858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24485c: 0x3e00008  jr          $ra
    ctx->pc = 0x24485Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24485Cu;
            // 0x244860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244864u;
    // 0x244864: 0x0  nop
    ctx->pc = 0x244864u;
    // NOP
    // 0x244868: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x244868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24486c: 0x0  nop
    ctx->pc = 0x24486cu;
    // NOP
    // 0x244870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244878: 0xc04f824  jal         func_13E090
    ctx->pc = 0x244878u;
    SET_GPR_U32(ctx, 31, 0x244880u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244880u; }
        if (ctx->pc != 0x244880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244880u; }
        if (ctx->pc != 0x244880u) { return; }
    }
    ctx->pc = 0x244880u;
    // 0x244880: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x244880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x244884: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x244884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x244888: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x244888u;
    SET_GPR_U32(ctx, 31, 0x244890u);
    ctx->pc = 0x24488Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244888u;
            // 0x24488c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244890u; }
        if (ctx->pc != 0x244890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244890u; }
        if (ctx->pc != 0x244890u) { return; }
    }
    ctx->pc = 0x244890u;
    // 0x244890: 0xc0968e8  jal         func_25A3A0
    ctx->pc = 0x244890u;
    SET_GPR_U32(ctx, 31, 0x244898u);
    ctx->pc = 0x244894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244890u;
            // 0x244894: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A3A0u;
    if (runtime->hasFunction(0x25A3A0u)) {
        auto targetFn = runtime->lookupFunction(0x25A3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244898u; }
        if (ctx->pc != 0x244898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A3A0_0x25a3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244898u; }
        if (ctx->pc != 0x244898u) { return; }
    }
    ctx->pc = 0x244898u;
    // 0x244898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24489c: 0x3e00008  jr          $ra
    ctx->pc = 0x24489Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2448A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24489Cu;
            // 0x2448a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2448A4u;
    // 0x2448a4: 0x0  nop
    ctx->pc = 0x2448a4u;
    // NOP
    // 0x2448a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2448a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2448ac: 0x0  nop
    ctx->pc = 0x2448acu;
    // NOP
    // 0x2448b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2448b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2448b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2448b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2448b8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x2448B8u;
    SET_GPR_U32(ctx, 31, 0x2448C0u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2448C0u; }
        if (ctx->pc != 0x2448C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2448C0u; }
        if (ctx->pc != 0x2448C0u) { return; }
    }
    ctx->pc = 0x2448C0u;
    // 0x2448c0: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x2448c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2448c4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2448c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2448c8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x2448C8u;
    SET_GPR_U32(ctx, 31, 0x2448D0u);
    ctx->pc = 0x2448CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2448C8u;
            // 0x2448cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2448D0u; }
        if (ctx->pc != 0x2448D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2448D0u; }
        if (ctx->pc != 0x2448D0u) { return; }
    }
    ctx->pc = 0x2448D0u;
    // 0x2448d0: 0xc096902  jal         func_25A408
    ctx->pc = 0x2448D0u;
    SET_GPR_U32(ctx, 31, 0x2448D8u);
    ctx->pc = 0x2448D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2448D0u;
            // 0x2448d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A408u;
    if (runtime->hasFunction(0x25A408u)) {
        auto targetFn = runtime->lookupFunction(0x25A408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2448D8u; }
        if (ctx->pc != 0x2448D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A408_0x25a408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2448D8u; }
        if (ctx->pc != 0x2448D8u) { return; }
    }
    ctx->pc = 0x2448D8u;
    // 0x2448d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2448d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2448dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2448DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2448E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2448DCu;
            // 0x2448e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2448E4u;
    // 0x2448e4: 0x0  nop
    ctx->pc = 0x2448e4u;
    // NOP
    // 0x2448e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2448e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2448ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2448ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2448f0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x2448F0u;
    SET_GPR_U32(ctx, 31, 0x2448F8u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2448F8u; }
        if (ctx->pc != 0x2448F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2448F8u; }
        if (ctx->pc != 0x2448F8u) { return; }
    }
    ctx->pc = 0x2448F8u;
    // 0x2448f8: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x2448f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2448fc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2448fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x244900: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x244900u;
    SET_GPR_U32(ctx, 31, 0x244908u);
    ctx->pc = 0x244904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244900u;
            // 0x244904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244908u; }
        if (ctx->pc != 0x244908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244908u; }
        if (ctx->pc != 0x244908u) { return; }
    }
    ctx->pc = 0x244908u;
    // 0x244908: 0xc096910  jal         func_25A440
    ctx->pc = 0x244908u;
    SET_GPR_U32(ctx, 31, 0x244910u);
    ctx->pc = 0x24490Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244908u;
            // 0x24490c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A440u;
    if (runtime->hasFunction(0x25A440u)) {
        auto targetFn = runtime->lookupFunction(0x25A440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244910u; }
        if (ctx->pc != 0x244910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A440_0x25a440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244910u; }
        if (ctx->pc != 0x244910u) { return; }
    }
    ctx->pc = 0x244910u;
    // 0x244910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244914: 0x3e00008  jr          $ra
    ctx->pc = 0x244914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244914u;
            // 0x244918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24491Cu;
    // 0x24491c: 0x0  nop
    ctx->pc = 0x24491cu;
    // NOP
    // 0x244920: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x244920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x244924: 0x3e00008  jr          $ra
    ctx->pc = 0x244924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244924u;
            // 0x244928: 0x24424018  addiu       $v0, $v0, 0x4018 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16408));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24492Cu;
    // 0x24492c: 0x0  nop
    ctx->pc = 0x24492cu;
    // NOP
    // 0x244930: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x244930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x244934: 0x3e00008  jr          $ra
    ctx->pc = 0x244934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244934u;
            // 0x244938: 0x24424028  addiu       $v0, $v0, 0x4028 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16424));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24493Cu;
    // 0x24493c: 0x0  nop
    ctx->pc = 0x24493cu;
    // NOP
    // 0x244940: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x244940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x244944: 0x3e00008  jr          $ra
    ctx->pc = 0x244944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244944u;
            // 0x244948: 0x244213f8  addiu       $v0, $v0, 0x13F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24494Cu;
    // 0x24494c: 0x0  nop
    ctx->pc = 0x24494cu;
    // NOP
    // 0x244950: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x244950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x244954: 0x3e00008  jr          $ra
    ctx->pc = 0x244954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244954u;
            // 0x244958: 0x24424038  addiu       $v0, $v0, 0x4038 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244568u: goto label_244568;
            case 0x244580u: goto label_244580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24495Cu;
    // 0x24495c: 0x0  nop
    ctx->pc = 0x24495cu;
    // NOP
}
