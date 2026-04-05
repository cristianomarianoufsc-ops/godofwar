#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002005C8
// Address: 0x2005c8 - 0x200988
void sub_002005C8_0x2005c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002005C8_0x2005c8");
#endif

    ctx->pc = 0x2005c8u;

    // 0x2005c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2005c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2005cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2005ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2005d0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2005d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2005d4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2005d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2005d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2005d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2005dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2005dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2005e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2005e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2005e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2005e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2005e8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2005e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2005ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2005ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2005f0: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x2005f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x2005f4: 0x8c420174  lw          $v0, 0x174($v0)
    ctx->pc = 0x2005f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x2005f8: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2005F8u;
    {
        const bool branch_taken_0x2005f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2005FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2005F8u;
            // 0x2005fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005f8) {
            ctx->pc = 0x200648u;
            goto label_200648;
        }
    }
    ctx->pc = 0x200600u;
    // 0x200600: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x200600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x200604: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x200604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x200608: 0x8c445a40  lw          $a0, 0x5A40($v0)
    ctx->pc = 0x200608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23104)));
    // 0x20060c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20060cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200610: 0x90632d3d  lbu         $v1, 0x2D3D($v1)
    ctx->pc = 0x200610u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11581)));
    // 0x200614: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x200614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x200618: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x200618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x20061c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20061Cu;
    {
        const bool branch_taken_0x20061c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20061Cu;
            // 0x200620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20061c) {
            ctx->pc = 0x200630u;
            goto label_200630;
        }
    }
    ctx->pc = 0x200624u;
    // 0x200624: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x200624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x200628: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x200628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x20062c: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x20062cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_200630:
    // 0x200630: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x200630u;
    {
        const bool branch_taken_0x200630 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x200634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200630u;
            // 0x200634: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200630) {
            ctx->pc = 0x200648u;
            goto label_200648;
        }
    }
    ctx->pc = 0x200638u;
    // 0x200638: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x200638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x20063c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20063cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x200640: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x200640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x200644: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x200644u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_200648:
    // 0x200648: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x200648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x20064c: 0x10500002  beq         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20064Cu;
    {
        const bool branch_taken_0x20064c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x200650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20064Cu;
            // 0x200650: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20064c) {
            ctx->pc = 0x200658u;
            goto label_200658;
        }
    }
    ctx->pc = 0x200654u;
    // 0x200654: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x200654u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_200658:
    // 0x200658: 0x506000c4  beql        $v1, $zero, . + 4 + (0xC4 << 2)
    ctx->pc = 0x200658u;
    {
        const bool branch_taken_0x200658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x200658) {
            ctx->pc = 0x20065Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200658u;
            // 0x20065c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20096Cu;
            goto label_20096c;
        }
    }
    ctx->pc = 0x200660u;
    // 0x200660: 0xae300068  sw          $s0, 0x68($s1)
    ctx->pc = 0x200660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 16));
    // 0x200664: 0xc0802f2  jal         func_200BC8
    ctx->pc = 0x200664u;
    SET_GPR_U32(ctx, 31, 0x20066Cu);
    ctx->pc = 0x200668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200664u;
            // 0x200668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200BC8u;
    if (runtime->hasFunction(0x200BC8u)) {
        auto targetFn = runtime->lookupFunction(0x200BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20066Cu; }
        if (ctx->pc != 0x20066Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200BC8_0x200bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20066Cu; }
        if (ctx->pc != 0x20066Cu) { return; }
    }
    ctx->pc = 0x20066Cu;
    // 0x20066c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20066cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200670: 0x120200bd  beq         $s0, $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x200670u;
    {
        const bool branch_taken_0x200670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x200674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200670u;
            // 0x200674: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200670) {
            ctx->pc = 0x200968u;
            goto label_200968;
        }
    }
    ctx->pc = 0x200678u;
    // 0x200678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20067c: 0x8c44e424  lw          $a0, -0x1BDC($v0)
    ctx->pc = 0x20067cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960164)));
    // 0x200680: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x200680u;
    SET_GPR_U32(ctx, 31, 0x200688u);
    ctx->pc = 0x200684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200680u;
            // 0x200684: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200688u; }
        if (ctx->pc != 0x200688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200688u; }
        if (ctx->pc != 0x200688u) { return; }
    }
    ctx->pc = 0x200688u;
    // 0x200688: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x200688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20068c: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x20068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x200690: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x200690u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200694: 0x8c420174  lw          $v0, 0x174($v0)
    ctx->pc = 0x200694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x200698: 0x4410023  bgez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x200698u;
    {
        const bool branch_taken_0x200698 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20069Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200698u;
            // 0x20069c: 0x8e540104  lw          $s4, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200698) {
            ctx->pc = 0x200728u;
            goto label_200728;
        }
    }
    ctx->pc = 0x2006A0u;
    // 0x2006a0: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x2006a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2006a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2006a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2006a8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2006a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2006ac: 0xc080386  jal         func_200E18
    ctx->pc = 0x2006ACu;
    SET_GPR_U32(ctx, 31, 0x2006B4u);
    ctx->pc = 0x2006B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2006ACu;
            // 0x2006b0: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200E18u;
    if (runtime->hasFunction(0x200E18u)) {
        auto targetFn = runtime->lookupFunction(0x200E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2006B4u; }
        if (ctx->pc != 0x2006B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200e18_0x200e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2006B4u; }
        if (ctx->pc != 0x2006B4u) { return; }
    }
    ctx->pc = 0x2006B4u;
    // 0x2006b4: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x2006b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x2006b8: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x2006b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x2006bc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2006bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x2006c0: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x2006c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2006c4: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x2006c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2006c8: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x2006c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2006cc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2006ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2006d0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2006d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2006d4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2006d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2006d8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2006d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2006dc: 0x24a56a00  addiu       $a1, $a1, 0x6A00
    ctx->pc = 0x2006dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27136));
    // 0x2006e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2006e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2006e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2006e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2006e8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2006e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2006ec: 0xc061e64  jal         func_187990
    ctx->pc = 0x2006ECu;
    SET_GPR_U32(ctx, 31, 0x2006F4u);
    ctx->pc = 0x2006F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2006ECu;
            // 0x2006f0: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187990u;
    if (runtime->hasFunction(0x187990u)) {
        auto targetFn = runtime->lookupFunction(0x187990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2006F4u; }
        if (ctx->pc != 0x2006F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187990_0x187990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2006F4u; }
        if (ctx->pc != 0x2006F4u) { return; }
    }
    ctx->pc = 0x2006F4u;
    // 0x2006f4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2006f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2006f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2006f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2006fc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2006fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x200700: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x200700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200704: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x200704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x200708: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x200708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20070c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x20070cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x200710: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x200710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x200714: 0x40f809  jalr        $v0
    ctx->pc = 0x200714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20071Cu);
        ctx->pc = 0x200718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200714u;
            // 0x200718: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20071Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200630u: goto label_200630;
            case 0x200648u: goto label_200648;
            case 0x200658u: goto label_200658;
            case 0x200728u: goto label_200728;
            case 0x2007C0u: goto label_2007c0;
            case 0x2007E0u: goto label_2007e0;
            case 0x200804u: goto label_200804;
            case 0x200840u: goto label_200840;
            case 0x20085Cu: goto label_20085c;
            case 0x2008B4u: goto label_2008b4;
            case 0x200900u: goto label_200900;
            case 0x200930u: goto label_200930;
            case 0x200968u: goto label_200968;
            case 0x20096Cu: goto label_20096c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20071Cu; }
            if (ctx->pc != 0x20071Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20071Cu;
    // 0x20071c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x20071Cu;
    {
        const bool branch_taken_0x20071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20071Cu;
            // 0x200720: 0x26700048  addiu       $s0, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20071c) {
            ctx->pc = 0x2007C0u;
            goto label_2007c0;
        }
    }
    ctx->pc = 0x200724u;
    // 0x200724: 0x0  nop
    ctx->pc = 0x200724u;
    // NOP
