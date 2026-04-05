#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADFF8
// Address: 0x1adff8 - 0x1ae460
void sub_001ADFF8_0x1adff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADFF8_0x1adff8");
#endif

    ctx->pc = 0x1adff8u;

    // 0x1adff8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1adff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1adffc: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1adffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ae000: 0x8c432600  lw          $v1, 0x2600($v0)
    ctx->pc = 0x1ae000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9728)));
    // 0x1ae004: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1ae004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1ae008: 0x24422600  addiu       $v0, $v0, 0x2600
    ctx->pc = 0x1ae008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9728));
    // 0x1ae00c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ae00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1ae010: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ae010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae014: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1ae014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1ae018: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ae018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae01c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1ae01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1ae020: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ae020u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae024: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1ae024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1ae028: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ae028u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae02c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1ae02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1ae030: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ae030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ae034: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ae034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1ae038: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1AE038u;
    {
        const bool branch_taken_0x1ae038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE038u;
            // 0x1ae03c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae038) {
            ctx->pc = 0x1AE0E8u;
            goto label_1ae0e8;
        }
    }
    ctx->pc = 0x1AE040u;
label_1ae040:
    // 0x1ae040: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ae040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ae044: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1ae044u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ae048: 0xc06a5f2  jal         func_1A97C8
    ctx->pc = 0x1AE048u;
    SET_GPR_U32(ctx, 31, 0x1AE050u);
    ctx->pc = 0x1AE04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE048u;
            // 0x1ae04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A97C8u;
    if (runtime->hasFunction(0x1A97C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A97C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE050u; }
        if (ctx->pc != 0x1AE050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A97C8_0x1a97c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE050u; }
        if (ctx->pc != 0x1AE050u) { return; }
    }
    ctx->pc = 0x1AE050u;
    // 0x1ae050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae054: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1AE054u;
    SET_GPR_U32(ctx, 31, 0x1AE05Cu);
    ctx->pc = 0x1AE058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE054u;
            // 0x1ae058: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE05Cu; }
        if (ctx->pc != 0x1AE05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE05Cu; }
        if (ctx->pc != 0x1AE05Cu) { return; }
    }
    ctx->pc = 0x1AE05Cu;
    // 0x1ae05c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AE05Cu;
    {
        const bool branch_taken_0x1ae05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE05Cu;
            // 0x1ae060: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae05c) {
            ctx->pc = 0x1AE0D8u;
            goto label_1ae0d8;
        }
    }
    ctx->pc = 0x1AE064u;
    // 0x1ae064: 0x96030046  lhu         $v1, 0x46($s0)
    ctx->pc = 0x1ae064u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x1ae068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae06c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE06Cu;
    {
        const bool branch_taken_0x1ae06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE06Cu;
            // 0x1ae070: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae06c) {
            ctx->pc = 0x1AE084u;
            goto label_1ae084;
        }
    }
    ctx->pc = 0x1AE074u;
    // 0x1ae074: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE074u;
    {
        const bool branch_taken_0x1ae074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae074) {
            ctx->pc = 0x1AE078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE074u;
            // 0x1ae078: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE08Cu;
            goto label_1ae08c;
        }
    }
    ctx->pc = 0x1AE07Cu;
    // 0x1ae07c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1AE07Cu;
    {
        const bool branch_taken_0x1ae07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae07c) {
            ctx->pc = 0x1AE0D0u;
            goto label_1ae0d0;
        }
    }
    ctx->pc = 0x1AE084u;
label_1ae084:
    // 0x1ae084: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1AE084u;
    {
        const bool branch_taken_0x1ae084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE084u;
            // 0x1ae088: 0x213980a  movz        $s3, $s0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae084) {
            ctx->pc = 0x1AE0D0u;
            goto label_1ae0d0;
        }
    }
    ctx->pc = 0x1AE08Cu;
label_1ae08c:
    // 0x1ae08c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae090: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE090u;
    {
        const bool branch_taken_0x1ae090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE090u;
            // 0x1ae094: 0x261100b0  addiu       $s1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae090) {
            ctx->pc = 0x1AE0B8u;
            goto label_1ae0b8;
        }
    }
    ctx->pc = 0x1AE098u;
    // 0x1ae098: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ae098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ae09c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ae09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ae0a0: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ae0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ae0a4: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ae0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ae0a8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ae0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ae0ac: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AE0ACu;
    SET_GPR_U32(ctx, 31, 0x1AE0B4u);
    ctx->pc = 0x1AE0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE0ACu;
            // 0x1ae0b0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE0B4u; }
        if (ctx->pc != 0x1AE0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE0B4u; }
        if (ctx->pc != 0x1AE0B4u) { return; }
    }
    ctx->pc = 0x1AE0B4u;
    // 0x1ae0b4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ae0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ae0b8:
    // 0x1ae0b8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ae0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ae0bc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE0BCu;
    {
        const bool branch_taken_0x1ae0bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae0bc) {
            ctx->pc = 0x1AE0D0u;
            goto label_1ae0d0;
        }
    }
    ctx->pc = 0x1AE0C4u;
    // 0x1ae0c4: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1AE0C4u;
    SET_GPR_U32(ctx, 31, 0x1AE0CCu);
    ctx->pc = 0x1AE0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE0C4u;
            // 0x1ae0c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE0CCu; }
        if (ctx->pc != 0x1AE0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE0CCu; }
        if (ctx->pc != 0x1AE0CCu) { return; }
    }
    ctx->pc = 0x1AE0CCu;
    // 0x1ae0cc: 0x202900a  movz        $s2, $s0, $v0
    ctx->pc = 0x1ae0ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
