#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00263330
// Address: 0x263330 - 0x2639d8
void sub_00263330_0x263330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263330_0x263330");
#endif

    ctx->pc = 0x263330u;

    // 0x263330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x263330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x263334: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x263334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x263338: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x263338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26333c: 0x24423c68  addiu       $v0, $v0, 0x3C68
    ctx->pc = 0x26333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15464));
    // 0x263340: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x263340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x263344: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x263344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26334c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26334cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263350: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x263350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x263354: 0xc048770  jal         func_121DC0
    ctx->pc = 0x263354u;
    SET_GPR_U32(ctx, 31, 0x26335Cu);
    ctx->pc = 0x263358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263354u;
            // 0x263358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121DC0u;
    if (runtime->hasFunction(0x121DC0u)) {
        auto targetFn = runtime->lookupFunction(0x121DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26335Cu; }
        if (ctx->pc != 0x26335Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121DC0_0x121dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26335Cu; }
        if (ctx->pc != 0x26335Cu) { return; }
    }
    ctx->pc = 0x26335Cu;
    // 0x26335c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x26335cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x263360: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x263360u;
    {
        const bool branch_taken_0x263360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x263364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263360u;
            // 0x263364: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263360) {
            ctx->pc = 0x263374u;
            goto label_263374;
        }
    }
    ctx->pc = 0x263368u;
    // 0x263368: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x263368u;
    SET_GPR_U32(ctx, 31, 0x263370u);
    ctx->pc = 0x26336Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263368u;
            // 0x26336c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263370u; }
        if (ctx->pc != 0x263370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263370u; }
        if (ctx->pc != 0x263370u) { return; }
    }
    ctx->pc = 0x263370u;
    // 0x263370: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x263370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_263374:
    // 0x263374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x263374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26337c: 0x3e00008  jr          $ra
    ctx->pc = 0x26337Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26337Cu;
            // 0x263380: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263374u: goto label_263374;
            case 0x2633F8u: goto label_2633f8;
            case 0x263430u: goto label_263430;
            case 0x263458u: goto label_263458;
            case 0x2634D8u: goto label_2634d8;
            case 0x2634F4u: goto label_2634f4;
            case 0x263540u: goto label_263540;
            case 0x263558u: goto label_263558;
            case 0x263568u: goto label_263568;
            case 0x26356Cu: goto label_26356c;
            case 0x2635A4u: goto label_2635a4;
            case 0x2635A8u: goto label_2635a8;
            case 0x2635C4u: goto label_2635c4;
            case 0x2635E0u: goto label_2635e0;
            case 0x263648u: goto label_263648;
            case 0x2636A4u: goto label_2636a4;
            case 0x2636E0u: goto label_2636e0;
            case 0x2637C0u: goto label_2637c0;
            case 0x263878u: goto label_263878;
            case 0x2638B4u: goto label_2638b4;
            case 0x263998u: goto label_263998;
            case 0x2639B4u: goto label_2639b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x263384u;
    // 0x263384: 0x0  nop
    ctx->pc = 0x263384u;
    // NOP
    // 0x263388: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x263388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26338c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x26338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x263390: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x263390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x263394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x263394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x263398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26339c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26339cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2633a0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2633a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2633a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2633a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2633a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2633a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2633ac: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2633acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2633b0: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2633B0u;
    {
        const bool branch_taken_0x2633b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2633B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2633B0u;
            // 0x2633b4: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2633b0) {
            ctx->pc = 0x263430u;
            goto label_263430;
        }
    }
    ctx->pc = 0x2633B8u;
    // 0x2633b8: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x2633b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2633bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2633bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2633c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2633C0u;
    {
        const bool branch_taken_0x2633c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2633C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2633C0u;
            // 0x2633c4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2633c0) {
            ctx->pc = 0x2633F8u;
            goto label_2633f8;
        }
    }
    ctx->pc = 0x2633C8u;
    // 0x2633c8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2633c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2633cc: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x2633ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x2633d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2633d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2633d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2633d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2633d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2633d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2633dc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2633dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2633e0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x2633e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2633e4: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2633e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2633e8: 0x40f809  jalr        $v0
    ctx->pc = 0x2633E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2633F0u);
        ctx->pc = 0x2633ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2633E8u;
            // 0x2633ec: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2633F0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263374u: goto label_263374;
            case 0x2633F8u: goto label_2633f8;
            case 0x263430u: goto label_263430;
            case 0x263458u: goto label_263458;
            case 0x2634D8u: goto label_2634d8;
            case 0x2634F4u: goto label_2634f4;
            case 0x263540u: goto label_263540;
            case 0x263558u: goto label_263558;
            case 0x263568u: goto label_263568;
            case 0x26356Cu: goto label_26356c;
            case 0x2635A4u: goto label_2635a4;
            case 0x2635A8u: goto label_2635a8;
            case 0x2635C4u: goto label_2635c4;
            case 0x2635E0u: goto label_2635e0;
            case 0x263648u: goto label_263648;
            case 0x2636A4u: goto label_2636a4;
            case 0x2636E0u: goto label_2636e0;
            case 0x2637C0u: goto label_2637c0;
            case 0x263878u: goto label_263878;
            case 0x2638B4u: goto label_2638b4;
            case 0x263998u: goto label_263998;
            case 0x2639B4u: goto label_2639b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2633F0u; }
            if (ctx->pc != 0x2633F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2633F0u;
    // 0x2633f0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2633f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2633f4: 0x0  nop
    ctx->pc = 0x2633f4u;
    // NOP
label_2633f8:
    // 0x2633f8: 0xc04c4a2  jal         func_131288
    ctx->pc = 0x2633F8u;
    SET_GPR_U32(ctx, 31, 0x263400u);
    ctx->pc = 0x2633FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2633F8u;
            // 0x2633fc: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131288u;
    if (runtime->hasFunction(0x131288u)) {
        auto targetFn = runtime->lookupFunction(0x131288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263400u; }
        if (ctx->pc != 0x263400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131288_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263400u; }
        if (ctx->pc != 0x263400u) { return; }
    }
    ctx->pc = 0x263400u;
    // 0x263400: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x263400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x263404: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x263404u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x263408: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x263408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x26340c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x26340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x263410: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x263410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x263414: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x263414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x263418: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x263418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26341c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x26341cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x263420: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x263420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x263424: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x263424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x263428: 0x40f809  jalr        $v0
    ctx->pc = 0x263428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263430u);
        ctx->pc = 0x26342Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263428u;
            // 0x26342c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263430u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263374u: goto label_263374;
            case 0x2633F8u: goto label_2633f8;
            case 0x263430u: goto label_263430;
            case 0x263458u: goto label_263458;
            case 0x2634D8u: goto label_2634d8;
            case 0x2634F4u: goto label_2634f4;
            case 0x263540u: goto label_263540;
            case 0x263558u: goto label_263558;
            case 0x263568u: goto label_263568;
            case 0x26356Cu: goto label_26356c;
            case 0x2635A4u: goto label_2635a4;
            case 0x2635A8u: goto label_2635a8;
            case 0x2635C4u: goto label_2635c4;
            case 0x2635E0u: goto label_2635e0;
            case 0x263648u: goto label_263648;
            case 0x2636A4u: goto label_2636a4;
            case 0x2636E0u: goto label_2636e0;
            case 0x2637C0u: goto label_2637c0;
            case 0x263878u: goto label_263878;
            case 0x2638B4u: goto label_2638b4;
            case 0x263998u: goto label_263998;
            case 0x2639B4u: goto label_2639b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263430u; }
            if (ctx->pc != 0x263430u) { return; }
        }
        }
    }
    ctx->pc = 0x263430u;
