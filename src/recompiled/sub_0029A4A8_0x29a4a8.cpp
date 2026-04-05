#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A4A8
// Address: 0x29a4a8 - 0x29a700
void sub_0029A4A8_0x29a4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A4A8_0x29a4a8");
#endif

    ctx->pc = 0x29a4a8u;

    // 0x29a4a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29a4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29a4ac: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x29a4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x29a4b0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x29a4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29a4b4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x29a4b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4b8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29a4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29a4bc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29a4bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4c0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29a4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x29a4c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x29a4c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4c8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29a4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29a4cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29a4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29a4d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29a4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29a4d4: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A4D4u;
    {
        const bool branch_taken_0x29a4d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A4D4u;
            // 0x29a4d8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a4d4) {
            ctx->pc = 0x29A4E8u;
            goto label_29a4e8;
        }
    }
    ctx->pc = 0x29A4DCu;
    // 0x29a4dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29a4e0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x29A4E0u;
    {
        const bool branch_taken_0x29a4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A4E0u;
            // 0x29a4e4: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a4e0) {
            ctx->pc = 0x29A5ACu;
            goto label_29a5ac;
        }
    }
    ctx->pc = 0x29A4E8u;
label_29a4e8:
    // 0x29a4e8: 0xc0a648c  jal         func_299230
    ctx->pc = 0x29A4E8u;
    SET_GPR_U32(ctx, 31, 0x29A4F0u);
    ctx->pc = 0x29A4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A4E8u;
            // 0x29a4ec: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A4F0u; }
        if (ctx->pc != 0x29A4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A4F0u; }
        if (ctx->pc != 0x29A4F0u) { return; }
    }
    ctx->pc = 0x29A4F0u;
    // 0x29a4f0: 0x8e50d3c0  lw          $s0, -0x2C40($s2)
    ctx->pc = 0x29a4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294955968)));
    // 0x29a4f4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A4F4u;
    {
        const bool branch_taken_0x29a4f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A4F4u;
            // 0x29a4f8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a4f4) {
            ctx->pc = 0x29A504u;
            goto label_29a504;
        }
    }
    ctx->pc = 0x29A4FCu;
    // 0x29a4fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a500: 0xae42d3c0  sw          $v0, -0x2C40($s2)
    ctx->pc = 0x29a500u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294955968), GPR_U32(ctx, 2));
label_29a504:
    // 0x29a504: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29A504u;
    {
        const bool branch_taken_0x29a504 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a504) {
            ctx->pc = 0x29A528u;
            goto label_29a528;
        }
    }
    ctx->pc = 0x29A50Cu;
    // 0x29a50c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A50Cu;
    {
        const bool branch_taken_0x29a50c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a50c) {
            ctx->pc = 0x29A51Cu;
            goto label_29a51c;
        }
    }
    ctx->pc = 0x29A514u;
    // 0x29a514: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x29A514u;
    SET_GPR_U32(ctx, 31, 0x29A51Cu);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A51Cu; }
        if (ctx->pc != 0x29A51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A51Cu; }
        if (ctx->pc != 0x29A51Cu) { return; }
    }
    ctx->pc = 0x29A51Cu;
label_29a51c:
    // 0x29a51c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29a520: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x29A520u;
    {
        const bool branch_taken_0x29a520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A520u;
            // 0x29a524: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a520) {
            ctx->pc = 0x29A5ACu;
            goto label_29a5ac;
        }
    }
    ctx->pc = 0x29A528u;
