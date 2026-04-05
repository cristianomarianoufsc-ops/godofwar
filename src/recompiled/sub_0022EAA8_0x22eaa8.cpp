#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022EAA8
// Address: 0x22eaa8 - 0x22ee58
void sub_0022EAA8_0x22eaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EAA8_0x22eaa8");
#endif

    ctx->pc = 0x22eaa8u;

    // 0x22eaa8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22eaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22eaac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22eaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22eab0: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x22eab0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x22eab4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22eab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x22eab8: 0x8e4312b8  lw          $v1, 0x12B8($s2)
    ctx->pc = 0x22eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4792)));
    // 0x22eabc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22eabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eac0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22eac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x22eac4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22eac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22eac8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22eac8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eacc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x22eaccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x22ead0: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x22EAD0u;
    {
        const bool branch_taken_0x22ead0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EAD0u;
            // 0x22ead4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ead0) {
            ctx->pc = 0x22EE28u;
            goto label_22ee28;
        }
    }
    ctx->pc = 0x22EAD8u;
    // 0x22ead8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22eadc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22eae0: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x22eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x22eae4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22eae8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22eaec: 0x400008  jr          $v0
    ctx->pc = 0x22EAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22EAF4u: goto label_22eaf4;
            case 0x22EBF0u: goto label_22ebf0;
            case 0x22EC48u: goto label_22ec48;
            case 0x22EC7Cu: goto label_22ec7c;
            case 0x22ECE8u: goto label_22ece8;
            case 0x22ED14u: goto label_22ed14;
            case 0x22ED58u: goto label_22ed58;
            case 0x22EDECu: goto label_22edec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22EAF4u;
label_22eaf4:
    // 0x22eaf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22eaf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eaf8: 0x240b0044  addiu       $t3, $zero, 0x44
    ctx->pc = 0x22eaf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22eafc: 0x0  nop
    ctx->pc = 0x22eafcu;
    // NOP
label_22eb00:
    // 0x22eb00: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x22eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x22eb04: 0x20b4018  mult        $t0, $s0, $t3
    ctx->pc = 0x22eb04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x22eb08: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x22eb0c: 0x2469be80  addiu       $t1, $v1, -0x4180
    ctx->pc = 0x22eb0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950528));
    // 0x22eb10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22eb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22eb14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22eb14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22eb18: 0x28e60004  slti        $a2, $a3, 0x4
    ctx->pc = 0x22eb18u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x22eb1c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x22eb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x22eb20: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x22eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x22eb24: 0x1222021  addu        $a0, $t1, $v0
    ctx->pc = 0x22eb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x22eb28: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x22eb28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x22eb2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22eb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb30: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22eb30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22eb34: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x22eb34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x22eb38: 0xa060000e  sb          $zero, 0xE($v1)
    ctx->pc = 0x22eb38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x22eb3c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x22EB3Cu;
    {
        const bool branch_taken_0x22eb3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EB3Cu;
            // 0x22eb40: 0xa460000c  sh          $zero, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb3c) {
            ctx->pc = 0x22EB00u;
            runtime->cooperativeGuestYield();
            goto label_22eb00;
        }
    }
    ctx->pc = 0x22EB44u;
    // 0x22eb44: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22eb48: 0x3c0a002a  lui         $t2, 0x2A
    ctx->pc = 0x22eb48u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)42 << 16));
    // 0x22eb4c: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x22eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x22eb50: 0x254412d8  addiu       $a0, $t2, 0x12D8
    ctx->pc = 0x22eb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4824));
    // 0x22eb54: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x22eb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x22eb58: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x22eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x22eb5c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x22eb60: 0xac8b0008  sw          $t3, 0x8($a0)
    ctx->pc = 0x22eb60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 11));
    // 0x22eb64: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x22eb64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x22eb68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22eb68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22eb6c: 0xad4212d8  sw          $v0, 0x12D8($t2)
    ctx->pc = 0x22eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4824), GPR_U32(ctx, 2));
    // 0x22eb70: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x22eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x22eb74: 0x0  nop
    ctx->pc = 0x22eb74u;
    // NOP
