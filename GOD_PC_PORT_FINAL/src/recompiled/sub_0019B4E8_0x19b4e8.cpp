#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019B4E8
// Address: 0x19b4e8 - 0x19b788
void sub_0019B4E8_0x19b4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B4E8_0x19b4e8");
#endif

    ctx->pc = 0x19b4e8u;

    // 0x19b4e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19b4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19b4ec: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x19b4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x19b4f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19b4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b4f4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x19b4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x19b4f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x19b4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x19b4fc: 0xc090e94  jal         func_243A50
    ctx->pc = 0x19B4FCu;
    SET_GPR_U32(ctx, 31, 0x19B504u);
    ctx->pc = 0x19B500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4FCu;
            // 0x19b500: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243A50u;
    if (runtime->hasFunction(0x243A50u)) {
        auto targetFn = runtime->lookupFunction(0x243A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B504u; }
        if (ctx->pc != 0x19B504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243A50_0x243a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B504u; }
        if (ctx->pc != 0x19B504u) { return; }
    }
    ctx->pc = 0x19B504u;
    // 0x19b504: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x19B504u;
    SET_GPR_U32(ctx, 31, 0x19B50Cu);
    ctx->pc = 0x19B508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B504u;
            // 0x19b508: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B50Cu; }
        if (ctx->pc != 0x19B50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B50Cu; }
        if (ctx->pc != 0x19B50Cu) { return; }
    }
    ctx->pc = 0x19B50Cu;
    // 0x19b50c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x19B50Cu;
    SET_GPR_U32(ctx, 31, 0x19B514u);
    ctx->pc = 0x19B510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B50Cu;
            // 0x19b510: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B514u; }
        if (ctx->pc != 0x19B514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B514u; }
        if (ctx->pc != 0x19B514u) { return; }
    }
    ctx->pc = 0x19B514u;
    // 0x19b514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b518: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19b518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19b51c: 0x24a53a40  addiu       $a1, $a1, 0x3A40
    ctx->pc = 0x19b51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14912));
    // 0x19b520: 0xc060978  jal         func_1825E0
    ctx->pc = 0x19B520u;
    SET_GPR_U32(ctx, 31, 0x19B528u);
    ctx->pc = 0x19B524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B520u;
            // 0x19b524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B528u; }
        if (ctx->pc != 0x19B528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B528u; }
        if (ctx->pc != 0x19B528u) { return; }
    }
    ctx->pc = 0x19B528u;
    // 0x19b528: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x19b528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x19b52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b530: 0x24429dd0  addiu       $v0, $v0, -0x6230
    ctx->pc = 0x19b530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942160));
    // 0x19b534: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x19B534u;
    SET_GPR_U32(ctx, 31, 0x19B53Cu);
    ctx->pc = 0x19B538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B534u;
            // 0x19b538: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B53Cu; }
        if (ctx->pc != 0x19B53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B53Cu; }
        if (ctx->pc != 0x19B53Cu) { return; }
    }
    ctx->pc = 0x19B53Cu;
    // 0x19b53c: 0x3c05e7a9  lui         $a1, 0xE7A9
    ctx->pc = 0x19b53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59305 << 16));
    // 0x19b540: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b544: 0x27a70042  addiu       $a3, $sp, 0x42
    ctx->pc = 0x19b544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
    // 0x19b548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b54c: 0xae30c9ac  sw          $s0, -0x3654($s1)
    ctx->pc = 0x19b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953388), GPR_U32(ctx, 16));
    // 0x19b550: 0x34a53efa  ori         $a1, $a1, 0x3EFA
    ctx->pc = 0x19b550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16122);
    // 0x19b554: 0xc06081c  jal         func_182070
    ctx->pc = 0x19B554u;
    SET_GPR_U32(ctx, 31, 0x19B55Cu);
    ctx->pc = 0x19B558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B554u;
            // 0x19b558: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B55Cu; }
        if (ctx->pc != 0x19B55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B55Cu; }
        if (ctx->pc != 0x19B55Cu) { return; }
    }
    ctx->pc = 0x19B55Cu;
    // 0x19b55c: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b560: 0x3c0551f0  lui         $a1, 0x51F0
    ctx->pc = 0x19b560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20976 << 16));
    // 0x19b564: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b568: 0x27a7005a  addiu       $a3, $sp, 0x5A
    ctx->pc = 0x19b568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 90));
    // 0x19b56c: 0x34a5e2e1  ori         $a1, $a1, 0xE2E1
    ctx->pc = 0x19b56cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58081);
    // 0x19b570: 0xc06081c  jal         func_182070
    ctx->pc = 0x19B570u;
    SET_GPR_U32(ctx, 31, 0x19B578u);
    ctx->pc = 0x19B574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B570u;
            // 0x19b574: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B578u; }
        if (ctx->pc != 0x19B578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B578u; }
        if (ctx->pc != 0x19B578u) { return; }
    }
    ctx->pc = 0x19B578u;
    // 0x19b578: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x19b578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19b57c: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b580: 0x3c058eab  lui         $a1, 0x8EAB
    ctx->pc = 0x19b580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36523 << 16));
    // 0x19b584: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b588: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19b588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b58c: 0x34a520cb  ori         $a1, $a1, 0x20CB
    ctx->pc = 0x19b58cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8395);
    // 0x19b590: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19B590u;
    SET_GPR_U32(ctx, 31, 0x19B598u);
    ctx->pc = 0x19B594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B590u;
            // 0x19b594: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B598u; }
        if (ctx->pc != 0x19B598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B598u; }
        if (ctx->pc != 0x19B598u) { return; }
    }
    ctx->pc = 0x19B598u;
    // 0x19b598: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b59c: 0x3c056511  lui         $a1, 0x6511
    ctx->pc = 0x19b59cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25873 << 16));
    // 0x19b5a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19b5a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5a8: 0x34a58923  ori         $a1, $a1, 0x8923
    ctx->pc = 0x19b5a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35107);
    // 0x19b5ac: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19B5ACu;
    SET_GPR_U32(ctx, 31, 0x19B5B4u);
    ctx->pc = 0x19B5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5ACu;
            // 0x19b5b0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5B4u; }
        if (ctx->pc != 0x19B5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5B4u; }
        if (ctx->pc != 0x19B5B4u) { return; }
    }
    ctx->pc = 0x19B5B4u;
    // 0x19b5b4: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b5b8: 0x3c0571bf  lui         $a1, 0x71BF
    ctx->pc = 0x19b5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29119 << 16));
    // 0x19b5bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19b5c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5c4: 0x34a5a948  ori         $a1, $a1, 0xA948
    ctx->pc = 0x19b5c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43336);
    // 0x19b5c8: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19B5C8u;
    SET_GPR_U32(ctx, 31, 0x19B5D0u);
    ctx->pc = 0x19B5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5C8u;
            // 0x19b5cc: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5D0u; }
        if (ctx->pc != 0x19B5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5D0u; }
        if (ctx->pc != 0x19B5D0u) { return; }
    }
    ctx->pc = 0x19B5D0u;
    // 0x19b5d0: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b5d4: 0x3c05c6dd  lui         $a1, 0xC6DD
    ctx->pc = 0x19b5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50909 << 16));
    // 0x19b5d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5dc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19b5dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5e0: 0x34a546a4  ori         $a1, $a1, 0x46A4
    ctx->pc = 0x19b5e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18084);
    // 0x19b5e4: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19B5E4u;
    SET_GPR_U32(ctx, 31, 0x19B5ECu);
    ctx->pc = 0x19B5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5E4u;
            // 0x19b5e8: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5ECu; }
        if (ctx->pc != 0x19B5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5ECu; }
        if (ctx->pc != 0x19B5ECu) { return; }
    }
    ctx->pc = 0x19B5ECu;
    // 0x19b5ec: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b5f0: 0x3c05a6de  lui         $a1, 0xA6DE
    ctx->pc = 0x19b5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42718 << 16));
    // 0x19b5f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19b5f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5fc: 0x34a559b7  ori         $a1, $a1, 0x59B7
    ctx->pc = 0x19b5fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22967);
    // 0x19b600: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19B600u;
    SET_GPR_U32(ctx, 31, 0x19B608u);
    ctx->pc = 0x19B604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B600u;
            // 0x19b604: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B608u; }
        if (ctx->pc != 0x19B608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B608u; }
        if (ctx->pc != 0x19B608u) { return; }
    }
    ctx->pc = 0x19B608u;
    // 0x19b608: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b60c: 0x3c05989c  lui         $a1, 0x989C
    ctx->pc = 0x19b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39068 << 16));
    // 0x19b610: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b614: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19b614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b618: 0x34a59115  ori         $a1, $a1, 0x9115
    ctx->pc = 0x19b618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37141);
    // 0x19b61c: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19B61Cu;
    SET_GPR_U32(ctx, 31, 0x19B624u);
    ctx->pc = 0x19B620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B61Cu;
            // 0x19b620: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B624u; }
        if (ctx->pc != 0x19B624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B624u; }
        if (ctx->pc != 0x19B624u) { return; }
    }
    ctx->pc = 0x19B624u;
    // 0x19b624: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b628: 0x3c05e4b8  lui         $a1, 0xE4B8
    ctx->pc = 0x19b628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58552 << 16));
    // 0x19b62c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b630: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19b630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b634: 0x34a583e0  ori         $a1, $a1, 0x83E0
    ctx->pc = 0x19b634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33760);
    // 0x19b638: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19B638u;
    SET_GPR_U32(ctx, 31, 0x19B640u);
    ctx->pc = 0x19B63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B638u;
            // 0x19b63c: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B640u; }
        if (ctx->pc != 0x19B640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B640u; }
        if (ctx->pc != 0x19B640u) { return; }
    }
    ctx->pc = 0x19B640u;
    // 0x19b640: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b644: 0x3c05f134  lui         $a1, 0xF134
    ctx->pc = 0x19b644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61748 << 16));
    // 0x19b648: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b64c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19b64cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b650: 0x34a5f284  ori         $a1, $a1, 0xF284
    ctx->pc = 0x19b650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62084);
    // 0x19b654: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19B654u;
    SET_GPR_U32(ctx, 31, 0x19B65Cu);
    ctx->pc = 0x19B658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B654u;
            // 0x19b658: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B65Cu; }
        if (ctx->pc != 0x19B65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B65Cu; }
        if (ctx->pc != 0x19B65Cu) { return; }
    }
    ctx->pc = 0x19B65Cu;
    // 0x19b65c: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b660: 0x3c05c5bb  lui         $a1, 0xC5BB
    ctx->pc = 0x19b660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50619 << 16));
    // 0x19b664: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b668: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x19b668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x19b66c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19b66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b670: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19B670u;
    SET_GPR_U32(ctx, 31, 0x19B678u);
    ctx->pc = 0x19B674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B670u;
            // 0x19b674: 0x34a59615  ori         $a1, $a1, 0x9615 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38421);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B678u; }
        if (ctx->pc != 0x19B678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B678u; }
        if (ctx->pc != 0x19B678u) { return; }
    }
    ctx->pc = 0x19B678u;
    // 0x19b678: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b67c: 0x3c0579d9  lui         $a1, 0x79D9
    ctx->pc = 0x19b67cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31193 << 16));
    // 0x19b680: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b684: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x19b684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x19b688: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19B688u;
    SET_GPR_U32(ctx, 31, 0x19B690u);
    ctx->pc = 0x19B68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B688u;
            // 0x19b68c: 0x34a50a02  ori         $a1, $a1, 0xA02 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2562);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B690u; }
        if (ctx->pc != 0x19B690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B690u; }
        if (ctx->pc != 0x19B690u) { return; }
    }
    ctx->pc = 0x19B690u;
    // 0x19b690: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b694: 0x3c0579d9  lui         $a1, 0x79D9
    ctx->pc = 0x19b694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31193 << 16));
    // 0x19b698: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b69c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x19b69cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x19b6a0: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19B6A0u;
    SET_GPR_U32(ctx, 31, 0x19B6A8u);
    ctx->pc = 0x19B6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6A0u;
            // 0x19b6a4: 0x34a50a03  ori         $a1, $a1, 0xA03 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2563);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6A8u; }
        if (ctx->pc != 0x19B6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6A8u; }
        if (ctx->pc != 0x19B6A8u) { return; }
    }
    ctx->pc = 0x19B6A8u;
    // 0x19b6a8: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b6ac: 0x3c0579d9  lui         $a1, 0x79D9
    ctx->pc = 0x19b6acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31193 << 16));
    // 0x19b6b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6b4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x19b6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19b6b8: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19B6B8u;
    SET_GPR_U32(ctx, 31, 0x19B6C0u);
    ctx->pc = 0x19B6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6B8u;
            // 0x19b6bc: 0x34a50a04  ori         $a1, $a1, 0xA04 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2564);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6C0u; }
        if (ctx->pc != 0x19B6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6C0u; }
        if (ctx->pc != 0x19B6C0u) { return; }
    }
    ctx->pc = 0x19B6C0u;
    // 0x19b6c0: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b6c4: 0x3c05a4e6  lui         $a1, 0xA4E6
    ctx->pc = 0x19b6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42214 << 16));
    // 0x19b6c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6cc: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x19b6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x19b6d0: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19B6D0u;
    SET_GPR_U32(ctx, 31, 0x19B6D8u);
    ctx->pc = 0x19B6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6D0u;
            // 0x19b6d4: 0x34a51bc3  ori         $a1, $a1, 0x1BC3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7107);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6D8u; }
        if (ctx->pc != 0x19B6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6D8u; }
        if (ctx->pc != 0x19B6D8u) { return; }
    }
    ctx->pc = 0x19B6D8u;
    // 0x19b6d8: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b6dc: 0x3c05cc9e  lui         $a1, 0xCC9E
    ctx->pc = 0x19b6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52382 << 16));
    // 0x19b6e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6e4: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x19b6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x19b6e8: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19B6E8u;
    SET_GPR_U32(ctx, 31, 0x19B6F0u);
    ctx->pc = 0x19B6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6E8u;
            // 0x19b6ec: 0x34a5af6b  ori         $a1, $a1, 0xAF6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44907);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6F0u; }
        if (ctx->pc != 0x19B6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6F0u; }
        if (ctx->pc != 0x19B6F0u) { return; }
    }
    ctx->pc = 0x19B6F0u;
    // 0x19b6f0: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b6f4: 0x3c05cc9e  lui         $a1, 0xCC9E
    ctx->pc = 0x19b6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52382 << 16));
    // 0x19b6f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6fc: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x19b6fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x19b700: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19B700u;
    SET_GPR_U32(ctx, 31, 0x19B708u);
    ctx->pc = 0x19B704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B700u;
            // 0x19b704: 0x34a5af6c  ori         $a1, $a1, 0xAF6C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44908);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B708u; }
        if (ctx->pc != 0x19B708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B708u; }
        if (ctx->pc != 0x19B708u) { return; }
    }
    ctx->pc = 0x19B708u;
    // 0x19b708: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b70c: 0x3c05cc9e  lui         $a1, 0xCC9E
    ctx->pc = 0x19b70cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52382 << 16));
    // 0x19b710: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b714: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x19b714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x19b718: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19B718u;
    SET_GPR_U32(ctx, 31, 0x19B720u);
    ctx->pc = 0x19B71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B718u;
            // 0x19b71c: 0x34a5af6d  ori         $a1, $a1, 0xAF6D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44909);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B720u; }
        if (ctx->pc != 0x19B720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B720u; }
        if (ctx->pc != 0x19B720u) { return; }
    }
    ctx->pc = 0x19B720u;
    // 0x19b720: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b724: 0x3c050524  lui         $a1, 0x524
    ctx->pc = 0x19b724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1316 << 16));
    // 0x19b728: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b72c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19b72cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19b730: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19B730u;
    SET_GPR_U32(ctx, 31, 0x19B738u);
    ctx->pc = 0x19B734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B730u;
            // 0x19b734: 0x34a55f0f  ori         $a1, $a1, 0x5F0F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24335);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B738u; }
        if (ctx->pc != 0x19B738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B738u; }
        if (ctx->pc != 0x19B738u) { return; }
    }
    ctx->pc = 0x19B738u;
    // 0x19b738: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b73c: 0x3c050524  lui         $a1, 0x524
    ctx->pc = 0x19b73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1316 << 16));
    // 0x19b740: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b744: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x19b744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x19b748: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19B748u;
    SET_GPR_U32(ctx, 31, 0x19B750u);
    ctx->pc = 0x19B74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B748u;
            // 0x19b74c: 0x34a55f10  ori         $a1, $a1, 0x5F10 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24336);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B750u; }
        if (ctx->pc != 0x19B750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B750u; }
        if (ctx->pc != 0x19B750u) { return; }
    }
    ctx->pc = 0x19B750u;
    // 0x19b750: 0x8e24c9ac  lw          $a0, -0x3654($s1)
    ctx->pc = 0x19b750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x19b754: 0x3c050524  lui         $a1, 0x524
    ctx->pc = 0x19b754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1316 << 16));
    // 0x19b758: 0x34a55f11  ori         $a1, $a1, 0x5F11
    ctx->pc = 0x19b758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24337);
    // 0x19b75c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b760: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19B760u;
    SET_GPR_U32(ctx, 31, 0x19B768u);
    ctx->pc = 0x19B764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B760u;
            // 0x19b764: 0x27a70038  addiu       $a3, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B768u; }
        if (ctx->pc != 0x19B768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B768u; }
        if (ctx->pc != 0x19B768u) { return; }
    }
    ctx->pc = 0x19B768u;
    // 0x19b768: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19b768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b76c: 0xc090e68  jal         func_2439A0
    ctx->pc = 0x19B76Cu;
    SET_GPR_U32(ctx, 31, 0x19B774u);
    ctx->pc = 0x19B770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B76Cu;
            // 0x19b770: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2439A0u;
    if (runtime->hasFunction(0x2439A0u)) {
        auto targetFn = runtime->lookupFunction(0x2439A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B774u; }
        if (ctx->pc != 0x19B774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002439A0_0x2439a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B774u; }
        if (ctx->pc != 0x19B774u) { return; }
    }
    ctx->pc = 0x19B774u;
    // 0x19b774: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x19b774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19b778: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x19b778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19b77c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x19b77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19b780: 0x3e00008  jr          $ra
    ctx->pc = 0x19B780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B780u;
            // 0x19b784: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B788u;
}
