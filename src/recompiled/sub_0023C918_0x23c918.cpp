#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023C918
// Address: 0x23c918 - 0x23ca68
void sub_0023C918_0x23c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C918_0x23c918");
#endif

    ctx->pc = 0x23c918u;

    // 0x23c918: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23c918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23c91c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23c91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23c920: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x23c920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x23c924: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23c924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c928: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23c928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23c92c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23c92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23c930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c934: 0xc04f824  jal         func_13E090
    ctx->pc = 0x23C934u;
    SET_GPR_U32(ctx, 31, 0x23C93Cu);
    ctx->pc = 0x23C938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C934u;
            // 0x23c938: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C93Cu; }
        if (ctx->pc != 0x23C93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C93Cu; }
        if (ctx->pc != 0x23C93Cu) { return; }
    }
    ctx->pc = 0x23C93Cu;
    // 0x23c93c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x23c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x23c940: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x23c940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23c944: 0x24632da0  addiu       $v1, $v1, 0x2DA0
    ctx->pc = 0x23c944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11680));
    // 0x23c948: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x23c948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x23c94c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x23c94cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23c950: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x23c950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x23c954: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x23c954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x23c958: 0xc04f824  jal         func_13E090
    ctx->pc = 0x23C958u;
    SET_GPR_U32(ctx, 31, 0x23C960u);
    ctx->pc = 0x23C95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C958u;
            // 0x23c95c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C960u; }
        if (ctx->pc != 0x23C960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C960u; }
        if (ctx->pc != 0x23C960u) { return; }
    }
    ctx->pc = 0x23C960u;
    // 0x23c960: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23c960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c964: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C964u;
    {
        const bool branch_taken_0x23c964 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c964) {
            ctx->pc = 0x23C984u;
            goto label_23c984;
        }
    }
    ctx->pc = 0x23C96Cu;
    // 0x23c96c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x23c96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23c970: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23C970u;
    {
        const bool branch_taken_0x23c970 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C970u;
            // 0x23c974: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c970) {
            ctx->pc = 0x23C97Cu;
            goto label_23c97c;
        }
    }
    ctx->pc = 0x23C978u;
    // 0x23c978: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x23c978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_23c97c:
    // 0x23c97c: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x23C97Cu;
    SET_GPR_U32(ctx, 31, 0x23C984u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C984u; }
        if (ctx->pc != 0x23C984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C984u; }
        if (ctx->pc != 0x23C984u) { return; }
    }
    ctx->pc = 0x23C984u;
