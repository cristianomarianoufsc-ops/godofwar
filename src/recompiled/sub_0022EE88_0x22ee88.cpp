#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022EE88
// Address: 0x22ee88 - 0x22f0d0
void sub_0022EE88_0x22ee88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EE88_0x22ee88");
#endif

    ctx->pc = 0x22ee88u;

    // 0x22ee88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22ee88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22ee8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22ee8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22ee90: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x22ee90u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x22ee94: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22ee94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22ee98: 0x8e2312b0  lw          $v1, 0x12B0($s1)
    ctx->pc = 0x22ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
    // 0x22ee9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22ee9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eea0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22eea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22eea4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22eea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22eea8: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x22EEA8u;
    {
        const bool branch_taken_0x22eea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EEA8u;
            // 0x22eeac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eea8) {
            ctx->pc = 0x22F058u;
            goto label_22f058;
        }
    }
    ctx->pc = 0x22EEB0u;
    // 0x22eeb0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22eeb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22eeb8: 0x244284a0  addiu       $v0, $v0, -0x7B60
    ctx->pc = 0x22eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935712));
    // 0x22eebc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22eec0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22eec4: 0x400008  jr          $v0
    ctx->pc = 0x22EEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22EECCu: goto label_22eecc;
            case 0x22EF24u: goto label_22ef24;
            case 0x22EF80u: goto label_22ef80;
            case 0x22EFA0u: goto label_22efa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22EECCu;
label_22eecc:
    // 0x22eecc: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22eeccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22eed0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22eed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eed4: 0xc08b852  jal         func_22E148
    ctx->pc = 0x22EED4u;
    SET_GPR_U32(ctx, 31, 0x22EEDCu);
    ctx->pc = 0x22EED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EED4u;
            // 0x22eed8: 0xae0012a4  sw          $zero, 0x12A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EEDCu; }
        if (ctx->pc != 0x22EEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EEDCu; }
        if (ctx->pc != 0x22EEDCu) { return; }
    }
    ctx->pc = 0x22EEDCu;
    // 0x22eedc: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x22EEDCu;
    {
        const bool branch_taken_0x22eedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EEDCu;
            // 0x22eee0: 0x8e0212a4  lw          $v0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eedc) {
            ctx->pc = 0x22F058u;
            goto label_22f058;
        }
    }
    ctx->pc = 0x22EEE4u;
    // 0x22eee4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x22eee8: 0x2463bc70  addiu       $v1, $v1, -0x4390
    ctx->pc = 0x22eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950000));
    // 0x22eeec: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x22eeecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22eef0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x22eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22eef4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22eef8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22EEF8u;
    {
        const bool branch_taken_0x22eef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EEF8u;
            // 0x22eefc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eef8) {
            ctx->pc = 0x22EF18u;
            goto label_22ef18;
        }
    }
    ctx->pc = 0x22EF00u;
    // 0x22ef00: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x22ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22ef04: 0x2442bc68  addiu       $v0, $v0, -0x4398
    ctx->pc = 0x22ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x22ef08: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22ef0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ef10: 0x14430020  bne         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x22EF10u;
    {
        const bool branch_taken_0x22ef10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22EF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF10u;
            // 0x22ef14: 0x8e2212b0  lw          $v0, 0x12B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef10) {
            ctx->pc = 0x22EF94u;
            goto label_22ef94;
        }
    }
    ctx->pc = 0x22EF18u;
label_22ef18:
    // 0x22ef18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22ef1c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x22EF1Cu;
    {
        const bool branch_taken_0x22ef1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF1Cu;
            // 0x22ef20: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef1c) {
            ctx->pc = 0x22F058u;
            goto label_22f058;
        }
    }
    ctx->pc = 0x22EF24u;
