#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3960
// Address: 0x1b3960 - 0x1b3be8
void sub_001B3960_0x1b3960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3960_0x1b3960");
#endif

    ctx->pc = 0x1b3960u;

    // 0x1b3960: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b3960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1b3964: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1b3964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1b3968: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1b3968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1b396c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b396cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3970: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1b3970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1b3974: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b3974u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3978: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b3978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b397c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1b397cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1b3980: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1b3980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1b3984: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b3984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3988: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b3988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b398c: 0xc08b530  jal         func_22D4C0
    ctx->pc = 0x1B398Cu;
    SET_GPR_U32(ctx, 31, 0x1B3994u);
    ctx->pc = 0x1B3990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B398Cu;
            // 0x1b3990: 0x26110008  addiu       $s1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4C0u;
    if (runtime->hasFunction(0x22D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3994u; }
        if (ctx->pc != 0x1B3994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4C0_0x22d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3994u; }
        if (ctx->pc != 0x1B3994u) { return; }
    }
    ctx->pc = 0x1B3994u;
    // 0x1b3994: 0x26130020  addiu       $s3, $s0, 0x20
    ctx->pc = 0x1b3994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b3998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b399c: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B399Cu;
    SET_GPR_U32(ctx, 31, 0x1B39A4u);
    ctx->pc = 0x1B39A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B399Cu;
            // 0x1b39a0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39A4u; }
        if (ctx->pc != 0x1B39A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39A4u; }
        if (ctx->pc != 0x1B39A4u) { return; }
    }
    ctx->pc = 0x1B39A4u;
    // 0x1b39a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b39a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b39a8: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B39A8u;
    SET_GPR_U32(ctx, 31, 0x1B39B0u);
    ctx->pc = 0x1B39ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B39A8u;
            // 0x1b39ac: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39B0u; }
        if (ctx->pc != 0x1B39B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39B0u; }
        if (ctx->pc != 0x1B39B0u) { return; }
    }
    ctx->pc = 0x1B39B0u;
    // 0x1b39b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b39b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b39b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b39b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b39b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b39bc: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B39BCu;
    SET_GPR_U32(ctx, 31, 0x1B39C4u);
    ctx->pc = 0x1B39C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B39BCu;
            // 0x1b39c0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39C4u; }
        if (ctx->pc != 0x1B39C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39C4u; }
        if (ctx->pc != 0x1B39C4u) { return; }
    }
    ctx->pc = 0x1B39C4u;
    // 0x1b39c4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b39c8: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1b39c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1b39cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b39ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b39d0: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B39D0u;
    SET_GPR_U32(ctx, 31, 0x1B39D8u);
    ctx->pc = 0x1B39D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B39D0u;
            // 0x1b39d4: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39D8u; }
        if (ctx->pc != 0x1B39D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39D8u; }
        if (ctx->pc != 0x1B39D8u) { return; }
    }
    ctx->pc = 0x1B39D8u;
    // 0x1b39d8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1b39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b39dc: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1b39dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1b39e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b39e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b39e4: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B39E4u;
    SET_GPR_U32(ctx, 31, 0x1B39ECu);
    ctx->pc = 0x1B39E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B39E4u;
            // 0x1b39e8: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39ECu; }
        if (ctx->pc != 0x1B39ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39ECu; }
        if (ctx->pc != 0x1B39ECu) { return; }
    }
    ctx->pc = 0x1B39ECu;
    // 0x1b39ec: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1b39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b39f0: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1b39f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1b39f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b39f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b39f8: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B39F8u;
    SET_GPR_U32(ctx, 31, 0x1B3A00u);
    ctx->pc = 0x1B39FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B39F8u;
            // 0x1b39fc: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A00u; }
        if (ctx->pc != 0x1B3A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A00u; }
        if (ctx->pc != 0x1B3A00u) { return; }
    }
    ctx->pc = 0x1B3A00u;
    // 0x1b3a00: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x1b3a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1b3a04: 0xc06ce28  jal         func_1B38A0
    ctx->pc = 0x1B3A04u;
    SET_GPR_U32(ctx, 31, 0x1B3A0Cu);
    ctx->pc = 0x1B3A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A04u;
            // 0x1b3a08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A0u;
    if (runtime->hasFunction(0x1B38A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B38A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A0Cu; }
        if (ctx->pc != 0x1B3A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B38A0_0x1b38a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A0Cu; }
        if (ctx->pc != 0x1B3A0Cu) { return; }
    }
    ctx->pc = 0x1B3A0Cu;
    // 0x1b3a0c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1b3a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1b3a10: 0xc06ce28  jal         func_1B38A0
    ctx->pc = 0x1B3A10u;
    SET_GPR_U32(ctx, 31, 0x1B3A18u);
    ctx->pc = 0x1B3A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A10u;
            // 0x1b3a14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A0u;
    if (runtime->hasFunction(0x1B38A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B38A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A18u; }
        if (ctx->pc != 0x1B3A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B38A0_0x1b38a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A18u; }
        if (ctx->pc != 0x1B3A18u) { return; }
    }
    ctx->pc = 0x1B3A18u;
    // 0x1b3a18: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1b3a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1b3a1c: 0xc06ce28  jal         func_1B38A0
    ctx->pc = 0x1B3A1Cu;
    SET_GPR_U32(ctx, 31, 0x1B3A24u);
    ctx->pc = 0x1B3A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A1Cu;
            // 0x1b3a20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A0u;
    if (runtime->hasFunction(0x1B38A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B38A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A24u; }
        if (ctx->pc != 0x1B3A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B38A0_0x1b38a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A24u; }
        if (ctx->pc != 0x1B3A24u) { return; }
    }
    ctx->pc = 0x1B3A24u;
    // 0x1b3a24: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1b3a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1b3a28: 0xc06ce28  jal         func_1B38A0
    ctx->pc = 0x1B3A28u;
    SET_GPR_U32(ctx, 31, 0x1B3A30u);
    ctx->pc = 0x1B3A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A28u;
            // 0x1b3a2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A0u;
    if (runtime->hasFunction(0x1B38A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B38A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A30u; }
        if (ctx->pc != 0x1B3A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B38A0_0x1b38a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A30u; }
        if (ctx->pc != 0x1B3A30u) { return; }
    }
    ctx->pc = 0x1B3A30u;
    // 0x1b3a30: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x1b3a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x1b3a34: 0xc06ce28  jal         func_1B38A0
    ctx->pc = 0x1B3A34u;
    SET_GPR_U32(ctx, 31, 0x1B3A3Cu);
    ctx->pc = 0x1B3A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A34u;
            // 0x1b3a38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A0u;
    if (runtime->hasFunction(0x1B38A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B38A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A3Cu; }
        if (ctx->pc != 0x1B3A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B38A0_0x1b38a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A3Cu; }
        if (ctx->pc != 0x1B3A3Cu) { return; }
    }
    ctx->pc = 0x1B3A3Cu;
    // 0x1b3a3c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1b3a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1b3a40: 0xc06ce28  jal         func_1B38A0
    ctx->pc = 0x1B3A40u;
    SET_GPR_U32(ctx, 31, 0x1B3A48u);
    ctx->pc = 0x1B3A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A40u;
            // 0x1b3a44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A0u;
    if (runtime->hasFunction(0x1B38A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B38A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A48u; }
        if (ctx->pc != 0x1B3A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B38A0_0x1b38a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A48u; }
        if (ctx->pc != 0x1B3A48u) { return; }
    }
    ctx->pc = 0x1B3A48u;
    // 0x1b3a48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b3a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a4c: 0xc06ce28  jal         func_1B38A0
    ctx->pc = 0x1B3A4Cu;
    SET_GPR_U32(ctx, 31, 0x1B3A54u);
    ctx->pc = 0x1B3A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A4Cu;
            // 0x1b3a50: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A0u;
    if (runtime->hasFunction(0x1B38A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B38A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A54u; }
        if (ctx->pc != 0x1B3A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B38A0_0x1b38a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A54u; }
        if (ctx->pc != 0x1B3A54u) { return; }
    }
    ctx->pc = 0x1B3A54u;
    // 0x1b3a54: 0xc06d28e  jal         func_1B4A38
    ctx->pc = 0x1B3A54u;
    SET_GPR_U32(ctx, 31, 0x1B3A5Cu);
    ctx->pc = 0x1B3A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A54u;
            // 0x1b3a58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A38u;
    if (runtime->hasFunction(0x1B4A38u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A5Cu; }
        if (ctx->pc != 0x1B3A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001b4a38_0x1b4a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A5Cu; }
        if (ctx->pc != 0x1B3A5Cu) { return; }
    }
    ctx->pc = 0x1B3A5Cu;
    // 0x1b3a5c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1b3a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x1b3a60: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b3a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b3a64: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B3A64u;
    SET_GPR_U32(ctx, 31, 0x1B3A6Cu);
    ctx->pc = 0x1B3A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A64u;
            // 0x1b3a68: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A6Cu; }
        if (ctx->pc != 0x1B3A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A6Cu; }
        if (ctx->pc != 0x1B3A6Cu) { return; }
    }
    ctx->pc = 0x1B3A6Cu;
    // 0x1b3a6c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1b3a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b3a70: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1b3a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x1b3a74: 0x1053004e  beq         $v0, $s3, . + 4 + (0x4E << 2)
    ctx->pc = 0x1B3A74u;
    {
        const bool branch_taken_0x1b3a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1B3A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A74u;
            // 0x1b3a78: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a74) {
            ctx->pc = 0x1B3BB0u;
            goto label_1b3bb0;
        }
    }
    ctx->pc = 0x1B3A7Cu;
    // 0x1b3a7c: 0x0  nop
    ctx->pc = 0x1b3a7cu;
    // NOP
