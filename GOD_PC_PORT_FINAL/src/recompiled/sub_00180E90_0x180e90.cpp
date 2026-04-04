#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180E90
// Address: 0x180e90 - 0x180f58
void sub_00180E90_0x180e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180E90_0x180e90");
#endif

    ctx->pc = 0x180e90u;

label_180e90:
    // 0x180e90: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x180e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x180e94: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x180e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x180e98: 0x7fb00240  sq          $s0, 0x240($sp)
    ctx->pc = 0x180e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 16));
    // 0x180e9c: 0x7fb10230  sq          $s1, 0x230($sp)
    ctx->pc = 0x180e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 17));
    // 0x180ea0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x180ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ea4: 0x7fb30210  sq          $s3, 0x210($sp)
    ctx->pc = 0x180ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 19));
    // 0x180ea8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x180ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180eac: 0x7fb20220  sq          $s2, 0x220($sp)
    ctx->pc = 0x180eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 18));
    // 0x180eb0: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x180eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
    // 0x180eb4: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x180eb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x180eb8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x180EB8u;
    {
        const bool branch_taken_0x180eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x180EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180EB8u;
            // 0x180ebc: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180eb8) {
            ctx->pc = 0x180EE8u;
            goto label_180ee8;
        }
    }
    ctx->pc = 0x180EC0u;
    // 0x180ec0: 0xc060342  jal         func_180D08
    ctx->pc = 0x180EC0u;
    SET_GPR_U32(ctx, 31, 0x180EC8u);
    ctx->pc = 0x180EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180EC0u;
            // 0x180ec4: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180D08u;
    if (runtime->hasFunction(0x180D08u)) {
        auto targetFn = runtime->lookupFunction(0x180D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180EC8u; }
        if (ctx->pc != 0x180EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D08_0x180d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180EC8u; }
        if (ctx->pc != 0x180EC8u) { return; }
    }
    ctx->pc = 0x180EC8u;
    // 0x180ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x180ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ecc: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x180eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x180ed0: 0xc0603a4  jal         func_180E90
    ctx->pc = 0x180ED0u;
    SET_GPR_U32(ctx, 31, 0x180ED8u);
    ctx->pc = 0x180ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180ED0u;
            // 0x180ed4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180E90u;
    runtime->cooperativeGuestYield();
    goto label_180e90;
    ctx->pc = 0x180ED8u;
label_180ed8:
    // 0x180ed8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x180ED8u;
    {
        const bool branch_taken_0x180ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180ED8u;
            // 0x180edc: 0x7bb00240  lq          $s0, 0x240($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ed8) {
            ctx->pc = 0x180F2Cu;
            goto label_180f2c;
        }
    }
    ctx->pc = 0x180EE0u;
label_180ee0:
    // 0x180ee0: 0xc060394  jal         func_180E50
    ctx->pc = 0x180EE0u;
    SET_GPR_U32(ctx, 31, 0x180EE8u);
    ctx->pc = 0x180EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180EE0u;
            // 0x180ee4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180E50u;
    if (runtime->hasFunction(0x180E50u)) {
        auto targetFn = runtime->lookupFunction(0x180E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180EE8u; }
        if (ctx->pc != 0x180EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180E50_0x180e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180EE8u; }
        if (ctx->pc != 0x180EE8u) { return; }
    }
    ctx->pc = 0x180EE8u;
label_180ee8:
    // 0x180ee8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x180ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180eec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x180eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ef0: 0xc060384  jal         func_180E10
    ctx->pc = 0x180EF0u;
    SET_GPR_U32(ctx, 31, 0x180EF8u);
    ctx->pc = 0x180EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180EF0u;
            // 0x180ef4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180E10u;
    if (runtime->hasFunction(0x180E10u)) {
        auto targetFn = runtime->lookupFunction(0x180E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180EF8u; }
        if (ctx->pc != 0x180EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_180e10_0x180e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180EF8u; }
        if (ctx->pc != 0x180EF8u) { return; }
    }
    ctx->pc = 0x180EF8u;
    // 0x180ef8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x180ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180efc: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x180EFCu;
    SET_GPR_U32(ctx, 31, 0x180F04u);
    ctx->pc = 0x180F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180EFCu;
            // 0x180f00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180F04u; }
        if (ctx->pc != 0x180F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180F04u; }
        if (ctx->pc != 0x180F04u) { return; }
    }
    ctx->pc = 0x180F04u;
    // 0x180f04: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x180F04u;
    {
        const bool branch_taken_0x180f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180f04) {
            ctx->pc = 0x180F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180F04u;
            // 0x180f08: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180F28u;
            goto label_180f28;
        }
    }
    ctx->pc = 0x180F0Cu;
    // 0x180f0c: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x180F0Cu;
    {
        const bool branch_taken_0x180f0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x180F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180F0Cu;
            // 0x180f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f0c) {
            ctx->pc = 0x180EE0u;
            runtime->cooperativeGuestYield();
            goto label_180ee0;
        }
    }
    ctx->pc = 0x180F14u;
    // 0x180f14: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x180F14u;
    {
        const bool branch_taken_0x180f14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x180F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180F14u;
            // 0x180f18: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f14) {
            ctx->pc = 0x180F28u;
            goto label_180f28;
        }
    }
    ctx->pc = 0x180F1Cu;
    // 0x180f1c: 0xc060394  jal         func_180E50
    ctx->pc = 0x180F1Cu;
    SET_GPR_U32(ctx, 31, 0x180F24u);
    ctx->pc = 0x180F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180F1Cu;
            // 0x180f20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180E50u;
    if (runtime->hasFunction(0x180E50u)) {
        auto targetFn = runtime->lookupFunction(0x180E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180F24u; }
        if (ctx->pc != 0x180F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180E50_0x180e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180F24u; }
        if (ctx->pc != 0x180F24u) { return; }
    }
    ctx->pc = 0x180F24u;
    // 0x180f24: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x180f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_180f28:
    // 0x180f28: 0x7bb00240  lq          $s0, 0x240($sp)
    ctx->pc = 0x180f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_180f2c:
    // 0x180f2c: 0x7bb10230  lq          $s1, 0x230($sp)
    ctx->pc = 0x180f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x180f30: 0x7bb20220  lq          $s2, 0x220($sp)
    ctx->pc = 0x180f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x180f34: 0x7bb30210  lq          $s3, 0x210($sp)
    ctx->pc = 0x180f34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x180f38: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x180f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x180f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x180F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180F3Cu;
            // 0x180f40: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180E90u: goto label_180e90;
            case 0x180ED8u: goto label_180ed8;
            case 0x180EE0u: goto label_180ee0;
            case 0x180EE8u: goto label_180ee8;
            case 0x180F28u: goto label_180f28;
            case 0x180F2Cu: goto label_180f2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180F44u;
    // 0x180f44: 0x0  nop
    ctx->pc = 0x180f44u;
    // NOP
    // 0x180f48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x180f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x180f4c: 0x0  nop
    ctx->pc = 0x180f4cu;
    // NOP
    // 0x180f50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x180f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x180f54: 0x0  nop
    ctx->pc = 0x180f54u;
    // NOP
}
