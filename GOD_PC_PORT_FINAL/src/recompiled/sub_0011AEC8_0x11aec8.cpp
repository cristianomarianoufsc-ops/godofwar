#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011AEC8
// Address: 0x11aec8 - 0x11bb40
void sub_0011AEC8_0x11aec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AEC8_0x11aec8");
#endif

    ctx->pc = 0x11aec8u;

    // 0x11aec8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x11aec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x11aecc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x11aeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x11aed0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x11aed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x11aed4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11aed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aed8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x11aed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x11aedc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x11aedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x11aee0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x11aee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x11aee4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11aee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x11aee8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x11aee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x11aeec: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x11aeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x11aef0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x11aef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x11aef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11aef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11aef8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x11aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x11aefc: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x11aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x11af00: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x11AF00u;
    {
        const bool branch_taken_0x11af00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF00u;
            // 0x11af04: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af00) {
            ctx->pc = 0x11AF88u;
            goto label_11af88;
        }
    }
    ctx->pc = 0x11AF08u;
    // 0x11af08: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x11af08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x11af0c: 0x10400124  beqz        $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x11AF0Cu;
    {
        const bool branch_taken_0x11af0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF0Cu;
            // 0x11af10: 0x8e500064  lw          $s0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af0c) {
            ctx->pc = 0x11B3A0u;
            goto label_11b3a0;
        }
    }
    ctx->pc = 0x11AF14u;
    // 0x11af14: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x11af14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af18: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x11af18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x11af1c: 0x0  nop
    ctx->pc = 0x11af1cu;
    // NOP
label_11af20:
    // 0x11af20: 0x138880  sll         $s1, $s3, 2
    ctx->pc = 0x11af20u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x11af24: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x11af24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x11af28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11af28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x11af2c: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x11af2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11af30: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11af30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11af34: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x11af34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x11af38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11af38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11af3c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x11af3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x11af40: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x11af40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11af44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11af44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af48: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x11AF48u;
    SET_GPR_U32(ctx, 31, 0x11AF50u);
    ctx->pc = 0x11AF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF48u;
            // 0x11af4c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF50u; }
        if (ctx->pc != 0x11AF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF50u; }
        if (ctx->pc != 0x11AF50u) { return; }
    }
    ctx->pc = 0x11AF50u;
    // 0x11af50: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x11af50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x11af54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11af54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af58: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x11af58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x11af5c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11af60: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x11af60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x11af64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11af64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11af68: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x11AF68u;
    SET_GPR_U32(ctx, 31, 0x11AF70u);
    ctx->pc = 0x11AF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF68u;
            // 0x11af6c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF70u; }
        if (ctx->pc != 0x11AF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF70u; }
        if (ctx->pc != 0x11AF70u) { return; }
    }
    ctx->pc = 0x11AF70u;
    // 0x11af70: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x11af70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x11af74: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x11af74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11af78: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x11AF78u;
    {
        const bool branch_taken_0x11af78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11af78) {
            ctx->pc = 0x11AF7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF78u;
            // 0x11af7c: 0x8e420070  lw          $v0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11AF20u;
            runtime->cooperativeGuestYield();
            goto label_11af20;
        }
    }
    ctx->pc = 0x11AF80u;
    // 0x11af80: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x11AF80u;
    {
        const bool branch_taken_0x11af80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF80u;
            // 0x11af84: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af80) {
            ctx->pc = 0x11B3A4u;
            goto label_11b3a4;
        }
    }
    ctx->pc = 0x11AF88u;
label_11af88:
    // 0x11af88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11af88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11af8c: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x11af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x11af90: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x11af90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af94: 0xae430108  sw          $v1, 0x108($s2)
    ctx->pc = 0x11af94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 3));
    // 0x11af98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11af98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11af9c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x11af9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x11afa0: 0xc055acc  jal         func_156B30
    ctx->pc = 0x11AFA0u;
    SET_GPR_U32(ctx, 31, 0x11AFA8u);
    ctx->pc = 0x11AFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AFA0u;
            // 0x11afa4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156B30u;
    if (runtime->hasFunction(0x156B30u)) {
        auto targetFn = runtime->lookupFunction(0x156B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AFA8u; }
        if (ctx->pc != 0x11AFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156B30_0x156b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AFA8u; }
        if (ctx->pc != 0x11AFA8u) { return; }
    }
    ctx->pc = 0x11AFA8u;
    // 0x11afa8: 0xc04060a  jal         func_101828
    ctx->pc = 0x11AFA8u;
    SET_GPR_U32(ctx, 31, 0x11AFB0u);
    ctx->pc = 0x11AFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AFA8u;
            // 0x11afac: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AFB0u; }
        if (ctx->pc != 0x11AFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AFB0u; }
        if (ctx->pc != 0x11AFB0u) { return; }
    }
    ctx->pc = 0x11AFB0u;
    // 0x11afb0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x11afb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11afb4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x11afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11afb8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x11afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x11afbc: 0xae570128  sw          $s7, 0x128($s2)
    ctx->pc = 0x11afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 23));
    // 0x11afc0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x11afc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11afc4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x11afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x11afc8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x11afc8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x11afcc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11afccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11afd0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11AFD0u;
    {
        const bool branch_taken_0x11afd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11afd0) {
            ctx->pc = 0x11AFD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11AFD0u;
            // 0x11afd4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11AFD8u;
            goto label_11afd8;
        }
    }
    ctx->pc = 0x11AFD8u;
label_11afd8:
    // 0x11afd8: 0x8ee30014  lw          $v1, 0x14($s7)
    ctx->pc = 0x11afd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x11afdc: 0x1012  mflo        $v0
    ctx->pc = 0x11afdcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11afe0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11afe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11afe8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x11AFE8u;
    SET_GPR_U32(ctx, 31, 0x11AFF0u);
    ctx->pc = 0x11AFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AFE8u;
            // 0x11afec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AFF0u; }
        if (ctx->pc != 0x11AFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AFF0u; }
        if (ctx->pc != 0x11AFF0u) { return; }
    }
    ctx->pc = 0x11AFF0u;
    // 0x11aff0: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x11aff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x11aff4: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x11aff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
    // 0x11aff8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11affc: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x11affcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
    // 0x11b000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11b004: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x11b004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11b008: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x11b008u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x11b00c: 0x108000ca  beqz        $a0, . + 4 + (0xCA << 2)
    ctx->pc = 0x11B00Cu;
    {
        const bool branch_taken_0x11b00c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B00Cu;
            // 0x11b010: 0xae430074  sw          $v1, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b00c) {
            ctx->pc = 0x11B338u;
            goto label_11b338;
        }
    }
    ctx->pc = 0x11B014u;
    // 0x11b014: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x11b014u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b018:
    // 0x11b018: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x11b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11b01c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x11b01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x11b020: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x11b020u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x11b024: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x11B024u;
    {
        const bool branch_taken_0x11b024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B024u;
            // 0x11b028: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b024) {
            ctx->pc = 0x11B31Cu;
            goto label_11b31c;
        }
    }
    ctx->pc = 0x11B02Cu;
    // 0x11b02c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x11b02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_11b030:
    // 0x11b030: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x11b030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x11b034: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11b034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b038: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x11b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11b03c: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x11b03cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b040: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x11b040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x11b044: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x11B044u;
    {
        const bool branch_taken_0x11b044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B044u;
            // 0x11b048: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b044) {
            ctx->pc = 0x11B304u;
            goto label_11b304;
        }
    }
    ctx->pc = 0x11B04Cu;
    // 0x11b04c: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x11b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_11b050:
    // 0x11b050: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x11b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x11b054: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x11b054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x11b058: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x11b058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x11b05c: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x11b05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b060: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x11b060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x11b064: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x11b064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x11b068: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x11b068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b06c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11b070: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x11b070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11b074: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x11b074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11b078: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x11b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x11b07c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x11b07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11b080: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x11b080u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x11b084: 0x5040009b  beql        $v0, $zero, . + 4 + (0x9B << 2)
    ctx->pc = 0x11B084u;
    {
        const bool branch_taken_0x11b084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b084) {
            ctx->pc = 0x11B088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B084u;
            // 0x11b088: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B2F4u;
            goto label_11b2f4;
        }
    }
    ctx->pc = 0x11B08Cu;
    // 0x11b08c: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x11b08cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x11b090: 0x54e00098  bnel        $a3, $zero, . + 4 + (0x98 << 2)
    ctx->pc = 0x11B090u;
    {
        const bool branch_taken_0x11b090 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b090) {
            ctx->pc = 0x11B094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B090u;
            // 0x11b094: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B2F4u;
            goto label_11b2f4;
        }
    }
    ctx->pc = 0x11B098u;
    // 0x11b098: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x11b098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b09c: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x11b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x11b0a0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x11b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11b0a4: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x11b0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11b0a8: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x11b0a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x11b0ac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x11b0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x11b0b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B0B0u;
    {
        const bool branch_taken_0x11b0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b0b0) {
            ctx->pc = 0x11B0B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0B0u;
            // 0x11b0b4: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B0D0u;
            goto label_11b0d0;
        }
    }
    ctx->pc = 0x11B0B8u;
    // 0x11b0b8: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x11b0b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x11b0bc: 0x94e3000a  lhu         $v1, 0xA($a3)
    ctx->pc = 0x11b0bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x11b0c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11b0c4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11b0c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11B0C8u;
    {
        const bool branch_taken_0x11b0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0C8u;
            // 0x11b0cc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0c8) {
            ctx->pc = 0x11B0D4u;
            goto label_11b0d4;
        }
    }
    ctx->pc = 0x11B0D0u;