label_263430:
    // 0x263430: 0x12120009  beq         $s0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x263430u;
    {
        const bool branch_taken_0x263430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x263434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263430u;
            // 0x263434: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263430) {
            ctx->pc = 0x263458u;
            goto label_263458;
        }
    }
    ctx->pc = 0x263438u;
    // 0x263438: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x263438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26343c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26343cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263440: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x263440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263444: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x263444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263448: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x263448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26344c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x263450: 0x40f809  jalr        $v0
    ctx->pc = 0x263450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263458u);
        ctx->pc = 0x263454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263450u;
            // 0x263454: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263458u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263374u: goto label_263374;
            case 0x2633F8u: goto label_2633f8;
            case 0x263430u: goto label_263430;
            case 0x263458u: goto label_263458;
            case 0x2634D8u: goto label_2634d8;
            case 0x2634F4u: goto label_2634f4;
            case 0x263540u: goto label_263540;
            case 0x263558u: goto label_263558;
            case 0x263568u: goto label_263568;
            case 0x26356Cu: goto label_26356c;
            case 0x2635A4u: goto label_2635a4;
            case 0x2635A8u: goto label_2635a8;
            case 0x2635C4u: goto label_2635c4;
            case 0x2635E0u: goto label_2635e0;
            case 0x263648u: goto label_263648;
            case 0x2636A4u: goto label_2636a4;
            case 0x2636E0u: goto label_2636e0;
            case 0x2637C0u: goto label_2637c0;
            case 0x263878u: goto label_263878;
            case 0x2638B4u: goto label_2638b4;
            case 0x263998u: goto label_263998;
            case 0x2639B4u: goto label_2639b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263458u; }
            if (ctx->pc != 0x263458u) { return; }
        }
        }
    }
    ctx->pc = 0x263458u;
