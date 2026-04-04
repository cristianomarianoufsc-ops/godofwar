#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FCF60
// Address: 0x1fcf60 - 0x1fd0c8
void sub_001FCF60_0x1fcf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCF60_0x1fcf60");
#endif

    ctx->pc = 0x1fcf60u;

    // 0x1fcf60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fcf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1fcf64: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1fcf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1fcf68: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1fcf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1fcf6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fcf6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf70: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1fcf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1fcf74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fcf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fcf78: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1fcf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1fcf7c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1fcf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1fcf80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fcf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fcf84: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1fcf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1fcf88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fcf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fcf8c: 0x8c510104  lw          $s1, 0x104($v0)
    ctx->pc = 0x1fcf8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1fcf90: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x1fcf90u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x1fcf94: 0xdea5bdf8  ld          $a1, -0x4208($s5)
    ctx->pc = 0x1fcf94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 4294950392)));
    // 0x1fcf98: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x1fcf98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1fcf9c: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCF9Cu;
    {
        const bool branch_taken_0x1fcf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FCFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCF9Cu;
            // 0x1fcfa0: 0x8612008a  lh          $s2, 0x8A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 138)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf9c) {
            ctx->pc = 0x1FCFB0u;
            goto label_1fcfb0;
        }
    }
    ctx->pc = 0x1FCFA4u;
    // 0x1fcfa4: 0xc04da64  jal         func_136990
    ctx->pc = 0x1FCFA4u;
    SET_GPR_U32(ctx, 31, 0x1FCFACu);
    ctx->pc = 0x1FCFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCFA4u;
            // 0x1fcfa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCFACu; }
        if (ctx->pc != 0x1FCFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCFACu; }
        if (ctx->pc != 0x1FCFACu) { return; }
    }
    ctx->pc = 0x1FCFACu;
    // 0x1fcfac: 0x0  nop
    ctx->pc = 0x1fcfacu;
    // NOP
label_1fcfb0:
    // 0x1fcfb0: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1fcfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1fcfb4: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x1fcfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1fcfb8: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x1fcfb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fcfbc: 0xdea5bdf8  ld          $a1, -0x4208($s5)
    ctx->pc = 0x1fcfbcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 4294950392)));
    // 0x1fcfc0: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x1fcfc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1fcfc4: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCFC4u;
    {
        const bool branch_taken_0x1fcfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FCFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCFC4u;
            // 0x1fcfc8: 0x86120088  lh          $s2, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfc4) {
            ctx->pc = 0x1FCFD8u;
            goto label_1fcfd8;
        }
    }
    ctx->pc = 0x1FCFCCu;
    // 0x1fcfcc: 0xc04da64  jal         func_136990
    ctx->pc = 0x1FCFCCu;
    SET_GPR_U32(ctx, 31, 0x1FCFD4u);
    ctx->pc = 0x1FCFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCFCCu;
            // 0x1fcfd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCFD4u; }
        if (ctx->pc != 0x1FCFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCFD4u; }
        if (ctx->pc != 0x1FCFD4u) { return; }
    }
    ctx->pc = 0x1FCFD4u;
    // 0x1fcfd4: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x1fcfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1fcfd8:
    // 0x1fcfd8: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1fcfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1fcfdc: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1fcfdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fcfe0: 0xdea5bdf8  ld          $a1, -0x4208($s5)
    ctx->pc = 0x1fcfe0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 4294950392)));
    // 0x1fcfe4: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x1fcfe4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1fcfe8: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCFE8u;
    {
        const bool branch_taken_0x1fcfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FCFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCFE8u;
            // 0x1fcfec: 0x8614008c  lh          $s4, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfe8) {
            ctx->pc = 0x1FCFF8u;
            goto label_1fcff8;
        }
    }
    ctx->pc = 0x1FCFF0u;
    // 0x1fcff0: 0xc04da64  jal         func_136990
    ctx->pc = 0x1FCFF0u;
    SET_GPR_U32(ctx, 31, 0x1FCFF8u);
    ctx->pc = 0x1FCFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCFF0u;
            // 0x1fcff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCFF8u; }
        if (ctx->pc != 0x1FCFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCFF8u; }
        if (ctx->pc != 0x1FCFF8u) { return; }
    }
    ctx->pc = 0x1FCFF8u;
