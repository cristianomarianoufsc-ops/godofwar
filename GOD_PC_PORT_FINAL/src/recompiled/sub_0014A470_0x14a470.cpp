#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014A470
// Address: 0x14a470 - 0x14a560
void sub_0014A470_0x14a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A470_0x14a470");
#endif

    ctx->pc = 0x14a470u;

    // 0x14a470: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14a470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14a474: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14a474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14a478: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x14a478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x14a47c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14a47cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a480: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14a480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14a484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a488: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x14a488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14a48c: 0x8e3000e0  lw          $s0, 0xE0($s1)
    ctx->pc = 0x14a48cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x14a490: 0x8e040ce8  lw          $a0, 0xCE8($s0)
    ctx->pc = 0x14a490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3304)));
    // 0x14a494: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A494u;
    {
        const bool branch_taken_0x14a494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A494u;
            // 0x14a498: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a494) {
            ctx->pc = 0x14A4A4u;
            goto label_14a4a4;
        }
    }
    ctx->pc = 0x14A49Cu;
    // 0x14a49c: 0xc08ed70  jal         func_23B5C0
    ctx->pc = 0x14A49Cu;
    SET_GPR_U32(ctx, 31, 0x14A4A4u);
    ctx->pc = 0x23B5C0u;
    if (runtime->hasFunction(0x23B5C0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4A4u; }
        if (ctx->pc != 0x14A4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5C0_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4A4u; }
        if (ctx->pc != 0x14A4A4u) { return; }
    }
    ctx->pc = 0x14A4A4u;
label_14a4a4:
    // 0x14a4a4: 0x8e030cd4  lw          $v1, 0xCD4($s0)
    ctx->pc = 0x14a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3284)));
    // 0x14a4a8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14A4A8u;
    {
        const bool branch_taken_0x14a4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A4A8u;
            // 0x14a4ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4a8) {
            ctx->pc = 0x14A4CCu;
            goto label_14a4cc;
        }
    }
    ctx->pc = 0x14A4B0u;
    // 0x14a4b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14a4b4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x14a4b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14a4b8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14a4bc: 0x40f809  jalr        $v0
    ctx->pc = 0x14A4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14A4C4u);
        ctx->pc = 0x14A4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A4BCu;
            // 0x14a4c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14A4C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14A4A4u: goto label_14a4a4;
            case 0x14A4CCu: goto label_14a4cc;
            case 0x14A4E0u: goto label_14a4e0;
            case 0x14A510u: goto label_14a510;
            case 0x14A544u: goto label_14a544;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14A4C4u; }
            if (ctx->pc != 0x14A4C4u) { return; }
        }
        }
    }
    ctx->pc = 0x14A4C4u;
    // 0x14a4c4: 0xc0530bc  jal         func_14C2F0
    ctx->pc = 0x14A4C4u;
    SET_GPR_U32(ctx, 31, 0x14A4CCu);
    ctx->pc = 0x14A4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A4C4u;
            // 0x14a4c8: 0x8e040cd4  lw          $a0, 0xCD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3284)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C2F0u;
    if (runtime->hasFunction(0x14C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x14C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4CCu; }
        if (ctx->pc != 0x14A4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C2F0_0x14c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4CCu; }
        if (ctx->pc != 0x14A4CCu) { return; }
    }
    ctx->pc = 0x14A4CCu;
label_14a4cc:
    // 0x14a4cc: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x14a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x14a4d0: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x14A4D0u;
    SET_GPR_U32(ctx, 31, 0x14A4D8u);
    ctx->pc = 0x14A4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A4D0u;
            // 0x14a4d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4D8u; }
        if (ctx->pc != 0x14A4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4D8u; }
        if (ctx->pc != 0x14A4D8u) { return; }
    }
    ctx->pc = 0x14A4D8u;
    // 0x14a4d8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x14a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14a4dc: 0x0  nop
    ctx->pc = 0x14a4dcu;
    // NOP