label_200728:
    // 0x200728: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x200728u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x20072c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20072cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200730: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x200730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x200734: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x200734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200738: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x200738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20073c: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x20073cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x200740: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x200740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x200744: 0x40f809  jalr        $v0
    ctx->pc = 0x200744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20074Cu);
        ctx->pc = 0x200748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200744u;
            // 0x200748: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20074Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200630u: goto label_200630;
            case 0x200648u: goto label_200648;
            case 0x200658u: goto label_200658;
            case 0x200728u: goto label_200728;
            case 0x2007C0u: goto label_2007c0;
            case 0x2007E0u: goto label_2007e0;
            case 0x200804u: goto label_200804;
            case 0x200840u: goto label_200840;
            case 0x20085Cu: goto label_20085c;
            case 0x2008B4u: goto label_2008b4;
            case 0x200900u: goto label_200900;
            case 0x200930u: goto label_200930;
            case 0x200968u: goto label_200968;
            case 0x20096Cu: goto label_20096c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20074Cu; }
            if (ctx->pc != 0x20074Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20074Cu;
    // 0x20074c: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x20074cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x200750: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x200750u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x200754: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x200754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x200758: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x200758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20075c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20075cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200760: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x200760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x200764: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x200764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x200768: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x200768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x20076c: 0x40f809  jalr        $v0
    ctx->pc = 0x20076Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200774u);
        ctx->pc = 0x200770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20076Cu;
            // 0x200770: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x200774u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200630u: goto label_200630;
            case 0x200648u: goto label_200648;
            case 0x200658u: goto label_200658;
            case 0x200728u: goto label_200728;
            case 0x2007C0u: goto label_2007c0;
            case 0x2007E0u: goto label_2007e0;
            case 0x200804u: goto label_200804;
            case 0x200840u: goto label_200840;
            case 0x20085Cu: goto label_20085c;
            case 0x2008B4u: goto label_2008b4;
            case 0x200900u: goto label_200900;
            case 0x200930u: goto label_200930;
            case 0x200968u: goto label_200968;
            case 0x20096Cu: goto label_20096c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x200774u; }
            if (ctx->pc != 0x200774u) { return; }
        }
        }
    }
    ctx->pc = 0x200774u;
    // 0x200774: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x200774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200778: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x200778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20077c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20077cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200780: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x200780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x200784: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x200784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x200788: 0x40f809  jalr        $v0
    ctx->pc = 0x200788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200790u);
        ctx->pc = 0x20078Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200788u;
            // 0x20078c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x200790u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200630u: goto label_200630;
            case 0x200648u: goto label_200648;
            case 0x200658u: goto label_200658;
            case 0x200728u: goto label_200728;
            case 0x2007C0u: goto label_2007c0;
            case 0x2007E0u: goto label_2007e0;
            case 0x200804u: goto label_200804;
            case 0x200840u: goto label_200840;
            case 0x20085Cu: goto label_20085c;
            case 0x2008B4u: goto label_2008b4;
            case 0x200900u: goto label_200900;
            case 0x200930u: goto label_200930;
            case 0x200968u: goto label_200968;
            case 0x20096Cu: goto label_20096c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x200790u; }
            if (ctx->pc != 0x200790u) { return; }
        }
        }
    }
    ctx->pc = 0x200790u;
    // 0x200790: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x200790u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200794: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x200794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x200798: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x200798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x20079c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20079cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2007a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2007a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2007a4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2007a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2007a8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x2007a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2007ac: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x2007acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x2007b0: 0x40f809  jalr        $v0
    ctx->pc = 0x2007B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2007B8u);
        ctx->pc = 0x2007B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2007B0u;
            // 0x2007b4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2007B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200630u: goto label_200630;
            case 0x200648u: goto label_200648;
            case 0x200658u: goto label_200658;
            case 0x200728u: goto label_200728;
            case 0x2007C0u: goto label_2007c0;
            case 0x2007E0u: goto label_2007e0;
            case 0x200804u: goto label_200804;
            case 0x200840u: goto label_200840;
            case 0x20085Cu: goto label_20085c;
            case 0x2008B4u: goto label_2008b4;
            case 0x200900u: goto label_200900;
            case 0x200930u: goto label_200930;
            case 0x200968u: goto label_200968;
            case 0x20096Cu: goto label_20096c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2007B8u; }
            if (ctx->pc != 0x2007B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2007B8u;
    // 0x2007b8: 0x26700048  addiu       $s0, $s3, 0x48
    ctx->pc = 0x2007b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x2007bc: 0x0  nop
    ctx->pc = 0x2007bcu;
    // NOP
label_2007c0:
    // 0x2007c0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2007C0u;
    {
        const bool branch_taken_0x2007c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2007C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2007C0u;
            // 0x2007c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007c0) {
            ctx->pc = 0x2007E0u;
            goto label_2007e0;
        }
    }
    ctx->pc = 0x2007C8u;
    // 0x2007c8: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x2007C8u;
    SET_GPR_U32(ctx, 31, 0x2007D0u);
    ctx->pc = 0x2007CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2007C8u;
            // 0x2007cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2007D0u; }
        if (ctx->pc != 0x2007D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2007D0u; }
        if (ctx->pc != 0x2007D0u) { return; }
    }
    ctx->pc = 0x2007D0u;
    // 0x2007d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2007d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2007d4: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x2007D4u;
    SET_GPR_U32(ctx, 31, 0x2007DCu);
    ctx->pc = 0x2007D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2007D4u;
            // 0x2007d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2007DCu; }
        if (ctx->pc != 0x2007DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2007DCu; }
        if (ctx->pc != 0x2007DCu) { return; }
    }
    ctx->pc = 0x2007DCu;
    // 0x2007dc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2007dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2007e0:
    // 0x2007e0: 0x26720060  addiu       $s2, $s3, 0x60
    ctx->pc = 0x2007e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x2007e4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2007E4u;
    {
        const bool branch_taken_0x2007e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2007E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2007E4u;
            // 0x2007e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007e4) {
            ctx->pc = 0x200804u;
            goto label_200804;
        }
    }
    ctx->pc = 0x2007ECu;
    // 0x2007ec: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x2007ECu;
    SET_GPR_U32(ctx, 31, 0x2007F4u);
    ctx->pc = 0x2007F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2007ECu;
            // 0x2007f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2007F4u; }
        if (ctx->pc != 0x2007F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2007F4u; }
        if (ctx->pc != 0x2007F4u) { return; }
    }
    ctx->pc = 0x2007F4u;
    // 0x2007f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2007f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2007f8: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x2007F8u;
    SET_GPR_U32(ctx, 31, 0x200800u);
    ctx->pc = 0x2007FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2007F8u;
            // 0x2007fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200800u; }
        if (ctx->pc != 0x200800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200800u; }
        if (ctx->pc != 0x200800u) { return; }
    }
    ctx->pc = 0x200800u;
    // 0x200800: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x200800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_200804:
    // 0x200804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20080c: 0xc080284  jal         func_200A10
    ctx->pc = 0x20080Cu;
    SET_GPR_U32(ctx, 31, 0x200814u);
    ctx->pc = 0x200810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20080Cu;
            // 0x200810: 0x26660018  addiu       $a2, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200A10u;
    if (runtime->hasFunction(0x200A10u)) {
        auto targetFn = runtime->lookupFunction(0x200A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200814u; }
        if (ctx->pc != 0x200814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200A10_0x200a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200814u; }
        if (ctx->pc != 0x200814u) { return; }
    }
    ctx->pc = 0x200814u;
    // 0x200814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200818: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x200818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20081c: 0xc080284  jal         func_200A10
    ctx->pc = 0x20081Cu;
    SET_GPR_U32(ctx, 31, 0x200824u);
    ctx->pc = 0x200820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20081Cu;
            // 0x200820: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200A10u;
    if (runtime->hasFunction(0x200A10u)) {
        auto targetFn = runtime->lookupFunction(0x200A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200824u; }
        if (ctx->pc != 0x200824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200A10_0x200a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200824u; }
        if (ctx->pc != 0x200824u) { return; }
    }
    ctx->pc = 0x200824u;
    // 0x200824: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x200824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x200828: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x200828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x20082c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20082Cu;
    {
        const bool branch_taken_0x20082c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20082Cu;
            // 0x200830: 0x26240034  addiu       $a0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20082c) {
            ctx->pc = 0x200840u;
            goto label_200840;
        }
    }
    ctx->pc = 0x200834u;
    // 0x200834: 0xc080566  jal         func_201598
    ctx->pc = 0x200834u;
    SET_GPR_U32(ctx, 31, 0x20083Cu);
    ctx->pc = 0x200838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200834u;
            // 0x200838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201598u;
    if (runtime->hasFunction(0x201598u)) {
        auto targetFn = runtime->lookupFunction(0x201598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20083Cu; }
        if (ctx->pc != 0x20083Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201598_0x201598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20083Cu; }
        if (ctx->pc != 0x20083Cu) { return; }
    }
    ctx->pc = 0x20083Cu;
    // 0x20083c: 0x26240034  addiu       $a0, $s1, 0x34
    ctx->pc = 0x20083cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_200840:
    // 0x200840: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x200840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x200844: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x200844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x200848: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x200848u;
    {
        const bool branch_taken_0x200848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200848) {
            ctx->pc = 0x20084Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200848u;
            // 0x20084c: 0x8e620138  lw          $v0, 0x138($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 312)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20085Cu;
            goto label_20085c;
        }
    }
    ctx->pc = 0x200850u;
    // 0x200850: 0xc080566  jal         func_201598
    ctx->pc = 0x200850u;
    SET_GPR_U32(ctx, 31, 0x200858u);
    ctx->pc = 0x201598u;
    if (runtime->hasFunction(0x201598u)) {
        auto targetFn = runtime->lookupFunction(0x201598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200858u; }
        if (ctx->pc != 0x200858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201598_0x201598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200858u; }
        if (ctx->pc != 0x200858u) { return; }
    }
    ctx->pc = 0x200858u;
    // 0x200858: 0x8e620138  lw          $v0, 0x138($s3)
    ctx->pc = 0x200858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 312)));
