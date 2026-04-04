#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_282548
// Address: 0x282548 - 0x282620
void entry_282548_0x282620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_282548_0x282620");
#endif

    ctx->pc = 0x282548u;

    // 0x282548: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x282548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x28254c: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x28254cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x282550: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x282550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x282554: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x282554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x282558: 0x24422748  addiu       $v0, $v0, 0x2748
    ctx->pc = 0x282558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10056));
    // 0x28255c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x28255cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x282560: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x282560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x282564: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x282564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x282568: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x282568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x28256c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x28256cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x282570: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x282570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x282574: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x282574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x282578: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x282578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28257c: 0xc09ecae  jal         func_27B2B8
    ctx->pc = 0x28257Cu;
    SET_GPR_U32(ctx, 31, 0x282584u);
    ctx->pc = 0x282580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28257Cu;
            // 0x282580: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B2B8u;
    if (runtime->hasFunction(0x27B2B8u)) {
        auto targetFn = runtime->lookupFunction(0x27B2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282584u; }
        if (ctx->pc != 0x282584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B2B8_0x27b2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282584u; }
        if (ctx->pc != 0x282584u) { return; }
    }
    ctx->pc = 0x282584u;
    // 0x282584: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x282584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x282588: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282588u;
    {
        const bool branch_taken_0x282588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28258Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282588u;
            // 0x28258c: 0x3c130032  lui         $s3, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282588) {
            ctx->pc = 0x282598u;
            goto label_282598;
        }
    }
    ctx->pc = 0x282590u;
    // 0x282590: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x282590u;
    {
        const bool branch_taken_0x282590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282590u;
            // 0x282594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282590) {
            ctx->pc = 0x282600u;
            goto label_282600;
        }
    }
    ctx->pc = 0x282598u;
label_282598:
    // 0x282598: 0x24032080  addiu       $v1, $zero, 0x2080
    ctx->pc = 0x282598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x28259c: 0x266227c0  addiu       $v0, $s3, 0x27C0
    ctx->pc = 0x28259cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 10176));
    // 0x2825a0: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x2825a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x2825a4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2825a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2825a8: 0x24844840  addiu       $a0, $a0, 0x4840
    ctx->pc = 0x2825a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18496));
    // 0x2825ac: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2825acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2825b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2825b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825b4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2825b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2825b8: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x2825B8u;
    SET_GPR_U32(ctx, 31, 0x2825C0u);
    ctx->pc = 0x2825BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2825B8u;
            // 0x2825bc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2825C0u; }
        if (ctx->pc != 0x2825C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2825C0u; }
        if (ctx->pc != 0x2825C0u) { return; }
    }
    ctx->pc = 0x2825C0u;
    // 0x2825c0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2825c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2825c4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2825c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2825c8: 0x3c140028  lui         $s4, 0x28
    ctx->pc = 0x2825c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
    // 0x2825cc: 0xae023624  sw          $v0, 0x3624($s0)
    ctx->pc = 0x2825ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13860), GPR_U32(ctx, 2));
    // 0x2825d0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2825d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2825d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2825d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2825d8:
    // 0x2825d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2825d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825dc: 0x8e053624  lw          $a1, 0x3624($s0)
    ctx->pc = 0x2825dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13860)));
    // 0x2825e0: 0x266727c0  addiu       $a3, $s3, 0x27C0
    ctx->pc = 0x2825e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 10176));
    // 0x2825e4: 0xc09ed5a  jal         func_27B568
    ctx->pc = 0x2825E4u;
    SET_GPR_U32(ctx, 31, 0x2825ECu);
    ctx->pc = 0x2825E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2825E4u;
            // 0x2825e8: 0x26882118  addiu       $t0, $s4, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 8472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B568u;
    if (runtime->hasFunction(0x27B568u)) {
        auto targetFn = runtime->lookupFunction(0x27B568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2825ECu; }
        if (ctx->pc != 0x2825ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B568_0x27b568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2825ECu; }
        if (ctx->pc != 0x2825ECu) { return; }
    }
    ctx->pc = 0x2825ECu;
    // 0x2825ec: 0x5452fffa  bnel        $v0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2825ECu;
    {
        const bool branch_taken_0x2825ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2825ec) {
            ctx->pc = 0x2825F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2825ECu;
            // 0x2825f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2825D8u;
            runtime->cooperativeGuestYield();
            goto label_2825d8;
        }
    }
    ctx->pc = 0x2825F4u;
    // 0x2825f4: 0xc0a07fc  jal         func_281FF0
    ctx->pc = 0x2825F4u;
    SET_GPR_U32(ctx, 31, 0x2825FCu);
    ctx->pc = 0x281FF0u;
    if (runtime->hasFunction(0x281FF0u)) {
        auto targetFn = runtime->lookupFunction(0x281FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2825FCu; }
        if (ctx->pc != 0x2825FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281FF0_0x281ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2825FCu; }
        if (ctx->pc != 0x2825FCu) { return; }
    }
    ctx->pc = 0x2825FCu;
    // 0x2825fc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2825fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_282600:
    // 0x282600: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x282600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x282604: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x282604u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282608: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x282608u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28260c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x28260cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282610: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x282610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282614: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x282614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282618: 0x3e00008  jr          $ra
    ctx->pc = 0x282618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28261Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282618u;
            // 0x28261c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282598u: goto label_282598;
            case 0x2825D8u: goto label_2825d8;
            case 0x282600u: goto label_282600;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282620u;
}
