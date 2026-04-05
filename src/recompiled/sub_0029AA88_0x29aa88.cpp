#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029AA88
// Address: 0x29aa88 - 0x29ade0
void sub_0029AA88_0x29aa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AA88_0x29aa88");
#endif

    ctx->pc = 0x29aa88u;

    // 0x29aa88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29aa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29aa8c: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x29aa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x29aa90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29aa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29aa94: 0x24846d98  addiu       $a0, $a0, 0x6D98
    ctx->pc = 0x29aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28056));
    // 0x29aa98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29aa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29aa9c: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x29aa9cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x29aaa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29aaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29aaa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29aaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29aaa8: 0x26506150  addiu       $s0, $s2, 0x6150
    ctx->pc = 0x29aaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24912));
    // 0x29aaac: 0x8e456150  lw          $a1, 0x6150($s2)
    ctx->pc = 0x29aaacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24912)));
    // 0x29aab0: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x29aab0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29aab4: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x29aab4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29aab8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x29aab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aabc: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x29aabcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x29aac0: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x29aac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x29aac4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x29aac4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aac8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x29aac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x29aacc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x29aaccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x29aad0: 0xc0a5910  jal         func_296440
    ctx->pc = 0x29AAD0u;
    SET_GPR_U32(ctx, 31, 0x29AAD8u);
    ctx->pc = 0x29AAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AAD0u;
            // 0x29aad4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296440u;
    if (runtime->hasFunction(0x296440u)) {
        auto targetFn = runtime->lookupFunction(0x296440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AAD8u; }
        if (ctx->pc != 0x29AAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296440_0x296440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AAD8u; }
        if (ctx->pc != 0x29AAD8u) { return; }
    }
    ctx->pc = 0x29AAD8u;
    // 0x29aad8: 0x40803000  mtc0        $zero, Wired
    ctx->pc = 0x29aad8u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
    // 0x29aadc: 0x40f  sync.p
    ctx->pc = 0x29aadcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x29aae0: 0x8e516150  lw          $s1, 0x6150($s2)
    ctx->pc = 0x29aae0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24912)));
    // 0x29aae4: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x29aae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x29aae8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29AAE8u;
    {
        const bool branch_taken_0x29aae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AAE8u;
            // 0x29aaec: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aae8) {
            ctx->pc = 0x29AB04u;
            goto label_29ab04;
        }
    }
    ctx->pc = 0x29AAF0u;
    // 0x29aaf0: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x29aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x29aaf4: 0xc0a5910  jal         func_296440
    ctx->pc = 0x29AAF4u;
    SET_GPR_U32(ctx, 31, 0x29AAFCu);
    ctx->pc = 0x29AAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AAF4u;
            // 0x29aaf8: 0x24846dd0  addiu       $a0, $a0, 0x6DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296440u;
    if (runtime->hasFunction(0x296440u)) {
        auto targetFn = runtime->lookupFunction(0x296440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AAFCu; }
        if (ctx->pc != 0x29AAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296440_0x296440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AAFCu; }
        if (ctx->pc != 0x29AAFCu) { return; }
    }
    ctx->pc = 0x29AAFCu;
    // 0x29aafc: 0xc0a65ac  jal         func_2996B0
    ctx->pc = 0x29AAFCu;
    SET_GPR_U32(ctx, 31, 0x29AB04u);
    ctx->pc = 0x29AB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AAFCu;
            // 0x29ab00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2996B0u;
    if (runtime->hasFunction(0x2996B0u)) {
        auto targetFn = runtime->lookupFunction(0x2996B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB04u; }
        if (ctx->pc != 0x29AB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2996b0_0x2996e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB04u; }
        if (ctx->pc != 0x29AB04u) { return; }
    }
    ctx->pc = 0x29AB04u;