label_20085c:
    // 0x20085c: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x20085Cu;
    {
        const bool branch_taken_0x20085c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20085c) {
            ctx->pc = 0x200860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20085Cu;
            // 0x200860: 0x8e22006c  lw          $v0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x200900u;
            goto label_200900;
        }
    }
    ctx->pc = 0x200864u;
    // 0x200864: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x200864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x200868: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x200868u;
    {
        const bool branch_taken_0x200868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200868) {
            ctx->pc = 0x20086Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200868u;
            // 0x20086c: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2008B4u;
            goto label_2008b4;
        }
    }
    ctx->pc = 0x200870u;
    // 0x200870: 0xc04f824  jal         func_13E090
    ctx->pc = 0x200870u;
    SET_GPR_U32(ctx, 31, 0x200878u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200878u; }
        if (ctx->pc != 0x200878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200878u; }
        if (ctx->pc != 0x200878u) { return; }
    }
    ctx->pc = 0x200878u;
    // 0x200878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20087c: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x20087cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x200880: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x200880u;
    SET_GPR_U32(ctx, 31, 0x200888u);
    ctx->pc = 0x200884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200880u;
            // 0x200884: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200888u; }
        if (ctx->pc != 0x200888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200888u; }
        if (ctx->pc != 0x200888u) { return; }
    }
    ctx->pc = 0x200888u;
    // 0x200888: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x200888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x20088c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20088cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200890: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x200890u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x200894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200898: 0x266700a8  addiu       $a3, $s3, 0xA8
    ctx->pc = 0x200898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
    // 0x20089c: 0x266800d8  addiu       $t0, $s3, 0xD8
    ctx->pc = 0x20089cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 216));
    // 0x2008a0: 0x266a0078  addiu       $t2, $s3, 0x78
    ctx->pc = 0x2008a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2008a4: 0xc07e420  jal         func_1F9080
    ctx->pc = 0x2008A4u;
    SET_GPR_U32(ctx, 31, 0x2008ACu);
    ctx->pc = 0x2008A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2008A4u;
            // 0x2008a8: 0x266b0108  addiu       $t3, $s3, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9080u;
    if (runtime->hasFunction(0x1F9080u)) {
        auto targetFn = runtime->lookupFunction(0x1F9080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2008ACu; }
        if (ctx->pc != 0x2008ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9080_0x1f9080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2008ACu; }
        if (ctx->pc != 0x2008ACu) { return; }
    }
    ctx->pc = 0x2008ACu;
    // 0x2008ac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2008acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2008b0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2008b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2008b4:
    // 0x2008b4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2008B4u;
    {
        const bool branch_taken_0x2008b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2008b4) {
            ctx->pc = 0x2008B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2008B4u;
            // 0x2008b8: 0x8e22006c  lw          $v0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x200900u;
            goto label_200900;
        }
    }
    ctx->pc = 0x2008BCu;
    // 0x2008bc: 0xc04f824  jal         func_13E090
    ctx->pc = 0x2008BCu;
    SET_GPR_U32(ctx, 31, 0x2008C4u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2008C4u; }
        if (ctx->pc != 0x2008C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2008C4u; }
        if (ctx->pc != 0x2008C4u) { return; }
    }
    ctx->pc = 0x2008C4u;
    // 0x2008c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2008c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2008c8: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x2008c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2008cc: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x2008CCu;
    SET_GPR_U32(ctx, 31, 0x2008D4u);
    ctx->pc = 0x2008D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2008CCu;
            // 0x2008d0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2008D4u; }
        if (ctx->pc != 0x2008D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2008D4u; }
        if (ctx->pc != 0x2008D4u) { return; }
    }
    ctx->pc = 0x2008D4u;
    // 0x2008d4: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x2008d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x2008d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2008d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2008dc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2008dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2008e0: 0x266b0120  addiu       $t3, $s3, 0x120
    ctx->pc = 0x2008e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x2008e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2008e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2008e8: 0x266700c0  addiu       $a3, $s3, 0xC0
    ctx->pc = 0x2008e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x2008ec: 0x266800f0  addiu       $t0, $s3, 0xF0
    ctx->pc = 0x2008ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
    // 0x2008f0: 0xc07e420  jal         func_1F9080
    ctx->pc = 0x2008F0u;
    SET_GPR_U32(ctx, 31, 0x2008F8u);
    ctx->pc = 0x2008F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2008F0u;
            // 0x2008f4: 0x266a0090  addiu       $t2, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9080u;
    if (runtime->hasFunction(0x1F9080u)) {
        auto targetFn = runtime->lookupFunction(0x1F9080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2008F8u; }
        if (ctx->pc != 0x2008F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9080_0x1f9080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2008F8u; }
        if (ctx->pc != 0x2008F8u) { return; }
    }
    ctx->pc = 0x2008F8u;
    // 0x2008f8: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x2008f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x2008fc: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x2008fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_200900:
    // 0x200900: 0x8c420174  lw          $v0, 0x174($v0)
    ctx->pc = 0x200900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x200904: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x200904u;
    {
        const bool branch_taken_0x200904 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x200908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200904u;
            // 0x200908: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200904) {
            ctx->pc = 0x200930u;
            goto label_200930;
        }
    }
    ctx->pc = 0x20090Cu;
    // 0x20090c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20090cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x200910: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x200910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x200914: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x200914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x200918: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x200918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x20091c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x20091cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x200920: 0x40f809  jalr        $v0
    ctx->pc = 0x200920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200928u);
        ctx->pc = 0x200924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200920u;
            // 0x200924: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x200928u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200630u: goto label_200630;
            case 0x200648u: goto label_200648;
            case 0x200658u: goto label_200658;
            case 0x200728u: goto label_200728;
            case 0x2007C0u: goto label_2007c0;
            case 0x2007E0u: goto label_2007e0;
            case 0x200804u: goto label_200804;
            case 0x200840u: goto label_200840;
            case 0x20085Cu: goto label_20085c;
            case 0x2008B4u: goto label_2008b4;
            case 0x200900u: goto label_200900;
            case 0x200930u: goto label_200930;
            case 0x200968u: goto label_200968;
            case 0x20096Cu: goto label_20096c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x200928u; }
            if (ctx->pc != 0x200928u) { return; }
        }
        }
    }
    ctx->pc = 0x200928u;
    // 0x200928: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x200928u;
    {
        const bool branch_taken_0x200928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20092Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200928u;
            // 0x20092c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200928) {
            ctx->pc = 0x20096Cu;
            goto label_20096c;
        }
    }
    ctx->pc = 0x200930u;
