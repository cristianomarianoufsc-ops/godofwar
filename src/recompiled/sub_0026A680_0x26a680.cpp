#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A680
// Address: 0x26a680 - 0x26a7b0
void sub_0026A680_0x26a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A680_0x26a680");
#endif

    ctx->pc = 0x26a680u;

    // 0x26a680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26a680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26a684: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26a684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26a688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26a688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a68c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26a694: 0xc096402  jal         func_259008
    ctx->pc = 0x26A694u;
    SET_GPR_U32(ctx, 31, 0x26A69Cu);
    ctx->pc = 0x26A698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A694u;
            // 0x26a698: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A69Cu; }
        if (ctx->pc != 0x26A69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A69Cu; }
        if (ctx->pc != 0x26A69Cu) { return; }
    }
    ctx->pc = 0x26A69Cu;
    // 0x26a69c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x26a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x26a6a0: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x26a6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x26a6a4: 0x24633d18  addiu       $v1, $v1, 0x3D18
    ctx->pc = 0x26a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15640));
    // 0x26a6a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26a6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a6ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x26a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x26a6b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26a6b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a6b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a6b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a6b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x26A6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A6BCu;
            // 0x26a6c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A730u: goto label_26a730;
            case 0x26A764u: goto label_26a764;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26A6C4u;
    // 0x26a6c4: 0x0  nop
    ctx->pc = 0x26a6c4u;
    // NOP
    // 0x26a6c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26a6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26a6cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x26a6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x26a6d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x26a6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x26a6d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26a6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a6d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26a6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26a6dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26a6dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a6e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x26a6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x26a6e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x26a6e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a6e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26a6ec: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x26a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x26a6f0: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x26a6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26a6f4: 0x90c20089  lbu         $v0, 0x89($a2)
    ctx->pc = 0x26a6f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 137)));
    // 0x26a6f8: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x26a6f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x26a6fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26A6FCu;
    {
        const bool branch_taken_0x26a6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A6FCu;
            // 0x26a700: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6fc) {
            ctx->pc = 0x26A730u;
            goto label_26a730;
        }
    }
    ctx->pc = 0x26A704u;
    // 0x26a704: 0x90c30089  lbu         $v1, 0x89($a2)
    ctx->pc = 0x26a704u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 137)));
    // 0x26a708: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x26a708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26a70c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x26a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x26a710: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x26a710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x26a714: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x26a714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26a718: 0x24425ee0  addiu       $v0, $v0, 0x5EE0
    ctx->pc = 0x26a718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24288));
    // 0x26a71c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x26a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26a720: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26a720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26a724: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x26a724u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x26a728: 0xa0c40089  sb          $a0, 0x89($a2)
    ctx->pc = 0x26a728u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 137), (uint8_t)GPR_U32(ctx, 4));
    // 0x26a72c: 0xa0c0008a  sb          $zero, 0x8A($a2)
    ctx->pc = 0x26a72cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 138), (uint8_t)GPR_U32(ctx, 0));
label_26a730:
    // 0x26a730: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x26a730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a734: 0xc074944  jal         func_1D2510
    ctx->pc = 0x26A734u;
    SET_GPR_U32(ctx, 31, 0x26A73Cu);
    ctx->pc = 0x26A738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A734u;
            // 0x26a738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2510u;
    if (runtime->hasFunction(0x1D2510u)) {
        auto targetFn = runtime->lookupFunction(0x1D2510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A73Cu; }
        if (ctx->pc != 0x26A73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2510_0x1d2510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A73Cu; }
        if (ctx->pc != 0x26A73Cu) { return; }
    }
    ctx->pc = 0x26A73Cu;
    // 0x26a73c: 0x12300009  beq         $s1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26A73Cu;
    {
        const bool branch_taken_0x26a73c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x26A740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A73Cu;
            // 0x26a740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a73c) {
            ctx->pc = 0x26A764u;
            goto label_26a764;
        }
    }
    ctx->pc = 0x26A744u;
    // 0x26a744: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x26a744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26a748: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26a748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a74c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x26a74cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a750: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a754: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26a754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26a758: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26a758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26a75c: 0x40f809  jalr        $v0
    ctx->pc = 0x26A75Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A764u);
        ctx->pc = 0x26A760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A75Cu;
            // 0x26a760: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A764u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A730u: goto label_26a730;
            case 0x26A764u: goto label_26a764;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A764u; }
            if (ctx->pc != 0x26A764u) { return; }
        }
        }
    }
    ctx->pc = 0x26A764u;
label_26a764:
    // 0x26a764: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x26a764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26a768: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x26a768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a76c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26a76cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a770: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x26a770u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a778: 0x3e00008  jr          $ra
    ctx->pc = 0x26A778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A778u;
            // 0x26a77c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A730u: goto label_26a730;
            case 0x26A764u: goto label_26a764;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26A780u;
    // 0x26a780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26a780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26a784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26a788: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26a788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26a78c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a790: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x26a790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26a794: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26a794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26a798: 0x40f809  jalr        $v0
    ctx->pc = 0x26A798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A7A0u);
        ctx->pc = 0x26A79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A798u;
            // 0x26a79c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A7A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A730u: goto label_26a730;
            case 0x26A764u: goto label_26a764;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A7A0u; }
            if (ctx->pc != 0x26A7A0u) { return; }
        }
        }
    }
    ctx->pc = 0x26A7A0u;
    // 0x26a7a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x26A7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A7A4u;
            // 0x26a7a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A730u: goto label_26a730;
            case 0x26A764u: goto label_26a764;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26A7ACu;
    // 0x26a7ac: 0x0  nop
    ctx->pc = 0x26a7acu;
    // NOP
}
