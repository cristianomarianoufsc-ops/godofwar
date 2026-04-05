#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00204530
// Address: 0x204530 - 0x2045e8
void sub_00204530_0x204530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204530_0x204530");
#endif

    ctx->pc = 0x204530u;

    // 0x204530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x204530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x204534: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x204534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x204538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20453c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20453cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204544: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x204544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x204548: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x204548u;
    {
        const bool branch_taken_0x204548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204548) {
            ctx->pc = 0x20454Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204548u;
            // 0x20454c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204558u;
            goto label_204558;
        }
    }
    ctx->pc = 0x204550u;
    // 0x204550: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x204550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x204554: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x204554u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_204558:
    // 0x204558: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x204558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x20455c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20455Cu;
    {
        const bool branch_taken_0x20455c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20455Cu;
            // 0x204560: 0x8e0201ac  lw          $v0, 0x1AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20455c) {
            ctx->pc = 0x2045C0u;
            goto label_2045c0;
        }
    }
    ctx->pc = 0x204564u;
    // 0x204564: 0x30424004  andi        $v0, $v0, 0x4004
    ctx->pc = 0x204564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16388);
    // 0x204568: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x204568u;
    {
        const bool branch_taken_0x204568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20456Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204568u;
            // 0x20456c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204568) {
            ctx->pc = 0x2045D0u;
            goto label_2045d0;
        }
    }
    ctx->pc = 0x204570u;
    // 0x204570: 0xc081be6  jal         func_206F98
    ctx->pc = 0x204570u;
    SET_GPR_U32(ctx, 31, 0x204578u);
    ctx->pc = 0x204574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204570u;
            // 0x204574: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206F98u;
    if (runtime->hasFunction(0x206F98u)) {
        auto targetFn = runtime->lookupFunction(0x206F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204578u; }
        if (ctx->pc != 0x204578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206F98_0x206f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204578u; }
        if (ctx->pc != 0x204578u) { return; }
    }
    ctx->pc = 0x204578u;
    // 0x204578: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x204578u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20457c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20457Cu;
    {
        const bool branch_taken_0x20457c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20457c) {
            ctx->pc = 0x2045A0u;
            goto label_2045a0;
        }
    }
    ctx->pc = 0x204584u;
    // 0x204584: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x204584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x204588: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x204588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x20458c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x20458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x204590: 0x40f809  jalr        $v0
    ctx->pc = 0x204590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204598u);
        ctx->pc = 0x204594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204590u;
            // 0x204594: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204598u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204558u: goto label_204558;
            case 0x2045A0u: goto label_2045a0;
            case 0x2045C0u: goto label_2045c0;
            case 0x2045D0u: goto label_2045d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204598u; }
            if (ctx->pc != 0x204598u) { return; }
        }
        }
    }
    ctx->pc = 0x204598u;
    // 0x204598: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x204598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x20459c: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x20459cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_2045a0:
    // 0x2045a0: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2045A0u;
    {
        const bool branch_taken_0x2045a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2045A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2045A0u;
            // 0x2045a4: 0x260301c0  addiu       $v1, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045a0) {
            ctx->pc = 0x2045D0u;
            goto label_2045d0;
        }
    }
    ctx->pc = 0x2045A8u;
    // 0x2045a8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2045a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2045ac: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x2045acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2045b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2045b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2045b4: 0xc08235e  jal         func_208D78
    ctx->pc = 0x2045B4u;
    SET_GPR_U32(ctx, 31, 0x2045BCu);
    ctx->pc = 0x2045B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2045B4u;
            // 0x2045b8: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2045BCu; }
        if (ctx->pc != 0x2045BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2045BCu; }
        if (ctx->pc != 0x2045BCu) { return; }
    }
    ctx->pc = 0x2045BCu;
    // 0x2045bc: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x2045bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_2045c0:
    // 0x2045c0: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x2045c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x2045c4: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2045c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x2045c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2045c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2045cc: 0xae0201ac  sw          $v0, 0x1AC($s0)
    ctx->pc = 0x2045ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
label_2045d0:
    // 0x2045d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2045d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2045d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2045d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2045d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2045d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2045dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2045DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2045E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2045DCu;
            // 0x2045e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204558u: goto label_204558;
            case 0x2045A0u: goto label_2045a0;
            case 0x2045C0u: goto label_2045c0;
            case 0x2045D0u: goto label_2045d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2045E4u;
    // 0x2045e4: 0x0  nop
    ctx->pc = 0x2045e4u;
    // NOP
}