label_29ab04:
    // 0x29ab04: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x29ab04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x29ab08: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29AB08u;
    {
        const bool branch_taken_0x29ab08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB08u;
            // 0x29ab0c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab08) {
            ctx->pc = 0x29AB40u;
            goto label_29ab40;
        }
    }
    ctx->pc = 0x29AB10u;
    // 0x29ab10: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x29ab10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29ab14: 0x0  nop
    ctx->pc = 0x29ab14u;
    // NOP
label_29ab18:
    // 0x29ab18: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x29ab18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab1c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x29ab1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29ab20: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x29ab20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29ab24: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x29ab24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29ab28: 0xc0a6a8e  jal         func_29AA38
    ctx->pc = 0x29AB28u;
    SET_GPR_U32(ctx, 31, 0x29AB30u);
    ctx->pc = 0x29AB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB28u;
            // 0x29ab2c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AA38u;
    if (runtime->hasFunction(0x29AA38u)) {
        auto targetFn = runtime->lookupFunction(0x29AA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB30u; }
        if (ctx->pc != 0x29AB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29aa38_0x29aa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB30u; }
        if (ctx->pc != 0x29AB30u) { return; }
    }
    ctx->pc = 0x29AB30u;
    // 0x29ab30: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x29ab30u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x29ab34: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x29ab34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x29ab38: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x29AB38u;
    {
        const bool branch_taken_0x29ab38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ab38) {
            ctx->pc = 0x29AB3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB38u;
            // 0x29ab3c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29AB18u;
            runtime->cooperativeGuestYield();
            goto label_29ab18;
        }
    }
    ctx->pc = 0x29AB40u;
label_29ab40:
    // 0x29ab40: 0x26506150  addiu       $s0, $s2, 0x6150
    ctx->pc = 0x29ab40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24912));
    // 0x29ab44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29ab48: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x29ab48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x29ab4c: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x29ab4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x29ab50: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29AB50u;
    {
        const bool branch_taken_0x29ab50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB50u;
            // 0x29ab54: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab50) {
            ctx->pc = 0x29AB70u;
            goto label_29ab70;
        }
    }
    ctx->pc = 0x29AB58u;
    // 0x29ab58: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x29ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x29ab5c: 0xc0a5910  jal         func_296440
    ctx->pc = 0x29AB5Cu;
    SET_GPR_U32(ctx, 31, 0x29AB64u);
    ctx->pc = 0x29AB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB5Cu;
            // 0x29ab60: 0x24846de8  addiu       $a0, $a0, 0x6DE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296440u;
    if (runtime->hasFunction(0x296440u)) {
        auto targetFn = runtime->lookupFunction(0x296440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB64u; }
        if (ctx->pc != 0x29AB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296440_0x296440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB64u; }
        if (ctx->pc != 0x29AB64u) { return; }
    }
    ctx->pc = 0x29AB64u;
    // 0x29ab64: 0xc0a65ac  jal         func_2996B0
    ctx->pc = 0x29AB64u;
    SET_GPR_U32(ctx, 31, 0x29AB6Cu);
    ctx->pc = 0x29AB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB64u;
            // 0x29ab68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2996B0u;
    if (runtime->hasFunction(0x2996B0u)) {
        auto targetFn = runtime->lookupFunction(0x2996B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB6Cu; }
        if (ctx->pc != 0x29AB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2996b0_0x2996e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB6Cu; }
        if (ctx->pc != 0x29AB6Cu) { return; }
    }
    ctx->pc = 0x29AB6Cu;
    // 0x29ab6c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x29ab6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29ab70:
    // 0x29ab70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29AB70u;
    {
        const bool branch_taken_0x29ab70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB70u;
            // 0x29ab74: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab70) {
            ctx->pc = 0x29ABA8u;
            goto label_29aba8;
        }
    }
    ctx->pc = 0x29AB78u;
    // 0x29ab78: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x29ab78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29ab7c: 0x0  nop
    ctx->pc = 0x29ab7cu;
    // NOP