label_1ae0d0:
    // 0x1ae0d0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE0D0u;
    {
        const bool branch_taken_0x1ae0d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE0D0u;
            // 0x1ae0d4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0d0) {
            ctx->pc = 0x1AE0E8u;
            goto label_1ae0e8;
        }
    }
    ctx->pc = 0x1AE0D8u;
label_1ae0d8:
    // 0x1ae0d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ae0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae0dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ae0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae0e0: 0x1443ffd7  bne         $v0, $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1AE0E0u;
    {
        const bool branch_taken_0x1ae0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AE0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE0E0u;
            // 0x1ae0e4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0e0) {
            ctx->pc = 0x1AE040u;
            runtime->cooperativeGuestYield();
            goto label_1ae040;
        }
    }
    ctx->pc = 0x1AE0E8u;
label_1ae0e8:
    // 0x1ae0e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1ae0e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae0ec: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1ae0ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae0f0: 0x252100b  movn        $v0, $s2, $s2
    ctx->pc = 0x1ae0f0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x1ae0f4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1ae0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae0f8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1ae0f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae0fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ae0fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae100: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1ae100u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae104: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1ae104u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ae108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae10c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE10Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE10Cu;
            // 0x1ae110: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE040u: goto label_1ae040;
            case 0x1AE084u: goto label_1ae084;
            case 0x1AE08Cu: goto label_1ae08c;
            case 0x1AE0B8u: goto label_1ae0b8;
            case 0x1AE0D0u: goto label_1ae0d0;
            case 0x1AE0D8u: goto label_1ae0d8;
            case 0x1AE0E8u: goto label_1ae0e8;
            case 0x1AE1A0u: goto label_1ae1a0;
            case 0x1AE1E8u: goto label_1ae1e8;
            case 0x1AE218u: goto label_1ae218;
            case 0x1AE22Cu: goto label_1ae22c;
            case 0x1AE258u: goto label_1ae258;
            case 0x1AE284u: goto label_1ae284;
            case 0x1AE29Cu: goto label_1ae29c;
            case 0x1AE340u: goto label_1ae340;
            case 0x1AE388u: goto label_1ae388;
            case 0x1AE3B8u: goto label_1ae3b8;
            case 0x1AE3D0u: goto label_1ae3d0;
            case 0x1AE3F0u: goto label_1ae3f0;
            case 0x1AE41Cu: goto label_1ae41c;
            case 0x1AE428u: goto label_1ae428;
            case 0x1AE42Cu: goto label_1ae42c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE114u;
    // 0x1ae114: 0x0  nop
    ctx->pc = 0x1ae114u;
    // NOP
    // 0x1ae118: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE040u: goto label_1ae040;
            case 0x1AE084u: goto label_1ae084;
            case 0x1AE08Cu: goto label_1ae08c;
            case 0x1AE0B8u: goto label_1ae0b8;
            case 0x1AE0D0u: goto label_1ae0d0;
            case 0x1AE0D8u: goto label_1ae0d8;
            case 0x1AE0E8u: goto label_1ae0e8;
            case 0x1AE1A0u: goto label_1ae1a0;
            case 0x1AE1E8u: goto label_1ae1e8;
            case 0x1AE218u: goto label_1ae218;
            case 0x1AE22Cu: goto label_1ae22c;
            case 0x1AE258u: goto label_1ae258;
            case 0x1AE284u: goto label_1ae284;
            case 0x1AE29Cu: goto label_1ae29c;
            case 0x1AE340u: goto label_1ae340;
            case 0x1AE388u: goto label_1ae388;
            case 0x1AE3B8u: goto label_1ae3b8;
            case 0x1AE3D0u: goto label_1ae3d0;
            case 0x1AE3F0u: goto label_1ae3f0;
            case 0x1AE41Cu: goto label_1ae41c;
            case 0x1AE428u: goto label_1ae428;
            case 0x1AE42Cu: goto label_1ae42c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE120u;
    // 0x1ae120: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE040u: goto label_1ae040;
            case 0x1AE084u: goto label_1ae084;
            case 0x1AE08Cu: goto label_1ae08c;
            case 0x1AE0B8u: goto label_1ae0b8;
            case 0x1AE0D0u: goto label_1ae0d0;
            case 0x1AE0D8u: goto label_1ae0d8;
            case 0x1AE0E8u: goto label_1ae0e8;
            case 0x1AE1A0u: goto label_1ae1a0;
            case 0x1AE1E8u: goto label_1ae1e8;
            case 0x1AE218u: goto label_1ae218;
            case 0x1AE22Cu: goto label_1ae22c;
            case 0x1AE258u: goto label_1ae258;
            case 0x1AE284u: goto label_1ae284;
            case 0x1AE29Cu: goto label_1ae29c;
            case 0x1AE340u: goto label_1ae340;
            case 0x1AE388u: goto label_1ae388;
            case 0x1AE3B8u: goto label_1ae3b8;
            case 0x1AE3D0u: goto label_1ae3d0;
            case 0x1AE3F0u: goto label_1ae3f0;
            case 0x1AE41Cu: goto label_1ae41c;
            case 0x1AE428u: goto label_1ae428;
            case 0x1AE42Cu: goto label_1ae42c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE128u;
    // 0x1ae128: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE040u: goto label_1ae040;
            case 0x1AE084u: goto label_1ae084;
            case 0x1AE08Cu: goto label_1ae08c;
            case 0x1AE0B8u: goto label_1ae0b8;
            case 0x1AE0D0u: goto label_1ae0d0;
            case 0x1AE0D8u: goto label_1ae0d8;
            case 0x1AE0E8u: goto label_1ae0e8;
            case 0x1AE1A0u: goto label_1ae1a0;
            case 0x1AE1E8u: goto label_1ae1e8;
            case 0x1AE218u: goto label_1ae218;
            case 0x1AE22Cu: goto label_1ae22c;
            case 0x1AE258u: goto label_1ae258;
            case 0x1AE284u: goto label_1ae284;
            case 0x1AE29Cu: goto label_1ae29c;
            case 0x1AE340u: goto label_1ae340;
            case 0x1AE388u: goto label_1ae388;
            case 0x1AE3B8u: goto label_1ae3b8;
            case 0x1AE3D0u: goto label_1ae3d0;
            case 0x1AE3F0u: goto label_1ae3f0;
            case 0x1AE41Cu: goto label_1ae41c;
            case 0x1AE428u: goto label_1ae428;
            case 0x1AE42Cu: goto label_1ae42c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE130u;
    // 0x1ae130: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ae130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ae134: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ae134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1ae138: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ae138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1ae13c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ae13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae140: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ae140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1ae144: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ae144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae148: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ae148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ae14c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1ae14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1ae150: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1ae150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1ae154: 0x16400035  bnez        $s2, . + 4 + (0x35 << 2)
    ctx->pc = 0x1AE154u;
    {
        const bool branch_taken_0x1ae154 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE154u;
            // 0x1ae158: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae154) {
            ctx->pc = 0x1AE22Cu;
            goto label_1ae22c;
        }
    }
    ctx->pc = 0x1AE15Cu;
    // 0x1ae15c: 0x86340044  lh          $s4, 0x44($s1)
    ctx->pc = 0x1ae15cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1ae160: 0x96330046  lhu         $s3, 0x46($s1)
    ctx->pc = 0x1ae160u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
    // 0x1ae164: 0x86240048  lh          $a0, 0x48($s1)
    ctx->pc = 0x1ae164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1ae168: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1ae168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1ae16c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1ae16cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ae170: 0x3c150030  lui         $s5, 0x30
    ctx->pc = 0x1ae170u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
    // 0x1ae174: 0x26a22668  addiu       $v0, $s5, 0x2668
    ctx->pc = 0x1ae174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 9832));
    // 0x1ae178: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ae178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae17c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ae17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae180: 0xc06b946  jal         func_1AE518
    ctx->pc = 0x1AE180u;
    SET_GPR_U32(ctx, 31, 0x1AE188u);
    ctx->pc = 0x1AE184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE180u;
            // 0x1ae184: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE518u;
    if (runtime->hasFunction(0x1AE518u)) {
        auto targetFn = runtime->lookupFunction(0x1AE518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE188u; }
        if (ctx->pc != 0x1AE188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ae518_0x1ae560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE188u; }
        if (ctx->pc != 0x1AE188u) { return; }
    }
    ctx->pc = 0x1AE188u;
    // 0x1ae188: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ae188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ae18c: 0x8c50cad0  lw          $s0, -0x3530($v0)
    ctx->pc = 0x1ae18cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953680)));
    // 0x1ae190: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AE190u;
    {
        const bool branch_taken_0x1ae190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE190u;
            // 0x1ae194: 0x253102a  slt         $v0, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae190) {
            ctx->pc = 0x1AE1E8u;
            goto label_1ae1e8;
        }
    }
    ctx->pc = 0x1AE198u;
    // 0x1ae198: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AE198u;
    {
        const bool branch_taken_0x1ae198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE198u;
            // 0x1ae19c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae198) {
            ctx->pc = 0x1AE1E8u;
            goto label_1ae1e8;
        }
    }
    ctx->pc = 0x1AE1A0u;
