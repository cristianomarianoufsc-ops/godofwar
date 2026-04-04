#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ABCE0
// Address: 0x1abce0 - 0x1ac9f8
void sub_001ABCE0_0x1abce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABCE0_0x1abce0");
#endif

    ctx->pc = 0x1abce0u;

    // 0x1abce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1abce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1abce4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1abce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1abce8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1abce8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1abcec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1abcf0: 0x8e04caa4  lw          $a0, -0x355C($s0)
    ctx->pc = 0x1abcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953636)));
    // 0x1abcf4: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1ABCF4u;
    {
        const bool branch_taken_0x1abcf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abcf4) {
            ctx->pc = 0x1ABCF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCF4u;
            // 0x1abcf8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABD68u;
            goto label_1abd68;
        }
    }
    ctx->pc = 0x1ABCFCu;
    // 0x1abcfc: 0xc0697f0  jal         func_1A5FC0
    ctx->pc = 0x1ABCFCu;
    SET_GPR_U32(ctx, 31, 0x1ABD04u);
    ctx->pc = 0x1A5FC0u;
    if (runtime->hasFunction(0x1A5FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD04u; }
        if (ctx->pc != 0x1ABD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5FC0_0x1a5fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD04u; }
        if (ctx->pc != 0x1ABD04u) { return; }
    }
    ctx->pc = 0x1ABD04u;
    // 0x1abd04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1abd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd08: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1abd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1abd0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1abd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1abd10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1abd10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1abd14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1abd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1abd18: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1abd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1abd1c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1abd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1abd20: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1abd20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1abd24: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABD24u;
    {
        const bool branch_taken_0x1abd24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD24u;
            // 0x1abd28: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd24) {
            ctx->pc = 0x1ABD38u;
            goto label_1abd38;
        }
    }
    ctx->pc = 0x1ABD2Cu;
    // 0x1abd2c: 0xc06961c  jal         func_1A5870
    ctx->pc = 0x1ABD2Cu;
    SET_GPR_U32(ctx, 31, 0x1ABD34u);
    ctx->pc = 0x1ABD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD2Cu;
            // 0x1abd30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5870u;
    if (runtime->hasFunction(0x1A5870u)) {
        auto targetFn = runtime->lookupFunction(0x1A5870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD34u; }
        if (ctx->pc != 0x1ABD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5870_0x1a5870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD34u; }
        if (ctx->pc != 0x1ABD34u) { return; }
    }
    ctx->pc = 0x1ABD34u;
    // 0x1abd34: 0x0  nop
    ctx->pc = 0x1abd34u;
    // NOP
label_1abd38:
    // 0x1abd38: 0x8e04caa4  lw          $a0, -0x355C($s0)
    ctx->pc = 0x1abd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953636)));
    // 0x1abd3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd40: 0xc04c572  jal         func_1315C8
    ctx->pc = 0x1ABD40u;
    SET_GPR_U32(ctx, 31, 0x1ABD48u);
    ctx->pc = 0x1ABD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD40u;
            // 0x1abd44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C8u;
    if (runtime->hasFunction(0x1315C8u)) {
        auto targetFn = runtime->lookupFunction(0x1315C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD48u; }
        if (ctx->pc != 0x1ABD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315c8_0x1315d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD48u; }
        if (ctx->pc != 0x1ABD48u) { return; }
    }
    ctx->pc = 0x1ABD48u;
    // 0x1abd48: 0xc06b634  jal         func_1AD8D0
    ctx->pc = 0x1ABD48u;
    SET_GPR_U32(ctx, 31, 0x1ABD50u);
    ctx->pc = 0x1ABD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD48u;
            // 0x1abd4c: 0x8e04caa4  lw          $a0, -0x355C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953636)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD8D0u;
    if (runtime->hasFunction(0x1AD8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD50u; }
        if (ctx->pc != 0x1ABD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD8D0_0x1ad8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD50u; }
        if (ctx->pc != 0x1ABD50u) { return; }
    }
    ctx->pc = 0x1ABD50u;
    // 0x1abd50: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1ABD50u;
    SET_GPR_U32(ctx, 31, 0x1ABD58u);
    ctx->pc = 0x1ABD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD50u;
            // 0x1abd54: 0x8e04caa4  lw          $a0, -0x355C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953636)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD58u; }
        if (ctx->pc != 0x1ABD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD58u; }
        if (ctx->pc != 0x1ABD58u) { return; }
    }
    ctx->pc = 0x1ABD58u;
    // 0x1abd58: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1abd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1abd5c: 0xae00caa4  sw          $zero, -0x355C($s0)
    ctx->pc = 0x1abd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953636), GPR_U32(ctx, 0));
    // 0x1abd60: 0xac40caa8  sw          $zero, -0x3558($v0)
    ctx->pc = 0x1abd60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953640), GPR_U32(ctx, 0));
    // 0x1abd64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1abd64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1abd68:
    // 0x1abd68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD6Cu;
            // 0x1abd70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ABD74u;
    // 0x1abd74: 0x0  nop
    ctx->pc = 0x1abd74u;
    // NOP
    // 0x1abd78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1abd7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1abd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1abd80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1abd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1abd84: 0x14c00014  bnez        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1ABD84u;
    {
        const bool branch_taken_0x1abd84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD84u;
            // 0x1abd88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd84) {
            ctx->pc = 0x1ABDD8u;
            goto label_1abdd8;
        }
    }
    ctx->pc = 0x1ABD8Cu;
    // 0x1abd8c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1abd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1abd90: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1ABD90u;
    SET_GPR_U32(ctx, 31, 0x1ABD98u);
    ctx->pc = 0x1ABD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD90u;
            // 0x1abd94: 0x8c44ca0c  lw          $a0, -0x35F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953484)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD98u; }
        if (ctx->pc != 0x1ABD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD98u; }
        if (ctx->pc != 0x1ABD98u) { return; }
    }
    ctx->pc = 0x1ABD98u;
    // 0x1abd98: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1abd98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1abd9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1abd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1abda0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1abda0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1abda4: 0x24632600  addiu       $v1, $v1, 0x2600
    ctx->pc = 0x1abda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9728));
    // 0x1abda8: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x1abda8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x1abdac: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1abdacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1abdb0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1abdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1abdb4: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1abdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x1abdb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1abdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1abdbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abdc0: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1abdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1abdc4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1abdc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1abdc8: 0xc06a3bc  jal         func_1A8EF0
    ctx->pc = 0x1ABDC8u;
    SET_GPR_U32(ctx, 31, 0x1ABDD0u);
    ctx->pc = 0x1ABDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABDC8u;
            // 0x1abdcc: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EF0u;
    if (runtime->hasFunction(0x1A8EF0u)) {
        auto targetFn = runtime->lookupFunction(0x1A8EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABDD0u; }
        if (ctx->pc != 0x1ABDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8EF0_0x1a8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABDD0u; }
        if (ctx->pc != 0x1ABDD0u) { return; }
    }
    ctx->pc = 0x1ABDD0u;
    // 0x1abdd0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1ABDD0u;
    {
        const bool branch_taken_0x1abdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABDD0u;
            // 0x1abdd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abdd0) {
            ctx->pc = 0x1ABE68u;
            goto label_1abe68;
        }
    }
    ctx->pc = 0x1ABDD8u;
label_1abdd8:
    // 0x1abdd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1abdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abddc: 0x10c20021  beq         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1ABDDCu;
    {
        const bool branch_taken_0x1abddc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ABDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABDDCu;
            // 0x1abde0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abddc) {
            ctx->pc = 0x1ABE64u;
            goto label_1abe64;
        }
    }
    ctx->pc = 0x1ABDE4u;
    // 0x1abde4: 0x54c20020  bnel        $a2, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1ABDE4u;
    {
        const bool branch_taken_0x1abde4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abde4) {
            ctx->pc = 0x1ABDE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABDE4u;
            // 0x1abde8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABE68u;
            goto label_1abe68;
        }
    }
    ctx->pc = 0x1ABDECu;
    // 0x1abdec: 0x54a0001e  bnel        $a1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1ABDECu;
    {
        const bool branch_taken_0x1abdec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abdec) {
            ctx->pc = 0x1ABDF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABDECu;
            // 0x1abdf0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABE68u;
            goto label_1abe68;
        }
    }
    ctx->pc = 0x1ABDF4u;
    // 0x1abdf4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1abdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1abdf8: 0x8c432600  lw          $v1, 0x2600($v0)
    ctx->pc = 0x1abdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9728)));
    // 0x1abdfc: 0x24422600  addiu       $v0, $v0, 0x2600
    ctx->pc = 0x1abdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9728));
    // 0x1abe00: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1abe00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1abe04: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1ABE04u;
    {
        const bool branch_taken_0x1abe04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ABE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE04u;
            // 0x1abe08: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe04) {
            ctx->pc = 0x1ABE64u;
            goto label_1abe64;
        }
    }
    ctx->pc = 0x1ABE0Cu;
    // 0x1abe0c: 0x0  nop
    ctx->pc = 0x1abe0cu;
    // NOP
label_1abe10:
    // 0x1abe10: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1abe10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1abe14: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1abe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1abe18: 0x5450000f  bnel        $v0, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ABE18u;
    {
        const bool branch_taken_0x1abe18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1abe18) {
            ctx->pc = 0x1ABE1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE18u;
            // 0x1abe1c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABE58u;
            goto label_1abe58;
        }
    }
    ctx->pc = 0x1ABE20u;
    // 0x1abe20: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1abe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1abe24: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1abe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1abe28: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x1abe28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1abe2c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1abe2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe30: 0x8c44ca0c  lw          $a0, -0x35F4($v0)
    ctx->pc = 0x1abe30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953484)));
    // 0x1abe34: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1abe34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1abe38: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1abe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1abe3c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1abe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1abe40: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1abe40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1abe44: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1abe44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1abe48: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1ABE48u;
    SET_GPR_U32(ctx, 31, 0x1ABE50u);
    ctx->pc = 0x1ABE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE48u;
            // 0x1abe4c: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE50u; }
        if (ctx->pc != 0x1ABE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE50u; }
        if (ctx->pc != 0x1ABE50u) { return; }
    }
    ctx->pc = 0x1ABE50u;
    // 0x1abe50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1ABE50u;
    {
        const bool branch_taken_0x1abe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE50u;
            // 0x1abe54: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe50) {
            ctx->pc = 0x1ABE68u;
            goto label_1abe68;
        }
    }
    ctx->pc = 0x1ABE58u;