label_1b3a80:
    // 0x1b3a80: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1b3a80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b3a84: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1b3a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1b3a88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b3a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3a8c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b3a90: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B3A90u;
    SET_GPR_U32(ctx, 31, 0x1B3A98u);
    ctx->pc = 0x1B3A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A90u;
            // 0x1b3a94: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A98u; }
        if (ctx->pc != 0x1B3A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A98u; }
        if (ctx->pc != 0x1B3A98u) { return; }
    }
    ctx->pc = 0x1B3A98u;
    // 0x1b3a98: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x1b3a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1b3a9c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1b3a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1b3aa0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b3aa4: 0x10430039  beq         $v0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1B3AA4u;
    {
        const bool branch_taken_0x1b3aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B3AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3AA4u;
            // 0x1b3aa8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3aa4) {
            ctx->pc = 0x1B3B8Cu;
            goto label_1b3b8c;
        }
    }
    ctx->pc = 0x1B3AACu;
    // 0x1b3aac: 0x0  nop
    ctx->pc = 0x1b3aacu;
    // NOP
label_1b3ab0:
    // 0x1b3ab0: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1b3ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1b3ab4: 0x8cb00024  lw          $s0, 0x24($a1)
    ctx->pc = 0x1b3ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1b3ab8: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B3AB8u;
    {
        const bool branch_taken_0x1b3ab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3ab8) {
            ctx->pc = 0x1B3ABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3AB8u;
            // 0x1b3abc: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3B00u;
            goto label_1b3b00;
        }
    }
    ctx->pc = 0x1B3AC0u;
    // 0x1b3ac0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b3ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b3ac4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1b3ac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b3ac8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1b3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b3acc: 0x40f809  jalr        $v0
    ctx->pc = 0x1B3ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3AD4u);
        ctx->pc = 0x1B3AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3ACCu;
            // 0x1b3ad0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3AD4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3A80u: goto label_1b3a80;
            case 0x1B3AB0u: goto label_1b3ab0;
            case 0x1B3B00u: goto label_1b3b00;
            case 0x1B3B7Cu: goto label_1b3b7c;
            case 0x1B3B80u: goto label_1b3b80;
            case 0x1B3B8Cu: goto label_1b3b8c;
            case 0x1B3BB0u: goto label_1b3bb0;
            case 0x1B3BC0u: goto label_1b3bc0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3AD4u; }
            if (ctx->pc != 0x1B3AD4u) { return; }
        }
        }
    }
    ctx->pc = 0x1B3AD4u;
    // 0x1b3ad4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b3ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b3ad8: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x1b3ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3adc: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B3ADCu;
    SET_GPR_U32(ctx, 31, 0x1B3AE4u);
    ctx->pc = 0x1B3AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3ADCu;
            // 0x1b3ae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3AE4u; }
        if (ctx->pc != 0x1B3AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3AE4u; }
        if (ctx->pc != 0x1B3AE4u) { return; }
    }
    ctx->pc = 0x1B3AE4u;
    // 0x1b3ae4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b3ae8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1b3ae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1b3aec: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1b3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1b3af0: 0x40f809  jalr        $v0
    ctx->pc = 0x1B3AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3AF8u);
        ctx->pc = 0x1B3AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3AF0u;
            // 0x1b3af4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3AF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3A80u: goto label_1b3a80;
            case 0x1B3AB0u: goto label_1b3ab0;
            case 0x1B3B00u: goto label_1b3b00;
            case 0x1B3B7Cu: goto label_1b3b7c;
            case 0x1B3B80u: goto label_1b3b80;
            case 0x1B3B8Cu: goto label_1b3b8c;
            case 0x1B3BB0u: goto label_1b3bb0;
            case 0x1B3BC0u: goto label_1b3bc0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3AF8u; }
            if (ctx->pc != 0x1B3AF8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B3AF8u;
    // 0x1b3af8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B3AF8u;
    {
        const bool branch_taken_0x1b3af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3AF8u;
            // 0x1b3afc: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3af8) {
            ctx->pc = 0x1B3B7Cu;
            goto label_1b3b7c;
        }
    }
    ctx->pc = 0x1B3B00u;
