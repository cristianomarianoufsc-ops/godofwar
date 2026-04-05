#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B12F0
// Address: 0x1b12f0 - 0x1b13a8
void sub_001B12F0_0x1b12f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B12F0_0x1b12f0");
#endif

    ctx->pc = 0x1b12f0u;

    // 0x1b12f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b12f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b12f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b12f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b12f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b12f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b12fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b12fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1300: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b1300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b1304: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b1304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1308: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b1308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b130c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b130cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1310: 0x96420062  lhu         $v0, 0x62($s2)
    ctx->pc = 0x1b1310u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 98)));
    // 0x1b1314: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B1314u;
    {
        const bool branch_taken_0x1b1314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1314u;
            // 0x1b1318: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1314) {
            ctx->pc = 0x1B138Cu;
            goto label_1b138c;
        }
    }
    ctx->pc = 0x1B131Cu;
    // 0x1b131c: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x1b131cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_1b1320:
    // 0x1b1320: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1b1320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b1324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1328: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b1328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b132c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B132Cu;
    {
        const bool branch_taken_0x1b132c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b132c) {
            ctx->pc = 0x1B1330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B132Cu;
            // 0x1b1330: 0x96420062  lhu         $v0, 0x62($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 98)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B137Cu;
            goto label_1b137c;
        }
    }
    ctx->pc = 0x1B1334u;
    // 0x1b1334: 0x8c500054  lw          $s0, 0x54($v0)
    ctx->pc = 0x1b1334u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1b1338: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B1338u;
    {
        const bool branch_taken_0x1b1338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1338) {
            ctx->pc = 0x1B133Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1338u;
            // 0x1b133c: 0x96420062  lhu         $v0, 0x62($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 98)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B137Cu;
            goto label_1b137c;
        }
    }
    ctx->pc = 0x1B1340u;
    // 0x1b1340: 0x5270000e  beql        $s3, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1340u;
    {
        const bool branch_taken_0x1b1340 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x1b1340) {
            ctx->pc = 0x1B1344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1340u;
            // 0x1b1344: 0x96420062  lhu         $v0, 0x62($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 98)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B137Cu;
            goto label_1b137c;
        }
    }
    ctx->pc = 0x1B1348u;
    // 0x1b1348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b134c: 0xc06c3ec  jal         func_1B0FB0
    ctx->pc = 0x1B134Cu;
    SET_GPR_U32(ctx, 31, 0x1B1354u);
    ctx->pc = 0x1B1350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B134Cu;
            // 0x1b1350: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FB0u;
    if (runtime->hasFunction(0x1B0FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1354u; }
        if (ctx->pc != 0x1B1354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b0fb0_0x1b0fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1354u; }
        if (ctx->pc != 0x1B1354u) { return; }
    }
    ctx->pc = 0x1B1354u;
    // 0x1b1354: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b1354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1358: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1358u;
    {
        const bool branch_taken_0x1b1358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1358) {
            ctx->pc = 0x1B135Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1358u;
            // 0x1b135c: 0x96420062  lhu         $v0, 0x62($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 98)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B137Cu;
            goto label_1b137c;
        }
    }
    ctx->pc = 0x1B1360u;
    // 0x1b1360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1364: 0xc06c3f6  jal         func_1B0FD8
    ctx->pc = 0x1B1364u;
    SET_GPR_U32(ctx, 31, 0x1B136Cu);
    ctx->pc = 0x1B1368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1364u;
            // 0x1b1368: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FD8u;
    if (runtime->hasFunction(0x1B0FD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B136Cu; }
        if (ctx->pc != 0x1B136Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001b0fd8_0x1b0fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B136Cu; }
        if (ctx->pc != 0x1B136Cu) { return; }
    }
    ctx->pc = 0x1B136Cu;
    // 0x1b136c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b136cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1370: 0xc06c52e  jal         func_1B14B8
    ctx->pc = 0x1B1370u;
    SET_GPR_U32(ctx, 31, 0x1B1378u);
    ctx->pc = 0x1B1374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1370u;
            // 0x1b1374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14B8u;
    if (runtime->hasFunction(0x1B14B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B14B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1378u; }
        if (ctx->pc != 0x1B1378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B14B8_0x1b14b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1378u; }
        if (ctx->pc != 0x1B1378u) { return; }
    }
    ctx->pc = 0x1B1378u;
    // 0x1b1378: 0x96420062  lhu         $v0, 0x62($s2)
    ctx->pc = 0x1b1378u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 98)));
label_1b137c:
    // 0x1b137c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b137cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b1380: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b1380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b1384: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1B1384u;
    {
        const bool branch_taken_0x1b1384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1384) {
            ctx->pc = 0x1B1388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1384u;
            // 0x1b1388: 0x8e430064  lw          $v1, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1320u;
            runtime->cooperativeGuestYield();
            goto label_1b1320;
        }
    }
    ctx->pc = 0x1B138Cu;
label_1b138c:
    // 0x1b138c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b138cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1390: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b1390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1394: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b1394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1398: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b1398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b139c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b139cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b13a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B13A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B13A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13A0u;
            // 0x1b13a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1320u: goto label_1b1320;
            case 0x1B137Cu: goto label_1b137c;
            case 0x1B138Cu: goto label_1b138c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B13A8u;
}
