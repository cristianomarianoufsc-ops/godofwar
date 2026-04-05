#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B25C8
// Address: 0x1b25c8 - 0x1b26f0
void sub_001B25C8_0x1b25c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B25C8_0x1b25c8");
#endif

    ctx->pc = 0x1b25c8u;

    // 0x1b25c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b25c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b25cc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1b25ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1b25d0: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x1b25d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x1b25d4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b25d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b25d8: 0x8e86cab0  lw          $a2, -0x3550($s4)
    ctx->pc = 0x1b25d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953648)));
    // 0x1b25dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b25dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b25e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b25e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b25e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b25e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1b25e8: 0x4c00036  bltz        $a2, . + 4 + (0x36 << 2)
    ctx->pc = 0x1B25E8u;
    {
        const bool branch_taken_0x1b25e8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1B25ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B25E8u;
            // 0x1b25ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b25e8) {
            ctx->pc = 0x1B26C4u;
            goto label_1b26c4;
        }
    }
    ctx->pc = 0x1B25F0u;
    // 0x1b25f0: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x1b25f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x1b25f4: 0x8e62cab4  lw          $v0, -0x354C($s3)
    ctx->pc = 0x1b25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953652)));
    // 0x1b25f8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B25F8u;
    {
        const bool branch_taken_0x1b25f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B25FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B25F8u;
            // 0x1b25fc: 0x3c12002a  lui         $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b25f8) {
            ctx->pc = 0x1B26C4u;
            goto label_1b26c4;
        }
    }
    ctx->pc = 0x1B2600u;
    // 0x1b2600: 0x8e42cab8  lw          $v0, -0x3548($s2)
    ctx->pc = 0x1b2600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953656)));
    // 0x1b2604: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1B2604u;
    {
        const bool branch_taken_0x1b2604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2604u;
            // 0x1b2608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2604) {
            ctx->pc = 0x1B26C4u;
            goto label_1b26c4;
        }
    }
    ctx->pc = 0x1B260Cu;
    // 0x1b260c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1b260cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1b2610: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1b2610u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1b2614: 0x24845280  addiu       $a0, $a0, 0x5280
    ctx->pc = 0x1b2614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    // 0x1b2618: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b2618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b261c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1b261cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b2620: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b2620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b2624: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b2624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b2628: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b2628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b262c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b262cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2630: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1b2630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2634: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b2634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2638: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1b2638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1b263c: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x1b263cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x1b2640: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b2640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b2644: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1b2644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b2648: 0x82880b  movn        $s1, $a0, $v0
    ctx->pc = 0x1b2648u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x1b264c: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B264Cu;
    {
        const bool branch_taken_0x1b264c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B264Cu;
            // 0x1b2650: 0xa3800b  movn        $s0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b264c) {
            ctx->pc = 0x1B26C4u;
            goto label_1b26c4;
        }
    }
    ctx->pc = 0x1B2654u;
    // 0x1b2654: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B2654u;
    {
        const bool branch_taken_0x1b2654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2654u;
            // 0x1b2658: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2654) {
            ctx->pc = 0x1B26C8u;
            goto label_1b26c8;
        }
    }
    ctx->pc = 0x1B265Cu;
    // 0x1b265c: 0xc06ee9e  jal         func_1BBA78
    ctx->pc = 0x1B265Cu;
    SET_GPR_U32(ctx, 31, 0x1B2664u);
    ctx->pc = 0x1B2660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B265Cu;
            // 0x1b2660: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA78u;
    if (runtime->hasFunction(0x1BBA78u)) {
        auto targetFn = runtime->lookupFunction(0x1BBA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2664u; }
        if (ctx->pc != 0x1B2664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bba78_0x1bbb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2664u; }
        if (ctx->pc != 0x1B2664u) { return; }
    }
    ctx->pc = 0x1B2664u;
    // 0x1b2664: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2668: 0xc06b7fe  jal         func_1ADFF8
    ctx->pc = 0x1B2668u;
    SET_GPR_U32(ctx, 31, 0x1B2670u);
    ctx->pc = 0x1B266Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2668u;
            // 0x1b266c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADFF8u;
    if (runtime->hasFunction(0x1ADFF8u)) {
        auto targetFn = runtime->lookupFunction(0x1ADFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2670u; }
        if (ctx->pc != 0x1B2670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADFF8_0x1adff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2670u; }
        if (ctx->pc != 0x1B2670u) { return; }
    }
    ctx->pc = 0x1B2670u;
    // 0x1b2670: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2674: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B2674u;
    {
        const bool branch_taken_0x1b2674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2674u;
            // 0x1b2678: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2674) {
            ctx->pc = 0x1B26B4u;
            goto label_1b26b4;
        }
    }
    ctx->pc = 0x1B267Cu;
    // 0x1b267c: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x1b267cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1b2680: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2680u;
    {
        const bool branch_taken_0x1b2680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2680u;
            // 0x1b2684: 0x261100b8  addiu       $s1, $s0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2680) {
            ctx->pc = 0x1B26A8u;
            goto label_1b26a8;
        }
    }
    ctx->pc = 0x1B2688u;
    // 0x1b2688: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1b2688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1b268c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b268cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b2690: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1b2690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1b2694: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1b2694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1b2698: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1b2698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b269c: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1B269Cu;
    SET_GPR_U32(ctx, 31, 0x1B26A4u);
    ctx->pc = 0x1B26A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B269Cu;
            // 0x1b26a0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B26A4u; }
        if (ctx->pc != 0x1B26A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B26A4u; }
        if (ctx->pc != 0x1B26A4u) { return; }
    }
    ctx->pc = 0x1B26A4u;
    // 0x1b26a4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1b26a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1b26a8:
    // 0x1b26a8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1b26a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b26ac: 0xc06c9bc  jal         func_1B26F0
    ctx->pc = 0x1B26ACu;
    SET_GPR_U32(ctx, 31, 0x1B26B4u);
    ctx->pc = 0x1B26B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B26ACu;
            // 0x1b26b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B26F0u;
    if (runtime->hasFunction(0x1B26F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B26F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B26B4u; }
        if (ctx->pc != 0x1B26B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B26F0_0x1b26f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B26B4u; }
        if (ctx->pc != 0x1B26B4u) { return; }
    }
    ctx->pc = 0x1B26B4u;