label_29a528:
    // 0x29a528: 0xc0a681e  jal         func_29A078
    ctx->pc = 0x29A528u;
    SET_GPR_U32(ctx, 31, 0x29A530u);
    ctx->pc = 0x29A078u;
    if (runtime->hasFunction(0x29A078u)) {
        auto targetFn = runtime->lookupFunction(0x29A078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A530u; }
        if (ctx->pc != 0x29A530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A078_0x29a078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A530u; }
        if (ctx->pc != 0x29A530u) { return; }
    }
    ctx->pc = 0x29A530u;
    // 0x29a530: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29a530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a534: 0x623000b  bgezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x29A534u;
    {
        const bool branch_taken_0x29a534 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x29a534) {
            ctx->pc = 0x29A538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29A534u;
            // 0x29a538: 0xae140008  sw          $s4, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29A564u;
            goto label_29a564;
        }
    }
    ctx->pc = 0x29A53Cu;
    // 0x29a53c: 0x8e42d3c0  lw          $v0, -0x2C40($s2)
    ctx->pc = 0x29a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294955968)));
    // 0x29a540: 0xae50d3c0  sw          $s0, -0x2C40($s2)
    ctx->pc = 0x29a540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294955968), GPR_U32(ctx, 16));
    // 0x29a544: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29a544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29a548: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x29a548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x29a54c: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x29A54Cu;
    {
        const bool branch_taken_0x29a54c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A54Cu;
            // 0x29a550: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a54c) {
            ctx->pc = 0x29A5ACu;
            goto label_29a5ac;
        }
    }
    ctx->pc = 0x29A554u;
    // 0x29a554: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x29A554u;
    SET_GPR_U32(ctx, 31, 0x29A55Cu);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A55Cu; }
        if (ctx->pc != 0x29A55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A55Cu; }
        if (ctx->pc != 0x29A55Cu) { return; }
    }
    ctx->pc = 0x29A55Cu;
    // 0x29a55c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x29A55Cu;
    {
        const bool branch_taken_0x29a55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A55Cu;
            // 0x29a560: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a55c) {
            ctx->pc = 0x29A5ACu;
            goto label_29a5ac;
        }
    }
    ctx->pc = 0x29A564u;
label_29a564:
    // 0x29a564: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x29a564u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x29a568: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x29a568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x29a56c: 0x24c6a448  addiu       $a2, $a2, -0x5BB8
    ctx->pc = 0x29a56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943816));
    // 0x29a570: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x29a570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x29a574: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29a574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29a578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a57c: 0xc0a68be  jal         func_29A2F8
    ctx->pc = 0x29A57Cu;
    SET_GPR_U32(ctx, 31, 0x29A584u);
    ctx->pc = 0x29A580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A57Cu;
            // 0x29a580: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A2F8u;
    if (runtime->hasFunction(0x29A2F8u)) {
        auto targetFn = runtime->lookupFunction(0x29A2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A584u; }
        if (ctx->pc != 0x29A584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A2F8_0x29a2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A584u; }
        if (ctx->pc != 0x29A584u) { return; }
    }
    ctx->pc = 0x29A584u;
    // 0x29a584: 0xc0a6860  jal         func_29A180
    ctx->pc = 0x29A584u;
    SET_GPR_U32(ctx, 31, 0x29A58Cu);
    ctx->pc = 0x29A588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A584u;
            // 0x29a588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A180u;
    if (runtime->hasFunction(0x29A180u)) {
        auto targetFn = runtime->lookupFunction(0x29A180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A58Cu; }
        if (ctx->pc != 0x29A58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A180_0x29a180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A58Cu; }
        if (ctx->pc != 0x29A58Cu) { return; }
    }
    ctx->pc = 0x29A58Cu;
    // 0x29a58c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A58Cu;
    {
        const bool branch_taken_0x29a58c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A58Cu;
            // 0x29a590: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a58c) {
            ctx->pc = 0x29A5A0u;
            goto label_29a5a0;
        }
    }
    ctx->pc = 0x29A594u;
    // 0x29a594: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x29A594u;
    SET_GPR_U32(ctx, 31, 0x29A59Cu);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A59Cu; }
        if (ctx->pc != 0x29A59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A59Cu; }
        if (ctx->pc != 0x29A59Cu) { return; }
    }
    ctx->pc = 0x29A59Cu;
    // 0x29a59c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x29a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_29a5a0:
    // 0x29a5a0: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x29a5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x29a5a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29a5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29a5a8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x29a5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_29a5ac:
    // 0x29a5ac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29a5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29a5b0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x29a5b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29a5b4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x29a5b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a5b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29a5b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a5bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29a5bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a5c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29a5c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a5c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29a5c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a5c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x29A5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A5CCu;
            // 0x29a5d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A4E8u: goto label_29a4e8;
            case 0x29A504u: goto label_29a504;
            case 0x29A51Cu: goto label_29a51c;
            case 0x29A528u: goto label_29a528;
            case 0x29A564u: goto label_29a564;
            case 0x29A5A0u: goto label_29a5a0;
            case 0x29A5ACu: goto label_29a5ac;
            case 0x29A614u: goto label_29a614;
            case 0x29A62Cu: goto label_29a62c;
            case 0x29A640u: goto label_29a640;
            case 0x29A66Cu: goto label_29a66c;
            case 0x29A6A4u: goto label_29a6a4;
            case 0x29A6A8u: goto label_29a6a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A5D4u;
    // 0x29a5d4: 0x0  nop
    ctx->pc = 0x29a5d4u;
    // NOP
    // 0x29a5d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29a5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29a5dc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x29a5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29a5e0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29a5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29a5e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x29a5e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a5e8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29a5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29a5ec: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29a5ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a5f0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29a5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29a5f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29a5f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a5f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29a5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29a5fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29a5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29a600: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A600u;
    {
        const bool branch_taken_0x29a600 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A600u;
            // 0x29a604: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a600) {
            ctx->pc = 0x29A614u;
            goto label_29a614;
        }
    }
    ctx->pc = 0x29A608u;
    // 0x29a608: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29a608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29a60c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x29A60Cu;
    {
        const bool branch_taken_0x29a60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A60Cu;
            // 0x29a610: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a60c) {
            ctx->pc = 0x29A6A4u;
            goto label_29a6a4;
        }
    }
    ctx->pc = 0x29A614u;
