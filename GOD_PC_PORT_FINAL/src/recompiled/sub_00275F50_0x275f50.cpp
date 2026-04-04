#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00275F50
// Address: 0x275f50 - 0x2760f0
void sub_00275F50_0x275f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275F50_0x275f50");
#endif

    ctx->pc = 0x275f50u;

    // 0x275f50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x275f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x275f54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275f58: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x275f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x275f5c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x275f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x275f60: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x275f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x275f64: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x275f64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275f68: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x275f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x275f6c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x275f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x275f70: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x275f70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275f74: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x275f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x275f78: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x275f78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275f7c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x275f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x275f80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x275f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x275f84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x275f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275f88: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x275f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x275f8c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x275f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275f90: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x275f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x275f94: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x275f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x275f98: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x275f98u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x275f9c: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x275f9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x275fa0: 0x1522000d  bne         $t1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x275FA0u;
    {
        const bool branch_taken_0x275fa0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x275FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275FA0u;
            // 0x275fa4: 0x8fbe00c0  lw          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275fa0) {
            ctx->pc = 0x275FD8u;
            goto label_275fd8;
        }
    }
    ctx->pc = 0x275FA8u;
    // 0x275fa8: 0x55400036  bnel        $t2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x275FA8u;
    {
        const bool branch_taken_0x275fa8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x275fa8) {
            ctx->pc = 0x275FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x275FA8u;
            // 0x275fac: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276084u;
            goto label_276084;
        }
    }
    ctx->pc = 0x275FB0u;
    // 0x275fb0: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x275FB0u;
    {
        const bool branch_taken_0x275fb0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x275fb0) {
            ctx->pc = 0x275FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x275FB0u;
            // 0x275fb4: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276084u;
            goto label_276084;
        }
    }
    ctx->pc = 0x275FB8u;
    // 0x275fb8: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x275FB8u;
    SET_GPR_U32(ctx, 31, 0x275FC0u);
    ctx->pc = 0x275FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275FB8u;
            // 0x275fbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275FC0u; }
        if (ctx->pc != 0x275FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275FC0u; }
        if (ctx->pc != 0x275FC0u) { return; }
    }
    ctx->pc = 0x275FC0u;
    // 0x275fc0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x275fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275fc4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275fc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275fcc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x275fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x275fd0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x275FD0u;
    {
        const bool branch_taken_0x275fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275FD0u;
            // 0x275fd4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275fd0) {
            ctx->pc = 0x276080u;
            goto label_276080;
        }
    }
    ctx->pc = 0x275FD8u;
label_275fd8:
    // 0x275fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275fdc: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x275FDCu;
    SET_GPR_U32(ctx, 31, 0x275FE4u);
    ctx->pc = 0x275FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275FDCu;
            // 0x275fe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275FE4u; }
        if (ctx->pc != 0x275FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275FE4u; }
        if (ctx->pc != 0x275FE4u) { return; }
    }
    ctx->pc = 0x275FE4u;
    // 0x275fe4: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x275fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275fe8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x275fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275fec: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x275fecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275ff0: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x275ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x275ff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ff8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x275ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x275ffc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x275ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276000: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x276000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x276004: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x276004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276008: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x276008u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27600c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x27600cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276010: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x276010u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276014: 0xc09d6ca  jal         func_275B28
    ctx->pc = 0x276014u;
    SET_GPR_U32(ctx, 31, 0x27601Cu);
    ctx->pc = 0x276018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276014u;
            // 0x276018: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275B28u;
    if (runtime->hasFunction(0x275B28u)) {
        auto targetFn = runtime->lookupFunction(0x275B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27601Cu; }
        if (ctx->pc != 0x27601Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275B28_0x275b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27601Cu; }
        if (ctx->pc != 0x27601Cu) { return; }
    }
    ctx->pc = 0x27601Cu;
    // 0x27601c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27601cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276020: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x276020u;
    SET_GPR_U32(ctx, 31, 0x276028u);
    ctx->pc = 0x276024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276020u;
            // 0x276024: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276028u; }
        if (ctx->pc != 0x276028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276028u; }
        if (ctx->pc != 0x276028u) { return; }
    }
    ctx->pc = 0x276028u;
    // 0x276028: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x276028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x27602c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x27602cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x276030: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x276030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x276034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x276034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276038: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x276038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27603c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x27603cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276040: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x276040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276044: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x276044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276048: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x276048u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27604c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27604cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x276050: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x276050u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x276054: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x276054u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276058: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x276058u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27605c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x27605cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x276060: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x276060u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276064: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x276064u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276068: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x276068u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27606c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27606cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276070: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x276070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276074: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x276074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276078: 0x809d6ca  j           func_275B28
    ctx->pc = 0x276078u;
    ctx->pc = 0x27607Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276078u;
            // 0x27607c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275B28u;
    if (runtime->hasFunction(0x275B28u)) {
        auto targetFn = runtime->lookupFunction(0x275B28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00275B28_0x275b28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x276080u;
label_276080:
    // 0x276080: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x276080u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_276084:
    // 0x276084: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x276084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276088: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x276088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x27608c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x27608cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276090: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x276090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276094: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x276094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276098: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x276098u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27609c: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x27609cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2760a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2760a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2760a4: 0xc09d6ca  jal         func_275B28
    ctx->pc = 0x2760A4u;
    SET_GPR_U32(ctx, 31, 0x2760ACu);
    ctx->pc = 0x2760A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2760A4u;
            // 0x2760a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275B28u;
    if (runtime->hasFunction(0x275B28u)) {
        auto targetFn = runtime->lookupFunction(0x275B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2760ACu; }
        if (ctx->pc != 0x2760ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275B28_0x275b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2760ACu; }
        if (ctx->pc != 0x2760ACu) { return; }
    }
    ctx->pc = 0x2760ACu;
    // 0x2760ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2760acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2760b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2760b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2760b4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2760b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2760b8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2760b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2760bc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2760bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2760c0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2760c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2760c4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2760c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2760c8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2760c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2760cc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2760ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2760d0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2760d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2760d4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2760d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2760d8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2760d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2760dc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2760dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2760e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2760e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2760e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2760E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2760E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2760E4u;
            // 0x2760e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x275FD8u: goto label_275fd8;
            case 0x276080u: goto label_276080;
            case 0x276084u: goto label_276084;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2760ECu;
    // 0x2760ec: 0x0  nop
    ctx->pc = 0x2760ecu;
    // NOP
}