label_1b26b4:
    // 0x1b26b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b26b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b26b8: 0xae60cab4  sw          $zero, -0x354C($s3)
    ctx->pc = 0x1b26b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294953652), GPR_U32(ctx, 0));
    // 0x1b26bc: 0xae82cab0  sw          $v0, -0x3550($s4)
    ctx->pc = 0x1b26bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294953648), GPR_U32(ctx, 2));
    // 0x1b26c0: 0xae40cab8  sw          $zero, -0x3548($s2)
    ctx->pc = 0x1b26c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294953656), GPR_U32(ctx, 0));
label_1b26c4:
    // 0x1b26c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b26c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1b26c8:
    // 0x1b26c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b26c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b26cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b26ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b26d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b26d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b26d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b26d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b26d8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1b26d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b26dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b26dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b26e0: 0xac40cafc  sw          $zero, -0x3504($v0)
    ctx->pc = 0x1b26e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953724), GPR_U32(ctx, 0));
    // 0x1b26e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B26E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B26E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B26E4u;
            // 0x1b26e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B26A8u: goto label_1b26a8;
            case 0x1B26B4u: goto label_1b26b4;
            case 0x1B26C4u: goto label_1b26c4;
            case 0x1B26C8u: goto label_1b26c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B26ECu;
    // 0x1b26ec: 0x0  nop
    ctx->pc = 0x1b26ecu;
    // NOP
}