label_1b3b00:
    // 0x1b3b00: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B3B00u;
    {
        const bool branch_taken_0x1b3b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B00u;
            // 0x1b3b04: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b00) {
            ctx->pc = 0x1B3B7Cu;
            goto label_1b3b7c;
        }
    }
    ctx->pc = 0x1B3B08u;
    // 0x1b3b08: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x1b3b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1b3b0c: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B3B0Cu;
    {
        const bool branch_taken_0x1b3b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B0Cu;
            // 0x1b3b10: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b0c) {
            ctx->pc = 0x1B3B80u;
            goto label_1b3b80;
        }
    }
    ctx->pc = 0x1B3B14u;
    // 0x1b3b14: 0xc06b30e  jal         func_1ACC38
    ctx->pc = 0x1B3B14u;
    SET_GPR_U32(ctx, 31, 0x1B3B1Cu);
    ctx->pc = 0x1ACC38u;
    if (runtime->hasFunction(0x1ACC38u)) {
        auto targetFn = runtime->lookupFunction(0x1ACC38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B1Cu; }
        if (ctx->pc != 0x1B3B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACC38_0x1acc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B1Cu; }
        if (ctx->pc != 0x1B3B1Cu) { return; }
    }
    ctx->pc = 0x1B3B1Cu;
    // 0x1b3b1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b20: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B3B20u;
    {
        const bool branch_taken_0x1b3b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B20u;
            // 0x1b3b24: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b20) {
            ctx->pc = 0x1B3B7Cu;
            goto label_1b3b7c;
        }
    }
    ctx->pc = 0x1B3B28u;
    // 0x1b3b28: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b3b2c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1b3b2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b3b30: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1b3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b3b34: 0x40f809  jalr        $v0
    ctx->pc = 0x1B3B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3B3Cu);
        ctx->pc = 0x1B3B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B34u;
            // 0x1b3b38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3B3Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3A80u: goto label_1b3a80;
            case 0x1B3AB0u: goto label_1b3ab0;
            case 0x1B3B00u: goto label_1b3b00;
            case 0x1B3B7Cu: goto label_1b3b7c;
            case 0x1B3B80u: goto label_1b3b80;
            case 0x1B3B8Cu: goto label_1b3b8c;
            case 0x1B3BB0u: goto label_1b3bb0;
            case 0x1B3BC0u: goto label_1b3bc0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B3Cu; }
            if (ctx->pc != 0x1B3B3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B3B3Cu;
    // 0x1b3b3c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b3b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3b40: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x1b3b40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3b44: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B3B44u;
    SET_GPR_U32(ctx, 31, 0x1B3B4Cu);
    ctx->pc = 0x1B3B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B44u;
            // 0x1b3b48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B4Cu; }
        if (ctx->pc != 0x1B3B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B4Cu; }
        if (ctx->pc != 0x1B3B4Cu) { return; }
    }
    ctx->pc = 0x1B3B4Cu;
    // 0x1b3b4c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b3b50: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1b3b50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1b3b54: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1b3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1b3b58: 0x40f809  jalr        $v0
    ctx->pc = 0x1B3B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3B60u);
        ctx->pc = 0x1B3B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B58u;
            // 0x1b3b5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3B60u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3A80u: goto label_1b3a80;
            case 0x1B3AB0u: goto label_1b3ab0;
            case 0x1B3B00u: goto label_1b3b00;
            case 0x1B3B7Cu: goto label_1b3b7c;
            case 0x1B3B80u: goto label_1b3b80;
            case 0x1B3B8Cu: goto label_1b3b8c;
            case 0x1B3BB0u: goto label_1b3bb0;
            case 0x1B3BC0u: goto label_1b3bc0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B60u; }
            if (ctx->pc != 0x1B3B60u) { return; }
        }
        }
    }
    ctx->pc = 0x1B3B60u;
    // 0x1b3b60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b3b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b3b64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b3b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3b68: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1b3b68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b3b6c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b3b70: 0x40f809  jalr        $v0
    ctx->pc = 0x1B3B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3B78u);
        ctx->pc = 0x1B3B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B70u;
            // 0x1b3b74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3B78u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3A80u: goto label_1b3a80;
            case 0x1B3AB0u: goto label_1b3ab0;
            case 0x1B3B00u: goto label_1b3b00;
            case 0x1B3B7Cu: goto label_1b3b7c;
            case 0x1B3B80u: goto label_1b3b80;
            case 0x1B3B8Cu: goto label_1b3b8c;
            case 0x1B3BB0u: goto label_1b3bb0;
            case 0x1B3BC0u: goto label_1b3bc0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B78u; }
            if (ctx->pc != 0x1B3B78u) { return; }
        }
        }
    }
    ctx->pc = 0x1B3B78u;
    // 0x1b3b78: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1b3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1b3b7c:
    // 0x1b3b7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b3b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1b3b80:
    // 0x1b3b80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3b84: 0x1443ffca  bne         $v0, $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1B3B84u;
    {
        const bool branch_taken_0x1b3b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B3B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B84u;
            // 0x1b3b88: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b84) {
            ctx->pc = 0x1B3AB0u;
            runtime->cooperativeGuestYield();
            goto label_1b3ab0;
        }
    }
    ctx->pc = 0x1B3B8Cu;
