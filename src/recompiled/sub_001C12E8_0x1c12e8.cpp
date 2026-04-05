#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C12E8
// Address: 0x1c12e8 - 0x1c1fc8
void sub_001C12E8_0x1c12e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C12E8_0x1c12e8");
#endif

    ctx->pc = 0x1c12e8u;

    // 0x1c12e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c12e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c12ec: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1c12ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1c12f0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1c12f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1c12f4: 0x24525e68  addiu       $s2, $v0, 0x5E68
    ctx->pc = 0x1c12f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 24168));
    // 0x1c12f8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1c12f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1c12fc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1c12fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1c1300: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1304: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1c1304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1c1308: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c1308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c130c: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x1C130Cu;
    SET_GPR_U32(ctx, 31, 0x1C1314u);
    ctx->pc = 0x1C1310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C130Cu;
            // 0x1c1310: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1314u; }
        if (ctx->pc != 0x1C1314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1314u; }
        if (ctx->pc != 0x1C1314u) { return; }
    }
    ctx->pc = 0x1C1314u;
    // 0x1c1314: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1318: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1318u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c131c: 0x24a55e78  addiu       $a1, $a1, 0x5E78
    ctx->pc = 0x1c131cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24184));
    // 0x1c1320: 0x24c6cd18  addiu       $a2, $a2, -0x32E8
    ctx->pc = 0x1c1320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954264));
    // 0x1c1324: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1C1324u;
    SET_GPR_U32(ctx, 31, 0x1C132Cu);
    ctx->pc = 0x1C1328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1324u;
            // 0x1c1328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C132Cu; }
        if (ctx->pc != 0x1C132Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C132Cu; }
        if (ctx->pc != 0x1C132Cu) { return; }
    }
    ctx->pc = 0x1C132Cu;
    // 0x1c132c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c132cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1330: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1330u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c1334: 0x24a55e90  addiu       $a1, $a1, 0x5E90
    ctx->pc = 0x1c1334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24208));
    // 0x1c1338: 0x24c6cd14  addiu       $a2, $a2, -0x32EC
    ctx->pc = 0x1c1338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954260));
    // 0x1c133c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1C133Cu;
    SET_GPR_U32(ctx, 31, 0x1C1344u);
    ctx->pc = 0x1C1340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C133Cu;
            // 0x1c1340: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1344u; }
        if (ctx->pc != 0x1C1344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1344u; }
        if (ctx->pc != 0x1C1344u) { return; }
    }
    ctx->pc = 0x1C1344u;
    // 0x1c1344: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1C1344u;
    SET_GPR_U32(ctx, 31, 0x1C134Cu);
    ctx->pc = 0x1C1348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1344u;
            // 0x1c1348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C134Cu; }
        if (ctx->pc != 0x1C134Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C134Cu; }
        if (ctx->pc != 0x1C134Cu) { return; }
    }
    ctx->pc = 0x1C134Cu;
    // 0x1c134c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c134cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1350: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1350u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c1354: 0x24a55ea8  addiu       $a1, $a1, 0x5EA8
    ctx->pc = 0x1c1354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24232));
    // 0x1c1358: 0x24c6ccbc  addiu       $a2, $a2, -0x3344
    ctx->pc = 0x1c1358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954172));
    // 0x1c135c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1C135Cu;
    SET_GPR_U32(ctx, 31, 0x1C1364u);
    ctx->pc = 0x1C1360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C135Cu;
            // 0x1c1360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1364u; }
        if (ctx->pc != 0x1C1364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1364u; }
        if (ctx->pc != 0x1C1364u) { return; }
    }
    ctx->pc = 0x1C1364u;
    // 0x1c1364: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1368: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c136c: 0x24a55ec0  addiu       $a1, $a1, 0x5EC0
    ctx->pc = 0x1c136cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24256));
    // 0x1c1370: 0x24c6ccc0  addiu       $a2, $a2, -0x3340
    ctx->pc = 0x1c1370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954176));
    // 0x1c1374: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1C1374u;
    SET_GPR_U32(ctx, 31, 0x1C137Cu);
    ctx->pc = 0x1C1378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1374u;
            // 0x1c1378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C137Cu; }
        if (ctx->pc != 0x1C137Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C137Cu; }
        if (ctx->pc != 0x1C137Cu) { return; }
    }
    ctx->pc = 0x1C137Cu;
    // 0x1c137c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c137cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1380: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1380u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c1384: 0x24a55ed8  addiu       $a1, $a1, 0x5ED8
    ctx->pc = 0x1c1384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24280));
    // 0x1c1388: 0x24c6ccc4  addiu       $a2, $a2, -0x333C
    ctx->pc = 0x1c1388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954180));
    // 0x1c138c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1C138Cu;
    SET_GPR_U32(ctx, 31, 0x1C1394u);
    ctx->pc = 0x1C1390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C138Cu;
            // 0x1c1390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1394u; }
        if (ctx->pc != 0x1C1394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1394u; }
        if (ctx->pc != 0x1C1394u) { return; }
    }
    ctx->pc = 0x1C1394u;
    // 0x1c1394: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1398: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1398u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c139c: 0x24a55ef8  addiu       $a1, $a1, 0x5EF8
    ctx->pc = 0x1c139cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24312));
    // 0x1c13a0: 0x24c6ccc8  addiu       $a2, $a2, -0x3338
    ctx->pc = 0x1c13a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954184));
    // 0x1c13a4: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C13A4u;
    SET_GPR_U32(ctx, 31, 0x1C13ACu);
    ctx->pc = 0x1C13A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13A4u;
            // 0x1c13a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13ACu; }
        if (ctx->pc != 0x1C13ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13ACu; }
        if (ctx->pc != 0x1C13ACu) { return; }
    }
    ctx->pc = 0x1C13ACu;
    // 0x1c13ac: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c13acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c13b0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c13b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c13b4: 0x24a55f08  addiu       $a1, $a1, 0x5F08
    ctx->pc = 0x1c13b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24328));
    // 0x1c13b8: 0x24c6ccca  addiu       $a2, $a2, -0x3336
    ctx->pc = 0x1c13b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954186));
    // 0x1c13bc: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C13BCu;
    SET_GPR_U32(ctx, 31, 0x1C13C4u);
    ctx->pc = 0x1C13C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13BCu;
            // 0x1c13c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13C4u; }
        if (ctx->pc != 0x1C13C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13C4u; }
        if (ctx->pc != 0x1C13C4u) { return; }
    }
    ctx->pc = 0x1C13C4u;
    // 0x1c13c4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c13c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c13c8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c13c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c13cc: 0x24a55f18  addiu       $a1, $a1, 0x5F18
    ctx->pc = 0x1c13ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24344));
    // 0x1c13d0: 0x24c6cccc  addiu       $a2, $a2, -0x3334
    ctx->pc = 0x1c13d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954188));
    // 0x1c13d4: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C13D4u;
    SET_GPR_U32(ctx, 31, 0x1C13DCu);
    ctx->pc = 0x1C13D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13D4u;
            // 0x1c13d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13DCu; }
        if (ctx->pc != 0x1C13DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13DCu; }
        if (ctx->pc != 0x1C13DCu) { return; }
    }
    ctx->pc = 0x1C13DCu;
    // 0x1c13dc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c13dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c13e0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c13e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c13e4: 0x24a55f20  addiu       $a1, $a1, 0x5F20
    ctx->pc = 0x1c13e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24352));
    // 0x1c13e8: 0x24c6ccce  addiu       $a2, $a2, -0x3332
    ctx->pc = 0x1c13e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954190));
    // 0x1c13ec: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C13ECu;
    SET_GPR_U32(ctx, 31, 0x1C13F4u);
    ctx->pc = 0x1C13F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13ECu;
            // 0x1c13f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13F4u; }
        if (ctx->pc != 0x1C13F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C13F4u; }
        if (ctx->pc != 0x1C13F4u) { return; }
    }
    ctx->pc = 0x1C13F4u;
    // 0x1c13f4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c13f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c13f8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c13f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c13fc: 0x24a55f38  addiu       $a1, $a1, 0x5F38
    ctx->pc = 0x1c13fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24376));
    // 0x1c1400: 0x24c6ccd0  addiu       $a2, $a2, -0x3330
    ctx->pc = 0x1c1400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954192));
    // 0x1c1404: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C1404u;
    SET_GPR_U32(ctx, 31, 0x1C140Cu);
    ctx->pc = 0x1C1408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1404u;
            // 0x1c1408: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C140Cu; }
        if (ctx->pc != 0x1C140Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C140Cu; }
        if (ctx->pc != 0x1C140Cu) { return; }
    }
    ctx->pc = 0x1C140Cu;
    // 0x1c140c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c140cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1410: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1410u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c1414: 0x24a55f40  addiu       $a1, $a1, 0x5F40
    ctx->pc = 0x1c1414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24384));
    // 0x1c1418: 0x24c6ccd2  addiu       $a2, $a2, -0x332E
    ctx->pc = 0x1c1418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954194));
    // 0x1c141c: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C141Cu;
    SET_GPR_U32(ctx, 31, 0x1C1424u);
    ctx->pc = 0x1C1420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C141Cu;
            // 0x1c1420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1424u; }
        if (ctx->pc != 0x1C1424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1424u; }
        if (ctx->pc != 0x1C1424u) { return; }
    }
    ctx->pc = 0x1C1424u;
    // 0x1c1424: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1428: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1428u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c142c: 0x24a55f48  addiu       $a1, $a1, 0x5F48
    ctx->pc = 0x1c142cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24392));
    // 0x1c1430: 0x24c6ccd4  addiu       $a2, $a2, -0x332C
    ctx->pc = 0x1c1430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954196));
    // 0x1c1434: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C1434u;
    SET_GPR_U32(ctx, 31, 0x1C143Cu);
    ctx->pc = 0x1C1438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1434u;
            // 0x1c1438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C143Cu; }
        if (ctx->pc != 0x1C143Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C143Cu; }
        if (ctx->pc != 0x1C143Cu) { return; }
    }
    ctx->pc = 0x1C143Cu;
    // 0x1c143c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c143cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1440: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c1444: 0x24a55f58  addiu       $a1, $a1, 0x5F58
    ctx->pc = 0x1c1444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
    // 0x1c1448: 0x24c6ccd6  addiu       $a2, $a2, -0x332A
    ctx->pc = 0x1c1448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954198));
    // 0x1c144c: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C144Cu;
    SET_GPR_U32(ctx, 31, 0x1C1454u);
    ctx->pc = 0x1C1450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C144Cu;
            // 0x1c1450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1454u; }
        if (ctx->pc != 0x1C1454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1454u; }
        if (ctx->pc != 0x1C1454u) { return; }
    }
    ctx->pc = 0x1C1454u;
    // 0x1c1454: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1458: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c145c: 0x24a55f68  addiu       $a1, $a1, 0x5F68
    ctx->pc = 0x1c145cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24424));
    // 0x1c1460: 0x24c6ccd8  addiu       $a2, $a2, -0x3328
    ctx->pc = 0x1c1460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954200));
    // 0x1c1464: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C1464u;
    SET_GPR_U32(ctx, 31, 0x1C146Cu);
    ctx->pc = 0x1C1468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1464u;
            // 0x1c1468: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C146Cu; }
        if (ctx->pc != 0x1C146Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C146Cu; }
        if (ctx->pc != 0x1C146Cu) { return; }
    }
    ctx->pc = 0x1C146Cu;
    // 0x1c146c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c146cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1470: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c1474: 0x24a55f80  addiu       $a1, $a1, 0x5F80
    ctx->pc = 0x1c1474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24448));
    // 0x1c1478: 0x24c6ccda  addiu       $a2, $a2, -0x3326
    ctx->pc = 0x1c1478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954202));
    // 0x1c147c: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C147Cu;
    SET_GPR_U32(ctx, 31, 0x1C1484u);
    ctx->pc = 0x1C1480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C147Cu;
            // 0x1c1480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1484u; }
        if (ctx->pc != 0x1C1484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1484u; }
        if (ctx->pc != 0x1C1484u) { return; }
    }
    ctx->pc = 0x1C1484u;
    // 0x1c1484: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1488: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1488u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c148c: 0x24a55fa0  addiu       $a1, $a1, 0x5FA0
    ctx->pc = 0x1c148cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24480));
    // 0x1c1490: 0x24c6ccdc  addiu       $a2, $a2, -0x3324
    ctx->pc = 0x1c1490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954204));
    // 0x1c1494: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C1494u;
    SET_GPR_U32(ctx, 31, 0x1C149Cu);
    ctx->pc = 0x1C1498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1494u;
            // 0x1c1498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C149Cu; }
        if (ctx->pc != 0x1C149Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C149Cu; }
        if (ctx->pc != 0x1C149Cu) { return; }
    }
    ctx->pc = 0x1C149Cu;
    // 0x1c149c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c149cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c14a0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c14a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c14a4: 0x24a55fb8  addiu       $a1, $a1, 0x5FB8
    ctx->pc = 0x1c14a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24504));
    // 0x1c14a8: 0x24c6ccde  addiu       $a2, $a2, -0x3322
    ctx->pc = 0x1c14a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954206));
    // 0x1c14ac: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C14ACu;
    SET_GPR_U32(ctx, 31, 0x1C14B4u);
    ctx->pc = 0x1C14B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14ACu;
            // 0x1c14b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14B4u; }
        if (ctx->pc != 0x1C14B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14B4u; }
        if (ctx->pc != 0x1C14B4u) { return; }
    }
    ctx->pc = 0x1C14B4u;
    // 0x1c14b4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c14b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c14b8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c14b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c14bc: 0x24a55fd0  addiu       $a1, $a1, 0x5FD0
    ctx->pc = 0x1c14bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24528));
    // 0x1c14c0: 0x24c6cce0  addiu       $a2, $a2, -0x3320
    ctx->pc = 0x1c14c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954208));
    // 0x1c14c4: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C14C4u;
    SET_GPR_U32(ctx, 31, 0x1C14CCu);
    ctx->pc = 0x1C14C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14C4u;
            // 0x1c14c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14CCu; }
        if (ctx->pc != 0x1C14CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14CCu; }
        if (ctx->pc != 0x1C14CCu) { return; }
    }
    ctx->pc = 0x1C14CCu;
    // 0x1c14cc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c14ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c14d0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c14d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c14d4: 0x24a55fe8  addiu       $a1, $a1, 0x5FE8
    ctx->pc = 0x1c14d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24552));
    // 0x1c14d8: 0x24c6cce2  addiu       $a2, $a2, -0x331E
    ctx->pc = 0x1c14d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954210));
    // 0x1c14dc: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C14DCu;
    SET_GPR_U32(ctx, 31, 0x1C14E4u);
    ctx->pc = 0x1C14E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14DCu;
            // 0x1c14e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14E4u; }
        if (ctx->pc != 0x1C14E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14E4u; }
        if (ctx->pc != 0x1C14E4u) { return; }
    }
    ctx->pc = 0x1C14E4u;
    // 0x1c14e4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c14e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c14e8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c14e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c14ec: 0x24a56000  addiu       $a1, $a1, 0x6000
    ctx->pc = 0x1c14ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24576));
    // 0x1c14f0: 0x24c6cce4  addiu       $a2, $a2, -0x331C
    ctx->pc = 0x1c14f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954212));
    // 0x1c14f4: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C14F4u;
    SET_GPR_U32(ctx, 31, 0x1C14FCu);
    ctx->pc = 0x1C14F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14F4u;
            // 0x1c14f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14FCu; }
        if (ctx->pc != 0x1C14FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14FCu; }
        if (ctx->pc != 0x1C14FCu) { return; }
    }
    ctx->pc = 0x1C14FCu;
    // 0x1c14fc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c14fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1500: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c1504: 0x24a56020  addiu       $a1, $a1, 0x6020
    ctx->pc = 0x1c1504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24608));
    // 0x1c1508: 0x24c6cce6  addiu       $a2, $a2, -0x331A
    ctx->pc = 0x1c1508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954214));
    // 0x1c150c: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C150Cu;
    SET_GPR_U32(ctx, 31, 0x1C1514u);
    ctx->pc = 0x1C1510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C150Cu;
            // 0x1c1510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1514u; }
        if (ctx->pc != 0x1C1514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1514u; }
        if (ctx->pc != 0x1C1514u) { return; }
    }
    ctx->pc = 0x1C1514u;
    // 0x1c1514: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1518: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c151c: 0x24a56030  addiu       $a1, $a1, 0x6030
    ctx->pc = 0x1c151cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24624));
    // 0x1c1520: 0x24c6cce8  addiu       $a2, $a2, -0x3318
    ctx->pc = 0x1c1520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954216));
    // 0x1c1524: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C1524u;
    SET_GPR_U32(ctx, 31, 0x1C152Cu);
    ctx->pc = 0x1C1528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1524u;
            // 0x1c1528: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C152Cu; }
        if (ctx->pc != 0x1C152Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C152Cu; }
        if (ctx->pc != 0x1C152Cu) { return; }
    }
    ctx->pc = 0x1C152Cu;
    // 0x1c152c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c152cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1530: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c1534: 0x24a56048  addiu       $a1, $a1, 0x6048
    ctx->pc = 0x1c1534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24648));
    // 0x1c1538: 0x24c6ccea  addiu       $a2, $a2, -0x3316
    ctx->pc = 0x1c1538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954218));
    // 0x1c153c: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C153Cu;
    SET_GPR_U32(ctx, 31, 0x1C1544u);
    ctx->pc = 0x1C1540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C153Cu;
            // 0x1c1540: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1544u; }
        if (ctx->pc != 0x1C1544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1544u; }
        if (ctx->pc != 0x1C1544u) { return; }
    }
    ctx->pc = 0x1C1544u;
    // 0x1c1544: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1548: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c154c: 0x24a56050  addiu       $a1, $a1, 0x6050
    ctx->pc = 0x1c154cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24656));
    // 0x1c1550: 0x24c6ccec  addiu       $a2, $a2, -0x3314
    ctx->pc = 0x1c1550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954220));
    // 0x1c1554: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C1554u;
    SET_GPR_U32(ctx, 31, 0x1C155Cu);
    ctx->pc = 0x1C1558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1554u;
            // 0x1c1558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C155Cu; }
        if (ctx->pc != 0x1C155Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C155Cu; }
        if (ctx->pc != 0x1C155Cu) { return; }
    }
    ctx->pc = 0x1C155Cu;
    // 0x1c155c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c155cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1560: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1560u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c1564: 0x24a56068  addiu       $a1, $a1, 0x6068
    ctx->pc = 0x1c1564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24680));
    // 0x1c1568: 0x24c6ccee  addiu       $a2, $a2, -0x3312
    ctx->pc = 0x1c1568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954222));
    // 0x1c156c: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C156Cu;
    SET_GPR_U32(ctx, 31, 0x1C1574u);
    ctx->pc = 0x1C1570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C156Cu;
            // 0x1c1570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1574u; }
        if (ctx->pc != 0x1C1574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1574u; }
        if (ctx->pc != 0x1C1574u) { return; }
    }
    ctx->pc = 0x1C1574u;
    // 0x1c1574: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1578: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c157c: 0x24a56070  addiu       $a1, $a1, 0x6070
    ctx->pc = 0x1c157cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24688));
    // 0x1c1580: 0x24c6ccf0  addiu       $a2, $a2, -0x3310
    ctx->pc = 0x1c1580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954224));
    // 0x1c1584: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1C1584u;
    SET_GPR_U32(ctx, 31, 0x1C158Cu);
    ctx->pc = 0x1C1588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1584u;
            // 0x1c1588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C158Cu; }
        if (ctx->pc != 0x1C158Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C158Cu; }
        if (ctx->pc != 0x1C158Cu) { return; }
    }
    ctx->pc = 0x1C158Cu;
    // 0x1c158c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c158cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1590: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c1594: 0x24a56088  addiu       $a1, $a1, 0x6088
    ctx->pc = 0x1c1594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24712));
    // 0x1c1598: 0x24c6ccf4  addiu       $a2, $a2, -0x330C
    ctx->pc = 0x1c1598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954228));
    // 0x1c159c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1C159Cu;
    SET_GPR_U32(ctx, 31, 0x1C15A4u);
    ctx->pc = 0x1C15A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C159Cu;
            // 0x1c15a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15A4u; }
        if (ctx->pc != 0x1C15A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15A4u; }
        if (ctx->pc != 0x1C15A4u) { return; }
    }
    ctx->pc = 0x1C15A4u;
    // 0x1c15a4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c15a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c15a8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c15a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c15ac: 0x24a56098  addiu       $a1, $a1, 0x6098
    ctx->pc = 0x1c15acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24728));
    // 0x1c15b0: 0x24c6ccf8  addiu       $a2, $a2, -0x3308
    ctx->pc = 0x1c15b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954232));
    // 0x1c15b4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1C15B4u;
    SET_GPR_U32(ctx, 31, 0x1C15BCu);
    ctx->pc = 0x1C15B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15B4u;
            // 0x1c15b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15BCu; }
        if (ctx->pc != 0x1C15BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15BCu; }
        if (ctx->pc != 0x1C15BCu) { return; }
    }
    ctx->pc = 0x1C15BCu;
    // 0x1c15bc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c15bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c15c0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c15c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c15c4: 0x24a560a8  addiu       $a1, $a1, 0x60A8
    ctx->pc = 0x1c15c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24744));
    // 0x1c15c8: 0x24c6ccfc  addiu       $a2, $a2, -0x3304
    ctx->pc = 0x1c15c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954236));
    // 0x1c15cc: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1C15CCu;
    SET_GPR_U32(ctx, 31, 0x1C15D4u);
    ctx->pc = 0x1C15D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15CCu;
            // 0x1c15d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15D4u; }
        if (ctx->pc != 0x1C15D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15D4u; }
        if (ctx->pc != 0x1C15D4u) { return; }
    }
    ctx->pc = 0x1C15D4u;
    // 0x1c15d4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c15d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c15d8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c15d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c15dc: 0x24a560b8  addiu       $a1, $a1, 0x60B8
    ctx->pc = 0x1c15dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24760));
    // 0x1c15e0: 0x24c6cd00  addiu       $a2, $a2, -0x3300
    ctx->pc = 0x1c15e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954240));
    // 0x1c15e4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1C15E4u;
    SET_GPR_U32(ctx, 31, 0x1C15ECu);
    ctx->pc = 0x1C15E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15E4u;
            // 0x1c15e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15ECu; }
        if (ctx->pc != 0x1C15ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15ECu; }
        if (ctx->pc != 0x1C15ECu) { return; }
    }
    ctx->pc = 0x1C15ECu;
    // 0x1c15ec: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c15ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c15f0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c15f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c15f4: 0x24a560c8  addiu       $a1, $a1, 0x60C8
    ctx->pc = 0x1c15f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24776));
    // 0x1c15f8: 0x24c6cd04  addiu       $a2, $a2, -0x32FC
    ctx->pc = 0x1c15f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954244));
    // 0x1c15fc: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1C15FCu;
    SET_GPR_U32(ctx, 31, 0x1C1604u);
    ctx->pc = 0x1C1600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C15FCu;
            // 0x1c1600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1604u; }
        if (ctx->pc != 0x1C1604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1604u; }
        if (ctx->pc != 0x1C1604u) { return; }
    }
    ctx->pc = 0x1C1604u;
    // 0x1c1604: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1608: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1608u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c160c: 0x24a560d8  addiu       $a1, $a1, 0x60D8
    ctx->pc = 0x1c160cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24792));
    // 0x1c1610: 0x24c6cd08  addiu       $a2, $a2, -0x32F8
    ctx->pc = 0x1c1610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954248));
    // 0x1c1614: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1C1614u;
    SET_GPR_U32(ctx, 31, 0x1C161Cu);
    ctx->pc = 0x1C1618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1614u;
            // 0x1c1618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C161Cu; }
        if (ctx->pc != 0x1C161Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C161Cu; }
        if (ctx->pc != 0x1C161Cu) { return; }
    }
    ctx->pc = 0x1C161Cu;
    // 0x1c161c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c161cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1620: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c1624: 0x24a560e8  addiu       $a1, $a1, 0x60E8
    ctx->pc = 0x1c1624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24808));
    // 0x1c1628: 0x24c6cd0c  addiu       $a2, $a2, -0x32F4
    ctx->pc = 0x1c1628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954252));
    // 0x1c162c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1C162Cu;
    SET_GPR_U32(ctx, 31, 0x1C1634u);
    ctx->pc = 0x1C1630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C162Cu;
            // 0x1c1630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1634u; }
        if (ctx->pc != 0x1C1634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1634u; }
        if (ctx->pc != 0x1C1634u) { return; }
    }
    ctx->pc = 0x1C1634u;
    // 0x1c1634: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1638: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1c1638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1c163c: 0x24a56100  addiu       $a1, $a1, 0x6100
    ctx->pc = 0x1c163cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24832));
    // 0x1c1640: 0x24c6cd10  addiu       $a2, $a2, -0x32F0
    ctx->pc = 0x1c1640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954256));
    // 0x1c1644: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1C1644u;
    SET_GPR_U32(ctx, 31, 0x1C164Cu);
    ctx->pc = 0x1C1648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1644u;
            // 0x1c1648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C164Cu; }
        if (ctx->pc != 0x1C164Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C164Cu; }
        if (ctx->pc != 0x1C164Cu) { return; }
    }
    ctx->pc = 0x1C164Cu;
    // 0x1c164c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c164cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1650:
    // 0x1c1650: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1C1650u;
    SET_GPR_U32(ctx, 31, 0x1C1658u);
    ctx->pc = 0x1C1654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1650u;
            // 0x1c1654: 0x24110024  addiu       $s1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1658u; }
        if (ctx->pc != 0x1C1658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1658u; }
        if (ctx->pc != 0x1C1658u) { return; }
    }
    ctx->pc = 0x1C1658u;
    // 0x1c1658: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c165c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c165cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1660: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c1660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1664: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C1664u;
    SET_GPR_U32(ctx, 31, 0x1C166Cu);
    ctx->pc = 0x1C1668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1664u;
            // 0x1c1668: 0x24a56118  addiu       $a1, $a1, 0x6118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C166Cu; }
        if (ctx->pc != 0x1C166Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C166Cu; }
        if (ctx->pc != 0x1C166Cu) { return; }
    }
    ctx->pc = 0x1C166Cu;
    // 0x1c166c: 0x2713018  mult        $a2, $s3, $s1
    ctx->pc = 0x1c166cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1c1670: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1c1670u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1c1674: 0x26102740  addiu       $s0, $s0, 0x2740
    ctx->pc = 0x1c1674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10048));
    // 0x1c1678: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c1678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c167c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c167cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1680: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C1680u;
    SET_GPR_U32(ctx, 31, 0x1C1688u);
    ctx->pc = 0x1C1684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1680u;
            // 0x1c1684: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1688u; }
        if (ctx->pc != 0x1C1688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1688u; }
        if (ctx->pc != 0x1C1688u) { return; }
    }
    ctx->pc = 0x1C1688u;
    // 0x1c1688: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c168c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c168cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1690: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c1690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1694: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C1694u;
    SET_GPR_U32(ctx, 31, 0x1C169Cu);
    ctx->pc = 0x1C1698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1694u;
            // 0x1c1698: 0x24a56128  addiu       $a1, $a1, 0x6128 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C169Cu; }
        if (ctx->pc != 0x1C169Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C169Cu; }
        if (ctx->pc != 0x1C169Cu) { return; }
    }
    ctx->pc = 0x1C169Cu;
    // 0x1c169c: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x1c169cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c16a0: 0x26060002  addiu       $a2, $s0, 0x2
    ctx->pc = 0x1c16a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1c16a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c16a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c16a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16ac: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C16ACu;
    SET_GPR_U32(ctx, 31, 0x1C16B4u);
    ctx->pc = 0x1C16B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C16ACu;
            // 0x1c16b0: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16B4u; }
        if (ctx->pc != 0x1C16B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16B4u; }
        if (ctx->pc != 0x1C16B4u) { return; }
    }
    ctx->pc = 0x1C16B4u;
    // 0x1c16b4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c16b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c16b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c16b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c16bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16c0: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C16C0u;
    SET_GPR_U32(ctx, 31, 0x1C16C8u);
    ctx->pc = 0x1C16C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C16C0u;
            // 0x1c16c4: 0x24a56140  addiu       $a1, $a1, 0x6140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16C8u; }
        if (ctx->pc != 0x1C16C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16C8u; }
        if (ctx->pc != 0x1C16C8u) { return; }
    }
    ctx->pc = 0x1C16C8u;
    // 0x1c16c8: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x1c16c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c16cc: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x1c16ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1c16d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c16d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c16d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16d8: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C16D8u;
    SET_GPR_U32(ctx, 31, 0x1C16E0u);
    ctx->pc = 0x1C16DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C16D8u;
            // 0x1c16dc: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16E0u; }
        if (ctx->pc != 0x1C16E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16E0u; }
        if (ctx->pc != 0x1C16E0u) { return; }
    }
    ctx->pc = 0x1C16E0u;
    // 0x1c16e0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c16e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c16e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c16e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c16e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16ec: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C16ECu;
    SET_GPR_U32(ctx, 31, 0x1C16F4u);
    ctx->pc = 0x1C16F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C16ECu;
            // 0x1c16f0: 0x24a56150  addiu       $a1, $a1, 0x6150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16F4u; }
        if (ctx->pc != 0x1C16F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16F4u; }
        if (ctx->pc != 0x1C16F4u) { return; }
    }
    ctx->pc = 0x1C16F4u;
    // 0x1c16f4: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x1c16f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c16f8: 0x26060006  addiu       $a2, $s0, 0x6
    ctx->pc = 0x1c16f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x1c16fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c16fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1704: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C1704u;
    SET_GPR_U32(ctx, 31, 0x1C170Cu);
    ctx->pc = 0x1C1708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1704u;
            // 0x1c1708: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C170Cu; }
        if (ctx->pc != 0x1C170Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C170Cu; }
        if (ctx->pc != 0x1C170Cu) { return; }
    }
    ctx->pc = 0x1C170Cu;
    // 0x1c170c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c170cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1710: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c1710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1714: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c1714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1718: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C1718u;
    SET_GPR_U32(ctx, 31, 0x1C1720u);
    ctx->pc = 0x1C171Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1718u;
            // 0x1c171c: 0x24a56160  addiu       $a1, $a1, 0x6160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1720u; }
        if (ctx->pc != 0x1C1720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1720u; }
        if (ctx->pc != 0x1C1720u) { return; }
    }
    ctx->pc = 0x1C1720u;
    // 0x1c1720: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x1c1720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c1724: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1c1724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c1728: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c1728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c172c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c172cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1730: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C1730u;
    SET_GPR_U32(ctx, 31, 0x1C1738u);
    ctx->pc = 0x1C1734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1730u;
            // 0x1c1734: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1738u; }
        if (ctx->pc != 0x1C1738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1738u; }
        if (ctx->pc != 0x1C1738u) { return; }
    }
    ctx->pc = 0x1C1738u;
    // 0x1c1738: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c173c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1740: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c1740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1744: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C1744u;
    SET_GPR_U32(ctx, 31, 0x1C174Cu);
    ctx->pc = 0x1C1748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1744u;
            // 0x1c1748: 0x24a56170  addiu       $a1, $a1, 0x6170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C174Cu; }
        if (ctx->pc != 0x1C174Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C174Cu; }
        if (ctx->pc != 0x1C174Cu) { return; }
    }
    ctx->pc = 0x1C174Cu;
    // 0x1c174c: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x1c174cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c1750: 0x2606000a  addiu       $a2, $s0, 0xA
    ctx->pc = 0x1c1750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x1c1754: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c1754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c175c: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C175Cu;
    SET_GPR_U32(ctx, 31, 0x1C1764u);
    ctx->pc = 0x1C1760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C175Cu;
            // 0x1c1760: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1764u; }
        if (ctx->pc != 0x1C1764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1764u; }
        if (ctx->pc != 0x1C1764u) { return; }
    }
    ctx->pc = 0x1C1764u;
    // 0x1c1764: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1768: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c1768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c176c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c176cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1770: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C1770u;
    SET_GPR_U32(ctx, 31, 0x1C1778u);
    ctx->pc = 0x1C1774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1770u;
            // 0x1c1774: 0x24a56180  addiu       $a1, $a1, 0x6180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1778u; }
        if (ctx->pc != 0x1C1778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1778u; }
        if (ctx->pc != 0x1C1778u) { return; }
    }
    ctx->pc = 0x1C1778u;
    // 0x1c1778: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x1c1778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c177c: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x1c177cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1c1780: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c1780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1788: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C1788u;
    SET_GPR_U32(ctx, 31, 0x1C1790u);
    ctx->pc = 0x1C178Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1788u;
            // 0x1c178c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1790u; }
        if (ctx->pc != 0x1C1790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1790u; }
        if (ctx->pc != 0x1C1790u) { return; }
    }
    ctx->pc = 0x1C1790u;
    // 0x1c1790: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1794: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c1794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1798: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c1798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c179c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C179Cu;
    SET_GPR_U32(ctx, 31, 0x1C17A4u);
    ctx->pc = 0x1C17A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C179Cu;
            // 0x1c17a0: 0x24a56190  addiu       $a1, $a1, 0x6190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17A4u; }
        if (ctx->pc != 0x1C17A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17A4u; }
        if (ctx->pc != 0x1C17A4u) { return; }
    }
    ctx->pc = 0x1C17A4u;
    // 0x1c17a4: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x1c17a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c17a8: 0x2606000e  addiu       $a2, $s0, 0xE
    ctx->pc = 0x1c17a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x1c17ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c17acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c17b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c17b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c17b4: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C17B4u;
    SET_GPR_U32(ctx, 31, 0x1C17BCu);
    ctx->pc = 0x1C17B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C17B4u;
            // 0x1c17b8: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17BCu; }
        if (ctx->pc != 0x1C17BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17BCu; }
        if (ctx->pc != 0x1C17BCu) { return; }
    }
    ctx->pc = 0x1C17BCu;
    // 0x1c17bc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c17bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c17c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c17c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c17c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c17c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c17c8: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C17C8u;
    SET_GPR_U32(ctx, 31, 0x1C17D0u);
    ctx->pc = 0x1C17CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C17C8u;
            // 0x1c17cc: 0x24a561a0  addiu       $a1, $a1, 0x61A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17D0u; }
        if (ctx->pc != 0x1C17D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17D0u; }
        if (ctx->pc != 0x1C17D0u) { return; }
    }
    ctx->pc = 0x1C17D0u;
    // 0x1c17d0: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x1c17d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c17d4: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1c17d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c17d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c17d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c17dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c17dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c17e0: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C17E0u;
    SET_GPR_U32(ctx, 31, 0x1C17E8u);
    ctx->pc = 0x1C17E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C17E0u;
            // 0x1c17e4: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17E8u; }
        if (ctx->pc != 0x1C17E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17E8u; }
        if (ctx->pc != 0x1C17E8u) { return; }
    }
    ctx->pc = 0x1C17E8u;
    // 0x1c17e8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c17e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c17ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c17ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c17f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c17f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c17f4: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C17F4u;
    SET_GPR_U32(ctx, 31, 0x1C17FCu);
    ctx->pc = 0x1C17F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C17F4u;
            // 0x1c17f8: 0x24a561b0  addiu       $a1, $a1, 0x61B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17FCu; }
        if (ctx->pc != 0x1C17FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17FCu; }
        if (ctx->pc != 0x1C17FCu) { return; }
    }
    ctx->pc = 0x1C17FCu;
    // 0x1c17fc: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x1c17fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c1800: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x1c1800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1c1804: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c1804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c180c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1C180Cu;
    SET_GPR_U32(ctx, 31, 0x1C1814u);
    ctx->pc = 0x1C1810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C180Cu;
            // 0x1c1810: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1814u; }
        if (ctx->pc != 0x1C1814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1814u; }
        if (ctx->pc != 0x1C1814u) { return; }
    }
    ctx->pc = 0x1C1814u;
    // 0x1c1814: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1818: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c1818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c181c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c181cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1820: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C1820u;
    SET_GPR_U32(ctx, 31, 0x1C1828u);
    ctx->pc = 0x1C1824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1820u;
            // 0x1c1824: 0x24a561c0  addiu       $a1, $a1, 0x61C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1828u; }
        if (ctx->pc != 0x1C1828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1828u; }
        if (ctx->pc != 0x1C1828u) { return; }
    }
    ctx->pc = 0x1C1828u;
    // 0x1c1828: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x1c1828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c182c: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x1c182cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1c1830: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c1830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1834: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1838: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C1838u;
    SET_GPR_U32(ctx, 31, 0x1C1840u);
    ctx->pc = 0x1C183Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1838u;
            // 0x1c183c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1840u; }
        if (ctx->pc != 0x1C1840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1840u; }
        if (ctx->pc != 0x1C1840u) { return; }
    }
    ctx->pc = 0x1C1840u;
    // 0x1c1840: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1844: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c1844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1848: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c1848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c184c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C184Cu;
    SET_GPR_U32(ctx, 31, 0x1C1854u);
    ctx->pc = 0x1C1850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C184Cu;
            // 0x1c1850: 0x24a561d8  addiu       $a1, $a1, 0x61D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1854u; }
        if (ctx->pc != 0x1C1854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1854u; }
        if (ctx->pc != 0x1C1854u) { return; }
    }
    ctx->pc = 0x1C1854u;
    // 0x1c1854: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x1c1854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c1858: 0x2606001a  addiu       $a2, $s0, 0x1A
    ctx->pc = 0x1c1858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 26));
    // 0x1c185c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c185cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1864: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C1864u;
    SET_GPR_U32(ctx, 31, 0x1C186Cu);
    ctx->pc = 0x1C1868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1864u;
            // 0x1c1868: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C186Cu; }
        if (ctx->pc != 0x1C186Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C186Cu; }
        if (ctx->pc != 0x1C186Cu) { return; }
    }
    ctx->pc = 0x1C186Cu;
    // 0x1c186c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c186cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1870: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c1870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1874: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c1874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1878: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C1878u;
    SET_GPR_U32(ctx, 31, 0x1C1880u);
    ctx->pc = 0x1C187Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1878u;
            // 0x1c187c: 0x24a561f0  addiu       $a1, $a1, 0x61F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1880u; }
        if (ctx->pc != 0x1C1880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1880u; }
        if (ctx->pc != 0x1C1880u) { return; }
    }
    ctx->pc = 0x1C1880u;
    // 0x1c1880: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x1c1880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c1884: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x1c1884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1c1888: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c1888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c188c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c188cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1890: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C1890u;
    SET_GPR_U32(ctx, 31, 0x1C1898u);
    ctx->pc = 0x1C1894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1890u;
            // 0x1c1894: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1898u; }
        if (ctx->pc != 0x1C1898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1898u; }
        if (ctx->pc != 0x1C1898u) { return; }
    }
    ctx->pc = 0x1C1898u;
    // 0x1c1898: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c189c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c189cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c18a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18a4: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C18A4u;
    SET_GPR_U32(ctx, 31, 0x1C18ACu);
    ctx->pc = 0x1C18A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C18A4u;
            // 0x1c18a8: 0x24a56208  addiu       $a1, $a1, 0x6208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C18ACu; }
        if (ctx->pc != 0x1C18ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C18ACu; }
        if (ctx->pc != 0x1C18ACu) { return; }
    }
    ctx->pc = 0x1C18ACu;
    // 0x1c18ac: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x1c18acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c18b0: 0x2606001e  addiu       $a2, $s0, 0x1E
    ctx->pc = 0x1c18b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 30));
    // 0x1c18b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c18b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c18b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18bc: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1C18BCu;
    SET_GPR_U32(ctx, 31, 0x1C18C4u);
    ctx->pc = 0x1C18C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C18BCu;
            // 0x1c18c0: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C18C4u; }
        if (ctx->pc != 0x1C18C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C18C4u; }
        if (ctx->pc != 0x1C18C4u) { return; }
    }
    ctx->pc = 0x1C18C4u;
    // 0x1c18c4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c18c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c18c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c18c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c18ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18d0: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C18D0u;
    SET_GPR_U32(ctx, 31, 0x1C18D8u);
    ctx->pc = 0x1C18D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C18D0u;
            // 0x1c18d4: 0x24a56220  addiu       $a1, $a1, 0x6220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C18D8u; }
        if (ctx->pc != 0x1C18D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C18D8u; }
        if (ctx->pc != 0x1C18D8u) { return; }
    }
    ctx->pc = 0x1C18D8u;
    // 0x1c18d8: 0x2718818  mult        $s1, $s3, $s1
    ctx->pc = 0x1c18d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1c18dc: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1c18dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1c18e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c18e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c18e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c18e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c18ec: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1C18ECu;
    SET_GPR_U32(ctx, 31, 0x1C18F4u);
    ctx->pc = 0x1C18F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C18ECu;
            // 0x1c18f0: 0x2303021  addu        $a2, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C18F4u; }
        if (ctx->pc != 0x1C18F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C18F4u; }
        if (ctx->pc != 0x1C18F4u) { return; }
    }
    ctx->pc = 0x1C18F4u;
    // 0x1c18f4: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1c18f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c18f8: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x1C18F8u;
    {
        const bool branch_taken_0x1c18f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C18FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C18F8u;
            // 0x1c18fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c18f8) {
            ctx->pc = 0x1C1650u;
            runtime->cooperativeGuestYield();
            goto label_1c1650;
        }
    }
    ctx->pc = 0x1C1900u;
    // 0x1c1900: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1c1900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c1904: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1c1904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c1908: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1c1908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c190c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1c190cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1910: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c1910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1914: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1914u;
            // 0x1c1918: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1970u: goto label_1c1970;
            case 0x1C1978u: goto label_1c1978;
            case 0x1C1A18u: goto label_1c1a18;
            case 0x1C1A78u: goto label_1c1a78;
            case 0x1C1A80u: goto label_1c1a80;
            case 0x1C1B10u: goto label_1c1b10;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B98u: goto label_1c1b98;
            case 0x1C1C08u: goto label_1c1c08;
            case 0x1C1C0Cu: goto label_1c1c0c;
            case 0x1C1CB0u: goto label_1c1cb0;
            case 0x1C1CB4u: goto label_1c1cb4;
            case 0x1C1D50u: goto label_1c1d50;
            case 0x1C1D5Cu: goto label_1c1d5c;
            case 0x1C1D78u: goto label_1c1d78;
            case 0x1C1D98u: goto label_1c1d98;
            case 0x1C1DB4u: goto label_1c1db4;
            case 0x1C1DCCu: goto label_1c1dcc;
            case 0x1C1DDCu: goto label_1c1ddc;
            case 0x1C1DE8u: goto label_1c1de8;
            case 0x1C1DECu: goto label_1c1dec;
            case 0x1C1E60u: goto label_1c1e60;
            case 0x1C1E64u: goto label_1c1e64;
            case 0x1C1EF8u: goto label_1c1ef8;
            case 0x1C1F04u: goto label_1c1f04;
            case 0x1C1F24u: goto label_1c1f24;
            case 0x1C1F44u: goto label_1c1f44;
            case 0x1C1F60u: goto label_1c1f60;
            case 0x1C1F78u: goto label_1c1f78;
            case 0x1C1F88u: goto label_1c1f88;
            case 0x1C1F94u: goto label_1c1f94;
            case 0x1C1F98u: goto label_1c1f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C191Cu;
    // 0x1c191c: 0x0  nop
    ctx->pc = 0x1c191cu;
    // NOP
    // 0x1c1920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1924: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c1924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c1928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c192c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c192cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1930: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1c1930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c1934: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1c1934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1c1938: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C1938u;
    {
        const bool branch_taken_0x1c1938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C193Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1938u;
            // 0x1c193c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1938) {
            ctx->pc = 0x1C1970u;
            goto label_1c1970;
        }
    }
    ctx->pc = 0x1C1940u;
    // 0x1c1940: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c1940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c1944: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1c1944u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1c1948: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1c1948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c194c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c194cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c1950: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1c1950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1c1954: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c1954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c1958: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c1958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c195c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1960: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1960u;
    {
        const bool branch_taken_0x1c1960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c1960) {
            ctx->pc = 0x1C1964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1960u;
            // 0x1c1964: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1978u;
            goto label_1c1978;
        }
    }
    ctx->pc = 0x1C1968u;
    // 0x1c1968: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c196c: 0x0  nop
    ctx->pc = 0x1c196cu;
    // NOP
