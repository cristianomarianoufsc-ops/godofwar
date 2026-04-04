#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156BD0
// Address: 0x156bd0 - 0x156c68
void sub_00156BD0_0x156bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156BD0_0x156bd0");
#endif

    ctx->pc = 0x156bd0u;

    // 0x156bd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x156bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x156bd4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x156bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x156bd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x156bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x156bdc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x156bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x156be0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x156be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x156be4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x156be4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156be8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156bec: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x156becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x156bf0: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x156bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x156bf4: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x156bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x156bf8: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x156bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x156bfc: 0x24520020  addiu       $s2, $v0, 0x20
    ctx->pc = 0x156bfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x156c00: 0x12120012  beq         $s0, $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x156C00u;
    {
        const bool branch_taken_0x156c00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x156C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156C00u;
            // 0x156c04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c00) {
            ctx->pc = 0x156C4Cu;
            goto label_156c4c;
        }
    }
    ctx->pc = 0x156C08u;
    // 0x156c08: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x156c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x156c0c: 0x0  nop
    ctx->pc = 0x156c0cu;
    // NOP
label_156c10:
    // 0x156c10: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x156c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x156c14: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156C14u;
    {
        const bool branch_taken_0x156c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156C14u;
            // 0x156c18: 0x3862000d  xori        $v0, $v1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c14) {
            ctx->pc = 0x156C24u;
            goto label_156c24;
        }
    }
    ctx->pc = 0x156C1Cu;
    // 0x156c1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x156C1Cu;
    {
        const bool branch_taken_0x156c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156C1Cu;
            // 0x156c20: 0x202880a  movz        $s1, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c1c) {
            ctx->pc = 0x156C40u;
            goto label_156c40;
        }
    }
    ctx->pc = 0x156C24u;
label_156c24:
    // 0x156c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c28: 0xc046bb2  jal         func_11AEC8
    ctx->pc = 0x156C28u;
    SET_GPR_U32(ctx, 31, 0x156C30u);
    ctx->pc = 0x156C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156C28u;
            // 0x156c2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AEC8u;
    if (runtime->hasFunction(0x11AEC8u)) {
        auto targetFn = runtime->lookupFunction(0x11AEC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156C30u; }
        if (ctx->pc != 0x156C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011AEC8_0x11aec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156C30u; }
        if (ctx->pc != 0x156C30u) { return; }
    }
    ctx->pc = 0x156C30u;
    // 0x156c30: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x156C30u;
    {
        const bool branch_taken_0x156c30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x156C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156C30u;
            // 0x156c34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c30) {
            ctx->pc = 0x156C40u;
            goto label_156c40;
        }
    }
    ctx->pc = 0x156C38u;
    // 0x156c38: 0xc046f2e  jal         func_11BCB8
    ctx->pc = 0x156C38u;
    SET_GPR_U32(ctx, 31, 0x156C40u);
    ctx->pc = 0x156C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156C38u;
            // 0x156c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BCB8u;
    if (runtime->hasFunction(0x11BCB8u)) {
        auto targetFn = runtime->lookupFunction(0x11BCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156C40u; }
        if (ctx->pc != 0x156C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BCB8_0x11bcb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156C40u; }
        if (ctx->pc != 0x156C40u) { return; }
    }
    ctx->pc = 0x156C40u;
label_156c40:
    // 0x156c40: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x156c40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156c44: 0x5612fff2  bnel        $s0, $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x156C44u;
    {
        const bool branch_taken_0x156c44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x156c44) {
            ctx->pc = 0x156C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156C44u;
            // 0x156c48: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156C10u;
            runtime->cooperativeGuestYield();
            goto label_156c10;
        }
    }
    ctx->pc = 0x156C4Cu;
label_156c4c:
    // 0x156c4c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x156c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x156c50: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x156c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156c54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x156c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156c58: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x156c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156c5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156c60: 0x3e00008  jr          $ra
    ctx->pc = 0x156C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156C60u;
            // 0x156c64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156C10u: goto label_156c10;
            case 0x156C24u: goto label_156c24;
            case 0x156C40u: goto label_156c40;
            case 0x156C4Cu: goto label_156c4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156C68u;
}