label_11b0d0:
    // 0x11b0d0: 0x24427788  addiu       $v0, $v0, 0x7788
    ctx->pc = 0x11b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_11b0d4:
    // 0x11b0d4: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x11b0d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x11b0d8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x11b0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11b0dc: 0x94e5000a  lhu         $a1, 0xA($a3)
    ctx->pc = 0x11b0dcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x11b0e0: 0x2534021  addu        $t0, $s2, $s3
    ctx->pc = 0x11b0e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x11b0e4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x11b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x11b0e8: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x11b0e8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x11b0ec: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x11b0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11b0f0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x11b0f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x11b0f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11b0f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11b0fc: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x11b0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x11b100: 0x462018  mult        $a0, $v0, $a2
    ctx->pc = 0x11b100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11b104: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x11b104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11b108: 0x84a70000  lh          $a3, 0x0($a1)
    ctx->pc = 0x11b108u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11b10c: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x11b10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11b110: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x11b110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11b114: 0x84d40000  lh          $s4, 0x0($a2)
    ctx->pc = 0x11b114u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11b118: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x11b118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11b11c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11b120: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x11b120u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11b124: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11b124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b128: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x11b128u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b12c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x11b12cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b130: 0xad07012c  sw          $a3, 0x12C($t0)
    ctx->pc = 0x11b130u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 300), GPR_U32(ctx, 7));
    // 0x11b134: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x11b134u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11b138: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x11b138u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b13c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x11b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x11b140: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x11b140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11b144: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x11b144u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11b148: 0x8d4200e4  lw          $v0, 0xE4($t2)
    ctx->pc = 0x11b148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 228)));
    // 0x11b14c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x11b14cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11b150: 0x143900  sll         $a3, $s4, 4
    ctx->pc = 0x11b150u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x11b154: 0x3c08cfff  lui         $t0, 0xCFFF
    ctx->pc = 0x11b154u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53247 << 16));
    // 0x11b158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11b158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11b15c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x11b15cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x11b160: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11b160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b164: 0x8e490064  lw          $t1, 0x64($s2)
    ctx->pc = 0x11b164u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x11b168: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x11b168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11b16c: 0xc6410104  lwc1        $f1, 0x104($s2)
    ctx->pc = 0x11b16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b170: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x11b170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x11b174: 0x2694821  addu        $t1, $s3, $t1
    ctx->pc = 0x11b174u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x11b178: 0x8e44006c  lw          $a0, 0x6C($s2)
    ctx->pc = 0x11b178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x11b17c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b180: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x11b180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11b184: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x11b184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x11b188: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x11b188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11b18c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b190: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x11b190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11b194: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x11b194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b198: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x11b19c: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x11b19cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x11b1a0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x11b1a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b1a4: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x11b1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x11b1a8: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x11b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x11b1ac: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x11b1acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x11b1b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x11b1b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1b4: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x11b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x11b1b8: 0x2088024  and         $s0, $s0, $t0
    ctx->pc = 0x11b1b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 8));
    // 0x11b1bc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x11b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x11b1c0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x11b1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x11b1c4: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x11b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x11b1c8: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x11b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x11b1cc: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x11b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x11b1d0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x11b1d0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11b1d4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11B1D4u;
    {
        const bool branch_taken_0x11b1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b1d4) {
            ctx->pc = 0x11B1D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B1D4u;
            // 0x11b1d8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B1DCu;
            goto label_11b1dc;
        }
    }
    ctx->pc = 0x11B1DCu;
label_11b1dc:
    // 0x11b1dc: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x11b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x11b1e0: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x11b1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x11b1e4: 0x1812  mflo        $v1
    ctx->pc = 0x11b1e4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x11b1e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11b1ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b1f0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x11B1F0u;
    SET_GPR_U32(ctx, 31, 0x11B1F8u);
    ctx->pc = 0x11B1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B1F0u;
            // 0x11b1f4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B1F8u; }
        if (ctx->pc != 0x11B1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B1F8u; }
        if (ctx->pc != 0x11B1F8u) { return; }
    }
    ctx->pc = 0x11B1F8u;
    // 0x11b1f8: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x11b1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x11b1fc: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x11b1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11b200: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x11b200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x11b204: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x11b204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x11b208: 0x8e45006c  lw          $a1, 0x6C($s2)
    ctx->pc = 0x11b208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x11b20c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x11b20cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x11b210: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x11b210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x11b214: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x11b214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x11b218: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x11b218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x11b21c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11b21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b220: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x11b220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11b224: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x11B224u;
    SET_GPR_U32(ctx, 31, 0x11B22Cu);
    ctx->pc = 0x11B228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B224u;
            // 0x11b228: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B22Cu; }
        if (ctx->pc != 0x11B22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B22Cu; }
        if (ctx->pc != 0x11B22Cu) { return; }
    }
    ctx->pc = 0x11B22Cu;
    // 0x11b22c: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x11b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x11b230: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11b230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b234: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x11b234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x11b238: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x11b238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x11b23c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x11b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x11b240: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11b240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b244: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x11B244u;
    SET_GPR_U32(ctx, 31, 0x11B24Cu);
    ctx->pc = 0x11B248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B244u;
            // 0x11b248: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B24Cu; }
        if (ctx->pc != 0x11B24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B24Cu; }
        if (ctx->pc != 0x11B24Cu) { return; }
    }
    ctx->pc = 0x11B24Cu;
    // 0x11b24c: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x11b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x11b250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11b250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b254: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x11b254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x11b258: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x11b258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x11b25c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x11b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x11b260: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x11b260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x11b264: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x11b264u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b268: 0x43842  srl         $a3, $a0, 1
    ctx->pc = 0x11b268u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x11b26c: 0x10e00020  beqz        $a3, . + 4 + (0x20 << 2)
    ctx->pc = 0x11B26Cu;
    {
        const bool branch_taken_0x11b26c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B26Cu;
            // 0x11b270: 0x8c680000  lw          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b26c) {
            ctx->pc = 0x11B2F0u;
            goto label_11b2f0;
        }
    }
    ctx->pc = 0x11B274u;
    // 0x11b274: 0x92230018  lbu         $v1, 0x18($s1)
    ctx->pc = 0x11b274u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_11b278:
    // 0x11b278: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x11B278u;
    {
        const bool branch_taken_0x11b278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B278u;
            // 0x11b27c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b278) {
            ctx->pc = 0x11B2E0u;
            goto label_11b2e0;
        }
    }
    ctx->pc = 0x11B280u;
    // 0x11b280: 0xc32018  mult        $a0, $a2, $v1
    ctx->pc = 0x11b280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11b284: 0x0  nop
    ctx->pc = 0x11b284u;
    // NOP
label_11b288:
    // 0x11b288: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x11b288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x11b28c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x11b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x11b290: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x11b290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11b294: 0x445018  mult        $t2, $v0, $a0
    ctx->pc = 0x11b294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x11b298: 0x1541021  addu        $v0, $t2, $s4
    ctx->pc = 0x11b298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
    // 0x11b29c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x11b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11b2a0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11b2a4: 0xac490024  sw          $t1, 0x24($v0)
    ctx->pc = 0x11b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 9));
    // 0x11b2a8: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x11b2a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x11b2ac: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x11b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11b2b0: 0x625018  mult        $t2, $v1, $v0
    ctx->pc = 0x11b2b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x11b2b4: 0x1451821  addu        $v1, $t2, $a1
    ctx->pc = 0x11b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x11b2b8: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x11b2b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11b2bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11b2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11b2c0: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x11b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x11b2c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x11b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x11b2c8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x11b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x11b2cc: 0xac680024  sw          $t0, 0x24($v1)
    ctx->pc = 0x11b2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 8));
    // 0x11b2d0: 0x92230018  lbu         $v1, 0x18($s1)
    ctx->pc = 0x11b2d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x11b2d4: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x11b2d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11b2d8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11B2D8u;
    {
        const bool branch_taken_0x11b2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B2D8u;
            // 0x11b2dc: 0xc32018  mult        $a0, $a2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2d8) {
            ctx->pc = 0x11B288u;
            runtime->cooperativeGuestYield();
            goto label_11b288;
        }
    }
    ctx->pc = 0x11B2E0u;
label_11b2e0:
    // 0x11b2e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11b2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11b2e4: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x11b2e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11b2e8: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x11B2E8u;
    {
        const bool branch_taken_0x11b2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b2e8) {
            ctx->pc = 0x11B2ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B2E8u;
            // 0x11b2ec: 0x92230018  lbu         $v1, 0x18($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B278u;
            runtime->cooperativeGuestYield();
            goto label_11b278;
        }
    }
    ctx->pc = 0x11B2F0u;
label_11b2f0:
    // 0x11b2f0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x11b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_11b2f4:
    // 0x11b2f4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x11b2f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x11b2f8: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x11b2f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11b2fc: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
    ctx->pc = 0x11B2FCu;
    {
        const bool branch_taken_0x11b2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B2FCu;
            // 0x11b300: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2fc) {
            ctx->pc = 0x11B050u;
            runtime->cooperativeGuestYield();
            goto label_11b050;
        }
    }
    ctx->pc = 0x11B304u;
label_11b304:
    // 0x11b304: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x11b304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11b308: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x11b308u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x11b30c: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x11b30cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x11b310: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x11b310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11b314: 0x5440ff46  bnel        $v0, $zero, . + 4 + (-0xBA << 2)
    ctx->pc = 0x11B314u;
    {
        const bool branch_taken_0x11b314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b314) {
            ctx->pc = 0x11B318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B314u;
            // 0x11b318: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B030u;
            runtime->cooperativeGuestYield();
            goto label_11b030;
        }
    }
    ctx->pc = 0x11B31Cu;
label_11b31c:
    // 0x11b31c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x11b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b320: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x11b320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x11b324: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x11b324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x11b328: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11b328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11b32c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x11b32cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11b330: 0x1440ff39  bnez        $v0, . + 4 + (-0xC7 << 2)
    ctx->pc = 0x11B330u;
    {
        const bool branch_taken_0x11b330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B330u;
            // 0x11b334: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b330) {
            ctx->pc = 0x11B018u;
            runtime->cooperativeGuestYield();
            goto label_11b018;
        }
    }
    ctx->pc = 0x11B338u;
label_11b338:
    // 0x11b338: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x11b338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x11b33c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b340: 0x8e480078  lw          $t0, 0x78($s2)
    ctx->pc = 0x11b340u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x11b344: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11B344u;
    {
        const bool branch_taken_0x11b344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B344u;
            // 0x11b348: 0x8e430064  lw          $v1, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b344) {
            ctx->pc = 0x11B3A0u;
            goto label_11b3a0;
        }
    }
    ctx->pc = 0x11B34Cu;
    // 0x11b34c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11b34cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11b350:
    // 0x11b350: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11b354: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x11b354u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x11b358: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x11b358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b35c: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x11B35Cu;
    {
        const bool branch_taken_0x11b35c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B35Cu;
            // 0x11b360: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b35c) {
            ctx->pc = 0x11B38Cu;
            goto label_11b38c;
        }
    }
    ctx->pc = 0x11B364u;
    // 0x11b364: 0x0  nop
    ctx->pc = 0x11b364u;
    // NOP
label_11b368:
    // 0x11b368: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x11b368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x11b36c: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x11b36cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11b370: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x11b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11b374: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11b374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11b378: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11b378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11b37c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x11b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x11b380: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x11b380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11b384: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11B384u;
    {
        const bool branch_taken_0x11b384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B384u;
            // 0x11b388: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b384) {
            ctx->pc = 0x11B368u;
            runtime->cooperativeGuestYield();
            goto label_11b368;
        }
    }
    ctx->pc = 0x11B38Cu;
label_11b38c:
    // 0x11b38c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x11b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x11b390: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11b390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11b394: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x11b394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11b398: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11B398u;
    {
        const bool branch_taken_0x11b398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B398u;
            // 0x11b39c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b398) {
            ctx->pc = 0x11B350u;
            runtime->cooperativeGuestYield();
            goto label_11b350;
        }
    }
    ctx->pc = 0x11B3A0u;
