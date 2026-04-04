#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022AF20
// Address: 0x22af20 - 0x22b000
void sub_0022AF20_0x22af20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AF20_0x22af20");
#endif

    ctx->pc = 0x22af20u;

    // 0x22af20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22af20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22af24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22af24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22af28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22af28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22af2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22af2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22af30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22af34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22af38: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x22af38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x22af3c: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x22AF3Cu;
    SET_GPR_U32(ctx, 31, 0x22AF44u);
    ctx->pc = 0x22AF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AF3Cu;
            // 0x22af40: 0x24841300  addiu       $a0, $a0, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AF44u; }
        if (ctx->pc != 0x22AF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AF44u; }
        if (ctx->pc != 0x22AF44u) { return; }
    }
    ctx->pc = 0x22AF44u;
    // 0x22af44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AF44u;
    {
        const bool branch_taken_0x22af44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AF44u;
            // 0x22af48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af44) {
            ctx->pc = 0x22AF58u;
            goto label_22af58;
        }
    }
    ctx->pc = 0x22AF4Cu;
    // 0x22af4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22af4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22af50: 0xc08a732  jal         func_229CC8
    ctx->pc = 0x22AF50u;
    SET_GPR_U32(ctx, 31, 0x22AF58u);
    ctx->pc = 0x22AF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AF50u;
            // 0x22af54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229CC8u;
    if (runtime->hasFunction(0x229CC8u)) {
        auto targetFn = runtime->lookupFunction(0x229CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AF58u; }
        if (ctx->pc != 0x22AF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229CC8_0x229cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AF58u; }
        if (ctx->pc != 0x22AF58u) { return; }
    }
    ctx->pc = 0x22AF58u;
label_22af58:
    // 0x22af58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22af58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af5c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_22af60:
    // 0x22af60: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x22af60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22af64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22af64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x22af68: 0x28a40004  slti        $a0, $a1, 0x4
    ctx->pc = 0x22af68u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x22af6c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x22af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22af70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22af70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22af74: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x22af74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x22af78: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x22af78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x22af7c: 0x8c670020  lw          $a3, 0x20($v1)
    ctx->pc = 0x22af7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x22af80: 0xb0460013  sdl         $a2, 0x13($v0)
    ctx->pc = 0x22af80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22af84: 0xb446000c  sdr         $a2, 0xC($v0)
    ctx->pc = 0x22af84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22af88: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x22af88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x22af8c: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x22AF8Cu;
    {
        const bool branch_taken_0x22af8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AF8Cu;
            // 0x22af90: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af8c) {
            ctx->pc = 0x22AF60u;
            runtime->cooperativeGuestYield();
            goto label_22af60;
        }
    }
    ctx->pc = 0x22AF94u;
    // 0x22af94: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x22af94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x22af98: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x22af98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x22af9c: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x22af9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x22afa0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22afa4: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x22afa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x22afa8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22AFA8u;
    {
        const bool branch_taken_0x22afa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AFA8u;
            // 0x22afac: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22afa8) {
            ctx->pc = 0x22AFC4u;
            goto label_22afc4;
        }
    }
    ctx->pc = 0x22AFB0u;
    // 0x22afb0: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x22afb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22afb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22afb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22afb8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x22afb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22afbc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x22AFBCu;
    {
        const bool branch_taken_0x22afbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22afbc) {
            ctx->pc = 0x22AFD0u;
            goto label_22afd0;
        }
    }
    ctx->pc = 0x22AFC4u;
label_22afc4:
    // 0x22afc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22afc8: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22AFC8u;
    {
        const bool branch_taken_0x22afc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x22afc8) {
            ctx->pc = 0x22AFCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22AFC8u;
            // 0x22afcc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22AFF0u;
            goto label_22aff0;
        }
    }
    ctx->pc = 0x22AFD0u;
label_22afd0:
    // 0x22afd0: 0xc05c3a6  jal         func_170E98
    ctx->pc = 0x22AFD0u;
    SET_GPR_U32(ctx, 31, 0x22AFD8u);
    ctx->pc = 0x22AFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AFD0u;
            // 0x22afd4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170E98u;
    if (runtime->hasFunction(0x170E98u)) {
        auto targetFn = runtime->lookupFunction(0x170E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AFD8u; }
        if (ctx->pc != 0x22AFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_170e98_0x170ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AFD8u; }
        if (ctx->pc != 0x22AFD8u) { return; }
    }
    ctx->pc = 0x22AFD8u;
    // 0x22afd8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22AFD8u;
    {
        const bool branch_taken_0x22afd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22afd8) {
            ctx->pc = 0x22AFDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22AFD8u;
            // 0x22afdc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22AFF0u;
            goto label_22aff0;
        }
    }
    ctx->pc = 0x22AFE0u;
    // 0x22afe0: 0xc05c370  jal         func_170DC0
    ctx->pc = 0x22AFE0u;
    SET_GPR_U32(ctx, 31, 0x22AFE8u);
    ctx->pc = 0x22AFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AFE0u;
            // 0x22afe4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170DC0u;
    if (runtime->hasFunction(0x170DC0u)) {
        auto targetFn = runtime->lookupFunction(0x170DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AFE8u; }
        if (ctx->pc != 0x22AFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170DC0_0x170dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AFE8u; }
        if (ctx->pc != 0x22AFE8u) { return; }
    }
    ctx->pc = 0x22AFE8u;
    // 0x22afe8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22afe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22afec: 0x0  nop
    ctx->pc = 0x22afecu;
    // NOP
label_22aff0:
    // 0x22aff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22aff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22aff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22aff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22aff8: 0x3e00008  jr          $ra
    ctx->pc = 0x22AFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AFF8u;
            // 0x22affc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22AF58u: goto label_22af58;
            case 0x22AF60u: goto label_22af60;
            case 0x22AFC4u: goto label_22afc4;
            case 0x22AFD0u: goto label_22afd0;
            case 0x22AFF0u: goto label_22aff0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B000u;
}