label_22eb78:
    // 0x22eb78: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22eb7c: 0x255012d8  addiu       $s0, $t2, 0x12D8
    ctx->pc = 0x22eb7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), 4824));
    // 0x22eb80: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x22eb80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22eb84: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x22eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x22eb88: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x22eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x22eb8c: 0x24636eb8  addiu       $v1, $v1, 0x6EB8
    ctx->pc = 0x22eb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28344));
    // 0x22eb90: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x22eb90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x22eb94: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22eb94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22eb98: 0x28e60006  slti        $a2, $a3, 0x6
    ctx->pc = 0x22eb98u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x22eb9c: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x22eb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22eba0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x22eba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eba4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x22eba4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x22eba8: 0x14c0fff3  bnez        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x22EBA8u;
    {
        const bool branch_taken_0x22eba8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EBA8u;
            // 0x22ebac: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eba8) {
            ctx->pc = 0x22EB78u;
            runtime->cooperativeGuestYield();
            goto label_22eb78;
        }
    }
    ctx->pc = 0x22EBB0u;
    // 0x22ebb0: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x22ebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x22ebb4: 0xc05e996  jal         func_17A658
    ctx->pc = 0x22EBB4u;
    SET_GPR_U32(ctx, 31, 0x22EBBCu);
    ctx->pc = 0x22EBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EBB4u;
            // 0x22ebb8: 0x24848468  addiu       $a0, $a0, -0x7B98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EBBCu; }
        if (ctx->pc != 0x22EBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EBBCu; }
        if (ctx->pc != 0x22EBBCu) { return; }
    }
    ctx->pc = 0x22EBBCu;
    // 0x22ebbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ebc0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22ebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22ebc4: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x22ebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x22ebc8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x22ebcc: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x22ebccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x22ebd0: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x22ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x22ebd4: 0xc05e996  jal         func_17A658
    ctx->pc = 0x22EBD4u;
    SET_GPR_U32(ctx, 31, 0x22EBDCu);
    ctx->pc = 0x22EBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EBD4u;
            // 0x22ebd8: 0x24848470  addiu       $a0, $a0, -0x7B90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EBDCu; }
        if (ctx->pc != 0x22EBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EBDCu; }
        if (ctx->pc != 0x22EBDCu) { return; }
    }
    ctx->pc = 0x22EBDCu;
    // 0x22ebdc: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x22ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x22ebe0: 0x240303c4  addiu       $v1, $zero, 0x3C4
    ctx->pc = 0x22ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x22ebe4: 0x8e4212b8  lw          $v0, 0x12B8($s2)
    ctx->pc = 0x22ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4792)));
    // 0x22ebe8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x22EBE8u;
    {
        const bool branch_taken_0x22ebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EBE8u;
            // 0x22ebec: 0xae03005c  sw          $v1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebe8) {
            ctx->pc = 0x22EDC8u;
            goto label_22edc8;
        }
    }
    ctx->pc = 0x22EBF0u;
label_22ebf0:
    // 0x22ebf0: 0xc08b852  jal         func_22E148
    ctx->pc = 0x22EBF0u;
    SET_GPR_U32(ctx, 31, 0x22EBF8u);
    ctx->pc = 0x22EBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EBF0u;
            // 0x22ebf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EBF8u; }
        if (ctx->pc != 0x22EBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EBF8u; }
        if (ctx->pc != 0x22EBF8u) { return; }
    }
    ctx->pc = 0x22EBF8u;
    // 0x22ebf8: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x22EBF8u;
    {
        const bool branch_taken_0x22ebf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EBF8u;
            // 0x22ebfc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebf8) {
            ctx->pc = 0x22EE28u;
            goto label_22ee28;
        }
    }
    ctx->pc = 0x22EC00u;
    // 0x22ec00: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x22ec00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22ec04: 0x2442bc70  addiu       $v0, $v0, -0x4390
    ctx->pc = 0x22ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950000));
    // 0x22ec08: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22ec0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ec10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22EC10u;
    {
        const bool branch_taken_0x22ec10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC10u;
            // 0x22ec14: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec10) {
            ctx->pc = 0x22EC30u;
            goto label_22ec30;
        }
    }
    ctx->pc = 0x22EC18u;
    // 0x22ec18: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x22ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22ec1c: 0x2442bc68  addiu       $v0, $v0, -0x4398
    ctx->pc = 0x22ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x22ec20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22ec24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ec28: 0x14430067  bne         $v0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x22EC28u;
    {
        const bool branch_taken_0x22ec28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22EC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC28u;
            // 0x22ec2c: 0x8e4212b8  lw          $v0, 0x12B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec28) {
            ctx->pc = 0x22EDC8u;
            goto label_22edc8;
        }
    }
    ctx->pc = 0x22EC30u;