label_29ab80:
    // 0x29ab80: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x29ab80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab84: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x29ab84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29ab88: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x29ab88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29ab8c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x29ab8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29ab90: 0xc0a6a8e  jal         func_29AA38
    ctx->pc = 0x29AB90u;
    SET_GPR_U32(ctx, 31, 0x29AB98u);
    ctx->pc = 0x29AB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB90u;
            // 0x29ab94: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AA38u;
    if (runtime->hasFunction(0x29AA38u)) {
        auto targetFn = runtime->lookupFunction(0x29AA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB98u; }
        if (ctx->pc != 0x29AB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29aa38_0x29aa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB98u; }
        if (ctx->pc != 0x29AB98u) { return; }
    }
    ctx->pc = 0x29AB98u;
    // 0x29ab98: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x29ab98u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x29ab9c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x29ab9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x29aba0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x29ABA0u;
    {
        const bool branch_taken_0x29aba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29aba0) {
            ctx->pc = 0x29ABA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29ABA0u;
            // 0x29aba4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29AB80u;
            runtime->cooperativeGuestYield();
            goto label_29ab80;
        }
    }
    ctx->pc = 0x29ABA8u;
label_29aba8:
    // 0x29aba8: 0x26506150  addiu       $s0, $s2, 0x6150
    ctx->pc = 0x29aba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24912));
    // 0x29abac: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x29abacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
    // 0x29abb0: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x29abb0u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
    // 0x29abb4: 0x40f  sync.p
    ctx->pc = 0x29abb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x29abb8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29abbc: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x29ABBCu;
    {
        const bool branch_taken_0x29abbc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29abbc) {
            ctx->pc = 0x29ABC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29ABBCu;
            // 0x29abc0: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29AC24u;
            goto label_29ac24;
        }
    }
    ctx->pc = 0x29ABC4u;
    // 0x29abc4: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x29abc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x29abc8: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x29abc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x29abcc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29ABCCu;
    {
        const bool branch_taken_0x29abcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29ABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ABCCu;
            // 0x29abd0: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29abcc) {
            ctx->pc = 0x29ABECu;
            goto label_29abec;
        }
    }
    ctx->pc = 0x29ABD4u;
    // 0x29abd4: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x29abd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x29abd8: 0xc0a5910  jal         func_296440
    ctx->pc = 0x29ABD8u;
    SET_GPR_U32(ctx, 31, 0x29ABE0u);
    ctx->pc = 0x29ABDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ABD8u;
            // 0x29abdc: 0x24846e00  addiu       $a0, $a0, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296440u;
    if (runtime->hasFunction(0x296440u)) {
        auto targetFn = runtime->lookupFunction(0x296440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ABE0u; }
        if (ctx->pc != 0x29ABE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296440_0x296440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ABE0u; }
        if (ctx->pc != 0x29ABE0u) { return; }
    }
    ctx->pc = 0x29ABE0u;
    // 0x29abe0: 0xc0a65ac  jal         func_2996B0
    ctx->pc = 0x29ABE0u;
    SET_GPR_U32(ctx, 31, 0x29ABE8u);
    ctx->pc = 0x29ABE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ABE0u;
            // 0x29abe4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2996B0u;
    if (runtime->hasFunction(0x2996B0u)) {
        auto targetFn = runtime->lookupFunction(0x2996B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ABE8u; }
        if (ctx->pc != 0x29ABE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2996b0_0x2996e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ABE8u; }
        if (ctx->pc != 0x29ABE8u) { return; }
    }
    ctx->pc = 0x29ABE8u;
    // 0x29abe8: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x29abe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29abec:
    // 0x29abec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29ABECu;
    {
        const bool branch_taken_0x29abec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ABF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ABECu;
            // 0x29abf0: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29abec) {
            ctx->pc = 0x29AC20u;
            goto label_29ac20;
        }
    }
    ctx->pc = 0x29ABF4u;
    // 0x29abf4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x29abf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29abf8:
    // 0x29abf8: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x29abf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29abfc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x29abfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29ac00: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x29ac00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29ac04: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x29ac04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29ac08: 0xc0a6a8e  jal         func_29AA38
    ctx->pc = 0x29AC08u;
    SET_GPR_U32(ctx, 31, 0x29AC10u);
    ctx->pc = 0x29AC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC08u;
            // 0x29ac0c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AA38u;
    if (runtime->hasFunction(0x29AA38u)) {
        auto targetFn = runtime->lookupFunction(0x29AA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC10u; }
        if (ctx->pc != 0x29AC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29aa38_0x29aa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC10u; }
        if (ctx->pc != 0x29AC10u) { return; }
    }
    ctx->pc = 0x29AC10u;
    // 0x29ac10: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x29ac10u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x29ac14: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x29ac14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x29ac18: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x29AC18u;
    {
        const bool branch_taken_0x29ac18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ac18) {
            ctx->pc = 0x29AC1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC18u;
            // 0x29ac1c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29ABF8u;
            runtime->cooperativeGuestYield();
            goto label_29abf8;
        }
    }
    ctx->pc = 0x29AC20u;
