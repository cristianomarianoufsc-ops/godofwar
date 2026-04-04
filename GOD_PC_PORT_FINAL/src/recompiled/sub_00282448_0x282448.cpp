#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282448
// Address: 0x282448 - 0x282548
void sub_00282448_0x282448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282448_0x282448");
#endif

    ctx->pc = 0x282448u;

    // 0x282448: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x282448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28244c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x28244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x282450: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x282450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x282454: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x282454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x282458: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x282458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x28245c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x28245cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x282460: 0x24712748  addiu       $s1, $v1, 0x2748
    ctx->pc = 0x282460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 10056));
    // 0x282464: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x282464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x282468: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x282468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28246c: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x28246cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x282470: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x282470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x282474: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x282474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x282478: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x282478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28247c: 0xc09ecae  jal         func_27B2B8
    ctx->pc = 0x28247Cu;
    SET_GPR_U32(ctx, 31, 0x282484u);
    ctx->pc = 0x282480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28247Cu;
            // 0x282480: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B2B8u;
    if (runtime->hasFunction(0x27B2B8u)) {
        auto targetFn = runtime->lookupFunction(0x27B2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282484u; }
        if (ctx->pc != 0x282484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B2B8_0x27b2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282484u; }
        if (ctx->pc != 0x282484u) { return; }
    }
    ctx->pc = 0x282484u;
    // 0x282484: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x282484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x282488: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282488u;
    {
        const bool branch_taken_0x282488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28248Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282488u;
            // 0x28248c: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282488) {
            ctx->pc = 0x282498u;
            goto label_282498;
        }
    }
    ctx->pc = 0x282490u;
    // 0x282490: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x282490u;
    {
        const bool branch_taken_0x282490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282490u;
            // 0x282494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282490) {
            ctx->pc = 0x282528u;
            goto label_282528;
        }
    }
    ctx->pc = 0x282498u;
label_282498:
    // 0x282498: 0x3c130032  lui         $s3, 0x32
    ctx->pc = 0x282498u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
    // 0x28249c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28249cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824a0: 0x24072080  addiu       $a3, $zero, 0x2080
    ctx->pc = 0x2824a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x2824a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2824a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824a8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2824a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2824ac: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x2824acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2824b0: 0x266227c0  addiu       $v0, $s3, 0x27C0
    ctx->pc = 0x2824b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 10176));
    // 0x2824b4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2824b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2824b8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2824b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2824bc: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x2824bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x2824c0: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x2824c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x2824c4: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x2824c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x2824c8: 0x24844840  addiu       $a0, $a0, 0x4840
    ctx->pc = 0x2824c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18496));
    // 0x2824cc: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2824ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2824d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2824d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824d4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2824d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2824d8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2824d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2824dc: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2824dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2824e0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2824e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824e4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2824e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2824e8: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x2824E8u;
    SET_GPR_U32(ctx, 31, 0x2824F0u);
    ctx->pc = 0x2824ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2824E8u;
            // 0x2824ec: 0x3c140028  lui         $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2824F0u; }
        if (ctx->pc != 0x2824F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2824F0u; }
        if (ctx->pc != 0x2824F0u) { return; }
    }
    ctx->pc = 0x2824F0u;
    // 0x2824f0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2824f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2824f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2824f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2824f8: 0xae023624  sw          $v0, 0x3624($s0)
    ctx->pc = 0x2824f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13860), GPR_U32(ctx, 2));
    // 0x2824fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2824fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_282500:
    // 0x282500: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x282500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282504: 0x8e053624  lw          $a1, 0x3624($s0)
    ctx->pc = 0x282504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13860)));
    // 0x282508: 0x266727c0  addiu       $a3, $s3, 0x27C0
    ctx->pc = 0x282508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 10176));
    // 0x28250c: 0xc09ed5a  jal         func_27B568
    ctx->pc = 0x28250Cu;
    SET_GPR_U32(ctx, 31, 0x282514u);
    ctx->pc = 0x282510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28250Cu;
            // 0x282510: 0x26882118  addiu       $t0, $s4, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 8472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B568u;
    if (runtime->hasFunction(0x27B568u)) {
        auto targetFn = runtime->lookupFunction(0x27B568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282514u; }
        if (ctx->pc != 0x282514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B568_0x27b568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282514u; }
        if (ctx->pc != 0x282514u) { return; }
    }
    ctx->pc = 0x282514u;
    // 0x282514: 0x5452fffa  bnel        $v0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x282514u;
    {
        const bool branch_taken_0x282514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x282514) {
            ctx->pc = 0x282518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x282514u;
            // 0x282518: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x282500u;
            runtime->cooperativeGuestYield();
            goto label_282500;
        }
    }
    ctx->pc = 0x28251Cu;
    // 0x28251c: 0xc0a07fc  jal         func_281FF0
    ctx->pc = 0x28251Cu;
    SET_GPR_U32(ctx, 31, 0x282524u);
    ctx->pc = 0x281FF0u;
    if (runtime->hasFunction(0x281FF0u)) {
        auto targetFn = runtime->lookupFunction(0x281FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282524u; }
        if (ctx->pc != 0x282524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281FF0_0x281ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282524u; }
        if (ctx->pc != 0x282524u) { return; }
    }
    ctx->pc = 0x282524u;
    // 0x282524: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x282524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_282528:
    // 0x282528: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x282528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28252c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x28252cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282530: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x282530u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282534: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x282534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282538: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x282538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28253c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28253cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282540: 0x3e00008  jr          $ra
    ctx->pc = 0x282540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282540u;
            // 0x282544: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282498u: goto label_282498;
            case 0x282500u: goto label_282500;
            case 0x282528u: goto label_282528;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282548u;
}