label_1abe58:
    // 0x1abe58: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1abe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abe5c: 0x1443ffec  bne         $v0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1ABE5Cu;
    {
        const bool branch_taken_0x1abe5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ABE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE5Cu;
            // 0x1abe60: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe5c) {
            ctx->pc = 0x1ABE10u;
            runtime->cooperativeGuestYield();
            goto label_1abe10;
        }
    }
    ctx->pc = 0x1ABE64u;
label_1abe64:
    // 0x1abe64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1abe64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1abe68:
    // 0x1abe68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1abe68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abe6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE6Cu;
            // 0x1abe70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ABE74u;
    // 0x1abe74: 0x0  nop
    ctx->pc = 0x1abe74u;
    // NOP
    // 0x1abe78: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ABE80u;
    // 0x1abe80: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ABE88u;
    // 0x1abe88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abe88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1abe8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1abe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1abe90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abe94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1abe98: 0xc06a6b2  jal         func_1A9AC8
    ctx->pc = 0x1ABE98u;
    SET_GPR_U32(ctx, 31, 0x1ABEA0u);
    ctx->pc = 0x1ABE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE98u;
            // 0x1abe9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9AC8u;
    if (runtime->hasFunction(0x1A9AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABEA0u; }
        if (ctx->pc != 0x1ABEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9AC8_0x1a9ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABEA0u; }
        if (ctx->pc != 0x1ABEA0u) { return; }
    }
    ctx->pc = 0x1ABEA0u;
    // 0x1abea0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1ABEA0u;
    {
        const bool branch_taken_0x1abea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABEA0u;
            // 0x1abea4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abea0) {
            ctx->pc = 0x1ABEF0u;
            goto label_1abef0;
        }
    }
    ctx->pc = 0x1ABEA8u;
    // 0x1abea8: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x1abea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1abeac: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ABEACu;
    {
        const bool branch_taken_0x1abeac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ABEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABEACu;
            // 0x1abeb0: 0x261100b0  addiu       $s1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abeac) {
            ctx->pc = 0x1ABED4u;
            goto label_1abed4;
        }
    }
    ctx->pc = 0x1ABEB4u;
    // 0x1abeb4: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1abeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1abeb8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1abeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1abebc: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1abebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1abec0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1abec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1abec4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1abec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1abec8: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1ABEC8u;
    SET_GPR_U32(ctx, 31, 0x1ABED0u);
    ctx->pc = 0x1ABECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABEC8u;
            // 0x1abecc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABED0u; }
        if (ctx->pc != 0x1ABED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABED0u; }
        if (ctx->pc != 0x1ABED0u) { return; }
    }
    ctx->pc = 0x1ABED0u;
    // 0x1abed0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1abed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1abed4:
    // 0x1abed4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1abed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1abed8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ABED8u;
    {
        const bool branch_taken_0x1abed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abed8) {
            ctx->pc = 0x1ABEDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABED8u;
            // 0x1abedc: 0x8e030100  lw          $v1, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABEF8u;
            goto label_1abef8;
        }
    }
    ctx->pc = 0x1ABEE0u;
    // 0x1abee0: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x1abee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1abee4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1abee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1abee8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABEE8u;
    {
        const bool branch_taken_0x1abee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abee8) {
            ctx->pc = 0x1ABEECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABEE8u;
            // 0x1abeec: 0x8e030100  lw          $v1, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABEF8u;
            goto label_1abef8;
        }
    }
    ctx->pc = 0x1ABEF0u;
label_1abef0:
    // 0x1abef0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABEF0u;
    {
        const bool branch_taken_0x1abef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABEF0u;
            // 0x1abef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abef0) {
            ctx->pc = 0x1ABF04u;
            goto label_1abf04;
        }
    }
    ctx->pc = 0x1ABEF8u;
label_1abef8:
    // 0x1abef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1abef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abefc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1abefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1abf00: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x1abf00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_1abf04:
    // 0x1abf04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1abf04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abf08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abf08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abf0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abf0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abf10: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF10u;
            // 0x1abf14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ABF18u;
    // 0x1abf18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1abf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1abf1c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1abf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1abf20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1abf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1abf24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1abf24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf28: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1abf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1abf2c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1abf2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf30: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1abf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1abf34: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1abf34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf38: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1abf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1abf3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1abf40: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABF40u;
    {
        const bool branch_taken_0x1abf40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF40u;
            // 0x1abf44: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf40) {
            ctx->pc = 0x1ABF5Cu;
            goto label_1abf5c;
        }
    }
    ctx->pc = 0x1ABF48u;
    // 0x1abf48: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1abf48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x1abf4c: 0xc06a3bc  jal         func_1A8EF0
    ctx->pc = 0x1ABF4Cu;
    SET_GPR_U32(ctx, 31, 0x1ABF54u);
    ctx->pc = 0x1ABF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF4Cu;
            // 0x1abf50: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EF0u;
    if (runtime->hasFunction(0x1A8EF0u)) {
        auto targetFn = runtime->lookupFunction(0x1A8EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF54u; }
        if (ctx->pc != 0x1ABF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8EF0_0x1a8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF54u; }
        if (ctx->pc != 0x1ABF54u) { return; }
    }
    ctx->pc = 0x1ABF54u;
    // 0x1abf54: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1ABF54u;
    {
        const bool branch_taken_0x1abf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF54u;
            // 0x1abf58: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf54) {
            ctx->pc = 0x1AC0E4u;
            goto label_1ac0e4;
        }
    }
    ctx->pc = 0x1ABF5Cu;
label_1abf5c:
    // 0x1abf5c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1abf5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abf60: 0x16540025  bne         $s2, $s4, . + 4 + (0x25 << 2)
    ctx->pc = 0x1ABF60u;
    {
        const bool branch_taken_0x1abf60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x1ABF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF60u;
            // 0x1abf64: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf60) {
            ctx->pc = 0x1ABFF8u;
            goto label_1abff8;
        }
    }
    ctx->pc = 0x1ABF68u;
    // 0x1abf68: 0xc06a60e  jal         func_1A9838
    ctx->pc = 0x1ABF68u;
    SET_GPR_U32(ctx, 31, 0x1ABF70u);
    ctx->pc = 0x1ABF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF68u;
            // 0x1abf6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9838u;
    if (runtime->hasFunction(0x1A9838u)) {
        auto targetFn = runtime->lookupFunction(0x1A9838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF70u; }
        if (ctx->pc != 0x1ABF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9838_0x1a9838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF70u; }
        if (ctx->pc != 0x1ABF70u) { return; }
    }
    ctx->pc = 0x1ABF70u;
    // 0x1abf70: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1ABF70u;
    {
        const bool branch_taken_0x1abf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF70u;
            // 0x1abf74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf70) {
            ctx->pc = 0x1ABFC8u;
            goto label_1abfc8;
        }
    }
    ctx->pc = 0x1ABF78u;
    // 0x1abf78: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x1abf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x1abf7c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ABF7Cu;
    {
        const bool branch_taken_0x1abf7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ABF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF7Cu;
            // 0x1abf80: 0x263000c0  addiu       $s0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf7c) {
            ctx->pc = 0x1ABFA4u;
            goto label_1abfa4;
        }
    }
    ctx->pc = 0x1ABF84u;
    // 0x1abf84: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1abf84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1abf88: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1abf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1abf8c: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1abf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1abf90: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1abf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1abf94: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1abf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1abf98: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1ABF98u;
    SET_GPR_U32(ctx, 31, 0x1ABFA0u);
    ctx->pc = 0x1ABF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF98u;
            // 0x1abf9c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFA0u; }
        if (ctx->pc != 0x1ABFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFA0u; }
        if (ctx->pc != 0x1ABFA0u) { return; }
    }
    ctx->pc = 0x1ABFA0u;
    // 0x1abfa0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1abfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1abfa4:
    // 0x1abfa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1abfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1abfa8: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1ABFA8u;
    {
        const bool branch_taken_0x1abfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFA8u;
            // 0x1abfac: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfa8) {
            ctx->pc = 0x1AC0E0u;
            goto label_1ac0e0;
        }
    }
    ctx->pc = 0x1ABFB0u;
    // 0x1abfb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1abfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abfb4: 0xae12cad8  sw          $s2, -0x3528($s0)
    ctx->pc = 0x1abfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953688), GPR_U32(ctx, 18));
    // 0x1abfb8: 0xc06a416  jal         func_1A9058
    ctx->pc = 0x1ABFB8u;
    SET_GPR_U32(ctx, 31, 0x1ABFC0u);
    ctx->pc = 0x1ABFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFB8u;
            // 0x1abfbc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9058u;
    if (runtime->hasFunction(0x1A9058u)) {
        auto targetFn = runtime->lookupFunction(0x1A9058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFC0u; }
        if (ctx->pc != 0x1ABFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9058_0x1a9058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFC0u; }
        if (ctx->pc != 0x1ABFC0u) { return; }
    }
    ctx->pc = 0x1ABFC0u;
    // 0x1abfc0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1ABFC0u;
    {
        const bool branch_taken_0x1abfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFC0u;
            // 0x1abfc4: 0xae00cad8  sw          $zero, -0x3528($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294953688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfc0) {
            ctx->pc = 0x1AC0E0u;
            goto label_1ac0e0;
        }
    }
    ctx->pc = 0x1ABFC8u;
label_1abfc8:
    // 0x1abfc8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1abfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1abfcc: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x1abfccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1abfd0: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1abfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1abfd4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1abfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1abfd8: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1abfd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1abfdc: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1abfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1abfe0: 0x40f809  jalr        $v0
    ctx->pc = 0x1ABFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ABFE8u);
        ctx->pc = 0x1ABFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFE0u;
            // 0x1abfe4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ABFE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFE8u; }
            if (ctx->pc != 0x1ABFE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1ABFE8u;
    // 0x1abfe8: 0xc06995e  jal         func_1A6578
    ctx->pc = 0x1ABFE8u;
    SET_GPR_U32(ctx, 31, 0x1ABFF0u);
    ctx->pc = 0x1ABFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFE8u;
            // 0x1abfec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6578u;
    if (runtime->hasFunction(0x1A6578u)) {
        auto targetFn = runtime->lookupFunction(0x1A6578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFF0u; }
        if (ctx->pc != 0x1ABFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6578_0x1a6578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFF0u; }
        if (ctx->pc != 0x1ABFF0u) { return; }
    }
    ctx->pc = 0x1ABFF0u;
    // 0x1abff0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1ABFF0u;
    {
        const bool branch_taken_0x1abff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFF0u;
            // 0x1abff4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abff0) {
            ctx->pc = 0x1AC0E4u;
            goto label_1ac0e4;
        }
    }
    ctx->pc = 0x1ABFF8u;