label_1c1970:
    // 0x1c1970: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1c1970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c1974: 0x0  nop
    ctx->pc = 0x1c1974u;
    // NOP
label_1c1978:
    // 0x1c1978: 0x3c030780  lui         $v1, 0x780
    ctx->pc = 0x1c1978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1920 << 16));
    // 0x1c197c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c197cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1980: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1c1980u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1c1984: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x1c1984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1c1988: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1c1988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1c198c: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x1c198cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x1c1990: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c1990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1c1994: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c1994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c1998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c199c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c199cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1c19a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c19a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c19a4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1c19a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c19a8: 0xc070220  jal         func_1C0880
    ctx->pc = 0x1C19A8u;
    SET_GPR_U32(ctx, 31, 0x1C19B0u);
    ctx->pc = 0x1C0880u;
    if (runtime->hasFunction(0x1C0880u)) {
        auto targetFn = runtime->lookupFunction(0x1C0880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19B0u; }
        if (ctx->pc != 0x1C19B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c0880_0x1c08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19B0u; }
        if (ctx->pc != 0x1C19B0u) { return; }
    }
    ctx->pc = 0x1C19B0u;
    // 0x1c19b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c19b4: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x1c19b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c19b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c19b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c19bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c19bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c19c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C19C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C19C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C19C0u;
            // 0x1c19c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1970u: goto label_1c1970;
            case 0x1C1978u: goto label_1c1978;
            case 0x1C1A18u: goto label_1c1a18;
            case 0x1C1A78u: goto label_1c1a78;
            case 0x1C1A80u: goto label_1c1a80;
            case 0x1C1B10u: goto label_1c1b10;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B98u: goto label_1c1b98;
            case 0x1C1C08u: goto label_1c1c08;
            case 0x1C1C0Cu: goto label_1c1c0c;
            case 0x1C1CB0u: goto label_1c1cb0;
            case 0x1C1CB4u: goto label_1c1cb4;
            case 0x1C1D50u: goto label_1c1d50;
            case 0x1C1D5Cu: goto label_1c1d5c;
            case 0x1C1D78u: goto label_1c1d78;
            case 0x1C1D98u: goto label_1c1d98;
            case 0x1C1DB4u: goto label_1c1db4;
            case 0x1C1DCCu: goto label_1c1dcc;
            case 0x1C1DDCu: goto label_1c1ddc;
            case 0x1C1DE8u: goto label_1c1de8;
            case 0x1C1DECu: goto label_1c1dec;
            case 0x1C1E60u: goto label_1c1e60;
            case 0x1C1E64u: goto label_1c1e64;
            case 0x1C1EF8u: goto label_1c1ef8;
            case 0x1C1F04u: goto label_1c1f04;
            case 0x1C1F24u: goto label_1c1f24;
            case 0x1C1F44u: goto label_1c1f44;
            case 0x1C1F60u: goto label_1c1f60;
            case 0x1C1F78u: goto label_1c1f78;
            case 0x1C1F88u: goto label_1c1f88;
            case 0x1C1F94u: goto label_1c1f94;
            case 0x1C1F98u: goto label_1c1f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C19C8u;
    // 0x1c19c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c19c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c19cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c19ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c19d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c19d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c19d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c19d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19d8: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1c19d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c19dc: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1c19dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1c19e0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C19E0u;
    {
        const bool branch_taken_0x1c19e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C19E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C19E0u;
            // 0x1c19e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19e0) {
            ctx->pc = 0x1C1A18u;
            goto label_1c1a18;
        }
    }
    ctx->pc = 0x1C19E8u;
    // 0x1c19e8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c19ec: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1c19ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1c19f0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1c19f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c19f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c19f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c19f8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1c19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1c19fc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c19fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c1a00: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c1a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1a04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1a08: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1A08u;
    {
        const bool branch_taken_0x1c1a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c1a08) {
            ctx->pc = 0x1C1A18u;
            goto label_1c1a18;
        }
    }
    ctx->pc = 0x1C1A10u;
    // 0x1c1a10: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c1a14: 0x0  nop
    ctx->pc = 0x1c1a14u;
    // NOP
