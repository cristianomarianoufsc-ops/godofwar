#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF000
// Address: 0x1df000 - 0x1df140
void sub_001DF000_0x1df000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF000_0x1df000");
#endif

    ctx->pc = 0x1df000u;

    // 0x1df000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1df000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1df004: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1df004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1df008: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1df008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df00c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1df00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1df010: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1df010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1df014: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1df014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df018: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1df018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1df01c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1df01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1df020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df024: 0x0  nop
    ctx->pc = 0x1df024u;
    // NOP
label_1df028:
    // 0x1df028: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1df028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1df02c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1df02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1df030: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1df030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1df034: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1df034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1df038: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1df038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1df03c: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DF03Cu;
    {
        const bool branch_taken_0x1df03c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF03Cu;
            // 0x1df040: 0xac620100  sw          $v0, 0x100($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df03c) {
            ctx->pc = 0x1DF028u;
            runtime->cooperativeGuestYield();
            goto label_1df028;
        }
    }
    ctx->pc = 0x1DF044u;
    // 0x1df044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1df044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df048: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x1DF048u;
    SET_GPR_U32(ctx, 31, 0x1DF050u);
    ctx->pc = 0x1DF04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF048u;
            // 0x1df04c: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (runtime->hasFunction(0x1313B0u)) {
        auto targetFn = runtime->lookupFunction(0x1313B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF050u; }
        if (ctx->pc != 0x1DF050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001313B0_0x1313b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF050u; }
        if (ctx->pc != 0x1DF050u) { return; }
    }
    ctx->pc = 0x1DF050u;
    // 0x1df050: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1df050u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df054: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1df054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df058: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x1DF058u;
    SET_GPR_U32(ctx, 31, 0x1DF060u);
    ctx->pc = 0x1DF05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF058u;
            // 0x1df05c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (runtime->hasFunction(0x1313B0u)) {
        auto targetFn = runtime->lookupFunction(0x1313B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF060u; }
        if (ctx->pc != 0x1DF060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001313B0_0x1313b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF060u; }
        if (ctx->pc != 0x1DF060u) { return; }
    }
    ctx->pc = 0x1DF060u;
    // 0x1df060: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x1df060u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x1df064: 0x2682ec58  addiu       $v0, $s4, -0x13A8
    ctx->pc = 0x1df064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962264));
    // 0x1df068: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1df068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1df06c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1df06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1df070: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1df070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1df074: 0x8c5100c0  lw          $s1, 0xC0($v0)
    ctx->pc = 0x1df074u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1df078: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DF078u;
    {
        const bool branch_taken_0x1df078 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF078u;
            // 0x1df07c: 0x2622ffec  addiu       $v0, $s1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df078) {
            ctx->pc = 0x1DF0B8u;
            goto label_1df0b8;
        }
    }
    ctx->pc = 0x1DF080u;
label_1df080:
    // 0x1df080: 0x11100a  movz        $v0, $zero, $s1
    ctx->pc = 0x1df080u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1df084: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1df084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1df088: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DF088u;
    {
        const bool branch_taken_0x1df088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF088u;
            // 0x1df08c: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df088) {
            ctx->pc = 0x1DF0ACu;
            goto label_1df0ac;
        }
    }
    ctx->pc = 0x1DF090u;
    // 0x1df090: 0x80500008  lb          $s0, 0x8($v0)
    ctx->pc = 0x1df090u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1df094: 0xc04e1f0  jal         func_1387C0
    ctx->pc = 0x1DF094u;
    SET_GPR_U32(ctx, 31, 0x1DF09Cu);
    ctx->pc = 0x1DF098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF094u;
            // 0x1df098: 0x24841388  addiu       $a0, $a0, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1387C0u;
    if (runtime->hasFunction(0x1387C0u)) {
        auto targetFn = runtime->lookupFunction(0x1387C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF09Cu; }
        if (ctx->pc != 0x1DF09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001387C0_0x1387c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF09Cu; }
        if (ctx->pc != 0x1DF09Cu) { return; }
    }
    ctx->pc = 0x1DF09Cu;
    // 0x1df09c: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF09Cu;
    {
        const bool branch_taken_0x1df09c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1df09c) {
            ctx->pc = 0x1DF0A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF09Cu;
            // 0x1df0a0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF0B0u;
            goto label_1df0b0;
        }
    }
    ctx->pc = 0x1DF0A4u;
    // 0x1df0a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF0A4u;
    {
        const bool branch_taken_0x1df0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0A4u;
            // 0x1df0a8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0a4) {
            ctx->pc = 0x1DF0B8u;
            goto label_1df0b8;
        }
    }
    ctx->pc = 0x1DF0ACu;