label_1abff8:
    // 0x1abff8: 0x1642001a  bne         $s2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1ABFF8u;
    {
        const bool branch_taken_0x1abff8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ABFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFF8u;
            // 0x1abffc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abff8) {
            ctx->pc = 0x1AC064u;
            goto label_1ac064;
        }
    }
    ctx->pc = 0x1AC000u;
    // 0x1ac000: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x1ac000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1ac004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ac004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ac008: 0x12600035  beqz        $s3, . + 4 + (0x35 << 2)
    ctx->pc = 0x1AC008u;
    {
        const bool branch_taken_0x1ac008 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC008u;
            // 0x1ac00c: 0xae220104  sw          $v0, 0x104($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac008) {
            ctx->pc = 0x1AC0E0u;
            goto label_1ac0e0;
        }
    }
    ctx->pc = 0x1AC010u;
    // 0x1ac010: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x1ac010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x1ac014: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ac014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac018: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC018u;
    {
        const bool branch_taken_0x1ac018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC018u;
            // 0x1ac01c: 0x263000c8  addiu       $s0, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac018) {
            ctx->pc = 0x1AC040u;
            goto label_1ac040;
        }
    }
    ctx->pc = 0x1AC020u;
    // 0x1ac020: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ac020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ac024: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac028: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ac028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ac02c: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ac02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ac030: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac034: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC034u;
    SET_GPR_U32(ctx, 31, 0x1AC03Cu);
    ctx->pc = 0x1AC038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC034u;
            // 0x1ac038: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC03Cu; }
        if (ctx->pc != 0x1AC03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC03Cu; }
        if (ctx->pc != 0x1AC03Cu) { return; }
    }
    ctx->pc = 0x1AC03Cu;
    // 0x1ac03c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac040:
    // 0x1ac040: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ac040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ac044: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1AC044u;
    {
        const bool branch_taken_0x1ac044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC044u;
            // 0x1ac048: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac044) {
            ctx->pc = 0x1AC0E0u;
            goto label_1ac0e0;
        }
    }
    ctx->pc = 0x1AC04Cu;
    // 0x1ac04c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac050: 0xae14cadc  sw          $s4, -0x3524($s0)
    ctx->pc = 0x1ac050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953692), GPR_U32(ctx, 20));
    // 0x1ac054: 0xc06a416  jal         func_1A9058
    ctx->pc = 0x1AC054u;
    SET_GPR_U32(ctx, 31, 0x1AC05Cu);
    ctx->pc = 0x1AC058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC054u;
            // 0x1ac058: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9058u;
    if (runtime->hasFunction(0x1A9058u)) {
        auto targetFn = runtime->lookupFunction(0x1A9058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC05Cu; }
        if (ctx->pc != 0x1AC05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9058_0x1a9058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC05Cu; }
        if (ctx->pc != 0x1AC05Cu) { return; }
    }
    ctx->pc = 0x1AC05Cu;
    // 0x1ac05c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1AC05Cu;
    {
        const bool branch_taken_0x1ac05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC05Cu;
            // 0x1ac060: 0xae00cadc  sw          $zero, -0x3524($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294953692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac05c) {
            ctx->pc = 0x1AC0E0u;
            goto label_1ac0e0;
        }
    }
    ctx->pc = 0x1AC064u;
label_1ac064:
    // 0x1ac064: 0x16420016  bne         $s2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AC064u;
    {
        const bool branch_taken_0x1ac064 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC064u;
            // 0x1ac068: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac064) {
            ctx->pc = 0x1AC0C0u;
            goto label_1ac0c0;
        }
    }
    ctx->pc = 0x1AC06Cu;
    // 0x1ac06c: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x1ac06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac070: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ac070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ac074: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ac074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac078: 0x0  nop
    ctx->pc = 0x1ac078u;
    // NOP
    // 0x1ac07c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC07Cu;
    {
        const bool branch_taken_0x1ac07c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac07c) {
            ctx->pc = 0x1AC080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC07Cu;
            // 0x1ac080: 0x8e220100  lw          $v0, 0x100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC0A0u;
            goto label_1ac0a0;
        }
    }
    ctx->pc = 0x1AC084u;
    // 0x1ac084: 0xc06a6c6  jal         func_1A9B18
    ctx->pc = 0x1AC084u;
    SET_GPR_U32(ctx, 31, 0x1AC08Cu);
    ctx->pc = 0x1AC088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC084u;
            // 0x1ac088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B18u;
    if (runtime->hasFunction(0x1A9B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC08Cu; }
        if (ctx->pc != 0x1AC08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9B18_0x1a9b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC08Cu; }
        if (ctx->pc != 0x1AC08Cu) { return; }
    }
    ctx->pc = 0x1AC08Cu;
    // 0x1ac08c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ac08cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac090: 0x0  nop
    ctx->pc = 0x1ac090u;
    // NOP
    // 0x1ac094: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC094u;
    {
        const bool branch_taken_0x1ac094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac094) {
            ctx->pc = 0x1AC098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC094u;
            // 0x1ac098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC0A8u;
            goto label_1ac0a8;
        }
    }
    ctx->pc = 0x1AC09Cu;
    // 0x1ac09c: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x1ac09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_1ac0a0:
    // 0x1ac0a0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1AC0A0u;
    {
        const bool branch_taken_0x1ac0a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AC0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC0A0u;
            // 0x1ac0a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0a0) {
            ctx->pc = 0x1AC0E0u;
            goto label_1ac0e0;
        }
    }
    ctx->pc = 0x1AC0A8u;
label_1ac0a8:
    // 0x1ac0a8: 0xc48c0068  lwc1        $f12, 0x68($a0)
    ctx->pc = 0x1ac0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ac0ac: 0x94850100  lhu         $a1, 0x100($a0)
    ctx->pc = 0x1ac0acu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x1ac0b0: 0xc06c6da  jal         func_1B1B68
    ctx->pc = 0x1AC0B0u;
    SET_GPR_U32(ctx, 31, 0x1AC0B8u);
    ctx->pc = 0x1AC0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC0B0u;
            // 0x1ac0b4: 0x94860104  lhu         $a2, 0x104($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B68u;
    if (runtime->hasFunction(0x1B1B68u)) {
        auto targetFn = runtime->lookupFunction(0x1B1B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC0B8u; }
        if (ctx->pc != 0x1AC0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1B68_0x1b1b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC0B8u; }
        if (ctx->pc != 0x1AC0B8u) { return; }
    }
    ctx->pc = 0x1AC0B8u;
    // 0x1ac0b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AC0B8u;
    {
        const bool branch_taken_0x1ac0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC0B8u;
            // 0x1ac0bc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0b8) {
            ctx->pc = 0x1AC0E4u;
            goto label_1ac0e4;
        }
    }
    ctx->pc = 0x1AC0C0u;
label_1ac0c0:
    // 0x1ac0c0: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC0C0u;
    {
        const bool branch_taken_0x1ac0c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC0C0u;
            // 0x1ac0c4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0c0) {
            ctx->pc = 0x1AC0E4u;
            goto label_1ac0e4;
        }
    }
    ctx->pc = 0x1AC0C8u;
    // 0x1ac0c8: 0x96620014  lhu         $v0, 0x14($s3)
    ctx->pc = 0x1ac0c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1ac0cc: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1ac0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac0d0: 0x96630012  lhu         $v1, 0x12($s3)
    ctx->pc = 0x1ac0d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x1ac0d4: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x1ac0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
    // 0x1ac0d8: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x1ac0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x1ac0dc: 0xae230100  sw          $v1, 0x100($s1)
    ctx->pc = 0x1ac0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 3));