label_263458:
    // 0x263458: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x263458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26345c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x26345cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263460: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x263460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263464: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x263464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26346c: 0x3e00008  jr          $ra
    ctx->pc = 0x26346Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26346Cu;
            // 0x263470: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263374u: goto label_263374;
            case 0x2633F8u: goto label_2633f8;
            case 0x263430u: goto label_263430;
            case 0x263458u: goto label_263458;
            case 0x2634D8u: goto label_2634d8;
            case 0x2634F4u: goto label_2634f4;
            case 0x263540u: goto label_263540;
            case 0x263558u: goto label_263558;
            case 0x263568u: goto label_263568;
            case 0x26356Cu: goto label_26356c;
            case 0x2635A4u: goto label_2635a4;
            case 0x2635A8u: goto label_2635a8;
            case 0x2635C4u: goto label_2635c4;
            case 0x2635E0u: goto label_2635e0;
            case 0x263648u: goto label_263648;
            case 0x2636A4u: goto label_2636a4;
            case 0x2636E0u: goto label_2636e0;
            case 0x2637C0u: goto label_2637c0;
            case 0x263878u: goto label_263878;
            case 0x2638B4u: goto label_2638b4;
            case 0x263998u: goto label_263998;
            case 0x2639B4u: goto label_2639b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x263474u;
    // 0x263474: 0x0  nop
    ctx->pc = 0x263474u;
    // NOP
    // 0x263478: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x263478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x26347c: 0x24020408  addiu       $v0, $zero, 0x408
    ctx->pc = 0x26347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    // 0x263480: 0x7fb002a0  sq          $s0, 0x2A0($sp)
    ctx->pc = 0x263480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 16));
    // 0x263484: 0x7fb10290  sq          $s1, 0x290($sp)
    ctx->pc = 0x263484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 17));
    // 0x263488: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x263488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26348c: 0x7fb20280  sq          $s2, 0x280($sp)
    ctx->pc = 0x26348cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 18));
    // 0x263490: 0x7fb30270  sq          $s3, 0x270($sp)
    ctx->pc = 0x263490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 19));
    // 0x263494: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x263494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263498: 0xffbf0260  sd          $ra, 0x260($sp)
    ctx->pc = 0x263498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 31));
    // 0x26349c: 0xe7b502b8  swc1        $f21, 0x2B8($sp)
    ctx->pc = 0x26349cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
    // 0x2634a0: 0xe7b402b0  swc1        $f20, 0x2B0($sp)
    ctx->pc = 0x2634a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x2634a4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x2634a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2634a8: 0x146200c5  bne         $v1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2634A8u;
    {
        const bool branch_taken_0x2634a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2634ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2634A8u;
            // 0x2634ac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634a8) {
            ctx->pc = 0x2637C0u;
            goto label_2637c0;
        }
    }
    ctx->pc = 0x2634B0u;
    // 0x2634b0: 0xc06330c  jal         func_18CC30
    ctx->pc = 0x2634B0u;
    SET_GPR_U32(ctx, 31, 0x2634B8u);
    ctx->pc = 0x2634B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2634B0u;
            // 0x2634b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CC30u;
    if (runtime->hasFunction(0x18CC30u)) {
        auto targetFn = runtime->lookupFunction(0x18CC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634B8u; }
        if (ctx->pc != 0x2634B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_18cc30_0x18cc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634B8u; }
        if (ctx->pc != 0x2634B8u) { return; }
    }
    ctx->pc = 0x2634B8u;
    // 0x2634b8: 0x8e130018  lw          $s3, 0x18($s0)
    ctx->pc = 0x2634b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2634bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2634bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2634c0: 0xc4550000  lwc1        $f21, 0x0($v0)
    ctx->pc = 0x2634c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2634c4: 0x86620060  lh          $v0, 0x60($s3)
    ctx->pc = 0x2634c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2634c8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2634C8u;
    {
        const bool branch_taken_0x2634c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2634CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2634C8u;
            // 0x2634cc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634c8) {
            ctx->pc = 0x2634D8u;
            goto label_2634d8;
        }
    }
    ctx->pc = 0x2634D0u;
    // 0x2634d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2634D0u;
    {
        const bool branch_taken_0x2634d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2634D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2634D0u;
            // 0x2634d4: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634d0) {
            ctx->pc = 0x2634F4u;
            goto label_2634f4;
        }
    }
    ctx->pc = 0x2634D8u;
label_2634d8:
    // 0x2634d8: 0xde630068  ld          $v1, 0x68($s3)
    ctx->pc = 0x2634d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x2634dc: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x2634dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x2634e0: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2634E0u;
    {
        const bool branch_taken_0x2634e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2634E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2634E0u;
            // 0x2634e4: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634e0) {
            ctx->pc = 0x2634F4u;
            goto label_2634f4;
        }
    }
    ctx->pc = 0x2634E8u;
    // 0x2634e8: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x2634E8u;
    SET_GPR_U32(ctx, 31, 0x2634F0u);
    ctx->pc = 0x2634ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2634E8u;
            // 0x2634ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634F0u; }
        if (ctx->pc != 0x2634F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634F0u; }
        if (ctx->pc != 0x2634F0u) { return; }
    }
    ctx->pc = 0x2634F0u;
    // 0x2634f0: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x2634f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_2634f4:
    // 0x2634f4: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x2634f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2634f8: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x2634f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2634fc: 0x78840030  lq          $a0, 0x30($a0)
    ctx->pc = 0x2634fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x263500: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x263500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x263504: 0x7fa40250  sq          $a0, 0x250($sp)
    ctx->pc = 0x263504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 4));
    // 0x263508: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x263508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26350c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x26350cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x263510: 0x8e520010  lw          $s2, 0x10($s2)
    ctx->pc = 0x263510u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x263514: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x263514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x263518: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x263518u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x26351c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x26351cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x263520: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x263520u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x263524: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x263524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x263528: 0x8e4300fc  lw          $v1, 0xFC($s2)
    ctx->pc = 0x263528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x26352c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x26352Cu;
    {
        const bool branch_taken_0x26352c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x263530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26352Cu;
            // 0x263530: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26352c) {
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x263534u;
    // 0x263534: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x263534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x263538: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x263538u;
    {
        const bool branch_taken_0x263538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26353Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263538u;
            // 0x26353c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263538) {
            ctx->pc = 0x263558u;
            goto label_263558;
        }
    }
    ctx->pc = 0x263540u;
label_263540:
    // 0x263540: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x263540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x263544: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x263544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x263548: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x263548u;
    {
        const bool branch_taken_0x263548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263548) {
            ctx->pc = 0x26354Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x263548u;
            // 0x26354c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26356Cu;
            goto label_26356c;
        }
    }
    ctx->pc = 0x263550u;
    // 0x263550: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x263550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x263554: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x263554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_263558:
    // 0x263558: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x263558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x26355c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x26355cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x263560: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x263560u;
    {
        const bool branch_taken_0x263560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x263564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263560u;
            // 0x263564: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263560) {
            ctx->pc = 0x263540u;
            runtime->cooperativeGuestYield();
            goto label_263540;
        }
    }
    ctx->pc = 0x263568u;