label_22ef24:
    // 0x22ef24: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22ef24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22ef28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ef2c: 0xae0212a4  sw          $v0, 0x12A4($s0)
    ctx->pc = 0x22ef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4772), GPR_U32(ctx, 2));
    // 0x22ef30: 0xc08b852  jal         func_22E148
    ctx->pc = 0x22EF30u;
    SET_GPR_U32(ctx, 31, 0x22EF38u);
    ctx->pc = 0x22EF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF30u;
            // 0x22ef34: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF38u; }
        if (ctx->pc != 0x22EF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF38u; }
        if (ctx->pc != 0x22EF38u) { return; }
    }
    ctx->pc = 0x22EF38u;
    // 0x22ef38: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x22EF38u;
    {
        const bool branch_taken_0x22ef38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF38u;
            // 0x22ef3c: 0x8e0212a4  lw          $v0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef38) {
            ctx->pc = 0x22F058u;
            goto label_22f058;
        }
    }
    ctx->pc = 0x22EF40u;
    // 0x22ef40: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x22ef44: 0x2463bc70  addiu       $v1, $v1, -0x4390
    ctx->pc = 0x22ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950000));
    // 0x22ef48: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x22ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22ef4c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x22ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22ef50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22ef54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22EF54u;
    {
        const bool branch_taken_0x22ef54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF54u;
            // 0x22ef58: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef54) {
            ctx->pc = 0x22EF74u;
            goto label_22ef74;
        }
    }
    ctx->pc = 0x22EF5Cu;
    // 0x22ef5c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x22ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22ef60: 0x2442bc68  addiu       $v0, $v0, -0x4398
    ctx->pc = 0x22ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x22ef64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22ef68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ef6c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22EF6Cu;
    {
        const bool branch_taken_0x22ef6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22EF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF6Cu;
            // 0x22ef70: 0x8e2212b0  lw          $v0, 0x12B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef6c) {
            ctx->pc = 0x22EF94u;
            goto label_22ef94;
        }
    }
    ctx->pc = 0x22EF74u;
label_22ef74:
    // 0x22ef74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22ef78: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x22EF78u;
    {
        const bool branch_taken_0x22ef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF78u;
            // 0x22ef7c: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef78) {
            ctx->pc = 0x22F058u;
            goto label_22f058;
        }
    }
    ctx->pc = 0x22EF80u;
label_22ef80:
    // 0x22ef80: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22ef84: 0xc08ba42  jal         func_22E908
    ctx->pc = 0x22EF84u;
    SET_GPR_U32(ctx, 31, 0x22EF8Cu);
    ctx->pc = 0x22EF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF84u;
            // 0x22ef88: 0x8c4412a4  lw          $a0, 0x12A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E908u;
    if (runtime->hasFunction(0x22E908u)) {
        auto targetFn = runtime->lookupFunction(0x22E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF8Cu; }
        if (ctx->pc != 0x22EF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E908_0x22e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF8Cu; }
        if (ctx->pc != 0x22EF8Cu) { return; }
    }
    ctx->pc = 0x22EF8Cu;
    // 0x22ef8c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x22EF8Cu;
    {
        const bool branch_taken_0x22ef8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF8Cu;
            // 0x22ef90: 0x8e2212b0  lw          $v0, 0x12B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef8c) {
            ctx->pc = 0x22F058u;
            goto label_22f058;
        }
    }
    ctx->pc = 0x22EF94u;
label_22ef94:
    // 0x22ef94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22ef98: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x22EF98u;
    {
        const bool branch_taken_0x22ef98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EF98u;
            // 0x22ef9c: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef98) {
            ctx->pc = 0x22F058u;
            goto label_22f058;
        }
    }
    ctx->pc = 0x22EFA0u;