label_1ac0e0:
    // 0x1ac0e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ac0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ac0e4:
    // 0x1ac0e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ac0e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac0e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ac0e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac0ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ac0ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac0f0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1ac0f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac0f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac0f8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1ac0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ac0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC0FCu;
            // 0x1ac100: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AC104u;
    // 0x1ac104: 0x0  nop
    ctx->pc = 0x1ac104u;
    // NOP
    // 0x1ac108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac10c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac118: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1ac118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1ac11c: 0x84430030  lh          $v1, 0x30($v0)
    ctx->pc = 0x1ac11cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ac120: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1ac120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1ac124: 0x40f809  jalr        $v0
    ctx->pc = 0x1AC124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC12Cu);
        ctx->pc = 0x1AC128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC124u;
            // 0x1ac128: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AC12Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AC12Cu; }
            if (ctx->pc != 0x1AC12Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1AC12Cu;
    // 0x1ac12c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac130: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC130u;
            // 0x1ac134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AC138u;
    // 0x1ac138: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1ac138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1ac13c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1ac13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1ac140: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1ac140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1ac144: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1ac144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1ac148: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1ac148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac14c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1ac14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1ac150: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ac150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac154: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1ac154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1ac158: 0x8e6300d0  lw          $v1, 0xD0($s3)
    ctx->pc = 0x1ac158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x1ac15c: 0x10710009  beq         $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC15Cu;
    {
        const bool branch_taken_0x1ac15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1AC160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC15Cu;
            // 0x1ac160: 0x267000d0  addiu       $s0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac15c) {
            ctx->pc = 0x1AC184u;
            goto label_1ac184;
        }
    }
    ctx->pc = 0x1AC164u;
    // 0x1ac164: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x1ac164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1ac168: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac16c: 0xac53cac8  sw          $s3, -0x3538($v0)
    ctx->pc = 0x1ac16cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 19));
    // 0x1ac170: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x1ac170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x1ac174: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac178: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC178u;
    SET_GPR_U32(ctx, 31, 0x1AC180u);
    ctx->pc = 0x1AC17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC178u;
            // 0x1ac17c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC180u; }
        if (ctx->pc != 0x1AC180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC180u; }
        if (ctx->pc != 0x1AC180u) { return; }
    }
    ctx->pc = 0x1AC180u;
    // 0x1ac180: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac184:
    // 0x1ac184: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ac184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ac188: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1ac188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ac18c: 0x1860006b  blez        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x1AC18Cu;
    {
        const bool branch_taken_0x1ac18c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AC190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC18Cu;
            // 0x1ac190: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac18c) {
            ctx->pc = 0x1AC33Cu;
            goto label_1ac33c;
        }
    }
    ctx->pc = 0x1AC194u;
    // 0x1ac194: 0x8e6300e8  lw          $v1, 0xE8($s3)
    ctx->pc = 0x1ac194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x1ac198: 0x10710009  beq         $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC198u;
    {
        const bool branch_taken_0x1ac198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1AC19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC198u;
            // 0x1ac19c: 0x267000e8  addiu       $s0, $s3, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac198) {
            ctx->pc = 0x1AC1C0u;
            goto label_1ac1c0;
        }
    }
    ctx->pc = 0x1AC1A0u;
    // 0x1ac1a0: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x1ac1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1ac1a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac1a8: 0xac53cac8  sw          $s3, -0x3538($v0)
    ctx->pc = 0x1ac1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 19));
    // 0x1ac1ac: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x1ac1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x1ac1b0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac1b4: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC1B4u;
    SET_GPR_U32(ctx, 31, 0x1AC1BCu);
    ctx->pc = 0x1AC1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1B4u;
            // 0x1ac1b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1BCu; }
        if (ctx->pc != 0x1AC1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1BCu; }
        if (ctx->pc != 0x1AC1BCu) { return; }
    }
    ctx->pc = 0x1AC1BCu;
    // 0x1ac1bc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac1c0:
    // 0x1ac1c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ac1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ac1c4: 0x8e6300d8  lw          $v1, 0xD8($s3)
    ctx->pc = 0x1ac1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x1ac1c8: 0x267000d8  addiu       $s0, $s3, 0xD8
    ctx->pc = 0x1ac1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 216));
    // 0x1ac1cc: 0x10710009  beq         $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC1CCu;
    {
        const bool branch_taken_0x1ac1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1AC1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1CCu;
            // 0x1ac1d0: 0xa7a20006  sh          $v0, 0x6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1cc) {
            ctx->pc = 0x1AC1F4u;
            goto label_1ac1f4;
        }
    }
    ctx->pc = 0x1AC1D4u;
    // 0x1ac1d4: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x1ac1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1ac1d8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac1dc: 0xac53cac8  sw          $s3, -0x3538($v0)
    ctx->pc = 0x1ac1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 19));
    // 0x1ac1e0: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x1ac1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x1ac1e4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac1e8: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC1E8u;
    SET_GPR_U32(ctx, 31, 0x1AC1F0u);
    ctx->pc = 0x1AC1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1E8u;
            // 0x1ac1ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1F0u; }
        if (ctx->pc != 0x1AC1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1F0u; }
        if (ctx->pc != 0x1AC1F0u) { return; }
    }
    ctx->pc = 0x1AC1F0u;
    // 0x1ac1f0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac1f4:
    // 0x1ac1f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ac1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ac1f8: 0x8e6300e0  lw          $v1, 0xE0($s3)
    ctx->pc = 0x1ac1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x1ac1fc: 0x267000e0  addiu       $s0, $s3, 0xE0
    ctx->pc = 0x1ac1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    // 0x1ac200: 0x10710009  beq         $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC200u;
    {
        const bool branch_taken_0x1ac200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1AC204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC200u;
            // 0x1ac204: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac200) {
            ctx->pc = 0x1AC228u;
            goto label_1ac228;
        }
    }
    ctx->pc = 0x1AC208u;
    // 0x1ac208: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x1ac208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1ac20c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac210: 0xac53cac8  sw          $s3, -0x3538($v0)
    ctx->pc = 0x1ac210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 19));
    // 0x1ac214: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x1ac214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x1ac218: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac21c: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC21Cu;
    SET_GPR_U32(ctx, 31, 0x1AC224u);
    ctx->pc = 0x1AC220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC21Cu;
            // 0x1ac220: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC224u; }
        if (ctx->pc != 0x1AC224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC224u; }
        if (ctx->pc != 0x1AC224u) { return; }
    }
    ctx->pc = 0x1AC224u;
    // 0x1ac224: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac228:
    // 0x1ac228: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ac228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ac22c: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x1ac22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x1ac230: 0x267000f0  addiu       $s0, $s3, 0xF0
    ctx->pc = 0x1ac230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
    // 0x1ac234: 0x10710009  beq         $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC234u;
    {
        const bool branch_taken_0x1ac234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1AC238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC234u;
            // 0x1ac238: 0xa7a20004  sh          $v0, 0x4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac234) {
            ctx->pc = 0x1AC25Cu;
            goto label_1ac25c;
        }
    }
    ctx->pc = 0x1AC23Cu;
    // 0x1ac23c: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x1ac23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1ac240: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac244: 0xac53cac8  sw          $s3, -0x3538($v0)
    ctx->pc = 0x1ac244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 19));
    // 0x1ac248: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x1ac248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x1ac24c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac250: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC250u;
    SET_GPR_U32(ctx, 31, 0x1AC258u);
    ctx->pc = 0x1AC254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC250u;
            // 0x1ac254: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC258u; }
        if (ctx->pc != 0x1AC258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC258u; }
        if (ctx->pc != 0x1AC258u) { return; }
    }
    ctx->pc = 0x1AC258u;
    // 0x1ac258: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac25c:
    // 0x1ac25c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ac25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ac260: 0x8e6300f8  lw          $v1, 0xF8($s3)
    ctx->pc = 0x1ac260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x1ac264: 0x267000f8  addiu       $s0, $s3, 0xF8
    ctx->pc = 0x1ac264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 248));
    // 0x1ac268: 0xa7a20008  sh          $v0, 0x8($sp)
    ctx->pc = 0x1ac268u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ac26c: 0x10710009  beq         $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC26Cu;
    {
        const bool branch_taken_0x1ac26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1AC270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC26Cu;
            // 0x1ac270: 0xa7b1000a  sh          $s1, 0xA($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac26c) {
            ctx->pc = 0x1AC294u;
            goto label_1ac294;
        }
    }
    ctx->pc = 0x1AC274u;
    // 0x1ac274: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x1ac274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1ac278: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac27c: 0xac53cac8  sw          $s3, -0x3538($v0)
    ctx->pc = 0x1ac27cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 19));
    // 0x1ac280: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x1ac280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x1ac284: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac288: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC288u;
    SET_GPR_U32(ctx, 31, 0x1AC290u);
    ctx->pc = 0x1AC28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC288u;
            // 0x1ac28c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC290u; }
        if (ctx->pc != 0x1AC290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC290u; }
        if (ctx->pc != 0x1AC290u) { return; }
    }
    ctx->pc = 0x1AC290u;
    // 0x1ac290: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac294:
    // 0x1ac294: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1ac294u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ac298: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1AC298u;
    {
        const bool branch_taken_0x1ac298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC298u;
            // 0x1ac29c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac298) {
            ctx->pc = 0x1AC2D8u;
            goto label_1ac2d8;
        }
    }
    ctx->pc = 0x1AC2A0u;
    // 0x1ac2a0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1ac2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1ac2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac2a8: 0x24a54228  addiu       $a1, $a1, 0x4228
    ctx->pc = 0x1ac2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16936));
    // 0x1ac2ac: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x1AC2ACu;
    SET_GPR_U32(ctx, 31, 0x1AC2B4u);
    ctx->pc = 0x1AC2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2ACu;
            // 0x1ac2b0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2B4u; }
        if (ctx->pc != 0x1AC2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2B4u; }
        if (ctx->pc != 0x1AC2B4u) { return; }
    }
    ctx->pc = 0x1AC2B4u;
    // 0x1ac2b4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC2B4u;
    {
        const bool branch_taken_0x1ac2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2B4u;
            // 0x1ac2b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2b4) {
            ctx->pc = 0x1AC2D8u;
            goto label_1ac2d8;
        }
    }
    ctx->pc = 0x1AC2BCu;
    // 0x1ac2bc: 0x26040006  addiu       $a0, $s0, 0x6
    ctx->pc = 0x1ac2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x1ac2c0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1ac2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ac2c4: 0xc0a441e  jal         func_291078
    ctx->pc = 0x1AC2C4u;
    SET_GPR_U32(ctx, 31, 0x1AC2CCu);
    ctx->pc = 0x1AC2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2C4u;
            // 0x1ac2c8: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291078u;
    if (runtime->hasFunction(0x291078u)) {
        auto targetFn = runtime->lookupFunction(0x291078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2CCu; }
        if (ctx->pc != 0x1AC2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_291078_0x2910b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2CCu; }
        if (ctx->pc != 0x1AC2CCu) { return; }
    }
    ctx->pc = 0x1AC2CCu;
    // 0x1ac2cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ac2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ac2d0: 0xa7a2000a  sh          $v0, 0xA($sp)
    ctx->pc = 0x1ac2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ac2d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac2d8:
    // 0x1ac2d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ac2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac2dc: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x1ac2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ac2e0: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x1ac2e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ac2e4: 0xa3a3000e  sb          $v1, 0xE($sp)
    ctx->pc = 0x1ac2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ac2e8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1ac2e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ac2ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ac2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac2f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ac2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac2f4: 0xc06a576  jal         func_1A95D8
    ctx->pc = 0x1AC2F4u;
    SET_GPR_U32(ctx, 31, 0x1AC2FCu);
    ctx->pc = 0x1AC2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2F4u;
            // 0x1ac2f8: 0x96710042  lhu         $s1, 0x42($s3) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 66)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A95D8u;
    if (runtime->hasFunction(0x1A95D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A95D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2FCu; }
        if (ctx->pc != 0x1AC2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A95D8_0x1a95d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2FCu; }
        if (ctx->pc != 0x1AC2FCu) { return; }
    }
    ctx->pc = 0x1AC2FCu;
    // 0x1ac2fc: 0xc06a732  jal         func_1A9CC8
    ctx->pc = 0x1AC2FCu;
    SET_GPR_U32(ctx, 31, 0x1AC304u);
    ctx->pc = 0x1AC300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2FCu;
            // 0x1ac300: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9CC8u;
    if (runtime->hasFunction(0x1A9CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC304u; }
        if (ctx->pc != 0x1AC304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9CC8_0x1a9cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC304u; }
        if (ctx->pc != 0x1AC304u) { return; }
    }
    ctx->pc = 0x1AC304u;
    // 0x1ac304: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1ac304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac308: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x1ac308u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ac30c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ac30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac310: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ac310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac314: 0xc0691ae  jal         func_1A46B8
    ctx->pc = 0x1AC314u;
    SET_GPR_U32(ctx, 31, 0x1AC31Cu);
    ctx->pc = 0x1AC318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC314u;
            // 0x1ac318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A46B8u;
    if (runtime->hasFunction(0x1A46B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A46B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC31Cu; }
        if (ctx->pc != 0x1AC31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A46B8_0x1a46b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC31Cu; }
        if (ctx->pc != 0x1AC31Cu) { return; }
    }
    ctx->pc = 0x1AC31Cu;
    // 0x1ac31c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ac31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac324: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac328: 0xc0691e4  jal         func_1A4790
    ctx->pc = 0x1AC328u;
    SET_GPR_U32(ctx, 31, 0x1AC330u);
    ctx->pc = 0x1AC32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC328u;
            // 0x1ac32c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4790u;
    if (runtime->hasFunction(0x1A4790u)) {
        auto targetFn = runtime->lookupFunction(0x1A4790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC330u; }
        if (ctx->pc != 0x1AC330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4790_0x1a4790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC330u; }
        if (ctx->pc != 0x1AC330u) { return; }
    }
    ctx->pc = 0x1AC330u;
    // 0x1ac330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac334: 0xc090904  jal         func_242410
    ctx->pc = 0x1AC334u;
    SET_GPR_U32(ctx, 31, 0x1AC33Cu);
    ctx->pc = 0x1AC338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC334u;
            // 0x1ac338: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242410u;
    if (runtime->hasFunction(0x242410u)) {
        auto targetFn = runtime->lookupFunction(0x242410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC33Cu; }
        if (ctx->pc != 0x1AC33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242410_0x242410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC33Cu; }
        if (ctx->pc != 0x1AC33Cu) { return; }
    }
    ctx->pc = 0x1AC33Cu;