label_11b3a0:
    // 0x11b3a0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x11b3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_11b3a4:
    // 0x11b3a4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x11b3a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11b3a8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x11b3a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11b3ac: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x11b3acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11b3b0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x11b3b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11b3b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11b3b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11b3b8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x11b3b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11b3bc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x11b3bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b3c0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x11b3c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b3c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x11B3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B3C8u;
            // 0x11b3cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AF20u: goto label_11af20;
            case 0x11AF88u: goto label_11af88;
            case 0x11AFD8u: goto label_11afd8;
            case 0x11B018u: goto label_11b018;
            case 0x11B030u: goto label_11b030;
            case 0x11B050u: goto label_11b050;
            case 0x11B0D0u: goto label_11b0d0;
            case 0x11B0D4u: goto label_11b0d4;
            case 0x11B1DCu: goto label_11b1dc;
            case 0x11B278u: goto label_11b278;
            case 0x11B288u: goto label_11b288;
            case 0x11B2E0u: goto label_11b2e0;
            case 0x11B2F0u: goto label_11b2f0;
            case 0x11B2F4u: goto label_11b2f4;
            case 0x11B304u: goto label_11b304;
            case 0x11B31Cu: goto label_11b31c;
            case 0x11B338u: goto label_11b338;
            case 0x11B350u: goto label_11b350;
            case 0x11B368u: goto label_11b368;
            case 0x11B38Cu: goto label_11b38c;
            case 0x11B3A0u: goto label_11b3a0;
            case 0x11B3A4u: goto label_11b3a4;
            case 0x11B424u: goto label_11b424;
            case 0x11B440u: goto label_11b440;
            case 0x11B494u: goto label_11b494;
            case 0x11B498u: goto label_11b498;
            case 0x11B4A0u: goto label_11b4a0;
            case 0x11B4C0u: goto label_11b4c0;
            case 0x11B4E8u: goto label_11b4e8;
            case 0x11B4ECu: goto label_11b4ec;
            case 0x11B508u: goto label_11b508;
            case 0x11B518u: goto label_11b518;
            case 0x11B570u: goto label_11b570;
            case 0x11B5A0u: goto label_11b5a0;
            case 0x11B5C0u: goto label_11b5c0;
            case 0x11B5E4u: goto label_11b5e4;
            case 0x11B5F4u: goto label_11b5f4;
            case 0x11B5F8u: goto label_11b5f8;
            case 0x11B60Cu: goto label_11b60c;
            case 0x11B620u: goto label_11b620;
            case 0x11B638u: goto label_11b638;
            case 0x11B688u: goto label_11b688;
            case 0x11B6D4u: goto label_11b6d4;
            case 0x11B6D8u: goto label_11b6d8;
            case 0x11B6E0u: goto label_11b6e0;
            case 0x11B700u: goto label_11b700;
            case 0x11B728u: goto label_11b728;
            case 0x11B72Cu: goto label_11b72c;
            case 0x11B760u: goto label_11b760;
            case 0x11B770u: goto label_11b770;
            case 0x11B7C8u: goto label_11b7c8;
            case 0x11B808u: goto label_11b808;
            case 0x11B8E8u: goto label_11b8e8;
            case 0x11B90Cu: goto label_11b90c;
            case 0x11B91Cu: goto label_11b91c;
            case 0x11B920u: goto label_11b920;
            case 0x11B938u: goto label_11b938;
            case 0x11B948u: goto label_11b948;
            case 0x11B954u: goto label_11b954;
            case 0x11B958u: goto label_11b958;
            case 0x11B9C0u: goto label_11b9c0;
            case 0x11B9D8u: goto label_11b9d8;
            case 0x11B9FCu: goto label_11b9fc;
            case 0x11BA10u: goto label_11ba10;
            case 0x11BA30u: goto label_11ba30;
            case 0x11BA50u: goto label_11ba50;
            case 0x11BA6Cu: goto label_11ba6c;
            case 0x11BA74u: goto label_11ba74;
            case 0x11BA98u: goto label_11ba98;
            case 0x11BAB8u: goto label_11bab8;
            case 0x11BB20u: goto label_11bb20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11B3D0u;
    // 0x11b3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B3D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AF20u: goto label_11af20;
            case 0x11AF88u: goto label_11af88;
            case 0x11AFD8u: goto label_11afd8;
            case 0x11B018u: goto label_11b018;
            case 0x11B030u: goto label_11b030;
            case 0x11B050u: goto label_11b050;
            case 0x11B0D0u: goto label_11b0d0;
            case 0x11B0D4u: goto label_11b0d4;
            case 0x11B1DCu: goto label_11b1dc;
            case 0x11B278u: goto label_11b278;
            case 0x11B288u: goto label_11b288;
            case 0x11B2E0u: goto label_11b2e0;
            case 0x11B2F0u: goto label_11b2f0;
            case 0x11B2F4u: goto label_11b2f4;
            case 0x11B304u: goto label_11b304;
            case 0x11B31Cu: goto label_11b31c;
            case 0x11B338u: goto label_11b338;
            case 0x11B350u: goto label_11b350;
            case 0x11B368u: goto label_11b368;
            case 0x11B38Cu: goto label_11b38c;
            case 0x11B3A0u: goto label_11b3a0;
            case 0x11B3A4u: goto label_11b3a4;
            case 0x11B424u: goto label_11b424;
            case 0x11B440u: goto label_11b440;
            case 0x11B494u: goto label_11b494;
            case 0x11B498u: goto label_11b498;
            case 0x11B4A0u: goto label_11b4a0;
            case 0x11B4C0u: goto label_11b4c0;
            case 0x11B4E8u: goto label_11b4e8;
            case 0x11B4ECu: goto label_11b4ec;
            case 0x11B508u: goto label_11b508;
            case 0x11B518u: goto label_11b518;
            case 0x11B570u: goto label_11b570;
            case 0x11B5A0u: goto label_11b5a0;
            case 0x11B5C0u: goto label_11b5c0;
            case 0x11B5E4u: goto label_11b5e4;
            case 0x11B5F4u: goto label_11b5f4;
            case 0x11B5F8u: goto label_11b5f8;
            case 0x11B60Cu: goto label_11b60c;
            case 0x11B620u: goto label_11b620;
            case 0x11B638u: goto label_11b638;
            case 0x11B688u: goto label_11b688;
            case 0x11B6D4u: goto label_11b6d4;
            case 0x11B6D8u: goto label_11b6d8;
            case 0x11B6E0u: goto label_11b6e0;
            case 0x11B700u: goto label_11b700;
            case 0x11B728u: goto label_11b728;
            case 0x11B72Cu: goto label_11b72c;
            case 0x11B760u: goto label_11b760;
            case 0x11B770u: goto label_11b770;
            case 0x11B7C8u: goto label_11b7c8;
            case 0x11B808u: goto label_11b808;
            case 0x11B8E8u: goto label_11b8e8;
            case 0x11B90Cu: goto label_11b90c;
            case 0x11B91Cu: goto label_11b91c;
            case 0x11B920u: goto label_11b920;
            case 0x11B938u: goto label_11b938;
            case 0x11B948u: goto label_11b948;
            case 0x11B954u: goto label_11b954;
            case 0x11B958u: goto label_11b958;
            case 0x11B9C0u: goto label_11b9c0;
            case 0x11B9D8u: goto label_11b9d8;
            case 0x11B9FCu: goto label_11b9fc;
            case 0x11BA10u: goto label_11ba10;
            case 0x11BA30u: goto label_11ba30;
            case 0x11BA50u: goto label_11ba50;
            case 0x11BA6Cu: goto label_11ba6c;
            case 0x11BA74u: goto label_11ba74;
            case 0x11BA98u: goto label_11ba98;
            case 0x11BAB8u: goto label_11bab8;
            case 0x11BB20u: goto label_11bb20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11B3D8u;
    // 0x11b3d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x11b3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11b3dc: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x11b3dcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3e0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x11b3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x11b3e4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x11b3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x11b3e8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x11b3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x11b3ec: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x11b3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x11b3f0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x11b3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x11b3f4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x11b3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x11b3f8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x11b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x11b3fc: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x11b3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x11b400: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x11b400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x11b404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11b404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11b408: 0x8da20110  lw          $v0, 0x110($t5)
    ctx->pc = 0x11b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 272)));
    // 0x11b40c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B40Cu;
    {
        const bool branch_taken_0x11b40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b40c) {
            ctx->pc = 0x11B410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B40Cu;
            // 0x11b410: 0x8da30064  lw          $v1, 0x64($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B424u;
            goto label_11b424;
        }
    }
    ctx->pc = 0x11B414u;
    // 0x11b414: 0x40f809  jalr        $v0
    ctx->pc = 0x11B414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B41Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x11B41Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AF20u: goto label_11af20;
            case 0x11AF88u: goto label_11af88;
            case 0x11AFD8u: goto label_11afd8;
            case 0x11B018u: goto label_11b018;
            case 0x11B030u: goto label_11b030;
            case 0x11B050u: goto label_11b050;
            case 0x11B0D0u: goto label_11b0d0;
            case 0x11B0D4u: goto label_11b0d4;
            case 0x11B1DCu: goto label_11b1dc;
            case 0x11B278u: goto label_11b278;
            case 0x11B288u: goto label_11b288;
            case 0x11B2E0u: goto label_11b2e0;
            case 0x11B2F0u: goto label_11b2f0;
            case 0x11B2F4u: goto label_11b2f4;
            case 0x11B304u: goto label_11b304;
            case 0x11B31Cu: goto label_11b31c;
            case 0x11B338u: goto label_11b338;
            case 0x11B350u: goto label_11b350;
            case 0x11B368u: goto label_11b368;
            case 0x11B38Cu: goto label_11b38c;
            case 0x11B3A0u: goto label_11b3a0;
            case 0x11B3A4u: goto label_11b3a4;
            case 0x11B424u: goto label_11b424;
            case 0x11B440u: goto label_11b440;
            case 0x11B494u: goto label_11b494;
            case 0x11B498u: goto label_11b498;
            case 0x11B4A0u: goto label_11b4a0;
            case 0x11B4C0u: goto label_11b4c0;
            case 0x11B4E8u: goto label_11b4e8;
            case 0x11B4ECu: goto label_11b4ec;
            case 0x11B508u: goto label_11b508;
            case 0x11B518u: goto label_11b518;
            case 0x11B570u: goto label_11b570;
            case 0x11B5A0u: goto label_11b5a0;
            case 0x11B5C0u: goto label_11b5c0;
            case 0x11B5E4u: goto label_11b5e4;
            case 0x11B5F4u: goto label_11b5f4;
            case 0x11B5F8u: goto label_11b5f8;
            case 0x11B60Cu: goto label_11b60c;
            case 0x11B620u: goto label_11b620;
            case 0x11B638u: goto label_11b638;
            case 0x11B688u: goto label_11b688;
            case 0x11B6D4u: goto label_11b6d4;
            case 0x11B6D8u: goto label_11b6d8;
            case 0x11B6E0u: goto label_11b6e0;
            case 0x11B700u: goto label_11b700;
            case 0x11B728u: goto label_11b728;
            case 0x11B72Cu: goto label_11b72c;
            case 0x11B760u: goto label_11b760;
            case 0x11B770u: goto label_11b770;
            case 0x11B7C8u: goto label_11b7c8;
            case 0x11B808u: goto label_11b808;
            case 0x11B8E8u: goto label_11b8e8;
            case 0x11B90Cu: goto label_11b90c;
            case 0x11B91Cu: goto label_11b91c;
            case 0x11B920u: goto label_11b920;
            case 0x11B938u: goto label_11b938;
            case 0x11B948u: goto label_11b948;
            case 0x11B954u: goto label_11b954;
            case 0x11B958u: goto label_11b958;
            case 0x11B9C0u: goto label_11b9c0;
            case 0x11B9D8u: goto label_11b9d8;
            case 0x11B9FCu: goto label_11b9fc;
            case 0x11BA10u: goto label_11ba10;
            case 0x11BA30u: goto label_11ba30;
            case 0x11BA50u: goto label_11ba50;
            case 0x11BA6Cu: goto label_11ba6c;
            case 0x11BA74u: goto label_11ba74;
            case 0x11BA98u: goto label_11ba98;
            case 0x11BAB8u: goto label_11bab8;
            case 0x11BB20u: goto label_11bb20;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11B41Cu; }
            if (ctx->pc != 0x11B41Cu) { return; }
        }
        }
    }
    ctx->pc = 0x11B41Cu;
    // 0x11b41c: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x11B41Cu;
    {
        const bool branch_taken_0x11b41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B41Cu;
            // 0x11b420: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b41c) {
            ctx->pc = 0x11B958u;
            goto label_11b958;
        }
    }
    ctx->pc = 0x11B424u;
