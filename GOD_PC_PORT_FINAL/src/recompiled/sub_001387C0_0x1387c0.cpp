#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001387C0
// Address: 0x1387c0 - 0x138870
void sub_001387C0_0x1387c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001387C0_0x1387c0");
#endif

    ctx->pc = 0x1387c0u;

    // 0x1387c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1387c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1387c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1387c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1387c8: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x1387c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x1387cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1387ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1387d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1387d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1387d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1387d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1387d8: 0x9262be0c  lbu         $v0, -0x41F4($s3)
    ctx->pc = 0x1387d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294950412)));
    // 0x1387dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1387dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1387e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1387e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1387e4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1387E4u;
    {
        const bool branch_taken_0x1387e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1387E4u;
            // 0x1387e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387e4) {
            ctx->pc = 0x138850u;
            goto label_138850;
        }
    }
    ctx->pc = 0x1387ECu;
    // 0x1387ec: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x1387ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
label_1387f0:
    // 0x1387f0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1387f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1387f4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1387f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1387f8: 0x2442f1f8  addiu       $v0, $v0, -0xE08
    ctx->pc = 0x1387f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963704));
    // 0x1387fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1387fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138800: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x138800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138804: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x138804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138808: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x138808u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x13880c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x13880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x138810: 0x40f809  jalr        $v0
    ctx->pc = 0x138810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138818u);
        ctx->pc = 0x138814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138810u;
            // 0x138814: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x138818u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1387F0u: goto label_1387f0;
            case 0x138838u: goto label_138838;
            case 0x138850u: goto label_138850;
            case 0x138854u: goto label_138854;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138818u; }
            if (ctx->pc != 0x138818u) { return; }
        }
        }
    }
    ctx->pc = 0x138818u;
    // 0x138818: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x138818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13881c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13881cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138820: 0xc0a26dc  jal         func_289B70
    ctx->pc = 0x138820u;
    SET_GPR_U32(ctx, 31, 0x138828u);
    ctx->pc = 0x138824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138820u;
            // 0x138824: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289B70u;
    if (runtime->hasFunction(0x289B70u)) {
        auto targetFn = runtime->lookupFunction(0x289B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138828u; }
        if (ctx->pc != 0x138828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289b70_0x289d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138828u; }
        if (ctx->pc != 0x138828u) { return; }
    }
    ctx->pc = 0x138828u;
    // 0x138828: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138828u;
    {
        const bool branch_taken_0x138828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13882Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138828u;
            // 0x13882c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138828) {
            ctx->pc = 0x138838u;
            goto label_138838;
        }
    }
    ctx->pc = 0x138830u;
    // 0x138830: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x138830u;
    {
        const bool branch_taken_0x138830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138830u;
            // 0x138834: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138830) {
            ctx->pc = 0x138854u;
            goto label_138854;
        }
    }
    ctx->pc = 0x138838u;
label_138838:
    // 0x138838: 0x9263be0c  lbu         $v1, -0x41F4($s3)
    ctx->pc = 0x138838u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294950412)));
    // 0x13883c: 0x28603  sra         $s0, $v0, 24
    ctx->pc = 0x13883cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 24));
    // 0x138840: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x138840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x138844: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x138844u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x138848: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x138848u;
    {
        const bool branch_taken_0x138848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13884Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138848u;
            // 0x13884c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138848) {
            ctx->pc = 0x1387F0u;
            runtime->cooperativeGuestYield();
            goto label_1387f0;
        }
    }
    ctx->pc = 0x138850u;
label_138850:
    // 0x138850: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x138850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_138854:
    // 0x138854: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x138854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x138858: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x138858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13885c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13885cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138860: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x138860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138868: 0x3e00008  jr          $ra
    ctx->pc = 0x138868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13886Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138868u;
            // 0x13886c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1387F0u: goto label_1387f0;
            case 0x138838u: goto label_138838;
            case 0x138850u: goto label_138850;
            case 0x138854u: goto label_138854;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138870u;
}
