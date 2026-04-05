#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B13A8
// Address: 0x1b13a8 - 0x1b1488
void sub_001B13A8_0x1b13a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B13A8_0x1b13a8");
#endif

    ctx->pc = 0x1b13a8u;

    // 0x1b13a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b13a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b13ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b13acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b13b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b13b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b13b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b13b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b13b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b13bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b13bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13c0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1b13c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1b13c4: 0x96230042  lhu         $v1, 0x42($s1)
    ctx->pc = 0x1b13c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x1b13c8: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x1b13c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x1b13cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B13CCu;
    {
        const bool branch_taken_0x1b13cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B13D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13CCu;
            // 0x1b13d0: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13cc) {
            ctx->pc = 0x1B13E0u;
            goto label_1b13e0;
        }
    }
    ctx->pc = 0x1B13D4u;
    // 0x1b13d4: 0x0  nop
    ctx->pc = 0x1b13d4u;
    // NOP
label_1b13d8:
    // 0x1b13d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b13d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b13e0:
    // 0x1b13e0: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B13E0u;
    {
        const bool branch_taken_0x1b13e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B13E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13E0u;
            // 0x1b13e4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13e0) {
            ctx->pc = 0x1B13F8u;
            goto label_1b13f8;
        }
    }
    ctx->pc = 0x1B13E8u;
    // 0x1b13e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b13e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13ec: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x1b13ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b13f0: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B13F0u;
    {
        const bool branch_taken_0x1b13f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B13F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13F0u;
            // 0x1b13f4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13f0) {
            ctx->pc = 0x1B13D8u;
            runtime->cooperativeGuestYield();
            goto label_1b13d8;
        }
    }
    ctx->pc = 0x1B13F8u;
label_1b13f8:
    // 0x1b13f8: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B13F8u;
    {
        const bool branch_taken_0x1b13f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B13FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13F8u;
            // 0x1b13fc: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13f8) {
            ctx->pc = 0x1B1470u;
            goto label_1b1470;
        }
    }
    ctx->pc = 0x1B1400u;
    // 0x1b1400: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x1b1400u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b1404: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1404u;
    {
        const bool branch_taken_0x1b1404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B1408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1404u;
            // 0x1b1408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1404) {
            ctx->pc = 0x1B1428u;
            goto label_1b1428;
        }
    }
    ctx->pc = 0x1B140Cu;
    // 0x1b140c: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x1b140cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b1410: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1410u;
    {
        const bool branch_taken_0x1b1410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b1410) {
            ctx->pc = 0x1B1414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1410u;
            // 0x1b1414: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B142Cu;
            goto label_1b142c;
        }
    }
    ctx->pc = 0x1B1418u;
    // 0x1b1418: 0x96040012  lhu         $a0, 0x12($s0)
    ctx->pc = 0x1b1418u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b141c: 0xc06982a  jal         func_1A60A8
    ctx->pc = 0x1B141Cu;
    SET_GPR_U32(ctx, 31, 0x1B1424u);
    ctx->pc = 0x1B1420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B141Cu;
            // 0x1b1420: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A60A8u;
    if (runtime->hasFunction(0x1A60A8u)) {
        auto targetFn = runtime->lookupFunction(0x1A60A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1424u; }
        if (ctx->pc != 0x1B1424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A60A8_0x1a60a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1424u; }
        if (ctx->pc != 0x1B1424u) { return; }
    }
    ctx->pc = 0x1B1424u;
    // 0x1b1424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b1424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1428:
    // 0x1b1428: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x1b1428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b142c:
    // 0x1b142c: 0xc06a43a  jal         func_1A90E8
    ctx->pc = 0x1B142Cu;
    SET_GPR_U32(ctx, 31, 0x1B1434u);
    ctx->pc = 0x1B1430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B142Cu;
            // 0x1b1430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A90E8u;
    if (runtime->hasFunction(0x1A90E8u)) {
        auto targetFn = runtime->lookupFunction(0x1A90E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1434u; }
        if (ctx->pc != 0x1B1434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A90E8_0x1a90e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1434u; }
        if (ctx->pc != 0x1B1434u) { return; }
    }
    ctx->pc = 0x1B1434u;
    // 0x1b1434: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b1434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1438: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b143c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b143cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b1440: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b1440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1444: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b1444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1448: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b1448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1b144c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b144cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b1450: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1450u;
    {
        const bool branch_taken_0x1b1450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1450u;
            // 0x1b1454: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1450) {
            ctx->pc = 0x1B1470u;
            goto label_1b1470;
        }
    }
    ctx->pc = 0x1B1458u;
    // 0x1b1458: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b1458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b145c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b145cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1460: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1b1460u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b1464: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b1464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b1468: 0x40f809  jalr        $v0
    ctx->pc = 0x1B1468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1470u);
        ctx->pc = 0x1B146Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1468u;
            // 0x1b146c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1470u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B13D8u: goto label_1b13d8;
            case 0x1B13E0u: goto label_1b13e0;
            case 0x1B13F8u: goto label_1b13f8;
            case 0x1B1428u: goto label_1b1428;
            case 0x1B142Cu: goto label_1b142c;
            case 0x1B1470u: goto label_1b1470;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1470u; }
            if (ctx->pc != 0x1B1470u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1470u;
label_1b1470:
    // 0x1b1470: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b1470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1474: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b1474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b147c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B147Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B147Cu;
            // 0x1b1480: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B13D8u: goto label_1b13d8;
            case 0x1B13E0u: goto label_1b13e0;
            case 0x1B13F8u: goto label_1b13f8;
            case 0x1B1428u: goto label_1b1428;
            case 0x1B142Cu: goto label_1b142c;
            case 0x1B1470u: goto label_1b1470;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1484u;
    // 0x1b1484: 0x0  nop
    ctx->pc = 0x1b1484u;
    // NOP
}