label_29a614:
    // 0x29a614: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x29a614u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x29a618: 0x8e50d3c0  lw          $s0, -0x2C40($s2)
    ctx->pc = 0x29a618u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294955968)));
    // 0x29a61c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A61Cu;
    {
        const bool branch_taken_0x29a61c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a61c) {
            ctx->pc = 0x29A62Cu;
            goto label_29a62c;
        }
    }
    ctx->pc = 0x29A624u;
    // 0x29a624: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29a624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a628: 0xae42d3c0  sw          $v0, -0x2C40($s2)
    ctx->pc = 0x29a628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294955968), GPR_U32(ctx, 2));
label_29a62c:
    // 0x29a62c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A62Cu;
    {
        const bool branch_taken_0x29a62c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a62c) {
            ctx->pc = 0x29A640u;
            goto label_29a640;
        }
    }
    ctx->pc = 0x29A634u;
    // 0x29a634: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29a634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29a638: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x29A638u;
    {
        const bool branch_taken_0x29a638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A638u;
            // 0x29a63c: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a638) {
            ctx->pc = 0x29A6A4u;
            goto label_29a6a4;
        }
    }
    ctx->pc = 0x29A640u;
label_29a640:
    // 0x29a640: 0xc0a6802  jal         func_29A008
    ctx->pc = 0x29A640u;
    SET_GPR_U32(ctx, 31, 0x29A648u);
    ctx->pc = 0x29A008u;
    if (runtime->hasFunction(0x29A008u)) {
        auto targetFn = runtime->lookupFunction(0x29A008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A648u; }
        if (ctx->pc != 0x29A648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a008_0x29a078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A648u; }
        if (ctx->pc != 0x29A648u) { return; }
    }
    ctx->pc = 0x29A648u;
    // 0x29a648: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29a648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a64c: 0x6230007  bgezl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29A64Cu;
    {
        const bool branch_taken_0x29a64c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x29a64c) {
            ctx->pc = 0x29A650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29A64Cu;
            // 0x29a650: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29A66Cu;
            goto label_29a66c;
        }
    }
    ctx->pc = 0x29A654u;
    // 0x29a654: 0x8e43d3c0  lw          $v1, -0x2C40($s2)
    ctx->pc = 0x29a654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294955968)));
    // 0x29a658: 0xae50d3c0  sw          $s0, -0x2C40($s2)
    ctx->pc = 0x29a658u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294955968), GPR_U32(ctx, 16));
    // 0x29a65c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x29a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x29a660: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x29a660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x29a664: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29A664u;
    {
        const bool branch_taken_0x29a664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A664u;
            // 0x29a668: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a664) {
            ctx->pc = 0x29A6A8u;
            goto label_29a6a8;
        }
    }
    ctx->pc = 0x29A66Cu;