label_22ec30:
    // 0x22ec30: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22ec34: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x22ec34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ec38: 0x2442bc78  addiu       $v0, $v0, -0x4388
    ctx->pc = 0x22ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950008));
    // 0x22ec3c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22ec40: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x22EC40u;
    {
        const bool branch_taken_0x22ec40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC40u;
            // 0x22ec44: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec40) {
            ctx->pc = 0x22EE28u;
            goto label_22ee28;
        }
    }
    ctx->pc = 0x22EC48u;
label_22ec48:
    // 0x22ec48: 0xc08b8dc  jal         func_22E370
    ctx->pc = 0x22EC48u;
    SET_GPR_U32(ctx, 31, 0x22EC50u);
    ctx->pc = 0x22EC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC48u;
            // 0x22ec4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E370u;
    if (runtime->hasFunction(0x22E370u)) {
        auto targetFn = runtime->lookupFunction(0x22E370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC50u; }
        if (ctx->pc != 0x22EC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E370_0x22e370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC50u; }
        if (ctx->pc != 0x22EC50u) { return; }
    }
    ctx->pc = 0x22EC50u;
    // 0x22ec50: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x22EC50u;
    {
        const bool branch_taken_0x22ec50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC50u;
            // 0x22ec54: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec50) {
            ctx->pc = 0x22EE28u;
            goto label_22ee28;
        }
    }
    ctx->pc = 0x22EC58u;
    // 0x22ec58: 0x8c421284  lw          $v0, 0x1284($v0)
    ctx->pc = 0x22ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4740)));
    // 0x22ec5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22EC5Cu;
    {
        const bool branch_taken_0x22ec5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC5Cu;
            // 0x22ec60: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec5c) {
            ctx->pc = 0x22EC74u;
            goto label_22ec74;
        }
    }
    ctx->pc = 0x22EC64u;
    // 0x22ec64: 0x8e4212b8  lw          $v0, 0x12B8($s2)
    ctx->pc = 0x22ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4792)));
    // 0x22ec68: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22ec6c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x22EC6Cu;
    {
        const bool branch_taken_0x22ec6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC6Cu;
            // 0x22ec70: 0xac6012c4  sw          $zero, 0x12C4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec6c) {
            ctx->pc = 0x22EDC8u;
            goto label_22edc8;
        }
    }
    ctx->pc = 0x22EC74u;
label_22ec74:
    // 0x22ec74: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x22EC74u;
    {
        const bool branch_taken_0x22ec74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC74u;
            // 0x22ec78: 0xae4212b8  sw          $v0, 0x12B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec74) {
            ctx->pc = 0x22EE28u;
            goto label_22ee28;
        }
    }
    ctx->pc = 0x22EC7Cu;
label_22ec7c:
    // 0x22ec7c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x22ec7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x22ec80: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x22ec80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22ec84: 0x8e2212c4  lw          $v0, 0x12C4($s1)
    ctx->pc = 0x22ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4804)));
    // 0x22ec88: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22ec8c: 0x246312d8  addiu       $v1, $v1, 0x12D8
    ctx->pc = 0x22ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4824));
    // 0x22ec90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ec90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec94: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x22ec94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22ec98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ec9c: 0xc08b986  jal         func_22E618
    ctx->pc = 0x22EC9Cu;
    SET_GPR_U32(ctx, 31, 0x22ECA4u);
    ctx->pc = 0x22ECA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EC9Cu;
            // 0x22eca0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E618u;
    if (runtime->hasFunction(0x22E618u)) {
        auto targetFn = runtime->lookupFunction(0x22E618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ECA4u; }
        if (ctx->pc != 0x22ECA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E618_0x22e618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ECA4u; }
        if (ctx->pc != 0x22ECA4u) { return; }
    }
    ctx->pc = 0x22ECA4u;
    // 0x22eca4: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x22ECA4u;
    {
        const bool branch_taken_0x22eca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ECA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ECA4u;
            // 0x22eca8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eca4) {
            ctx->pc = 0x22EE28u;
            goto label_22ee28;
        }
    }
    ctx->pc = 0x22ECACu;
    // 0x22ecac: 0x8c431284  lw          $v1, 0x1284($v0)
    ctx->pc = 0x22ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4740)));
    // 0x22ecb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22ECB0u;
    {
        const bool branch_taken_0x22ecb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ECB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ECB0u;
            // 0x22ecb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecb0) {
            ctx->pc = 0x22ECC0u;
            goto label_22ecc0;
        }
    }
    ctx->pc = 0x22ECB8u;
    // 0x22ecb8: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x22ECB8u;
    {
        const bool branch_taken_0x22ecb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22ECBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ECB8u;
            // 0x22ecbc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecb8) {
            ctx->pc = 0x22EDD4u;
            goto label_22edd4;
        }
    }
    ctx->pc = 0x22ECC0u;
