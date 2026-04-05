#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027A428
// Address: 0x27a428 - 0x27a520
void sub_0027A428_0x27a428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A428_0x27a428");
#endif

    ctx->pc = 0x27a428u;

    // 0x27a428: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27a428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27a42c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27a42cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27a430: 0x8c431714  lw          $v1, 0x1714($v0)
    ctx->pc = 0x27a430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5908)));
    // 0x27a434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27a434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27a438: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27A438u;
    {
        const bool branch_taken_0x27a438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A438u;
            // 0x27a43c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a438) {
            ctx->pc = 0x27A460u;
            goto label_27a460;
        }
    }
    ctx->pc = 0x27A440u;
    // 0x27a440: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x27a440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x27a444: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27a444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a448: 0xac621760  sw          $v0, 0x1760($v1)
    ctx->pc = 0x27a448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5984), GPR_U32(ctx, 2));
    // 0x27a44c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x27a44cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x27a450: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27A450u;
    SET_GPR_U32(ctx, 31, 0x27A458u);
    ctx->pc = 0x27A454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A450u;
            // 0x27a454: 0x8e041720  lw          $a0, 0x1720($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5920)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A458u; }
        if (ctx->pc != 0x27A458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A458u; }
        if (ctx->pc != 0x27A458u) { return; }
    }
    ctx->pc = 0x27A458u;
    // 0x27a458: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27A458u;
    {
        const bool branch_taken_0x27a458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A458u;
            // 0x27a45c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a458) {
            ctx->pc = 0x27A468u;
            goto label_27a468;
        }
    }
    ctx->pc = 0x27A460u;
label_27a460:
    // 0x27a460: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x27a460u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x27a464: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27a464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_27a468:
    // 0x27a468: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x27A468u;
    SET_GPR_U32(ctx, 31, 0x27A470u);
    ctx->pc = 0x27A46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A468u;
            // 0x27a46c: 0x8c441728  lw          $a0, 0x1728($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5928)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A470u; }
        if (ctx->pc != 0x27A470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A470u; }
        if (ctx->pc != 0x27A470u) { return; }
    }
    ctx->pc = 0x27A470u;
    // 0x27a470: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x27a470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x27a474: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x27A474u;
    SET_GPR_U32(ctx, 31, 0x27A47Cu);
    ctx->pc = 0x27A478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A474u;
            // 0x27a478: 0x8c64172c  lw          $a0, 0x172C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5932)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A47Cu; }
        if (ctx->pc != 0x27A47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A47Cu; }
        if (ctx->pc != 0x27A47Cu) { return; }
    }
    ctx->pc = 0x27A47Cu;
    // 0x27a47c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x27a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x27a480: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x27A480u;
    SET_GPR_U32(ctx, 31, 0x27A488u);
    ctx->pc = 0x27A484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A480u;
            // 0x27a484: 0x8c641730  lw          $a0, 0x1730($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5936)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A488u; }
        if (ctx->pc != 0x27A488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A488u; }
        if (ctx->pc != 0x27A488u) { return; }
    }
    ctx->pc = 0x27A488u;
    // 0x27a488: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x27A488u;
    SET_GPR_U32(ctx, 31, 0x27A490u);
    ctx->pc = 0x27A48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A488u;
            // 0x27a48c: 0x8e041720  lw          $a0, 0x1720($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5920)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A490u; }
        if (ctx->pc != 0x27A490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A490u; }
        if (ctx->pc != 0x27A490u) { return; }
    }
    ctx->pc = 0x27A490u;
    // 0x27a490: 0xc0a648c  jal         func_299230
    ctx->pc = 0x27A490u;
    SET_GPR_U32(ctx, 31, 0x27A498u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A498u; }
        if (ctx->pc != 0x27A498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A498u; }
        if (ctx->pc != 0x27A498u) { return; }
    }
    ctx->pc = 0x27A498u;
    // 0x27a498: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27a498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x27a49c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a4a0: 0xc0a5a12  jal         func_296848
    ctx->pc = 0x27A4A0u;
    SET_GPR_U32(ctx, 31, 0x27A4A8u);
    ctx->pc = 0x27A4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A4A0u;
            // 0x27a4a4: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
    ctx->pc = 0x296848u;
    if (runtime->hasFunction(0x296848u)) {
        auto targetFn = runtime->lookupFunction(0x296848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A4A8u; }
        if (ctx->pc != 0x27A4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296848_0x296898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A4A8u; }
        if (ctx->pc != 0x27A4A8u) { return; }
    }
    ctx->pc = 0x27A4A8u;
    // 0x27a4a8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A4A8u;
    {
        const bool branch_taken_0x27a4a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A4A8u;
            // 0x27a4ac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4a8) {
            ctx->pc = 0x27A4BCu;
            goto label_27a4bc;
        }
    }
    ctx->pc = 0x27A4B0u;
    // 0x27a4b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a4b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a4b4: 0x80a64a0  j           func_299280
    ctx->pc = 0x27A4B4u;
    ctx->pc = 0x27A4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A4B4u;
            // 0x27a4b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_299280_0x299298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x27A4BCu;
