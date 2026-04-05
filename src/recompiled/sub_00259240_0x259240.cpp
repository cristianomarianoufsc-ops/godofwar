#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00259240
// Address: 0x259240 - 0x259380
void sub_00259240_0x259240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259240_0x259240");
#endif

    ctx->pc = 0x259240u;

label_259240:
    // 0x259240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x259240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x259244: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25924c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x25924cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259250: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x259250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x259254: 0xc08e218  jal         func_238860
    ctx->pc = 0x259254u;
    SET_GPR_U32(ctx, 31, 0x25925Cu);
    ctx->pc = 0x259258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259254u;
            // 0x259258: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25925Cu; }
        if (ctx->pc != 0x25925Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25925Cu; }
        if (ctx->pc != 0x25925Cu) { return; }
    }
    ctx->pc = 0x25925Cu;
    // 0x25925c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25925cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259260: 0x3e00008  jr          $ra
    ctx->pc = 0x259260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259260u;
            // 0x259264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259240u: goto label_259240;
            case 0x2592A8u: goto label_2592a8;
            case 0x2592CCu: goto label_2592cc;
            case 0x2592E0u: goto label_2592e0;
            case 0x259370u: goto label_259370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259268u;
    // 0x259268: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x259268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25926c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25926cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259270: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x259270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x259274: 0x24422b38  addiu       $v0, $v0, 0x2B38
    ctx->pc = 0x259274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11064));
    // 0x259278: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x259278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x25927c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x259280: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x259280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259288: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x259288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x25928c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x25928cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x259290: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x259290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259294: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x259294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x259298: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x259298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x25929c: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x25929Cu;
    {
        const bool branch_taken_0x25929c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2592A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25929Cu;
            // 0x2592a0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25929c) {
            ctx->pc = 0x2592CCu;
            goto label_2592cc;
        }
    }
    ctx->pc = 0x2592A4u;
    // 0x2592a4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2592a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2592a8:
    // 0x2592a8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2592a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2592ac: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x2592acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x2592b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2592b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2592b4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2592B4u;
    SET_GPR_U32(ctx, 31, 0x2592BCu);
    ctx->pc = 0x2592B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2592B4u;
            // 0x2592b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592BCu; }
        if (ctx->pc != 0x2592BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592BCu; }
        if (ctx->pc != 0x2592BCu) { return; }
    }
    ctx->pc = 0x2592BCu;
    // 0x2592bc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2592bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2592c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2592c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2592c4: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2592C4u;
    {
        const bool branch_taken_0x2592c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2592C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2592C4u;
            // 0x2592c8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592c4) {
            ctx->pc = 0x2592A8u;
            runtime->cooperativeGuestYield();
            goto label_2592a8;
        }
    }
    ctx->pc = 0x2592CCu;
label_2592cc:
    // 0x2592cc: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x2592ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x2592d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2592d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2592d4: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x2592d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x2592d8: 0xc096490  jal         func_259240
    ctx->pc = 0x2592D8u;
    SET_GPR_U32(ctx, 31, 0x2592E0u);
    ctx->pc = 0x2592DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2592D8u;
            // 0x2592dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259240u;
    runtime->cooperativeGuestYield();
    goto label_259240;
    ctx->pc = 0x2592E0u;
label_2592e0:
    // 0x2592e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2592e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2592e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2592e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2592e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2592e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2592ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2592ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2592f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2592F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2592F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2592F0u;
            // 0x2592f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259240u: goto label_259240;
            case 0x2592A8u: goto label_2592a8;
            case 0x2592CCu: goto label_2592cc;
            case 0x2592E0u: goto label_2592e0;
            case 0x259370u: goto label_259370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2592F8u;
    // 0x2592f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2592f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2592fc: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x2592fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x259300: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259304: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x259308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25930c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x25930Cu;
    SET_GPR_U32(ctx, 31, 0x259314u);
    ctx->pc = 0x259310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25930Cu;
            // 0x259310: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259314u; }
        if (ctx->pc != 0x259314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259314u; }
        if (ctx->pc != 0x259314u) { return; }
    }
    ctx->pc = 0x259314u;
    // 0x259314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259318: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x259318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25931c: 0xc0543e0  jal         func_150F80
    ctx->pc = 0x25931Cu;
    SET_GPR_U32(ctx, 31, 0x259324u);
    ctx->pc = 0x259320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25931Cu;
            // 0x259320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150F80u;
    if (runtime->hasFunction(0x150F80u)) {
        auto targetFn = runtime->lookupFunction(0x150F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259324u; }
        if (ctx->pc != 0x259324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150F80_0x150f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259324u; }
        if (ctx->pc != 0x259324u) { return; }
    }
    ctx->pc = 0x259324u;
    // 0x259324: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x259324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x259328: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x259328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25932c: 0x2463d2a8  addiu       $v1, $v1, -0x2D58
    ctx->pc = 0x25932cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955688));
    // 0x259330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259334: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x259334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x259338: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x259338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25933c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25933cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259340: 0x3e00008  jr          $ra
    ctx->pc = 0x259340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259340u;
            // 0x259344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259240u: goto label_259240;
            case 0x2592A8u: goto label_2592a8;
            case 0x2592CCu: goto label_2592cc;
            case 0x2592E0u: goto label_2592e0;
            case 0x259370u: goto label_259370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259348u;
    // 0x259348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x259348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25934c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x25934cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259350: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x259350u;
    {
        const bool branch_taken_0x259350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259350u;
            // 0x259354: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259350) {
            ctx->pc = 0x259370u;
            goto label_259370;
        }
    }
    ctx->pc = 0x259358u;
    // 0x259358: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x259358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x25935c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x25935cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x259360: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x259360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x259364: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x259364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x259368: 0x40f809  jalr        $v0
    ctx->pc = 0x259368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259370u);
        ctx->pc = 0x25936Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259368u;
            // 0x25936c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x259370u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259240u: goto label_259240;
            case 0x2592A8u: goto label_2592a8;
            case 0x2592CCu: goto label_2592cc;
            case 0x2592E0u: goto label_2592e0;
            case 0x259370u: goto label_259370;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x259370u; }
            if (ctx->pc != 0x259370u) { return; }
        }
        }
    }
    ctx->pc = 0x259370u;
label_259370:
    // 0x259370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259374: 0x3e00008  jr          $ra
    ctx->pc = 0x259374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259374u;
            // 0x259378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259240u: goto label_259240;
            case 0x2592A8u: goto label_2592a8;
            case 0x2592CCu: goto label_2592cc;
            case 0x2592E0u: goto label_2592e0;
            case 0x259370u: goto label_259370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25937Cu;
    // 0x25937c: 0x0  nop
    ctx->pc = 0x25937cu;
    // NOP
}