label_22ecc0:
    // 0x22ecc0: 0x8e2312c4  lw          $v1, 0x12C4($s1)
    ctx->pc = 0x22ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4804)));
    // 0x22ecc4: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x22ecc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x22ecc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22ECC8u;
    {
        const bool branch_taken_0x22ecc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ECCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ECC8u;
            // 0x22eccc: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecc8) {
            ctx->pc = 0x22ECD8u;
            goto label_22ecd8;
        }
    }
    ctx->pc = 0x22ECD0u;
    // 0x22ecd0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x22ECD0u;
    {
        const bool branch_taken_0x22ecd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ECD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ECD0u;
            // 0x22ecd4: 0xae2212c4  sw          $v0, 0x12C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4804), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecd0) {
            ctx->pc = 0x22EE28u;
            goto label_22ee28;
        }
    }
    ctx->pc = 0x22ECD8u;
label_22ecd8:
    // 0x22ecd8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x22ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22ecdc: 0xae2012c4  sw          $zero, 0x12C4($s1)
    ctx->pc = 0x22ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4804), GPR_U32(ctx, 0));
    // 0x22ece0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x22ECE0u;
    {
        const bool branch_taken_0x22ece0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ECE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ECE0u;
            // 0x22ece4: 0xae4212b8  sw          $v0, 0x12B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ece0) {
            ctx->pc = 0x22EE28u;
            goto label_22ee28;
        }
    }
    ctx->pc = 0x22ECE8u;
label_22ece8:
    // 0x22ece8: 0xc08b918  jal         func_22E460
    ctx->pc = 0x22ECE8u;
    SET_GPR_U32(ctx, 31, 0x22ECF0u);
    ctx->pc = 0x22ECECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ECE8u;
            // 0x22ecec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E460u;
    if (runtime->hasFunction(0x22E460u)) {
        auto targetFn = runtime->lookupFunction(0x22E460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ECF0u; }
        if (ctx->pc != 0x22ECF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E460_0x22e460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ECF0u; }
        if (ctx->pc != 0x22ECF0u) { return; }
    }
    ctx->pc = 0x22ECF0u;
    // 0x22ecf0: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x22ECF0u;
    {
        const bool branch_taken_0x22ecf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ECF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ECF0u;
            // 0x22ecf4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecf0) {
            ctx->pc = 0x22EE28u;
            goto label_22ee28;
        }
    }
    ctx->pc = 0x22ECF8u;
    // 0x22ecf8: 0x8c421284  lw          $v0, 0x1284($v0)
    ctx->pc = 0x22ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4740)));
    // 0x22ecfc: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x22ECFCu;
    {
        const bool branch_taken_0x22ecfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ED00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ECFCu;
            // 0x22ed00: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecfc) {
            ctx->pc = 0x22EDD4u;
            goto label_22edd4;
        }
    }
    ctx->pc = 0x22ED04u;
    // 0x22ed04: 0x8e4212b8  lw          $v0, 0x12B8($s2)
    ctx->pc = 0x22ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4792)));
    // 0x22ed08: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22ed0c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x22ED0Cu;
    {
        const bool branch_taken_0x22ed0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED0Cu;
            // 0x22ed10: 0xac6012c4  sw          $zero, 0x12C4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed0c) {
            ctx->pc = 0x22EDC8u;
            goto label_22edc8;
        }
    }
    ctx->pc = 0x22ED14u;