label_1c1a18:
    // 0x1c1a18: 0xc06ff6c  jal         func_1BFDB0
    ctx->pc = 0x1C1A18u;
    SET_GPR_U32(ctx, 31, 0x1C1A20u);
    ctx->pc = 0x1BFDB0u;
    if (runtime->hasFunction(0x1BFDB0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A20u; }
        if (ctx->pc != 0x1C1A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFDB0_0x1bfdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A20u; }
        if (ctx->pc != 0x1C1A20u) { return; }
    }
    ctx->pc = 0x1C1A20u;
    // 0x1c1a20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c1a24: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x1c1a24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c1a28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c1a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1a30: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A30u;
            // 0x1c1a34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1970u: goto label_1c1970;
            case 0x1C1978u: goto label_1c1978;
            case 0x1C1A18u: goto label_1c1a18;
            case 0x1C1A78u: goto label_1c1a78;
            case 0x1C1A80u: goto label_1c1a80;
            case 0x1C1B10u: goto label_1c1b10;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B98u: goto label_1c1b98;
            case 0x1C1C08u: goto label_1c1c08;
            case 0x1C1C0Cu: goto label_1c1c0c;
            case 0x1C1CB0u: goto label_1c1cb0;
            case 0x1C1CB4u: goto label_1c1cb4;
            case 0x1C1D50u: goto label_1c1d50;
            case 0x1C1D5Cu: goto label_1c1d5c;
            case 0x1C1D78u: goto label_1c1d78;
            case 0x1C1D98u: goto label_1c1d98;
            case 0x1C1DB4u: goto label_1c1db4;
            case 0x1C1DCCu: goto label_1c1dcc;
            case 0x1C1DDCu: goto label_1c1ddc;
            case 0x1C1DE8u: goto label_1c1de8;
            case 0x1C1DECu: goto label_1c1dec;
            case 0x1C1E60u: goto label_1c1e60;
            case 0x1C1E64u: goto label_1c1e64;
            case 0x1C1EF8u: goto label_1c1ef8;
            case 0x1C1F04u: goto label_1c1f04;
            case 0x1C1F24u: goto label_1c1f24;
            case 0x1C1F44u: goto label_1c1f44;
            case 0x1C1F60u: goto label_1c1f60;
            case 0x1C1F78u: goto label_1c1f78;
            case 0x1C1F88u: goto label_1c1f88;
            case 0x1C1F94u: goto label_1c1f94;
            case 0x1C1F98u: goto label_1c1f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1A38u;
    // 0x1c1a38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c1a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a3c: 0x8ca40060  lw          $a0, 0x60($a1)
    ctx->pc = 0x1c1a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1c1a40: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x1c1a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1c1a44: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C1A44u;
    {
        const bool branch_taken_0x1c1a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A44u;
            // 0x1c1a48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a44) {
            ctx->pc = 0x1C1A78u;
            goto label_1c1a78;
        }
    }
    ctx->pc = 0x1C1A4Cu;
    // 0x1c1a4c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c1a50: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x1c1a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x1c1a54: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1c1a54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c1a58: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c1a5c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1c1a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1c1a60: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c1a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c1a64: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c1a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1a68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1a6c: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1A6Cu;
    {
        const bool branch_taken_0x1c1a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c1a6c) {
            ctx->pc = 0x1C1A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A6Cu;
            // 0x1c1a70: 0x8ca20064  lw          $v0, 0x64($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1A80u;
            goto label_1c1a80;
        }
    }
    ctx->pc = 0x1C1A74u;
    // 0x1c1a74: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1c1a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c1a78:
    // 0x1c1a78: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x1c1a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x1c1a7c: 0x0  nop
    ctx->pc = 0x1c1a7cu;
    // NOP