label_1b3b8c:
    // 0x1b3b8c: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1b3b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3b90: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b3b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b3b94: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B3B94u;
    SET_GPR_U32(ctx, 31, 0x1B3B9Cu);
    ctx->pc = 0x1B3B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B94u;
            // 0x1b3b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B9Cu; }
        if (ctx->pc != 0x1B3B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B9Cu; }
        if (ctx->pc != 0x1B3B9Cu) { return; }
    }
    ctx->pc = 0x1B3B9Cu;
    // 0x1b3b9c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b3b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b3ba0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b3ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3ba4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3ba8: 0x1443ffb5  bne         $v0, $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1B3BA8u;
    {
        const bool branch_taken_0x1b3ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B3BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BA8u;
            // 0x1b3bac: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ba8) {
            ctx->pc = 0x1B3A80u;
            runtime->cooperativeGuestYield();
            goto label_1b3a80;
        }
    }
    ctx->pc = 0x1B3BB0u;
label_1b3bb0:
    // 0x1b3bb0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3BB0u;
    {
        const bool branch_taken_0x1b3bb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3bb0) {
            ctx->pc = 0x1B3BC0u;
            goto label_1b3bc0;
        }
    }
    ctx->pc = 0x1B3BB8u;
    // 0x1b3bb8: 0xc06999c  jal         func_1A6670
    ctx->pc = 0x1B3BB8u;
    SET_GPR_U32(ctx, 31, 0x1B3BC0u);
    ctx->pc = 0x1B3BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BB8u;
            // 0x1b3bbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6670u;
    if (runtime->hasFunction(0x1A6670u)) {
        auto targetFn = runtime->lookupFunction(0x1A6670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BC0u; }
        if (ctx->pc != 0x1B3BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6670_0x1a6670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BC0u; }
        if (ctx->pc != 0x1B3BC0u) { return; }
    }
    ctx->pc = 0x1B3BC0u;
