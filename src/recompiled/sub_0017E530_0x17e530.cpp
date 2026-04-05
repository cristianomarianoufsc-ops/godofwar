#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E530
// Address: 0x17e530 - 0x17e690
void sub_0017E530_0x17e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E530_0x17e530");
#endif

    ctx->pc = 0x17e530u;

    // 0x17e530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17e534: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17e534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17e538: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17e538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17e53c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17e540: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x17e540u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x17e544: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17e544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17e548: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x17e548u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x17e54c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e550: 0xc04f824  jal         func_13E090
    ctx->pc = 0x17E550u;
    SET_GPR_U32(ctx, 31, 0x17E558u);
    ctx->pc = 0x17E554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E550u;
            // 0x17e554: 0x3c13002a  lui         $s3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E558u; }
        if (ctx->pc != 0x17E558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E558u; }
        if (ctx->pc != 0x17E558u) { return; }
    }
    ctx->pc = 0x17E558u;
    // 0x17e558: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x17e558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x17e55c: 0x3c05000b  lui         $a1, 0xB
    ctx->pc = 0x17e55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11 << 16));
    // 0x17e560: 0x8c64f198  lw          $a0, -0xE68($v1)
    ctx->pc = 0x17e560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963608)));
    // 0x17e564: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e568: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x17e568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17e56c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x17E56Cu;
    SET_GPR_U32(ctx, 31, 0x17E574u);
    ctx->pc = 0x17E570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E56Cu;
            // 0x17e570: 0x34a59800  ori         $a1, $a1, 0x9800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38912);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E574u; }
        if (ctx->pc != 0x17E574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E574u; }
        if (ctx->pc != 0x17E574u) { return; }
    }
    ctx->pc = 0x17E574u;
    // 0x17e574: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x17e574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x17e578: 0x3c05000b  lui         $a1, 0xB
    ctx->pc = 0x17e578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11 << 16));
    // 0x17e57c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x17e57cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17e580: 0x24c62ca0  addiu       $a2, $a2, 0x2CA0
    ctx->pc = 0x17e580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11424));
    // 0x17e584: 0x34a59800  ori         $a1, $a1, 0x9800
    ctx->pc = 0x17e584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38912);
    // 0x17e588: 0xc04f5c4  jal         func_13D710
    ctx->pc = 0x17E588u;
    SET_GPR_U32(ctx, 31, 0x17E590u);
    ctx->pc = 0x17E58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E588u;
            // 0x17e58c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D710u;
    if (runtime->hasFunction(0x13D710u)) {
        auto targetFn = runtime->lookupFunction(0x13D710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E590u; }
        if (ctx->pc != 0x17E590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13d710_0x13d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E590u; }
        if (ctx->pc != 0x17E590u) { return; }
    }
    ctx->pc = 0x17E590u;
    // 0x17e590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e594: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x17E594u;
    SET_GPR_U32(ctx, 31, 0x17E59Cu);
    ctx->pc = 0x17E598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E594u;
            // 0x17e598: 0xae42ec4c  sw          $v0, -0x13B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294962252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E59Cu; }
        if (ctx->pc != 0x17E59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E59Cu; }
        if (ctx->pc != 0x17E59Cu) { return; }
    }
    ctx->pc = 0x17E59Cu;
    // 0x17e59c: 0xc04f856  jal         func_13E158
    ctx->pc = 0x17E59Cu;
    SET_GPR_U32(ctx, 31, 0x17E5A4u);
    ctx->pc = 0x17E5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E59Cu;
            // 0x17e5a0: 0x8e44ec4c  lw          $a0, -0x13B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5A4u; }
        if (ctx->pc != 0x17E5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5A4u; }
        if (ctx->pc != 0x17E5A4u) { return; }
    }
    ctx->pc = 0x17E5A4u;
    // 0x17e5a4: 0xc05fb2a  jal         func_17ECA8
    ctx->pc = 0x17E5A4u;
    SET_GPR_U32(ctx, 31, 0x17E5ACu);
    ctx->pc = 0x17ECA8u;
    if (runtime->hasFunction(0x17ECA8u)) {
        auto targetFn = runtime->lookupFunction(0x17ECA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5ACu; }
        if (ctx->pc != 0x17E5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ECA8_0x17eca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5ACu; }
        if (ctx->pc != 0x17E5ACu) { return; }
    }
    ctx->pc = 0x17E5ACu;
    // 0x17e5ac: 0xc05fc72  jal         func_17F1C8
    ctx->pc = 0x17E5ACu;
    SET_GPR_U32(ctx, 31, 0x17E5B4u);
    ctx->pc = 0x17F1C8u;
    if (runtime->hasFunction(0x17F1C8u)) {
        auto targetFn = runtime->lookupFunction(0x17F1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5B4u; }
        if (ctx->pc != 0x17E5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F1C8_0x17f1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5B4u; }
        if (ctx->pc != 0x17E5B4u) { return; }
    }
    ctx->pc = 0x17E5B4u;
    // 0x17e5b4: 0xc05fa56  jal         func_17E958
    ctx->pc = 0x17E5B4u;
    SET_GPR_U32(ctx, 31, 0x17E5BCu);
    ctx->pc = 0x17E5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E5B4u;
            // 0x17e5b8: 0xae20c74c  sw          $zero, -0x38B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294952780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E958u;
    if (runtime->hasFunction(0x17E958u)) {
        auto targetFn = runtime->lookupFunction(0x17E958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5BCu; }
        if (ctx->pc != 0x17E5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E958_0x17e958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5BCu; }
        if (ctx->pc != 0x17E5BCu) { return; }
    }
    ctx->pc = 0x17E5BCu;
    // 0x17e5bc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17E5BCu;
    SET_GPR_U32(ctx, 31, 0x17E5C4u);
    ctx->pc = 0x17E5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E5BCu;
            // 0x17e5c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5C4u; }
        if (ctx->pc != 0x17E5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5C4u; }
        if (ctx->pc != 0x17E5C4u) { return; }
    }
    ctx->pc = 0x17E5C4u;
    // 0x17e5c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e5c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e5d0: 0xc060284  jal         func_180A10
    ctx->pc = 0x17E5D0u;
    SET_GPR_U32(ctx, 31, 0x17E5D8u);
    ctx->pc = 0x17E5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E5D0u;
            // 0x17e5d4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5D8u; }
        if (ctx->pc != 0x17E5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5D8u; }
        if (ctx->pc != 0x17E5D8u) { return; }
    }
    ctx->pc = 0x17E5D8u;
    // 0x17e5d8: 0x8e24c74c  lw          $a0, -0x38B4($s1)
    ctx->pc = 0x17e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952780)));
    // 0x17e5dc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17e5e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e5e4: 0x244203d0  addiu       $v0, $v0, 0x3D0
    ctx->pc = 0x17e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
    // 0x17e5e8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17e5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17e5ec: 0xa603001c  sh          $v1, 0x1C($s0)
    ctx->pc = 0x17e5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x17e5f0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x17e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x17e5f4: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x17e5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x17e5f8: 0xa6000022  sh          $zero, 0x22($s0)
    ctx->pc = 0x17e5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x17e5fc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x17e5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x17e600: 0xa603001e  sh          $v1, 0x1E($s0)
    ctx->pc = 0x17e600u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x17e604: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x17e604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x17e608: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E608u;
    {
        const bool branch_taken_0x17e608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E608u;
            // 0x17e60c: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e608) {
            ctx->pc = 0x17E618u;
            goto label_17e618;
        }
    }
    ctx->pc = 0x17E610u;
    // 0x17e610: 0xc05fb38  jal         func_17ECE0
    ctx->pc = 0x17E610u;
    SET_GPR_U32(ctx, 31, 0x17E618u);
    ctx->pc = 0x17E614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E610u;
            // 0x17e614: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ECE0u;
    if (runtime->hasFunction(0x17ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x17ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E618u; }
        if (ctx->pc != 0x17E618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ECE0_0x17ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E618u; }
        if (ctx->pc != 0x17E618u) { return; }
    }
    ctx->pc = 0x17E618u;