label_1df0ac:
    // 0x1df0ac: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1df0acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1df0b0:
    // 0x1df0b0: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DF0B0u;
    {
        const bool branch_taken_0x1df0b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0B0u;
            // 0x1df0b4: 0x2622ffec  addiu       $v0, $s1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0b0) {
            ctx->pc = 0x1DF080u;
            runtime->cooperativeGuestYield();
            goto label_1df080;
        }
    }
    ctx->pc = 0x1DF0B8u;
label_1df0b8:
    // 0x1df0b8: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF0B8u;
    {
        const bool branch_taken_0x1df0b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0B8u;
            // 0x1df0bc: 0x2682ec58  addiu       $v0, $s4, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0b8) {
            ctx->pc = 0x1DF0D0u;
            goto label_1df0d0;
        }
    }
    ctx->pc = 0x1DF0C0u;
    // 0x1df0c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1df0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0c4: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x1DF0C4u;
    SET_GPR_U32(ctx, 31, 0x1DF0CCu);
    ctx->pc = 0x1DF0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0C4u;
            // 0x1df0c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (runtime->hasFunction(0x1313B0u)) {
        auto targetFn = runtime->lookupFunction(0x1313B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0CCu; }
        if (ctx->pc != 0x1DF0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001313B0_0x1313b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0CCu; }
        if (ctx->pc != 0x1DF0CCu) { return; }
    }
    ctx->pc = 0x1DF0CCu;
    // 0x1df0cc: 0x2682ec58  addiu       $v0, $s4, -0x13A8
    ctx->pc = 0x1df0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962264));
label_1df0d0:
    // 0x1df0d0: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x1df0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1df0d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1df0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1df0d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1df0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1df0dc: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1df0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1df0e0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DF0E0u;
    {
        const bool branch_taken_0x1df0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0E0u;
            // 0x1df0e4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0e0) {
            ctx->pc = 0x1DF124u;
            goto label_1df124;
        }
    }
    ctx->pc = 0x1DF0E8u;
    // 0x1df0e8: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x1df0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1df0ec: 0x0  nop
    ctx->pc = 0x1df0ecu;
    // NOP
label_1df0f0:
    // 0x1df0f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1df0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0f4: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1df0f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1df0f8: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1df0f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1df0fc: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x1df0fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1df100: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF100u;
    {
        const bool branch_taken_0x1df100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df100) {
            ctx->pc = 0x1DF104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF100u;
            // 0x1df104: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF118u;
            goto label_1df118;
        }
    }
    ctx->pc = 0x1DF108u;
    // 0x1df108: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1df108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1df10c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1df10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df110: 0xe48000b4  swc1        $f0, 0xB4($a0)
    ctx->pc = 0x1df110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x1df114: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1df114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1df118:
    // 0x1df118: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1DF118u;
    {
        const bool branch_taken_0x1df118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF118u;
            // 0x1df11c: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df118) {
            ctx->pc = 0x1DF0F0u;
            runtime->cooperativeGuestYield();
            goto label_1df0f0;
        }
    }
    ctx->pc = 0x1DF120u;
    // 0x1df120: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1df120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1df124:
    // 0x1df124: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1df124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df128: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1df128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df12c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1df12cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df130: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1df130u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df138: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF138u;
            // 0x1df13c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF028u: goto label_1df028;
            case 0x1DF080u: goto label_1df080;
            case 0x1DF0ACu: goto label_1df0ac;
            case 0x1DF0B0u: goto label_1df0b0;
            case 0x1DF0B8u: goto label_1df0b8;
            case 0x1DF0D0u: goto label_1df0d0;
            case 0x1DF0F0u: goto label_1df0f0;
            case 0x1DF118u: goto label_1df118;
            case 0x1DF124u: goto label_1df124;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF140u;
}
