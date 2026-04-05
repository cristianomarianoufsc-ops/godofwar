#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282710
// Address: 0x282710 - 0x282848
void sub_00282710_0x282710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282710_0x282710");
#endif

    ctx->pc = 0x282710u;

    // 0x282710: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x282710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x282714: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x282714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x282718: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x282718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28271c: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x28271cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x282720: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x282720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x282724: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x282724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x282728: 0x24712748  addiu       $s1, $v1, 0x2748
    ctx->pc = 0x282728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 10056));
    // 0x28272c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x28272cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x282730: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x282730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x282734: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x282734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x282738: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x282738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x28273c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x28273cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x282740: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x282740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x282744: 0xc09ecae  jal         func_27B2B8
    ctx->pc = 0x282744u;
    SET_GPR_U32(ctx, 31, 0x28274Cu);
    ctx->pc = 0x282748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282744u;
            // 0x282748: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B2B8u;
    if (runtime->hasFunction(0x27B2B8u)) {
        auto targetFn = runtime->lookupFunction(0x27B2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28274Cu; }
        if (ctx->pc != 0x28274Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B2B8_0x27b2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28274Cu; }
        if (ctx->pc != 0x28274Cu) { return; }
    }
    ctx->pc = 0x28274Cu;
    // 0x28274c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28274cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x282750: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282750u;
    {
        const bool branch_taken_0x282750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x282754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282750u;
            // 0x282754: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282750) {
            ctx->pc = 0x282760u;
            goto label_282760;
        }
    }
    ctx->pc = 0x282758u;
    // 0x282758: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x282758u;
    {
        const bool branch_taken_0x282758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28275Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282758u;
            // 0x28275c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282758) {
            ctx->pc = 0x282828u;
            goto label_282828;
        }
    }
    ctx->pc = 0x282760u;
label_282760:
    // 0x282760: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x282760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x282764: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x282764u;
    {
        const bool branch_taken_0x282764 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x282768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282764u;
            // 0x282768: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282764) {
            ctx->pc = 0x28277Cu;
            goto label_28277c;
        }
    }
    ctx->pc = 0x28276Cu;
    // 0x28276c: 0x8c4b000c  lw          $t3, 0xC($v0)
    ctx->pc = 0x28276cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x282770: 0x15600006  bnez        $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x282770u;
    {
        const bool branch_taken_0x282770 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x282774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282770u;
            // 0x282774: 0x2302821  addu        $a1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282770) {
            ctx->pc = 0x28278Cu;
            goto label_28278c;
        }
    }
    ctx->pc = 0x282778u;
    // 0x282778: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x282778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
label_28277c:
    // 0x28277c: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x28277Cu;
    SET_GPR_U32(ctx, 31, 0x282784u);
    ctx->pc = 0x282780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28277Cu;
            // 0x282780: 0x248452b0  addiu       $a0, $a0, 0x52B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282784u; }
        if (ctx->pc != 0x282784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282784u; }
        if (ctx->pc != 0x282784u) { return; }
    }
    ctx->pc = 0x282784u;
    // 0x282784: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x282784u;
    {
        const bool branch_taken_0x282784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282784u;
            // 0x282788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282784) {
            ctx->pc = 0x282828u;
            goto label_282828;
        }
    }
    ctx->pc = 0x28278Cu;