label_11b424:
    // 0x11b424: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x11b424u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b428: 0x8da20020  lw          $v0, 0x20($t5)
    ctx->pc = 0x11b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x11b42c: 0x8db70078  lw          $s7, 0x78($t5)
    ctx->pc = 0x11b42cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 120)));
    // 0x11b430: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x11B430u;
    {
        const bool branch_taken_0x11b430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B430u;
            // 0x11b434: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b430) {
            ctx->pc = 0x11B60Cu;
            goto label_11b60c;
        }
    }
    ctx->pc = 0x11B438u;
    // 0x11b438: 0x60702d  daddu       $t6, $v1, $zero
    ctx->pc = 0x11b438u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b43c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11b43cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b440:
    // 0x11b440: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x11b440u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x11b444: 0x25a90070  addiu       $t1, $t5, 0x70
    ctx->pc = 0x11b444u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 112));
    // 0x11b448: 0x8e22c7dc  lw          $v0, -0x3824($s1)
    ctx->pc = 0x11b448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952924)));
    // 0x11b44c: 0x25a5012c  addiu       $a1, $t5, 0x12C
    ctx->pc = 0x11b44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 300));
    // 0x11b450: 0x8da3006c  lw          $v1, 0x6C($t5)
    ctx->pc = 0x11b450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 108)));
    // 0x11b454: 0xab2021  addu        $a0, $a1, $t3
    ctx->pc = 0x11b454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x11b458: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11b458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11b45c: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x11b45cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11b460: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x11b460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x11b464: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x11b464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x11b468: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11b468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b46c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11b46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b470: 0x8c6f0000  lw          $t7, 0x0($v1)
    ctx->pc = 0x11b470u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b474: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11b474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b478: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x11b478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x11b47c: 0x5410005  bgez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B47Cu;
    {
        const bool branch_taken_0x11b47c = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x11B480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B47Cu;
            // 0x11b480: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b47c) {
            ctx->pc = 0x11B494u;
            goto label_11b494;
        }
    }
    ctx->pc = 0x11B484u;
    // 0x11b484: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x11b484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11b488: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x11b488u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x11b48c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11B48Cu;
    {
        const bool branch_taken_0x11b48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B48Cu;
            // 0x11b490: 0x244a0001  addiu       $t2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b48c) {
            ctx->pc = 0x11B498u;
            goto label_11b498;
        }
    }
    ctx->pc = 0x11B494u;
label_11b494:
    // 0x11b494: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11b494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b498:
    // 0x11b498: 0x1140001f  beqz        $t2, . + 4 + (0x1F << 2)
    ctx->pc = 0x11B498u;
    {
        const bool branch_taken_0x11b498 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B498u;
            // 0x11b49c: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b498) {
            ctx->pc = 0x11B518u;
            goto label_11b518;
        }
    }
    ctx->pc = 0x11B4A0u;
label_11b4a0:
    // 0x11b4a0: 0x1821818  mult        $v1, $t4, $v0
    ctx->pc = 0x11b4a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11b4a4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x11b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11b4a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11b4ac: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x11b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x11b4b0: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x11b4b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b4b4: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x11B4B4u;
    {
        const bool branch_taken_0x11b4b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B4B4u;
            // 0x11b4b8: 0x43900  sll         $a3, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4b4) {
            ctx->pc = 0x11B508u;
            goto label_11b508;
        }
    }
    ctx->pc = 0x11B4BCu;
    // 0x11b4bc: 0x0  nop
    ctx->pc = 0x11b4bcu;
    // NOP
label_11b4c0:
    // 0x11b4c0: 0x61023  negu        $v0, $a2
    ctx->pc = 0x11b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x11b4c4: 0xc21824  and         $v1, $a2, $v0
    ctx->pc = 0x11b4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11b4c8: 0xc31026  xor         $v0, $a2, $v1
    ctx->pc = 0x11b4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x11b4cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11b4d0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B4D0u;
    {
        const bool branch_taken_0x11b4d0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x11B4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B4D0u;
            // 0x11b4d4: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4d0) {
            ctx->pc = 0x11B4E8u;
            goto label_11b4e8;
        }
    }
    ctx->pc = 0x11B4D8u;
    // 0x11b4d8: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x11b4d8u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x11b4dc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x11b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x11b4e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11B4E0u;
    {
        const bool branch_taken_0x11b4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B4E0u;
            // 0x11b4e4: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4e0) {
            ctx->pc = 0x11B4ECu;
            goto label_11b4ec;
        }
    }
    ctx->pc = 0x11B4E8u;
label_11b4e8:
    // 0x11b4e8: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x11b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_11b4ec:
    // 0x11b4ec: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x11b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x11b4f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11b4f4: 0x4f1821  addu        $v1, $v0, $t7
    ctx->pc = 0x11b4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x11b4f8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x11b4f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b4fc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x11b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x11b500: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x11B500u;
    {
        const bool branch_taken_0x11b500 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B500u;
            // 0x11b504: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b500) {
            ctx->pc = 0x11B4C0u;
            runtime->cooperativeGuestYield();
            goto label_11b4c0;
        }
    }
    ctx->pc = 0x11B508u;
label_11b508:
    // 0x11b508: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11b508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11b50c: 0x8a102b  sltu        $v0, $a0, $t2
    ctx->pc = 0x11b50cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x11b510: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x11B510u;
    {
        const bool branch_taken_0x11b510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B510u;
            // 0x11b514: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b510) {
            ctx->pc = 0x11B4A0u;
            runtime->cooperativeGuestYield();
            goto label_11b4a0;
        }
    }
    ctx->pc = 0x11B518u;
label_11b518:
    // 0x11b518: 0x52000037  beql        $s0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x11B518u;
    {
        const bool branch_taken_0x11b518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b518) {
            ctx->pc = 0x11B51Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B518u;
            // 0x11b51c: 0x8da20020  lw          $v0, 0x20($t5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B5F8u;
            goto label_11b5f8;
        }
    }
    ctx->pc = 0x11B520u;
    // 0x11b520: 0x8e22c7dc  lw          $v0, -0x3824($s1)
    ctx->pc = 0x11b520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952924)));
    // 0x11b524: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x11b524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x11b528: 0x8da4006c  lw          $a0, 0x6C($t5)
    ctx->pc = 0x11b528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 108)));
    // 0x11b52c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x11b52cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b530: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11b530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11b534: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x11b534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11b538: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x11b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x11b53c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x11b53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x11b540: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b544: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x11b544u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x11b548: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x11b548u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11b54c: 0x246a0001  addiu       $t2, $v1, 0x1
    ctx->pc = 0x11b54cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11b550: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x11b550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11b554: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x11b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x11b558: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11b558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b55c: 0x12a182b  sltu        $v1, $t1, $t2
    ctx->pc = 0x11b55cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x11b560: 0x91140  sll         $v0, $t1, 5
    ctx->pc = 0x11b560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x11b564: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11b564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11b568: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x11B568u;
    {
        const bool branch_taken_0x11b568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B568u;
            // 0x11b56c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b568) {
            ctx->pc = 0x11B5F4u;
            goto label_11b5f4;
        }
    }
    ctx->pc = 0x11B570u;
label_11b570:
    // 0x11b570: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x11b570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x11b574: 0x1821818  mult        $v1, $t4, $v0
    ctx->pc = 0x11b574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11b578: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x11b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11b57c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11b580: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x11b580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x11b584: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x11b584u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b588: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x11B588u;
    {
        const bool branch_taken_0x11b588 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B588u;
            // 0x11b58c: 0xf1400  sll         $v0, $t7, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b588) {
            ctx->pc = 0x11B5E4u;
            goto label_11b5e4;
        }
    }
    ctx->pc = 0x11B590u;
    // 0x11b590: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x11b590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11b594: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x11b594u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x11b598: 0x454021  addu        $t0, $v0, $a1
    ctx->pc = 0x11b598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11b59c: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x11b59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_11b5a0:
    // 0x11b5a0: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x11b5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x11b5a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B5A4u;
    {
        const bool branch_taken_0x11b5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B5A4u;
            // 0x11b5a8: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5a4) {
            ctx->pc = 0x11B5C0u;
            goto label_11b5c0;
        }
    }
    ctx->pc = 0x11B5ACu;
    // 0x11b5ac: 0x69100007  ldl         $s0, 0x7($t0)
    ctx->pc = 0x11b5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x11b5b0: 0x6d100000  ldr         $s0, 0x0($t0)
    ctx->pc = 0x11b5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x11b5b4: 0xb0f00007  sdl         $s0, 0x7($a3)
    ctx->pc = 0x11b5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11b5b8: 0xb4f00000  sdr         $s0, 0x0($a3)
    ctx->pc = 0x11b5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11b5bc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11b5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_11b5c0:
    // 0x11b5c0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x11b5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x11b5c4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x11b5c4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x11b5c8: 0x31d00  sll         $v1, $v1, 20
    ctx->pc = 0x11b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x11b5cc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11b5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11b5d0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x11b5d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x11b5d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11b5d8: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x11b5d8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x11b5dc: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11B5DCu;
    {
        const bool branch_taken_0x11b5dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B5DCu;
            // 0x11b5e0: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5dc) {
            ctx->pc = 0x11B5A0u;
            runtime->cooperativeGuestYield();
            goto label_11b5a0;
        }
    }
    ctx->pc = 0x11B5E4u;