label_1ac33c:
    // 0x1ac33c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1ac33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ac340: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1ac340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ac344: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1ac344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ac348: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1ac348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ac34c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1ac34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ac350: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC350u;
            // 0x1ac354: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AC358u;
    // 0x1ac358: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ac358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ac35c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ac35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ac360: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ac360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ac364: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac368: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ac368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1ac36c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ac36cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac370: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ac370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ac374: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ac374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac378: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1ac378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1ac37c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac380: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AC380u;
    {
        const bool branch_taken_0x1ac380 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC380u;
            // 0x1ac384: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac380) {
            ctx->pc = 0x1AC39Cu;
            goto label_1ac39c;
        }
    }
    ctx->pc = 0x1AC388u;
    // 0x1ac388: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1ac388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x1ac38c: 0xc06a3bc  jal         func_1A8EF0
    ctx->pc = 0x1AC38Cu;
    SET_GPR_U32(ctx, 31, 0x1AC394u);
    ctx->pc = 0x1AC390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC38Cu;
            // 0x1ac390: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EF0u;
    if (runtime->hasFunction(0x1A8EF0u)) {
        auto targetFn = runtime->lookupFunction(0x1A8EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC394u; }
        if (ctx->pc != 0x1AC394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8EF0_0x1a8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC394u; }
        if (ctx->pc != 0x1AC394u) { return; }
    }
    ctx->pc = 0x1AC394u;
    // 0x1ac394: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1AC394u;
    {
        const bool branch_taken_0x1ac394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC394u;
            // 0x1ac398: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac394) {
            ctx->pc = 0x1AC540u;
            goto label_1ac540;
        }
    }
    ctx->pc = 0x1AC39Cu;
label_1ac39c:
    // 0x1ac39c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1ac39cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac3a0: 0x16540025  bne         $s2, $s4, . + 4 + (0x25 << 2)
    ctx->pc = 0x1AC3A0u;
    {
        const bool branch_taken_0x1ac3a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x1AC3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3A0u;
            // 0x1ac3a4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3a0) {
            ctx->pc = 0x1AC438u;
            goto label_1ac438;
        }
    }
    ctx->pc = 0x1AC3A8u;
    // 0x1ac3a8: 0xc06a60e  jal         func_1A9838
    ctx->pc = 0x1AC3A8u;
    SET_GPR_U32(ctx, 31, 0x1AC3B0u);
    ctx->pc = 0x1AC3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3A8u;
            // 0x1ac3ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9838u;
    if (runtime->hasFunction(0x1A9838u)) {
        auto targetFn = runtime->lookupFunction(0x1A9838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3B0u; }
        if (ctx->pc != 0x1AC3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9838_0x1a9838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3B0u; }
        if (ctx->pc != 0x1AC3B0u) { return; }
    }
    ctx->pc = 0x1AC3B0u;
    // 0x1ac3b0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AC3B0u;
    {
        const bool branch_taken_0x1ac3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3B0u;
            // 0x1ac3b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3b0) {
            ctx->pc = 0x1AC408u;
            goto label_1ac408;
        }
    }
    ctx->pc = 0x1AC3B8u;
    // 0x1ac3b8: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1ac3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ac3bc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC3BCu;
    {
        const bool branch_taken_0x1ac3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3BCu;
            // 0x1ac3c0: 0x263000f0  addiu       $s0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3bc) {
            ctx->pc = 0x1AC3E4u;
            goto label_1ac3e4;
        }
    }
    ctx->pc = 0x1AC3C4u;
    // 0x1ac3c4: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ac3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ac3c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac3cc: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ac3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ac3d0: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ac3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ac3d4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac3d8: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC3D8u;
    SET_GPR_U32(ctx, 31, 0x1AC3E0u);
    ctx->pc = 0x1AC3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3D8u;
            // 0x1ac3dc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3E0u; }
        if (ctx->pc != 0x1AC3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3E0u; }
        if (ctx->pc != 0x1AC3E0u) { return; }
    }
    ctx->pc = 0x1AC3E0u;
    // 0x1ac3e0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac3e4:
    // 0x1ac3e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ac3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ac3e8: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1AC3E8u;
    {
        const bool branch_taken_0x1ac3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3E8u;
            // 0x1ac3ec: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3e8) {
            ctx->pc = 0x1AC53Cu;
            goto label_1ac53c;
        }
    }
    ctx->pc = 0x1AC3F0u;
    // 0x1ac3f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac3f4: 0xae12cad8  sw          $s2, -0x3528($s0)
    ctx->pc = 0x1ac3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953688), GPR_U32(ctx, 18));
    // 0x1ac3f8: 0xc06a416  jal         func_1A9058
    ctx->pc = 0x1AC3F8u;
    SET_GPR_U32(ctx, 31, 0x1AC400u);
    ctx->pc = 0x1AC3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3F8u;
            // 0x1ac3fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9058u;
    if (runtime->hasFunction(0x1A9058u)) {
        auto targetFn = runtime->lookupFunction(0x1A9058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC400u; }
        if (ctx->pc != 0x1AC400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9058_0x1a9058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC400u; }
        if (ctx->pc != 0x1AC400u) { return; }
    }
    ctx->pc = 0x1AC400u;
    // 0x1ac400: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1AC400u;
    {
        const bool branch_taken_0x1ac400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC400u;
            // 0x1ac404: 0xae00cad8  sw          $zero, -0x3528($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294953688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac400) {
            ctx->pc = 0x1AC53Cu;
            goto label_1ac53c;
        }
    }
    ctx->pc = 0x1AC408u;
label_1ac408:
    // 0x1ac408: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ac408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ac40c: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x1ac40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1ac410: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1ac410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1ac414: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ac414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ac418: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1ac418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1ac41c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1ac41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1ac420: 0x40f809  jalr        $v0
    ctx->pc = 0x1AC420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC428u);
        ctx->pc = 0x1AC424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC420u;
            // 0x1ac424: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AC428u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AC428u; }
            if (ctx->pc != 0x1AC428u) { return; }
        }
        }
    }
    ctx->pc = 0x1AC428u;
    // 0x1ac428: 0xc06995e  jal         func_1A6578
    ctx->pc = 0x1AC428u;
    SET_GPR_U32(ctx, 31, 0x1AC430u);
    ctx->pc = 0x1AC42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC428u;
            // 0x1ac42c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6578u;
    if (runtime->hasFunction(0x1A6578u)) {
        auto targetFn = runtime->lookupFunction(0x1A6578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC430u; }
        if (ctx->pc != 0x1AC430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6578_0x1a6578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC430u; }
        if (ctx->pc != 0x1AC430u) { return; }
    }
    ctx->pc = 0x1AC430u;
    // 0x1ac430: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1AC430u;
    {
        const bool branch_taken_0x1ac430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC430u;
            // 0x1ac434: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac430) {
            ctx->pc = 0x1AC540u;
            goto label_1ac540;
        }
    }
    ctx->pc = 0x1AC438u;
label_1ac438:
    // 0x1ac438: 0x16420017  bne         $s2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1AC438u;
    {
        const bool branch_taken_0x1ac438 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC438u;
            // 0x1ac43c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac438) {
            ctx->pc = 0x1AC498u;
            goto label_1ac498;
        }
    }
    ctx->pc = 0x1AC440u;
    // 0x1ac440: 0x1260003e  beqz        $s3, . + 4 + (0x3E << 2)
    ctx->pc = 0x1AC440u;
    {
        const bool branch_taken_0x1ac440 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC440u;
            // 0x1ac444: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac440) {
            ctx->pc = 0x1AC53Cu;
            goto label_1ac53c;
        }
    }
    ctx->pc = 0x1AC448u;
    // 0x1ac448: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x1ac448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x1ac44c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC44Cu;
    {
        const bool branch_taken_0x1ac44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC44Cu;
            // 0x1ac450: 0x263000f8  addiu       $s0, $s1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac44c) {
            ctx->pc = 0x1AC474u;
            goto label_1ac474;
        }
    }
    ctx->pc = 0x1AC454u;
    // 0x1ac454: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ac454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ac458: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac45c: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ac45cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ac460: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ac460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ac464: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac468: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC468u;
    SET_GPR_U32(ctx, 31, 0x1AC470u);
    ctx->pc = 0x1AC46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC468u;
            // 0x1ac46c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC470u; }
        if (ctx->pc != 0x1AC470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC470u; }
        if (ctx->pc != 0x1AC470u) { return; }
    }
    ctx->pc = 0x1AC470u;
    // 0x1ac470: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac474:
    // 0x1ac474: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ac474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ac478: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1AC478u;
    {
        const bool branch_taken_0x1ac478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC478u;
            // 0x1ac47c: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac478) {
            ctx->pc = 0x1AC53Cu;
            goto label_1ac53c;
        }
    }
    ctx->pc = 0x1AC480u;
    // 0x1ac480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac484: 0xae14cadc  sw          $s4, -0x3524($s0)
    ctx->pc = 0x1ac484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953692), GPR_U32(ctx, 20));
    // 0x1ac488: 0xc06a416  jal         func_1A9058
    ctx->pc = 0x1AC488u;
    SET_GPR_U32(ctx, 31, 0x1AC490u);
    ctx->pc = 0x1AC48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC488u;
            // 0x1ac48c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9058u;
    if (runtime->hasFunction(0x1A9058u)) {
        auto targetFn = runtime->lookupFunction(0x1A9058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC490u; }
        if (ctx->pc != 0x1AC490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9058_0x1a9058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC490u; }
        if (ctx->pc != 0x1AC490u) { return; }
    }
    ctx->pc = 0x1AC490u;
    // 0x1ac490: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1AC490u;
    {
        const bool branch_taken_0x1ac490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC490u;
            // 0x1ac494: 0xae00cadc  sw          $zero, -0x3524($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294953692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac490) {
            ctx->pc = 0x1AC53Cu;
            goto label_1ac53c;
        }
    }
    ctx->pc = 0x1AC498u;
