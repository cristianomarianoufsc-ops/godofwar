#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002868C0
// Address: 0x2868c0 - 0x286a00
void sub_002868C0_0x2868c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002868C0_0x2868c0");
#endif

    ctx->pc = 0x2868c0u;

    // 0x2868c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2868c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2868c4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2868c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2868c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2868c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2868cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2868ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2868d0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2868d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2868d4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2868d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2868d8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2868d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2868dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2868dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2868e0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2868e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2868e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2868E4u;
    {
        const bool branch_taken_0x2868e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2868E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2868E4u;
            // 0x2868e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868e4) {
            ctx->pc = 0x286918u;
            goto label_286918;
        }
    }
    ctx->pc = 0x2868ECu;
    // 0x2868ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2868ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2868f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2868F0u;
    {
        const bool branch_taken_0x2868f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2868F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2868F0u;
            // 0x2868f4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868f0) {
            ctx->pc = 0x286924u;
            goto label_286924;
        }
    }
    ctx->pc = 0x2868F8u;
label_2868f8:
    // 0x2868f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2868f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2868fc: 0xc0a19fc  jal         func_2867F0
    ctx->pc = 0x2868FCu;
    SET_GPR_U32(ctx, 31, 0x286904u);
    ctx->pc = 0x286900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2868FCu;
            // 0x286900: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2867F0u;
    if (runtime->hasFunction(0x2867F0u)) {
        auto targetFn = runtime->lookupFunction(0x2867F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286904u; }
        if (ctx->pc != 0x286904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2867f0_0x286838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286904u; }
        if (ctx->pc != 0x286904u) { return; }
    }
    ctx->pc = 0x286904u;
    // 0x286904: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x286904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286908: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x286908u;
    {
        const bool branch_taken_0x286908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28690Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286908u;
            // 0x28690c: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286908) {
            ctx->pc = 0x2868F8u;
            runtime->cooperativeGuestYield();
            goto label_2868f8;
        }
    }
    ctx->pc = 0x286910u;
    // 0x286910: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x286910u;
    {
        const bool branch_taken_0x286910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286910u;
            // 0x286914: 0x148080  sll         $s0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286910) {
            ctx->pc = 0x286928u;
            goto label_286928;
        }
    }
    ctx->pc = 0x286918u;
label_286918:
    // 0x286918: 0xc0a19fc  jal         func_2867F0
    ctx->pc = 0x286918u;
    SET_GPR_U32(ctx, 31, 0x286920u);
    ctx->pc = 0x28691Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286918u;
            // 0x28691c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2867F0u;
    if (runtime->hasFunction(0x2867F0u)) {
        auto targetFn = runtime->lookupFunction(0x2867F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286920u; }
        if (ctx->pc != 0x286920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2867f0_0x286838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286920u; }
        if (ctx->pc != 0x286920u) { return; }
    }
    ctx->pc = 0x286920u;
    // 0x286920: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x286920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_286924:
    // 0x286924: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x286924u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_286928:
    // 0x286928: 0xae740010  sw          $s4, 0x10($s3)
    ctx->pc = 0x286928u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 20));
    // 0x28692c: 0xc0a2c9c  jal         func_28B270
    ctx->pc = 0x28692Cu;
    SET_GPR_U32(ctx, 31, 0x286934u);
    ctx->pc = 0x286930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28692Cu;
            // 0x286930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B270u;
    if (runtime->hasFunction(0x28B270u)) {
        auto targetFn = runtime->lookupFunction(0x28B270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286934u; }
        if (ctx->pc != 0x286934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B270_0x28b270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286934u; }
        if (ctx->pc != 0x286934u) { return; }
    }
    ctx->pc = 0x286934u;
    // 0x286934: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x286934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x286938: 0xc0a2c9c  jal         func_28B270
    ctx->pc = 0x286938u;
    SET_GPR_U32(ctx, 31, 0x286940u);
    ctx->pc = 0x28693Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286938u;
            // 0x28693c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B270u;
    if (runtime->hasFunction(0x28B270u)) {
        auto targetFn = runtime->lookupFunction(0x28B270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286940u; }
        if (ctx->pc != 0x286940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B270_0x28b270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286940u; }
        if (ctx->pc != 0x286940u) { return; }
    }
    ctx->pc = 0x286940u;
    // 0x286940: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x286940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x286944: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x286944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x286948: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x286948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x28694c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x28694cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x286950: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x286950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x286954: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x286954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x286958: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x286958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x28695c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28695Cu;
    {
        const bool branch_taken_0x28695c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x286960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28695Cu;
            // 0x286960: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28695c) {
            ctx->pc = 0x2869A8u;
            goto label_2869a8;
        }
    }
    ctx->pc = 0x286964u;
    // 0x286964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x286964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286968: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x286968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28696c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28696Cu;
    {
        const bool branch_taken_0x28696c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28696Cu;
            // 0x286970: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28696c) {
            ctx->pc = 0x2869BCu;
            goto label_2869bc;
        }
    }
    ctx->pc = 0x286974u;
    // 0x286974: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x286974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x286978: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x286978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28697c: 0x0  nop
    ctx->pc = 0x28697cu;
    // NOP