label_29a66c:
    // 0x29a66c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x29a66cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x29a670: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x29a670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x29a674: 0x24c6a448  addiu       $a2, $a2, -0x5BB8
    ctx->pc = 0x29a674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943816));
    // 0x29a678: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x29a678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x29a67c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x29a67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29a680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a684: 0xc0a6880  jal         func_29A200
    ctx->pc = 0x29A684u;
    SET_GPR_U32(ctx, 31, 0x29A68Cu);
    ctx->pc = 0x29A688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A684u;
            // 0x29a688: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A200u;
    if (runtime->hasFunction(0x29A200u)) {
        auto targetFn = runtime->lookupFunction(0x29A200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A68Cu; }
        if (ctx->pc != 0x29A68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a200_0x29a2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A68Cu; }
        if (ctx->pc != 0x29A68Cu) { return; }
    }
    ctx->pc = 0x29A68Cu;
    // 0x29a68c: 0xc0a6834  jal         func_29A0D0
    ctx->pc = 0x29A68Cu;
    SET_GPR_U32(ctx, 31, 0x29A694u);
    ctx->pc = 0x29A690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A68Cu;
            // 0x29a690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A0D0u;
    if (runtime->hasFunction(0x29A0D0u)) {
        auto targetFn = runtime->lookupFunction(0x29A0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A694u; }
        if (ctx->pc != 0x29A694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a0d0_0x29a180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A694u; }
        if (ctx->pc != 0x29A694u) { return; }
    }
    ctx->pc = 0x29A694u;
    // 0x29a694: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x29a694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x29a698: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x29a698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x29a69c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29a69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29a6a0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x29a6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_29a6a4:
    // 0x29a6a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29a6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_29a6a8:
    // 0x29a6a8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x29a6a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a6ac: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29a6acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a6b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29a6b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a6b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29a6b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a6b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29a6b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a6bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x29A6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A6C0u;
            // 0x29a6c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A4E8u: goto label_29a4e8;
            case 0x29A504u: goto label_29a504;
            case 0x29A51Cu: goto label_29a51c;
            case 0x29A528u: goto label_29a528;
            case 0x29A564u: goto label_29a564;
            case 0x29A5A0u: goto label_29a5a0;
            case 0x29A5ACu: goto label_29a5ac;
            case 0x29A614u: goto label_29a614;
            case 0x29A62Cu: goto label_29a62c;
            case 0x29A640u: goto label_29a640;
            case 0x29A66Cu: goto label_29a66c;
            case 0x29A6A4u: goto label_29a6a4;
            case 0x29A6A8u: goto label_29a6a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A6C8u;
    // 0x29a6c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x29a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x29a6cc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x29a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x29a6d0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x29a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x29a6d4: 0xac405b18  sw          $zero, 0x5B18($v0)
    ctx->pc = 0x29a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23320), GPR_U32(ctx, 0));
    // 0x29a6d8: 0xac605b1c  sw          $zero, 0x5B1C($v1)
    ctx->pc = 0x29a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23324), GPR_U32(ctx, 0));
    // 0x29a6dc: 0x2484d3c8  addiu       $a0, $a0, -0x2C38
    ctx->pc = 0x29a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955976));
    // 0x29a6e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29a6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a6e4: 0x80a250f  j           func_28943C
    ctx->pc = 0x29A6E4u;
    ctx->pc = 0x29A6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A6E4u;
            // 0x29a6e8: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_28943c_0x2894f4(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29A6ECu;
    // 0x29a6ec: 0x0  nop
    ctx->pc = 0x29a6ecu;
    // NOP
    // 0x29a6f0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29a6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29a6f4: 0x0  nop
    ctx->pc = 0x29a6f4u;
    // NOP
    // 0x29a6f8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x29a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x29a6fc: 0x0  nop
    ctx->pc = 0x29a6fcu;
    // NOP
}