label_263568:
    // 0x263568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x263568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26356c:
    // 0x26356c: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x26356cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x263570: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x263570u;
    {
        const bool branch_taken_0x263570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263570u;
            // 0x263574: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263570) {
            ctx->pc = 0x2635A8u;
            goto label_2635a8;
        }
    }
    ctx->pc = 0x263578u;
    // 0x263578: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x263578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26357c: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x26357cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x263580: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x263580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x263584: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x263584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x263588: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x263588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x26358c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x26358cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x263590: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x263590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263594: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x263594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263598: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x263598u;
    {
        const bool branch_taken_0x263598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x26359Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263598u;
            // 0x26359c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263598) {
            ctx->pc = 0x2635A4u;
            goto label_2635a4;
        }
    }
    ctx->pc = 0x2635A0u;
    // 0x2635a0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2635a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2635a4:
    // 0x2635a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2635a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2635a8:
    // 0x2635a8: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2635A8u;
    {
        const bool branch_taken_0x2635a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2635ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2635A8u;
            // 0x2635ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2635a8) {
            ctx->pc = 0x263648u;
            goto label_263648;
        }
    }
    ctx->pc = 0x2635B0u;
    // 0x2635b0: 0x86430060  lh          $v1, 0x60($s2)
    ctx->pc = 0x2635b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x2635b4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2635B4u;
    {
        const bool branch_taken_0x2635b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2635B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2635B4u;
            // 0x2635b8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2635b4) {
            ctx->pc = 0x2635C4u;
            goto label_2635c4;
        }
    }
    ctx->pc = 0x2635BCu;
    // 0x2635bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2635BCu;
    {
        const bool branch_taken_0x2635bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2635C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2635BCu;
            // 0x2635c0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2635bc) {
            ctx->pc = 0x2635E0u;
            goto label_2635e0;
        }
    }
    ctx->pc = 0x2635C4u;
label_2635c4:
    // 0x2635c4: 0xde430068  ld          $v1, 0x68($s2)
    ctx->pc = 0x2635c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x2635c8: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x2635c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x2635cc: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2635CCu;
    {
        const bool branch_taken_0x2635cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2635cc) {
            ctx->pc = 0x2635D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2635CCu;
            // 0x2635d0: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2635E0u;
            goto label_2635e0;
        }
    }
    ctx->pc = 0x2635D4u;
    // 0x2635d4: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x2635D4u;
    SET_GPR_U32(ctx, 31, 0x2635DCu);
    ctx->pc = 0x2635D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2635D4u;
            // 0x2635d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2635DCu; }
        if (ctx->pc != 0x2635DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2635DCu; }
        if (ctx->pc != 0x2635DCu) { return; }
    }
    ctx->pc = 0x2635DCu;
    // 0x2635dc: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x2635dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_2635e0:
    // 0x2635e0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2635e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2635e4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2635e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2635e8: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x2635e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2635ec: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2635ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2635f0: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x2635f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2635f4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2635f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2635f8: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x2635f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2635fc: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2635fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x263600: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x263600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x263604: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x263604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x263608: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x263608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x26360c: 0x40f809  jalr        $v0
    ctx->pc = 0x26360Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263614u);
        ctx->pc = 0x263610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26360Cu;
            // 0x263610: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263614u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263374u: goto label_263374;
            case 0x2633F8u: goto label_2633f8;
            case 0x263430u: goto label_263430;
            case 0x263458u: goto label_263458;
            case 0x2634D8u: goto label_2634d8;
            case 0x2634F4u: goto label_2634f4;
            case 0x263540u: goto label_263540;
            case 0x263558u: goto label_263558;
            case 0x263568u: goto label_263568;
            case 0x26356Cu: goto label_26356c;
            case 0x2635A4u: goto label_2635a4;
            case 0x2635A8u: goto label_2635a8;
            case 0x2635C4u: goto label_2635c4;
            case 0x2635E0u: goto label_2635e0;
            case 0x263648u: goto label_263648;
            case 0x2636A4u: goto label_2636a4;
            case 0x2636E0u: goto label_2636e0;
            case 0x2637C0u: goto label_2637c0;
            case 0x263878u: goto label_263878;
            case 0x2638B4u: goto label_2638b4;
            case 0x263998u: goto label_263998;
            case 0x2639B4u: goto label_2639b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263614u; }
            if (ctx->pc != 0x263614u) { return; }
        }
        }
    }
    ctx->pc = 0x263614u;
    // 0x263614: 0xdba20080  lqc2        $vf2, 0x80($sp)
    ctx->pc = 0x263614u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x263618: 0xdba10250  lqc2        $vf1, 0x250($sp)
    ctx->pc = 0x263618u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x26361c: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x26361cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x263620: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x263620u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263624: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x263624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x263628: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x263628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26362c: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x26362cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x263630: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x263630u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x263634: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x263634u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x263638: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x263638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26363c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x26363cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x263640: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x263640u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x263644: 0x0  nop
    ctx->pc = 0x263644u;
    // NOP