label_22ed14:
    // 0x22ed14: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22ed18: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x22ed18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22ed1c: 0x8c4212c4  lw          $v0, 0x12C4($v0)
    ctx->pc = 0x22ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4804)));
    // 0x22ed20: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22ed24: 0x246312d8  addiu       $v1, $v1, 0x12D8
    ctx->pc = 0x22ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4824));
    // 0x22ed28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ed28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed2c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x22ed2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22ed30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ed34: 0xc08b94e  jal         func_22E538
    ctx->pc = 0x22ED34u;
    SET_GPR_U32(ctx, 31, 0x22ED3Cu);
    ctx->pc = 0x22ED38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED34u;
            // 0x22ed38: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E538u;
    if (runtime->hasFunction(0x22E538u)) {
        auto targetFn = runtime->lookupFunction(0x22E538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ED3Cu; }
        if (ctx->pc != 0x22ED3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E538_0x22e538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ED3Cu; }
        if (ctx->pc != 0x22ED3Cu) { return; }
    }
    ctx->pc = 0x22ED3Cu;
    // 0x22ed3c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x22ED3Cu;
    {
        const bool branch_taken_0x22ed3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED3Cu;
            // 0x22ed40: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed3c) {
            ctx->pc = 0x22EE28u;
            goto label_22ee28;
        }
    }
    ctx->pc = 0x22ED44u;
    // 0x22ed44: 0x8c421284  lw          $v0, 0x1284($v0)
    ctx->pc = 0x22ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4740)));
    // 0x22ed48: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x22ED48u;
    {
        const bool branch_taken_0x22ed48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED48u;
            // 0x22ed4c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed48) {
            ctx->pc = 0x22EDC4u;
            goto label_22edc4;
        }
    }
    ctx->pc = 0x22ED50u;
    // 0x22ed50: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x22ED50u;
    {
        const bool branch_taken_0x22ed50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED50u;
            // 0x22ed54: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed50) {
            ctx->pc = 0x22EDD8u;
            goto label_22edd8;
        }
    }
    ctx->pc = 0x22ED58u;
label_22ed58:
    // 0x22ed58: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x22ed58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x22ed5c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x22ed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22ed60: 0x8e2312c4  lw          $v1, 0x12C4($s1)
    ctx->pc = 0x22ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4804)));
    // 0x22ed64: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22ed68: 0x244212d8  addiu       $v0, $v0, 0x12D8
    ctx->pc = 0x22ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4824));
    // 0x22ed6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ed6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed70: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x22ed70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22ed74: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x22ed74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ed78: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x22ed78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ed7c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x22ed7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed80: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x22ed80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22ed84: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x22ed84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22ed88: 0xc08ba00  jal         func_22E800
    ctx->pc = 0x22ED88u;
    SET_GPR_U32(ctx, 31, 0x22ED90u);
    ctx->pc = 0x22ED8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED88u;
            // 0x22ed8c: 0x8ce70008  lw          $a3, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E800u;
    if (runtime->hasFunction(0x22E800u)) {
        auto targetFn = runtime->lookupFunction(0x22E800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ED90u; }
        if (ctx->pc != 0x22ED90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E800_0x22e800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ED90u; }
        if (ctx->pc != 0x22ED90u) { return; }
    }
    ctx->pc = 0x22ED90u;
    // 0x22ed90: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x22ED90u;
    {
        const bool branch_taken_0x22ed90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED90u;
            // 0x22ed94: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed90) {
            ctx->pc = 0x22EE28u;
            goto label_22ee28;
        }
    }
    ctx->pc = 0x22ED98u;
    // 0x22ed98: 0x8c421284  lw          $v0, 0x1284($v0)
    ctx->pc = 0x22ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4740)));
    // 0x22ed9c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22ED9Cu;
    {
        const bool branch_taken_0x22ed9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED9Cu;
            // 0x22eda0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed9c) {
            ctx->pc = 0x22EDD4u;
            goto label_22edd4;
        }
    }
    ctx->pc = 0x22EDA4u;
    // 0x22eda4: 0x8e2212c4  lw          $v0, 0x12C4($s1)
    ctx->pc = 0x22eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4804)));
    // 0x22eda8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22edac: 0xae2212c4  sw          $v0, 0x12C4($s1)
    ctx->pc = 0x22edacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4804), GPR_U32(ctx, 2));
    // 0x22edb0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x22edb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22edb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22EDB4u;
    {
        const bool branch_taken_0x22edb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EDB4u;
            // 0x22edb8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22edb4) {
            ctx->pc = 0x22EDC4u;
            goto label_22edc4;
        }
    }
    ctx->pc = 0x22EDBCu;
    // 0x22edbc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x22EDBCu;
    {
        const bool branch_taken_0x22edbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EDBCu;
            // 0x22edc0: 0xae4212b8  sw          $v0, 0x12B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22edbc) {
            ctx->pc = 0x22EE28u;
            goto label_22ee28;
        }
    }
    ctx->pc = 0x22EDC4u;
label_22edc4:
    // 0x22edc4: 0x8e4212b8  lw          $v0, 0x12B8($s2)
    ctx->pc = 0x22edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4792)));
label_22edc8:
    // 0x22edc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22edcc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22EDCCu;
    {
        const bool branch_taken_0x22edcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EDCCu;
            // 0x22edd0: 0xae4212b8  sw          $v0, 0x12B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22edcc) {
            ctx->pc = 0x22EE28u;
            goto label_22ee28;
        }
    }
    ctx->pc = 0x22EDD4u;
