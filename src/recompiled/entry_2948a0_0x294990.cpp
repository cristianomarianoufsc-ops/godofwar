#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2948a0
// Address: 0x2948a0 - 0x294990
void entry_2948a0_0x294990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2948a0_0x294990");
#endif

    ctx->pc = 0x2948a0u;

    // 0x2948a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2948a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2948a4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2948a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2948a8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2948a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2948ac: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2948acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2948b0: 0x8e024ab0  lw          $v0, 0x4AB0($s0)
    ctx->pc = 0x2948b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19120)));
    // 0x2948b4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2948b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2948b8: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2948B8u;
    {
        const bool branch_taken_0x2948b8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2948BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2948B8u;
            // 0x2948bc: 0xffb10060  sd          $s1, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2948b8) {
            ctx->pc = 0x29493Cu;
            goto label_29493c;
        }
    }
    ctx->pc = 0x2948C0u;
    // 0x2948c0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2948c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2948c4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2948c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2948c8: 0x245167d8  addiu       $s1, $v0, 0x67D8
    ctx->pc = 0x2948c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 26584));
    // 0x2948cc: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x2948ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x2948d0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2948d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2948d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2948d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2948d8: 0xafb10044  sw          $s1, 0x44($sp)
    ctx->pc = 0x2948d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
    // 0x2948dc: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x2948DCu;
    SET_GPR_U32(ctx, 31, 0x2948E4u);
    ctx->pc = 0x2948E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2948DCu;
            // 0x2948e0: 0x3c120032  lui         $s2, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2948E4u; }
        if (ctx->pc != 0x2948E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2948E4u; }
        if (ctx->pc != 0x2948E4u) { return; }
    }
    ctx->pc = 0x2948E4u;
    // 0x2948e4: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2948E4u;
    {
        const bool branch_taken_0x2948e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2948E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2948E4u;
            // 0x2948e8: 0xae426f40  sw          $v0, 0x6F40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2948e4) {
            ctx->pc = 0x29493Cu;
            goto label_29493c;
        }
    }
    ctx->pc = 0x2948ECu;
    // 0x2948ec: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2948ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x2948f0: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x2948f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x2948f4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2948f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2948f8: 0x244247c8  addiu       $v0, $v0, 0x47C8
    ctx->pc = 0x2948f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18376));
    // 0x2948fc: 0x24636b40  addiu       $v1, $v1, 0x6B40
    ctx->pc = 0x2948fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27456));
    // 0x294900: 0x24a5f070  addiu       $a1, $a1, -0xF90
    ctx->pc = 0x294900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963312));
    // 0x294904: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x294904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x294908: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x294908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x29490c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x29490cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x294910: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294914: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x294914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x294918: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x294918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x29491c: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x29491cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x294920: 0xc0a4e88  jal         func_293A20
    ctx->pc = 0x294920u;
    SET_GPR_U32(ctx, 31, 0x294928u);
    ctx->pc = 0x294924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294920u;
            // 0x294924: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293A20u;
    if (runtime->hasFunction(0x293A20u)) {
        auto targetFn = runtime->lookupFunction(0x293A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294928u; }
        if (ctx->pc != 0x294928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293a20_0x293a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294928u; }
        if (ctx->pc != 0x294928u) { return; }
    }
    ctx->pc = 0x294928u;
    // 0x294928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x294928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29492c: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29492Cu;
    {
        const bool branch_taken_0x29492c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x294930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29492Cu;
            // 0x294930: 0xae044ab0  sw          $a0, 0x4AB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 19120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29492c) {
            ctx->pc = 0x294944u;
            goto label_294944;
        }
    }
    ctx->pc = 0x294934u;
    // 0x294934: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x294934u;
    SET_GPR_U32(ctx, 31, 0x29493Cu);
    ctx->pc = 0x294938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294934u;
            // 0x294938: 0x8e446f40  lw          $a0, 0x6F40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29493Cu; }
        if (ctx->pc != 0x29493Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29493Cu; }
        if (ctx->pc != 0x29493Cu) { return; }
    }
    ctx->pc = 0x29493Cu;
label_29493c:
    // 0x29493c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29493Cu;
    {
        const bool branch_taken_0x29493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29493Cu;
            // 0x294940: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29493c) {
            ctx->pc = 0x294974u;
            goto label_294974;
        }
    }
    ctx->pc = 0x294944u;
label_294944:
    // 0x294944: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x294944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x294948: 0x24436f48  addiu       $v1, $v0, 0x6F48
    ctx->pc = 0x294948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28488));
    // 0x29494c: 0xac406f48  sw          $zero, 0x6F48($v0)
    ctx->pc = 0x29494cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28488), GPR_U32(ctx, 0));
    // 0x294950: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x294950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294954: 0xc0a52be  jal         func_294AF8
    ctx->pc = 0x294954u;
    SET_GPR_U32(ctx, 31, 0x29495Cu);
    ctx->pc = 0x294958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294954u;
            // 0x294958: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294AF8u;
    if (runtime->hasFunction(0x294AF8u)) {
        auto targetFn = runtime->lookupFunction(0x294AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29495Cu; }
        if (ctx->pc != 0x29495Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294AF8_0x294af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29495Cu; }
        if (ctx->pc != 0x29495Cu) { return; }
    }
    ctx->pc = 0x29495Cu;
    // 0x29495c: 0xc0a4ec4  jal         func_293B10
    ctx->pc = 0x29495Cu;
    SET_GPR_U32(ctx, 31, 0x294964u);
    ctx->pc = 0x293B10u;
    if (runtime->hasFunction(0x293B10u)) {
        auto targetFn = runtime->lookupFunction(0x293B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294964u; }
        if (ctx->pc != 0x294964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293b10_0x293b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294964u; }
        if (ctx->pc != 0x294964u) { return; }
    }
    ctx->pc = 0x294964u;
    // 0x294964: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x294964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294968: 0xc0a4eac  jal         func_293AB0
    ctx->pc = 0x294968u;
    SET_GPR_U32(ctx, 31, 0x294970u);
    ctx->pc = 0x29496Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294968u;
            // 0x29496c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293AB0u;
    if (runtime->hasFunction(0x293AB0u)) {
        auto targetFn = runtime->lookupFunction(0x293AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294970u; }
        if (ctx->pc != 0x294970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ab0_0x293ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294970u; }
        if (ctx->pc != 0x294970u) { return; }
    }
    ctx->pc = 0x294970u;
    // 0x294970: 0x8e024ab0  lw          $v0, 0x4AB0($s0)
    ctx->pc = 0x294970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19120)));
label_294974:
    // 0x294974: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x294974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x294978: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x294978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29497c: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x29497cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x294980: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x294980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294984: 0x3e00008  jr          $ra
    ctx->pc = 0x294984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294984u;
            // 0x294988: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29493Cu: goto label_29493c;
            case 0x294944u: goto label_294944;
            case 0x294974u: goto label_294974;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29498Cu;
    // 0x29498c: 0x0  nop
    ctx->pc = 0x29498cu;
    // NOP
}