label_263648:
    // 0x263648: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x263648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x26364c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x26364cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x263650: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x263650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263654: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x263654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x263658: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x263658u;
    {
        const bool branch_taken_0x263658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26365Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263658u;
            // 0x26365c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x263658) {
            ctx->pc = 0x2636E0u;
            goto label_2636e0;
        }
    }
    ctx->pc = 0x263660u;
    // 0x263660: 0xc05c25a  jal         func_170968
    ctx->pc = 0x263660u;
    SET_GPR_U32(ctx, 31, 0x263668u);
    ctx->pc = 0x263664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263660u;
            // 0x263664: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170968u;
    if (runtime->hasFunction(0x170968u)) {
        auto targetFn = runtime->lookupFunction(0x170968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263668u; }
        if (ctx->pc != 0x263668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170968_0x170968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263668u; }
        if (ctx->pc != 0x263668u) { return; }
    }
    ctx->pc = 0x263668u;
    // 0x263668: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x263668u;
    {
        const bool branch_taken_0x263668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263668) {
            ctx->pc = 0x26366Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x263668u;
            // 0x26366c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2636A4u;
            goto label_2636a4;
        }
    }
    ctx->pc = 0x263670u;
    // 0x263670: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x263670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x263674: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x263674u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x263678: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x263678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26367c: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x26367cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
    // 0x263680: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x263680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263684: 0x0  nop
    ctx->pc = 0x263684u;
    // NOP
    // 0x263688: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x263688u;
    {
        const bool branch_taken_0x263688 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x263688) {
            ctx->pc = 0x26368Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x263688u;
            // 0x26368c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2636A4u;
            goto label_2636a4;
        }
    }
    ctx->pc = 0x263690u;
    // 0x263690: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x263690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x263694: 0xc05c294  jal         func_170A50
    ctx->pc = 0x263694u;
    SET_GPR_U32(ctx, 31, 0x26369Cu);
    ctx->pc = 0x263698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263694u;
            // 0x263698: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26369Cu; }
        if (ctx->pc != 0x26369Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26369Cu; }
        if (ctx->pc != 0x26369Cu) { return; }
    }
    ctx->pc = 0x26369Cu;
    // 0x26369c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26369Cu;
    {
        const bool branch_taken_0x26369c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26369c) {
            ctx->pc = 0x2636E0u;
            goto label_2636e0;
        }
    }
    ctx->pc = 0x2636A4u;
label_2636a4:
    // 0x2636a4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2636A4u;
    {
        const bool branch_taken_0x2636a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2636a4) {
            ctx->pc = 0x2636E0u;
            goto label_2636e0;
        }
    }
    ctx->pc = 0x2636ACu;
    // 0x2636ac: 0xc05c25a  jal         func_170968
    ctx->pc = 0x2636ACu;
    SET_GPR_U32(ctx, 31, 0x2636B4u);
    ctx->pc = 0x2636B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2636ACu;
            // 0x2636b0: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170968u;
    if (runtime->hasFunction(0x170968u)) {
        auto targetFn = runtime->lookupFunction(0x170968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2636B4u; }
        if (ctx->pc != 0x2636B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170968_0x170968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2636B4u; }
        if (ctx->pc != 0x2636B4u) { return; }
    }
    ctx->pc = 0x2636B4u;
    // 0x2636b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2636B4u;
    {
        const bool branch_taken_0x2636b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2636b4) {
            ctx->pc = 0x2636E0u;
            goto label_2636e0;
        }
    }
    ctx->pc = 0x2636BCu;
    // 0x2636bc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2636bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2636c0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2636c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2636c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2636c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2636c8: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x2636c8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
    // 0x2636cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2636ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2636d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2636D0u;
    {
        const bool branch_taken_0x2636d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2636d0) {
            ctx->pc = 0x2636E0u;
            goto label_2636e0;
        }
    }
    ctx->pc = 0x2636D8u;
    // 0x2636d8: 0xc05c2e6  jal         func_170B98
    ctx->pc = 0x2636D8u;
    SET_GPR_U32(ctx, 31, 0x2636E0u);
    ctx->pc = 0x2636DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2636D8u;
            // 0x2636dc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B98u;
    if (runtime->hasFunction(0x170B98u)) {
        auto targetFn = runtime->lookupFunction(0x170B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2636E0u; }
        if (ctx->pc != 0x2636E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B98_0x170b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2636E0u; }
        if (ctx->pc != 0x2636E0u) { return; }
    }
    ctx->pc = 0x2636E0u;