label_14a4e0:
    // 0x14a4e0: 0x262200e4  addiu       $v0, $s1, 0xE4
    ctx->pc = 0x14a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    // 0x14a4e4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x14a4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14a4e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a4ec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14A4ECu;
    {
        const bool branch_taken_0x14a4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A4ECu;
            // 0x14a4f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4ec) {
            ctx->pc = 0x14A510u;
            goto label_14a510;
        }
    }
    ctx->pc = 0x14A4F4u;
    // 0x14a4f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14a4f8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x14a4f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14a4fc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14a500: 0x40f809  jalr        $v0
    ctx->pc = 0x14A500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14A508u);
        ctx->pc = 0x14A504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A500u;
            // 0x14a504: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14A508u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14A4A4u: goto label_14a4a4;
            case 0x14A4CCu: goto label_14a4cc;
            case 0x14A4E0u: goto label_14a4e0;
            case 0x14A510u: goto label_14a510;
            case 0x14A544u: goto label_14a544;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14A508u; }
            if (ctx->pc != 0x14A508u) { return; }
        }
        }
    }
    ctx->pc = 0x14A508u;
    // 0x14a508: 0xc0530bc  jal         func_14C2F0
    ctx->pc = 0x14A508u;
    SET_GPR_U32(ctx, 31, 0x14A510u);
    ctx->pc = 0x14A50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A508u;
            // 0x14a50c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C2F0u;
    if (runtime->hasFunction(0x14C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x14C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A510u; }
        if (ctx->pc != 0x14A510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C2F0_0x14c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A510u; }
        if (ctx->pc != 0x14A510u) { return; }
    }
    ctx->pc = 0x14A510u;
label_14a510:
    // 0x14a510: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14a510u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14a514: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x14a514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14a518: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x14A518u;
    {
        const bool branch_taken_0x14a518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A518u;
            // 0x14a51c: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a518) {
            ctx->pc = 0x14A4E0u;
            runtime->cooperativeGuestYield();
            goto label_14a4e0;
        }
    }
    ctx->pc = 0x14A520u;
    // 0x14a520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a524: 0xc08e4b2  jal         func_2392C8
    ctx->pc = 0x14A524u;
    SET_GPR_U32(ctx, 31, 0x14A52Cu);
    ctx->pc = 0x14A528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A524u;
            // 0x14a528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2392C8u;
    if (runtime->hasFunction(0x2392C8u)) {
        auto targetFn = runtime->lookupFunction(0x2392C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A52Cu; }
        if (ctx->pc != 0x14A52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002392C8_0x2392c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A52Cu; }
        if (ctx->pc != 0x14A52Cu) { return; }
    }
    ctx->pc = 0x14A52Cu;
    // 0x14a52c: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x14a52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x14a530: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A530u;
    {
        const bool branch_taken_0x14a530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A530u;
            // 0x14a534: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a530) {
            ctx->pc = 0x14A544u;
            goto label_14a544;
        }
    }
    ctx->pc = 0x14A538u;
    // 0x14a538: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x14A538u;
    SET_GPR_U32(ctx, 31, 0x14A540u);
    ctx->pc = 0x14A53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A538u;
            // 0x14a53c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A540u; }
        if (ctx->pc != 0x14A540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A540u; }
        if (ctx->pc != 0x14A540u) { return; }
    }
    ctx->pc = 0x14A540u;
    // 0x14a540: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x14a540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14a544:
    // 0x14a544: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14a544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a548: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14a548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a54c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x14a54cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a554: 0x3e00008  jr          $ra
    ctx->pc = 0x14A554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A554u;
            // 0x14a558: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14A4A4u: goto label_14a4a4;
            case 0x14A4CCu: goto label_14a4cc;
            case 0x14A4E0u: goto label_14a4e0;
            case 0x14A510u: goto label_14a510;
            case 0x14A544u: goto label_14a544;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14A55Cu;
    // 0x14a55c: 0x0  nop
    ctx->pc = 0x14a55cu;
    // NOP
}
