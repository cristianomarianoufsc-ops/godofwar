#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017AFE0
// Address: 0x17afe0 - 0x17b0c8
void sub_0017AFE0_0x17afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AFE0_0x17afe0");
#endif

    ctx->pc = 0x17afe0u;

    // 0x17afe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17afe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17afe4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17afe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17afe8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17afe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17afec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17afecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aff0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17aff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17aff4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17aff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17aff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17affc: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x17AFFCu;
    {
        const bool branch_taken_0x17affc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AFFCu;
            // 0x17b000: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17affc) {
            ctx->pc = 0x17B028u;
            goto label_17b028;
        }
    }
    ctx->pc = 0x17B004u;
    // 0x17b004: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x17B004u;
    SET_GPR_U32(ctx, 31, 0x17B00Cu);
    ctx->pc = 0x17B008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B004u;
            // 0x17b008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B00Cu; }
        if (ctx->pc != 0x17B00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B00Cu; }
        if (ctx->pc != 0x17B00Cu) { return; }
    }
    ctx->pc = 0x17B00Cu;
    // 0x17b00c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17b010: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x17b010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17b014: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x17b014u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17b018: 0x51182b  sltu        $v1, $v0, $s1
    ctx->pc = 0x17b018u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x17b01c: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x17b01cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x17b020: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B020u;
    {
        const bool branch_taken_0x17b020 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B020u;
            // 0x17b024: 0x911021  addu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b020) {
            ctx->pc = 0x17B030u;
            goto label_17b030;
        }
    }
    ctx->pc = 0x17B028u;
label_17b028:
    // 0x17b028: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x17B028u;
    {
        const bool branch_taken_0x17b028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B028u;
            // 0x17b02c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b028) {
            ctx->pc = 0x17B0A8u;
            goto label_17b0a8;
        }
    }
    ctx->pc = 0x17B030u;
label_17b030:
    // 0x17b030: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x17b030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17b034: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17b034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17b038: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x17b038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x17b03c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17B03Cu;
    {
        const bool branch_taken_0x17b03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B03Cu;
            // 0x17b040: 0x3c04534d  lui         $a0, 0x534D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b03c) {
            ctx->pc = 0x17B070u;
            goto label_17b070;
        }
    }
    ctx->pc = 0x17B044u;
    // 0x17b044: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x17b044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17b048: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x17b048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b04c: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x17b04cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x17b050: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17b050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17b054: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x17b054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b058: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x17b058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b05c: 0xc09b250  jal         func_26C940
    ctx->pc = 0x17B05Cu;
    SET_GPR_U32(ctx, 31, 0x17B064u);
    ctx->pc = 0x17B060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B05Cu;
            // 0x17b060: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C940u;
    if (runtime->hasFunction(0x26C940u)) {
        auto targetFn = runtime->lookupFunction(0x26C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B064u; }
        if (ctx->pc != 0x17B064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26c940_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B064u; }
        if (ctx->pc != 0x17B064u) { return; }
    }
    ctx->pc = 0x17B064u;
    // 0x17b064: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17B064u;
    {
        const bool branch_taken_0x17b064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B064u;
            // 0x17b068: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b064) {
            ctx->pc = 0x17B0A8u;
            goto label_17b0a8;
        }
    }
    ctx->pc = 0x17B06Cu;
    // 0x17b06c: 0x0  nop
    ctx->pc = 0x17b06cu;
    // NOP
label_17b070:
    // 0x17b070: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x17b070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x17b074: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x17b074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17b078: 0x3c0b0018  lui         $t3, 0x18
    ctx->pc = 0x17b078u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)24 << 16));
    // 0x17b07c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x17b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x17b080: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b084: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17b084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17b088: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x17b088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b08c: 0x256bafc0  addiu       $t3, $t3, -0x5040
    ctx->pc = 0x17b08cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294946752));
    // 0x17b090: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x17b090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x17b094: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x17b094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b098: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17b098u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b09c: 0xc09b272  jal         func_26C9C8
    ctx->pc = 0x17B09Cu;
    SET_GPR_U32(ctx, 31, 0x17B0A4u);
    ctx->pc = 0x17B0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B09Cu;
            // 0x17b0a0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C9C8u;
    if (runtime->hasFunction(0x26C9C8u)) {
        auto targetFn = runtime->lookupFunction(0x26C9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B0A4u; }
        if (ctx->pc != 0x17B0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C9C8_0x26c9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B0A4u; }
        if (ctx->pc != 0x17B0A4u) { return; }
    }
    ctx->pc = 0x17B0A4u;
    // 0x17b0a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17b0a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b0a8:
    // 0x17b0a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17b0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b0ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17b0acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b0b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17b0b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b0b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B0B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B0B8u;
            // 0x17b0bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B028u: goto label_17b028;
            case 0x17B030u: goto label_17b030;
            case 0x17B070u: goto label_17b070;
            case 0x17B0A8u: goto label_17b0a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B0C0u;
    // 0x17b0c0: 0x0  nop
    ctx->pc = 0x17b0c0u;
    // NOP
    // 0x17b0c4: 0x0  nop
    ctx->pc = 0x17b0c4u;
    // NOP
}