label_1ae1a0:
    // 0x1ae1a0: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1ae1a0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae1a4: 0x86240048  lh          $a0, 0x48($s1)
    ctx->pc = 0x1ae1a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1ae1a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ae1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ae1ac: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1ae1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1ae1b0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1ae1b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ae1b4: 0x2922821  addu        $a1, $s4, $s2
    ctx->pc = 0x1ae1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1ae1b8: 0x26a22668  addiu       $v0, $s5, 0x2668
    ctx->pc = 0x1ae1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 9832));
    // 0x1ae1bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ae1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ae1c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ae1c4: 0xc06b95c  jal         func_1AE570
    ctx->pc = 0x1AE1C4u;
    SET_GPR_U32(ctx, 31, 0x1AE1CCu);
    ctx->pc = 0x1AE1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1C4u;
            // 0x1ae1c8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE570u;
    if (runtime->hasFunction(0x1AE570u)) {
        auto targetFn = runtime->lookupFunction(0x1AE570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1CCu; }
        if (ctx->pc != 0x1AE1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE570_0x1ae570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1CCu; }
        if (ctx->pc != 0x1AE1CCu) { return; }
    }
    ctx->pc = 0x1AE1CCu;
    // 0x1ae1cc: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x1AE1CCu;
    SET_GPR_U32(ctx, 31, 0x1AE1D4u);
    ctx->pc = 0x1AE1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1CCu;
            // 0x1ae1d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1D4u; }
        if (ctx->pc != 0x1AE1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1D4u; }
        if (ctx->pc != 0x1AE1D4u) { return; }
    }
    ctx->pc = 0x1AE1D4u;
    // 0x1ae1d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae1d8: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x1ae1d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1ae1dc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1AE1DCu;
    {
        const bool branch_taken_0x1ae1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1DCu;
            // 0x1ae1e0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1dc) {
            ctx->pc = 0x1AE1A0u;
            runtime->cooperativeGuestYield();
            goto label_1ae1a0;
        }
    }
    ctx->pc = 0x1AE1E4u;
    // 0x1ae1e4: 0x0  nop
    ctx->pc = 0x1ae1e4u;
    // NOP