label_1c1a80:
    // 0x1c1a80: 0x3c030780  lui         $v1, 0x780
    ctx->pc = 0x1c1a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1920 << 16));
    // 0x1c1a84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c1a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1a88: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1c1a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c1a8c: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1c1a8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1c1a90: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x1c1a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1c1a94: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1c1a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1c1a98: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x1c1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x1c1a9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1c1aa0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c1aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c1aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1aa8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c1aa8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1c1aac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c1aacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c1ab0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c1ab0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c1ab4: 0xacc2037c  sw          $v0, 0x37C($a2)
    ctx->pc = 0x1c1ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 892), GPR_U32(ctx, 2));
    // 0x1c1ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1AB8u;
            // 0x1c1abc: 0xa4a4002a  sh          $a0, 0x2A($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1970u: goto label_1c1970;
            case 0x1C1978u: goto label_1c1978;
            case 0x1C1A18u: goto label_1c1a18;
            case 0x1C1A78u: goto label_1c1a78;
            case 0x1C1A80u: goto label_1c1a80;
            case 0x1C1B10u: goto label_1c1b10;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B98u: goto label_1c1b98;
            case 0x1C1C08u: goto label_1c1c08;
            case 0x1C1C0Cu: goto label_1c1c0c;
            case 0x1C1CB0u: goto label_1c1cb0;
            case 0x1C1CB4u: goto label_1c1cb4;
            case 0x1C1D50u: goto label_1c1d50;
            case 0x1C1D5Cu: goto label_1c1d5c;
            case 0x1C1D78u: goto label_1c1d78;
            case 0x1C1D98u: goto label_1c1d98;
            case 0x1C1DB4u: goto label_1c1db4;
            case 0x1C1DCCu: goto label_1c1dcc;
            case 0x1C1DDCu: goto label_1c1ddc;
            case 0x1C1DE8u: goto label_1c1de8;
            case 0x1C1DECu: goto label_1c1dec;
            case 0x1C1E60u: goto label_1c1e60;
            case 0x1C1E64u: goto label_1c1e64;
            case 0x1C1EF8u: goto label_1c1ef8;
            case 0x1C1F04u: goto label_1c1f04;
            case 0x1C1F24u: goto label_1c1f24;
            case 0x1C1F44u: goto label_1c1f44;
            case 0x1C1F60u: goto label_1c1f60;
            case 0x1C1F78u: goto label_1c1f78;
            case 0x1C1F88u: goto label_1c1f88;
            case 0x1C1F94u: goto label_1c1f94;
            case 0x1C1F98u: goto label_1c1f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1AC0u;
    // 0x1c1ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1ac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c1ac8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c1ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c1acc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1ad4: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x1c1ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1c1ad8: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1c1ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1c1adc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C1ADCu;
    {
        const bool branch_taken_0x1c1adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1ADCu;
            // 0x1c1ae0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1adc) {
            ctx->pc = 0x1C1B14u;
            goto label_1c1b14;
        }
    }
    ctx->pc = 0x1C1AE4u;
    // 0x1c1ae4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c1ae8: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1c1ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1c1aec: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1c1aecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c1af0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c1af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c1af4: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1c1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1c1af8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c1af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c1afc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c1afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1b00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1b04: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1B04u;
    {
        const bool branch_taken_0x1c1b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C1B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B04u;
            // 0x1c1b08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b04) {
            ctx->pc = 0x1C1B10u;
            goto label_1c1b10;
        }
    }
    ctx->pc = 0x1C1B0Cu;
    // 0x1c1b0c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c1b10:
    // 0x1c1b10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b14:
    // 0x1c1b14: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C1B14u;
    {
        const bool branch_taken_0x1c1b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b14) {
            ctx->pc = 0x1C1B18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B14u;
            // 0x1c1b18: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1B98u;
            goto label_1c1b98;
        }
    }
    ctx->pc = 0x1C1B1Cu;
    // 0x1c1b1c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c1b20: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1c1b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1c1b24: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1c1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1c1b28: 0x40f809  jalr        $v0
    ctx->pc = 0x1C1B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1B30u);
        ctx->pc = 0x1C1B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B28u;
            // 0x1c1b2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1B30u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1970u: goto label_1c1970;
            case 0x1C1978u: goto label_1c1978;
            case 0x1C1A18u: goto label_1c1a18;
            case 0x1C1A78u: goto label_1c1a78;
            case 0x1C1A80u: goto label_1c1a80;
            case 0x1C1B10u: goto label_1c1b10;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B98u: goto label_1c1b98;
            case 0x1C1C08u: goto label_1c1c08;
            case 0x1C1C0Cu: goto label_1c1c0c;
            case 0x1C1CB0u: goto label_1c1cb0;
            case 0x1C1CB4u: goto label_1c1cb4;
            case 0x1C1D50u: goto label_1c1d50;
            case 0x1C1D5Cu: goto label_1c1d5c;
            case 0x1C1D78u: goto label_1c1d78;
            case 0x1C1D98u: goto label_1c1d98;
            case 0x1C1DB4u: goto label_1c1db4;
            case 0x1C1DCCu: goto label_1c1dcc;
            case 0x1C1DDCu: goto label_1c1ddc;
            case 0x1C1DE8u: goto label_1c1de8;
            case 0x1C1DECu: goto label_1c1dec;
            case 0x1C1E60u: goto label_1c1e60;
            case 0x1C1E64u: goto label_1c1e64;
            case 0x1C1EF8u: goto label_1c1ef8;
            case 0x1C1F04u: goto label_1c1f04;
            case 0x1C1F24u: goto label_1c1f24;
            case 0x1C1F44u: goto label_1c1f44;
            case 0x1C1F60u: goto label_1c1f60;
            case 0x1C1F78u: goto label_1c1f78;
            case 0x1C1F88u: goto label_1c1f88;
            case 0x1C1F94u: goto label_1c1f94;
            case 0x1C1F98u: goto label_1c1f98;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B30u; }
            if (ctx->pc != 0x1C1B30u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1B30u;
    // 0x1c1b30: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C1B30u;
    {
        const bool branch_taken_0x1c1b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b30) {
            ctx->pc = 0x1C1B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B30u;
            // 0x1c1b34: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1B98u;
            goto label_1c1b98;
        }
    }
    ctx->pc = 0x1C1B38u;
    // 0x1c1b38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c1b3c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1c1b3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1c1b40: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1c1b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1c1b44: 0x40f809  jalr        $v0
    ctx->pc = 0x1C1B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1B4Cu);
        ctx->pc = 0x1C1B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B44u;
            // 0x1c1b48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1B4Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1970u: goto label_1c1970;
            case 0x1C1978u: goto label_1c1978;
            case 0x1C1A18u: goto label_1c1a18;
            case 0x1C1A78u: goto label_1c1a78;
            case 0x1C1A80u: goto label_1c1a80;
            case 0x1C1B10u: goto label_1c1b10;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B98u: goto label_1c1b98;
            case 0x1C1C08u: goto label_1c1c08;
            case 0x1C1C0Cu: goto label_1c1c0c;
            case 0x1C1CB0u: goto label_1c1cb0;
            case 0x1C1CB4u: goto label_1c1cb4;
            case 0x1C1D50u: goto label_1c1d50;
            case 0x1C1D5Cu: goto label_1c1d5c;
            case 0x1C1D78u: goto label_1c1d78;
            case 0x1C1D98u: goto label_1c1d98;
            case 0x1C1DB4u: goto label_1c1db4;
            case 0x1C1DCCu: goto label_1c1dcc;
            case 0x1C1DDCu: goto label_1c1ddc;
            case 0x1C1DE8u: goto label_1c1de8;
            case 0x1C1DECu: goto label_1c1dec;
            case 0x1C1E60u: goto label_1c1e60;
            case 0x1C1E64u: goto label_1c1e64;
            case 0x1C1EF8u: goto label_1c1ef8;
            case 0x1C1F04u: goto label_1c1f04;
            case 0x1C1F24u: goto label_1c1f24;
            case 0x1C1F44u: goto label_1c1f44;
            case 0x1C1F60u: goto label_1c1f60;
            case 0x1C1F78u: goto label_1c1f78;
            case 0x1C1F88u: goto label_1c1f88;
            case 0x1C1F94u: goto label_1c1f94;
            case 0x1C1F98u: goto label_1c1f98;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B4Cu; }
            if (ctx->pc != 0x1C1B4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C1B4Cu;
    // 0x1c1b4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b50: 0xc081a5a  jal         func_206968
    ctx->pc = 0x1C1B50u;
    SET_GPR_U32(ctx, 31, 0x1C1B58u);
    ctx->pc = 0x1C1B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B50u;
            // 0x1c1b54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206968u;
    if (runtime->hasFunction(0x206968u)) {
        auto targetFn = runtime->lookupFunction(0x206968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B58u; }
        if (ctx->pc != 0x1C1B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206968_0x206968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B58u; }
        if (ctx->pc != 0x1C1B58u) { return; }
    }
    ctx->pc = 0x1C1B58u;
    // 0x1c1b58: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c1b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c1b5c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1c1b5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1c1b60: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1c1b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1c1b64: 0x40f809  jalr        $v0
    ctx->pc = 0x1C1B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1B6Cu);
        ctx->pc = 0x1C1B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B64u;
            // 0x1c1b68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1B6Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1970u: goto label_1c1970;
            case 0x1C1978u: goto label_1c1978;
            case 0x1C1A18u: goto label_1c1a18;
            case 0x1C1A78u: goto label_1c1a78;
            case 0x1C1A80u: goto label_1c1a80;
            case 0x1C1B10u: goto label_1c1b10;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B98u: goto label_1c1b98;
            case 0x1C1C08u: goto label_1c1c08;
            case 0x1C1C0Cu: goto label_1c1c0c;
            case 0x1C1CB0u: goto label_1c1cb0;
            case 0x1C1CB4u: goto label_1c1cb4;
            case 0x1C1D50u: goto label_1c1d50;
            case 0x1C1D5Cu: goto label_1c1d5c;
            case 0x1C1D78u: goto label_1c1d78;
            case 0x1C1D98u: goto label_1c1d98;
            case 0x1C1DB4u: goto label_1c1db4;
            case 0x1C1DCCu: goto label_1c1dcc;
            case 0x1C1DDCu: goto label_1c1ddc;
            case 0x1C1DE8u: goto label_1c1de8;
            case 0x1C1DECu: goto label_1c1dec;
            case 0x1C1E60u: goto label_1c1e60;
            case 0x1C1E64u: goto label_1c1e64;
            case 0x1C1EF8u: goto label_1c1ef8;
            case 0x1C1F04u: goto label_1c1f04;
            case 0x1C1F24u: goto label_1c1f24;
            case 0x1C1F44u: goto label_1c1f44;
            case 0x1C1F60u: goto label_1c1f60;
            case 0x1C1F78u: goto label_1c1f78;
            case 0x1C1F88u: goto label_1c1f88;
            case 0x1C1F94u: goto label_1c1f94;
            case 0x1C1F98u: goto label_1c1f98;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B6Cu; }
            if (ctx->pc != 0x1C1B6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C1B6Cu;
    // 0x1c1b6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b74: 0xc081a18  jal         func_206860
    ctx->pc = 0x1C1B74u;
    SET_GPR_U32(ctx, 31, 0x1C1B7Cu);
    ctx->pc = 0x1C1B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B74u;
            // 0x1c1b78: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B7Cu; }
        if (ctx->pc != 0x1C1B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B7Cu; }
        if (ctx->pc != 0x1C1B7Cu) { return; }
    }
    ctx->pc = 0x1C1B7Cu;
    // 0x1c1b7c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1B7Cu;
    {
        const bool branch_taken_0x1c1b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b7c) {
            ctx->pc = 0x1C1B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B7Cu;
            // 0x1c1b80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1B98u;
            goto label_1c1b98;
        }
    }
    ctx->pc = 0x1C1B84u;
    // 0x1c1b84: 0x8e0203e4  lw          $v0, 0x3E4($s0)
    ctx->pc = 0x1c1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
    // 0x1c1b88: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x1c1b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1c1b8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c1b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c1b90: 0xae0203e4  sw          $v0, 0x3E4($s0)
    ctx->pc = 0x1c1b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 2));
    // 0x1c1b94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c1b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1b98:
    // 0x1c1b98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1BA0u;
            // 0x1c1ba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1970u: goto label_1c1970;
            case 0x1C1978u: goto label_1c1978;
            case 0x1C1A18u: goto label_1c1a18;
            case 0x1C1A78u: goto label_1c1a78;
            case 0x1C1A80u: goto label_1c1a80;
            case 0x1C1B10u: goto label_1c1b10;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B98u: goto label_1c1b98;
            case 0x1C1C08u: goto label_1c1c08;
            case 0x1C1C0Cu: goto label_1c1c0c;
            case 0x1C1CB0u: goto label_1c1cb0;
            case 0x1C1CB4u: goto label_1c1cb4;
            case 0x1C1D50u: goto label_1c1d50;
            case 0x1C1D5Cu: goto label_1c1d5c;
            case 0x1C1D78u: goto label_1c1d78;
            case 0x1C1D98u: goto label_1c1d98;
            case 0x1C1DB4u: goto label_1c1db4;
            case 0x1C1DCCu: goto label_1c1dcc;
            case 0x1C1DDCu: goto label_1c1ddc;
            case 0x1C1DE8u: goto label_1c1de8;
            case 0x1C1DECu: goto label_1c1dec;
            case 0x1C1E60u: goto label_1c1e60;
            case 0x1C1E64u: goto label_1c1e64;
            case 0x1C1EF8u: goto label_1c1ef8;
            case 0x1C1F04u: goto label_1c1f04;
            case 0x1C1F24u: goto label_1c1f24;
            case 0x1C1F44u: goto label_1c1f44;
            case 0x1C1F60u: goto label_1c1f60;
            case 0x1C1F78u: goto label_1c1f78;
            case 0x1C1F88u: goto label_1c1f88;
            case 0x1C1F94u: goto label_1c1f94;
            case 0x1C1F98u: goto label_1c1f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1BA8u;
    // 0x1c1ba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1bac: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1c1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1c1bb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c1bb4: 0x24421ac0  addiu       $v0, $v0, 0x1AC0
    ctx->pc = 0x1c1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    // 0x1c1bb8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c1bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c1bbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1bc4: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1c1bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1c1bc8: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x1c1bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1c1bcc: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1c1bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1c1bd0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C1BD0u;
    {
        const bool branch_taken_0x1c1bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1BD0u;
            // 0x1c1bd4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bd0) {
            ctx->pc = 0x1C1C0Cu;
            goto label_1c1c0c;
        }
    }
    ctx->pc = 0x1C1BD8u;
    // 0x1c1bd8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c1bdc: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1c1bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1c1be0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1c1be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c1be4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c1be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c1be8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1c1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1c1bec: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c1becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c1bf0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c1bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1bf4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1bf8: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1BF8u;
    {
        const bool branch_taken_0x1c1bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C1BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1BF8u;
            // 0x1c1bfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bf8) {
            ctx->pc = 0x1C1C08u;
            goto label_1c1c08;
        }
    }
    ctx->pc = 0x1C1C00u;
    // 0x1c1c00: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c1c04: 0x0  nop
    ctx->pc = 0x1c1c04u;
    // NOP
