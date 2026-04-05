#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131460
// Address: 0x131460 - 0x131570
void sub_00131460_0x131460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131460_0x131460");
#endif

    ctx->pc = 0x131460u;

    // 0x131460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x131460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x131464: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x131464u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x131468: 0xdce3bdf8  ld          $v1, -0x4208($a3)
    ctx->pc = 0x131468u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4294950392)));
    // 0x13146c: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x13146cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x131470: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x131470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x131474: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x131474u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x131478: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x131478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13147c: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x13147cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x131480: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x131480u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x131484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131488: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x131488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13148c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x13148cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x131490: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x131490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131494: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x131494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x131498: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x131498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13149c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13149cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1314a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1314a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1314a4: 0xfce3bdf8  sd          $v1, -0x4208($a3)
    ctx->pc = 0x1314a4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294950392), GPR_U64(ctx, 3));
    // 0x1314a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1314a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1314ac: 0xfe620068  sd          $v0, 0x68($s3)
    ctx->pc = 0x1314acu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 104), GPR_U64(ctx, 2));
    // 0x1314b0: 0xc04c492  jal         func_131248
    ctx->pc = 0x1314B0u;
    SET_GPR_U32(ctx, 31, 0x1314B8u);
    ctx->pc = 0x1314B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1314B0u;
            // 0x1314b4: 0xa6660060  sh          $a2, 0x60($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 96), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131248u;
    if (runtime->hasFunction(0x131248u)) {
        auto targetFn = runtime->lookupFunction(0x131248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1314B8u; }
        if (ctx->pc != 0x1314B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131248_0x131288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1314B8u; }
        if (ctx->pc != 0x1314B8u) { return; }
    }
    ctx->pc = 0x1314B8u;
    // 0x1314b8: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x1314b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1314bc: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1314BCu;
    {
        const bool branch_taken_0x1314bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1314bc) {
            ctx->pc = 0x1314C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1314BCu;
            // 0x1314c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131548u;
            goto label_131548;
        }
    }
    ctx->pc = 0x1314C4u;
    // 0x1314c4: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1314c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1314c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1314c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1314cc: 0x2631e848  addiu       $s1, $s1, -0x17B8
    ctx->pc = 0x1314ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x1314d0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1314d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1314d4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1314d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1314d8: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1314d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1314dc: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1314dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1314e0: 0x40f809  jalr        $v0
    ctx->pc = 0x1314E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1314E8u);
        ctx->pc = 0x1314E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1314E0u;
            // 0x1314e4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1314E8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131548u: goto label_131548;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1314E8u; }
            if (ctx->pc != 0x1314E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1314E8u;
    // 0x1314e8: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x1314e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1314ec: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1314ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1314f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1314f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1314f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1314f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1314f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1314f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1314fc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1314fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x131500: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x131500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x131504: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x131504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x131508: 0x40f809  jalr        $v0
    ctx->pc = 0x131508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131510u);
        ctx->pc = 0x13150Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131508u;
            // 0x13150c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x131510u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131548u: goto label_131548;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131510u; }
            if (ctx->pc != 0x131510u) { return; }
        }
        }
    }
    ctx->pc = 0x131510u;
    // 0x131510: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x131510u;
    SET_GPR_U32(ctx, 31, 0x131518u);
    ctx->pc = 0x131514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131510u;
            // 0x131514: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131518u; }
        if (ctx->pc != 0x131518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131518u; }
        if (ctx->pc != 0x131518u) { return; }
    }
    ctx->pc = 0x131518u;
    // 0x131518: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x131518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13151c: 0xc08e23a  jal         func_2388E8
    ctx->pc = 0x13151Cu;
    SET_GPR_U32(ctx, 31, 0x131524u);
    ctx->pc = 0x131520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13151Cu;
            // 0x131520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (runtime->hasFunction(0x2388E8u)) {
        auto targetFn = runtime->lookupFunction(0x2388E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131524u; }
        if (ctx->pc != 0x131524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2388e8_0x2388f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131524u; }
        if (ctx->pc != 0x131524u) { return; }
    }
    ctx->pc = 0x131524u;
    // 0x131524: 0xae5000b4  sw          $s0, 0xB4($s2)
    ctx->pc = 0x131524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 16));
    // 0x131528: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x131528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x13152c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x131530: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x131530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x131534: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x131534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x131538: 0x40f809  jalr        $v0
    ctx->pc = 0x131538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131540u);
        ctx->pc = 0x13153Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131538u;
            // 0x13153c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x131540u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131548u: goto label_131548;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131540u; }
            if (ctx->pc != 0x131540u) { return; }
        }
        }
    }
    ctx->pc = 0x131540u;
    // 0x131540: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x131540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131544: 0x0  nop
    ctx->pc = 0x131544u;
    // NOP
label_131548:
    // 0x131548: 0xc08c8fe  jal         func_2323F8
    ctx->pc = 0x131548u;
    SET_GPR_U32(ctx, 31, 0x131550u);
    ctx->pc = 0x13154Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131548u;
            // 0x13154c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2323F8u;
    if (runtime->hasFunction(0x2323F8u)) {
        auto targetFn = runtime->lookupFunction(0x2323F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131550u; }
        if (ctx->pc != 0x131550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002323F8_0x2323f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131550u; }
        if (ctx->pc != 0x131550u) { return; }
    }
    ctx->pc = 0x131550u;
    // 0x131550: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x131550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131554: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x131554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131558: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x131558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13155c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x13155cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131564: 0x3e00008  jr          $ra
    ctx->pc = 0x131564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131564u;
            // 0x131568: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131548u: goto label_131548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13156Cu;
    // 0x13156c: 0x0  nop
    ctx->pc = 0x13156cu;
    // NOP
}