label_286980:
    // 0x286980: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x286980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286984: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x286984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286988: 0xc0a1a0e  jal         func_286838
    ctx->pc = 0x286988u;
    SET_GPR_U32(ctx, 31, 0x286990u);
    ctx->pc = 0x28698Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286988u;
            // 0x28698c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286838u;
    if (runtime->hasFunction(0x286838u)) {
        auto targetFn = runtime->lookupFunction(0x286838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286990u; }
        if (ctx->pc != 0x286990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_286838_0x2868c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286990u; }
        if (ctx->pc != 0x286990u) { return; }
    }
    ctx->pc = 0x286990u;
    // 0x286990: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x286990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x286994: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x286994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286998: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x286998u;
    {
        const bool branch_taken_0x286998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286998) {
            ctx->pc = 0x28699Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286998u;
            // 0x28699c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286980u;
            runtime->cooperativeGuestYield();
            goto label_286980;
        }
    }
    ctx->pc = 0x2869A0u;
    // 0x2869a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2869A0u;
    {
        const bool branch_taken_0x2869a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2869A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2869A0u;
            // 0x2869a4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869a0) {
            ctx->pc = 0x2869C0u;
            goto label_2869c0;
        }
    }
    ctx->pc = 0x2869A8u;
label_2869a8:
    // 0x2869a8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2869a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2869ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2869acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2869b0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2869b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2869b4: 0xc0a1a0e  jal         func_286838
    ctx->pc = 0x2869B4u;
    SET_GPR_U32(ctx, 31, 0x2869BCu);
    ctx->pc = 0x2869B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2869B4u;
            // 0x2869b8: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286838u;
    if (runtime->hasFunction(0x286838u)) {
        auto targetFn = runtime->lookupFunction(0x286838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2869BCu; }
        if (ctx->pc != 0x2869BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_286838_0x2868c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2869BCu; }
        if (ctx->pc != 0x2869BCu) { return; }
    }
    ctx->pc = 0x2869BCu;
label_2869bc:
    // 0x2869bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2869bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2869c0:
    // 0x2869c0: 0xc0a1962  jal         func_286588
    ctx->pc = 0x2869C0u;
    SET_GPR_U32(ctx, 31, 0x2869C8u);
    ctx->pc = 0x2869C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2869C0u;
            // 0x2869c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286588u;
    if (runtime->hasFunction(0x286588u)) {
        auto targetFn = runtime->lookupFunction(0x286588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2869C8u; }
        if (ctx->pc != 0x2869C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286588_0x286588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2869C8u; }
        if (ctx->pc != 0x2869C8u) { return; }
    }
    ctx->pc = 0x2869C8u;
    // 0x2869c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2869c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2869cc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2869ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2869d0: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2869d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x2869d4: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x2869d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x2869d8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2869d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x2869dc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2869dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2869e0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2869e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2869e4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2869e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2869e8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2869e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2869ec: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2869ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2869f0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2869f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2869f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2869F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2869F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2869F4u;
            // 0x2869f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2868F8u: goto label_2868f8;
            case 0x286918u: goto label_286918;
            case 0x286924u: goto label_286924;
            case 0x286928u: goto label_286928;
            case 0x286980u: goto label_286980;
            case 0x2869A8u: goto label_2869a8;
            case 0x2869BCu: goto label_2869bc;
            case 0x2869C0u: goto label_2869c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2869FCu;
    // 0x2869fc: 0x0  nop
    ctx->pc = 0x2869fcu;
    // NOP
}