label_22efa0:
    // 0x22efa0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22efa4: 0x2443bc78  addiu       $v1, $v0, -0x4388
    ctx->pc = 0x22efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950008));
    // 0x22efa8: 0x8c42bc78  lw          $v0, -0x4388($v0)
    ctx->pc = 0x22efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950008)));
    // 0x22efac: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x22EFACu;
    {
        const bool branch_taken_0x22efac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EFACu;
            // 0x22efb0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22efac) {
            ctx->pc = 0x22F058u;
            goto label_22f058;
        }
    }
    ctx->pc = 0x22EFB4u;
    // 0x22efb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x22efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22efb8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x22EFB8u;
    {
        const bool branch_taken_0x22efb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EFB8u;
            // 0x22efbc: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22efb8) {
            ctx->pc = 0x22F058u;
            goto label_22f058;
        }
    }
    ctx->pc = 0x22EFC0u;
    // 0x22efc0: 0x8c82bc70  lw          $v0, -0x4390($a0)
    ctx->pc = 0x22efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950000)));
    // 0x22efc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22EFC4u;
    {
        const bool branch_taken_0x22efc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EFC4u;
            // 0x22efc8: 0x2485bc70  addiu       $a1, $a0, -0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22efc4) {
            ctx->pc = 0x22EFE0u;
            goto label_22efe0;
        }
    }
    ctx->pc = 0x22EFCCu;
    // 0x22efcc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22efccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22efd0: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x22efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22efd4: 0x8c42bc68  lw          $v0, -0x4398($v0)
    ctx->pc = 0x22efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949992)));
    // 0x22efd8: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x22EFD8u;
    {
        const bool branch_taken_0x22efd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22EFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EFD8u;
            // 0x22efdc: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22efd8) {
            ctx->pc = 0x22F058u;
            goto label_22f058;
        }
    }
    ctx->pc = 0x22EFE0u;
label_22efe0:
    // 0x22efe0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x22efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22efe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22EFE4u;
    {
        const bool branch_taken_0x22efe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EFE4u;
            // 0x22efe8: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22efe4) {
            ctx->pc = 0x22EFFCu;
            goto label_22effc;
        }
    }
    ctx->pc = 0x22EFECu;
    // 0x22efec: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x22efecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22eff0: 0x8c42bc6c  lw          $v0, -0x4394($v0)
    ctx->pc = 0x22eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949996)));
    // 0x22eff4: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x22EFF4u;
    {
        const bool branch_taken_0x22eff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22EFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EFF4u;
            // 0x22eff8: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eff4) {
            ctx->pc = 0x22F058u;
            goto label_22f058;
        }
    }
    ctx->pc = 0x22EFFCu;
label_22effc:
    // 0x22effc: 0x8c83bc70  lw          $v1, -0x4390($a0)
    ctx->pc = 0x22effcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950000)));
    // 0x22f000: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F000u;
    {
        const bool branch_taken_0x22f000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F000u;
            // 0x22f004: 0x2485bc70  addiu       $a1, $a0, -0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f000) {
            ctx->pc = 0x22F014u;
            goto label_22f014;
        }
    }
    ctx->pc = 0x22F008u;
    // 0x22f008: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x22f008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22f00c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22F00Cu;
    {
        const bool branch_taken_0x22f00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F00Cu;
            // 0x22f010: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f00c) {
            ctx->pc = 0x22F058u;
            goto label_22f058;
        }
    }
    ctx->pc = 0x22F014u;
label_22f014:
    // 0x22f014: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F014u;
    {
        const bool branch_taken_0x22f014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F014u;
            // 0x22f018: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f014) {
            ctx->pc = 0x22F024u;
            goto label_22f024;
        }
    }
    ctx->pc = 0x22F01Cu;
    // 0x22f01c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22f020: 0x8c44c140  lw          $a0, -0x3EC0($v0)
    ctx->pc = 0x22f020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951232)));
label_22f024:
    // 0x22f024: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x22f024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22f028: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F028u;
    {
        const bool branch_taken_0x22f028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F028u;
            // 0x22f02c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f028) {
            ctx->pc = 0x22F03Cu;
            goto label_22f03c;
        }
    }
    ctx->pc = 0x22F030u;
    // 0x22f030: 0x8c43c14c  lw          $v1, -0x3EB4($v0)
    ctx->pc = 0x22f030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951244)));
    // 0x22f034: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x22f034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22f038: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x22f038u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_22f03c:
    // 0x22f03c: 0x288201c6  slti        $v0, $a0, 0x1C6
    ctx->pc = 0x22f03cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)454) ? 1 : 0);
    // 0x22f040: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F040u;
    {
        const bool branch_taken_0x22f040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F040u;
            // 0x22f044: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f040) {
            ctx->pc = 0x22F050u;
            goto label_22f050;
        }
    }
    ctx->pc = 0x22F048u;
    // 0x22f048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22f048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f04c: 0xac6212cc  sw          $v0, 0x12CC($v1)
    ctx->pc = 0x22f04cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4812), GPR_U32(ctx, 2));