label_23c984:
    // 0x23c984: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C984u;
    {
        const bool branch_taken_0x23c984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c984) {
            ctx->pc = 0x23C988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23C984u;
            // 0x23c988: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23C998u;
            goto label_23c998;
        }
    }
    ctx->pc = 0x23C98Cu;
    // 0x23c98c: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x23C98Cu;
    SET_GPR_U32(ctx, 31, 0x23C994u);
    ctx->pc = 0x23C990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C98Cu;
            // 0x23c990: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C994u; }
        if (ctx->pc != 0x23C994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C994u; }
        if (ctx->pc != 0x23C994u) { return; }
    }
    ctx->pc = 0x23C994u;
    // 0x23c994: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23c994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c998:
    // 0x23c998: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C998u;
    {
        const bool branch_taken_0x23c998 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c998) {
            ctx->pc = 0x23C99Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23C998u;
            // 0x23c99c: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23C9ACu;
            goto label_23c9ac;
        }
    }
    ctx->pc = 0x23C9A0u;
    // 0x23c9a0: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x23C9A0u;
    SET_GPR_U32(ctx, 31, 0x23C9A8u);
    ctx->pc = 0x23C9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C9A0u;
            // 0x23c9a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C9A8u; }
        if (ctx->pc != 0x23C9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C9A8u; }
        if (ctx->pc != 0x23C9A8u) { return; }
    }
    ctx->pc = 0x23C9A8u;
    // 0x23c9a8: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x23c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_23c9ac:
    // 0x23c9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9b0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x23c9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23c9b4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x23c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23c9b8: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x23C9B8u;
    SET_GPR_U32(ctx, 31, 0x23C9C0u);
    ctx->pc = 0x23C9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C9B8u;
            // 0x23c9bc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C9C0u; }
        if (ctx->pc != 0x23C9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C9C0u; }
        if (ctx->pc != 0x23C9C0u) { return; }
    }
    ctx->pc = 0x23C9C0u;
    // 0x23c9c0: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x23c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x23c9c4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x23c9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23c9c8: 0x2463ea38  addiu       $v1, $v1, -0x15C8
    ctx->pc = 0x23c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961720));
    // 0x23c9cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23c9ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9d0: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x23c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x23c9d4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x23c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x23c9d8: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x23c9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x23c9dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23c9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23c9e0: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x23c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x23c9e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23c9e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c9e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23c9e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c9ec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x23c9ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c9f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x23C9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C9F4u;
            // 0x23c9f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C97Cu: goto label_23c97c;
            case 0x23C984u: goto label_23c984;
            case 0x23C998u: goto label_23c998;
            case 0x23C9ACu: goto label_23c9ac;
            case 0x23CA34u: goto label_23ca34;
            case 0x23CA50u: goto label_23ca50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C9FCu;
    // 0x23c9fc: 0x0  nop
    ctx->pc = 0x23c9fcu;
    // NOP
    // 0x23ca00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ca04: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23ca08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23ca08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23ca0c: 0x24422d70  addiu       $v0, $v0, 0x2D70
    ctx->pc = 0x23ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11632));
    // 0x23ca10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23ca10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23ca14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23ca14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ca1c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x23ca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x23ca20: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23ca20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23ca24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23CA24u;
    {
        const bool branch_taken_0x23ca24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA24u;
            // 0x23ca28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca24) {
            ctx->pc = 0x23CA34u;
            goto label_23ca34;
        }
    }
    ctx->pc = 0x23CA2Cu;
    // 0x23ca2c: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x23CA2Cu;
    SET_GPR_U32(ctx, 31, 0x23CA34u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA34u; }
        if (ctx->pc != 0x23CA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA34u; }
        if (ctx->pc != 0x23CA34u) { return; }
    }
    ctx->pc = 0x23CA34u;
label_23ca34:
    // 0x23ca34: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23ca38: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x23ca38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x23ca3c: 0x24422d88  addiu       $v0, $v0, 0x2D88
    ctx->pc = 0x23ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11656));
    // 0x23ca40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23CA40u;
    {
        const bool branch_taken_0x23ca40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA40u;
            // 0x23ca44: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca40) {
            ctx->pc = 0x23CA50u;
            goto label_23ca50;
        }
    }
    ctx->pc = 0x23CA48u;
    // 0x23ca48: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x23CA48u;
    SET_GPR_U32(ctx, 31, 0x23CA50u);
    ctx->pc = 0x23CA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA48u;
            // 0x23ca4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA50u; }
        if (ctx->pc != 0x23CA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA50u; }
        if (ctx->pc != 0x23CA50u) { return; }
    }
    ctx->pc = 0x23CA50u;
label_23ca50:
    // 0x23ca50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23ca50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ca54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23ca54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ca58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ca58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ca5c: 0x3e00008  jr          $ra
    ctx->pc = 0x23CA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA5Cu;
            // 0x23ca60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C97Cu: goto label_23c97c;
            case 0x23C984u: goto label_23c984;
            case 0x23C998u: goto label_23c998;
            case 0x23C9ACu: goto label_23c9ac;
            case 0x23CA34u: goto label_23ca34;
            case 0x23CA50u: goto label_23ca50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23CA64u;
    // 0x23ca64: 0x0  nop
    ctx->pc = 0x23ca64u;
    // NOP
}