label_200930:
    // 0x200930: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x200930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x200934: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x200934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200938: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x200938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20093c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x20093cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x200940: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x200940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x200944: 0x40f809  jalr        $v0
    ctx->pc = 0x200944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20094Cu);
        ctx->pc = 0x200948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200944u;
            // 0x200948: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20094Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200630u: goto label_200630;
            case 0x200648u: goto label_200648;
            case 0x200658u: goto label_200658;
            case 0x200728u: goto label_200728;
            case 0x2007C0u: goto label_2007c0;
            case 0x2007E0u: goto label_2007e0;
            case 0x200804u: goto label_200804;
            case 0x200840u: goto label_200840;
            case 0x20085Cu: goto label_20085c;
            case 0x2008B4u: goto label_2008b4;
            case 0x200900u: goto label_200900;
            case 0x200930u: goto label_200930;
            case 0x200968u: goto label_200968;
            case 0x20096Cu: goto label_20096c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20094Cu; }
            if (ctx->pc != 0x20094Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20094Cu;
    // 0x20094c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x20094cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x200950: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x200950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x200954: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x200954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x200958: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x200958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x20095c: 0x40f809  jalr        $v0
    ctx->pc = 0x20095Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200964u);
        ctx->pc = 0x200960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20095Cu;
            // 0x200960: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x200964u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200630u: goto label_200630;
            case 0x200648u: goto label_200648;
            case 0x200658u: goto label_200658;
            case 0x200728u: goto label_200728;
            case 0x2007C0u: goto label_2007c0;
            case 0x2007E0u: goto label_2007e0;
            case 0x200804u: goto label_200804;
            case 0x200840u: goto label_200840;
            case 0x20085Cu: goto label_20085c;
            case 0x2008B4u: goto label_2008b4;
            case 0x200900u: goto label_200900;
            case 0x200930u: goto label_200930;
            case 0x200968u: goto label_200968;
            case 0x20096Cu: goto label_20096c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x200964u; }
            if (ctx->pc != 0x200964u) { return; }
        }
        }
    }
    ctx->pc = 0x200964u;
    // 0x200964: 0x0  nop
    ctx->pc = 0x200964u;
    // NOP
label_200968:
    // 0x200968: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x200968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20096c:
    // 0x20096c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x20096cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200970: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x200970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200974: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x200974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200978: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x200978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20097c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20097cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200980: 0x3e00008  jr          $ra
    ctx->pc = 0x200980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200980u;
            // 0x200984: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200630u: goto label_200630;
            case 0x200648u: goto label_200648;
            case 0x200658u: goto label_200658;
            case 0x200728u: goto label_200728;
            case 0x2007C0u: goto label_2007c0;
            case 0x2007E0u: goto label_2007e0;
            case 0x200804u: goto label_200804;
            case 0x200840u: goto label_200840;
            case 0x20085Cu: goto label_20085c;
            case 0x2008B4u: goto label_2008b4;
            case 0x200900u: goto label_200900;
            case 0x200930u: goto label_200930;
            case 0x200968u: goto label_200968;
            case 0x20096Cu: goto label_20096c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200988u;
}