label_1ae1e8:
    // 0x1ae1e8: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x1ae1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1ae1ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae1f0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE1F0u;
    {
        const bool branch_taken_0x1ae1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1F0u;
            // 0x1ae1f4: 0x263000b0  addiu       $s0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1f0) {
            ctx->pc = 0x1AE218u;
            goto label_1ae218;
        }
    }
    ctx->pc = 0x1AE1F8u;
    // 0x1ae1f8: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ae1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ae1fc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ae1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ae200: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ae200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ae204: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ae204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ae208: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ae208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ae20c: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AE20Cu;
    SET_GPR_U32(ctx, 31, 0x1AE214u);
    ctx->pc = 0x1AE210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE20Cu;
            // 0x1ae210: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE214u; }
        if (ctx->pc != 0x1AE214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE214u; }
        if (ctx->pc != 0x1AE214u) { return; }
    }
    ctx->pc = 0x1AE214u;
    // 0x1ae214: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ae214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ae218:
    // 0x1ae218: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1ae218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ae21c: 0xc06a3bc  jal         func_1A8EF0
    ctx->pc = 0x1AE21Cu;
    SET_GPR_U32(ctx, 31, 0x1AE224u);
    ctx->pc = 0x1AE220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE21Cu;
            // 0x1ae220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EF0u;
    if (runtime->hasFunction(0x1A8EF0u)) {
        auto targetFn = runtime->lookupFunction(0x1A8EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE224u; }
        if (ctx->pc != 0x1AE224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8EF0_0x1a8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE224u; }
        if (ctx->pc != 0x1AE224u) { return; }
    }
    ctx->pc = 0x1AE224u;
    // 0x1ae224: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1AE224u;
    {
        const bool branch_taken_0x1ae224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE224u;
            // 0x1ae228: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae224) {
            ctx->pc = 0x1AE29Cu;
            goto label_1ae29c;
        }
    }
    ctx->pc = 0x1AE22Cu;