label_29ac20:
    // 0x29ac20: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x29ac20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_29ac24:
    // 0x29ac24: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x29ac24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x29ac28: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29AC28u;
    {
        const bool branch_taken_0x29ac28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC28u;
            // 0x29ac2c: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac28) {
            ctx->pc = 0x29AC60u;
            goto label_29ac60;
        }
    }
    ctx->pc = 0x29AC30u;
    // 0x29ac30: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x29ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
    // 0x29ac34: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x29ac34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_29ac38:
    // 0x29ac38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ac38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29ac3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ac40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29ac44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29ac48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac4c: 0xc0a6a8e  jal         func_29AA38
    ctx->pc = 0x29AC4Cu;
    SET_GPR_U32(ctx, 31, 0x29AC54u);
    ctx->pc = 0x29AC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC4Cu;
            // 0x29ac50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AA38u;
    if (runtime->hasFunction(0x29AA38u)) {
        auto targetFn = runtime->lookupFunction(0x29AA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC54u; }
        if (ctx->pc != 0x29AC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29aa38_0x29aa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC54u; }
        if (ctx->pc != 0x29AC54u) { return; }
    }
    ctx->pc = 0x29AC54u;
    // 0x29ac54: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x29ac54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x29ac58: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x29AC58u;
    {
        const bool branch_taken_0x29ac58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC58u;
            // 0x29ac5c: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac58) {
            ctx->pc = 0x29AC38u;
            runtime->cooperativeGuestYield();
            goto label_29ac38;
        }
    }
    ctx->pc = 0x29AC60u;
