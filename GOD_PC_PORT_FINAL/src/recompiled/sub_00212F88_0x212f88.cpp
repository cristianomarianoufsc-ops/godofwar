#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212F88
// Address: 0x212f88 - 0x213068
void sub_00212F88_0x212f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212F88_0x212f88");
#endif

    ctx->pc = 0x212f88u;

    // 0x212f88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x212f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x212f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x212f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212f90: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x212f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x212f94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x212f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x212f98: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x212f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212f9c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x212f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x212fa0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x212fa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fa4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x212fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x212fa8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x212fa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x212fb0: 0x8e4301dc  lw          $v1, 0x1DC($s2)
    ctx->pc = 0x212fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
    // 0x212fb4: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x212FB4u;
    {
        const bool branch_taken_0x212fb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x212FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212FB4u;
            // 0x212fb8: 0x8c70001c  lw          $s0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212fb4) {
            ctx->pc = 0x212FE4u;
            goto label_212fe4;
        }
    }
    ctx->pc = 0x212FBCu;
    // 0x212fbc: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x212FBCu;
    {
        const bool branch_taken_0x212fbc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x212FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212FBCu;
            // 0x212fc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212fbc) {
            ctx->pc = 0x212FD4u;
            goto label_212fd4;
        }
    }
    ctx->pc = 0x212FC4u;
    // 0x212fc4: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x212FC4u;
    {
        const bool branch_taken_0x212fc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x212FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212FC4u;
            // 0x212fc8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212fc4) {
            ctx->pc = 0x212FF4u;
            goto label_212ff4;
        }
    }
    ctx->pc = 0x212FCCu;
    // 0x212fcc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x212FCCu;
    {
        const bool branch_taken_0x212fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212fcc) {
            ctx->pc = 0x213020u;
            goto label_213020;
        }
    }
    ctx->pc = 0x212FD4u;
label_212fd4:
    // 0x212fd4: 0x8e4401c0  lw          $a0, 0x1C0($s2)
    ctx->pc = 0x212fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x212fd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x212FDCu;
    {
        const bool branch_taken_0x212fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212FDCu;
            // 0x212fe0: 0x248400d4  addiu       $a0, $a0, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212fdc) {
            ctx->pc = 0x213000u;
            goto label_213000;
        }
    }
    ctx->pc = 0x212FE4u;
label_212fe4:
    // 0x212fe4: 0x8e4401c0  lw          $a0, 0x1C0($s2)
    ctx->pc = 0x212fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x212fe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x212FECu;
    {
        const bool branch_taken_0x212fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212FECu;
            // 0x212ff0: 0x248400ec  addiu       $a0, $a0, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212fec) {
            ctx->pc = 0x213000u;
            goto label_213000;
        }
    }
    ctx->pc = 0x212FF4u;
label_212ff4:
    // 0x212ff4: 0x8e4401c0  lw          $a0, 0x1C0($s2)
    ctx->pc = 0x212ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x212ff8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ffc: 0x24840104  addiu       $a0, $a0, 0x104
    ctx->pc = 0x212ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
label_213000:
    // 0x213000: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x213000u;
    SET_GPR_U32(ctx, 31, 0x213008u);
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213008u; }
        if (ctx->pc != 0x213008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213008u; }
        if (ctx->pc != 0x213008u) { return; }
    }
    ctx->pc = 0x213008u;
    // 0x213008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21300c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21300cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213010: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x213010u;
    SET_GPR_U32(ctx, 31, 0x213018u);
    ctx->pc = 0x213014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213010u;
            // 0x213014: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213018u; }
        if (ctx->pc != 0x213018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213018u; }
        if (ctx->pc != 0x213018u) { return; }
    }
    ctx->pc = 0x213018u;
    // 0x213018: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x213018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21301c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_213020:
    // 0x213020: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x213020u;
    {
        const bool branch_taken_0x213020 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x213024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213020u;
            // 0x213024: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213020) {
            ctx->pc = 0x213044u;
            goto label_213044;
        }
    }
    ctx->pc = 0x213028u;
    // 0x213028: 0x8e4401dc  lw          $a0, 0x1DC($s2)
    ctx->pc = 0x213028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
    // 0x21302c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21302cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213030: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x213030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213034: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x213034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213038: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x213038u;
    SET_GPR_U32(ctx, 31, 0x213040u);
    ctx->pc = 0x21303Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213038u;
            // 0x21303c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213040u; }
        if (ctx->pc != 0x213040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213040u; }
        if (ctx->pc != 0x213040u) { return; }
    }
    ctx->pc = 0x213040u;
    // 0x213040: 0xae5301d4  sw          $s3, 0x1D4($s2)
    ctx->pc = 0x213040u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 19));
label_213044:
    // 0x213044: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x213044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213048: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x213048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21304c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x21304cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213050: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x213050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213054: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x213054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21305c: 0x3e00008  jr          $ra
    ctx->pc = 0x21305Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21305Cu;
            // 0x213060: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212FD4u: goto label_212fd4;
            case 0x212FE4u: goto label_212fe4;
            case 0x212FF4u: goto label_212ff4;
            case 0x213000u: goto label_213000;
            case 0x213020u: goto label_213020;
            case 0x213044u: goto label_213044;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213064u;
    // 0x213064: 0x0  nop
    ctx->pc = 0x213064u;
    // NOP
}
