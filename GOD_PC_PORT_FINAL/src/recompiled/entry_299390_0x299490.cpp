#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_299390
// Address: 0x299390 - 0x299490
void entry_299390_0x299490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_299390_0x299490");
#endif

    ctx->pc = 0x299390u;

    // 0x299390: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x299390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x299394: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x299394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x299398: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x299398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29939c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2993a0: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x2993a0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x2993a4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2993a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2993a8: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x2993a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x2993ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2993acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2993b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2993b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2993b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2993b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2993b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2993b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2993bc: 0x24504b70  addiu       $s0, $v0, 0x4B70
    ctx->pc = 0x2993bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19312));
    // 0x2993c0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2993c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2993c4: 0x8c444b70  lw          $a0, 0x4B70($v0)
    ctx->pc = 0x2993c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19312)));
    // 0x2993c8: 0xc0a6524  jal         func_299490
    ctx->pc = 0x2993C8u;
    SET_GPR_U32(ctx, 31, 0x2993D0u);
    ctx->pc = 0x2993CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2993C8u;
            // 0x2993cc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299490u;
    if (runtime->hasFunction(0x299490u)) {
        auto targetFn = runtime->lookupFunction(0x299490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2993D0u; }
        if (ctx->pc != 0x2993D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299490_0x2994a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2993D0u; }
        if (ctx->pc != 0x2993D0u) { return; }
    }
    ctx->pc = 0x2993D0u;
    // 0x2993d0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2993d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2993d4: 0xc0a6524  jal         func_299490
    ctx->pc = 0x2993D4u;
    SET_GPR_U32(ctx, 31, 0x2993DCu);
    ctx->pc = 0x2993D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2993D4u;
            // 0x2993d8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299490u;
    if (runtime->hasFunction(0x299490u)) {
        auto targetFn = runtime->lookupFunction(0x299490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2993DCu; }
        if (ctx->pc != 0x2993DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299490_0x2994a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2993DCu; }
        if (ctx->pc != 0x2993DCu) { return; }
    }
    ctx->pc = 0x2993DCu;
    // 0x2993dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2993dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2993e0: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x2993e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x2993e4: 0xc0a64de  jal         func_299378
    ctx->pc = 0x2993E4u;
    SET_GPR_U32(ctx, 31, 0x2993ECu);
    ctx->pc = 0x2993E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2993E4u;
            // 0x2993e8: 0x26a69338  addiu       $a2, $s5, -0x6CC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299378u;
    if (runtime->hasFunction(0x299378u)) {
        auto targetFn = runtime->lookupFunction(0x299378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2993ECu; }
        if (ctx->pc != 0x2993ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299378_0x299390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2993ECu; }
        if (ctx->pc != 0x2993ECu) { return; }
    }
    ctx->pc = 0x2993ECu;
    // 0x2993ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2993ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993f0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2993f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2993f4: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x2993f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x2993f8: 0xc0a64de  jal         func_299378
    ctx->pc = 0x2993F8u;
    SET_GPR_U32(ctx, 31, 0x299400u);
    ctx->pc = 0x2993FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2993F8u;
            // 0x2993fc: 0x26869300  addiu       $a2, $s4, -0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299378u;
    if (runtime->hasFunction(0x299378u)) {
        auto targetFn = runtime->lookupFunction(0x299378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299400u; }
        if (ctx->pc != 0x299400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299378_0x299390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299400u; }
        if (ctx->pc != 0x299400u) { return; }
    }
    ctx->pc = 0x299400u;
    // 0x299400: 0x2671fdf4  addiu       $s1, $s3, -0x20C
    ctx->pc = 0x299400u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
    // 0x299404: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x299404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299408: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x299408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    // 0x29940c: 0x12300014  beq         $s1, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x29940Cu;
    {
        const bool branch_taken_0x29940c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x299410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29940Cu;
            // 0x299410: 0x3c16002a  lui         $s6, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29940c) {
            ctx->pc = 0x299460u;
            goto label_299460;
        }
    }
    ctx->pc = 0x299414u;
    // 0x299414: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x299414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_299418:
    // 0x299418: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x299418u;
    {
        const bool branch_taken_0x299418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29941Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299418u;
            // 0x29941c: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299418) {
            ctx->pc = 0x299438u;
            goto label_299438;
        }
    }
    ctx->pc = 0x299420u;
    // 0x299420: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x299420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x299424: 0xc0a64de  jal         func_299378
    ctx->pc = 0x299424u;
    SET_GPR_U32(ctx, 31, 0x29942Cu);
    ctx->pc = 0x299428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299424u;
            // 0x299428: 0x26a69338  addiu       $a2, $s5, -0x6CC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299378u;
    if (runtime->hasFunction(0x299378u)) {
        auto targetFn = runtime->lookupFunction(0x299378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29942Cu; }
        if (ctx->pc != 0x29942Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299378_0x299390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29942Cu; }
        if (ctx->pc != 0x29942Cu) { return; }
    }
    ctx->pc = 0x29942Cu;
    // 0x29942c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29942cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299430: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x299430u;
    {
        const bool branch_taken_0x299430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299430u;
            // 0x299434: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299430) {
            ctx->pc = 0x299450u;
            goto label_299450;
        }
    }
    ctx->pc = 0x299438u;
label_299438:
    // 0x299438: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x299438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x29943c: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x29943cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x299440: 0xc0a64de  jal         func_299378
    ctx->pc = 0x299440u;
    SET_GPR_U32(ctx, 31, 0x299448u);
    ctx->pc = 0x299444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299440u;
            // 0x299444: 0x26869300  addiu       $a2, $s4, -0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299378u;
    if (runtime->hasFunction(0x299378u)) {
        auto targetFn = runtime->lookupFunction(0x299378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299448u; }
        if (ctx->pc != 0x299448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299378_0x299390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299448u; }
        if (ctx->pc != 0x299448u) { return; }
    }
    ctx->pc = 0x299448u;
    // 0x299448: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x299448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29944c: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x29944cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
label_299450:
    // 0x299450: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x299450u;
    {
        const bool branch_taken_0x299450 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x299454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299450u;
            // 0x299454: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299450) {
            ctx->pc = 0x299418u;
            runtime->cooperativeGuestYield();
            goto label_299418;
        }
    }
    ctx->pc = 0x299458u;
    // 0x299458: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x299458u;
    {
        const bool branch_taken_0x299458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29945Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299458u;
            // 0x29945c: 0xaed14b68  sw          $s1, 0x4B68($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 19304), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299458) {
            ctx->pc = 0x299464u;
            goto label_299464;
        }
    }
    ctx->pc = 0x299460u;
label_299460:
    // 0x299460: 0xaed14b68  sw          $s1, 0x4B68($s6)
    ctx->pc = 0x299460u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 19304), GPR_U32(ctx, 17));
label_299464:
    // 0x299464: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x299464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x299468: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x299468u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29946c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x29946cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299470: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x299470u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299474: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x299474u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299478: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x299478u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29947c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29947cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299484: 0x3e00008  jr          $ra
    ctx->pc = 0x299484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299484u;
            // 0x299488: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299418u: goto label_299418;
            case 0x299438u: goto label_299438;
            case 0x299450u: goto label_299450;
            case 0x299460u: goto label_299460;
            case 0x299464u: goto label_299464;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29948Cu;
    // 0x29948c: 0x0  nop
    ctx->pc = 0x29948cu;
    // NOP
}