label_1ae22c:
    // 0x1ae22c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae230: 0x1642001a  bne         $s2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1AE230u;
    {
        const bool branch_taken_0x1ae230 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE230u;
            // 0x1ae234: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae230) {
            ctx->pc = 0x1AE29Cu;
            goto label_1ae29c;
        }
    }
    ctx->pc = 0x1AE238u;
    // 0x1ae238: 0xc06a60e  jal         func_1A9838
    ctx->pc = 0x1AE238u;
    SET_GPR_U32(ctx, 31, 0x1AE240u);
    ctx->pc = 0x1AE23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE238u;
            // 0x1ae23c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9838u;
    if (runtime->hasFunction(0x1A9838u)) {
        auto targetFn = runtime->lookupFunction(0x1A9838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE240u; }
        if (ctx->pc != 0x1AE240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9838_0x1a9838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE240u; }
        if (ctx->pc != 0x1AE240u) { return; }
    }
    ctx->pc = 0x1AE240u;
    // 0x1ae240: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AE240u;
    {
        const bool branch_taken_0x1ae240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE240u;
            // 0x1ae244: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae240) {
            ctx->pc = 0x1AE29Cu;
            goto label_1ae29c;
        }
    }
    ctx->pc = 0x1AE248u;
    // 0x1ae248: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ae248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae24c: 0xc06b958  jal         func_1AE560
    ctx->pc = 0x1AE24Cu;
    SET_GPR_U32(ctx, 31, 0x1AE254u);
    ctx->pc = 0x1AE250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE24Cu;
            // 0x1ae250: 0x263000b8  addiu       $s0, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE560u;
    if (runtime->hasFunction(0x1AE560u)) {
        auto targetFn = runtime->lookupFunction(0x1AE560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE254u; }
        if (ctx->pc != 0x1AE254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ae560_0x1ae570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE254u; }
        if (ctx->pc != 0x1AE254u) { return; }
    }
    ctx->pc = 0x1AE254u;
    // 0x1ae254: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x1ae254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1ae258:
    // 0x1ae258: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ae258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae25c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae260: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE260u;
    {
        const bool branch_taken_0x1ae260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE260u;
            // 0x1ae264: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae260) {
            ctx->pc = 0x1AE284u;
            goto label_1ae284;
        }
    }
    ctx->pc = 0x1AE268u;
    // 0x1ae268: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ae268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ae26c: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ae26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ae270: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ae270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ae274: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ae274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ae278: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AE278u;
    SET_GPR_U32(ctx, 31, 0x1AE280u);
    ctx->pc = 0x1AE27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE278u;
            // 0x1ae27c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE280u; }
        if (ctx->pc != 0x1AE280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE280u; }
        if (ctx->pc != 0x1AE280u) { return; }
    }
    ctx->pc = 0x1AE280u;
    // 0x1ae280: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ae280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ae284:
    // 0x1ae284: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1ae284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1ae288: 0x641fff3  bgez        $s2, . + 4 + (-0xD << 2)
    ctx->pc = 0x1AE288u;
    {
        const bool branch_taken_0x1ae288 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1AE28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE288u;
            // 0x1ae28c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae288) {
            ctx->pc = 0x1AE258u;
            runtime->cooperativeGuestYield();
            goto label_1ae258;
        }
    }
    ctx->pc = 0x1AE290u;
    // 0x1ae290: 0xc06b958  jal         func_1AE560
    ctx->pc = 0x1AE290u;
    SET_GPR_U32(ctx, 31, 0x1AE298u);
    ctx->pc = 0x1AE294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE290u;
            // 0x1ae294: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE560u;
    if (runtime->hasFunction(0x1AE560u)) {
        auto targetFn = runtime->lookupFunction(0x1AE560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE298u; }
        if (ctx->pc != 0x1AE298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ae560_0x1ae570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE298u; }
        if (ctx->pc != 0x1AE298u) { return; }
    }
    ctx->pc = 0x1AE298u;
    // 0x1ae298: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ae298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae29c:
    // 0x1ae29c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ae29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae2a0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ae2a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae2a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ae2a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae2a8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1ae2a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae2ac: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1ae2acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae2b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2B4u;
            // 0x1ae2b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE040u: goto label_1ae040;
            case 0x1AE084u: goto label_1ae084;
            case 0x1AE08Cu: goto label_1ae08c;
            case 0x1AE0B8u: goto label_1ae0b8;
            case 0x1AE0D0u: goto label_1ae0d0;
            case 0x1AE0D8u: goto label_1ae0d8;
            case 0x1AE0E8u: goto label_1ae0e8;
            case 0x1AE1A0u: goto label_1ae1a0;
            case 0x1AE1E8u: goto label_1ae1e8;
            case 0x1AE218u: goto label_1ae218;
            case 0x1AE22Cu: goto label_1ae22c;
            case 0x1AE258u: goto label_1ae258;
            case 0x1AE284u: goto label_1ae284;
            case 0x1AE29Cu: goto label_1ae29c;
            case 0x1AE340u: goto label_1ae340;
            case 0x1AE388u: goto label_1ae388;
            case 0x1AE3B8u: goto label_1ae3b8;
            case 0x1AE3D0u: goto label_1ae3d0;
            case 0x1AE3F0u: goto label_1ae3f0;
            case 0x1AE41Cu: goto label_1ae41c;
            case 0x1AE428u: goto label_1ae428;
            case 0x1AE42Cu: goto label_1ae42c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE2BCu;
    // 0x1ae2bc: 0x0  nop
    ctx->pc = 0x1ae2bcu;
    // NOP
    // 0x1ae2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE040u: goto label_1ae040;
            case 0x1AE084u: goto label_1ae084;
            case 0x1AE08Cu: goto label_1ae08c;
            case 0x1AE0B8u: goto label_1ae0b8;
            case 0x1AE0D0u: goto label_1ae0d0;
            case 0x1AE0D8u: goto label_1ae0d8;
            case 0x1AE0E8u: goto label_1ae0e8;
            case 0x1AE1A0u: goto label_1ae1a0;
            case 0x1AE1E8u: goto label_1ae1e8;
            case 0x1AE218u: goto label_1ae218;
            case 0x1AE22Cu: goto label_1ae22c;
            case 0x1AE258u: goto label_1ae258;
            case 0x1AE284u: goto label_1ae284;
            case 0x1AE29Cu: goto label_1ae29c;
            case 0x1AE340u: goto label_1ae340;
            case 0x1AE388u: goto label_1ae388;
            case 0x1AE3B8u: goto label_1ae3b8;
            case 0x1AE3D0u: goto label_1ae3d0;
            case 0x1AE3F0u: goto label_1ae3f0;
            case 0x1AE41Cu: goto label_1ae41c;
            case 0x1AE428u: goto label_1ae428;
            case 0x1AE42Cu: goto label_1ae42c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE2C8u;
    // 0x1ae2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE2C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE040u: goto label_1ae040;
            case 0x1AE084u: goto label_1ae084;
            case 0x1AE08Cu: goto label_1ae08c;
            case 0x1AE0B8u: goto label_1ae0b8;
            case 0x1AE0D0u: goto label_1ae0d0;
            case 0x1AE0D8u: goto label_1ae0d8;
            case 0x1AE0E8u: goto label_1ae0e8;
            case 0x1AE1A0u: goto label_1ae1a0;
            case 0x1AE1E8u: goto label_1ae1e8;
            case 0x1AE218u: goto label_1ae218;
            case 0x1AE22Cu: goto label_1ae22c;
            case 0x1AE258u: goto label_1ae258;
            case 0x1AE284u: goto label_1ae284;
            case 0x1AE29Cu: goto label_1ae29c;
            case 0x1AE340u: goto label_1ae340;
            case 0x1AE388u: goto label_1ae388;
            case 0x1AE3B8u: goto label_1ae3b8;
            case 0x1AE3D0u: goto label_1ae3d0;
            case 0x1AE3F0u: goto label_1ae3f0;
            case 0x1AE41Cu: goto label_1ae41c;
            case 0x1AE428u: goto label_1ae428;
            case 0x1AE42Cu: goto label_1ae42c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE2D0u;
    // 0x1ae2d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ae2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ae2d4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ae2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1ae2d8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ae2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1ae2dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ae2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae2e0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ae2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1ae2e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ae2e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae2e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ae2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ae2ec: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1ae2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1ae2f0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1ae2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1ae2f4: 0x16400036  bnez        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x1AE2F4u;
    {
        const bool branch_taken_0x1ae2f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2F4u;
            // 0x1ae2f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae2f4) {
            ctx->pc = 0x1AE3D0u;
            goto label_1ae3d0;
        }
    }
    ctx->pc = 0x1AE2FCu;
    // 0x1ae2fc: 0x86340044  lh          $s4, 0x44($s1)
    ctx->pc = 0x1ae2fcu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1ae300: 0x96330046  lhu         $s3, 0x46($s1)
    ctx->pc = 0x1ae300u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
    // 0x1ae304: 0x86240048  lh          $a0, 0x48($s1)
    ctx->pc = 0x1ae304u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1ae308: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1ae308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1ae30c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1ae30cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ae310: 0x3c150030  lui         $s5, 0x30
    ctx->pc = 0x1ae310u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
    // 0x1ae314: 0x26a22668  addiu       $v0, $s5, 0x2668
    ctx->pc = 0x1ae314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 9832));
    // 0x1ae318: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ae318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae31c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ae31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae320: 0xc06baea  jal         func_1AEBA8
    ctx->pc = 0x1AE320u;
    SET_GPR_U32(ctx, 31, 0x1AE328u);
    ctx->pc = 0x1AE324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE320u;
            // 0x1ae324: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBA8u;
    if (runtime->hasFunction(0x1AEBA8u)) {
        auto targetFn = runtime->lookupFunction(0x1AEBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE328u; }
        if (ctx->pc != 0x1AE328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEBA8_0x1aeba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE328u; }
        if (ctx->pc != 0x1AE328u) { return; }
    }
    ctx->pc = 0x1AE328u;
    // 0x1ae328: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ae328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ae32c: 0x8c50cad0  lw          $s0, -0x3530($v0)
    ctx->pc = 0x1ae32cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953680)));
    // 0x1ae330: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AE330u;
    {
        const bool branch_taken_0x1ae330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE330u;
            // 0x1ae334: 0x253102a  slt         $v0, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae330) {
            ctx->pc = 0x1AE388u;
            goto label_1ae388;
        }
    }
    ctx->pc = 0x1AE338u;
    // 0x1ae338: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AE338u;
    {
        const bool branch_taken_0x1ae338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE338u;
            // 0x1ae33c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae338) {
            ctx->pc = 0x1AE388u;
            goto label_1ae388;
        }
    }
    ctx->pc = 0x1AE340u;
