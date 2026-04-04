#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131F40
// Address: 0x131f40 - 0x132088
void sub_00131F40_0x131f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131F40_0x131f40");
#endif

    ctx->pc = 0x131f40u;

    // 0x131f40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x131f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x131f44: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x131f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x131f48: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x131f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x131f4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x131f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f50: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x131f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x131f54: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x131f54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f58: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x131f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x131f5c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x131f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x131f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x131f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131f68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x131f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f6c: 0xc08c85c  jal         func_232170
    ctx->pc = 0x131F6Cu;
    SET_GPR_U32(ctx, 31, 0x131F74u);
    ctx->pc = 0x131F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131F6Cu;
            // 0x131f70: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232170u;
    if (runtime->hasFunction(0x232170u)) {
        auto targetFn = runtime->lookupFunction(0x232170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131F74u; }
        if (ctx->pc != 0x131F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232170_0x232170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131F74u; }
        if (ctx->pc != 0x131F74u) { return; }
    }
    ctx->pc = 0x131F74u;
    // 0x131f74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x131f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f78: 0x56400011  bnel        $s2, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x131F78u;
    {
        const bool branch_taken_0x131f78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x131f78) {
            ctx->pc = 0x131F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131F78u;
            // 0x131f7c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131FC0u;
            goto label_131fc0;
        }
    }
    ctx->pc = 0x131F80u;
    // 0x131f80: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x131F80u;
    SET_GPR_U32(ctx, 31, 0x131F88u);
    ctx->pc = 0x131F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131F80u;
            // 0x131f84: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131F88u; }
        if (ctx->pc != 0x131F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131F88u; }
        if (ctx->pc != 0x131F88u) { return; }
    }
    ctx->pc = 0x131F88u;
    // 0x131f88: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x131f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x131f8c: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x131f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x131f90: 0x8c63be00  lw          $v1, -0x4200($v1)
    ctx->pc = 0x131f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950400)));
    // 0x131f94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x131f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f98: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x131f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x131f9c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x131f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x131fa0: 0xc08e604  jal         func_239810
    ctx->pc = 0x131FA0u;
    SET_GPR_U32(ctx, 31, 0x131FA8u);
    ctx->pc = 0x131FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131FA0u;
            // 0x131fa4: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239810u;
    if (runtime->hasFunction(0x239810u)) {
        auto targetFn = runtime->lookupFunction(0x239810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131FA8u; }
        if (ctx->pc != 0x131FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239810_0x239820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131FA8u; }
        if (ctx->pc != 0x131FA8u) { return; }
    }
    ctx->pc = 0x131FA8u;
    // 0x131fa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fac: 0xafb40004  sw          $s4, 0x4($sp)
    ctx->pc = 0x131facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 20));
    // 0x131fb0: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x131fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x131fb4: 0xc08c996  jal         func_232658
    ctx->pc = 0x131FB4u;
    SET_GPR_U32(ctx, 31, 0x131FBCu);
    ctx->pc = 0x131FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131FB4u;
            // 0x131fb8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232658u;
    if (runtime->hasFunction(0x232658u)) {
        auto targetFn = runtime->lookupFunction(0x232658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131FBCu; }
        if (ctx->pc != 0x131FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232658_0x232658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131FBCu; }
        if (ctx->pc != 0x131FBCu) { return; }
    }
    ctx->pc = 0x131FBCu;
    // 0x131fbc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x131fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_131fc0:
    // 0x131fc0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x131fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x131fc4: 0x1a000028  blez        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x131FC4u;
    {
        const bool branch_taken_0x131fc4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x131FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131FC4u;
            // 0x131fc8: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131fc4) {
            ctx->pc = 0x132068u;
            goto label_132068;
        }
    }
    ctx->pc = 0x131FCCu;
    // 0x131fcc: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x131fccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131fd0:
    // 0x131fd0: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x131fd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x131fd4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x131fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x131fd8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x131fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x131fdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x131fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131fe0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x131fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131fe4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x131fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fe8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x131fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131fec: 0x2651000c  addiu       $s1, $s2, 0xC
    ctx->pc = 0x131fecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x131ff0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x131ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x131ff4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x131ff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x131ff8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x131ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x131ffc: 0x40f809  jalr        $v0
    ctx->pc = 0x131FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132004u);
        ctx->pc = 0x132000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131FFCu;
            // 0x132000: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x132004u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131FC0u: goto label_131fc0;
            case 0x131FD0u: goto label_131fd0;
            case 0x132068u: goto label_132068;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132004u; }
            if (ctx->pc != 0x132004u) { return; }
        }
        }
    }
    ctx->pc = 0x132004u;
    // 0x132004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132008: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x132008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x13200c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13200cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132010: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x132010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x132014: 0xc04c398  jal         func_130E60
    ctx->pc = 0x132014u;
    SET_GPR_U32(ctx, 31, 0x13201Cu);
    ctx->pc = 0x132018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132014u;
            // 0x132018: 0xae0200f8  sw          $v0, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130E60u;
    if (runtime->hasFunction(0x130E60u)) {
        auto targetFn = runtime->lookupFunction(0x130E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13201Cu; }
        if (ctx->pc != 0x13201Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130E60_0x130e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13201Cu; }
        if (ctx->pc != 0x13201Cu) { return; }
    }
    ctx->pc = 0x13201Cu;
    // 0x13201c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13201cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x132020: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x132020u;
    SET_GPR_U32(ctx, 31, 0x132028u);
    ctx->pc = 0x132024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132020u;
            // 0x132024: 0x8c447910  lw          $a0, 0x7910($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132028u; }
        if (ctx->pc != 0x132028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132028u; }
        if (ctx->pc != 0x132028u) { return; }
    }
    ctx->pc = 0x132028u;
    // 0x132028: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x132028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13202c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x13202cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x132030: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x132030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x132034: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x132034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x132038: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x132038u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x13203c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x13203cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x132040: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x132040u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x132044: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x132044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x132048: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x132048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x13204c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13204cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x132050: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x132050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x132054: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x132054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x132058: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x132058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x13205c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x13205cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x132060: 0x1660ffdb  bnez        $s3, . + 4 + (-0x25 << 2)
    ctx->pc = 0x132060u;
    {
        const bool branch_taken_0x132060 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x132064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132060u;
            // 0x132064: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132060) {
            ctx->pc = 0x131FD0u;
            runtime->cooperativeGuestYield();
            goto label_131fd0;
        }
    }
    ctx->pc = 0x132068u;
label_132068:
    // 0x132068: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x132068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13206c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x13206cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132070: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x132070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132074: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x132074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132078: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x132078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13207c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13207cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132080: 0x3e00008  jr          $ra
    ctx->pc = 0x132080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132080u;
            // 0x132084: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131FC0u: goto label_131fc0;
            case 0x131FD0u: goto label_131fd0;
            case 0x132068u: goto label_132068;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132088u;
}