label_27a4bc:
    // 0x27a4bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a4bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x27A4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A4C0u;
            // 0x27a4c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A460u: goto label_27a460;
            case 0x27A468u: goto label_27a468;
            case 0x27A4BCu: goto label_27a4bc;
            case 0x27A50Cu: goto label_27a50c;
            case 0x27A510u: goto label_27a510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A4C8u;
    // 0x27a4c8: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x27a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x27a4cc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27a4ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27a4d0: 0x8c45a888  lw          $a1, -0x5778($v0)
    ctx->pc = 0x27a4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944904)));
    // 0x27a4d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27a4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27a4d8: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x27A4D8u;
    {
        const bool branch_taken_0x27a4d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A4D8u;
            // 0x27a4dc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4d8) {
            ctx->pc = 0x27A50Cu;
            goto label_27a50c;
        }
    }
    ctx->pc = 0x27A4E0u;
    // 0x27a4e0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27a4e4: 0x8c431724  lw          $v1, 0x1724($v0)
    ctx->pc = 0x27a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5924)));
    // 0x27a4e8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27A4E8u;
    {
        const bool branch_taken_0x27a4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A4E8u;
            // 0x27a4ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4e8) {
            ctx->pc = 0x27A510u;
            goto label_27a510;
        }
    }
    ctx->pc = 0x27A4F0u;
    // 0x27a4f0: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x27a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x27a4f4: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x27a4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a4f8: 0x8c5ca88c  lw          $gp, -0x5774($v0)
    ctx->pc = 0x27a4f8u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944908)));
    // 0x27a4fc: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27a500: 0xa0f809  jalr        $a1
    ctx->pc = 0x27A500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x27A508u);
        ctx->pc = 0x27A504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A500u;
            // 0x27a504: 0x8c64a890  lw          $a0, -0x5770($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944912)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27A508u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A460u: goto label_27a460;
            case 0x27A468u: goto label_27a468;
            case 0x27A4BCu: goto label_27a4bc;
            case 0x27A50Cu: goto label_27a50c;
            case 0x27A510u: goto label_27a510;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27A508u; }
            if (ctx->pc != 0x27A508u) { return; }
        }
        }
    }
    ctx->pc = 0x27A508u;
    // 0x27a508: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x27a508u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27a50c:
    // 0x27a50c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27a50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27a510:
    // 0x27a510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a514: 0x3e00008  jr          $ra
    ctx->pc = 0x27A514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A514u;
            // 0x27a518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A460u: goto label_27a460;
            case 0x27A468u: goto label_27a468;
            case 0x27A4BCu: goto label_27a4bc;
            case 0x27A50Cu: goto label_27a50c;
            case 0x27A510u: goto label_27a510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A51Cu;
    // 0x27a51c: 0x0  nop
    ctx->pc = 0x27a51cu;
    // NOP
}