label_17e618:
    // 0x17e618: 0x8e44ec4c  lw          $a0, -0x13B4($s2)
    ctx->pc = 0x17e618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962252)));
    // 0x17e61c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x17e61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17e620: 0xae70c740  sw          $s0, -0x38C0($s3)
    ctx->pc = 0x17e620u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294952768), GPR_U32(ctx, 16));
    // 0x17e624: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x17E624u;
    SET_GPR_U32(ctx, 31, 0x17E62Cu);
    ctx->pc = 0x17E628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E624u;
            // 0x17e628: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E62Cu; }
        if (ctx->pc != 0x17E62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E62Cu; }
        if (ctx->pc != 0x17E62Cu) { return; }
    }
    ctx->pc = 0x17E62Cu;
    // 0x17e62c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17e62cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17e630: 0xae02c744  sw          $v0, -0x38BC($s0)
    ctx->pc = 0x17e630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952772), GPR_U32(ctx, 2));
    // 0x17e634: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17e634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17e638: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17e638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17e63c: 0xc04f860  jal         func_13E180
    ctx->pc = 0x17E63Cu;
    SET_GPR_U32(ctx, 31, 0x17E644u);
    ctx->pc = 0x17E640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E63Cu;
            // 0x17e640: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E644u; }
        if (ctx->pc != 0x17E644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E644u; }
        if (ctx->pc != 0x17E644u) { return; }
    }
    ctx->pc = 0x17E644u;
    // 0x17e644: 0x8e04c744  lw          $a0, -0x38BC($s0)
    ctx->pc = 0x17e644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952772)));
    // 0x17e648: 0xc060342  jal         func_180D08
    ctx->pc = 0x17E648u;
    SET_GPR_U32(ctx, 31, 0x17E650u);
    ctx->pc = 0x17E64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E648u;
            // 0x17e64c: 0x8e65c740  lw          $a1, -0x38C0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952768)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180D08u;
    if (runtime->hasFunction(0x180D08u)) {
        auto targetFn = runtime->lookupFunction(0x180D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E650u; }
        if (ctx->pc != 0x17E650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D08_0x180d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E650u; }
        if (ctx->pc != 0x17E650u) { return; }
    }
    ctx->pc = 0x17E650u;
    // 0x17e650: 0x8e04c744  lw          $a0, -0x38BC($s0)
    ctx->pc = 0x17e650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952772)));
    // 0x17e654: 0xc060336  jal         func_180CD8
    ctx->pc = 0x17E654u;
    SET_GPR_U32(ctx, 31, 0x17E65Cu);
    ctx->pc = 0x17E658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E654u;
            // 0x17e658: 0x8e65c740  lw          $a1, -0x38C0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952768)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD8u;
    if (runtime->hasFunction(0x180CD8u)) {
        auto targetFn = runtime->lookupFunction(0x180CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E65Cu; }
        if (ctx->pc != 0x17E65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD8_0x180cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E65Cu; }
        if (ctx->pc != 0x17E65Cu) { return; }
    }
    ctx->pc = 0x17E65Cu;
    // 0x17e65c: 0xc06041a  jal         func_181068
    ctx->pc = 0x17E65Cu;
    SET_GPR_U32(ctx, 31, 0x17E664u);
    ctx->pc = 0x181068u;
    if (runtime->hasFunction(0x181068u)) {
        auto targetFn = runtime->lookupFunction(0x181068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E664u; }
        if (ctx->pc != 0x17E664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_181068_0x1810b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E664u; }
        if (ctx->pc != 0x17E664u) { return; }
    }
    ctx->pc = 0x17E664u;
    // 0x17e664: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17e664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17e668: 0xc05f9a4  jal         func_17E690
    ctx->pc = 0x17E668u;
    SET_GPR_U32(ctx, 31, 0x17E670u);
    ctx->pc = 0x17E66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E668u;
            // 0x17e66c: 0x24841800  addiu       $a0, $a0, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E690u;
    if (runtime->hasFunction(0x17E690u)) {
        auto targetFn = runtime->lookupFunction(0x17E690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E670u; }
        if (ctx->pc != 0x17E670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e690_0x17e6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E670u; }
        if (ctx->pc != 0x17E670u) { return; }
    }
    ctx->pc = 0x17E670u;
    // 0x17e670: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17e670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e674: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17e674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e678: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17e678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e67c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17e67cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e684: 0x3e00008  jr          $ra
    ctx->pc = 0x17E684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E684u;
            // 0x17e688: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E618u: goto label_17e618;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E68Cu;
    // 0x17e68c: 0x0  nop
    ctx->pc = 0x17e68cu;
    // NOP
}