label_1ac498:
    // 0x1ac498: 0x16420022  bne         $s2, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1AC498u;
    {
        const bool branch_taken_0x1ac498 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC498u;
            // 0x1ac49c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac498) {
            ctx->pc = 0x1AC524u;
            goto label_1ac524;
        }
    }
    ctx->pc = 0x1AC4A0u;
    // 0x1ac4a0: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x1ac4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac4a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ac4a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ac4a8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ac4a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac4ac: 0x0  nop
    ctx->pc = 0x1ac4acu;
    // NOP
    // 0x1ac4b0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC4B0u;
    {
        const bool branch_taken_0x1ac4b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac4b0) {
            ctx->pc = 0x1AC4B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC4B0u;
            // 0x1ac4b4: 0x8e2300e8  lw          $v1, 0xE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC4D4u;
            goto label_1ac4d4;
        }
    }
    ctx->pc = 0x1AC4B8u;
    // 0x1ac4b8: 0xc06a6c6  jal         func_1A9B18
    ctx->pc = 0x1AC4B8u;
    SET_GPR_U32(ctx, 31, 0x1AC4C0u);
    ctx->pc = 0x1AC4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC4B8u;
            // 0x1ac4bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B18u;
    if (runtime->hasFunction(0x1A9B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC4C0u; }
        if (ctx->pc != 0x1AC4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9B18_0x1a9b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC4C0u; }
        if (ctx->pc != 0x1AC4C0u) { return; }
    }
    ctx->pc = 0x1AC4C0u;
    // 0x1ac4c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ac4c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac4c4: 0x0  nop
    ctx->pc = 0x1ac4c4u;
    // NOP
    // 0x1ac4c8: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x1AC4C8u;
    {
        const bool branch_taken_0x1ac4c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac4c8) {
            ctx->pc = 0x1AC4CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC4C8u;
            // 0x1ac4cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC50Cu;
            goto label_1ac50c;
        }
    }
    ctx->pc = 0x1AC4D0u;
    // 0x1ac4d0: 0x8e2300e8  lw          $v1, 0xE8($s1)
    ctx->pc = 0x1ac4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_1ac4d4:
    // 0x1ac4d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ac4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac4d8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC4D8u;
    {
        const bool branch_taken_0x1ac4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC4D8u;
            // 0x1ac4dc: 0x263000e8  addiu       $s0, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac4d8) {
            ctx->pc = 0x1AC500u;
            goto label_1ac500;
        }
    }
    ctx->pc = 0x1AC4E0u;
    // 0x1ac4e0: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ac4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ac4e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac4e8: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ac4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ac4ec: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ac4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ac4f0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac4f4: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC4F4u;
    SET_GPR_U32(ctx, 31, 0x1AC4FCu);
    ctx->pc = 0x1AC4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC4F4u;
            // 0x1ac4f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC4FCu; }
        if (ctx->pc != 0x1AC4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC4FCu; }
        if (ctx->pc != 0x1AC4FCu) { return; }
    }
    ctx->pc = 0x1AC4FCu;
    // 0x1ac4fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac500:
    // 0x1ac500: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ac500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ac504: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AC504u;
    {
        const bool branch_taken_0x1ac504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC504u;
            // 0x1ac508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac504) {
            ctx->pc = 0x1AC53Cu;
            goto label_1ac53c;
        }
    }
    ctx->pc = 0x1AC50Cu;
label_1ac50c:
    // 0x1ac50c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac50cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac510: 0xc48c0068  lwc1        $f12, 0x68($a0)
    ctx->pc = 0x1ac510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ac514: 0xc06c6da  jal         func_1B1B68
    ctx->pc = 0x1AC514u;
    SET_GPR_U32(ctx, 31, 0x1AC51Cu);
    ctx->pc = 0x1AC518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC514u;
            // 0x1ac518: 0x94850108  lhu         $a1, 0x108($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 264)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B68u;
    if (runtime->hasFunction(0x1B1B68u)) {
        auto targetFn = runtime->lookupFunction(0x1B1B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC51Cu; }
        if (ctx->pc != 0x1AC51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1B68_0x1b1b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC51Cu; }
        if (ctx->pc != 0x1AC51Cu) { return; }
    }
    ctx->pc = 0x1AC51Cu;
    // 0x1ac51c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC51Cu;
    {
        const bool branch_taken_0x1ac51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC51Cu;
            // 0x1ac520: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac51c) {
            ctx->pc = 0x1AC540u;
            goto label_1ac540;
        }
    }
    ctx->pc = 0x1AC524u;
