#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27a340
// Address: 0x27a340 - 0x27a428
void entry_27a340_0x27a428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27a340_0x27a428");
#endif

    ctx->pc = 0x27a340u;

    // 0x27a340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27a340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27a344: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27a344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a348: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x27a348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x27a34c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x27a34cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x27a350: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27a350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27a354: 0x8e221728  lw          $v0, 0x1728($s1)
    ctx->pc = 0x27a354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5928)));
    // 0x27a358: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x27a358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x27a35c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27A35Cu;
    {
        const bool branch_taken_0x27a35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27A360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A35Cu;
            // 0x27a360: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a35c) {
            ctx->pc = 0x27A388u;
            goto label_27a388;
        }
    }
    ctx->pc = 0x27A364u;
    // 0x27a364: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x27a364u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x27a368: 0x8e02172c  lw          $v0, 0x172C($s0)
    ctx->pc = 0x27a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5932)));
    // 0x27a36c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A36Cu;
    {
        const bool branch_taken_0x27a36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27A370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A36Cu;
            // 0x27a370: 0x3c12002a  lui         $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a36c) {
            ctx->pc = 0x27A38Cu;
            goto label_27a38c;
        }
    }
    ctx->pc = 0x27A374u;
    // 0x27a374: 0x8e421730  lw          $v0, 0x1730($s2)
    ctx->pc = 0x27a374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5936)));
    // 0x27a378: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x27A378u;
    {
        const bool branch_taken_0x27a378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27A37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A378u;
            // 0x27a37c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a378) {
            ctx->pc = 0x27A410u;
            goto label_27a410;
        }
    }
    ctx->pc = 0x27A380u;
    // 0x27a380: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27A380u;
    {
        const bool branch_taken_0x27a380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A380u;
            // 0x27a384: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a380) {
            ctx->pc = 0x27A394u;
            goto label_27a394;
        }
    }
    ctx->pc = 0x27A388u;
label_27a388:
    // 0x27a388: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x27a388u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
label_27a38c:
    // 0x27a38c: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x27a38cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x27a390: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x27a390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_27a394:
    // 0x27a394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27a394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a398: 0x24424ac8  addiu       $v0, $v0, 0x4AC8
    ctx->pc = 0x27a398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19144));
    // 0x27a39c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x27a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x27a3a0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x27a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x27a3a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a3a8: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x27A3A8u;
    SET_GPR_U32(ctx, 31, 0x27A3B0u);
    ctx->pc = 0x27A3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A3A8u;
            // 0x27a3ac: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A3B0u; }
        if (ctx->pc != 0x27A3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A3B0u; }
        if (ctx->pc != 0x27A3B0u) { return; }
    }
    ctx->pc = 0x27A3B0u;
    // 0x27a3b0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x27a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x27a3b4: 0xae221728  sw          $v0, 0x1728($s1)
    ctx->pc = 0x27a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5928), GPR_U32(ctx, 2));
    // 0x27a3b8: 0x24634ad8  addiu       $v1, $v1, 0x4AD8
    ctx->pc = 0x27a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19160));
    // 0x27a3bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a3c0: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x27A3C0u;
    SET_GPR_U32(ctx, 31, 0x27A3C8u);
    ctx->pc = 0x27A3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A3C0u;
            // 0x27a3c4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A3C8u; }
        if (ctx->pc != 0x27A3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A3C8u; }
        if (ctx->pc != 0x27A3C8u) { return; }
    }
    ctx->pc = 0x27A3C8u;
    // 0x27a3c8: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x27a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x27a3cc: 0xae02172c  sw          $v0, 0x172C($s0)
    ctx->pc = 0x27a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5932), GPR_U32(ctx, 2));
    // 0x27a3d0: 0x24634ae8  addiu       $v1, $v1, 0x4AE8
    ctx->pc = 0x27a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19176));
    // 0x27a3d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a3d8: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x27A3D8u;
    SET_GPR_U32(ctx, 31, 0x27A3E0u);
    ctx->pc = 0x27A3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A3D8u;
            // 0x27a3dc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A3E0u; }
        if (ctx->pc != 0x27A3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A3E0u; }
        if (ctx->pc != 0x27A3E0u) { return; }
    }
    ctx->pc = 0x27A3E0u;
    // 0x27a3e0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x27a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x27a3e4: 0xae421730  sw          $v0, 0x1730($s2)
    ctx->pc = 0x27a3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5936), GPR_U32(ctx, 2));
    // 0x27a3e8: 0x24634af8  addiu       $v1, $v1, 0x4AF8
    ctx->pc = 0x27a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19192));
    // 0x27a3ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a3f0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x27a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x27a3f4: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x27A3F4u;
    SET_GPR_U32(ctx, 31, 0x27A3FCu);
    ctx->pc = 0x27A3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A3F4u;
            // 0x27a3f8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A3FCu; }
        if (ctx->pc != 0x27A3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A3FCu; }
        if (ctx->pc != 0x27A3FCu) { return; }
    }
    ctx->pc = 0x27A3FCu;
    // 0x27a3fc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x27a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x27a400: 0xac621720  sw          $v0, 0x1720($v1)
    ctx->pc = 0x27a400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5920), GPR_U32(ctx, 2));
    // 0x27a404: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27a404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27a408: 0xac401734  sw          $zero, 0x1734($v0)
    ctx->pc = 0x27a408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5940), GPR_U32(ctx, 0));
    // 0x27a40c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27a40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_27a410:
    // 0x27a410: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x27a410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a414: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x27a414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a418: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x27a418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a41c: 0x3e00008  jr          $ra
    ctx->pc = 0x27A41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A41Cu;
            // 0x27a420: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A388u: goto label_27a388;
            case 0x27A38Cu: goto label_27a38c;
            case 0x27A394u: goto label_27a394;
            case 0x27A410u: goto label_27a410;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A424u;
    // 0x27a424: 0x0  nop
    ctx->pc = 0x27a424u;
    // NOP
}