label_29ac60:
    // 0x29ac60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29ac60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ac64: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x29ac64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29ac68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ac6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29ac6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ac70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ac70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ac74: 0x3e00008  jr          $ra
    ctx->pc = 0x29AC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC74u;
            // 0x29ac78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29AB04u: goto label_29ab04;
            case 0x29AB18u: goto label_29ab18;
            case 0x29AB40u: goto label_29ab40;
            case 0x29AB70u: goto label_29ab70;
            case 0x29AB80u: goto label_29ab80;
            case 0x29ABA8u: goto label_29aba8;
            case 0x29ABECu: goto label_29abec;
            case 0x29ABF8u: goto label_29abf8;
            case 0x29AC20u: goto label_29ac20;
            case 0x29AC24u: goto label_29ac24;
            case 0x29AC38u: goto label_29ac38;
            case 0x29AC60u: goto label_29ac60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29AC7Cu;
    // 0x29ac7c: 0x0  nop
    ctx->pc = 0x29ac7cu;
    // NOP
    // 0x29ac80: 0x3c010000  lui         $at, 0x0
    ctx->pc = 0x29ac80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)0 << 16));
    // 0x29ac84: 0x8c210000  lw          $at, 0x0($at)
    ctx->pc = 0x29ac84u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x29ac88: 0x3c1d0000  lui         $sp, 0x0
    ctx->pc = 0x29ac88u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)0 << 16));
    // 0x29ac8c: 0x20f809  jalr        $at
    ctx->pc = 0x29AC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x29AC94u);
        ctx->pc = 0x29AC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC8Cu;
            // 0x29ac90: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29AC94u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29AB04u: goto label_29ab04;
            case 0x29AB18u: goto label_29ab18;
            case 0x29AB40u: goto label_29ab40;
            case 0x29AB70u: goto label_29ab70;
            case 0x29AB80u: goto label_29ab80;
            case 0x29ABA8u: goto label_29aba8;
            case 0x29ABECu: goto label_29abec;
            case 0x29ABF8u: goto label_29abf8;
            case 0x29AC20u: goto label_29ac20;
            case 0x29AC24u: goto label_29ac24;
            case 0x29AC38u: goto label_29ac38;
            case 0x29AC60u: goto label_29ac60;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29AC94u; }
            if (ctx->pc != 0x29AC94u) { return; }
        }
        }
    }
    ctx->pc = 0x29AC94u;
    // 0x29ac94: 0x2403ffac  addiu       $v1, $zero, -0x54
    ctx->pc = 0x29ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
    // 0x29ac98: 0xc  syscall     0
    ctx->pc = 0x29ac98u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x29ac9c: 0x0  nop
    ctx->pc = 0x29ac9cu;
    // NOP
    // 0x29aca0: 0x0  nop
    ctx->pc = 0x29aca0u;
    // NOP
    // 0x29aca4: 0x0  nop
    ctx->pc = 0x29aca4u;
    // NOP
    // 0x29aca8: 0x0  nop
    ctx->pc = 0x29aca8u;
    // NOP
    // 0x29acac: 0x0  nop
    ctx->pc = 0x29acacu;
    // NOP
    // 0x29acb0: 0x0  nop
    ctx->pc = 0x29acb0u;
    // NOP
    // 0x29acb4: 0x0  nop
    ctx->pc = 0x29acb4u;
    // NOP
    // 0x29acb8: 0x0  nop
    ctx->pc = 0x29acb8u;
    // NOP
    // 0x29acbc: 0x0  nop
    ctx->pc = 0x29acbcu;
    // NOP
    // 0x29acc0: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x29acc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
    // 0x29acc4: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x29acc4u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x29acc8: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x29acc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
    // 0x29accc: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x29acccu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
    // 0x29acd0: 0x40f  sync.p
    ctx->pc = 0x29acd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x29acd4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x29acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x29acd8: 0x8c42e828  lw          $v0, -0x17D8($v0)
    ctx->pc = 0x29acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961192)));
    // 0x29acdc: 0x40827000  mtc0        $v0, EPC
    ctx->pc = 0x29acdcu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
    // 0x29ace0: 0x40f  sync.p
    ctx->pc = 0x29ace0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x29ace4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x29ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x29ace8: 0xdc42e800  ld          $v0, -0x1800($v0)
    ctx->pc = 0x29ace8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294961152)));
    // 0x29acec: 0x400011  mthi        $v0
    ctx->pc = 0x29acecu;
    ctx->hi = GPR_U64(ctx, 2);
    // 0x29acf0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x29acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x29acf4: 0xdc42e808  ld          $v0, -0x17F8($v0)
    ctx->pc = 0x29acf4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x29acf8: 0x70400011  mthi1       $v0
    ctx->pc = 0x29acf8u;
    ctx->hi1 = GPR_U64(ctx, 2);
    // 0x29acfc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x29acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x29ad00: 0xdc42e810  ld          $v0, -0x17F0($v0)
    ctx->pc = 0x29ad00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294961168)));
    // 0x29ad04: 0x400013  mtlo        $v0
    ctx->pc = 0x29ad04u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x29ad08: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x29ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x29ad0c: 0xdc42e818  ld          $v0, -0x17E8($v0)
    ctx->pc = 0x29ad0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x29ad10: 0x70400013  mtlo1       $v0
    ctx->pc = 0x29ad10u;
    ctx->lo1 = GPR_U64(ctx, 2);
    // 0x29ad14: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x29ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x29ad18: 0xdc42e820  ld          $v0, -0x17E0($v0)
    ctx->pc = 0x29ad18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294961184)));
    // 0x29ad1c: 0x400029  mtsa        $v0
    ctx->pc = 0x29ad1cu;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
    // 0x29ad20: 0x40f  sync.p
    ctx->pc = 0x29ad20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x29ad24: 0x3c1a0033  lui         $k0, 0x33
    ctx->pc = 0x29ad24u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)51 << 16));
    // 0x29ad28: 0x275ae600  addiu       $k0, $k0, -0x1A00
    ctx->pc = 0x29ad28u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 4294960640));
    // 0x29ad2c: 0x7b410010  lq          $at, 0x10($k0)
    ctx->pc = 0x29ad2cu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 26), 16)));
    // 0x29ad30: 0x7b420020  lq          $v0, 0x20($k0)
    ctx->pc = 0x29ad30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 26), 32)));
    // 0x29ad34: 0x7b430030  lq          $v1, 0x30($k0)
    ctx->pc = 0x29ad34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 26), 48)));
    // 0x29ad38: 0x7b440040  lq          $a0, 0x40($k0)
    ctx->pc = 0x29ad38u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 26), 64)));
    // 0x29ad3c: 0x7b450050  lq          $a1, 0x50($k0)
    ctx->pc = 0x29ad3cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 26), 80)));
    // 0x29ad40: 0x7b460060  lq          $a2, 0x60($k0)
    ctx->pc = 0x29ad40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 26), 96)));
    // 0x29ad44: 0x7b470070  lq          $a3, 0x70($k0)
    ctx->pc = 0x29ad44u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 26), 112)));
    // 0x29ad48: 0x7b480080  lq          $t0, 0x80($k0)
    ctx->pc = 0x29ad48u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 26), 128)));
    // 0x29ad4c: 0x7b490090  lq          $t1, 0x90($k0)
    ctx->pc = 0x29ad4cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 26), 144)));
    // 0x29ad50: 0x7b4a00a0  lq          $t2, 0xA0($k0)
    ctx->pc = 0x29ad50u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 26), 160)));
    // 0x29ad54: 0x7b4b00b0  lq          $t3, 0xB0($k0)
    ctx->pc = 0x29ad54u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 26), 176)));
    // 0x29ad58: 0x7b4c00c0  lq          $t4, 0xC0($k0)
    ctx->pc = 0x29ad58u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 26), 192)));
    // 0x29ad5c: 0x7b4d00d0  lq          $t5, 0xD0($k0)
    ctx->pc = 0x29ad5cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 26), 208)));
    // 0x29ad60: 0x7b4e00e0  lq          $t6, 0xE0($k0)
    ctx->pc = 0x29ad60u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 26), 224)));
    // 0x29ad64: 0x7b4f00f0  lq          $t7, 0xF0($k0)
    ctx->pc = 0x29ad64u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 26), 240)));
    // 0x29ad68: 0x7b500100  lq          $s0, 0x100($k0)
    ctx->pc = 0x29ad68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 26), 256)));
    // 0x29ad6c: 0x7b510110  lq          $s1, 0x110($k0)
    ctx->pc = 0x29ad6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 26), 272)));
    // 0x29ad70: 0x7b520120  lq          $s2, 0x120($k0)
    ctx->pc = 0x29ad70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 288)));
    // 0x29ad74: 0x7b530130  lq          $s3, 0x130($k0)
    ctx->pc = 0x29ad74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 26), 304)));
    // 0x29ad78: 0x7b540140  lq          $s4, 0x140($k0)
    ctx->pc = 0x29ad78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 26), 320)));
    // 0x29ad7c: 0x7b550150  lq          $s5, 0x150($k0)
    ctx->pc = 0x29ad7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 26), 336)));
    // 0x29ad80: 0x7b560160  lq          $s6, 0x160($k0)
    ctx->pc = 0x29ad80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 26), 352)));
    // 0x29ad84: 0x7b570170  lq          $s7, 0x170($k0)
    ctx->pc = 0x29ad84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 26), 368)));
    // 0x29ad88: 0x7b580180  lq          $t8, 0x180($k0)
    ctx->pc = 0x29ad88u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 26), 384)));
    // 0x29ad8c: 0x7b590190  lq          $t9, 0x190($k0)
    ctx->pc = 0x29ad8cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 26), 400)));
    // 0x29ad90: 0x7b5c01c0  lq          $gp, 0x1C0($k0)
    ctx->pc = 0x29ad90u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 26), 448)));
    // 0x29ad94: 0x7b5d01d0  lq          $sp, 0x1D0($k0)
    ctx->pc = 0x29ad94u;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 26), 464)));
    // 0x29ad98: 0x7b5e01e0  lq          $fp, 0x1E0($k0)
    ctx->pc = 0x29ad98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 26), 480)));
    // 0x29ad9c: 0x7b5f01f0  lq          $ra, 0x1F0($k0)
    ctx->pc = 0x29ad9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 26), 496)));
    // 0x29ada0: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x29ada0u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
    // 0x29ada4: 0x375a0013  ori         $k0, $k0, 0x13
    ctx->pc = 0x29ada4u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)19);
    // 0x29ada8: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x29ada8u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
    // 0x29adac: 0x40f  sync.p
    ctx->pc = 0x29adacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x29adb0: 0x42000018  eret
    ctx->pc = 0x29adb0u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
    // 0x29adb4: 0x0  nop
    ctx->pc = 0x29adb4u;
    // NOP
    // 0x29adb8: 0x0  nop
    ctx->pc = 0x29adb8u;
    // NOP
    // 0x29adbc: 0x0  nop
    ctx->pc = 0x29adbcu;
    // NOP
    // 0x29adc0: 0x3c010000  lui         $at, 0x0
    ctx->pc = 0x29adc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)0 << 16));
    // 0x29adc4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x29adc4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x29adc8: 0x8c210000  lw          $at, 0x0($at)
    ctx->pc = 0x29adc8u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x29adcc: 0x3c1d0000  lui         $sp, 0x0
    ctx->pc = 0x29adccu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)0 << 16));
    // 0x29add0: 0x20f809  jalr        $at
    ctx->pc = 0x29ADD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x29ADD8u);
        ctx->pc = 0x29ADD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ADD0u;
            // 0x29add4: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29ADD8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29AB04u: goto label_29ab04;
            case 0x29AB18u: goto label_29ab18;
            case 0x29AB40u: goto label_29ab40;
            case 0x29AB70u: goto label_29ab70;
            case 0x29AB80u: goto label_29ab80;
            case 0x29ABA8u: goto label_29aba8;
            case 0x29ABECu: goto label_29abec;
            case 0x29ABF8u: goto label_29abf8;
            case 0x29AC20u: goto label_29ac20;
            case 0x29AC24u: goto label_29ac24;
            case 0x29AC38u: goto label_29ac38;
            case 0x29AC60u: goto label_29ac60;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29ADD8u; }
            if (ctx->pc != 0x29ADD8u) { return; }
        }
        }
    }
    ctx->pc = 0x29ADD8u;
    // 0x29add8: 0x3ffffcd  break       1023, 1023
    ctx->pc = 0x29add8u;
    runtime->handleBreak(rdram, ctx);
    // 0x29addc: 0x0  nop
    ctx->pc = 0x29addcu;
    // NOP
}
