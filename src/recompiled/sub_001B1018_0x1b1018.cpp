#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1018
// Address: 0x1b1018 - 0x1b1118
void sub_001B1018_0x1b1018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1018_0x1b1018");
#endif

    ctx->pc = 0x1b1018u;

    // 0x1b1018: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b1018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b101c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b1020: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b1020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b1024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1028: 0xc069860  jal         func_1A6180
    ctx->pc = 0x1B1028u;
    SET_GPR_U32(ctx, 31, 0x1B1030u);
    ctx->pc = 0x1B102Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1028u;
            // 0x1b102c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6180u;
    if (runtime->hasFunction(0x1A6180u)) {
        auto targetFn = runtime->lookupFunction(0x1A6180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1030u; }
        if (ctx->pc != 0x1B1030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6180_0x1a6180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1030u; }
        if (ctx->pc != 0x1B1030u) { return; }
    }
    ctx->pc = 0x1B1030u;
    // 0x1b1030: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1b1030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1b1034: 0x8c432638  lw          $v1, 0x2638($v0)
    ctx->pc = 0x1b1034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9784)));
    // 0x1b1038: 0x24422638  addiu       $v0, $v0, 0x2638
    ctx->pc = 0x1b1038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9784));
    // 0x1b103c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1b103cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1b1040: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B1040u;
    {
        const bool branch_taken_0x1b1040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1040u;
            // 0x1b1044: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1040) {
            ctx->pc = 0x1B10F8u;
            goto label_1b10f8;
        }
    }
    ctx->pc = 0x1B1048u;
    // 0x1b1048: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1b1048u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b104c: 0x0  nop
    ctx->pc = 0x1b104cu;
    // NOP
label_1b1050:
    // 0x1b1050: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b1050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b1054: 0x8c64d2ac  lw          $a0, -0x2D54($v1)
    ctx->pc = 0x1b1054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x1b1058: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b1058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b105c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1060: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1b1060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1b1064: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1b1064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b1068: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x1b1068u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
    // 0x1b106c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1b106cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b1070: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1b1070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1b1074: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b1074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b1078: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b1078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b107c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B107Cu;
    {
        const bool branch_taken_0x1b107c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B1080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B107Cu;
            // 0x1b1080: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b107c) {
            ctx->pc = 0x1B1088u;
            goto label_1b1088;
        }
    }
    ctx->pc = 0x1B1084u;
    // 0x1b1084: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1b1084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b1088:
    // 0x1b1088: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B1088u;
    {
        const bool branch_taken_0x1b1088 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B108Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1088u;
            // 0x1b108c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1088) {
            ctx->pc = 0x1B10E8u;
            goto label_1b10e8;
        }
    }
    ctx->pc = 0x1B1090u;
    // 0x1b1090: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b1090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1094: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1b1094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1b1098: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b1098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b109c: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1b109cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1b10a0: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1b10a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1b10a4: 0x40f809  jalr        $v0
    ctx->pc = 0x1B10A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B10ACu);
        ctx->pc = 0x1B10A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10A4u;
            // 0x1b10a8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B10ACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1050u: goto label_1b1050;
            case 0x1B1088u: goto label_1b1088;
            case 0x1B10E8u: goto label_1b10e8;
            case 0x1B10ECu: goto label_1b10ec;
            case 0x1B10F8u: goto label_1b10f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B10ACu; }
            if (ctx->pc != 0x1B10ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1B10ACu;
    // 0x1b10ac: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1b10acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1b10b0: 0x1451000e  bne         $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B10B0u;
    {
        const bool branch_taken_0x1b10b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B10B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10B0u;
            // 0x1b10b4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b10b0) {
            ctx->pc = 0x1B10ECu;
            goto label_1b10ec;
        }
    }
    ctx->pc = 0x1B10B8u;
    // 0x1b10b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b10b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b10bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b10c0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1b10c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b10c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b10c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b10c8: 0x8c44ca14  lw          $a0, -0x35EC($v0)
    ctx->pc = 0x1b10c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953492)));
    // 0x1b10cc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1b10ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1b10d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b10d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b10d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b10d8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b10d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1b10dc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b10dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b10e0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1B10E0u;
    SET_GPR_U32(ctx, 31, 0x1B10E8u);
    ctx->pc = 0x1B10E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10E0u;
            // 0x1b10e4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10E8u; }
        if (ctx->pc != 0x1B10E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10E8u; }
        if (ctx->pc != 0x1B10E8u) { return; }
    }
    ctx->pc = 0x1B10E8u;
label_1b10e8:
    // 0x1b10e8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1b10e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b10ec:
    // 0x1b10ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b10ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b10f0: 0x1462ffd7  bne         $v1, $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1B10F0u;
    {
        const bool branch_taken_0x1b10f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B10F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10F0u;
            // 0x1b10f4: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b10f0) {
            ctx->pc = 0x1B1050u;
            runtime->cooperativeGuestYield();
            goto label_1b1050;
        }
    }
    ctx->pc = 0x1B10F8u;
label_1b10f8:
    // 0x1b10f8: 0xc06cd6c  jal         func_1B35B0
    ctx->pc = 0x1B10F8u;
    SET_GPR_U32(ctx, 31, 0x1B1100u);
    ctx->pc = 0x1B10FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10F8u;
            // 0x1b10fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B35B0u;
    if (runtime->hasFunction(0x1B35B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B35B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1100u; }
        if (ctx->pc != 0x1B1100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B35B0_0x1b35b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1100u; }
        if (ctx->pc != 0x1B1100u) { return; }
    }
    ctx->pc = 0x1B1100u;
    // 0x1b1100: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b1100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1104: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b1104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b110c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B110Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B110Cu;
            // 0x1b1110: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1050u: goto label_1b1050;
            case 0x1B1088u: goto label_1b1088;
            case 0x1B10E8u: goto label_1b10e8;
            case 0x1B10ECu: goto label_1b10ec;
            case 0x1B10F8u: goto label_1b10f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1114u;
    // 0x1b1114: 0x0  nop
    ctx->pc = 0x1b1114u;
    // NOP
}
