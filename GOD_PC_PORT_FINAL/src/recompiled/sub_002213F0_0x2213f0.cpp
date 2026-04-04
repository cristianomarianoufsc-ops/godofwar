#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002213F0
// Address: 0x2213f0 - 0x2215e8
void sub_002213F0_0x2213f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002213F0_0x2213f0");
#endif

    ctx->pc = 0x2213f0u;

    // 0x2213f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2213f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2213f4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2213f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2213f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2213f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2213fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2213fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221400: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x221400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x221404: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x221404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x221408: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x221408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x22140c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x22140cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x221410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221414: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x221414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x221418: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x221418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x22141c: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x22141Cu;
    {
        const bool branch_taken_0x22141c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22141Cu;
            // 0x221420: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22141c) {
            ctx->pc = 0x2215C0u;
            goto label_2215c0;
        }
    }
    ctx->pc = 0x221424u;
    // 0x221424: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x221424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x221428: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x221428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22142c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x22142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x221430: 0x40f809  jalr        $v0
    ctx->pc = 0x221430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x221438u);
        ctx->pc = 0x221434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221430u;
            // 0x221434: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x221438u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221478u: goto label_221478;
            case 0x2214B8u: goto label_2214b8;
            case 0x2214E4u: goto label_2214e4;
            case 0x221550u: goto label_221550;
            case 0x22159Cu: goto label_22159c;
            case 0x2215C0u: goto label_2215c0;
            case 0x2215C4u: goto label_2215c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x221438u; }
            if (ctx->pc != 0x221438u) { return; }
        }
        }
    }
    ctx->pc = 0x221438u;
    // 0x221438: 0x8c510388  lw          $s1, 0x388($v0)
    ctx->pc = 0x221438u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 904)));
    // 0x22143c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x22143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x221440: 0x26350058  addiu       $s5, $s1, 0x58
    ctx->pc = 0x221440u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x221444: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x221444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x221448: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x221448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x22144c: 0x40f809  jalr        $v0
    ctx->pc = 0x22144Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x221454u);
        ctx->pc = 0x221450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22144Cu;
            // 0x221450: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x221454u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221478u: goto label_221478;
            case 0x2214B8u: goto label_2214b8;
            case 0x2214E4u: goto label_2214e4;
            case 0x221550u: goto label_221550;
            case 0x22159Cu: goto label_22159c;
            case 0x2215C0u: goto label_2215c0;
            case 0x2215C4u: goto label_2215c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x221454u; }
            if (ctx->pc != 0x221454u) { return; }
        }
        }
    }
    ctx->pc = 0x221454u;
    // 0x221454: 0x8c430388  lw          $v1, 0x388($v0)
    ctx->pc = 0x221454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 904)));
    // 0x221458: 0x82220058  lb          $v0, 0x58($s1)
    ctx->pc = 0x221458u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x22145c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22145Cu;
    {
        const bool branch_taken_0x22145c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22145Cu;
            // 0x221460: 0x24730088  addiu       $s3, $v1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22145c) {
            ctx->pc = 0x221478u;
            goto label_221478;
        }
    }
    ctx->pc = 0x221464u;
    // 0x221464: 0x52400057  beql        $s2, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x221464u;
    {
        const bool branch_taken_0x221464 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x221464) {
            ctx->pc = 0x221468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221464u;
            // 0x221468: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2215C4u;
            goto label_2215c4;
        }
    }
    ctx->pc = 0x22146Cu;
    // 0x22146c: 0x80620088  lb          $v0, 0x88($v1)
    ctx->pc = 0x22146cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x221470: 0x50400054  beql        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x221470u;
    {
        const bool branch_taken_0x221470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221470) {
            ctx->pc = 0x221474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221470u;
            // 0x221474: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2215C4u;
            goto label_2215c4;
        }
    }
    ctx->pc = 0x221478u;