label_11b5e4:
    // 0x11b5e4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x11b5e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11b5e8: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x11b5e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x11b5ec: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x11B5ECu;
    {
        const bool branch_taken_0x11b5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B5ECu;
            // 0x11b5f0: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5ec) {
            ctx->pc = 0x11B570u;
            runtime->cooperativeGuestYield();
            goto label_11b570;
        }
    }
    ctx->pc = 0x11B5F4u;
label_11b5f4:
    // 0x11b5f4: 0x8da20020  lw          $v0, 0x20($t5)
    ctx->pc = 0x11b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 32)));
label_11b5f8:
    // 0x11b5f8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x11b5f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x11b5fc: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x11b5fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x11b600: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x11b600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11b604: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x11B604u;
    {
        const bool branch_taken_0x11b604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B604u;
            // 0x11b608: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b604) {
            ctx->pc = 0x11B440u;
            runtime->cooperativeGuestYield();
            goto label_11b440;
        }
    }
    ctx->pc = 0x11B60Cu;
label_11b60c:
    // 0x11b60c: 0x8da20014  lw          $v0, 0x14($t5)
    ctx->pc = 0x11b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x11b610: 0x25a30014  addiu       $v1, $t5, 0x14
    ctx->pc = 0x11b610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 20));
    // 0x11b614: 0x104300cf  beq         $v0, $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x11B614u;
    {
        const bool branch_taken_0x11b614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11B618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B614u;
            // 0x11b618: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b614) {
            ctx->pc = 0x11B954u;
            goto label_11b954;
        }
    }
    ctx->pc = 0x11B61Cu;
    // 0x11b61c: 0x24530008  addiu       $s3, $v0, 0x8
    ctx->pc = 0x11b61cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_11b620:
    // 0x11b620: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b624: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x11b624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x11b628: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x11b628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x11b62c: 0x505300c6  beql        $v0, $s3, . + 4 + (0xC6 << 2)
    ctx->pc = 0x11B62Cu;
    {
        const bool branch_taken_0x11b62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x11b62c) {
            ctx->pc = 0x11B630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B62Cu;
            // 0x11b630: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B948u;
            goto label_11b948;
        }
    }
    ctx->pc = 0x11B634u;
    // 0x11b634: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x11b634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b638:
    // 0x11b638: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x11b638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b63c: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x11b63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11b640: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11b640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11b644: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x11b644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11b648: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x11b648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x11b64c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11b64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11b650: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x11b650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x11b654: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x11b654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11b658: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11b658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11b65c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11b65cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11b660: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x11b660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x11b664: 0x0  nop
    ctx->pc = 0x11b664u;
    // NOP
    // 0x11b668: 0x120000b3  beqz        $s0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x11B668u;
    {
        const bool branch_taken_0x11b668 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B668u;
            // 0x11b66c: 0x8c46005c  lw          $a2, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b668) {
            ctx->pc = 0x11B938u;
            goto label_11b938;
        }
    }
    ctx->pc = 0x11B670u;
    // 0x11b670: 0x8da20020  lw          $v0, 0x20($t5)
    ctx->pc = 0x11b670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x11b674: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x11B674u;
    {
        const bool branch_taken_0x11b674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B674u;
            // 0x11b678: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b674) {
            ctx->pc = 0x11B938u;
            goto label_11b938;
        }
    }
    ctx->pc = 0x11B67Cu;
    // 0x11b67c: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x11b67cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b680: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x11b680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b684: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x11b684u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b688:
    // 0x11b688: 0x3c0f002a  lui         $t7, 0x2A
    ctx->pc = 0x11b688u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)42 << 16));
    // 0x11b68c: 0x25aa0070  addiu       $t2, $t5, 0x70
    ctx->pc = 0x11b68cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 112));
    // 0x11b690: 0x8de2c7dc  lw          $v0, -0x3824($t7)
    ctx->pc = 0x11b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294952924)));
    // 0x11b694: 0x25a9012c  addiu       $t1, $t5, 0x12C
    ctx->pc = 0x11b694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 300));
    // 0x11b698: 0x1341821  addu        $v1, $t1, $s4
    ctx->pc = 0x11b698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x11b69c: 0x8e4c0000  lw          $t4, 0x0($s2)
    ctx->pc = 0x11b69cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11b6a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11b6a4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x11b6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b6a8: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x11b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x11b6ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11b6acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b6b4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x11b6b4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6b8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x11b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x11b6bc: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B6BCu;
    {
        const bool branch_taken_0x11b6bc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11B6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6BCu;
            // 0x11b6c0: 0x8c4b0000  lw          $t3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6bc) {
            ctx->pc = 0x11B6D4u;
            goto label_11b6d4;
        }
    }
    ctx->pc = 0x11B6C4u;
    // 0x11b6c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11b6c8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x11b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x11b6cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11B6CCu;
    {
        const bool branch_taken_0x11b6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6CCu;
            // 0x11b6d0: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6cc) {
            ctx->pc = 0x11B6D8u;
            goto label_11b6d8;
        }
    }
    ctx->pc = 0x11B6D4u;
label_11b6d4:
    // 0x11b6d4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x11b6d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b6d8:
    // 0x11b6d8: 0x10c00025  beqz        $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x11B6D8u;
    {
        const bool branch_taken_0x11b6d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6D8u;
            // 0x11b6dc: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6d8) {
            ctx->pc = 0x11B770u;
            goto label_11b770;
        }
    }
    ctx->pc = 0x11B6E0u;
label_11b6e0:
    // 0x11b6e0: 0x3221818  mult        $v1, $t9, $v0
    ctx->pc = 0x11b6e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11b6e4: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x11b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x11b6e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11b6ec: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x11b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x11b6f0: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x11b6f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b6f4: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x11B6F4u;
    {
        const bool branch_taken_0x11b6f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6F4u;
            // 0x11b6f8: 0x74100  sll         $t0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6f4) {
            ctx->pc = 0x11B760u;
            goto label_11b760;
        }
    }
    ctx->pc = 0x11B6FCu;
    // 0x11b6fc: 0x0  nop
    ctx->pc = 0x11b6fcu;
    // NOP
label_11b700:
    // 0x11b700: 0x51023  negu        $v0, $a1
    ctx->pc = 0x11b700u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x11b704: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x11b704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x11b708: 0xa31026  xor         $v0, $a1, $v1
    ctx->pc = 0x11b708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x11b70c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11b710: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B710u;
    {
        const bool branch_taken_0x11b710 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x11B714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B710u;
            // 0x11b714: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b710) {
            ctx->pc = 0x11B728u;
            goto label_11b728;
        }
    }
    ctx->pc = 0x11B718u;
    // 0x11b718: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x11b718u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x11b71c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x11b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x11b720: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11B720u;
    {
        const bool branch_taken_0x11b720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B720u;
            // 0x11b724: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b720) {
            ctx->pc = 0x11B72Cu;
            goto label_11b72c;
        }
    }
    ctx->pc = 0x11B728u;
label_11b728:
    // 0x11b728: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x11b728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_11b72c:
    // 0x11b72c: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x11b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x11b730: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x11b730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11b734: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x11b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x11b738: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x11b738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x11b73c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b740: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x11b740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x11b744: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x11b744u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b748: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x11b748u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x11b74c: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x11b74cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11b750: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x11b750u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x11b754: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11b754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11b758: 0x14a0ffe9  bnez        $a1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x11B758u;
    {
        const bool branch_taken_0x11b758 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B758u;
            // 0x11b75c: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b758) {
            ctx->pc = 0x11B700u;
            runtime->cooperativeGuestYield();
            goto label_11b700;
        }
    }
    ctx->pc = 0x11B760u;
label_11b760:
    // 0x11b760: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11b760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x11b764: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x11b764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11b768: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x11B768u;
    {
        const bool branch_taken_0x11b768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B768u;
            // 0x11b76c: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b768) {
            ctx->pc = 0x11B6E0u;
            runtime->cooperativeGuestYield();
            goto label_11b6e0;
        }
    }
    ctx->pc = 0x11B770u;
label_11b770:
    // 0x11b770: 0x51c0006b  beql        $t6, $zero, . + 4 + (0x6B << 2)
    ctx->pc = 0x11B770u;
    {
        const bool branch_taken_0x11b770 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b770) {
            ctx->pc = 0x11B774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B770u;
            // 0x11b774: 0x8da20020  lw          $v0, 0x20($t5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B920u;
            goto label_11b920;
        }
    }
    ctx->pc = 0x11B778u;
    // 0x11b778: 0x8de2c7dc  lw          $v0, -0x3824($t7)
    ctx->pc = 0x11b778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294952924)));
    // 0x11b77c: 0x1342021  addu        $a0, $t1, $s4
    ctx->pc = 0x11b77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x11b780: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11b780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11b784: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x11b784u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11b788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11b78c: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x11b78cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11b790: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x11b790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x11b794: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x11b794u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x11b798: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11b798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b79c: 0x24760001  addiu       $s6, $v1, 0x1
    ctx->pc = 0x11b79cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11b7a0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x11b7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11b7a4: 0xc2180  sll         $a0, $t4, 6
    ctx->pc = 0x11b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
    // 0x11b7a8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x11b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x11b7ac: 0xc2940  sll         $a1, $t4, 5
    ctx->pc = 0x11b7acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x11b7b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b7b4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x11b7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x11b7b8: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x11b7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x11b7bc: 0x196102b  sltu        $v0, $t4, $s6
    ctx->pc = 0x11b7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x11b7c0: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x11B7C0u;
    {
        const bool branch_taken_0x11b7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B7C0u;
            // 0x11b7c4: 0x65f021  addu        $fp, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7c0) {
            ctx->pc = 0x11B91Cu;
            goto label_11b91c;
        }
    }
    ctx->pc = 0x11B7C8u;