label_1c1c08:
    // 0x1c1c08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c0c:
    // 0x1c1c0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c1c10: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1c1c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1c1c14: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1c1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1c1c18: 0x40f809  jalr        $v0
    ctx->pc = 0x1C1C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1C20u);
        ctx->pc = 0x1C1C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C18u;
            // 0x1c1c1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1C20u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1970u: goto label_1c1970;
            case 0x1C1978u: goto label_1c1978;
            case 0x1C1A18u: goto label_1c1a18;
            case 0x1C1A78u: goto label_1c1a78;
            case 0x1C1A80u: goto label_1c1a80;
            case 0x1C1B10u: goto label_1c1b10;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B98u: goto label_1c1b98;
            case 0x1C1C08u: goto label_1c1c08;
            case 0x1C1C0Cu: goto label_1c1c0c;
            case 0x1C1CB0u: goto label_1c1cb0;
            case 0x1C1CB4u: goto label_1c1cb4;
            case 0x1C1D50u: goto label_1c1d50;
            case 0x1C1D5Cu: goto label_1c1d5c;
            case 0x1C1D78u: goto label_1c1d78;
            case 0x1C1D98u: goto label_1c1d98;
            case 0x1C1DB4u: goto label_1c1db4;
            case 0x1C1DCCu: goto label_1c1dcc;
            case 0x1C1DDCu: goto label_1c1ddc;
            case 0x1C1DE8u: goto label_1c1de8;
            case 0x1C1DECu: goto label_1c1dec;
            case 0x1C1E60u: goto label_1c1e60;
            case 0x1C1E64u: goto label_1c1e64;
            case 0x1C1EF8u: goto label_1c1ef8;
            case 0x1C1F04u: goto label_1c1f04;
            case 0x1C1F24u: goto label_1c1f24;
            case 0x1C1F44u: goto label_1c1f44;
            case 0x1C1F60u: goto label_1c1f60;
            case 0x1C1F78u: goto label_1c1f78;
            case 0x1C1F88u: goto label_1c1f88;
            case 0x1C1F94u: goto label_1c1f94;
            case 0x1C1F98u: goto label_1c1f98;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C20u; }
            if (ctx->pc != 0x1C1C20u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1C20u;
    // 0x1c1c20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c24: 0xc081a44  jal         func_206910
    ctx->pc = 0x1C1C24u;
    SET_GPR_U32(ctx, 31, 0x1C1C2Cu);
    ctx->pc = 0x1C1C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C24u;
            // 0x1c1c28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206910u;
    if (runtime->hasFunction(0x206910u)) {
        auto targetFn = runtime->lookupFunction(0x206910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C2Cu; }
        if (ctx->pc != 0x1C1C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206910_0x206910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C2Cu; }
        if (ctx->pc != 0x1C1C2Cu) { return; }
    }
    ctx->pc = 0x1C1C2Cu;
    // 0x1c1c2c: 0x8e0203e4  lw          $v0, 0x3E4($s0)
    ctx->pc = 0x1c1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
    // 0x1c1c30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c1c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c1c34: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1c1c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1c1c38: 0xae0203e4  sw          $v0, 0x3E4($s0)
    ctx->pc = 0x1c1c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 2));
    // 0x1c1c3c: 0xa623002a  sh          $v1, 0x2A($s1)
    ctx->pc = 0x1c1c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c1c40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c1c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1c44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C4Cu;
            // 0x1c1c50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1970u: goto label_1c1970;
            case 0x1C1978u: goto label_1c1978;
            case 0x1C1A18u: goto label_1c1a18;
            case 0x1C1A78u: goto label_1c1a78;
            case 0x1C1A80u: goto label_1c1a80;
            case 0x1C1B10u: goto label_1c1b10;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B98u: goto label_1c1b98;
            case 0x1C1C08u: goto label_1c1c08;
            case 0x1C1C0Cu: goto label_1c1c0c;
            case 0x1C1CB0u: goto label_1c1cb0;
            case 0x1C1CB4u: goto label_1c1cb4;
            case 0x1C1D50u: goto label_1c1d50;
            case 0x1C1D5Cu: goto label_1c1d5c;
            case 0x1C1D78u: goto label_1c1d78;
            case 0x1C1D98u: goto label_1c1d98;
            case 0x1C1DB4u: goto label_1c1db4;
            case 0x1C1DCCu: goto label_1c1dcc;
            case 0x1C1DDCu: goto label_1c1ddc;
            case 0x1C1DE8u: goto label_1c1de8;
            case 0x1C1DECu: goto label_1c1dec;
            case 0x1C1E60u: goto label_1c1e60;
            case 0x1C1E64u: goto label_1c1e64;
            case 0x1C1EF8u: goto label_1c1ef8;
            case 0x1C1F04u: goto label_1c1f04;
            case 0x1C1F24u: goto label_1c1f24;
            case 0x1C1F44u: goto label_1c1f44;
            case 0x1C1F60u: goto label_1c1f60;
            case 0x1C1F78u: goto label_1c1f78;
            case 0x1C1F88u: goto label_1c1f88;
            case 0x1C1F94u: goto label_1c1f94;
            case 0x1C1F98u: goto label_1c1f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1C54u;
    // 0x1c1c54: 0x0  nop
    ctx->pc = 0x1c1c54u;
    // NOP
    // 0x1c1c58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c1c5c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1c1c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1c1c60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c1c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c1c64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c1c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c1c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c1c6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1c70: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x1c1c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1c1c74: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1c1c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1c1c78: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C1C78u;
    {
        const bool branch_taken_0x1c1c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C78u;
            // 0x1c1c7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c78) {
            ctx->pc = 0x1C1CB4u;
            goto label_1c1cb4;
        }
    }
    ctx->pc = 0x1C1C80u;
    // 0x1c1c80: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c1c84: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1c1c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1c1c88: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1c1c88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c1c8c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c1c90: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1c1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1c1c94: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c1c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c1c98: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1c9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c1c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1ca0: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1CA0u;
    {
        const bool branch_taken_0x1c1ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C1CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1CA0u;
            // 0x1c1ca4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ca0) {
            ctx->pc = 0x1C1CB0u;
            goto label_1c1cb0;
        }
    }
    ctx->pc = 0x1C1CA8u;
    // 0x1c1ca8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c1cac: 0x0  nop
    ctx->pc = 0x1c1cacu;
    // NOP