label_221478:
    // 0x221478: 0xc0796e4  jal         func_1E5B90
    ctx->pc = 0x221478u;
    SET_GPR_U32(ctx, 31, 0x221480u);
    ctx->pc = 0x22147Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221478u;
            // 0x22147c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5B90u;
    if (runtime->hasFunction(0x1E5B90u)) {
        auto targetFn = runtime->lookupFunction(0x1E5B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221480u; }
        if (ctx->pc != 0x221480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5B90_0x1e5b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221480u; }
        if (ctx->pc != 0x221480u) { return; }
    }
    ctx->pc = 0x221480u;
    // 0x221480: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x221480u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221484: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x221484u;
    {
        const bool branch_taken_0x221484 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x221488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221484u;
            // 0x221488: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221484) {
            ctx->pc = 0x2214B8u;
            goto label_2214b8;
        }
    }
    ctx->pc = 0x22148Cu;
    // 0x22148c: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x22148cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x221490: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x221490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x221494: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x221494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x221498: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x221498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22149c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22149cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2214a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2214a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2214a4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2214a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2214a8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x2214a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2214ac: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x2214acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x2214b0: 0x40f809  jalr        $v0
    ctx->pc = 0x2214B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2214B8u);
        ctx->pc = 0x2214B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2214B0u;
            // 0x2214b4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2214B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221478u: goto label_221478;
            case 0x2214B8u: goto label_2214b8;
            case 0x2214E4u: goto label_2214e4;
            case 0x221550u: goto label_221550;
            case 0x22159Cu: goto label_22159c;
            case 0x2215C0u: goto label_2215c0;
            case 0x2215C4u: goto label_2215c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2214B8u; }
            if (ctx->pc != 0x2214B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2214B8u;
label_2214b8:
    // 0x2214b8: 0x82220058  lb          $v0, 0x58($s1)
    ctx->pc = 0x2214b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2214bc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2214BCu;
    {
        const bool branch_taken_0x2214bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2214bc) {
            ctx->pc = 0x2214C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2214BCu;
            // 0x2214c0: 0x82620000  lb          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2214E4u;
            goto label_2214e4;
        }
    }
    ctx->pc = 0x2214C4u;
    // 0x2214c4: 0xc05e996  jal         func_17A658
    ctx->pc = 0x2214C4u;
    SET_GPR_U32(ctx, 31, 0x2214CCu);
    ctx->pc = 0x2214C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2214C4u;
            // 0x2214c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2214CCu; }
        if (ctx->pc != 0x2214CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2214CCu; }
        if (ctx->pc != 0x2214CCu) { return; }
    }
    ctx->pc = 0x2214CCu;
    // 0x2214cc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2214CCu;
    {
        const bool branch_taken_0x2214cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2214cc) {
            ctx->pc = 0x2214D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2214CCu;
            // 0x2214d0: 0x82620000  lb          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2214E4u;
            goto label_2214e4;
        }
    }
    ctx->pc = 0x2214D4u;
    // 0x2214d4: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x2214d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x2214d8: 0xc05c294  jal         func_170A50
    ctx->pc = 0x2214D8u;
    SET_GPR_U32(ctx, 31, 0x2214E0u);
    ctx->pc = 0x2214DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2214D8u;
            // 0x2214dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2214E0u; }
        if (ctx->pc != 0x2214E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2214E0u; }
        if (ctx->pc != 0x2214E0u) { return; }
    }
    ctx->pc = 0x2214E0u;
    // 0x2214e0: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x2214e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2214e4:
    // 0x2214e4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2214E4u;
    {
        const bool branch_taken_0x2214e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2214e4) {
            ctx->pc = 0x22159Cu;
            goto label_22159c;
        }
    }
    ctx->pc = 0x2214ECu;
    // 0x2214ec: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x2214ECu;
    {
        const bool branch_taken_0x2214ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2214ec) {
            ctx->pc = 0x22159Cu;
            goto label_22159c;
        }
    }
    ctx->pc = 0x2214F4u;
    // 0x2214f4: 0xc089990  jal         func_226640
    ctx->pc = 0x2214F4u;
    SET_GPR_U32(ctx, 31, 0x2214FCu);
    ctx->pc = 0x2214F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2214F4u;
            // 0x2214f8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (runtime->hasFunction(0x226640u)) {
        auto targetFn = runtime->lookupFunction(0x226640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2214FCu; }
        if (ctx->pc != 0x2214FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226640_0x226680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2214FCu; }
        if (ctx->pc != 0x2214FCu) { return; }
    }
    ctx->pc = 0x2214FCu;
    // 0x2214fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2214fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221500: 0xc089e18  jal         func_227860
    ctx->pc = 0x221500u;
    SET_GPR_U32(ctx, 31, 0x221508u);
    ctx->pc = 0x221504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221500u;
            // 0x221504: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227860u;
    if (runtime->hasFunction(0x227860u)) {
        auto targetFn = runtime->lookupFunction(0x227860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221508u; }
        if (ctx->pc != 0x221508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227860_0x227860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221508u; }
        if (ctx->pc != 0x221508u) { return; }
    }
    ctx->pc = 0x221508u;
    // 0x221508: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x221508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22150c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x221510: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x221510u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x221514: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x221514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x221518: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x221518u;
    {
        const bool branch_taken_0x221518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22151Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221518u;
            // 0x22151c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221518) {
            ctx->pc = 0x22159Cu;
            goto label_22159c;
        }
    }
    ctx->pc = 0x221520u;
    // 0x221520: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x221520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x221524: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x221524u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x221528: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x221528u;
    SET_GPR_U32(ctx, 31, 0x221530u);
    ctx->pc = 0x22152Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221528u;
            // 0x22152c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221530u; }
        if (ctx->pc != 0x221530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221530u; }
        if (ctx->pc != 0x221530u) { return; }
    }
    ctx->pc = 0x221530u;
    // 0x221530: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x221530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221534: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x221534u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x221538: 0xde65bdf8  ld          $a1, -0x4208($s3)
    ctx->pc = 0x221538u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 4294950392)));
    // 0x22153c: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x22153cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x221540: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x221540u;
    {
        const bool branch_taken_0x221540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x221544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221540u;
            // 0x221544: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221540) {
            ctx->pc = 0x221550u;
            goto label_221550;
        }
    }
    ctx->pc = 0x221548u;
    // 0x221548: 0xc04da64  jal         func_136990
    ctx->pc = 0x221548u;
    SET_GPR_U32(ctx, 31, 0x221550u);
    ctx->pc = 0x22154Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221548u;
            // 0x22154c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221550u; }
        if (ctx->pc != 0x221550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221550u; }
        if (ctx->pc != 0x221550u) { return; }
    }
    ctx->pc = 0x221550u;