label_11b7c8:
    // 0x11b7c8: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x11b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x11b7cc: 0x3221818  mult        $v1, $t9, $v0
    ctx->pc = 0x11b7ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11b7d0: 0x6c1021  addu        $v0, $v1, $t4
    ctx->pc = 0x11b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x11b7d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11b7d8: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x11b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x11b7dc: 0x844f0000  lh          $t7, 0x0($v0)
    ctx->pc = 0x11b7dcu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b7e0: 0x11e0004a  beqz        $t7, . + 4 + (0x4A << 2)
    ctx->pc = 0x11B7E0u;
    {
        const bool branch_taken_0x11b7e0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B7E0u;
            // 0x11b7e4: 0x151400  sll         $v0, $s5, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7e0) {
            ctx->pc = 0x11B90Cu;
            goto label_11b90c;
        }
    }
    ctx->pc = 0x11B7E8u;
    // 0x11b7e8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b7ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x11b7ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x11b7f0: 0x2418000f  addiu       $t8, $zero, 0xF
    ctx->pc = 0x11b7f0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11b7f4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x11b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x11b7f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x11b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11b7fc: 0x7e5821  addu        $t3, $v1, $fp
    ctx->pc = 0x11b7fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x11b800: 0x447021  addu        $t6, $v0, $a0
    ctx->pc = 0x11b800u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11b804: 0x0  nop
    ctx->pc = 0x11b804u;
    // NOP
label_11b808:
    // 0x11b808: 0x1f81024  and         $v0, $t7, $t8
    ctx->pc = 0x11b808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & GPR_U64(ctx, 24));
    // 0x11b80c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x11B80Cu;
    {
        const bool branch_taken_0x11b80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B80Cu;
            // 0x11b810: 0x3302ffff  andi        $v0, $t8, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b80c) {
            ctx->pc = 0x11B8E8u;
            goto label_11b8e8;
        }
    }
    ctx->pc = 0x11B814u;
    // 0x11b814: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x11b814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11b818: 0x8dc30004  lw          $v1, 0x4($t6)
    ctx->pc = 0x11b818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x11b81c: 0x8dc40008  lw          $a0, 0x8($t6)
    ctx->pc = 0x11b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x11b820: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x11b820u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x11b824: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x11b824u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x11b828: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x11b828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11b82c: 0x42383  sra         $a0, $a0, 14
    ctx->pc = 0x11b82cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 14));
    // 0x11b830: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x11b830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11b834: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x11b834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11b838: 0x95660000  lhu         $a2, 0x0($t3)
    ctx->pc = 0x11b838u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x11b83c: 0x95680002  lhu         $t0, 0x2($t3)
    ctx->pc = 0x11b83cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x11b840: 0x95670004  lhu         $a3, 0x4($t3)
    ctx->pc = 0x11b840u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x11b844: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x11b844u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x11b848: 0x31b43  sra         $v1, $v1, 13
    ctx->pc = 0x11b848u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 13));
    // 0x11b84c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x11b84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11b850: 0x42343  sra         $a0, $a0, 13
    ctx->pc = 0x11b850u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 13));
    // 0x11b854: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x11b854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x11b858: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x11b858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x11b85c: 0x82c00  sll         $a1, $t0, 16
    ctx->pc = 0x11b85cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x11b860: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x11b860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x11b864: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x11b864u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x11b868: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x11b868u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x11b86c: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x11b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x11b870: 0x841018  mult        $v0, $a0, $a0
    ctx->pc = 0x11b870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11b874: 0xa54818  mult        $t1, $a1, $a1
    ctx->pc = 0x11b874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x11b878: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x11b878u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x11b87c: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x11b87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x11b880: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11b880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11b884: 0x635018  mult        $t2, $v1, $v1
    ctx->pc = 0x11b884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x11b888: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x11b888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x11b88c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11b88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11b890: 0xa5660000  sh          $a2, 0x0($t3)
    ctx->pc = 0x11b890u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x11b894: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x11b894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x11b898: 0xa5680002  sh          $t0, 0x2($t3)
    ctx->pc = 0x11b898u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x11b89c: 0xa5670004  sh          $a3, 0x4($t3)
    ctx->pc = 0x11b89cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x11b8a0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x11b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x11b8a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b8a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11b8a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11b8ac: 0x46000004  c1          0x4
    ctx->pc = 0x11b8acu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x11b8b0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x11b8b0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x11b8b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11b8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x11b8b8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11b8b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11b8bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x11b8bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11b8c0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x11b8c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11b8c4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x11b8c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11b8c8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x11b8c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11b8cc: 0x42383  sra         $a0, $a0, 14
    ctx->pc = 0x11b8ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 14));
    // 0x11b8d0: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x11b8d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x11b8d4: 0xa5640000  sh          $a0, 0x0($t3)
    ctx->pc = 0x11b8d4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x11b8d8: 0x52b83  sra         $a1, $a1, 14
    ctx->pc = 0x11b8d8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 14));
    // 0x11b8dc: 0xa5630004  sh          $v1, 0x4($t3)
    ctx->pc = 0x11b8dcu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x11b8e0: 0xa5650002  sh          $a1, 0x2($t3)
    ctx->pc = 0x11b8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x11b8e4: 0x3302ffff  andi        $v0, $t8, 0xFFFF
    ctx->pc = 0x11b8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
label_11b8e8:
    // 0x11b8e8: 0x181d00  sll         $v1, $t8, 20
    ctx->pc = 0x11b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 24), 20));
    // 0x11b8ec: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x11b8ecu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x11b8f0: 0x3c403  sra         $t8, $v1, 16
    ctx->pc = 0x11b8f0u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 3), 16));
    // 0x11b8f4: 0x1e21024  and         $v0, $t7, $v0
    ctx->pc = 0x11b8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & GPR_U64(ctx, 2));
    // 0x11b8f8: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x11b8f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x11b8fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11b900: 0x27c03  sra         $t7, $v0, 16
    ctx->pc = 0x11b900u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 2), 16));
    // 0x11b904: 0x15e0ffc0  bnez        $t7, . + 4 + (-0x40 << 2)
    ctx->pc = 0x11B904u;
    {
        const bool branch_taken_0x11b904 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B904u;
            // 0x11b908: 0x256b0008  addiu       $t3, $t3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b904) {
            ctx->pc = 0x11B808u;
            runtime->cooperativeGuestYield();
            goto label_11b808;
        }
    }
    ctx->pc = 0x11B90Cu;
label_11b90c:
    // 0x11b90c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x11b90cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x11b910: 0x196102b  sltu        $v0, $t4, $s6
    ctx->pc = 0x11b910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x11b914: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x11B914u;
    {
        const bool branch_taken_0x11b914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B914u;
            // 0x11b918: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b914) {
            ctx->pc = 0x11B7C8u;
            runtime->cooperativeGuestYield();
            goto label_11b7c8;
        }
    }
    ctx->pc = 0x11B91Cu;
label_11b91c:
    // 0x11b91c: 0x8da20020  lw          $v0, 0x20($t5)
    ctx->pc = 0x11b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 32)));
label_11b920:
    // 0x11b920: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x11b920u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x11b924: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x11b924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x11b928: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x11b928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x11b92c: 0x322102b  sltu        $v0, $t9, $v0
    ctx->pc = 0x11b92cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11b930: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x11B930u;
    {
        const bool branch_taken_0x11b930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B930u;
            // 0x11b934: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b930) {
            ctx->pc = 0x11B688u;
            runtime->cooperativeGuestYield();
            goto label_11b688;
        }
    }
    ctx->pc = 0x11B938u;
label_11b938:
    // 0x11b938: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x11b938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x11b93c: 0x5453ff3e  bnel        $v0, $s3, . + 4 + (-0xC2 << 2)
    ctx->pc = 0x11B93Cu;
    {
        const bool branch_taken_0x11b93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x11b93c) {
            ctx->pc = 0x11B940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B93Cu;
            // 0x11b940: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B638u;
            runtime->cooperativeGuestYield();
            goto label_11b638;
        }
    }
    ctx->pc = 0x11B944u;
    // 0x11b944: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x11b944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_11b948:
    // 0x11b948: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11b948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11b94c: 0x1443ff34  bne         $v0, $v1, . + 4 + (-0xCC << 2)
    ctx->pc = 0x11B94Cu;
    {
        const bool branch_taken_0x11b94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11B950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B94Cu;
            // 0x11b950: 0x24530008  addiu       $s3, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b94c) {
            ctx->pc = 0x11B620u;
            runtime->cooperativeGuestYield();
            goto label_11b620;
        }
    }
    ctx->pc = 0x11B954u;
