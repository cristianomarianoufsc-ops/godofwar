#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180BC8
// Address: 0x180bc8 - 0x180c50
void sub_00180BC8_0x180bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180BC8_0x180bc8");
#endif

    ctx->pc = 0x180bc8u;

    // 0x180bc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x180bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x180bcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x180bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180bd0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x180bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x180bd4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x180bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x180bd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x180bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x180bdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x180bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180be0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180be4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x180be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x180be8: 0xc0603a4  jal         func_180E90
    ctx->pc = 0x180BE8u;
    SET_GPR_U32(ctx, 31, 0x180BF0u);
    ctx->pc = 0x180BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180BE8u;
            // 0x180bec: 0x8e330004  lw          $s3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180E90u;
    if (runtime->hasFunction(0x180E90u)) {
        auto targetFn = runtime->lookupFunction(0x180E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180BF0u; }
        if (ctx->pc != 0x180BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180E90_0x180e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180BF0u; }
        if (ctx->pc != 0x180BF0u) { return; }
    }
    ctx->pc = 0x180BF0u;
    // 0x180bf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x180bf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180bf4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x180bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x180bf8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x180bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180bfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x180bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c00: 0xc05ff44  jal         func_17FD10
    ctx->pc = 0x180C00u;
    SET_GPR_U32(ctx, 31, 0x180C08u);
    ctx->pc = 0x180C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180C00u;
            // 0x180c04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FD10u;
    if (runtime->hasFunction(0x17FD10u)) {
        auto targetFn = runtime->lookupFunction(0x17FD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C08u; }
        if (ctx->pc != 0x180C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FD10_0x17fd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C08u; }
        if (ctx->pc != 0x180C08u) { return; }
    }
    ctx->pc = 0x180C08u;
    // 0x180c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x180c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c0c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x180C0Cu;
    {
        const bool branch_taken_0x180c0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x180C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180C0Cu;
            // 0x180c10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c0c) {
            ctx->pc = 0x180C28u;
            goto label_180c28;
        }
    }
    ctx->pc = 0x180C14u;
    // 0x180c14: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x180c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x180c18: 0xc05fef0  jal         func_17FBC0
    ctx->pc = 0x180C18u;
    SET_GPR_U32(ctx, 31, 0x180C20u);
    ctx->pc = 0x180C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180C18u;
            // 0x180c1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FBC0u;
    if (runtime->hasFunction(0x17FBC0u)) {
        auto targetFn = runtime->lookupFunction(0x17FBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C20u; }
        if (ctx->pc != 0x180C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FBC0_0x17fbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C20u; }
        if (ctx->pc != 0x180C20u) { return; }
    }
    ctx->pc = 0x180C20u;
    // 0x180c20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x180c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x180c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_180c28:
    // 0x180c28: 0xc060342  jal         func_180D08
    ctx->pc = 0x180C28u;
    SET_GPR_U32(ctx, 31, 0x180C30u);
    ctx->pc = 0x180C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180C28u;
            // 0x180c2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180D08u;
    if (runtime->hasFunction(0x180D08u)) {
        auto targetFn = runtime->lookupFunction(0x180D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C30u; }
        if (ctx->pc != 0x180C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D08_0x180d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C30u; }
        if (ctx->pc != 0x180C30u) { return; }
    }
    ctx->pc = 0x180C30u;
    // 0x180c30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x180c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c34: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x180c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180c38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x180c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180c3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180c40: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x180c40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180c48: 0x3e00008  jr          $ra
    ctx->pc = 0x180C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180C48u;
            // 0x180c4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180C28u: goto label_180c28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180C50u;
}