label_1ac524:
    // 0x1ac524: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AC524u;
    {
        const bool branch_taken_0x1ac524 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC524u;
            // 0x1ac528: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac524) {
            ctx->pc = 0x1AC540u;
            goto label_1ac540;
        }
    }
    ctx->pc = 0x1AC52Cu;
    // 0x1ac52c: 0x96620012  lhu         $v0, 0x12($s3)
    ctx->pc = 0x1ac52cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x1ac530: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1ac530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac534: 0xae220108  sw          $v0, 0x108($s1)
    ctx->pc = 0x1ac534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 2));
    // 0x1ac538: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x1ac538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_1ac53c:
    // 0x1ac53c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ac53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ac540:
    // 0x1ac540: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ac540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac544: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ac544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac548: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ac548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac54c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1ac54cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac554: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1ac554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ac558: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC558u;
            // 0x1ac55c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AC560u;
    // 0x1ac560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac56c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac570: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1ac570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1ac574: 0x84430030  lh          $v1, 0x30($v0)
    ctx->pc = 0x1ac574u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ac578: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1ac578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1ac57c: 0x40f809  jalr        $v0
    ctx->pc = 0x1AC57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC584u);
        ctx->pc = 0x1AC580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC57Cu;
            // 0x1ac580: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AC584u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AC584u; }
            if (ctx->pc != 0x1AC584u) { return; }
        }
        }
    }
    ctx->pc = 0x1AC584u;
    // 0x1ac584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac588: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC588u;
            // 0x1ac58c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AC590u;
    // 0x1ac590: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1ac590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x1ac594: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ac594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac598: 0x7fb00280  sq          $s0, 0x280($sp)
    ctx->pc = 0x1ac598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 16));
    // 0x1ac59c: 0x7fb10270  sq          $s1, 0x270($sp)
    ctx->pc = 0x1ac59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 17));
    // 0x1ac5a0: 0x7fb20260  sq          $s2, 0x260($sp)
    ctx->pc = 0x1ac5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 18));
    // 0x1ac5a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac5a8: 0x7fb30250  sq          $s3, 0x250($sp)
    ctx->pc = 0x1ac5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 19));
    // 0x1ac5ac: 0x7fb40240  sq          $s4, 0x240($sp)
    ctx->pc = 0x1ac5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 20));
    // 0x1ac5b0: 0x7fb50230  sq          $s5, 0x230($sp)
    ctx->pc = 0x1ac5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 21));
    // 0x1ac5b4: 0x7fb60220  sq          $s6, 0x220($sp)
    ctx->pc = 0x1ac5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 22));
    // 0x1ac5b8: 0x7fb70210  sq          $s7, 0x210($sp)
    ctx->pc = 0x1ac5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 23));
    // 0x1ac5bc: 0x7fbe0200  sq          $fp, 0x200($sp)
    ctx->pc = 0x1ac5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 30));
    // 0x1ac5c0: 0xffbf01f0  sd          $ra, 0x1F0($sp)
    ctx->pc = 0x1ac5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 31));
    // 0x1ac5c4: 0x8e2300e8  lw          $v1, 0xE8($s1)
    ctx->pc = 0x1ac5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x1ac5c8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC5C8u;
    {
        const bool branch_taken_0x1ac5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC5C8u;
            // 0x1ac5cc: 0x263000e8  addiu       $s0, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac5c8) {
            ctx->pc = 0x1AC5F0u;
            goto label_1ac5f0;
        }
    }
    ctx->pc = 0x1AC5D0u;
    // 0x1ac5d0: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ac5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ac5d4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac5d8: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ac5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ac5dc: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ac5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ac5e0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac5e4: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC5E4u;
    SET_GPR_U32(ctx, 31, 0x1AC5ECu);
    ctx->pc = 0x1AC5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC5E4u;
            // 0x1ac5e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5ECu; }
        if (ctx->pc != 0x1AC5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5ECu; }
        if (ctx->pc != 0x1AC5ECu) { return; }
    }
    ctx->pc = 0x1AC5ECu;
    // 0x1ac5ec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac5f0:
    // 0x1ac5f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ac5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ac5f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC5F4u;
    {
        const bool branch_taken_0x1ac5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC5F4u;
            // 0x1ac5f8: 0x8e220108  lw          $v0, 0x108($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac5f4) {
            ctx->pc = 0x1AC60Cu;
            goto label_1ac60c;
        }
    }
    ctx->pc = 0x1AC5FCu;
    // 0x1ac5fc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ac5fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ac600: 0x104000f2  beqz        $v0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x1AC600u;
    {
        const bool branch_taken_0x1ac600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC600u;
            // 0x1ac604: 0x7bb00280  lq          $s0, 0x280($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac600) {
            ctx->pc = 0x1AC9CCu;
            goto label_1ac9cc;
        }
    }
    ctx->pc = 0x1AC608u;
    // 0x1ac608: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x1ac608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_1ac60c:
    // 0x1ac60c: 0x263000c0  addiu       $s0, $s1, 0xC0
    ctx->pc = 0x1ac60cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x1ac610: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x1ac610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x1ac614: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ac614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac618: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ac618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ac61c: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC61Cu;
    {
        const bool branch_taken_0x1ac61c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1AC620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC61Cu;
            // 0x1ac620: 0xae220108  sw          $v0, 0x108($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac61c) {
            ctx->pc = 0x1AC644u;
            goto label_1ac644;
        }
    }
    ctx->pc = 0x1AC624u;
    // 0x1ac624: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ac624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ac628: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac62c: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ac62cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ac630: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ac630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ac634: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac638: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC638u;
    SET_GPR_U32(ctx, 31, 0x1AC640u);
    ctx->pc = 0x1AC63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC638u;
            // 0x1ac63c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC640u; }
        if (ctx->pc != 0x1AC640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC640u; }
        if (ctx->pc != 0x1AC640u) { return; }
    }
    ctx->pc = 0x1AC640u;
    // 0x1ac640: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac644:
    // 0x1ac644: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1ac644u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ac648: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ac648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ac64c: 0xc06a576  jal         func_1A95D8
    ctx->pc = 0x1AC64Cu;
    SET_GPR_U32(ctx, 31, 0x1AC654u);
    ctx->pc = 0x1AC650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC64Cu;
            // 0x1ac650: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A95D8u;
    if (runtime->hasFunction(0x1A95D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A95D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC654u; }
        if (ctx->pc != 0x1AC654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A95D8_0x1a95d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC654u; }
        if (ctx->pc != 0x1AC654u) { return; }
    }
    ctx->pc = 0x1AC654u;
    // 0x1ac654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac658: 0x70d01389  pcpyld      $v0, $a2, $s0
    ctx->pc = 0x1ac658u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 16)));
    // 0x1ac65c: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1ac65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ac660: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1ac660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ac664: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1ac664u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1ac668: 0x706224c8  ppacw       $a0, $v1, $v0
    ctx->pc = 0x1ac668u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ac66c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x1ac66cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1ac670: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1ac670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ac674: 0xfba401a0  sqc2        $vf4, 0x1A0($sp)
    ctx->pc = 0x1ac674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ac678: 0x72061389  pcpyld      $v0, $s0, $a2
    ctx->pc = 0x1ac678u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 6)));
    // 0x1ac67c: 0x706234c8  ppacw       $a2, $v1, $v0
    ctx->pc = 0x1ac67cu;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ac680: 0x48a62800  qmtc2.ni    $a2, $vf5
    ctx->pc = 0x1ac680u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1ac684: 0xfba500b0  sqc2        $vf5, 0xB0($sp)
    ctx->pc = 0x1ac684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ac688: 0xfba501b0  sqc2        $vf5, 0x1B0($sp)
    ctx->pc = 0x1ac688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ac68c: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1ac68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ac690: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1ac690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ac694: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1ac694u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1ac698: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac69c: 0x70d01389  pcpyld      $v0, $a2, $s0
    ctx->pc = 0x1ac69cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 16)));
    // 0x1ac6a0: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1ac6a0u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ac6a4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1ac6a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1ac6a8: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x1ac6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ac6ac: 0xfba201c0  sqc2        $vf2, 0x1C0($sp)
    ctx->pc = 0x1ac6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ac6b0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1ac6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1ac6b4: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1ac6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ac6b8: 0x70a41389  pcpyld      $v0, $a1, $a0
    ctx->pc = 0x1ac6b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1ac6bc: 0x704334c8  ppacw       $a2, $v0, $v1
    ctx->pc = 0x1ac6bcu;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ac6c0: 0x48a61800  qmtc2.ni    $a2, $vf3
    ctx->pc = 0x1ac6c0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1ac6c4: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x1ac6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ac6c8: 0xfba301d0  sqc2        $vf3, 0x1D0($sp)
    ctx->pc = 0x1ac6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ac6cc: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1ac6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ac6d0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1ac6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ac6d4: 0xfba50070  sqc2        $vf5, 0x70($sp)
    ctx->pc = 0x1ac6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ac6d8: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1ac6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ac6dc: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x1ac6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ac6e0: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x1ac6e0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac6e4: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x1ac6e4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ac6e8: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x1ac6e8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ac6ec: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1ac6ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ac6f0: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x1ac6f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ac6f4: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x1ac6f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ac6f8: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x1ac6f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ac6fc: 0x4be4090b  vmaddw.xyzw $vf4, $vf1, $vf4w
    ctx->pc = 0x1ac6fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ac700: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x1ac700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ac704: 0xfba40120  sqc2        $vf4, 0x120($sp)
    ctx->pc = 0x1ac704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ac708: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x1ac708u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ac70c: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x1ac70cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ac710: 0x4be5094b  vmaddw.xyzw $vf5, $vf1, $vf5w
    ctx->pc = 0x1ac710u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ac714: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1ac714u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ac718: 0xfba50130  sqc2        $vf5, 0x130($sp)
    ctx->pc = 0x1ac718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ac71c: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1ac71cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ac720: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1ac720u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ac724: 0x4be2088b  vmaddw.xyzw $vf2, $vf1, $vf2w
    ctx->pc = 0x1ac724u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ac728: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1ac728u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ac72c: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1ac72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ac730: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1ac730u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ac734: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1ac734u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ac738: 0x4be3084b  vmaddw.xyzw $vf1, $vf1, $vf3w
    ctx->pc = 0x1ac738u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ac73c: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x1ac73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ac740: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x1ac740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ac744: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1ac744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ac748: 0x86230048  lh          $v1, 0x48($s1)
    ctx->pc = 0x1ac748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1ac74c: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1ac74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ac750: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1ac750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ac754: 0xfba50070  sqc2        $vf5, 0x70($sp)
    ctx->pc = 0x1ac754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ac758: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1ac758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ac75c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1ac75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x1ac760: 0xfba500f0  sqc2        $vf5, 0xF0($sp)
    ctx->pc = 0x1ac760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ac764: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1ac764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ac768: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1ac768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1ac76c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1ac76cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ac770: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x1ac770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1ac774: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1ac774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1ac778: 0x263000b0  addiu       $s0, $s1, 0xB0
    ctx->pc = 0x1ac778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x1ac77c: 0x24422668  addiu       $v0, $v0, 0x2668
    ctx->pc = 0x1ac77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9832));
    // 0x1ac780: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ac780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ac784: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ac784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac788: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC788u;
    {
        const bool branch_taken_0x1ac788 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC788u;
            // 0x1ac78c: 0x8c720068  lw          $s2, 0x68($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac788) {
            ctx->pc = 0x1AC7B0u;
            goto label_1ac7b0;
        }
    }
    ctx->pc = 0x1AC790u;
    // 0x1ac790: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ac790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ac794: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac798: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ac798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ac79c: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ac79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ac7a0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ac7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ac7a4: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC7A4u;
    SET_GPR_U32(ctx, 31, 0x1AC7ACu);
    ctx->pc = 0x1AC7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC7A4u;
            // 0x1ac7a8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7ACu; }
        if (ctx->pc != 0x1AC7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7ACu; }
        if (ctx->pc != 0x1AC7ACu) { return; }
    }
    ctx->pc = 0x1AC7ACu;
    // 0x1ac7ac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac7b0:
    // 0x1ac7b0: 0xc06909a  jal         func_1A4268
    ctx->pc = 0x1AC7B0u;
    SET_GPR_U32(ctx, 31, 0x1AC7B8u);
    ctx->pc = 0x1AC7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC7B0u;
            // 0x1ac7b4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4268u;
    if (runtime->hasFunction(0x1A4268u)) {
        auto targetFn = runtime->lookupFunction(0x1A4268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7B8u; }
        if (ctx->pc != 0x1AC7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4268_0x1a4268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7B8u; }
        if (ctx->pc != 0x1AC7B8u) { return; }
    }
    ctx->pc = 0x1AC7B8u;
    // 0x1ac7b8: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x1ac7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x1ac7bc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1ac7bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ac7c0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1ac7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1ac7c4: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x1ac7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1ac7c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ac7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ac7cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ac7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ac7d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ac7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ac7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ac7d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ac7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ac7dc: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1ac7dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1ac7e0: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1ac7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1ac7e4: 0x40f809  jalr        $v0
    ctx->pc = 0x1AC7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC7ECu);
        ctx->pc = 0x1AC7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC7E4u;
            // 0x1ac7e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AC7ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7ECu; }
            if (ctx->pc != 0x1AC7ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1AC7ECu;
    // 0x1ac7ec: 0xc06b2da  jal         func_1ACB68
    ctx->pc = 0x1AC7ECu;
    SET_GPR_U32(ctx, 31, 0x1AC7F4u);
    ctx->pc = 0x1AC7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC7ECu;
            // 0x1ac7f0: 0x8fa401e0  lw          $a0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACB68u;
    if (runtime->hasFunction(0x1ACB68u)) {
        auto targetFn = runtime->lookupFunction(0x1ACB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7F4u; }
        if (ctx->pc != 0x1AC7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACB68_0x1acb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7F4u; }
        if (ctx->pc != 0x1AC7F4u) { return; }
    }
    ctx->pc = 0x1AC7F4u;
    // 0x1ac7f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ac7f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7f8: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1ac7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1ac7fc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1ac7fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac800: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ac800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ac804: 0x263000b8  addiu       $s0, $s1, 0xB8
    ctx->pc = 0x1ac804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
    // 0x1ac808: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1ac808u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1ac80c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1ac80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1ac810: 0x40f809  jalr        $v0
    ctx->pc = 0x1AC810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC818u);
        ctx->pc = 0x1AC814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC810u;
            // 0x1ac814: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AC818u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AC818u; }
            if (ctx->pc != 0x1AC818u) { return; }
        }
        }
    }
    ctx->pc = 0x1AC818u;
    // 0x1ac818: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x1ac818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x1ac81c: 0x10740008  beq         $v1, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC81Cu;
    {
        const bool branch_taken_0x1ac81c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1AC820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC81Cu;
            // 0x1ac820: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac81c) {
            ctx->pc = 0x1AC840u;
            goto label_1ac840;
        }
    }
    ctx->pc = 0x1AC824u;
    // 0x1ac824: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ac824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ac828: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ac828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ac82c: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ac82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ac830: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac834: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC834u;
    SET_GPR_U32(ctx, 31, 0x1AC83Cu);
    ctx->pc = 0x1AC838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC834u;
            // 0x1ac838: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC83Cu; }
        if (ctx->pc != 0x1AC83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC83Cu; }
        if (ctx->pc != 0x1AC83Cu) { return; }
    }
    ctx->pc = 0x1AC83Cu;
    // 0x1ac83c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac840:
    // 0x1ac840: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1ac840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ac844: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ac844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac848: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ac848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac84c: 0xc06b27e  jal         func_1AC9F8
    ctx->pc = 0x1AC84Cu;
    SET_GPR_U32(ctx, 31, 0x1AC854u);
    ctx->pc = 0x1AC850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC84Cu;
            // 0x1ac850: 0x26300100  addiu       $s0, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC9F8u;
    if (runtime->hasFunction(0x1AC9F8u)) {
        auto targetFn = runtime->lookupFunction(0x1AC9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC854u; }
        if (ctx->pc != 0x1AC854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC9F8_0x1ac9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC854u; }
        if (ctx->pc != 0x1AC854u) { return; }
    }
    ctx->pc = 0x1AC854u;
    // 0x1ac854: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ac854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ac858: 0x963e0042  lhu         $fp, 0x42($s1)
    ctx->pc = 0x1ac858u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x1ac85c: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x1ac85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x1ac860: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1ac860u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ac864: 0x10740009  beq         $v1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC864u;
    {
        const bool branch_taken_0x1ac864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1AC868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC864u;
            // 0x1ac868: 0xafa201e4  sw          $v0, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac864) {
            ctx->pc = 0x1AC88Cu;
            goto label_1ac88c;
        }
    }
    ctx->pc = 0x1AC86Cu;
    // 0x1ac86c: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ac86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ac870: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac874: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ac874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ac878: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ac878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ac87c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac880: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC880u;
    SET_GPR_U32(ctx, 31, 0x1AC888u);
    ctx->pc = 0x1AC884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC880u;
            // 0x1ac884: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC888u; }
        if (ctx->pc != 0x1AC888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC888u; }
        if (ctx->pc != 0x1AC888u) { return; }
    }
    ctx->pc = 0x1AC888u;
    // 0x1ac888: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac88c:
    // 0x1ac88c: 0x8e170004  lw          $s7, 0x4($s0)
    ctx->pc = 0x1ac88cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ac890: 0xc06a732  jal         func_1A9CC8
    ctx->pc = 0x1AC890u;
    SET_GPR_U32(ctx, 31, 0x1AC898u);
    ctx->pc = 0x1AC894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC890u;
            // 0x1ac894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9CC8u;
    if (runtime->hasFunction(0x1A9CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC898u; }
        if (ctx->pc != 0x1AC898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9CC8_0x1a9cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC898u; }
        if (ctx->pc != 0x1AC898u) { return; }
    }
    ctx->pc = 0x1AC898u;
    // 0x1ac898: 0x263200c8  addiu       $s2, $s1, 0xC8
    ctx->pc = 0x1ac898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    // 0x1ac89c: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x1ac89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x1ac8a0: 0x10740009  beq         $v1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC8A0u;
    {
        const bool branch_taken_0x1ac8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1AC8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC8A0u;
            // 0x1ac8a4: 0x3056ffff  andi        $s6, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8a0) {
            ctx->pc = 0x1AC8C8u;
            goto label_1ac8c8;
        }
    }
    ctx->pc = 0x1AC8A8u;
    // 0x1ac8a8: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ac8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ac8ac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac8b0: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ac8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ac8b4: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ac8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ac8b8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac8bc: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC8BCu;
    SET_GPR_U32(ctx, 31, 0x1AC8C4u);
    ctx->pc = 0x1AC8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC8BCu;
            // 0x1ac8c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC8C4u; }
        if (ctx->pc != 0x1AC8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC8C4u; }
        if (ctx->pc != 0x1AC8C4u) { return; }
    }
    ctx->pc = 0x1AC8C4u;
    // 0x1ac8c4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1ac8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1ac8c8:
    // 0x1ac8c8: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x1ac8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1ac8cc: 0x263000d0  addiu       $s0, $s1, 0xD0
    ctx->pc = 0x1ac8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x1ac8d0: 0x10740009  beq         $v1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC8D0u;
    {
        const bool branch_taken_0x1ac8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1AC8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC8D0u;
            // 0x1ac8d4: 0x86550004  lh          $s5, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8d0) {
            ctx->pc = 0x1AC8F8u;
            goto label_1ac8f8;
        }
    }
    ctx->pc = 0x1AC8D8u;
    // 0x1ac8d8: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ac8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ac8dc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac8e0: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ac8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ac8e4: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ac8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ac8e8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac8ec: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC8ECu;
    SET_GPR_U32(ctx, 31, 0x1AC8F4u);
    ctx->pc = 0x1AC8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC8ECu;
            // 0x1ac8f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC8F4u; }
        if (ctx->pc != 0x1AC8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC8F4u; }
        if (ctx->pc != 0x1AC8F4u) { return; }
    }
    ctx->pc = 0x1AC8F4u;
    // 0x1ac8f4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac8f8:
    // 0x1ac8f8: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x1ac8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x1ac8fc: 0x263200d8  addiu       $s2, $s1, 0xD8
    ctx->pc = 0x1ac8fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
    // 0x1ac900: 0x10740009  beq         $v1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC900u;
    {
        const bool branch_taken_0x1ac900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1AC904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC900u;
            // 0x1ac904: 0x86130004  lh          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac900) {
            ctx->pc = 0x1AC928u;
            goto label_1ac928;
        }
    }
    ctx->pc = 0x1AC908u;
    // 0x1ac908: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ac908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ac90c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac910: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ac910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ac914: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ac914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ac918: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac91c: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC91Cu;
    SET_GPR_U32(ctx, 31, 0x1AC924u);
    ctx->pc = 0x1AC920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC91Cu;
            // 0x1ac920: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC924u; }
        if (ctx->pc != 0x1AC924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC924u; }
        if (ctx->pc != 0x1AC924u) { return; }
    }
    ctx->pc = 0x1AC924u;
    // 0x1ac924: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1ac924u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1ac928:
    // 0x1ac928: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x1ac928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1ac92c: 0x263000e0  addiu       $s0, $s1, 0xE0
    ctx->pc = 0x1ac92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x1ac930: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ac930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac934: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC934u;
    {
        const bool branch_taken_0x1ac934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1AC938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC934u;
            // 0x1ac938: 0x86520004  lh          $s2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac934) {
            ctx->pc = 0x1AC95Cu;
            goto label_1ac95c;
        }
    }
    ctx->pc = 0x1AC93Cu;
    // 0x1ac93c: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1ac93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ac940: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ac940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ac944: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1ac944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1ac948: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1ac948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1ac94c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac950: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AC950u;
    SET_GPR_U32(ctx, 31, 0x1AC958u);
    ctx->pc = 0x1AC954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC950u;
            // 0x1ac954: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC958u; }
        if (ctx->pc != 0x1AC958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC958u; }
        if (ctx->pc != 0x1AC958u) { return; }
    }
    ctx->pc = 0x1AC958u;
    // 0x1ac958: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac95c:
    // 0x1ac95c: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x1ac95cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ac960: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1ac960u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1ac964: 0x27b00160  addiu       $s0, $sp, 0x160
    ctx->pc = 0x1ac964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1ac968: 0x8fa701e0  lw          $a3, 0x1E0($sp)
    ctx->pc = 0x1ac968u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1ac96c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ac96cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ac970: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1ac970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ac974: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ac974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ac978: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ac978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ac97c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1ac97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac980: 0x8fa801e4  lw          $t0, 0x1E4($sp)
    ctx->pc = 0x1ac980u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1ac984: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x1ac984u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac988: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x1ac988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x1ac98c: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1ac98cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac990: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x1ac990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x1ac994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac998: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1ac998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1ac99c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1ac99cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1ac9a0: 0xc06928e  jal         func_1A4A38
    ctx->pc = 0x1AC9A0u;
    SET_GPR_U32(ctx, 31, 0x1AC9A8u);
    ctx->pc = 0x1AC9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9A0u;
            // 0x1ac9a4: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4A38u;
    if (runtime->hasFunction(0x1A4A38u)) {
        auto targetFn = runtime->lookupFunction(0x1A4A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9A8u; }
        if (ctx->pc != 0x1AC9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4A38_0x1a4a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9A8u; }
        if (ctx->pc != 0x1AC9A8u) { return; }
    }
    ctx->pc = 0x1AC9A8u;
    // 0x1ac9a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ac9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac9b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac9b4: 0xc0692e8  jal         func_1A4BA0
    ctx->pc = 0x1AC9B4u;
    SET_GPR_U32(ctx, 31, 0x1AC9BCu);
    ctx->pc = 0x1AC9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9B4u;
            // 0x1ac9b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BA0u;
    if (runtime->hasFunction(0x1A4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9BCu; }
        if (ctx->pc != 0x1AC9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4BA0_0x1a4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9BCu; }
        if (ctx->pc != 0x1AC9BCu) { return; }
    }
    ctx->pc = 0x1AC9BCu;
    // 0x1ac9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac9c0: 0xc090918  jal         func_242460
    ctx->pc = 0x1AC9C0u;
    SET_GPR_U32(ctx, 31, 0x1AC9C8u);
    ctx->pc = 0x1AC9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9C0u;
            // 0x1ac9c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242460u;
    if (runtime->hasFunction(0x242460u)) {
        auto targetFn = runtime->lookupFunction(0x242460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9C8u; }
        if (ctx->pc != 0x1AC9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242460_0x242460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9C8u; }
        if (ctx->pc != 0x1AC9C8u) { return; }
    }
    ctx->pc = 0x1AC9C8u;
    // 0x1ac9c8: 0x7bb00280  lq          $s0, 0x280($sp)
    ctx->pc = 0x1ac9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_1ac9cc:
    // 0x1ac9cc: 0x7bb10270  lq          $s1, 0x270($sp)
    ctx->pc = 0x1ac9ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1ac9d0: 0x7bb20260  lq          $s2, 0x260($sp)
    ctx->pc = 0x1ac9d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1ac9d4: 0x7bb30250  lq          $s3, 0x250($sp)
    ctx->pc = 0x1ac9d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1ac9d8: 0x7bb40240  lq          $s4, 0x240($sp)
    ctx->pc = 0x1ac9d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1ac9dc: 0x7bb50230  lq          $s5, 0x230($sp)
    ctx->pc = 0x1ac9dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1ac9e0: 0x7bb60220  lq          $s6, 0x220($sp)
    ctx->pc = 0x1ac9e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1ac9e4: 0x7bb70210  lq          $s7, 0x210($sp)
    ctx->pc = 0x1ac9e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1ac9e8: 0x7bbe0200  lq          $fp, 0x200($sp)
    ctx->pc = 0x1ac9e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1ac9ec: 0xdfbf01f0  ld          $ra, 0x1F0($sp)
    ctx->pc = 0x1ac9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1ac9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9F0u;
            // 0x1ac9f4: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC9CCu: goto label_1ac9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AC9F8u;
}
