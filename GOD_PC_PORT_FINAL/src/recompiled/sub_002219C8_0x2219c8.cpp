#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002219C8
// Address: 0x2219c8 - 0x221af8
void sub_002219C8_0x2219c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002219C8_0x2219c8");
#endif

    ctx->pc = 0x2219c8u;

    // 0x2219c8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2219c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2219cc: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2219ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2219d0: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x2219d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x2219d4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2219d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2219d8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2219d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2219dc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2219dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2219e0: 0xc04f856  jal         func_13E158
    ctx->pc = 0x2219E0u;
    SET_GPR_U32(ctx, 31, 0x2219E8u);
    ctx->pc = 0x2219E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2219E0u;
            // 0x2219e4: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2219E8u; }
        if (ctx->pc != 0x2219E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2219E8u; }
        if (ctx->pc != 0x2219E8u) { return; }
    }
    ctx->pc = 0x2219E8u;
    // 0x2219e8: 0xc090f06  jal         func_243C18
    ctx->pc = 0x2219E8u;
    SET_GPR_U32(ctx, 31, 0x2219F0u);
    ctx->pc = 0x2219ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2219E8u;
            // 0x2219ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243C18u;
    if (runtime->hasFunction(0x243C18u)) {
        auto targetFn = runtime->lookupFunction(0x243C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2219F0u; }
        if (ctx->pc != 0x2219F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243c18_0x243c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2219F0u; }
        if (ctx->pc != 0x2219F0u) { return; }
    }
    ctx->pc = 0x2219F0u;
    // 0x2219f0: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x2219F0u;
    SET_GPR_U32(ctx, 31, 0x2219F8u);
    ctx->pc = 0x2219F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2219F0u;
            // 0x2219f4: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2219F8u; }
        if (ctx->pc != 0x2219F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2219F8u; }
        if (ctx->pc != 0x2219F8u) { return; }
    }
    ctx->pc = 0x2219F8u;
    // 0x2219f8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2219F8u;
    SET_GPR_U32(ctx, 31, 0x221A00u);
    ctx->pc = 0x2219FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2219F8u;
            // 0x2219fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A00u; }
        if (ctx->pc != 0x221A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A00u; }
        if (ctx->pc != 0x221A00u) { return; }
    }
    ctx->pc = 0x221A00u;
    // 0x221a00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x221a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a04: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x221a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x221a08: 0x24a58040  addiu       $a1, $a1, -0x7FC0
    ctx->pc = 0x221a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934592));
    // 0x221a0c: 0xc060978  jal         func_1825E0
    ctx->pc = 0x221A0Cu;
    SET_GPR_U32(ctx, 31, 0x221A14u);
    ctx->pc = 0x221A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221A0Cu;
            // 0x221a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A14u; }
        if (ctx->pc != 0x221A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A14u; }
        if (ctx->pc != 0x221A14u) { return; }
    }
    ctx->pc = 0x221A14u;
    // 0x221a14: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x221a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x221a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a1c: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x221a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x221a20: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x221A20u;
    SET_GPR_U32(ctx, 31, 0x221A28u);
    ctx->pc = 0x221A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221A20u;
            // 0x221a24: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A28u; }
        if (ctx->pc != 0x221A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A28u; }
        if (ctx->pc != 0x221A28u) { return; }
    }
    ctx->pc = 0x221A28u;
    // 0x221a28: 0x3c05e239  lui         $a1, 0xE239
    ctx->pc = 0x221a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57913 << 16));
    // 0x221a2c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x221a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a30: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x221a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x221a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a38: 0x34a5bc51  ori         $a1, $a1, 0xBC51
    ctx->pc = 0x221a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48209);
    // 0x221a3c: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x221A3Cu;
    SET_GPR_U32(ctx, 31, 0x221A44u);
    ctx->pc = 0x221A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221A3Cu;
            // 0x221a40: 0xae301188  sw          $s0, 0x1188($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4488), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A44u; }
        if (ctx->pc != 0x221A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A44u; }
        if (ctx->pc != 0x221A44u) { return; }
    }
    ctx->pc = 0x221A44u;
    // 0x221a44: 0x8e241188  lw          $a0, 0x1188($s1)
    ctx->pc = 0x221a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4488)));
    // 0x221a48: 0x3c051c8e  lui         $a1, 0x1C8E
    ctx->pc = 0x221a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7310 << 16));
    // 0x221a4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x221a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a50: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x221a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x221a54: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x221A54u;
    SET_GPR_U32(ctx, 31, 0x221A5Cu);
    ctx->pc = 0x221A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221A54u;
            // 0x221a58: 0x34a562cf  ori         $a1, $a1, 0x62CF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25295);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A5Cu; }
        if (ctx->pc != 0x221A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A5Cu; }
        if (ctx->pc != 0x221A5Cu) { return; }
    }
    ctx->pc = 0x221A5Cu;
    // 0x221a5c: 0x8e241188  lw          $a0, 0x1188($s1)
    ctx->pc = 0x221a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4488)));
    // 0x221a60: 0x3c051bf4  lui         $a1, 0x1BF4
    ctx->pc = 0x221a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7156 << 16));
    // 0x221a64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x221a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a68: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x221a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x221a6c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x221A6Cu;
    SET_GPR_U32(ctx, 31, 0x221A74u);
    ctx->pc = 0x221A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221A6Cu;
            // 0x221a70: 0x34a59679  ori         $a1, $a1, 0x9679 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38521);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A74u; }
        if (ctx->pc != 0x221A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A74u; }
        if (ctx->pc != 0x221A74u) { return; }
    }
    ctx->pc = 0x221A74u;
    // 0x221a74: 0x8e241188  lw          $a0, 0x1188($s1)
    ctx->pc = 0x221a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4488)));
    // 0x221a78: 0x3c05ac0a  lui         $a1, 0xAC0A
    ctx->pc = 0x221a78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44042 << 16));
    // 0x221a7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x221a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a80: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x221a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x221a84: 0xc060570  jal         func_1815C0
    ctx->pc = 0x221A84u;
    SET_GPR_U32(ctx, 31, 0x221A8Cu);
    ctx->pc = 0x221A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221A84u;
            // 0x221a88: 0x34a5af26  ori         $a1, $a1, 0xAF26 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44838);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A8Cu; }
        if (ctx->pc != 0x221A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A8Cu; }
        if (ctx->pc != 0x221A8Cu) { return; }
    }
    ctx->pc = 0x221A8Cu;
    // 0x221a8c: 0x8e241188  lw          $a0, 0x1188($s1)
    ctx->pc = 0x221a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4488)));
    // 0x221a90: 0x3c054bad  lui         $a1, 0x4BAD
    ctx->pc = 0x221a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19373 << 16));
    // 0x221a94: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x221a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a98: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x221a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x221a9c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x221A9Cu;
    SET_GPR_U32(ctx, 31, 0x221AA4u);
    ctx->pc = 0x221AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221A9Cu;
            // 0x221aa0: 0x34a5fc91  ori         $a1, $a1, 0xFC91 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64657);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221AA4u; }
        if (ctx->pc != 0x221AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221AA4u; }
        if (ctx->pc != 0x221AA4u) { return; }
    }
    ctx->pc = 0x221AA4u;
    // 0x221aa4: 0x8e241188  lw          $a0, 0x1188($s1)
    ctx->pc = 0x221aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4488)));
    // 0x221aa8: 0x3c0585dd  lui         $a1, 0x85DD
    ctx->pc = 0x221aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34269 << 16));
    // 0x221aac: 0x34a5d56f  ori         $a1, $a1, 0xD56F
    ctx->pc = 0x221aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54639);
    // 0x221ab0: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x221ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x221ab4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x221ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ab8: 0xc06081c  jal         func_182070
    ctx->pc = 0x221AB8u;
    SET_GPR_U32(ctx, 31, 0x221AC0u);
    ctx->pc = 0x221ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221AB8u;
            // 0x221abc: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221AC0u; }
        if (ctx->pc != 0x221AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221AC0u; }
        if (ctx->pc != 0x221AC0u) { return; }
    }
    ctx->pc = 0x221AC0u;
    // 0x221ac0: 0xc04f860  jal         func_13E180
    ctx->pc = 0x221AC0u;
    SET_GPR_U32(ctx, 31, 0x221AC8u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221AC8u; }
        if (ctx->pc != 0x221AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221AC8u; }
        if (ctx->pc != 0x221AC8u) { return; }
    }
    ctx->pc = 0x221AC8u;
    // 0x221ac8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x221ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x221acc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x221accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221ad0: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x221ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x221ad4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x221AD4u;
    {
        const bool branch_taken_0x221ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x221AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221AD4u;
            // 0x221ad8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ad4) {
            ctx->pc = 0x221AE4u;
            goto label_221ae4;
        }
    }
    ctx->pc = 0x221ADCu;
    // 0x221adc: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x221ADCu;
    SET_GPR_U32(ctx, 31, 0x221AE4u);
    ctx->pc = 0x221AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221ADCu;
            // 0x221ae0: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221AE4u; }
        if (ctx->pc != 0x221AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221AE4u; }
        if (ctx->pc != 0x221AE4u) { return; }
    }
    ctx->pc = 0x221AE4u;
label_221ae4:
    // 0x221ae4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x221ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x221ae8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x221ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x221aec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x221aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221af0: 0x3e00008  jr          $ra
    ctx->pc = 0x221AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221AF0u;
            // 0x221af4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221AE4u: goto label_221ae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221AF8u;
}