label_1ae340:
    // 0x1ae340: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1ae340u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae344: 0x86240048  lh          $a0, 0x48($s1)
    ctx->pc = 0x1ae344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1ae348: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ae348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ae34c: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1ae34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1ae350: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1ae350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ae354: 0x2922821  addu        $a1, $s4, $s2
    ctx->pc = 0x1ae354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1ae358: 0x26a22668  addiu       $v0, $s5, 0x2668
    ctx->pc = 0x1ae358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 9832));
    // 0x1ae35c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ae35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae360: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ae360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ae364: 0xc06bb06  jal         func_1AEC18
    ctx->pc = 0x1AE364u;
    SET_GPR_U32(ctx, 31, 0x1AE36Cu);
    ctx->pc = 0x1AE368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE364u;
            // 0x1ae368: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC18u;
    if (runtime->hasFunction(0x1AEC18u)) {
        auto targetFn = runtime->lookupFunction(0x1AEC18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE36Cu; }
        if (ctx->pc != 0x1AE36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1aec18_0x1aeca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE36Cu; }
        if (ctx->pc != 0x1AE36Cu) { return; }
    }
    ctx->pc = 0x1AE36Cu;
    // 0x1ae36c: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x1AE36Cu;
    SET_GPR_U32(ctx, 31, 0x1AE374u);
    ctx->pc = 0x1AE370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE36Cu;
            // 0x1ae370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE374u; }
        if (ctx->pc != 0x1AE374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE374u; }
        if (ctx->pc != 0x1AE374u) { return; }
    }
    ctx->pc = 0x1AE374u;
    // 0x1ae374: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae378: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x1ae378u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1ae37c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1AE37Cu;
    {
        const bool branch_taken_0x1ae37c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE37Cu;
            // 0x1ae380: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae37c) {
            ctx->pc = 0x1AE340u;
            runtime->cooperativeGuestYield();
            goto label_1ae340;
        }
    }
    ctx->pc = 0x1AE384u;
    // 0x1ae384: 0x0  nop
    ctx->pc = 0x1ae384u;
    // NOP
