#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00296898
// Address: 0x296898 - 0x2969d0
void sub_00296898_0x296898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296898_0x296898");
#endif

    ctx->pc = 0x296898u;

    // 0x296898: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x296898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29689c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x29689cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2968a0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2968a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2968a4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2968a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2968a8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2968a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2968ac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2968acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2968b0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2968b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2968b4: 0x2622fff0  addiu       $v0, $s1, -0x10
    ctx->pc = 0x2968b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x2968b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2968b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2968bc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2968bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2968c0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2968c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2968c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2968c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2968c8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2968c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2968cc: 0x2c420061  sltiu       $v0, $v0, 0x61
    ctx->pc = 0x2968ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
    // 0x2968d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2968D0u;
    {
        const bool branch_taken_0x2968d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2968D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2968D0u;
            // 0x2968d4: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2968d0) {
            ctx->pc = 0x2968E0u;
            goto label_2968e0;
        }
    }
    ctx->pc = 0x2968D8u;
    // 0x2968d8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2968D8u;
    {
        const bool branch_taken_0x2968d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2968DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2968D8u;
            // 0x2968dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2968d8) {
            ctx->pc = 0x2969ACu;
            goto label_2969ac;
        }
    }
    ctx->pc = 0x2968E0u;
label_2968e0:
    // 0x2968e0: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2968E0u;
    {
        const bool branch_taken_0x2968e0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2968E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2968E0u;
            // 0x2968e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2968e0) {
            ctx->pc = 0x296928u;
            goto label_296928;
        }
    }
    ctx->pc = 0x2968E8u;
    // 0x2968e8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2968e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2968ec: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x2968ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2968f0: 0xae090004  sw          $t1, 0x4($s0)
    ctx->pc = 0x2968f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 9));
    // 0x2968f4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2968f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2968f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2968f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2968fc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2968fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x296900: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x296900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x296904: 0x32630004  andi        $v1, $s3, 0x4
    ctx->pc = 0x296904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x296908: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x296908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x29690c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x29690cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x296910: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x296910u;
    {
        const bool branch_taken_0x296910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x296914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296910u;
            // 0x296914: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296910) {
            ctx->pc = 0x296934u;
            goto label_296934;
        }
    }
    ctx->pc = 0x296918u;
    // 0x296918: 0xc0a5ae6  jal         func_296B98
    ctx->pc = 0x296918u;
    SET_GPR_U32(ctx, 31, 0x296920u);
    ctx->pc = 0x296B98u;
    if (runtime->hasFunction(0x296B98u)) {
        auto targetFn = runtime->lookupFunction(0x296B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296920u; }
        if (ctx->pc != 0x296920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296b98_0x296c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296920u; }
        if (ctx->pc != 0x296920u) { return; }
    }
    ctx->pc = 0x296920u;
    // 0x296920: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x296920u;
    {
        const bool branch_taken_0x296920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296920u;
            // 0x296924: 0x122900  sll         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296920) {
            ctx->pc = 0x296938u;
            goto label_296938;
        }
    }
    ctx->pc = 0x296928u;
label_296928:
    // 0x296928: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x296928u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29692c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x29692cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x296930: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x296930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_296934:
    // 0x296934: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x296934u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_296938:
    // 0x296938: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x296938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x29693c: 0x8c4478a0  lw          $a0, 0x78A0($v0)
    ctx->pc = 0x29693cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30880)));
    // 0x296940: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x296940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x296944: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x296944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x296948: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x296948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x29694c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29694cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x296950: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x296950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x296954: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x296954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x296958: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x296958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29695c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x29695cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x296960: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x296960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x296964: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x296964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x296968: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x296968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x29696c: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x29696cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x296970: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x296970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x296974: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x296974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x296978: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x296978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29697c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29697cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296980: 0xc0a5ae6  jal         func_296B98
    ctx->pc = 0x296980u;
    SET_GPR_U32(ctx, 31, 0x296988u);
    ctx->pc = 0x296984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296980u;
            // 0x296984: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296B98u;
    if (runtime->hasFunction(0x296B98u)) {
        auto targetFn = runtime->lookupFunction(0x296B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296988u; }
        if (ctx->pc != 0x296988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296b98_0x296c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296988u; }
        if (ctx->pc != 0x296988u) { return; }
    }
    ctx->pc = 0x296988u;
    // 0x296988: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x296988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x29698c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29698Cu;
    {
        const bool branch_taken_0x29698c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29698Cu;
            // 0x296990: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29698c) {
            ctx->pc = 0x2969A4u;
            goto label_2969a4;
        }
    }
    ctx->pc = 0x296994u;
    // 0x296994: 0xc0a4ffc  jal         func_293FF0
    ctx->pc = 0x296994u;
    SET_GPR_U32(ctx, 31, 0x29699Cu);
    ctx->pc = 0x296998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296994u;
            // 0x296998: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293FF0u;
    if (runtime->hasFunction(0x293FF0u)) {
        auto targetFn = runtime->lookupFunction(0x293FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29699Cu; }
        if (ctx->pc != 0x29699Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ff0_0x294000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29699Cu; }
        if (ctx->pc != 0x29699Cu) { return; }
    }
    ctx->pc = 0x29699Cu;
    // 0x29699c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29699Cu;
    {
        const bool branch_taken_0x29699c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2969A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29699Cu;
            // 0x2969a0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29699c) {
            ctx->pc = 0x2969B0u;
            goto label_2969b0;
        }
    }
    ctx->pc = 0x2969A4u;
label_2969a4:
    // 0x2969a4: 0xc0a4ff8  jal         func_293FE0
    ctx->pc = 0x2969A4u;
    SET_GPR_U32(ctx, 31, 0x2969ACu);
    ctx->pc = 0x2969A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2969A4u;
            // 0x2969a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293FE0u;
    if (runtime->hasFunction(0x293FE0u)) {
        auto targetFn = runtime->lookupFunction(0x293FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2969ACu; }
        if (ctx->pc != 0x2969ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293fe0_0x293ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2969ACu; }
        if (ctx->pc != 0x2969ACu) { return; }
    }
    ctx->pc = 0x2969ACu;
label_2969ac:
    // 0x2969ac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2969acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2969b0:
    // 0x2969b0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2969b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2969b4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2969b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2969b8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2969b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2969bc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2969bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2969c0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2969c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2969c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2969C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2969C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2969C4u;
            // 0x2969c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2968E0u: goto label_2968e0;
            case 0x296928u: goto label_296928;
            case 0x296934u: goto label_296934;
            case 0x296938u: goto label_296938;
            case 0x2969A4u: goto label_2969a4;
            case 0x2969ACu: goto label_2969ac;
            case 0x2969B0u: goto label_2969b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2969CCu;
    // 0x2969cc: 0x0  nop
    ctx->pc = 0x2969ccu;
    // NOP
}