label_22edd4:
    // 0x22edd4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x22edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_22edd8:
    // 0x22edd8: 0x2442bc78  addiu       $v0, $v0, -0x4388
    ctx->pc = 0x22edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950008));
    // 0x22eddc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x22eddcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ede0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ede4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x22EDE4u;
    {
        const bool branch_taken_0x22ede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EDE4u;
            // 0x22ede8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ede4) {
            ctx->pc = 0x22EE28u;
            goto label_22ee28;
        }
    }
    ctx->pc = 0x22EDECu;
label_22edec:
    // 0x22edec: 0xc08b706  jal         func_22DC18
    ctx->pc = 0x22EDECu;
    SET_GPR_U32(ctx, 31, 0x22EDF4u);
    ctx->pc = 0x22EDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EDECu;
            // 0x22edf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DC18u;
    if (runtime->hasFunction(0x22DC18u)) {
        auto targetFn = runtime->lookupFunction(0x22DC18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EDF4u; }
        if (ctx->pc != 0x22EDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DC18_0x22dc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EDF4u; }
        if (ctx->pc != 0x22EDF4u) { return; }
    }
    ctx->pc = 0x22EDF4u;
    // 0x22edf4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22EDF4u;
    {
        const bool branch_taken_0x22edf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EDF4u;
            // 0x22edf8: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22edf4) {
            ctx->pc = 0x22EE14u;
            goto label_22ee14;
        }
    }
    ctx->pc = 0x22EDFCu;
    // 0x22edfc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x22edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22ee00: 0x2442bc78  addiu       $v0, $v0, -0x4388
    ctx->pc = 0x22ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950008));
    // 0x22ee04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ee08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ee0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22EE0Cu;
    {
        const bool branch_taken_0x22ee0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EE0Cu;
            // 0x22ee10: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee0c) {
            ctx->pc = 0x22EE24u;
            goto label_22ee24;
        }
    }
    ctx->pc = 0x22EE14u;
label_22ee14:
    // 0x22ee14: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x22ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22ee18: 0x2442bc78  addiu       $v0, $v0, -0x4388
    ctx->pc = 0x22ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950008));
    // 0x22ee1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ee20: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x22ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_22ee24:
    // 0x22ee24: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x22ee24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ee28:
    // 0x22ee28: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x22EE28u;
    {
        const bool branch_taken_0x22ee28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EE28u;
            // 0x22ee2c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee28) {
            ctx->pc = 0x22EE34u;
            goto label_22ee34;
        }
    }
    ctx->pc = 0x22EE30u;
    // 0x22ee30: 0xac4012b8  sw          $zero, 0x12B8($v0)
    ctx->pc = 0x22ee30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4792), GPR_U32(ctx, 0));
label_22ee34:
    // 0x22ee34: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x22ee34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22ee38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ee3c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22ee3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ee40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ee40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ee44: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22ee44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ee48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ee48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ee4c: 0x3e00008  jr          $ra
    ctx->pc = 0x22EE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EE4Cu;
            // 0x22ee50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22EAF4u: goto label_22eaf4;
            case 0x22EB00u: goto label_22eb00;
            case 0x22EB78u: goto label_22eb78;
            case 0x22EBF0u: goto label_22ebf0;
            case 0x22EC30u: goto label_22ec30;
            case 0x22EC48u: goto label_22ec48;
            case 0x22EC74u: goto label_22ec74;
            case 0x22EC7Cu: goto label_22ec7c;
            case 0x22ECC0u: goto label_22ecc0;
            case 0x22ECD8u: goto label_22ecd8;
            case 0x22ECE8u: goto label_22ece8;
            case 0x22ED14u: goto label_22ed14;
            case 0x22ED58u: goto label_22ed58;
            case 0x22EDC4u: goto label_22edc4;
            case 0x22EDC8u: goto label_22edc8;
            case 0x22EDD4u: goto label_22edd4;
            case 0x22EDD8u: goto label_22edd8;
            case 0x22EDECu: goto label_22edec;
            case 0x22EE14u: goto label_22ee14;
            case 0x22EE24u: goto label_22ee24;
            case 0x22EE28u: goto label_22ee28;
            case 0x22EE34u: goto label_22ee34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22EE54u;
    // 0x22ee54: 0x0  nop
    ctx->pc = 0x22ee54u;
    // NOP
}
