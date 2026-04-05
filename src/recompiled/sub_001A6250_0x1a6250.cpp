#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6250
// Address: 0x1a6250 - 0x1a6378
void sub_001A6250_0x1a6250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6250_0x1a6250");
#endif

    ctx->pc = 0x1a6250u;

    // 0x1a6250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a6250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a6254: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a6254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a6258: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a625c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a6260: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6264: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a6264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a6268: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1a6268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1a626c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a626cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6270: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a6270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a6274: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a6274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a6278: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a6278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a627c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A627Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6284u);
        ctx->pc = 0x1A6280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A627Cu;
            // 0x1a6280: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6284u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A62B0u: goto label_1a62b0;
            case 0x1A62E0u: goto label_1a62e0;
            case 0x1A6340u: goto label_1a6340;
            case 0x1A6354u: goto label_1a6354;
            case 0x1A6360u: goto label_1a6360;
            case 0x1A6364u: goto label_1a6364;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6284u; }
            if (ctx->pc != 0x1A6284u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6284u;
    // 0x1a6284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a6284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6288: 0xc06cd42  jal         func_1B3508
    ctx->pc = 0x1A6288u;
    SET_GPR_U32(ctx, 31, 0x1A6290u);
    ctx->pc = 0x1A628Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6288u;
            // 0x1a628c: 0x8e040088  lw          $a0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3508u;
    if (runtime->hasFunction(0x1B3508u)) {
        auto targetFn = runtime->lookupFunction(0x1B3508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6290u; }
        if (ctx->pc != 0x1A6290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3508_0x1b3508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6290u; }
        if (ctx->pc != 0x1A6290u) { return; }
    }
    ctx->pc = 0x1A6290u;
    // 0x1a6290: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a6290u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6294: 0x50600033  beql        $v1, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x1A6294u;
    {
        const bool branch_taken_0x1a6294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6294) {
            ctx->pc = 0x1A6298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6294u;
            // 0x1a6298: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6364u;
            goto label_1a6364;
        }
    }
    ctx->pc = 0x1A629Cu;
    // 0x1a629c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a629cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a62a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a62a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a62a4: 0x1043002e  beq         $v0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1A62A4u;
    {
        const bool branch_taken_0x1a62a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A62A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A62A4u;
            // 0x1a62a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a62a4) {
            ctx->pc = 0x1A6360u;
            goto label_1a6360;
        }
    }
    ctx->pc = 0x1A62ACu;
    // 0x1a62ac: 0x0  nop
    ctx->pc = 0x1a62acu;
    // NOP
label_1a62b0:
    // 0x1a62b0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a62b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a62b4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a62b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a62b8: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A62B8u;
    {
        const bool branch_taken_0x1a62b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a62b8) {
            ctx->pc = 0x1A62BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A62B8u;
            // 0x1a62bc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6354u;
            goto label_1a6354;
        }
    }
    ctx->pc = 0x1A62C0u;
    // 0x1a62c0: 0x56030024  bnel        $s0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A62C0u;
    {
        const bool branch_taken_0x1a62c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a62c0) {
            ctx->pc = 0x1A62C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A62C0u;
            // 0x1a62c4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6354u;
            goto label_1a6354;
        }
    }
    ctx->pc = 0x1A62C8u;
    // 0x1a62c8: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x1a62c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a62cc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a62ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1a62d0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a62d4: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A62D4u;
    {
        const bool branch_taken_0x1a62d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A62D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A62D4u;
            // 0x1a62d8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a62d4) {
            ctx->pc = 0x1A6360u;
            goto label_1a6360;
        }
    }
    ctx->pc = 0x1A62DCu;
    // 0x1a62dc: 0x0  nop
    ctx->pc = 0x1a62dcu;
    // NOP