label_221550:
    // 0x221550: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x221550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x221554: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x221554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x221558: 0xde65bdf8  ld          $a1, -0x4208($s3)
    ctx->pc = 0x221558u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 4294950392)));
    // 0x22155c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x22155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x221560: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x221560u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x221564: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x221564u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x221568: 0x86220060  lh          $v0, 0x60($s1)
    ctx->pc = 0x221568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x22156c: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x22156cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x221570: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x221570u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x221574: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x221574u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221578: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x221578u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x22157c: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x22157cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x221580: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x221580u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x221584: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x221584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x221588: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x221588u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x22158c: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x22158cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x221590: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x221590u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x221594: 0xfe65bdf8  sd          $a1, -0x4208($s3)
    ctx->pc = 0x221594u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 4294950392), GPR_U64(ctx, 5));
    // 0x221598: 0xfe230068  sd          $v1, 0x68($s1)
    ctx->pc = 0x221598u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
label_22159c:
    // 0x22159c: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x22159Cu;
    {
        const bool branch_taken_0x22159c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2215A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22159Cu;
            // 0x2215a0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22159c) {
            ctx->pc = 0x2215C0u;
            goto label_2215c0;
        }
    }
    ctx->pc = 0x2215A4u;
    // 0x2215a4: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x2215a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x2215a8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2215a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2215ac: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2215acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2215b0: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2215b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2215b4: 0x40f809  jalr        $v0
    ctx->pc = 0x2215B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2215BCu);
        ctx->pc = 0x2215B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2215B4u;
            // 0x2215b8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2215BCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221478u: goto label_221478;
            case 0x2214B8u: goto label_2214b8;
            case 0x2214E4u: goto label_2214e4;
            case 0x221550u: goto label_221550;
            case 0x22159Cu: goto label_22159c;
            case 0x2215C0u: goto label_2215c0;
            case 0x2215C4u: goto label_2215c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2215BCu; }
            if (ctx->pc != 0x2215BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2215BCu;
    // 0x2215bc: 0x0  nop
    ctx->pc = 0x2215bcu;
    // NOP
label_2215c0:
    // 0x2215c0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2215c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2215c4:
    // 0x2215c4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2215c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2215c8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2215c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2215cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2215ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2215d0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2215d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2215d4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2215d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2215d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2215d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2215dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2215DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2215E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2215DCu;
            // 0x2215e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221478u: goto label_221478;
            case 0x2214B8u: goto label_2214b8;
            case 0x2214E4u: goto label_2214e4;
            case 0x221550u: goto label_221550;
            case 0x22159Cu: goto label_22159c;
            case 0x2215C0u: goto label_2215c0;
            case 0x2215C4u: goto label_2215c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2215E4u;
    // 0x2215e4: 0x0  nop
    ctx->pc = 0x2215e4u;
    // NOP
}
