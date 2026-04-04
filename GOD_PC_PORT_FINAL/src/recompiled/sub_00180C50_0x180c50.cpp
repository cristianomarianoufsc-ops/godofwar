#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180C50
// Address: 0x180c50 - 0x180cd8
void sub_00180C50_0x180c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180C50_0x180c50");
#endif

    ctx->pc = 0x180c50u;

    // 0x180c50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x180c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x180c54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x180c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x180c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x180c5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x180c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x180c60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x180c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x180c64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x180c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180c6c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x180c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x180c70: 0xc0603a4  jal         func_180E90
    ctx->pc = 0x180C70u;
    SET_GPR_U32(ctx, 31, 0x180C78u);
    ctx->pc = 0x180C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180C70u;
            // 0x180c74: 0x8e330004  lw          $s3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180E90u;
    if (runtime->hasFunction(0x180E90u)) {
        auto targetFn = runtime->lookupFunction(0x180E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C78u; }
        if (ctx->pc != 0x180C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180E90_0x180e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C78u; }
        if (ctx->pc != 0x180C78u) { return; }
    }
    ctx->pc = 0x180C78u;
    // 0x180c78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x180c78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c7c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x180c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x180c80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x180c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x180c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c88: 0xc05ff44  jal         func_17FD10
    ctx->pc = 0x180C88u;
    SET_GPR_U32(ctx, 31, 0x180C90u);
    ctx->pc = 0x180C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180C88u;
            // 0x180c8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FD10u;
    if (runtime->hasFunction(0x17FD10u)) {
        auto targetFn = runtime->lookupFunction(0x17FD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C90u; }
        if (ctx->pc != 0x180C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FD10_0x17fd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C90u; }
        if (ctx->pc != 0x180C90u) { return; }
    }
    ctx->pc = 0x180C90u;
    // 0x180c90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x180c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c94: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x180C94u;
    {
        const bool branch_taken_0x180c94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x180C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180C94u;
            // 0x180c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c94) {
            ctx->pc = 0x180CB0u;
            goto label_180cb0;
        }
    }
    ctx->pc = 0x180C9Cu;
    // 0x180c9c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x180c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x180ca0: 0xc05ff1a  jal         func_17FC68
    ctx->pc = 0x180CA0u;
    SET_GPR_U32(ctx, 31, 0x180CA8u);
    ctx->pc = 0x180CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180CA0u;
            // 0x180ca4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FC68u;
    if (runtime->hasFunction(0x17FC68u)) {
        auto targetFn = runtime->lookupFunction(0x17FC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180CA8u; }
        if (ctx->pc != 0x180CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FC68_0x17fc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180CA8u; }
        if (ctx->pc != 0x180CA8u) { return; }
    }
    ctx->pc = 0x180CA8u;
    // 0x180ca8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x180ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180cac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x180cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_180cb0:
    // 0x180cb0: 0xc060342  jal         func_180D08
    ctx->pc = 0x180CB0u;
    SET_GPR_U32(ctx, 31, 0x180CB8u);
    ctx->pc = 0x180CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180CB0u;
            // 0x180cb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180D08u;
    if (runtime->hasFunction(0x180D08u)) {
        auto targetFn = runtime->lookupFunction(0x180D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180CB8u; }
        if (ctx->pc != 0x180CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D08_0x180d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180CB8u; }
        if (ctx->pc != 0x180CB8u) { return; }
    }
    ctx->pc = 0x180CB8u;
    // 0x180cb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x180cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180cbc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x180cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180cc0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x180cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180cc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180cc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180cc8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x180cc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x180CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180CD0u;
            // 0x180cd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180CB0u: goto label_180cb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180CD8u;
}