label_1ae388:
    // 0x1ae388: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x1ae388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1ae38c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae390: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE390u;
    {
        const bool branch_taken_0x1ae390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE390u;
            // 0x1ae394: 0x263000b0  addiu       $s0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae390) {
            ctx->pc = 0x1AE3B8u;
            goto label_1ae3b8;
        }
    }
    ctx->pc = 0x1AE398u;
    // 0x1ae398: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ae398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ae39c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ae39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ae3a0: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ae3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ae3a4: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ae3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ae3a8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ae3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ae3ac: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AE3ACu;
    SET_GPR_U32(ctx, 31, 0x1AE3B4u);
    ctx->pc = 0x1AE3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3ACu;
            // 0x1ae3b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3B4u; }
        if (ctx->pc != 0x1AE3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3B4u; }
        if (ctx->pc != 0x1AE3B4u) { return; }
    }
    ctx->pc = 0x1AE3B4u;
    // 0x1ae3b4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ae3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ae3b8:
    // 0x1ae3b8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1ae3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ae3bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae3c0: 0xc06a3bc  jal         func_1A8EF0
    ctx->pc = 0x1AE3C0u;
    SET_GPR_U32(ctx, 31, 0x1AE3C8u);
    ctx->pc = 0x1AE3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3C0u;
            // 0x1ae3c4: 0x24a503e8  addiu       $a1, $a1, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EF0u;
    if (runtime->hasFunction(0x1A8EF0u)) {
        auto targetFn = runtime->lookupFunction(0x1A8EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3C8u; }
        if (ctx->pc != 0x1AE3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8EF0_0x1a8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3C8u; }
        if (ctx->pc != 0x1AE3C8u) { return; }
    }
    ctx->pc = 0x1AE3C8u;
    // 0x1ae3c8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1AE3C8u;
    {
        const bool branch_taken_0x1ae3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3C8u;
            // 0x1ae3cc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae3c8) {
            ctx->pc = 0x1AE42Cu;
            goto label_1ae42c;
        }
    }
    ctx->pc = 0x1AE3D0u;
label_1ae3d0:
    // 0x1ae3d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae3d4: 0x16420015  bne         $s2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AE3D4u;
    {
        const bool branch_taken_0x1ae3d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3D4u;
            // 0x1ae3d8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae3d4) {
            ctx->pc = 0x1AE42Cu;
            goto label_1ae42c;
        }
    }
    ctx->pc = 0x1AE3DCu;
    // 0x1ae3dc: 0xc06a60e  jal         func_1A9838
    ctx->pc = 0x1AE3DCu;
    SET_GPR_U32(ctx, 31, 0x1AE3E4u);
    ctx->pc = 0x1AE3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3DCu;
            // 0x1ae3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9838u;
    if (runtime->hasFunction(0x1A9838u)) {
        auto targetFn = runtime->lookupFunction(0x1A9838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3E4u; }
        if (ctx->pc != 0x1AE3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9838_0x1a9838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3E4u; }
        if (ctx->pc != 0x1AE3E4u) { return; }
    }
    ctx->pc = 0x1AE3E4u;
    // 0x1ae3e4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AE3E4u;
    {
        const bool branch_taken_0x1ae3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3E4u;
            // 0x1ae3e8: 0x263000b8  addiu       $s0, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae3e4) {
            ctx->pc = 0x1AE428u;
            goto label_1ae428;
        }
    }
    ctx->pc = 0x1AE3ECu;
    // 0x1ae3ec: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x1ae3ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1ae3f0:
    // 0x1ae3f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ae3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae3f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae3f8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE3F8u;
    {
        const bool branch_taken_0x1ae3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3F8u;
            // 0x1ae3fc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae3f8) {
            ctx->pc = 0x1AE41Cu;
            goto label_1ae41c;
        }
    }
    ctx->pc = 0x1AE400u;
    // 0x1ae400: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ae400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ae404: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ae404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ae408: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ae408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ae40c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ae40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ae410: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AE410u;
    SET_GPR_U32(ctx, 31, 0x1AE418u);
    ctx->pc = 0x1AE414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE410u;
            // 0x1ae414: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE418u; }
        if (ctx->pc != 0x1AE418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE418u; }
        if (ctx->pc != 0x1AE418u) { return; }
    }
    ctx->pc = 0x1AE418u;
    // 0x1ae418: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ae418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ae41c:
    // 0x1ae41c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1ae41cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1ae420: 0x641fff3  bgez        $s2, . + 4 + (-0xD << 2)
    ctx->pc = 0x1AE420u;
    {
        const bool branch_taken_0x1ae420 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1AE424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE420u;
            // 0x1ae424: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae420) {
            ctx->pc = 0x1AE3F0u;
            runtime->cooperativeGuestYield();
            goto label_1ae3f0;
        }
    }
    ctx->pc = 0x1AE428u;