label_11b954:
    // 0x11b954: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x11b954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_11b958:
    // 0x11b958: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x11b958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11b95c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x11b95cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11b960: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x11b960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11b964: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x11b964u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11b968: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x11b968u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11b96c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x11b96cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11b970: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x11b970u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11b974: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x11b974u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b978: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11b978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b97c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B97Cu;
            // 0x11b980: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AF20u: goto label_11af20;
            case 0x11AF88u: goto label_11af88;
            case 0x11AFD8u: goto label_11afd8;
            case 0x11B018u: goto label_11b018;
            case 0x11B030u: goto label_11b030;
            case 0x11B050u: goto label_11b050;
            case 0x11B0D0u: goto label_11b0d0;
            case 0x11B0D4u: goto label_11b0d4;
            case 0x11B1DCu: goto label_11b1dc;
            case 0x11B278u: goto label_11b278;
            case 0x11B288u: goto label_11b288;
            case 0x11B2E0u: goto label_11b2e0;
            case 0x11B2F0u: goto label_11b2f0;
            case 0x11B2F4u: goto label_11b2f4;
            case 0x11B304u: goto label_11b304;
            case 0x11B31Cu: goto label_11b31c;
            case 0x11B338u: goto label_11b338;
            case 0x11B350u: goto label_11b350;
            case 0x11B368u: goto label_11b368;
            case 0x11B38Cu: goto label_11b38c;
            case 0x11B3A0u: goto label_11b3a0;
            case 0x11B3A4u: goto label_11b3a4;
            case 0x11B424u: goto label_11b424;
            case 0x11B440u: goto label_11b440;
            case 0x11B494u: goto label_11b494;
            case 0x11B498u: goto label_11b498;
            case 0x11B4A0u: goto label_11b4a0;
            case 0x11B4C0u: goto label_11b4c0;
            case 0x11B4E8u: goto label_11b4e8;
            case 0x11B4ECu: goto label_11b4ec;
            case 0x11B508u: goto label_11b508;
            case 0x11B518u: goto label_11b518;
            case 0x11B570u: goto label_11b570;
            case 0x11B5A0u: goto label_11b5a0;
            case 0x11B5C0u: goto label_11b5c0;
            case 0x11B5E4u: goto label_11b5e4;
            case 0x11B5F4u: goto label_11b5f4;
            case 0x11B5F8u: goto label_11b5f8;
            case 0x11B60Cu: goto label_11b60c;
            case 0x11B620u: goto label_11b620;
            case 0x11B638u: goto label_11b638;
            case 0x11B688u: goto label_11b688;
            case 0x11B6D4u: goto label_11b6d4;
            case 0x11B6D8u: goto label_11b6d8;
            case 0x11B6E0u: goto label_11b6e0;
            case 0x11B700u: goto label_11b700;
            case 0x11B728u: goto label_11b728;
            case 0x11B72Cu: goto label_11b72c;
            case 0x11B760u: goto label_11b760;
            case 0x11B770u: goto label_11b770;
            case 0x11B7C8u: goto label_11b7c8;
            case 0x11B808u: goto label_11b808;
            case 0x11B8E8u: goto label_11b8e8;
            case 0x11B90Cu: goto label_11b90c;
            case 0x11B91Cu: goto label_11b91c;
            case 0x11B920u: goto label_11b920;
            case 0x11B938u: goto label_11b938;
            case 0x11B948u: goto label_11b948;
            case 0x11B954u: goto label_11b954;
            case 0x11B958u: goto label_11b958;
            case 0x11B9C0u: goto label_11b9c0;
            case 0x11B9D8u: goto label_11b9d8;
            case 0x11B9FCu: goto label_11b9fc;
            case 0x11BA10u: goto label_11ba10;
            case 0x11BA30u: goto label_11ba30;
            case 0x11BA50u: goto label_11ba50;
            case 0x11BA6Cu: goto label_11ba6c;
            case 0x11BA74u: goto label_11ba74;
            case 0x11BA98u: goto label_11ba98;
            case 0x11BAB8u: goto label_11bab8;
            case 0x11BB20u: goto label_11bb20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11B984u;
    // 0x11b984: 0x0  nop
    ctx->pc = 0x11b984u;
    // NOP
    // 0x11b988: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11b988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11b98c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11b98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11b990: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11b990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11b994: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11b994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11b998: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11b998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x11b99c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b9a0: 0xc041d8a  jal         func_107628
    ctx->pc = 0x11B9A0u;
    SET_GPR_U32(ctx, 31, 0x11B9A8u);
    ctx->pc = 0x11B9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9A0u;
            // 0x11b9a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107628u;
    if (runtime->hasFunction(0x107628u)) {
        auto targetFn = runtime->lookupFunction(0x107628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9A8u; }
        if (ctx->pc != 0x11B9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107628_0x107628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9A8u; }
        if (ctx->pc != 0x11B9A8u) { return; }
    }
    ctx->pc = 0x11B9A8u;
    // 0x11b9a8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x11b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x11b9ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9b0: 0x8e280078  lw          $t0, 0x78($s1)
    ctx->pc = 0x11b9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x11b9b4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11B9B4u;
    {
        const bool branch_taken_0x11b9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9B4u;
            // 0x11b9b8: 0x8e230064  lw          $v1, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9b4) {
            ctx->pc = 0x11BA10u;
            goto label_11ba10;
        }
    }
    ctx->pc = 0x11B9BCu;
    // 0x11b9bc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11b9bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11b9c0:
    // 0x11b9c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11b9c4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x11b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x11b9c8: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x11b9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b9cc: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x11B9CCu;
    {
        const bool branch_taken_0x11b9cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9CCu;
            // 0x11b9d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9cc) {
            ctx->pc = 0x11B9FCu;
            goto label_11b9fc;
        }
    }
    ctx->pc = 0x11B9D4u;
    // 0x11b9d4: 0x0  nop
    ctx->pc = 0x11b9d4u;
    // NOP
label_11b9d8:
    // 0x11b9d8: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x11b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x11b9dc: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x11b9dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11b9e0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x11b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11b9e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11b9e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11b9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11b9ec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x11b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x11b9f0: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x11b9f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11b9f4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11B9F4u;
    {
        const bool branch_taken_0x11b9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9F4u;
            // 0x11b9f8: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9f4) {
            ctx->pc = 0x11B9D8u;
            runtime->cooperativeGuestYield();
            goto label_11b9d8;
        }
    }
    ctx->pc = 0x11B9FCu;
label_11b9fc:
    // 0x11b9fc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x11b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x11ba00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11ba00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11ba04: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x11ba04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11ba08: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11BA08u;
    {
        const bool branch_taken_0x11ba08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA08u;
            // 0x11ba0c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba08) {
            ctx->pc = 0x11B9C0u;
            runtime->cooperativeGuestYield();
            goto label_11b9c0;
        }
    }
    ctx->pc = 0x11BA10u;
label_11ba10:
    // 0x11ba10: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x11ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x11ba14: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x11ba14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x11ba18: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x11ba18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x11ba1c: 0x8c52002c  lw          $s2, 0x2C($v0)
    ctx->pc = 0x11ba1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x11ba20: 0x12130014  beq         $s0, $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x11BA20u;
    {
        const bool branch_taken_0x11ba20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x11BA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA20u;
            // 0x11ba24: 0xae200058  sw          $zero, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba20) {
            ctx->pc = 0x11BA74u;
            goto label_11ba74;
        }
    }
    ctx->pc = 0x11BA28u;
    // 0x11ba28: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x11ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11ba2c: 0x0  nop
    ctx->pc = 0x11ba2cu;
    // NOP
label_11ba30:
    // 0x11ba30: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x11ba30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x11ba34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BA34u;
    {
        const bool branch_taken_0x11ba34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA34u;
            // 0x11ba38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba34) {
            ctx->pc = 0x11BA50u;
            goto label_11ba50;
        }
    }
    ctx->pc = 0x11BA3Cu;
    // 0x11ba3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ba3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba40: 0xc041ee4  jal         func_107B90
    ctx->pc = 0x11BA40u;
    SET_GPR_U32(ctx, 31, 0x11BA48u);
    ctx->pc = 0x11BA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA40u;
            // 0x11ba44: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107B90u;
    if (runtime->hasFunction(0x107B90u)) {
        auto targetFn = runtime->lookupFunction(0x107B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA48u; }
        if (ctx->pc != 0x11BA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107B90_0x107b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA48u; }
        if (ctx->pc != 0x11BA48u) { return; }
    }
    ctx->pc = 0x11BA48u;
    // 0x11ba48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11BA48u;
    {
        const bool branch_taken_0x11ba48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ba48) {
            ctx->pc = 0x11BA6Cu;
            goto label_11ba6c;
        }
    }
    ctx->pc = 0x11BA50u;
label_11ba50:
    // 0x11ba50: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x11ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x11ba54: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x11ba54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11ba58: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x11ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x11ba5c: 0x40f809  jalr        $v0
    ctx->pc = 0x11BA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BA64u);
        ctx->pc = 0x11BA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA5Cu;
            // 0x11ba60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11BA64u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AF20u: goto label_11af20;
            case 0x11AF88u: goto label_11af88;
            case 0x11AFD8u: goto label_11afd8;
            case 0x11B018u: goto label_11b018;
            case 0x11B030u: goto label_11b030;
            case 0x11B050u: goto label_11b050;
            case 0x11B0D0u: goto label_11b0d0;
            case 0x11B0D4u: goto label_11b0d4;
            case 0x11B1DCu: goto label_11b1dc;
            case 0x11B278u: goto label_11b278;
            case 0x11B288u: goto label_11b288;
            case 0x11B2E0u: goto label_11b2e0;
            case 0x11B2F0u: goto label_11b2f0;
            case 0x11B2F4u: goto label_11b2f4;
            case 0x11B304u: goto label_11b304;
            case 0x11B31Cu: goto label_11b31c;
            case 0x11B338u: goto label_11b338;
            case 0x11B350u: goto label_11b350;
            case 0x11B368u: goto label_11b368;
            case 0x11B38Cu: goto label_11b38c;
            case 0x11B3A0u: goto label_11b3a0;
            case 0x11B3A4u: goto label_11b3a4;
            case 0x11B424u: goto label_11b424;
            case 0x11B440u: goto label_11b440;
            case 0x11B494u: goto label_11b494;
            case 0x11B498u: goto label_11b498;
            case 0x11B4A0u: goto label_11b4a0;
            case 0x11B4C0u: goto label_11b4c0;
            case 0x11B4E8u: goto label_11b4e8;
            case 0x11B4ECu: goto label_11b4ec;
            case 0x11B508u: goto label_11b508;
            case 0x11B518u: goto label_11b518;
            case 0x11B570u: goto label_11b570;
            case 0x11B5A0u: goto label_11b5a0;
            case 0x11B5C0u: goto label_11b5c0;
            case 0x11B5E4u: goto label_11b5e4;
            case 0x11B5F4u: goto label_11b5f4;
            case 0x11B5F8u: goto label_11b5f8;
            case 0x11B60Cu: goto label_11b60c;
            case 0x11B620u: goto label_11b620;
            case 0x11B638u: goto label_11b638;
            case 0x11B688u: goto label_11b688;
            case 0x11B6D4u: goto label_11b6d4;
            case 0x11B6D8u: goto label_11b6d8;
            case 0x11B6E0u: goto label_11b6e0;
            case 0x11B700u: goto label_11b700;
            case 0x11B728u: goto label_11b728;
            case 0x11B72Cu: goto label_11b72c;
            case 0x11B760u: goto label_11b760;
            case 0x11B770u: goto label_11b770;
            case 0x11B7C8u: goto label_11b7c8;
            case 0x11B808u: goto label_11b808;
            case 0x11B8E8u: goto label_11b8e8;
            case 0x11B90Cu: goto label_11b90c;
            case 0x11B91Cu: goto label_11b91c;
            case 0x11B920u: goto label_11b920;
            case 0x11B938u: goto label_11b938;
            case 0x11B948u: goto label_11b948;
            case 0x11B954u: goto label_11b954;
            case 0x11B958u: goto label_11b958;
            case 0x11B9C0u: goto label_11b9c0;
            case 0x11B9D8u: goto label_11b9d8;
            case 0x11B9FCu: goto label_11b9fc;
            case 0x11BA10u: goto label_11ba10;
            case 0x11BA30u: goto label_11ba30;
            case 0x11BA50u: goto label_11ba50;
            case 0x11BA6Cu: goto label_11ba6c;
            case 0x11BA74u: goto label_11ba74;
            case 0x11BA98u: goto label_11ba98;
            case 0x11BAB8u: goto label_11bab8;
            case 0x11BB20u: goto label_11bb20;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11BA64u; }
            if (ctx->pc != 0x11BA64u) { return; }
        }
        }
    }
    ctx->pc = 0x11BA64u;
    // 0x11ba64: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x11ba64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11ba68: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x11ba68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_11ba6c:
    // 0x11ba6c: 0x5613fff0  bnel        $s0, $s3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11BA6Cu;
    {
        const bool branch_taken_0x11ba6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x11ba6c) {
            ctx->pc = 0x11BA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA6Cu;
            // 0x11ba70: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BA30u;
            runtime->cooperativeGuestYield();
            goto label_11ba30;
        }
    }
    ctx->pc = 0x11BA74u;