label_1c1cb0:
    // 0x1c1cb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1cb4:
    // 0x1c1cb4: 0x1220004d  beqz        $s1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1C1CB4u;
    {
        const bool branch_taken_0x1c1cb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1CB4u;
            // 0x1c1cb8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cb4) {
            ctx->pc = 0x1C1DECu;
            goto label_1c1dec;
        }
    }
    ctx->pc = 0x1C1CBCu;
    // 0x1c1cbc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c1cc0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1c1cc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1c1cc4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1c1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1c1cc8: 0x40f809  jalr        $v0
    ctx->pc = 0x1C1CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1CD0u);
        ctx->pc = 0x1C1CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1CC8u;
            // 0x1c1ccc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1CD0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1970u: goto label_1c1970;
            case 0x1C1978u: goto label_1c1978;
            case 0x1C1A18u: goto label_1c1a18;
            case 0x1C1A78u: goto label_1c1a78;
            case 0x1C1A80u: goto label_1c1a80;
            case 0x1C1B10u: goto label_1c1b10;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B98u: goto label_1c1b98;
            case 0x1C1C08u: goto label_1c1c08;
            case 0x1C1C0Cu: goto label_1c1c0c;
            case 0x1C1CB0u: goto label_1c1cb0;
            case 0x1C1CB4u: goto label_1c1cb4;
            case 0x1C1D50u: goto label_1c1d50;
            case 0x1C1D5Cu: goto label_1c1d5c;
            case 0x1C1D78u: goto label_1c1d78;
            case 0x1C1D98u: goto label_1c1d98;
            case 0x1C1DB4u: goto label_1c1db4;
            case 0x1C1DCCu: goto label_1c1dcc;
            case 0x1C1DDCu: goto label_1c1ddc;
            case 0x1C1DE8u: goto label_1c1de8;
            case 0x1C1DECu: goto label_1c1dec;
            case 0x1C1E60u: goto label_1c1e60;
            case 0x1C1E64u: goto label_1c1e64;
            case 0x1C1EF8u: goto label_1c1ef8;
            case 0x1C1F04u: goto label_1c1f04;
            case 0x1C1F24u: goto label_1c1f24;
            case 0x1C1F44u: goto label_1c1f44;
            case 0x1C1F60u: goto label_1c1f60;
            case 0x1C1F78u: goto label_1c1f78;
            case 0x1C1F88u: goto label_1c1f88;
            case 0x1C1F94u: goto label_1c1f94;
            case 0x1C1F98u: goto label_1c1f98;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1CD0u; }
            if (ctx->pc != 0x1C1CD0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1CD0u;
    // 0x1c1cd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c1cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1cd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c1cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1cd8: 0xc081a5a  jal         func_206968
    ctx->pc = 0x1C1CD8u;
    SET_GPR_U32(ctx, 31, 0x1C1CE0u);
    ctx->pc = 0x1C1CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1CD8u;
            // 0x1c1cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206968u;
    if (runtime->hasFunction(0x206968u)) {
        auto targetFn = runtime->lookupFunction(0x206968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1CE0u; }
        if (ctx->pc != 0x1C1CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206968_0x206968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1CE0u; }
        if (ctx->pc != 0x1C1CE0u) { return; }
    }
    ctx->pc = 0x1C1CE0u;
    // 0x1c1ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ce4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c1ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ce8: 0xc081a18  jal         func_206860
    ctx->pc = 0x1C1CE8u;
    SET_GPR_U32(ctx, 31, 0x1C1CF0u);
    ctx->pc = 0x1C1CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1CE8u;
            // 0x1c1cec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1CF0u; }
        if (ctx->pc != 0x1C1CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1CF0u; }
        if (ctx->pc != 0x1C1CF0u) { return; }
    }
    ctx->pc = 0x1C1CF0u;
    // 0x1c1cf0: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1C1CF0u;
    {
        const bool branch_taken_0x1c1cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1CF0u;
            // 0x1c1cf4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cf0) {
            ctx->pc = 0x1C1DECu;
            goto label_1c1dec;
        }
    }
    ctx->pc = 0x1C1CF8u;
    // 0x1c1cf8: 0x8e2301b0  lw          $v1, 0x1B0($s1)
    ctx->pc = 0x1c1cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x1c1cfc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c1d00: 0x8c50cb94  lw          $s0, -0x346C($v0)
    ctx->pc = 0x1c1d00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1c1d04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c1d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1d08: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1c1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1c1d0c: 0x8044009b  lb          $a0, 0x9B($v0)
    ctx->pc = 0x1c1d0cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 155)));
    // 0x1c1d10: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c1d14: 0x8c42e560  lw          $v0, -0x1AA0($v0)
    ctx->pc = 0x1c1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x1c1d18: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x1c1d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x1c1d1c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1C1D1Cu;
    {
        const bool branch_taken_0x1c1d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D1Cu;
            // 0x1c1d20: 0x24910001  addiu       $s1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d1c) {
            ctx->pc = 0x1C1DE8u;
            goto label_1c1de8;
        }
    }
    ctx->pc = 0x1C1D24u;
    // 0x1c1d24: 0x26031590  addiu       $v1, $s0, 0x1590
    ctx->pc = 0x1c1d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5520));
    // 0x1c1d28: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1c1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1d2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c1d30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c1d34: 0x10450010  beq         $v0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C1D34u;
    {
        const bool branch_taken_0x1c1d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1c1d34) {
            ctx->pc = 0x1C1D78u;
            goto label_1c1d78;
        }
    }
    ctx->pc = 0x1C1D3Cu;
    // 0x1c1d3c: 0x16250004  bne         $s1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1D3Cu;
    {
        const bool branch_taken_0x1c1d3c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C1D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D3Cu;
            // 0x1c1d40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d3c) {
            ctx->pc = 0x1C1D50u;
            goto label_1c1d50;
        }
    }
    ctx->pc = 0x1C1D44u;
    // 0x1c1d44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1D44u;
    {
        const bool branch_taken_0x1c1d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D44u;
            // 0x1c1d48: 0xae110238  sw          $s1, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d44) {
            ctx->pc = 0x1C1D5Cu;
            goto label_1c1d5c;
        }
    }
    ctx->pc = 0x1C1D4Cu;
    // 0x1c1d4c: 0x0  nop
    ctx->pc = 0x1c1d4cu;
    // NOP