label_2636e0:
    // 0x2636e0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2636e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2636e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2636e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2636e8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2636e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2636ec: 0xc061248  jal         func_184920
    ctx->pc = 0x2636ECu;
    SET_GPR_U32(ctx, 31, 0x2636F4u);
    ctx->pc = 0x2636F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2636ECu;
            // 0x2636f0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184920u;
    if (runtime->hasFunction(0x184920u)) {
        auto targetFn = runtime->lookupFunction(0x184920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2636F4u; }
        if (ctx->pc != 0x2636F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184920_0x184920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2636F4u; }
        if (ctx->pc != 0x2636F4u) { return; }
    }
    ctx->pc = 0x2636F4u;
    // 0x2636f4: 0xdba60000  lqc2        $vf6, 0x0($sp)
    ctx->pc = 0x2636f4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2636f8: 0xdba70010  lqc2        $vf7, 0x10($sp)
    ctx->pc = 0x2636f8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2636fc: 0xdba80020  lqc2        $vf8, 0x20($sp)
    ctx->pc = 0x2636fcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263700: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x263700u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263704: 0xdba30090  lqc2        $vf3, 0x90($sp)
    ctx->pc = 0x263704u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x263708: 0xdba100a0  lqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x263708u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26370c: 0xdba200b0  lqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x26370cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x263710: 0xdba500c0  lqc2        $vf5, 0xC0($sp)
    ctx->pc = 0x263710u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x263714: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x263714u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x263718: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x263718u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x26371c: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x26371cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x263720: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x263720u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x263724: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x263724u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x263728: 0xfba30110  sqc2        $vf3, 0x110($sp)
    ctx->pc = 0x263728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x26372c: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x26372cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x263730: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x263730u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x263734: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x263734u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x263738: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x263738u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x26373c: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x26373cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x263740: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x263740u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x263744: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x263744u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x263748: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x263748u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x26374c: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x26374cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x263750: 0xfba20130  sqc2        $vf2, 0x130($sp)
    ctx->pc = 0x263750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x263754: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x263754u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x263758: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x263758u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x26375c: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x26375cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x263760: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x263760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x263764: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x263764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x263768: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x263768u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x26376c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26376cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263770: 0xdcc5bdf8  ld          $a1, -0x4208($a2)
    ctx->pc = 0x263770u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x263774: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x263774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263778: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x263778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26377c: 0xfba200f0  sqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x26377cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x263780: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x263780u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x263784: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x263784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x263788: 0xfa630020  sqc2        $vf3, 0x20($s3)
    ctx->pc = 0x263788u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x26378c: 0x86640060  lh          $a0, 0x60($s3)
    ctx->pc = 0x26378cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x263790: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x263790u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x263794: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x263794u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x263798: 0x7e630030  sq          $v1, 0x30($s3)
    ctx->pc = 0x263798u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 3));
    // 0x26379c: 0xa4380a  movz        $a3, $a1, $a0
    ctx->pc = 0x26379cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x2637a0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2637a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2637a4: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x2637a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2637a8: 0x7e630040  sq          $v1, 0x40($s3)
    ctx->pc = 0x2637a8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), GPR_VEC(ctx, 3));
    // 0x2637ac: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x2637acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2637b0: 0x7e630050  sq          $v1, 0x50($s3)
    ctx->pc = 0x2637b0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 80), GPR_VEC(ctx, 3));
    // 0x2637b4: 0xfcc5bdf8  sd          $a1, -0x4208($a2)
    ctx->pc = 0x2637b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 5));
    // 0x2637b8: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2637B8u;
    {
        const bool branch_taken_0x2637b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2637BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2637B8u;
            // 0x2637bc: 0xfe640068  sd          $a0, 0x68($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 104), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2637b8) {
            ctx->pc = 0x2639B4u;
            goto label_2639b4;
        }
    }
    ctx->pc = 0x2637C0u;
label_2637c0:
    // 0x2637c0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2637c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2637c4: 0x54620074  bnel        $v1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2637C4u;
    {
        const bool branch_taken_0x2637c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2637c4) {
            ctx->pc = 0x2637C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2637C4u;
            // 0x2637c8: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263998u;
            goto label_263998;
        }
    }
    ctx->pc = 0x2637CCu;
    // 0x2637cc: 0xc06330c  jal         func_18CC30
    ctx->pc = 0x2637CCu;
    SET_GPR_U32(ctx, 31, 0x2637D4u);
    ctx->pc = 0x2637D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2637CCu;
            // 0x2637d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CC30u;
    if (runtime->hasFunction(0x18CC30u)) {
        auto targetFn = runtime->lookupFunction(0x18CC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2637D4u; }
        if (ctx->pc != 0x2637D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_18cc30_0x18cc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2637D4u; }
        if (ctx->pc != 0x2637D4u) { return; }
    }
    ctx->pc = 0x2637D4u;
    // 0x2637d4: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x2637d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2637d8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2637d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2637dc: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x2637dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2637e0: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2637e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2637e4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2637e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2637e8: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x2637e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x2637ec: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2637ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2637f0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x2637f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2637f4: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x2637f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x2637f8: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x2637f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2637fc: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x2637fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x263800: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x263800u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x263804: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x263804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x263808: 0x4a820858  vmulx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x263808u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26380c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x26380cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x263810: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x263810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x263814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x263814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263818: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x263818u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26381c: 0x700717c9  prot3w      $v0, $a3
    ctx->pc = 0x26381cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x263820: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x263820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x263824: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x263824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x263828: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x263828u;
    {
        const bool branch_taken_0x263828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26382Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263828u;
            // 0x26382c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x263828) {
            ctx->pc = 0x2638B4u;
            goto label_2638b4;
        }
    }
    ctx->pc = 0x263830u;
    // 0x263830: 0xc05c25a  jal         func_170968
    ctx->pc = 0x263830u;
    SET_GPR_U32(ctx, 31, 0x263838u);
    ctx->pc = 0x263834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263830u;
            // 0x263834: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170968u;
    if (runtime->hasFunction(0x170968u)) {
        auto targetFn = runtime->lookupFunction(0x170968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263838u; }
        if (ctx->pc != 0x263838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170968_0x170968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263838u; }
        if (ctx->pc != 0x263838u) { return; }
    }
    ctx->pc = 0x263838u;
    // 0x263838: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x263838u;
    {
        const bool branch_taken_0x263838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263838) {
            ctx->pc = 0x26383Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x263838u;
            // 0x26383c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263878u;
            goto label_263878;
        }
    }
    ctx->pc = 0x263840u;
    // 0x263840: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x263840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x263844: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x263844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x263848: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x263848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26384c: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x26384cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
    // 0x263850: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x263850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263854: 0x0  nop
    ctx->pc = 0x263854u;
    // NOP
    // 0x263858: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x263858u;
    {
        const bool branch_taken_0x263858 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x263858) {
            ctx->pc = 0x26385Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x263858u;
            // 0x26385c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263878u;
            goto label_263878;
        }
    }
    ctx->pc = 0x263860u;
    // 0x263860: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x263860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x263864: 0xc05c294  jal         func_170A50
    ctx->pc = 0x263864u;
    SET_GPR_U32(ctx, 31, 0x26386Cu);
    ctx->pc = 0x263868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263864u;
            // 0x263868: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26386Cu; }
        if (ctx->pc != 0x26386Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26386Cu; }
        if (ctx->pc != 0x26386Cu) { return; }
    }
    ctx->pc = 0x26386Cu;
    // 0x26386c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26386Cu;
    {
        const bool branch_taken_0x26386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26386c) {
            ctx->pc = 0x2638B4u;
            goto label_2638b4;
        }
    }
    ctx->pc = 0x263874u;
    // 0x263874: 0x0  nop
    ctx->pc = 0x263874u;
    // NOP
