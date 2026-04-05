#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_282620
// Address: 0x282620 - 0x282710
void entry_282620_0x282710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_282620_0x282710");
#endif

    ctx->pc = 0x282620u;

    // 0x282620: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x282620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x282624: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x282624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x282628: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x282628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x28262c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28262cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x282630: 0x24422748  addiu       $v0, $v0, 0x2748
    ctx->pc = 0x282630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10056));
    // 0x282634: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x282634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x282638: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x282638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28263c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x28263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x282640: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x282640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x282644: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x282644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x282648: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x282648u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28264c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x28264cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x282650: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x282650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x282654: 0xc09ecae  jal         func_27B2B8
    ctx->pc = 0x282654u;
    SET_GPR_U32(ctx, 31, 0x28265Cu);
    ctx->pc = 0x282658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282654u;
            // 0x282658: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B2B8u;
    if (runtime->hasFunction(0x27B2B8u)) {
        auto targetFn = runtime->lookupFunction(0x27B2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28265Cu; }
        if (ctx->pc != 0x28265Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B2B8_0x27b2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28265Cu; }
        if (ctx->pc != 0x28265Cu) { return; }
    }
    ctx->pc = 0x28265Cu;
    // 0x28265c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28265cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x282660: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282660u;
    {
        const bool branch_taken_0x282660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x282664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282660u;
            // 0x282664: 0x3c130032  lui         $s3, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282660) {
            ctx->pc = 0x282670u;
            goto label_282670;
        }
    }
    ctx->pc = 0x282668u;
    // 0x282668: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x282668u;
    {
        const bool branch_taken_0x282668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28266Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282668u;
            // 0x28266c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282668) {
            ctx->pc = 0x2826ECu;
            goto label_2826ec;
        }
    }
    ctx->pc = 0x282670u;
label_282670:
    // 0x282670: 0x24022080  addiu       $v0, $zero, 0x2080
    ctx->pc = 0x282670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x282674: 0x266327c0  addiu       $v1, $s3, 0x27C0
    ctx->pc = 0x282674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 10176));
    // 0x282678: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x282678u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
    // 0x28267c: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x28267cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x282680: 0x26104840  addiu       $s0, $s0, 0x4840
    ctx->pc = 0x282680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18496));
    // 0x282684: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x282684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x282688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28268c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x28268cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x282690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282694: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x282694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x282698: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x282698u;
    SET_GPR_U32(ctx, 31, 0x2826A0u);
    ctx->pc = 0x28269Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282698u;
            // 0x28269c: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2826A0u; }
        if (ctx->pc != 0x2826A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2826A0u; }
        if (ctx->pc != 0x2826A0u) { return; }
    }
    ctx->pc = 0x2826A0u;
    // 0x2826a0: 0x3c140028  lui         $s4, 0x28
    ctx->pc = 0x2826a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
    // 0x2826a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2826a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826a8: 0x248500ff  addiu       $a1, $a0, 0xFF
    ctx->pc = 0x2826a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x2826ac: 0xc0a5118  jal         func_294460
    ctx->pc = 0x2826ACu;
    SET_GPR_U32(ctx, 31, 0x2826B4u);
    ctx->pc = 0x2826B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2826ACu;
            // 0x2826b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294460u;
    if (runtime->hasFunction(0x294460u)) {
        auto targetFn = runtime->lookupFunction(0x294460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2826B4u; }
        if (ctx->pc != 0x2826B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294460_0x294460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2826B4u; }
        if (ctx->pc != 0x2826B4u) { return; }
    }
    ctx->pc = 0x2826B4u;
    // 0x2826b4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2826b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2826b8: 0xae223624  sw          $v0, 0x3624($s1)
    ctx->pc = 0x2826b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 13860), GPR_U32(ctx, 2));
    // 0x2826bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2826bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2826c0:
    // 0x2826c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2826c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826c4: 0x8e253624  lw          $a1, 0x3624($s1)
    ctx->pc = 0x2826c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13860)));
    // 0x2826c8: 0x266727c0  addiu       $a3, $s3, 0x27C0
    ctx->pc = 0x2826c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 10176));
    // 0x2826cc: 0xc09ed5a  jal         func_27B568
    ctx->pc = 0x2826CCu;
    SET_GPR_U32(ctx, 31, 0x2826D4u);
    ctx->pc = 0x2826D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2826CCu;
            // 0x2826d0: 0x26882118  addiu       $t0, $s4, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 8472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B568u;
    if (runtime->hasFunction(0x27B568u)) {
        auto targetFn = runtime->lookupFunction(0x27B568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2826D4u; }
        if (ctx->pc != 0x2826D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B568_0x27b568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2826D4u; }
        if (ctx->pc != 0x2826D4u) { return; }
    }
    ctx->pc = 0x2826D4u;
    // 0x2826d4: 0x5450fffa  bnel        $v0, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2826D4u;
    {
        const bool branch_taken_0x2826d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2826d4) {
            ctx->pc = 0x2826D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2826D4u;
            // 0x2826d8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2826C0u;
            runtime->cooperativeGuestYield();
            goto label_2826c0;
        }
    }
    ctx->pc = 0x2826DCu;
    // 0x2826dc: 0xc0a07fc  jal         func_281FF0
    ctx->pc = 0x2826DCu;
    SET_GPR_U32(ctx, 31, 0x2826E4u);
    ctx->pc = 0x281FF0u;
    if (runtime->hasFunction(0x281FF0u)) {
        auto targetFn = runtime->lookupFunction(0x281FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2826E4u; }
        if (ctx->pc != 0x2826E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281FF0_0x281ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2826E4u; }
        if (ctx->pc != 0x2826E4u) { return; }
    }
    ctx->pc = 0x2826E4u;
    // 0x2826e4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2826e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2826e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2826e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2826ec:
    // 0x2826ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2826ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2826f0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2826f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2826f4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2826f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2826f8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2826f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2826fc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2826fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282700: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x282700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282704: 0x3e00008  jr          $ra
    ctx->pc = 0x282704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282704u;
            // 0x282708: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282670u: goto label_282670;
            case 0x2826C0u: goto label_2826c0;
            case 0x2826ECu: goto label_2826ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28270Cu;
    // 0x28270c: 0x0  nop
    ctx->pc = 0x28270cu;
    // NOP
}
