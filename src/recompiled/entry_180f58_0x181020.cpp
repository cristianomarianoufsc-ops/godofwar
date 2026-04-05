#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_180f58
// Address: 0x180f58 - 0x181020
void entry_180f58_0x181020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_180f58_0x181020");
#endif

    ctx->pc = 0x180f58u;

label_180f58:
    // 0x180f58: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x180f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x180f5c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x180f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x180f60: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x180f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
    // 0x180f64: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x180f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x180f68: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x180f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
    // 0x180f6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x180f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f70: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x180f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
    // 0x180f74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x180f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f78: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x180f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
    // 0x180f7c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x180f7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f80: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x180f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
    // 0x180f84: 0x7a403  sra         $s4, $a3, 16
    ctx->pc = 0x180f84u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 7), 16));
    // 0x180f88: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x180f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
    // 0x180f8c: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x180f8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x180f90: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x180F90u;
    {
        const bool branch_taken_0x180f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x180F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180F90u;
            // 0x180f94: 0x8c900008  lw          $s0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f90) {
            ctx->pc = 0x180FB0u;
            goto label_180fb0;
        }
    }
    ctx->pc = 0x180F98u;
    // 0x180f98: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x180f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x180f9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x180f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180fa0: 0xc0603d6  jal         func_180F58
    ctx->pc = 0x180FA0u;
    SET_GPR_U32(ctx, 31, 0x180FA8u);
    ctx->pc = 0x180FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180FA0u;
            // 0x180fa4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180F58u;
    runtime->cooperativeGuestYield();
    goto label_180f58;
    ctx->pc = 0x180FA8u;
label_180fa8:
    // 0x180fa8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x180FA8u;
    {
        const bool branch_taken_0x180fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180FA8u;
            // 0x180fac: 0x7bb00250  lq          $s0, 0x250($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180fa8) {
            ctx->pc = 0x181000u;
            goto label_181000;
        }
    }
    ctx->pc = 0x180FB0u;
label_180fb0:
    // 0x180fb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x180fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180fb4: 0xc060384  jal         func_180E10
    ctx->pc = 0x180FB4u;
    SET_GPR_U32(ctx, 31, 0x180FBCu);
    ctx->pc = 0x180FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180FB4u;
            // 0x180fb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180E10u;
    if (runtime->hasFunction(0x180E10u)) {
        auto targetFn = runtime->lookupFunction(0x180E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FBCu; }
        if (ctx->pc != 0x180FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_180e10_0x180e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FBCu; }
        if (ctx->pc != 0x180FBCu) { return; }
    }
    ctx->pc = 0x180FBCu;
    // 0x180fbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x180fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180fc0: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x180FC0u;
    SET_GPR_U32(ctx, 31, 0x180FC8u);
    ctx->pc = 0x180FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180FC0u;
            // 0x180fc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FC8u; }
        if (ctx->pc != 0x180FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FC8u; }
        if (ctx->pc != 0x180FC8u) { return; }
    }
    ctx->pc = 0x180FC8u;
    // 0x180fc8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x180FC8u;
    {
        const bool branch_taken_0x180fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180FC8u;
            // 0x180fcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180fc8) {
            ctx->pc = 0x180FF8u;
            goto label_180ff8;
        }
    }
    ctx->pc = 0x180FD0u;
    // 0x180fd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x180fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180fd4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x180fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180fd8: 0xc05ff44  jal         func_17FD10
    ctx->pc = 0x180FD8u;
    SET_GPR_U32(ctx, 31, 0x180FE0u);
    ctx->pc = 0x180FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180FD8u;
            // 0x180fdc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FD10u;
    if (runtime->hasFunction(0x17FD10u)) {
        auto targetFn = runtime->lookupFunction(0x17FD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FE0u; }
        if (ctx->pc != 0x180FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FD10_0x17fd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FE0u; }
        if (ctx->pc != 0x180FE0u) { return; }
    }
    ctx->pc = 0x180FE0u;
    // 0x180fe0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x180fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180fe4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x180FE4u;
    {
        const bool branch_taken_0x180fe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x180FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180FE4u;
            // 0x180fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180fe4) {
            ctx->pc = 0x180FFCu;
            goto label_180ffc;
        }
    }
    ctx->pc = 0x180FECu;
    // 0x180fec: 0x1620fff0  bnez        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x180FECu;
    {
        const bool branch_taken_0x180fec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x180FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180FECu;
            // 0x180ff0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180fec) {
            ctx->pc = 0x180FB0u;
            runtime->cooperativeGuestYield();
            goto label_180fb0;
        }
    }
    ctx->pc = 0x180FF4u;
    // 0x180ff4: 0x0  nop
    ctx->pc = 0x180ff4u;
    // NOP
label_180ff8:
    // 0x180ff8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x180ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180ffc:
    // 0x180ffc: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x180ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_181000:
    // 0x181000: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x181000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x181004: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x181004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x181008: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x181008u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x18100c: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x18100cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x181010: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x181010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x181014: 0x3e00008  jr          $ra
    ctx->pc = 0x181014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181014u;
            // 0x181018: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180F58u: goto label_180f58;
            case 0x180FA8u: goto label_180fa8;
            case 0x180FB0u: goto label_180fb0;
            case 0x180FF8u: goto label_180ff8;
            case 0x180FFCu: goto label_180ffc;
            case 0x181000u: goto label_181000;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18101Cu;
    // 0x18101c: 0x0  nop
    ctx->pc = 0x18101cu;
    // NOP
}