label_263878:
    // 0x263878: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x263878u;
    {
        const bool branch_taken_0x263878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x263878) {
            ctx->pc = 0x2638B4u;
            goto label_2638b4;
        }
    }
    ctx->pc = 0x263880u;
    // 0x263880: 0xc05c25a  jal         func_170968
    ctx->pc = 0x263880u;
    SET_GPR_U32(ctx, 31, 0x263888u);
    ctx->pc = 0x263884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263880u;
            // 0x263884: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170968u;
    if (runtime->hasFunction(0x170968u)) {
        auto targetFn = runtime->lookupFunction(0x170968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263888u; }
        if (ctx->pc != 0x263888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170968_0x170968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263888u; }
        if (ctx->pc != 0x263888u) { return; }
    }
    ctx->pc = 0x263888u;
    // 0x263888: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x263888u;
    {
        const bool branch_taken_0x263888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263888) {
            ctx->pc = 0x2638B4u;
            goto label_2638b4;
        }
    }
    ctx->pc = 0x263890u;
    // 0x263890: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x263890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x263894: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x263894u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x263898: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x263898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26389c: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x26389cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
    // 0x2638a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2638a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2638a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2638A4u;
    {
        const bool branch_taken_0x2638a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2638a4) {
            ctx->pc = 0x2638B4u;
            goto label_2638b4;
        }
    }
    ctx->pc = 0x2638ACu;
    // 0x2638ac: 0xc05c2e6  jal         func_170B98
    ctx->pc = 0x2638ACu;
    SET_GPR_U32(ctx, 31, 0x2638B4u);
    ctx->pc = 0x2638B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2638ACu;
            // 0x2638b0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B98u;
    if (runtime->hasFunction(0x170B98u)) {
        auto targetFn = runtime->lookupFunction(0x170B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638B4u; }
        if (ctx->pc != 0x2638B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B98_0x170b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638B4u; }
        if (ctx->pc != 0x2638B4u) { return; }
    }
    ctx->pc = 0x2638B4u;
label_2638b4:
    // 0x2638b4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2638b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2638b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2638b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2638bc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2638bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2638c0: 0xc061248  jal         func_184920
    ctx->pc = 0x2638C0u;
    SET_GPR_U32(ctx, 31, 0x2638C8u);
    ctx->pc = 0x2638C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2638C0u;
            // 0x2638c4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184920u;
    if (runtime->hasFunction(0x184920u)) {
        auto targetFn = runtime->lookupFunction(0x184920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638C8u; }
        if (ctx->pc != 0x2638C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184920_0x184920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638C8u; }
        if (ctx->pc != 0x2638C8u) { return; }
    }
    ctx->pc = 0x2638C8u;
    // 0x2638c8: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x2638c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2638cc: 0xdba60150  lqc2        $vf6, 0x150($sp)
    ctx->pc = 0x2638ccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2638d0: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x2638d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2638d4: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x2638d4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2638d8: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x2638d8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2638dc: 0xdba30190  lqc2        $vf3, 0x190($sp)
    ctx->pc = 0x2638dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2638e0: 0xdba101a0  lqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x2638e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2638e4: 0xdba201b0  lqc2        $vf2, 0x1B0($sp)
    ctx->pc = 0x2638e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2638e8: 0xdba501c0  lqc2        $vf5, 0x1C0($sp)
    ctx->pc = 0x2638e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2638ec: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x2638ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x2638f0: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x2638f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2638f4: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x2638f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2638f8: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x2638f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2638fc: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x2638fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x263900: 0xfba30210  sqc2        $vf3, 0x210($sp)
    ctx->pc = 0x263900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x263904: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x263904u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x263908: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x263908u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x26390c: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x26390cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x263910: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x263910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x263914: 0xfba10220  sqc2        $vf1, 0x220($sp)
    ctx->pc = 0x263914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x263918: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x263918u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x26391c: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x26391cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x263920: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x263920u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x263924: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x263924u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x263928: 0xfba20230  sqc2        $vf2, 0x230($sp)
    ctx->pc = 0x263928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x26392c: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x26392cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x263930: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x263930u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x263934: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x263934u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x263938: 0xfba40240  sqc2        $vf4, 0x240($sp)
    ctx->pc = 0x263938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26393c: 0xfba301d0  sqc2        $vf3, 0x1D0($sp)
    ctx->pc = 0x26393cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x263940: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x263940u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x263944: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x263944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263948: 0xdcc5bdf8  ld          $a1, -0x4208($a2)
    ctx->pc = 0x263948u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x26394c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26394cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263950: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x263950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x263954: 0xfba201f0  sqc2        $vf2, 0x1F0($sp)
    ctx->pc = 0x263954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x263958: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x263958u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x26395c: 0xfba40200  sqc2        $vf4, 0x200($sp)
    ctx->pc = 0x26395cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x263960: 0xfa030020  sqc2        $vf3, 0x20($s0)
    ctx->pc = 0x263960u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x263964: 0x86040060  lh          $a0, 0x60($s0)
    ctx->pc = 0x263964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x263968: 0x7ba301e0  lq          $v1, 0x1E0($sp)
    ctx->pc = 0x263968u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x26396c: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x26396cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x263970: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x263970u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x263974: 0xa4380a  movz        $a3, $a1, $a0
    ctx->pc = 0x263974u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x263978: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x263978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26397c: 0x7ba301f0  lq          $v1, 0x1F0($sp)
    ctx->pc = 0x26397cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x263980: 0x7e030040  sq          $v1, 0x40($s0)
    ctx->pc = 0x263980u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
    // 0x263984: 0x7ba30200  lq          $v1, 0x200($sp)
    ctx->pc = 0x263984u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x263988: 0x7e030050  sq          $v1, 0x50($s0)
    ctx->pc = 0x263988u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 3));
    // 0x26398c: 0xfcc5bdf8  sd          $a1, -0x4208($a2)
    ctx->pc = 0x26398cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 5));
    // 0x263990: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263990u;
    {
        const bool branch_taken_0x263990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263990u;
            // 0x263994: 0xfe040068  sd          $a0, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263990) {
            ctx->pc = 0x2639B4u;
            goto label_2639b4;
        }
    }
    ctx->pc = 0x263998u;