label_11ba74:
    // 0x11ba74: 0x52400008  beql        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BA74u;
    {
        const bool branch_taken_0x11ba74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ba74) {
            ctx->pc = 0x11BA78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA74u;
            // 0x11ba78: 0x8e230124  lw          $v1, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BA98u;
            goto label_11ba98;
        }
    }
    ctx->pc = 0x11BA7Cu;
    // 0x11ba7c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x11ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x11ba80: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x11ba80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11ba84: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x11ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x11ba88: 0x40f809  jalr        $v0
    ctx->pc = 0x11BA88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BA90u);
        ctx->pc = 0x11BA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA88u;
            // 0x11ba8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11BA90u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AF20u: goto label_11af20;
            case 0x11AF88u: goto label_11af88;
            case 0x11AFD8u: goto label_11afd8;
            case 0x11B018u: goto label_11b018;
            case 0x11B030u: goto label_11b030;
            case 0x11B050u: goto label_11b050;
            case 0x11B0D0u: goto label_11b0d0;
            case 0x11B0D4u: goto label_11b0d4;
            case 0x11B1DCu: goto label_11b1dc;
            case 0x11B278u: goto label_11b278;
            case 0x11B288u: goto label_11b288;
            case 0x11B2E0u: goto label_11b2e0;
            case 0x11B2F0u: goto label_11b2f0;
            case 0x11B2F4u: goto label_11b2f4;
            case 0x11B304u: goto label_11b304;
            case 0x11B31Cu: goto label_11b31c;
            case 0x11B338u: goto label_11b338;
            case 0x11B350u: goto label_11b350;
            case 0x11B368u: goto label_11b368;
            case 0x11B38Cu: goto label_11b38c;
            case 0x11B3A0u: goto label_11b3a0;
            case 0x11B3A4u: goto label_11b3a4;
            case 0x11B424u: goto label_11b424;
            case 0x11B440u: goto label_11b440;
            case 0x11B494u: goto label_11b494;
            case 0x11B498u: goto label_11b498;
            case 0x11B4A0u: goto label_11b4a0;
            case 0x11B4C0u: goto label_11b4c0;
            case 0x11B4E8u: goto label_11b4e8;
            case 0x11B4ECu: goto label_11b4ec;
            case 0x11B508u: goto label_11b508;
            case 0x11B518u: goto label_11b518;
            case 0x11B570u: goto label_11b570;
            case 0x11B5A0u: goto label_11b5a0;
            case 0x11B5C0u: goto label_11b5c0;
            case 0x11B5E4u: goto label_11b5e4;
            case 0x11B5F4u: goto label_11b5f4;
            case 0x11B5F8u: goto label_11b5f8;
            case 0x11B60Cu: goto label_11b60c;
            case 0x11B620u: goto label_11b620;
            case 0x11B638u: goto label_11b638;
            case 0x11B688u: goto label_11b688;
            case 0x11B6D4u: goto label_11b6d4;
            case 0x11B6D8u: goto label_11b6d8;
            case 0x11B6E0u: goto label_11b6e0;
            case 0x11B700u: goto label_11b700;
            case 0x11B728u: goto label_11b728;
            case 0x11B72Cu: goto label_11b72c;
            case 0x11B760u: goto label_11b760;
            case 0x11B770u: goto label_11b770;
            case 0x11B7C8u: goto label_11b7c8;
            case 0x11B808u: goto label_11b808;
            case 0x11B8E8u: goto label_11b8e8;
            case 0x11B90Cu: goto label_11b90c;
            case 0x11B91Cu: goto label_11b91c;
            case 0x11B920u: goto label_11b920;
            case 0x11B938u: goto label_11b938;
            case 0x11B948u: goto label_11b948;
            case 0x11B954u: goto label_11b954;
            case 0x11B958u: goto label_11b958;
            case 0x11B9C0u: goto label_11b9c0;
            case 0x11B9D8u: goto label_11b9d8;
            case 0x11B9FCu: goto label_11b9fc;
            case 0x11BA10u: goto label_11ba10;
            case 0x11BA30u: goto label_11ba30;
            case 0x11BA50u: goto label_11ba50;
            case 0x11BA6Cu: goto label_11ba6c;
            case 0x11BA74u: goto label_11ba74;
            case 0x11BA98u: goto label_11ba98;
            case 0x11BAB8u: goto label_11bab8;
            case 0x11BB20u: goto label_11bb20;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11BA90u; }
            if (ctx->pc != 0x11BA90u) { return; }
        }
        }
    }
    ctx->pc = 0x11BA90u;
    // 0x11ba90: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x11BA90u;
    {
        const bool branch_taken_0x11ba90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA90u;
            // 0x11ba94: 0xae200124  sw          $zero, 0x124($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba90) {
            ctx->pc = 0x11BB20u;
            goto label_11bb20;
        }
    }
    ctx->pc = 0x11BA98u;
label_11ba98:
    // 0x11ba98: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x11ba98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11ba9c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x11BA9Cu;
    {
        const bool branch_taken_0x11ba9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA9Cu;
            // 0x11baa0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba9c) {
            ctx->pc = 0x11BB20u;
            goto label_11bb20;
        }
    }
    ctx->pc = 0x11BAA4u;
    // 0x11baa4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11baa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11baa8: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x11baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x11baac: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x11BAACu;
    {
        const bool branch_taken_0x11baac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BAACu;
            // 0x11bab0: 0xae220124  sw          $v0, 0x124($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11baac) {
            ctx->pc = 0x11BB20u;
            goto label_11bb20;
        }
    }
    ctx->pc = 0x11BAB4u;
    // 0x11bab4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x11bab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_11bab8:
    // 0x11bab8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11babc: 0x8ca2c7dc  lw          $v0, -0x3824($a1)
    ctx->pc = 0x11babcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952924)));
    // 0x11bac0: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x11bac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x11bac4: 0x8ca6c7dc  lw          $a2, -0x3824($a1)
    ctx->pc = 0x11bac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952924)));
    // 0x11bac8: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x11bac8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11bacc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11baccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11bad0: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x11bad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x11bad4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x11bad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11bad8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11badc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11badcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11bae0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11bae4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11bae8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x11bae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x11baec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11baf0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11baf4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x11baf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11baf8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11baf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11bafc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x11bafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11bb00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11bb04: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x11bb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11bb08: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x11BB08u;
    SET_GPR_U32(ctx, 31, 0x11BB10u);
    ctx->pc = 0x11BB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB08u;
            // 0x11bb0c: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB10u; }
        if (ctx->pc != 0x11BB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB10u; }
        if (ctx->pc != 0x11BB10u) { return; }
    }
    ctx->pc = 0x11BB10u;
    // 0x11bb10: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x11bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x11bb14: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x11bb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11bb18: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x11BB18u;
    {
        const bool branch_taken_0x11bb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB18u;
            // 0x11bb1c: 0x3c05002a  lui         $a1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb18) {
            ctx->pc = 0x11BAB8u;
            runtime->cooperativeGuestYield();
            goto label_11bab8;
        }
    }
    ctx->pc = 0x11BB20u;
label_11bb20:
    // 0x11bb20: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11bb20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11bb24: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11bb24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bb28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11bb28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bb2c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11bb2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bb30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11bb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bb34: 0x3e00008  jr          $ra
    ctx->pc = 0x11BB34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB34u;
            // 0x11bb38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AF20u: goto label_11af20;
            case 0x11AF88u: goto label_11af88;
            case 0x11AFD8u: goto label_11afd8;
            case 0x11B018u: goto label_11b018;
            case 0x11B030u: goto label_11b030;
            case 0x11B050u: goto label_11b050;
            case 0x11B0D0u: goto label_11b0d0;
            case 0x11B0D4u: goto label_11b0d4;
            case 0x11B1DCu: goto label_11b1dc;
            case 0x11B278u: goto label_11b278;
            case 0x11B288u: goto label_11b288;
            case 0x11B2E0u: goto label_11b2e0;
            case 0x11B2F0u: goto label_11b2f0;
            case 0x11B2F4u: goto label_11b2f4;
            case 0x11B304u: goto label_11b304;
            case 0x11B31Cu: goto label_11b31c;
            case 0x11B338u: goto label_11b338;
            case 0x11B350u: goto label_11b350;
            case 0x11B368u: goto label_11b368;
            case 0x11B38Cu: goto label_11b38c;
            case 0x11B3A0u: goto label_11b3a0;
            case 0x11B3A4u: goto label_11b3a4;
            case 0x11B424u: goto label_11b424;
            case 0x11B440u: goto label_11b440;
            case 0x11B494u: goto label_11b494;
            case 0x11B498u: goto label_11b498;
            case 0x11B4A0u: goto label_11b4a0;
            case 0x11B4C0u: goto label_11b4c0;
            case 0x11B4E8u: goto label_11b4e8;
            case 0x11B4ECu: goto label_11b4ec;
            case 0x11B508u: goto label_11b508;
            case 0x11B518u: goto label_11b518;
            case 0x11B570u: goto label_11b570;
            case 0x11B5A0u: goto label_11b5a0;
            case 0x11B5C0u: goto label_11b5c0;
            case 0x11B5E4u: goto label_11b5e4;
            case 0x11B5F4u: goto label_11b5f4;
            case 0x11B5F8u: goto label_11b5f8;
            case 0x11B60Cu: goto label_11b60c;
            case 0x11B620u: goto label_11b620;
            case 0x11B638u: goto label_11b638;
            case 0x11B688u: goto label_11b688;
            case 0x11B6D4u: goto label_11b6d4;
            case 0x11B6D8u: goto label_11b6d8;
            case 0x11B6E0u: goto label_11b6e0;
            case 0x11B700u: goto label_11b700;
            case 0x11B728u: goto label_11b728;
            case 0x11B72Cu: goto label_11b72c;
            case 0x11B760u: goto label_11b760;
            case 0x11B770u: goto label_11b770;
            case 0x11B7C8u: goto label_11b7c8;
            case 0x11B808u: goto label_11b808;
            case 0x11B8E8u: goto label_11b8e8;
            case 0x11B90Cu: goto label_11b90c;
            case 0x11B91Cu: goto label_11b91c;
            case 0x11B920u: goto label_11b920;
            case 0x11B938u: goto label_11b938;
            case 0x11B948u: goto label_11b948;
            case 0x11B954u: goto label_11b954;
            case 0x11B958u: goto label_11b958;
            case 0x11B9C0u: goto label_11b9c0;
            case 0x11B9D8u: goto label_11b9d8;
            case 0x11B9FCu: goto label_11b9fc;
            case 0x11BA10u: goto label_11ba10;
            case 0x11BA30u: goto label_11ba30;
            case 0x11BA50u: goto label_11ba50;
            case 0x11BA6Cu: goto label_11ba6c;
            case 0x11BA74u: goto label_11ba74;
            case 0x11BA98u: goto label_11ba98;
            case 0x11BAB8u: goto label_11bab8;
            case 0x11BB20u: goto label_11bb20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BB3Cu;
    // 0x11bb3c: 0x0  nop
    ctx->pc = 0x11bb3cu;
    // NOP
}
