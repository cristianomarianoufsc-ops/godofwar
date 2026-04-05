#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B570
// Address: 0x14b570 - 0x14b680
void sub_0014B570_0x14b570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B570_0x14b570");
#endif

    ctx->pc = 0x14b570u;

    // 0x14b570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b574: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14b574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14b578: 0x3c10002b  lui         $s0, 0x2B
    ctx->pc = 0x14b578u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)43 << 16));
    // 0x14b57c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b580: 0x26101c60  addiu       $s0, $s0, 0x1C60
    ctx->pc = 0x14b580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7264));
    // 0x14b584: 0xc05f9b8  jal         func_17E6E0
    ctx->pc = 0x14B584u;
    SET_GPR_U32(ctx, 31, 0x14B58Cu);
    ctx->pc = 0x14B588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B584u;
            // 0x14b588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6E0u;
    if (runtime->hasFunction(0x17E6E0u)) {
        auto targetFn = runtime->lookupFunction(0x17E6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B58Cu; }
        if (ctx->pc != 0x14B58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6e0_0x17e708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B58Cu; }
        if (ctx->pc != 0x14B58Cu) { return; }
    }
    ctx->pc = 0x14B58Cu;
    // 0x14b58c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x14b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x14b590: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x14b590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x14b594: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x14b594u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x14b598: 0xac62c074  sw          $v0, -0x3F8C($v1)
    ctx->pc = 0x14b598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294951028), GPR_U32(ctx, 2));
    // 0x14b59c: 0x24a51c70  addiu       $a1, $a1, 0x1C70
    ctx->pc = 0x14b59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7280));
    // 0x14b5a0: 0x24c6c018  addiu       $a2, $a2, -0x3FE8
    ctx->pc = 0x14b5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950936));
    // 0x14b5a4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x14B5A4u;
    SET_GPR_U32(ctx, 31, 0x14B5ACu);
    ctx->pc = 0x14B5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5A4u;
            // 0x14b5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5ACu; }
        if (ctx->pc != 0x14B5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5ACu; }
        if (ctx->pc != 0x14B5ACu) { return; }
    }
    ctx->pc = 0x14B5ACu;
    // 0x14b5ac: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x14b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x14b5b0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x14b5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x14b5b4: 0x24a51c80  addiu       $a1, $a1, 0x1C80
    ctx->pc = 0x14b5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7296));
    // 0x14b5b8: 0x24c6c01c  addiu       $a2, $a2, -0x3FE4
    ctx->pc = 0x14b5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950940));
    // 0x14b5bc: 0xc05f7e4  jal         func_17DF90
    ctx->pc = 0x14B5BCu;
    SET_GPR_U32(ctx, 31, 0x14B5C4u);
    ctx->pc = 0x14B5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5BCu;
            // 0x14b5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DF90u;
    if (runtime->hasFunction(0x17DF90u)) {
        auto targetFn = runtime->lookupFunction(0x17DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5C4u; }
        if (ctx->pc != 0x14B5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DF90_0x17df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5C4u; }
        if (ctx->pc != 0x14B5C4u) { return; }
    }
    ctx->pc = 0x14B5C4u;
    // 0x14b5c4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x14b5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x14b5c8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x14b5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x14b5cc: 0x24a51c90  addiu       $a1, $a1, 0x1C90
    ctx->pc = 0x14b5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7312));
    // 0x14b5d0: 0x24c6c01d  addiu       $a2, $a2, -0x3FE3
    ctx->pc = 0x14b5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950941));
    // 0x14b5d4: 0xc05f7e4  jal         func_17DF90
    ctx->pc = 0x14B5D4u;
    SET_GPR_U32(ctx, 31, 0x14B5DCu);
    ctx->pc = 0x14B5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5D4u;
            // 0x14b5d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DF90u;
    if (runtime->hasFunction(0x17DF90u)) {
        auto targetFn = runtime->lookupFunction(0x17DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5DCu; }
        if (ctx->pc != 0x14B5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DF90_0x17df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5DCu; }
        if (ctx->pc != 0x14B5DCu) { return; }
    }
    ctx->pc = 0x14B5DCu;
    // 0x14b5dc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x14b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x14b5e0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x14b5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x14b5e4: 0x24a51ca8  addiu       $a1, $a1, 0x1CA8
    ctx->pc = 0x14b5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7336));
    // 0x14b5e8: 0x24c6c01e  addiu       $a2, $a2, -0x3FE2
    ctx->pc = 0x14b5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950942));
    // 0x14b5ec: 0xc05f7e4  jal         func_17DF90
    ctx->pc = 0x14B5ECu;
    SET_GPR_U32(ctx, 31, 0x14B5F4u);
    ctx->pc = 0x14B5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5ECu;
            // 0x14b5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DF90u;
    if (runtime->hasFunction(0x17DF90u)) {
        auto targetFn = runtime->lookupFunction(0x17DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5F4u; }
        if (ctx->pc != 0x14B5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DF90_0x17df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5F4u; }
        if (ctx->pc != 0x14B5F4u) { return; }
    }
    ctx->pc = 0x14B5F4u;
    // 0x14b5f4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x14b5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x14b5f8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x14b5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x14b5fc: 0x24a51cc0  addiu       $a1, $a1, 0x1CC0
    ctx->pc = 0x14b5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7360));
    // 0x14b600: 0x24c6c020  addiu       $a2, $a2, -0x3FE0
    ctx->pc = 0x14b600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950944));
    // 0x14b604: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x14B604u;
    SET_GPR_U32(ctx, 31, 0x14B60Cu);
    ctx->pc = 0x14B608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B604u;
            // 0x14b608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B60Cu; }
        if (ctx->pc != 0x14B60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B60Cu; }
        if (ctx->pc != 0x14B60Cu) { return; }
    }
    ctx->pc = 0x14B60Cu;
    // 0x14b60c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x14b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x14b610: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x14b610u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x14b614: 0x24a51cd8  addiu       $a1, $a1, 0x1CD8
    ctx->pc = 0x14b614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7384));
    // 0x14b618: 0x24c6c024  addiu       $a2, $a2, -0x3FDC
    ctx->pc = 0x14b618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950948));
    // 0x14b61c: 0xc05f7e4  jal         func_17DF90
    ctx->pc = 0x14B61Cu;
    SET_GPR_U32(ctx, 31, 0x14B624u);
    ctx->pc = 0x14B620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B61Cu;
            // 0x14b620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DF90u;
    if (runtime->hasFunction(0x17DF90u)) {
        auto targetFn = runtime->lookupFunction(0x17DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B624u; }
        if (ctx->pc != 0x14B624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DF90_0x17df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B624u; }
        if (ctx->pc != 0x14B624u) { return; }
    }
    ctx->pc = 0x14B624u;
    // 0x14b624: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x14b624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x14b628: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x14b628u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x14b62c: 0x24a51ce8  addiu       $a1, $a1, 0x1CE8
    ctx->pc = 0x14b62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7400));
    // 0x14b630: 0x24c6c025  addiu       $a2, $a2, -0x3FDB
    ctx->pc = 0x14b630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950949));
    // 0x14b634: 0xc05f7e4  jal         func_17DF90
    ctx->pc = 0x14B634u;
    SET_GPR_U32(ctx, 31, 0x14B63Cu);
    ctx->pc = 0x14B638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B634u;
            // 0x14b638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DF90u;
    if (runtime->hasFunction(0x17DF90u)) {
        auto targetFn = runtime->lookupFunction(0x17DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B63Cu; }
        if (ctx->pc != 0x14B63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DF90_0x17df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B63Cu; }
        if (ctx->pc != 0x14B63Cu) { return; }
    }
    ctx->pc = 0x14B63Cu;
    // 0x14b63c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x14b63cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x14b640: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x14b640u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x14b644: 0x24a51d00  addiu       $a1, $a1, 0x1D00
    ctx->pc = 0x14b644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7424));
    // 0x14b648: 0x24c6c026  addiu       $a2, $a2, -0x3FDA
    ctx->pc = 0x14b648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950950));
    // 0x14b64c: 0xc05f7e4  jal         func_17DF90
    ctx->pc = 0x14B64Cu;
    SET_GPR_U32(ctx, 31, 0x14B654u);
    ctx->pc = 0x14B650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B64Cu;
            // 0x14b650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DF90u;
    if (runtime->hasFunction(0x17DF90u)) {
        auto targetFn = runtime->lookupFunction(0x17DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B654u; }
        if (ctx->pc != 0x14B654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DF90_0x17df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B654u; }
        if (ctx->pc != 0x14B654u) { return; }
    }
    ctx->pc = 0x14B654u;
    // 0x14b654: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x14b654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x14b658: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x14b658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x14b65c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b660: 0x24a51d18  addiu       $a1, $a1, 0x1D18
    ctx->pc = 0x14b660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7448));
    // 0x14b664: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x14B664u;
    SET_GPR_U32(ctx, 31, 0x14B66Cu);
    ctx->pc = 0x14B668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B664u;
            // 0x14b668: 0x24c6c028  addiu       $a2, $a2, -0x3FD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B66Cu; }
        if (ctx->pc != 0x14B66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B66Cu; }
        if (ctx->pc != 0x14B66Cu) { return; }
    }
    ctx->pc = 0x14B66Cu;
    // 0x14b66c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14b66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b674: 0x3e00008  jr          $ra
    ctx->pc = 0x14B674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B674u;
            // 0x14b678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B67Cu;
    // 0x14b67c: 0x0  nop
    ctx->pc = 0x14b67cu;
    // NOP
}