label_263998:
    // 0x263998: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x263998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26399c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26399cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2639a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2639a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2639a4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x2639a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2639a8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2639a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2639ac: 0x40f809  jalr        $v0
    ctx->pc = 0x2639ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2639B4u);
        ctx->pc = 0x2639B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2639ACu;
            // 0x2639b0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2639B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263374u: goto label_263374;
            case 0x2633F8u: goto label_2633f8;
            case 0x263430u: goto label_263430;
            case 0x263458u: goto label_263458;
            case 0x2634D8u: goto label_2634d8;
            case 0x2634F4u: goto label_2634f4;
            case 0x263540u: goto label_263540;
            case 0x263558u: goto label_263558;
            case 0x263568u: goto label_263568;
            case 0x26356Cu: goto label_26356c;
            case 0x2635A4u: goto label_2635a4;
            case 0x2635A8u: goto label_2635a8;
            case 0x2635C4u: goto label_2635c4;
            case 0x2635E0u: goto label_2635e0;
            case 0x263648u: goto label_263648;
            case 0x2636A4u: goto label_2636a4;
            case 0x2636E0u: goto label_2636e0;
            case 0x2637C0u: goto label_2637c0;
            case 0x263878u: goto label_263878;
            case 0x2638B4u: goto label_2638b4;
            case 0x263998u: goto label_263998;
            case 0x2639B4u: goto label_2639b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2639B4u; }
            if (ctx->pc != 0x2639B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2639B4u;
label_2639b4:
    // 0x2639b4: 0x7bb002a0  lq          $s0, 0x2A0($sp)
    ctx->pc = 0x2639b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2639b8: 0x7bb10290  lq          $s1, 0x290($sp)
    ctx->pc = 0x2639b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2639bc: 0x7bb20280  lq          $s2, 0x280($sp)
    ctx->pc = 0x2639bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2639c0: 0x7bb30270  lq          $s3, 0x270($sp)
    ctx->pc = 0x2639c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2639c4: 0xdfbf0260  ld          $ra, 0x260($sp)
    ctx->pc = 0x2639c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2639c8: 0xc7b502b8  lwc1        $f21, 0x2B8($sp)
    ctx->pc = 0x2639c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2639cc: 0xc7b402b0  lwc1        $f20, 0x2B0($sp)
    ctx->pc = 0x2639ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2639d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2639D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2639D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2639D0u;
            // 0x2639d4: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263374u: goto label_263374;
            case 0x2633F8u: goto label_2633f8;
            case 0x263430u: goto label_263430;
            case 0x263458u: goto label_263458;
            case 0x2634D8u: goto label_2634d8;
            case 0x2634F4u: goto label_2634f4;
            case 0x263540u: goto label_263540;
            case 0x263558u: goto label_263558;
            case 0x263568u: goto label_263568;
            case 0x26356Cu: goto label_26356c;
            case 0x2635A4u: goto label_2635a4;
            case 0x2635A8u: goto label_2635a8;
            case 0x2635C4u: goto label_2635c4;
            case 0x2635E0u: goto label_2635e0;
            case 0x263648u: goto label_263648;
            case 0x2636A4u: goto label_2636a4;
            case 0x2636E0u: goto label_2636e0;
            case 0x2637C0u: goto label_2637c0;
            case 0x263878u: goto label_263878;
            case 0x2638B4u: goto label_2638b4;
            case 0x263998u: goto label_263998;
            case 0x2639B4u: goto label_2639b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2639D8u;
}