label_28278c:
    // 0x28278c: 0x3c130032  lui         $s3, 0x32
    ctx->pc = 0x28278cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
    // 0x282790: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x282790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282794: 0x240a2080  addiu       $t2, $zero, 0x2080
    ctx->pc = 0x282794u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x282798: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x282798u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28279c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28279cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827a0: 0x8c680020  lw          $t0, 0x20($v1)
    ctx->pc = 0x2827a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2827a4: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2827a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2827a8: 0x8c89001c  lw          $t1, 0x1C($a0)
    ctx->pc = 0x2827a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2827ac: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2827acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827b0: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2827b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2827b4: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x2827b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x2827b8: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x2827b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2827bc: 0x24844840  addiu       $a0, $a0, 0x4840
    ctx->pc = 0x2827bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18496));
    // 0x2827c0: 0x266227c0  addiu       $v0, $s3, 0x27C0
    ctx->pc = 0x2827c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 10176));
    // 0x2827c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2827c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827c8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x2827c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x2827cc: 0x3c140028  lui         $s4, 0x28
    ctx->pc = 0x2827ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
    // 0x2827d0: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x2827d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x2827d4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2827d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2827d8: 0xac4b000c  sw          $t3, 0xC($v0)
    ctx->pc = 0x2827d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 11));
    // 0x2827dc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2827dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2827e0: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x2827e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x2827e4: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x2827e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x2827e8: 0xac490018  sw          $t1, 0x18($v0)
    ctx->pc = 0x2827e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 9));
    // 0x2827ec: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x2827ECu;
    SET_GPR_U32(ctx, 31, 0x2827F4u);
    ctx->pc = 0x2827F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2827ECu;
            // 0x2827f0: 0xafaa0000  sw          $t2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2827F4u; }
        if (ctx->pc != 0x2827F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2827F4u; }
        if (ctx->pc != 0x2827F4u) { return; }
    }
    ctx->pc = 0x2827F4u;
    // 0x2827f4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2827f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2827f8: 0xae033624  sw          $v1, 0x3624($s0)
    ctx->pc = 0x2827f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13860), GPR_U32(ctx, 3));
    // 0x2827fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2827fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_282800:
    // 0x282800: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x282800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282804: 0x8e053624  lw          $a1, 0x3624($s0)
    ctx->pc = 0x282804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13860)));
    // 0x282808: 0x266727c0  addiu       $a3, $s3, 0x27C0
    ctx->pc = 0x282808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 10176));
    // 0x28280c: 0xc09ed5a  jal         func_27B568
    ctx->pc = 0x28280Cu;
    SET_GPR_U32(ctx, 31, 0x282814u);
    ctx->pc = 0x282810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28280Cu;
            // 0x282810: 0x26882118  addiu       $t0, $s4, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 8472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B568u;
    if (runtime->hasFunction(0x27B568u)) {
        auto targetFn = runtime->lookupFunction(0x27B568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282814u; }
        if (ctx->pc != 0x282814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B568_0x27b568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282814u; }
        if (ctx->pc != 0x282814u) { return; }
    }
    ctx->pc = 0x282814u;
    // 0x282814: 0x5452fffa  bnel        $v0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x282814u;
    {
        const bool branch_taken_0x282814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x282814) {
            ctx->pc = 0x282818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x282814u;
            // 0x282818: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x282800u;
            runtime->cooperativeGuestYield();
            goto label_282800;
        }
    }
    ctx->pc = 0x28281Cu;
    // 0x28281c: 0xc0a07fc  jal         func_281FF0
    ctx->pc = 0x28281Cu;
    SET_GPR_U32(ctx, 31, 0x282824u);
    ctx->pc = 0x281FF0u;
    if (runtime->hasFunction(0x281FF0u)) {
        auto targetFn = runtime->lookupFunction(0x281FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282824u; }
        if (ctx->pc != 0x282824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281FF0_0x281ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282824u; }
        if (ctx->pc != 0x282824u) { return; }
    }
    ctx->pc = 0x282824u;
    // 0x282824: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x282824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_282828:
    // 0x282828: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x282828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28282c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x28282cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282830: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x282830u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282834: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x282834u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282838: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x282838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28283c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28283cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282840: 0x3e00008  jr          $ra
    ctx->pc = 0x282840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282840u;
            // 0x282844: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282760u: goto label_282760;
            case 0x28277Cu: goto label_28277c;
            case 0x28278Cu: goto label_28278c;
            case 0x282800u: goto label_282800;
            case 0x282828u: goto label_282828;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282848u;
}