label_1c1d50:
    // 0x1c1d50: 0x56220002  bnel        $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1D50u;
    {
        const bool branch_taken_0x1c1d50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1d50) {
            ctx->pc = 0x1C1D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D50u;
            // 0x1c1d54: 0xae050240  sw          $a1, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1D5Cu;
            goto label_1c1d5c;
        }
    }
    ctx->pc = 0x1C1D58u;
    // 0x1c1d58: 0xae05023c  sw          $a1, 0x23C($s0)
    ctx->pc = 0x1c1d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 5));
label_1c1d5c:
    // 0x1c1d5c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1c1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1d60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c1d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d68: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1C1D68u;
    SET_GPR_U32(ctx, 31, 0x1C1D70u);
    ctx->pc = 0x1C1D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D68u;
            // 0x1c1d6c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D70u; }
        if (ctx->pc != 0x1C1D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D70u; }
        if (ctx->pc != 0x1C1D70u) { return; }
    }
    ctx->pc = 0x1C1D70u;
    // 0x1c1d70: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C1D70u;
    {
        const bool branch_taken_0x1c1d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D70u;
            // 0x1c1d74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d70) {
            ctx->pc = 0x1C1DCCu;
            goto label_1c1dcc;
        }
    }
    ctx->pc = 0x1C1D78u;
label_1c1d78:
    // 0x1c1d78: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1D78u;
    {
        const bool branch_taken_0x1c1d78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D78u;
            // 0x1c1d7c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d78) {
            ctx->pc = 0x1C1D98u;
            goto label_1c1d98;
        }
    }
    ctx->pc = 0x1C1D80u;
    // 0x1c1d80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d88: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1C1D88u;
    SET_GPR_U32(ctx, 31, 0x1C1D90u);
    ctx->pc = 0x1C1D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D88u;
            // 0x1c1d8c: 0xae020238  sw          $v0, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D90u; }
        if (ctx->pc != 0x1C1D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D90u; }
        if (ctx->pc != 0x1C1D90u) { return; }
    }
    ctx->pc = 0x1C1D90u;
    // 0x1c1d90: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C1D90u;
    {
        const bool branch_taken_0x1c1d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D90u;
            // 0x1c1d94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d90) {
            ctx->pc = 0x1C1DCCu;
            goto label_1c1dcc;
        }
    }
    ctx->pc = 0x1C1D98u;
label_1c1d98:
    // 0x1c1d98: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1D98u;
    {
        const bool branch_taken_0x1c1d98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D98u;
            // 0x1c1d9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d98) {
            ctx->pc = 0x1C1DB4u;
            goto label_1c1db4;
        }
    }
    ctx->pc = 0x1C1DA0u;
    // 0x1c1da0: 0xae11023c  sw          $s1, 0x23C($s0)
    ctx->pc = 0x1c1da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 17));
    // 0x1c1da4: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1C1DA4u;
    SET_GPR_U32(ctx, 31, 0x1C1DACu);
    ctx->pc = 0x1C1DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DA4u;
            // 0x1c1da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DACu; }
        if (ctx->pc != 0x1C1DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DACu; }
        if (ctx->pc != 0x1C1DACu) { return; }
    }
    ctx->pc = 0x1C1DACu;
    // 0x1c1dac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1DACu;
    {
        const bool branch_taken_0x1c1dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DACu;
            // 0x1c1db0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1dac) {
            ctx->pc = 0x1C1DCCu;
            goto label_1c1dcc;
        }
    }
    ctx->pc = 0x1C1DB4u;
label_1c1db4:
    // 0x1c1db4: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1DB4u;
    {
        const bool branch_taken_0x1c1db4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DB4u;
            // 0x1c1db8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1db4) {
            ctx->pc = 0x1C1DCCu;
            goto label_1c1dcc;
        }
    }
    ctx->pc = 0x1C1DBCu;
    // 0x1c1dbc: 0xae030240  sw          $v1, 0x240($s0)
    ctx->pc = 0x1c1dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 3));
    // 0x1c1dc0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1C1DC0u;
    SET_GPR_U32(ctx, 31, 0x1C1DC8u);
    ctx->pc = 0x1C1DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DC0u;
            // 0x1c1dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DC8u; }
        if (ctx->pc != 0x1C1DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DC8u; }
        if (ctx->pc != 0x1C1DC8u) { return; }
    }
    ctx->pc = 0x1C1DC8u;
    // 0x1c1dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1dcc:
    // 0x1c1dcc: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1DCCu;
    {
        const bool branch_taken_0x1c1dcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DCCu;
            // 0x1c1dd0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1dcc) {
            ctx->pc = 0x1C1DDCu;
            goto label_1c1ddc;
        }
    }
    ctx->pc = 0x1C1DD4u;
    // 0x1c1dd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1DD4u;
    {
        const bool branch_taken_0x1c1dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DD4u;
            // 0x1c1dd8: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1dd4) {
            ctx->pc = 0x1C1DE8u;
            goto label_1c1de8;
        }
    }
    ctx->pc = 0x1C1DDCu;
label_1c1ddc:
    // 0x1c1ddc: 0x56220002  bnel        $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1DDCu;
    {
        const bool branch_taken_0x1c1ddc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1ddc) {
            ctx->pc = 0x1C1DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DDCu;
            // 0x1c1de0: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1DE8u;
            goto label_1c1de8;
        }
    }
    ctx->pc = 0x1C1DE4u;
    // 0x1c1de4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1c1de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1c1de8:
    // 0x1c1de8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c1de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c1dec:
    // 0x1c1dec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c1decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1df0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1c1df0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1df8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DF8u;
            // 0x1c1dfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1970u: goto label_1c1970;
            case 0x1C1978u: goto label_1c1978;
            case 0x1C1A18u: goto label_1c1a18;
            case 0x1C1A78u: goto label_1c1a78;
            case 0x1C1A80u: goto label_1c1a80;
            case 0x1C1B10u: goto label_1c1b10;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B98u: goto label_1c1b98;
            case 0x1C1C08u: goto label_1c1c08;
            case 0x1C1C0Cu: goto label_1c1c0c;
            case 0x1C1CB0u: goto label_1c1cb0;
            case 0x1C1CB4u: goto label_1c1cb4;
            case 0x1C1D50u: goto label_1c1d50;
            case 0x1C1D5Cu: goto label_1c1d5c;
            case 0x1C1D78u: goto label_1c1d78;
            case 0x1C1D98u: goto label_1c1d98;
            case 0x1C1DB4u: goto label_1c1db4;
            case 0x1C1DCCu: goto label_1c1dcc;
            case 0x1C1DDCu: goto label_1c1ddc;
            case 0x1C1DE8u: goto label_1c1de8;
            case 0x1C1DECu: goto label_1c1dec;
            case 0x1C1E60u: goto label_1c1e60;
            case 0x1C1E64u: goto label_1c1e64;
            case 0x1C1EF8u: goto label_1c1ef8;
            case 0x1C1F04u: goto label_1c1f04;
            case 0x1C1F24u: goto label_1c1f24;
            case 0x1C1F44u: goto label_1c1f44;
            case 0x1C1F60u: goto label_1c1f60;
            case 0x1C1F78u: goto label_1c1f78;
            case 0x1C1F88u: goto label_1c1f88;
            case 0x1C1F94u: goto label_1c1f94;
            case 0x1C1F98u: goto label_1c1f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1E00u;
    // 0x1c1e00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c1e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c1e04: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1c1e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1c1e08: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1c1e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1c1e0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c1e0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e10: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c1e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1c1e14: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c1e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c1e18: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1c1e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1c1e1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1e20: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x1c1e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c1e24: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1c1e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1c1e28: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C1E28u;
    {
        const bool branch_taken_0x1c1e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E28u;
            // 0x1c1e2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e28) {
            ctx->pc = 0x1C1E64u;
            goto label_1c1e64;
        }
    }
    ctx->pc = 0x1C1E30u;
    // 0x1c1e30: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c1e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c1e34: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1c1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1c1e38: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1c1e38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c1e3c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c1e40: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1c1e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1c1e44: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c1e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c1e48: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1e4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c1e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1e50: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1E50u;
    {
        const bool branch_taken_0x1c1e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C1E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E50u;
            // 0x1c1e54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e50) {
            ctx->pc = 0x1C1E60u;
            goto label_1c1e60;
        }
    }
    ctx->pc = 0x1C1E58u;
    // 0x1c1e58: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c1e5c: 0x0  nop
    ctx->pc = 0x1c1e5cu;
    // NOP
