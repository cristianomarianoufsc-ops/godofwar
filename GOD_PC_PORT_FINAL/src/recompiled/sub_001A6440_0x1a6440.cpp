#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6440
// Address: 0x1a6440 - 0x1a64f8
void sub_001A6440_0x1a6440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6440_0x1a6440");
#endif

    ctx->pc = 0x1a6440u;

    // 0x1a6440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a6440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a6444: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a6444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a6448: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a6448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a644c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a644cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6450: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a6454: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x1a6454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1a6458: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1a6458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1a645c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a645cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a6460: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A6460u;
    {
        const bool branch_taken_0x1a6460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6460u;
            // 0x1a6464: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6460) {
            ctx->pc = 0x1A64E0u;
            goto label_1a64e0;
        }
    }
    ctx->pc = 0x1A6468u;
    // 0x1a6468: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1a6468u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a646c: 0x0  nop
    ctx->pc = 0x1a646cu;
    // NOP
label_1a6470:
    // 0x1a6470: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6478: 0xc069778  jal         func_1A5DE0
    ctx->pc = 0x1A6478u;
    SET_GPR_U32(ctx, 31, 0x1A6480u);
    ctx->pc = 0x1A647Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6478u;
            // 0x1a647c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5DE0u;
    if (runtime->hasFunction(0x1A5DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6480u; }
        if (ctx->pc != 0x1A6480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5de0_0x1a5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6480u; }
        if (ctx->pc != 0x1A6480u) { return; }
    }
    ctx->pc = 0x1A6480u;
    // 0x1a6480: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A6480u;
    {
        const bool branch_taken_0x1a6480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6480u;
            // 0x1a6484: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6480) {
            ctx->pc = 0x1A64D4u;
            goto label_1a64d4;
        }
    }
    ctx->pc = 0x1A6488u;
    // 0x1a6488: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1a6488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a648c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A648Cu;
    {
        const bool branch_taken_0x1a648c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A648Cu;
            // 0x1a6490: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a648c) {
            ctx->pc = 0x1A649Cu;
            goto label_1a649c;
        }
    }
    ctx->pc = 0x1A6494u;
    // 0x1a6494: 0xc04c572  jal         func_1315C8
    ctx->pc = 0x1A6494u;
    SET_GPR_U32(ctx, 31, 0x1A649Cu);
    ctx->pc = 0x1A6498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6494u;
            // 0x1a6498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C8u;
    if (runtime->hasFunction(0x1315C8u)) {
        auto targetFn = runtime->lookupFunction(0x1315C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A649Cu; }
        if (ctx->pc != 0x1A649Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315c8_0x1315d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A649Cu; }
        if (ctx->pc != 0x1A649Cu) { return; }
    }
    ctx->pc = 0x1A649Cu;
label_1a649c:
    // 0x1a649c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a649cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a64a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a64a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a64a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a64a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a64a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a64ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a64acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a64b0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a64b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a64b4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a64b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1a64b8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A64B8u;
    {
        const bool branch_taken_0x1a64b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A64BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A64B8u;
            // 0x1a64bc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64b8) {
            ctx->pc = 0x1A64D0u;
            goto label_1a64d0;
        }
    }
    ctx->pc = 0x1A64C0u;
    // 0x1a64c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a64c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a64c4: 0xc06961c  jal         func_1A5870
    ctx->pc = 0x1A64C4u;
    SET_GPR_U32(ctx, 31, 0x1A64CCu);
    ctx->pc = 0x1A64C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A64C4u;
            // 0x1a64c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5870u;
    if (runtime->hasFunction(0x1A5870u)) {
        auto targetFn = runtime->lookupFunction(0x1A5870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64CCu; }
        if (ctx->pc != 0x1A64CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5870_0x1a5870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64CCu; }
        if (ctx->pc != 0x1A64CCu) { return; }
    }
    ctx->pc = 0x1A64CCu;
    // 0x1a64cc: 0x0  nop
    ctx->pc = 0x1a64ccu;
    // NOP
label_1a64d0:
    // 0x1a64d0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a64d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a64d4:
    // 0x1a64d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a64d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a64d8: 0x1462ffe5  bne         $v1, $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1A64D8u;
    {
        const bool branch_taken_0x1a64d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A64DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A64D8u;
            // 0x1a64dc: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64d8) {
            ctx->pc = 0x1A6470u;
            runtime->cooperativeGuestYield();
            goto label_1a6470;
        }
    }
    ctx->pc = 0x1A64E0u;
label_1a64e0:
    // 0x1a64e0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1a64e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1a64e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a64e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a64e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a64e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a64ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a64ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a64f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A64F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A64F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A64F0u;
            // 0x1a64f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6470u: goto label_1a6470;
            case 0x1A649Cu: goto label_1a649c;
            case 0x1A64D0u: goto label_1a64d0;
            case 0x1A64D4u: goto label_1a64d4;
            case 0x1A64E0u: goto label_1a64e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A64F8u;
}