label_22f050:
    // 0x22f050: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x22f050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22f054: 0x0  nop
    ctx->pc = 0x22f054u;
    // NOP
label_22f058:
    // 0x22f058: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x22F058u;
    {
        const bool branch_taken_0x22f058 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F058u;
            // 0x22f05c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f058) {
            ctx->pc = 0x22F0B0u;
            goto label_22f0b0;
        }
    }
    ctx->pc = 0x22F060u;
    // 0x22f060: 0x16420011  bne         $s2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22F060u;
    {
        const bool branch_taken_0x22f060 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x22F064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F060u;
            // 0x22f064: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f060) {
            ctx->pc = 0x22F0A8u;
            goto label_22f0a8;
        }
    }
    ctx->pc = 0x22F068u;
    // 0x22f068: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22f068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22f06c: 0x2443bc78  addiu       $v1, $v0, -0x4388
    ctx->pc = 0x22f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950008));
    // 0x22f070: 0x8c42bc78  lw          $v0, -0x4388($v0)
    ctx->pc = 0x22f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950008)));
    // 0x22f074: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F074u;
    {
        const bool branch_taken_0x22f074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F074u;
            // 0x22f078: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f074) {
            ctx->pc = 0x22F084u;
            goto label_22f084;
        }
    }
    ctx->pc = 0x22F07Cu;
    // 0x22f07c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22f080: 0x8c44bec0  lw          $a0, -0x4140($v0)
    ctx->pc = 0x22f080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950592)));
label_22f084:
    // 0x22f084: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x22f084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22f088: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F088u;
    {
        const bool branch_taken_0x22f088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F088u;
            // 0x22f08c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f088) {
            ctx->pc = 0x22F098u;
            goto label_22f098;
        }
    }
    ctx->pc = 0x22F090u;
    // 0x22f090: 0x8c42bf04  lw          $v0, -0x40FC($v0)
    ctx->pc = 0x22f090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950660)));
    // 0x22f094: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x22f094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_22f098:
    // 0x22f098: 0xc08bd2c  jal         func_22F4B0
    ctx->pc = 0x22F098u;
    SET_GPR_U32(ctx, 31, 0x22F0A0u);
    ctx->pc = 0x22F4B0u;
    if (runtime->hasFunction(0x22F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x22F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0A0u; }
        if (ctx->pc != 0x22F0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22f4b0_0x22f4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F0A0u; }
        if (ctx->pc != 0x22F0A0u) { return; }
    }
    ctx->pc = 0x22F0A0u;
    // 0x22f0a0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22f0a4: 0x0  nop
    ctx->pc = 0x22f0a4u;
    // NOP
label_22f0a8:
    // 0x22f0a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22f0ac: 0xac6212b0  sw          $v0, 0x12B0($v1)
    ctx->pc = 0x22f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
label_22f0b0:
    // 0x22f0b0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x22f0b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f0b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22f0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f0b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22f0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f0bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22f0bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f0c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x22F0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F0C4u;
            // 0x22f0c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22EECCu: goto label_22eecc;
            case 0x22EF18u: goto label_22ef18;
            case 0x22EF24u: goto label_22ef24;
            case 0x22EF74u: goto label_22ef74;
            case 0x22EF80u: goto label_22ef80;
            case 0x22EF94u: goto label_22ef94;
            case 0x22EFA0u: goto label_22efa0;
            case 0x22EFE0u: goto label_22efe0;
            case 0x22EFFCu: goto label_22effc;
            case 0x22F014u: goto label_22f014;
            case 0x22F024u: goto label_22f024;
            case 0x22F03Cu: goto label_22f03c;
            case 0x22F050u: goto label_22f050;
            case 0x22F058u: goto label_22f058;
            case 0x22F084u: goto label_22f084;
            case 0x22F098u: goto label_22f098;
            case 0x22F0A8u: goto label_22f0a8;
            case 0x22F0B0u: goto label_22f0b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22F0CCu;
    // 0x22f0cc: 0x0  nop
    ctx->pc = 0x22f0ccu;
    // NOP
}