label_1ae428:
    // 0x1ae428: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ae428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae42c:
    // 0x1ae42c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ae42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae430: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ae430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae434: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ae434u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae438: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1ae438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae43c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1ae43cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae444: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE444u;
            // 0x1ae448: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE040u: goto label_1ae040;
            case 0x1AE084u: goto label_1ae084;
            case 0x1AE08Cu: goto label_1ae08c;
            case 0x1AE0B8u: goto label_1ae0b8;
            case 0x1AE0D0u: goto label_1ae0d0;
            case 0x1AE0D8u: goto label_1ae0d8;
            case 0x1AE0E8u: goto label_1ae0e8;
            case 0x1AE1A0u: goto label_1ae1a0;
            case 0x1AE1E8u: goto label_1ae1e8;
            case 0x1AE218u: goto label_1ae218;
            case 0x1AE22Cu: goto label_1ae22c;
            case 0x1AE258u: goto label_1ae258;
            case 0x1AE284u: goto label_1ae284;
            case 0x1AE29Cu: goto label_1ae29c;
            case 0x1AE340u: goto label_1ae340;
            case 0x1AE388u: goto label_1ae388;
            case 0x1AE3B8u: goto label_1ae3b8;
            case 0x1AE3D0u: goto label_1ae3d0;
            case 0x1AE3F0u: goto label_1ae3f0;
            case 0x1AE41Cu: goto label_1ae41c;
            case 0x1AE428u: goto label_1ae428;
            case 0x1AE42Cu: goto label_1ae42c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE44Cu;
    // 0x1ae44c: 0x0  nop
    ctx->pc = 0x1ae44cu;
    // NOP
    // 0x1ae450: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE040u: goto label_1ae040;
            case 0x1AE084u: goto label_1ae084;
            case 0x1AE08Cu: goto label_1ae08c;
            case 0x1AE0B8u: goto label_1ae0b8;
            case 0x1AE0D0u: goto label_1ae0d0;
            case 0x1AE0D8u: goto label_1ae0d8;
            case 0x1AE0E8u: goto label_1ae0e8;
            case 0x1AE1A0u: goto label_1ae1a0;
            case 0x1AE1E8u: goto label_1ae1e8;
            case 0x1AE218u: goto label_1ae218;
            case 0x1AE22Cu: goto label_1ae22c;
            case 0x1AE258u: goto label_1ae258;
            case 0x1AE284u: goto label_1ae284;
            case 0x1AE29Cu: goto label_1ae29c;
            case 0x1AE340u: goto label_1ae340;
            case 0x1AE388u: goto label_1ae388;
            case 0x1AE3B8u: goto label_1ae3b8;
            case 0x1AE3D0u: goto label_1ae3d0;
            case 0x1AE3F0u: goto label_1ae3f0;
            case 0x1AE41Cu: goto label_1ae41c;
            case 0x1AE428u: goto label_1ae428;
            case 0x1AE42Cu: goto label_1ae42c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE458u;
    // 0x1ae458: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE040u: goto label_1ae040;
            case 0x1AE084u: goto label_1ae084;
            case 0x1AE08Cu: goto label_1ae08c;
            case 0x1AE0B8u: goto label_1ae0b8;
            case 0x1AE0D0u: goto label_1ae0d0;
            case 0x1AE0D8u: goto label_1ae0d8;
            case 0x1AE0E8u: goto label_1ae0e8;
            case 0x1AE1A0u: goto label_1ae1a0;
            case 0x1AE1E8u: goto label_1ae1e8;
            case 0x1AE218u: goto label_1ae218;
            case 0x1AE22Cu: goto label_1ae22c;
            case 0x1AE258u: goto label_1ae258;
            case 0x1AE284u: goto label_1ae284;
            case 0x1AE29Cu: goto label_1ae29c;
            case 0x1AE340u: goto label_1ae340;
            case 0x1AE388u: goto label_1ae388;
            case 0x1AE3B8u: goto label_1ae3b8;
            case 0x1AE3D0u: goto label_1ae3d0;
            case 0x1AE3F0u: goto label_1ae3f0;
            case 0x1AE41Cu: goto label_1ae41c;
            case 0x1AE428u: goto label_1ae428;
            case 0x1AE42Cu: goto label_1ae42c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE460u;
}