label_1b3bc0:
    // 0x1b3bc0: 0xc08b582  jal         func_22D608
    ctx->pc = 0x1B3BC0u;
    SET_GPR_U32(ctx, 31, 0x1B3BC8u);
    ctx->pc = 0x1B3BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BC0u;
            // 0x1b3bc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D608u;
    if (runtime->hasFunction(0x22D608u)) {
        auto targetFn = runtime->lookupFunction(0x22D608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BC8u; }
        if (ctx->pc != 0x1B3BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22d608_0x22d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BC8u; }
        if (ctx->pc != 0x1B3BC8u) { return; }
    }
    ctx->pc = 0x1B3BC8u;
    // 0x1b3bc8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1b3bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b3bcc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1b3bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b3bd0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1b3bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b3bd4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1b3bd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b3bd8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1b3bd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b3bdc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b3bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3be0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BE0u;
            // 0x1b3be4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3A80u: goto label_1b3a80;
            case 0x1B3AB0u: goto label_1b3ab0;
            case 0x1B3B00u: goto label_1b3b00;
            case 0x1B3B7Cu: goto label_1b3b7c;
            case 0x1B3B80u: goto label_1b3b80;
            case 0x1B3B8Cu: goto label_1b3b8c;
            case 0x1B3BB0u: goto label_1b3bb0;
            case 0x1B3BC0u: goto label_1b3bc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3BE8u;
}