label_1c1e60:
    // 0x1c1e60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e64:
    // 0x1c1e64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c1e68: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1c1e68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1c1e6c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1c1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1c1e70: 0x40f809  jalr        $v0
    ctx->pc = 0x1C1E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1E78u);
        ctx->pc = 0x1C1E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E70u;
            // 0x1c1e74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1E78u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1970u: goto label_1c1970;
            case 0x1C1978u: goto label_1c1978;
            case 0x1C1A18u: goto label_1c1a18;
            case 0x1C1A78u: goto label_1c1a78;
            case 0x1C1A80u: goto label_1c1a80;
            case 0x1C1B10u: goto label_1c1b10;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B98u: goto label_1c1b98;
            case 0x1C1C08u: goto label_1c1c08;
            case 0x1C1C0Cu: goto label_1c1c0c;
            case 0x1C1CB0u: goto label_1c1cb0;
            case 0x1C1CB4u: goto label_1c1cb4;
            case 0x1C1D50u: goto label_1c1d50;
            case 0x1C1D5Cu: goto label_1c1d5c;
            case 0x1C1D78u: goto label_1c1d78;
            case 0x1C1D98u: goto label_1c1d98;
            case 0x1C1DB4u: goto label_1c1db4;
            case 0x1C1DCCu: goto label_1c1dcc;
            case 0x1C1DDCu: goto label_1c1ddc;
            case 0x1C1DE8u: goto label_1c1de8;
            case 0x1C1DECu: goto label_1c1dec;
            case 0x1C1E60u: goto label_1c1e60;
            case 0x1C1E64u: goto label_1c1e64;
            case 0x1C1EF8u: goto label_1c1ef8;
            case 0x1C1F04u: goto label_1c1f04;
            case 0x1C1F24u: goto label_1c1f24;
            case 0x1C1F44u: goto label_1c1f44;
            case 0x1C1F60u: goto label_1c1f60;
            case 0x1C1F78u: goto label_1c1f78;
            case 0x1C1F88u: goto label_1c1f88;
            case 0x1C1F94u: goto label_1c1f94;
            case 0x1C1F98u: goto label_1c1f98;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E78u; }
            if (ctx->pc != 0x1C1E78u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1E78u;
    // 0x1c1e78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c1e78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c1e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e80: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1c1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1c1e84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c1e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e88: 0x24421c58  addiu       $v0, $v0, 0x1C58
    ctx->pc = 0x1c1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7256));
    // 0x1c1e8c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c1e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1e90: 0xc081a18  jal         func_206860
    ctx->pc = 0x1C1E90u;
    SET_GPR_U32(ctx, 31, 0x1C1E98u);
    ctx->pc = 0x1C1E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E90u;
            // 0x1c1e94: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E98u; }
        if (ctx->pc != 0x1C1E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E98u; }
        if (ctx->pc != 0x1C1E98u) { return; }
    }
    ctx->pc = 0x1C1E98u;
    // 0x1c1e98: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1C1E98u;
    {
        const bool branch_taken_0x1c1e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E98u;
            // 0x1c1e9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e98) {
            ctx->pc = 0x1C1F98u;
            goto label_1c1f98;
        }
    }
    ctx->pc = 0x1C1EA0u;
    // 0x1c1ea0: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x1c1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x1c1ea4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c1ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c1ea8: 0x8c50cb94  lw          $s0, -0x346C($v0)
    ctx->pc = 0x1c1ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1c1eac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c1eacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1eb0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1c1eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1c1eb4: 0x8044009b  lb          $a0, 0x9B($v0)
    ctx->pc = 0x1c1eb4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 155)));
    // 0x1c1eb8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c1ebc: 0x8c42e560  lw          $v0, -0x1AA0($v0)
    ctx->pc = 0x1c1ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x1c1ec0: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x1c1ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x1c1ec4: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1C1EC4u;
    {
        const bool branch_taken_0x1c1ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1EC4u;
            // 0x1c1ec8: 0x24910001  addiu       $s1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ec4) {
            ctx->pc = 0x1C1F94u;
            goto label_1c1f94;
        }
    }
    ctx->pc = 0x1C1ECCu;
    // 0x1c1ecc: 0x26031590  addiu       $v1, $s0, 0x1590
    ctx->pc = 0x1c1eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5520));
    // 0x1c1ed0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1c1ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1ed4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c1ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c1ed8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c1edc: 0x10520011  beq         $v0, $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C1EDCu;
    {
        const bool branch_taken_0x1c1edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1c1edc) {
            ctx->pc = 0x1C1F24u;
            goto label_1c1f24;
        }
    }
    ctx->pc = 0x1C1EE4u;
    // 0x1c1ee4: 0x16320004  bne         $s1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1EE4u;
    {
        const bool branch_taken_0x1c1ee4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1C1EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1EE4u;
            // 0x1c1ee8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ee4) {
            ctx->pc = 0x1C1EF8u;
            goto label_1c1ef8;
        }
    }
    ctx->pc = 0x1C1EECu;
    // 0x1c1eec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1EECu;
    {
        const bool branch_taken_0x1c1eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1EECu;
            // 0x1c1ef0: 0xae120238  sw          $s2, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1eec) {
            ctx->pc = 0x1C1F04u;
            goto label_1c1f04;
        }
    }
    ctx->pc = 0x1C1EF4u;
    // 0x1c1ef4: 0x0  nop
    ctx->pc = 0x1c1ef4u;
    // NOP
label_1c1ef8:
    // 0x1c1ef8: 0x56220002  bnel        $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1EF8u;
    {
        const bool branch_taken_0x1c1ef8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1ef8) {
            ctx->pc = 0x1C1EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1EF8u;
            // 0x1c1efc: 0xae120240  sw          $s2, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1F04u;
            goto label_1c1f04;
        }
    }
    ctx->pc = 0x1C1F00u;
    // 0x1c1f00: 0xae12023c  sw          $s2, 0x23C($s0)
    ctx->pc = 0x1c1f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 18));
label_1c1f04:
    // 0x1c1f04: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1c1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1f08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c1f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1f14: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1C1F14u;
    SET_GPR_U32(ctx, 31, 0x1C1F1Cu);
    ctx->pc = 0x1C1F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F14u;
            // 0x1c1f18: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F1Cu; }
        if (ctx->pc != 0x1C1F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F1Cu; }
        if (ctx->pc != 0x1C1F1Cu) { return; }
    }
    ctx->pc = 0x1C1F1Cu;
    // 0x1c1f1c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C1F1Cu;
    {
        const bool branch_taken_0x1c1f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F1Cu;
            // 0x1c1f20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f1c) {
            ctx->pc = 0x1C1F78u;
            goto label_1c1f78;
        }
    }
    ctx->pc = 0x1C1F24u;
label_1c1f24:
    // 0x1c1f24: 0x16320007  bne         $s1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1F24u;
    {
        const bool branch_taken_0x1c1f24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1C1F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F24u;
            // 0x1c1f28: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f24) {
            ctx->pc = 0x1C1F44u;
            goto label_1c1f44;
        }
    }
    ctx->pc = 0x1C1F2Cu;
    // 0x1c1f2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c1f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f34: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1C1F34u;
    SET_GPR_U32(ctx, 31, 0x1C1F3Cu);
    ctx->pc = 0x1C1F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F34u;
            // 0x1c1f38: 0xae020238  sw          $v0, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F3Cu; }
        if (ctx->pc != 0x1C1F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F3Cu; }
        if (ctx->pc != 0x1C1F3Cu) { return; }
    }
    ctx->pc = 0x1C1F3Cu;
    // 0x1c1f3c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C1F3Cu;
    {
        const bool branch_taken_0x1c1f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F3Cu;
            // 0x1c1f40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f3c) {
            ctx->pc = 0x1C1F78u;
            goto label_1c1f78;
        }
    }
    ctx->pc = 0x1C1F44u;
label_1c1f44:
    // 0x1c1f44: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1F44u;
    {
        const bool branch_taken_0x1c1f44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F44u;
            // 0x1c1f48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f44) {
            ctx->pc = 0x1C1F60u;
            goto label_1c1f60;
        }
    }
    ctx->pc = 0x1C1F4Cu;
    // 0x1c1f4c: 0xae11023c  sw          $s1, 0x23C($s0)
    ctx->pc = 0x1c1f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 17));
    // 0x1c1f50: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1C1F50u;
    SET_GPR_U32(ctx, 31, 0x1C1F58u);
    ctx->pc = 0x1C1F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F50u;
            // 0x1c1f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F58u; }
        if (ctx->pc != 0x1C1F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F58u; }
        if (ctx->pc != 0x1C1F58u) { return; }
    }
    ctx->pc = 0x1C1F58u;
    // 0x1c1f58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1F58u;
    {
        const bool branch_taken_0x1c1f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F58u;
            // 0x1c1f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f58) {
            ctx->pc = 0x1C1F78u;
            goto label_1c1f78;
        }
    }
    ctx->pc = 0x1C1F60u;
label_1c1f60:
    // 0x1c1f60: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1F60u;
    {
        const bool branch_taken_0x1c1f60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F60u;
            // 0x1c1f64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f60) {
            ctx->pc = 0x1C1F78u;
            goto label_1c1f78;
        }
    }
    ctx->pc = 0x1C1F68u;
    // 0x1c1f68: 0xae030240  sw          $v1, 0x240($s0)
    ctx->pc = 0x1c1f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 3));
    // 0x1c1f6c: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1C1F6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1F74u);
    ctx->pc = 0x1C1F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F6Cu;
            // 0x1c1f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F74u; }
        if (ctx->pc != 0x1C1F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F74u; }
        if (ctx->pc != 0x1C1F74u) { return; }
    }
    ctx->pc = 0x1C1F74u;
    // 0x1c1f74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1f78:
    // 0x1c1f78: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1F78u;
    {
        const bool branch_taken_0x1c1f78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F78u;
            // 0x1c1f7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f78) {
            ctx->pc = 0x1C1F88u;
            goto label_1c1f88;
        }
    }
    ctx->pc = 0x1C1F80u;
    // 0x1c1f80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1F80u;
    {
        const bool branch_taken_0x1c1f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F80u;
            // 0x1c1f84: 0xae120028  sw          $s2, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f80) {
            ctx->pc = 0x1C1F94u;
            goto label_1c1f94;
        }
    }
    ctx->pc = 0x1C1F88u;
label_1c1f88:
    // 0x1c1f88: 0x56220002  bnel        $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1F88u;
    {
        const bool branch_taken_0x1c1f88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1f88) {
            ctx->pc = 0x1C1F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F88u;
            // 0x1c1f8c: 0xae120030  sw          $s2, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1F94u;
            goto label_1c1f94;
        }
    }
    ctx->pc = 0x1C1F90u;
    // 0x1c1f90: 0xae12002c  sw          $s2, 0x2C($s0)
    ctx->pc = 0x1c1f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
label_1c1f94:
    // 0x1c1f94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c1f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f98:
    // 0x1c1f98: 0xc081a44  jal         func_206910
    ctx->pc = 0x1C1F98u;
    SET_GPR_U32(ctx, 31, 0x1C1FA0u);
    ctx->pc = 0x1C1F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F98u;
            // 0x1c1f9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206910u;
    if (runtime->hasFunction(0x206910u)) {
        auto targetFn = runtime->lookupFunction(0x206910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1FA0u; }
        if (ctx->pc != 0x1C1FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206910_0x206910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1FA0u; }
        if (ctx->pc != 0x1C1FA0u) { return; }
    }
    ctx->pc = 0x1C1FA0u;
    // 0x1c1fa0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c1fa4: 0xa662002a  sh          $v0, 0x2A($s3)
    ctx->pc = 0x1c1fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c1fa8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1c1fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1fac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c1facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1fb0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c1fb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1fb4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1c1fb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1fb8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1c1fb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1FC0u;
            // 0x1c1fc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1970u: goto label_1c1970;
            case 0x1C1978u: goto label_1c1978;
            case 0x1C1A18u: goto label_1c1a18;
            case 0x1C1A78u: goto label_1c1a78;
            case 0x1C1A80u: goto label_1c1a80;
            case 0x1C1B10u: goto label_1c1b10;
            case 0x1C1B14u: goto label_1c1b14;
            case 0x1C1B98u: goto label_1c1b98;
            case 0x1C1C08u: goto label_1c1c08;
            case 0x1C1C0Cu: goto label_1c1c0c;
            case 0x1C1CB0u: goto label_1c1cb0;
            case 0x1C1CB4u: goto label_1c1cb4;
            case 0x1C1D50u: goto label_1c1d50;
            case 0x1C1D5Cu: goto label_1c1d5c;
            case 0x1C1D78u: goto label_1c1d78;
            case 0x1C1D98u: goto label_1c1d98;
            case 0x1C1DB4u: goto label_1c1db4;
            case 0x1C1DCCu: goto label_1c1dcc;
            case 0x1C1DDCu: goto label_1c1ddc;
            case 0x1C1DE8u: goto label_1c1de8;
            case 0x1C1DECu: goto label_1c1dec;
            case 0x1C1E60u: goto label_1c1e60;
            case 0x1C1E64u: goto label_1c1e64;
            case 0x1C1EF8u: goto label_1c1ef8;
            case 0x1C1F04u: goto label_1c1f04;
            case 0x1C1F24u: goto label_1c1f24;
            case 0x1C1F44u: goto label_1c1f44;
            case 0x1C1F60u: goto label_1c1f60;
            case 0x1C1F78u: goto label_1c1f78;
            case 0x1C1F88u: goto label_1c1f88;
            case 0x1C1F94u: goto label_1c1f94;
            case 0x1C1F98u: goto label_1c1f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1FC8u;
}
