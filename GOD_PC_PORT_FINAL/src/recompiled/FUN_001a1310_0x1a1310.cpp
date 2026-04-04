#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a1310
// Address: 0x1a1310 - 0x1a1378
void FUN_001a1310_0x1a1310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a1310_0x1a1310");
#endif

    ctx->pc = 0x1a1310u;

    // 0x1a1310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1314: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a1314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a1318: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a131c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A131Cu;
    {
        const bool branch_taken_0x1a131c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A131Cu;
            // 0x1a1320: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a131c) {
            ctx->pc = 0x1A1374u;
            goto label_1a1374;
        }
    }
    ctx->pc = 0x1A1324u;
    // 0x1a1324: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a1324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1328: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1328u;
    {
        const bool branch_taken_0x1a1328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A132Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1328u;
            // 0x1a132c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1328) {
            ctx->pc = 0x1A1378u;
            return;
        }
    }
    ctx->pc = 0x1A1330u;
    // 0x1a1330: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a1330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a1334: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1a1334u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1a1338: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1a1338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1a133c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A133Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1344u);
        ctx->pc = 0x1A1340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A133Cu;
            // 0x1a1340: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1344u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1374u: goto label_1a1374;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1344u; }
            if (ctx->pc != 0x1A1344u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1344u;
    // 0x1a1344: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1A1344u;
    {
        const bool branch_taken_0x1a1344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1344) {
            ctx->pc = 0x1A1348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1344u;
            // 0x1a1348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1378u;
            return;
        }
    }
    ctx->pc = 0x1A134Cu;
    // 0x1a134c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a134cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1350: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a1350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a1354: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1a1354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1a1358: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1a1358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1a135c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A135Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1364u);
        ctx->pc = 0x1A1360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A135Cu;
            // 0x1a1360: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1364u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1374u: goto label_1a1374;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1364u; }
            if (ctx->pc != 0x1A1364u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1364u;
    // 0x1a1364: 0x90420016  lbu         $v0, 0x16($v0)
    ctx->pc = 0x1a1364u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x1a1368: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a1368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a136c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A136Cu;
    {
        const bool branch_taken_0x1a136c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A136Cu;
            // 0x1a1370: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a136c) {
            ctx->pc = 0x1A1378u;
            return;
        }
    }
    ctx->pc = 0x1A1374u;
label_1a1374:
    // 0x1a1374: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
}