label_1a62e0:
    // 0x1a62e0: 0x8fb00014  lw          $s0, 0x14($sp)
    ctx->pc = 0x1a62e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1a62e4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a62e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a62e8: 0x56220015  bnel        $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A62E8u;
    {
        const bool branch_taken_0x1a62e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a62e8) {
            ctx->pc = 0x1A62ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A62E8u;
            // 0x1a62ec: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6340u;
            goto label_1a6340;
        }
    }
    ctx->pc = 0x1A62F0u;
    // 0x1a62f0: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1a62f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1a62f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a62f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a62f8: 0x24a5d7c8  addiu       $a1, $a1, -0x2838
    ctx->pc = 0x1a62f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957000));
    // 0x1a62fc: 0xc04c572  jal         func_1315C8
    ctx->pc = 0x1A62FCu;
    SET_GPR_U32(ctx, 31, 0x1A6304u);
    ctx->pc = 0x1A6300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A62FCu;
            // 0x1a6300: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C8u;
    if (runtime->hasFunction(0x1315C8u)) {
        auto targetFn = runtime->lookupFunction(0x1315C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6304u; }
        if (ctx->pc != 0x1A6304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315c8_0x1315d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6304u; }
        if (ctx->pc != 0x1A6304u) { return; }
    }
    ctx->pc = 0x1A6304u;
    // 0x1a6304: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a6304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a6308: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a630c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a630cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a6310: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a6310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6314: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a6314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a6318: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a6318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a631c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a631cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1a6320: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A6320u;
    {
        const bool branch_taken_0x1a6320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6320u;
            // 0x1a6324: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6320) {
            ctx->pc = 0x1A6360u;
            goto label_1a6360;
        }
    }
    ctx->pc = 0x1A6328u;
    // 0x1a6328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a632c: 0xc06961c  jal         func_1A5870
    ctx->pc = 0x1A632Cu;
    SET_GPR_U32(ctx, 31, 0x1A6334u);
    ctx->pc = 0x1A6330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A632Cu;
            // 0x1a6330: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5870u;
    if (runtime->hasFunction(0x1A5870u)) {
        auto targetFn = runtime->lookupFunction(0x1A5870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6334u; }
        if (ctx->pc != 0x1A6334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5870_0x1a5870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6334u; }
        if (ctx->pc != 0x1A6334u) { return; }
    }
    ctx->pc = 0x1A6334u;
    // 0x1a6334: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A6334u;
    {
        const bool branch_taken_0x1a6334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6334u;
            // 0x1a6338: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6334) {
            ctx->pc = 0x1A6364u;
            goto label_1a6364;
        }
    }
    ctx->pc = 0x1A633Cu;
    // 0x1a633c: 0x0  nop
    ctx->pc = 0x1a633cu;
    // NOP
label_1a6340:
    // 0x1a6340: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a6340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6344: 0x1443ffe6  bne         $v0, $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1A6344u;
    {
        const bool branch_taken_0x1a6344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A6348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6344u;
            // 0x1a6348: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6344) {
            ctx->pc = 0x1A62E0u;
            runtime->cooperativeGuestYield();
            goto label_1a62e0;
        }
    }
    ctx->pc = 0x1A634Cu;
    // 0x1a634c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A634Cu;
    {
        const bool branch_taken_0x1a634c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A634Cu;
            // 0x1a6350: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a634c) {
            ctx->pc = 0x1A6364u;
            goto label_1a6364;
        }
    }
    ctx->pc = 0x1A6354u;
label_1a6354:
    // 0x1a6354: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a6354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6358: 0x1443ffd5  bne         $v0, $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1A6358u;
    {
        const bool branch_taken_0x1a6358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A635Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6358u;
            // 0x1a635c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6358) {
            ctx->pc = 0x1A62B0u;
            runtime->cooperativeGuestYield();
            goto label_1a62b0;
        }
    }
    ctx->pc = 0x1A6360u;
label_1a6360:
    // 0x1a6360: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a6360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a6364:
    // 0x1a6364: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a6364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6368: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a636c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A636Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A636Cu;
            // 0x1a6370: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A62B0u: goto label_1a62b0;
            case 0x1A62E0u: goto label_1a62e0;
            case 0x1A6340u: goto label_1a6340;
            case 0x1A6354u: goto label_1a6354;
            case 0x1A6360u: goto label_1a6360;
            case 0x1A6364u: goto label_1a6364;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6374u;
    // 0x1a6374: 0x0  nop
    ctx->pc = 0x1a6374u;
    // NOP
}