label_1fcff8:
    // 0x1fcff8: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x1fcff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1fcffc: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x1fcffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x1fd000: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x1fd000u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x1fd004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd008: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FD008u;
    {
        const bool branch_taken_0x1fd008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD008u;
            // 0x1fd00c: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd008) {
            ctx->pc = 0x1FD058u;
            goto label_1fd058;
        }
    }
    ctx->pc = 0x1FD010u;
    // 0x1fd010: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1fd010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fd014: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD014u;
    {
        const bool branch_taken_0x1fd014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd014) {
            ctx->pc = 0x1FD018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD014u;
            // 0x1fd018: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FD02Cu;
            goto label_1fd02c;
        }
    }
    ctx->pc = 0x1FD01Cu;
    // 0x1fd01c: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD01Cu;
    {
        const bool branch_taken_0x1fd01c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd01c) {
            ctx->pc = 0x1FD020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD01Cu;
            // 0x1fd020: 0x78620000  lq          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FD03Cu;
            goto label_1fd03c;
        }
    }
    ctx->pc = 0x1FD024u;
    // 0x1fd024: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1FD024u;
    {
        const bool branch_taken_0x1fd024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd024) {
            ctx->pc = 0x1FD094u;
            goto label_1fd094;
        }
    }
    ctx->pc = 0x1FD02Cu;
label_1fd02c:
    // 0x1fd02c: 0x50a20012  beql        $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FD02Cu;
    {
        const bool branch_taken_0x1fd02c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fd02c) {
            ctx->pc = 0x1FD030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD02Cu;
            // 0x1fd030: 0x7a620000  lq          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FD078u;
            goto label_1fd078;
        }
    }
    ctx->pc = 0x1FD034u;
    // 0x1fd034: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FD034u;
    {
        const bool branch_taken_0x1fd034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd034) {
            ctx->pc = 0x1FD094u;
            goto label_1fd094;
        }
    }
    ctx->pc = 0x1FD03Cu;
label_1fd03c:
    // 0x1fd03c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1fd03cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1fd040: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1fd040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1fd044: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1fd044u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x1fd048: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1fd048u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fd04c: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1fd04cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1fd050: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FD050u;
    {
        const bool branch_taken_0x1fd050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD050u;
            // 0x1fd054: 0x78620030  lq          $v0, 0x30($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd050) {
            ctx->pc = 0x1FD090u;
            goto label_1fd090;
        }
    }
    ctx->pc = 0x1FD058u;
label_1fd058:
    // 0x1fd058: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x1fd058u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fd05c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1fd05cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1fd060: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x1fd060u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1fd064: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1fd064u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x1fd068: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x1fd068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1fd06c: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1fd06cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1fd070: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD070u;
    {
        const bool branch_taken_0x1fd070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD070u;
            // 0x1fd074: 0x7a420030  lq          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd070) {
            ctx->pc = 0x1FD090u;
            goto label_1fd090;
        }
    }
    ctx->pc = 0x1FD078u;
label_1fd078:
    // 0x1fd078: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1fd078u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1fd07c: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x1fd07cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1fd080: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1fd080u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x1fd084: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x1fd084u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1fd088: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1fd088u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1fd08c: 0x7a620030  lq          $v0, 0x30($s3)
    ctx->pc = 0x1fd08cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_1fd090:
    // 0x1fd090: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1fd090u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_1fd094:
    // 0x1fd094: 0xc04b9da  jal         func_12E768
    ctx->pc = 0x1FD094u;
    SET_GPR_U32(ctx, 31, 0x1FD09Cu);
    ctx->pc = 0x1FD098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD094u;
            // 0x1fd098: 0x8e0400b4  lw          $a0, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E768u;
    if (runtime->hasFunction(0x12E768u)) {
        auto targetFn = runtime->lookupFunction(0x12E768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD09Cu; }
        if (ctx->pc != 0x1FD09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E768_0x12e768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD09Cu; }
        if (ctx->pc != 0x1FD09Cu) { return; }
    }
    ctx->pc = 0x1FD09Cu;
    // 0x1fd09c: 0xc07ea2a  jal         func_1FA8A8
    ctx->pc = 0x1FD09Cu;
    SET_GPR_U32(ctx, 31, 0x1FD0A4u);
    ctx->pc = 0x1FD0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD09Cu;
            // 0x1fd0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA8A8u;
    if (runtime->hasFunction(0x1FA8A8u)) {
        auto targetFn = runtime->lookupFunction(0x1FA8A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD0A4u; }
        if (ctx->pc != 0x1FD0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FA8A8_0x1fa8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD0A4u; }
        if (ctx->pc != 0x1FD0A4u) { return; }
    }
    ctx->pc = 0x1FD0A4u;
    // 0x1fd0a4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1fd0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fd0a8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1fd0a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd0ac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1fd0acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd0b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fd0b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fd0b4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1fd0b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd0b8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1fd0b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd0bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD0C0u;
            // 0x1fd0c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCFB0u: goto label_1fcfb0;
            case 0x1FCFD8u: goto label_1fcfd8;
            case 0x1FCFF8u: goto label_1fcff8;
            case 0x1FD02Cu: goto label_1fd02c;
            case 0x1FD03Cu: goto label_1fd03c;
            case 0x1FD058u: goto label_1fd058;
            case 0x1FD078u: goto label_1fd078;
            case 0x1FD090u: goto label_1fd090;
            case 0x1FD094u: goto label_1fd094;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD0C8u;
}
