#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3EF8
// Address: 0x1b3ef8 - 0x1b4430
void sub_001B3EF8_0x1b3ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3EF8_0x1b3ef8");
#endif

    ctx->pc = 0x1b3ef8u;

    // 0x1b3ef8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b3ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b3efc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b3efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b3f00: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1b3f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1b3f04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b3f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f08: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b3f08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f0c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b3f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b3f10: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b3f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b3f14: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b3f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b3f18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b3f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b3f1c: 0xc08b516  jal         func_22D458
    ctx->pc = 0x1B3F1Cu;
    SET_GPR_U32(ctx, 31, 0x1B3F24u);
    ctx->pc = 0x1B3F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F1Cu;
            // 0x1b3f20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D458u;
    if (runtime->hasFunction(0x22D458u)) {
        auto targetFn = runtime->lookupFunction(0x22D458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F24u; }
        if (ctx->pc != 0x1B3F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22d458_0x22d488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F24u; }
        if (ctx->pc != 0x1B3F24u) { return; }
    }
    ctx->pc = 0x1B3F24u;
    // 0x1b3f24: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x1B3F24u;
    {
        const bool branch_taken_0x1b3f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F24u;
            // 0x1b3f28: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f24) {
            ctx->pc = 0x1B4410u;
            goto label_1b4410;
        }
    }
    ctx->pc = 0x1B3F2Cu;
    // 0x1b3f2c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x1B3F2Cu;
    SET_GPR_U32(ctx, 31, 0x1B3F34u);
    ctx->pc = 0x1B3F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F2Cu;
            // 0x1b3f30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F34u; }
        if (ctx->pc != 0x1B3F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22d6b0_0x22d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F34u; }
        if (ctx->pc != 0x1B3F34u) { return; }
    }
    ctx->pc = 0x1B3F34u;
    // 0x1b3f34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b3f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f38: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B3F38u;
    SET_GPR_U32(ctx, 31, 0x1B3F40u);
    ctx->pc = 0x1B3F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F38u;
            // 0x1b3f3c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F40u; }
        if (ctx->pc != 0x1B3F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F40u; }
        if (ctx->pc != 0x1B3F40u) { return; }
    }
    ctx->pc = 0x1B3F40u;
    // 0x1b3f40: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x1b3f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1b3f44: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B3F44u;
    SET_GPR_U32(ctx, 31, 0x1B3F4Cu);
    ctx->pc = 0x1B3F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F44u;
            // 0x1b3f48: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F4Cu; }
        if (ctx->pc != 0x1B3F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F4Cu; }
        if (ctx->pc != 0x1B3F4Cu) { return; }
    }
    ctx->pc = 0x1B3F4Cu;
    // 0x1b3f4c: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1b3f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1b3f50: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B3F50u;
    SET_GPR_U32(ctx, 31, 0x1B3F58u);
    ctx->pc = 0x1B3F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F50u;
            // 0x1b3f54: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F58u; }
        if (ctx->pc != 0x1B3F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F58u; }
        if (ctx->pc != 0x1B3F58u) { return; }
    }
    ctx->pc = 0x1B3F58u;
    // 0x1b3f58: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x1b3f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x1b3f5c: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B3F5Cu;
    SET_GPR_U32(ctx, 31, 0x1B3F64u);
    ctx->pc = 0x1B3F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F5Cu;
            // 0x1b3f60: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F64u; }
        if (ctx->pc != 0x1B3F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F64u; }
        if (ctx->pc != 0x1B3F64u) { return; }
    }
    ctx->pc = 0x1B3F64u;
    // 0x1b3f64: 0x26640018  addiu       $a0, $s3, 0x18
    ctx->pc = 0x1b3f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x1b3f68: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B3F68u;
    SET_GPR_U32(ctx, 31, 0x1B3F70u);
    ctx->pc = 0x1B3F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F68u;
            // 0x1b3f6c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F70u; }
        if (ctx->pc != 0x1B3F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F70u; }
        if (ctx->pc != 0x1B3F70u) { return; }
    }
    ctx->pc = 0x1B3F70u;
    // 0x1b3f70: 0x2664001c  addiu       $a0, $s3, 0x1C
    ctx->pc = 0x1b3f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x1b3f74: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B3F74u;
    SET_GPR_U32(ctx, 31, 0x1B3F7Cu);
    ctx->pc = 0x1B3F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F74u;
            // 0x1b3f78: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F7Cu; }
        if (ctx->pc != 0x1B3F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F7Cu; }
        if (ctx->pc != 0x1B3F7Cu) { return; }
    }
    ctx->pc = 0x1B3F7Cu;
    // 0x1b3f7c: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x1b3f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1b3f80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b3f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3f84: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B3F84u;
    SET_GPR_U32(ctx, 31, 0x1B3F8Cu);
    ctx->pc = 0x1B3F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F84u;
            // 0x1b3f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F8Cu; }
        if (ctx->pc != 0x1B3F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F8Cu; }
        if (ctx->pc != 0x1B3F8Cu) { return; }
    }
    ctx->pc = 0x1B3F8Cu;
    // 0x1b3f8c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B3F8Cu;
    {
        const bool branch_taken_0x1b3f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F8Cu;
            // 0x1b3f90: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f8c) {
            ctx->pc = 0x1B3FE8u;
            goto label_1b3fe8;
        }
    }
    ctx->pc = 0x1B3F94u;
    // 0x1b3f94: 0x0  nop
    ctx->pc = 0x1b3f94u;
    // NOP
label_1b3f98:
    // 0x1b3f98: 0xc06946a  jal         func_1A51A8
    ctx->pc = 0x1B3F98u;
    SET_GPR_U32(ctx, 31, 0x1B3FA0u);
    ctx->pc = 0x1B3F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F98u;
            // 0x1b3f9c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A51A8u;
    if (runtime->hasFunction(0x1A51A8u)) {
        auto targetFn = runtime->lookupFunction(0x1A51A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3FA0u; }
        if (ctx->pc != 0x1B3FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A51A8_0x1a51a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3FA0u; }
        if (ctx->pc != 0x1B3FA0u) { return; }
    }
    ctx->pc = 0x1B3FA0u;
    // 0x1b3fa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3fa4: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1B3FA4u;
    SET_GPR_U32(ctx, 31, 0x1B3FACu);
    ctx->pc = 0x1B3FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3FA4u;
            // 0x1b3fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3FACu; }
        if (ctx->pc != 0x1B3FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3FACu; }
        if (ctx->pc != 0x1B3FACu) { return; }
    }
    ctx->pc = 0x1B3FACu;
    // 0x1b3fac: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1b3facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1b3fb0: 0x26620028  addiu       $v0, $s3, 0x28
    ctx->pc = 0x1b3fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x1b3fb4: 0x2463aae8  addiu       $v1, $v1, -0x5518
    ctx->pc = 0x1b3fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945512));
    // 0x1b3fb8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1b3fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1b3fbc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1b3fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b3fc0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1b3fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1b3fc4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b3fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b3fc8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1b3fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1b3fcc: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1b3fccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x1b3fd0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1b3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1b3fd4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1b3fd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1b3fd8: 0x40f809  jalr        $v0
    ctx->pc = 0x1B3FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3FE0u);
        ctx->pc = 0x1B3FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3FD8u;
            // 0x1b3fdc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3FE0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3F98u: goto label_1b3f98;
            case 0x1B3FE8u: goto label_1b3fe8;
            case 0x1B4010u: goto label_1b4010;
            case 0x1B4060u: goto label_1b4060;
            case 0x1B4088u: goto label_1b4088;
            case 0x1B40D8u: goto label_1b40d8;
            case 0x1B4100u: goto label_1b4100;
            case 0x1B4150u: goto label_1b4150;
            case 0x1B4178u: goto label_1b4178;
            case 0x1B41D0u: goto label_1b41d0;
            case 0x1B41F8u: goto label_1b41f8;
            case 0x1B4250u: goto label_1b4250;
            case 0x1B4278u: goto label_1b4278;
            case 0x1B42D0u: goto label_1b42d0;
            case 0x1B42F8u: goto label_1b42f8;
            case 0x1B4338u: goto label_1b4338;
            case 0x1B4364u: goto label_1b4364;
            case 0x1B4390u: goto label_1b4390;
            case 0x1B4398u: goto label_1b4398;
            case 0x1B43D8u: goto label_1b43d8;
            case 0x1B43F4u: goto label_1b43f4;
            case 0x1B4410u: goto label_1b4410;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3FE0u; }
            if (ctx->pc != 0x1B3FE0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B3FE0u;
    // 0x1b3fe0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b3fe4: 0x0  nop
    ctx->pc = 0x1b3fe4u;
    // NOP
label_1b3fe8:
    // 0x1b3fe8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b3fe8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3fec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b3fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b3ff0: 0x1c60ffe9  bgtz        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1B3FF0u;
    {
        const bool branch_taken_0x1b3ff0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1B3FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3FF0u;
            // 0x1b3ff4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ff0) {
            ctx->pc = 0x1B3F98u;
            runtime->cooperativeGuestYield();
            goto label_1b3f98;
        }
    }
    ctx->pc = 0x1B3FF8u;
    // 0x1b3ff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ffc: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B3FFCu;
    SET_GPR_U32(ctx, 31, 0x1B4004u);
    ctx->pc = 0x1B4000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3FFCu;
            // 0x1b4000: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4004u; }
        if (ctx->pc != 0x1B4004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4004u; }
        if (ctx->pc != 0x1B4004u) { return; }
    }
    ctx->pc = 0x1B4004u;
    // 0x1b4004: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B4004u;
    {
        const bool branch_taken_0x1b4004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4004u;
            // 0x1b4008: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4004) {
            ctx->pc = 0x1B4060u;
            goto label_1b4060;
        }
    }
    ctx->pc = 0x1B400Cu;
    // 0x1b400c: 0x0  nop
    ctx->pc = 0x1b400cu;
    // NOP
label_1b4010:
    // 0x1b4010: 0xc06949c  jal         func_1A5270
    ctx->pc = 0x1B4010u;
    SET_GPR_U32(ctx, 31, 0x1B4018u);
    ctx->pc = 0x1B4014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4010u;
            // 0x1b4014: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5270u;
    if (runtime->hasFunction(0x1A5270u)) {
        auto targetFn = runtime->lookupFunction(0x1A5270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4018u; }
        if (ctx->pc != 0x1B4018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5270_0x1a5270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4018u; }
        if (ctx->pc != 0x1B4018u) { return; }
    }
    ctx->pc = 0x1B4018u;
    // 0x1b4018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b401c: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1B401Cu;
    SET_GPR_U32(ctx, 31, 0x1B4024u);
    ctx->pc = 0x1B4020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B401Cu;
            // 0x1b4020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4024u; }
        if (ctx->pc != 0x1B4024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4024u; }
        if (ctx->pc != 0x1B4024u) { return; }
    }
    ctx->pc = 0x1B4024u;
    // 0x1b4024: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1b4024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1b4028: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x1b4028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1b402c: 0x2463aa98  addiu       $v1, $v1, -0x5568
    ctx->pc = 0x1b402cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945432));
    // 0x1b4030: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1b4030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1b4034: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1b4034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b4038: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1b4038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1b403c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b403cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b4040: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1b4040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1b4044: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1b4044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x1b4048: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1b4048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1b404c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1b404cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1b4050: 0x40f809  jalr        $v0
    ctx->pc = 0x1B4050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4058u);
        ctx->pc = 0x1B4054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4050u;
            // 0x1b4054: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4058u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3F98u: goto label_1b3f98;
            case 0x1B3FE8u: goto label_1b3fe8;
            case 0x1B4010u: goto label_1b4010;
            case 0x1B4060u: goto label_1b4060;
            case 0x1B4088u: goto label_1b4088;
            case 0x1B40D8u: goto label_1b40d8;
            case 0x1B4100u: goto label_1b4100;
            case 0x1B4150u: goto label_1b4150;
            case 0x1B4178u: goto label_1b4178;
            case 0x1B41D0u: goto label_1b41d0;
            case 0x1B41F8u: goto label_1b41f8;
            case 0x1B4250u: goto label_1b4250;
            case 0x1B4278u: goto label_1b4278;
            case 0x1B42D0u: goto label_1b42d0;
            case 0x1B42F8u: goto label_1b42f8;
            case 0x1B4338u: goto label_1b4338;
            case 0x1B4364u: goto label_1b4364;
            case 0x1B4390u: goto label_1b4390;
            case 0x1B4398u: goto label_1b4398;
            case 0x1B43D8u: goto label_1b43d8;
            case 0x1B43F4u: goto label_1b43f4;
            case 0x1B4410u: goto label_1b4410;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4058u; }
            if (ctx->pc != 0x1B4058u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4058u;
    // 0x1b4058: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b4058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b405c: 0x0  nop
    ctx->pc = 0x1b405cu;
    // NOP
label_1b4060:
    // 0x1b4060: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b4060u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4064: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b4068: 0x1c60ffe9  bgtz        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1B4068u;
    {
        const bool branch_taken_0x1b4068 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1B406Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4068u;
            // 0x1b406c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4068) {
            ctx->pc = 0x1B4010u;
            runtime->cooperativeGuestYield();
            goto label_1b4010;
        }
    }
    ctx->pc = 0x1B4070u;
    // 0x1b4070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4074: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B4074u;
    SET_GPR_U32(ctx, 31, 0x1B407Cu);
    ctx->pc = 0x1B4078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4074u;
            // 0x1b4078: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B407Cu; }
        if (ctx->pc != 0x1B407Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B407Cu; }
        if (ctx->pc != 0x1B407Cu) { return; }
    }
    ctx->pc = 0x1B407Cu;
    // 0x1b407c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B407Cu;
    {
        const bool branch_taken_0x1b407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B407Cu;
            // 0x1b4080: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b407c) {
            ctx->pc = 0x1B40D8u;
            goto label_1b40d8;
        }
    }
    ctx->pc = 0x1B4084u;
    // 0x1b4084: 0x0  nop
    ctx->pc = 0x1b4084u;
    // NOP
label_1b4088:
    // 0x1b4088: 0xc0694ce  jal         func_1A5338
    ctx->pc = 0x1B4088u;
    SET_GPR_U32(ctx, 31, 0x1B4090u);
    ctx->pc = 0x1B408Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4088u;
            // 0x1b408c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5338u;
    if (runtime->hasFunction(0x1A5338u)) {
        auto targetFn = runtime->lookupFunction(0x1A5338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4090u; }
        if (ctx->pc != 0x1B4090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5338_0x1a5338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4090u; }
        if (ctx->pc != 0x1B4090u) { return; }
    }
    ctx->pc = 0x1B4090u;
    // 0x1b4090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4094: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1B4094u;
    SET_GPR_U32(ctx, 31, 0x1B409Cu);
    ctx->pc = 0x1B4098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4094u;
            // 0x1b4098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B409Cu; }
        if (ctx->pc != 0x1B409Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B409Cu; }
        if (ctx->pc != 0x1B409Cu) { return; }
    }
    ctx->pc = 0x1B409Cu;
    // 0x1b409c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1b409cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1b40a0: 0x26620038  addiu       $v0, $s3, 0x38
    ctx->pc = 0x1b40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x1b40a4: 0x2463aa48  addiu       $v1, $v1, -0x55B8
    ctx->pc = 0x1b40a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945352));
    // 0x1b40a8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1b40a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1b40ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1b40acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b40b0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1b40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1b40b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b40b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b40b8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1b40b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1b40bc: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1b40bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x1b40c0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1b40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1b40c4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1b40c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1b40c8: 0x40f809  jalr        $v0
    ctx->pc = 0x1B40C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B40D0u);
        ctx->pc = 0x1B40CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B40C8u;
            // 0x1b40cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B40D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3F98u: goto label_1b3f98;
            case 0x1B3FE8u: goto label_1b3fe8;
            case 0x1B4010u: goto label_1b4010;
            case 0x1B4060u: goto label_1b4060;
            case 0x1B4088u: goto label_1b4088;
            case 0x1B40D8u: goto label_1b40d8;
            case 0x1B4100u: goto label_1b4100;
            case 0x1B4150u: goto label_1b4150;
            case 0x1B4178u: goto label_1b4178;
            case 0x1B41D0u: goto label_1b41d0;
            case 0x1B41F8u: goto label_1b41f8;
            case 0x1B4250u: goto label_1b4250;
            case 0x1B4278u: goto label_1b4278;
            case 0x1B42D0u: goto label_1b42d0;
            case 0x1B42F8u: goto label_1b42f8;
            case 0x1B4338u: goto label_1b4338;
            case 0x1B4364u: goto label_1b4364;
            case 0x1B4390u: goto label_1b4390;
            case 0x1B4398u: goto label_1b4398;
            case 0x1B43D8u: goto label_1b43d8;
            case 0x1B43F4u: goto label_1b43f4;
            case 0x1B4410u: goto label_1b4410;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B40D0u; }
            if (ctx->pc != 0x1B40D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B40D0u;
    // 0x1b40d0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b40d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b40d4: 0x0  nop
    ctx->pc = 0x1b40d4u;
    // NOP
label_1b40d8:
    // 0x1b40d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b40d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b40e0: 0x1c60ffe9  bgtz        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1B40E0u;
    {
        const bool branch_taken_0x1b40e0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1B40E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B40E0u;
            // 0x1b40e4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40e0) {
            ctx->pc = 0x1B4088u;
            runtime->cooperativeGuestYield();
            goto label_1b4088;
        }
    }
    ctx->pc = 0x1B40E8u;
    // 0x1b40e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b40e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40ec: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B40ECu;
    SET_GPR_U32(ctx, 31, 0x1B40F4u);
    ctx->pc = 0x1B40F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B40ECu;
            // 0x1b40f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B40F4u; }
        if (ctx->pc != 0x1B40F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B40F4u; }
        if (ctx->pc != 0x1B40F4u) { return; }
    }
    ctx->pc = 0x1B40F4u;
    // 0x1b40f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B40F4u;
    {
        const bool branch_taken_0x1b40f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B40F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B40F4u;
            // 0x1b40f8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40f4) {
            ctx->pc = 0x1B4150u;
            goto label_1b4150;
        }
    }
    ctx->pc = 0x1B40FCu;
    // 0x1b40fc: 0x0  nop
    ctx->pc = 0x1b40fcu;
    // NOP
label_1b4100:
    // 0x1b4100: 0xc0694e2  jal         func_1A5388
    ctx->pc = 0x1B4100u;
    SET_GPR_U32(ctx, 31, 0x1B4108u);
    ctx->pc = 0x1B4104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4100u;
            // 0x1b4104: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5388u;
    if (runtime->hasFunction(0x1A5388u)) {
        auto targetFn = runtime->lookupFunction(0x1A5388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4108u; }
        if (ctx->pc != 0x1B4108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5388_0x1a5388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4108u; }
        if (ctx->pc != 0x1B4108u) { return; }
    }
    ctx->pc = 0x1B4108u;
    // 0x1b4108: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b410c: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1B410Cu;
    SET_GPR_U32(ctx, 31, 0x1B4114u);
    ctx->pc = 0x1B4110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B410Cu;
            // 0x1b4110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4114u; }
        if (ctx->pc != 0x1B4114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4114u; }
        if (ctx->pc != 0x1B4114u) { return; }
    }
    ctx->pc = 0x1B4114u;
    // 0x1b4114: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1b4114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1b4118: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x1b4118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1b411c: 0x2463a9f8  addiu       $v1, $v1, -0x5608
    ctx->pc = 0x1b411cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945272));
    // 0x1b4120: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1b4120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1b4124: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1b4124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b4128: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1b4128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1b412c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b412cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b4130: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1b4130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1b4134: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1b4134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x1b4138: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1b4138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1b413c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1b413cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1b4140: 0x40f809  jalr        $v0
    ctx->pc = 0x1B4140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4148u);
        ctx->pc = 0x1B4144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4140u;
            // 0x1b4144: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4148u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3F98u: goto label_1b3f98;
            case 0x1B3FE8u: goto label_1b3fe8;
            case 0x1B4010u: goto label_1b4010;
            case 0x1B4060u: goto label_1b4060;
            case 0x1B4088u: goto label_1b4088;
            case 0x1B40D8u: goto label_1b40d8;
            case 0x1B4100u: goto label_1b4100;
            case 0x1B4150u: goto label_1b4150;
            case 0x1B4178u: goto label_1b4178;
            case 0x1B41D0u: goto label_1b41d0;
            case 0x1B41F8u: goto label_1b41f8;
            case 0x1B4250u: goto label_1b4250;
            case 0x1B4278u: goto label_1b4278;
            case 0x1B42D0u: goto label_1b42d0;
            case 0x1B42F8u: goto label_1b42f8;
            case 0x1B4338u: goto label_1b4338;
            case 0x1B4364u: goto label_1b4364;
            case 0x1B4390u: goto label_1b4390;
            case 0x1B4398u: goto label_1b4398;
            case 0x1B43D8u: goto label_1b43d8;
            case 0x1B43F4u: goto label_1b43f4;
            case 0x1B4410u: goto label_1b4410;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4148u; }
            if (ctx->pc != 0x1B4148u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4148u;
    // 0x1b4148: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b4148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b414c: 0x0  nop
    ctx->pc = 0x1b414cu;
    // NOP
label_1b4150:
    // 0x1b4150: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b4150u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4154: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b4158: 0x1c60ffe9  bgtz        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1B4158u;
    {
        const bool branch_taken_0x1b4158 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1B415Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4158u;
            // 0x1b415c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4158) {
            ctx->pc = 0x1B4100u;
            runtime->cooperativeGuestYield();
            goto label_1b4100;
        }
    }
    ctx->pc = 0x1B4160u;
    // 0x1b4160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4164: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B4164u;
    SET_GPR_U32(ctx, 31, 0x1B416Cu);
    ctx->pc = 0x1B4168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4164u;
            // 0x1b4168: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B416Cu; }
        if (ctx->pc != 0x1B416Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B416Cu; }
        if (ctx->pc != 0x1B416Cu) { return; }
    }
    ctx->pc = 0x1B416Cu;
    // 0x1b416c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B416Cu;
    {
        const bool branch_taken_0x1b416c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B416Cu;
            // 0x1b4170: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b416c) {
            ctx->pc = 0x1B41D0u;
            goto label_1b41d0;
        }
    }
    ctx->pc = 0x1B4174u;
    // 0x1b4174: 0x0  nop
    ctx->pc = 0x1b4174u;
    // NOP
label_1b4178:
    // 0x1b4178: 0xc069510  jal         func_1A5440
    ctx->pc = 0x1B4178u;
    SET_GPR_U32(ctx, 31, 0x1B4180u);
    ctx->pc = 0x1B417Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4178u;
            // 0x1b417c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5440u;
    if (runtime->hasFunction(0x1A5440u)) {
        auto targetFn = runtime->lookupFunction(0x1A5440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4180u; }
        if (ctx->pc != 0x1B4180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5440_0x1a5440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4180u; }
        if (ctx->pc != 0x1B4180u) { return; }
    }
    ctx->pc = 0x1B4180u;
    // 0x1b4180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4184: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1B4184u;
    SET_GPR_U32(ctx, 31, 0x1B418Cu);
    ctx->pc = 0x1B4188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4184u;
            // 0x1b4188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B418Cu; }
        if (ctx->pc != 0x1B418Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B418Cu; }
        if (ctx->pc != 0x1B418Cu) { return; }
    }
    ctx->pc = 0x1B418Cu;
    // 0x1b418c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1b418cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1b4190: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1b4190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1b4194: 0x2463a9a8  addiu       $v1, $v1, -0x5658
    ctx->pc = 0x1b4194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945192));
    // 0x1b4198: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1b4198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1b419c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1b419cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1b41a0: 0x26620048  addiu       $v0, $s3, 0x48
    ctx->pc = 0x1b41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x1b41a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1b41a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b41a8: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1b41a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1b41ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b41acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b41b0: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1b41b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1b41b4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1b41b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x1b41b8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1b41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1b41bc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1b41bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1b41c0: 0x40f809  jalr        $v0
    ctx->pc = 0x1B41C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B41C8u);
        ctx->pc = 0x1B41C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41C0u;
            // 0x1b41c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B41C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3F98u: goto label_1b3f98;
            case 0x1B3FE8u: goto label_1b3fe8;
            case 0x1B4010u: goto label_1b4010;
            case 0x1B4060u: goto label_1b4060;
            case 0x1B4088u: goto label_1b4088;
            case 0x1B40D8u: goto label_1b40d8;
            case 0x1B4100u: goto label_1b4100;
            case 0x1B4150u: goto label_1b4150;
            case 0x1B4178u: goto label_1b4178;
            case 0x1B41D0u: goto label_1b41d0;
            case 0x1B41F8u: goto label_1b41f8;
            case 0x1B4250u: goto label_1b4250;
            case 0x1B4278u: goto label_1b4278;
            case 0x1B42D0u: goto label_1b42d0;
            case 0x1B42F8u: goto label_1b42f8;
            case 0x1B4338u: goto label_1b4338;
            case 0x1B4364u: goto label_1b4364;
            case 0x1B4390u: goto label_1b4390;
            case 0x1B4398u: goto label_1b4398;
            case 0x1B43D8u: goto label_1b43d8;
            case 0x1B43F4u: goto label_1b43f4;
            case 0x1B4410u: goto label_1b4410;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B41C8u; }
            if (ctx->pc != 0x1B41C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B41C8u;
    // 0x1b41c8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b41cc: 0x0  nop
    ctx->pc = 0x1b41ccu;
    // NOP
label_1b41d0:
    // 0x1b41d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b41d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b41d8: 0x1c60ffe7  bgtz        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B41D8u;
    {
        const bool branch_taken_0x1b41d8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1B41DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41D8u;
            // 0x1b41dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41d8) {
            ctx->pc = 0x1B4178u;
            runtime->cooperativeGuestYield();
            goto label_1b4178;
        }
    }
    ctx->pc = 0x1B41E0u;
    // 0x1b41e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b41e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41e4: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B41E4u;
    SET_GPR_U32(ctx, 31, 0x1B41ECu);
    ctx->pc = 0x1B41E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41E4u;
            // 0x1b41e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41ECu; }
        if (ctx->pc != 0x1B41ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41ECu; }
        if (ctx->pc != 0x1B41ECu) { return; }
    }
    ctx->pc = 0x1B41ECu;
    // 0x1b41ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B41ECu;
    {
        const bool branch_taken_0x1b41ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41ECu;
            // 0x1b41f0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41ec) {
            ctx->pc = 0x1B4250u;
            goto label_1b4250;
        }
    }
    ctx->pc = 0x1B41F4u;
    // 0x1b41f4: 0x0  nop
    ctx->pc = 0x1b41f4u;
    // NOP
label_1b41f8:
    // 0x1b41f8: 0xc069586  jal         func_1A5618
    ctx->pc = 0x1B41F8u;
    SET_GPR_U32(ctx, 31, 0x1B4200u);
    ctx->pc = 0x1B41FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41F8u;
            // 0x1b41fc: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5618u;
    if (runtime->hasFunction(0x1A5618u)) {
        auto targetFn = runtime->lookupFunction(0x1A5618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4200u; }
        if (ctx->pc != 0x1B4200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5618_0x1a5618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4200u; }
        if (ctx->pc != 0x1B4200u) { return; }
    }
    ctx->pc = 0x1B4200u;
    // 0x1b4200: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4204: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1B4204u;
    SET_GPR_U32(ctx, 31, 0x1B420Cu);
    ctx->pc = 0x1B4208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4204u;
            // 0x1b4208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B420Cu; }
        if (ctx->pc != 0x1B420Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B420Cu; }
        if (ctx->pc != 0x1B420Cu) { return; }
    }
    ctx->pc = 0x1B420Cu;
    // 0x1b420c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1b420cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1b4210: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1b4210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1b4214: 0x2463a958  addiu       $v1, $v1, -0x56A8
    ctx->pc = 0x1b4214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945112));
    // 0x1b4218: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1b4218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1b421c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1b421cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1b4220: 0x26620050  addiu       $v0, $s3, 0x50
    ctx->pc = 0x1b4220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x1b4224: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1b4224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b4228: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1b4228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1b422c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b422cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b4230: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1b4230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1b4234: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1b4234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x1b4238: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1b4238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1b423c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1b423cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1b4240: 0x40f809  jalr        $v0
    ctx->pc = 0x1B4240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4248u);
        ctx->pc = 0x1B4244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4240u;
            // 0x1b4244: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4248u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3F98u: goto label_1b3f98;
            case 0x1B3FE8u: goto label_1b3fe8;
            case 0x1B4010u: goto label_1b4010;
            case 0x1B4060u: goto label_1b4060;
            case 0x1B4088u: goto label_1b4088;
            case 0x1B40D8u: goto label_1b40d8;
            case 0x1B4100u: goto label_1b4100;
            case 0x1B4150u: goto label_1b4150;
            case 0x1B4178u: goto label_1b4178;
            case 0x1B41D0u: goto label_1b41d0;
            case 0x1B41F8u: goto label_1b41f8;
            case 0x1B4250u: goto label_1b4250;
            case 0x1B4278u: goto label_1b4278;
            case 0x1B42D0u: goto label_1b42d0;
            case 0x1B42F8u: goto label_1b42f8;
            case 0x1B4338u: goto label_1b4338;
            case 0x1B4364u: goto label_1b4364;
            case 0x1B4390u: goto label_1b4390;
            case 0x1B4398u: goto label_1b4398;
            case 0x1B43D8u: goto label_1b43d8;
            case 0x1B43F4u: goto label_1b43f4;
            case 0x1B4410u: goto label_1b4410;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4248u; }
            if (ctx->pc != 0x1B4248u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4248u;
    // 0x1b4248: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b4248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b424c: 0x0  nop
    ctx->pc = 0x1b424cu;
    // NOP
label_1b4250:
    // 0x1b4250: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b4250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4254: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b4258: 0x1c60ffe7  bgtz        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B4258u;
    {
        const bool branch_taken_0x1b4258 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1B425Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4258u;
            // 0x1b425c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4258) {
            ctx->pc = 0x1B41F8u;
            runtime->cooperativeGuestYield();
            goto label_1b41f8;
        }
    }
    ctx->pc = 0x1B4260u;
    // 0x1b4260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4264: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B4264u;
    SET_GPR_U32(ctx, 31, 0x1B426Cu);
    ctx->pc = 0x1B4268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4264u;
            // 0x1b4268: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B426Cu; }
        if (ctx->pc != 0x1B426Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B426Cu; }
        if (ctx->pc != 0x1B426Cu) { return; }
    }
    ctx->pc = 0x1B426Cu;
    // 0x1b426c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B426Cu;
    {
        const bool branch_taken_0x1b426c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B426Cu;
            // 0x1b4270: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b426c) {
            ctx->pc = 0x1B42D0u;
            goto label_1b42d0;
        }
    }
    ctx->pc = 0x1B4274u;
    // 0x1b4274: 0x0  nop
    ctx->pc = 0x1b4274u;
    // NOP
label_1b4278:
    // 0x1b4278: 0xc0695b4  jal         func_1A56D0
    ctx->pc = 0x1B4278u;
    SET_GPR_U32(ctx, 31, 0x1B4280u);
    ctx->pc = 0x1B427Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4278u;
            // 0x1b427c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A56D0u;
    if (runtime->hasFunction(0x1A56D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A56D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4280u; }
        if (ctx->pc != 0x1B4280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A56D0_0x1a56d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4280u; }
        if (ctx->pc != 0x1B4280u) { return; }
    }
    ctx->pc = 0x1B4280u;
    // 0x1b4280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4284: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1B4284u;
    SET_GPR_U32(ctx, 31, 0x1B428Cu);
    ctx->pc = 0x1B4288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4284u;
            // 0x1b4288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B428Cu; }
        if (ctx->pc != 0x1B428Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B428Cu; }
        if (ctx->pc != 0x1B428Cu) { return; }
    }
    ctx->pc = 0x1B428Cu;
    // 0x1b428c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1b428cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1b4290: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1b4290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1b4294: 0x2463a908  addiu       $v1, $v1, -0x56F8
    ctx->pc = 0x1b4294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945032));
    // 0x1b4298: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1b4298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1b429c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1b429cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1b42a0: 0x26620058  addiu       $v0, $s3, 0x58
    ctx->pc = 0x1b42a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x1b42a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1b42a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b42a8: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1b42a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1b42ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b42acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b42b0: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1b42b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1b42b4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1b42b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x1b42b8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1b42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1b42bc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1b42bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1b42c0: 0x40f809  jalr        $v0
    ctx->pc = 0x1B42C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B42C8u);
        ctx->pc = 0x1B42C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42C0u;
            // 0x1b42c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B42C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3F98u: goto label_1b3f98;
            case 0x1B3FE8u: goto label_1b3fe8;
            case 0x1B4010u: goto label_1b4010;
            case 0x1B4060u: goto label_1b4060;
            case 0x1B4088u: goto label_1b4088;
            case 0x1B40D8u: goto label_1b40d8;
            case 0x1B4100u: goto label_1b4100;
            case 0x1B4150u: goto label_1b4150;
            case 0x1B4178u: goto label_1b4178;
            case 0x1B41D0u: goto label_1b41d0;
            case 0x1B41F8u: goto label_1b41f8;
            case 0x1B4250u: goto label_1b4250;
            case 0x1B4278u: goto label_1b4278;
            case 0x1B42D0u: goto label_1b42d0;
            case 0x1B42F8u: goto label_1b42f8;
            case 0x1B4338u: goto label_1b4338;
            case 0x1B4364u: goto label_1b4364;
            case 0x1B4390u: goto label_1b4390;
            case 0x1B4398u: goto label_1b4398;
            case 0x1B43D8u: goto label_1b43d8;
            case 0x1B43F4u: goto label_1b43f4;
            case 0x1B4410u: goto label_1b4410;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B42C8u; }
            if (ctx->pc != 0x1B42C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B42C8u;
    // 0x1b42c8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b42cc: 0x0  nop
    ctx->pc = 0x1b42ccu;
    // NOP
label_1b42d0:
    // 0x1b42d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b42d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b42d8: 0x1c60ffe7  bgtz        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B42D8u;
    {
        const bool branch_taken_0x1b42d8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1B42DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42D8u;
            // 0x1b42dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42d8) {
            ctx->pc = 0x1B4278u;
            runtime->cooperativeGuestYield();
            goto label_1b4278;
        }
    }
    ctx->pc = 0x1B42E0u;
    // 0x1b42e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b42e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42e4: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B42E4u;
    SET_GPR_U32(ctx, 31, 0x1B42ECu);
    ctx->pc = 0x1B42E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42E4u;
            // 0x1b42e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B42ECu; }
        if (ctx->pc != 0x1B42ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B42ECu; }
        if (ctx->pc != 0x1B42ECu) { return; }
    }
    ctx->pc = 0x1B42ECu;
    // 0x1b42ec: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1B42ECu;
    {
        const bool branch_taken_0x1b42ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42ECu;
            // 0x1b42f0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42ec) {
            ctx->pc = 0x1B43F4u;
            goto label_1b43f4;
        }
    }
    ctx->pc = 0x1B42F4u;
    // 0x1b42f4: 0x0  nop
    ctx->pc = 0x1b42f4u;
    // NOP
label_1b42f8:
    // 0x1b42f8: 0x27a40008  addiu       $a0, $sp, 0x8
    ctx->pc = 0x1b42f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1b42fc: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B42FCu;
    SET_GPR_U32(ctx, 31, 0x1B4304u);
    ctx->pc = 0x1B4300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42FCu;
            // 0x1b4300: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4304u; }
        if (ctx->pc != 0x1B4304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4304u; }
        if (ctx->pc != 0x1B4304u) { return; }
    }
    ctx->pc = 0x1B4304u;
    // 0x1b4304: 0xc0699de  jal         func_1A6778
    ctx->pc = 0x1B4304u;
    SET_GPR_U32(ctx, 31, 0x1B430Cu);
    ctx->pc = 0x1B4308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4304u;
            // 0x1b4308: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6778u;
    if (runtime->hasFunction(0x1A6778u)) {
        auto targetFn = runtime->lookupFunction(0x1A6778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B430Cu; }
        if (ctx->pc != 0x1B430Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6778_0x1a6778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B430Cu; }
        if (ctx->pc != 0x1B430Cu) { return; }
    }
    ctx->pc = 0x1B430Cu;
    // 0x1b430c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1b430cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4310: 0xc0697a2  jal         func_1A5E88
    ctx->pc = 0x1B4310u;
    SET_GPR_U32(ctx, 31, 0x1B4318u);
    ctx->pc = 0x1B4314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4310u;
            // 0x1b4314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5E88u;
    if (runtime->hasFunction(0x1A5E88u)) {
        auto targetFn = runtime->lookupFunction(0x1A5E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4318u; }
        if (ctx->pc != 0x1B4318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5e88_0x1a5eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4318u; }
        if (ctx->pc != 0x1B4318u) { return; }
    }
    ctx->pc = 0x1B4318u;
    // 0x1b4318: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b4318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b431c: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x1b431cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1b4320: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b4320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b4324: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x1b4324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x1b4328: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b4328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1b432c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1b432cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1b4330: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1B4330u;
    {
        const bool branch_taken_0x1b4330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4330u;
            // 0x1b4334: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4330) {
            ctx->pc = 0x1B43D8u;
            goto label_1b43d8;
        }
    }
    ctx->pc = 0x1B4338u;
label_1b4338:
    // 0x1b4338: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4338u;
    {
        const bool branch_taken_0x1b4338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B433Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4338u;
            // 0x1b433c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4338) {
            ctx->pc = 0x1B4364u;
            goto label_1b4364;
        }
    }
    ctx->pc = 0x1B4340u;
    // 0x1b4340: 0xc06927a  jal         func_1A49E8
    ctx->pc = 0x1B4340u;
    SET_GPR_U32(ctx, 31, 0x1B4348u);
    ctx->pc = 0x1B4344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4340u;
            // 0x1b4344: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A49E8u;
    if (runtime->hasFunction(0x1A49E8u)) {
        auto targetFn = runtime->lookupFunction(0x1A49E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4348u; }
        if (ctx->pc != 0x1B4348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A49E8_0x1a49e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4348u; }
        if (ctx->pc != 0x1B4348u) { return; }
    }
    ctx->pc = 0x1B4348u;
    // 0x1b4348: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b434c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b434cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4350: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1B4350u;
    SET_GPR_U32(ctx, 31, 0x1B4358u);
    ctx->pc = 0x1B4354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4350u;
            // 0x1b4354: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4358u; }
        if (ctx->pc != 0x1B4358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4358u; }
        if (ctx->pc != 0x1B4358u) { return; }
    }
    ctx->pc = 0x1B4358u;
    // 0x1b4358: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1b4358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1b435c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B435Cu;
    {
        const bool branch_taken_0x1b435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B435Cu;
            // 0x1b4360: 0x2442ab88  addiu       $v0, $v0, -0x5478 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b435c) {
            ctx->pc = 0x1B4390u;
            goto label_1b4390;
        }
    }
    ctx->pc = 0x1B4364u;
label_1b4364:
    // 0x1b4364: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1b4364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b4368: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B4368u;
    {
        const bool branch_taken_0x1b4368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b4368) {
            ctx->pc = 0x1B436Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4368u;
            // 0x1b436c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4398u;
            goto label_1b4398;
        }
    }
    ctx->pc = 0x1B4370u;
    // 0x1b4370: 0xc06941a  jal         func_1A5068
    ctx->pc = 0x1B4370u;
    SET_GPR_U32(ctx, 31, 0x1B4378u);
    ctx->pc = 0x1B4374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4370u;
            // 0x1b4374: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5068u;
    if (runtime->hasFunction(0x1A5068u)) {
        auto targetFn = runtime->lookupFunction(0x1A5068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4378u; }
        if (ctx->pc != 0x1B4378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5068_0x1a5068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4378u; }
        if (ctx->pc != 0x1B4378u) { return; }
    }
    ctx->pc = 0x1B4378u;
    // 0x1b4378: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b437c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b437cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4380: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1B4380u;
    SET_GPR_U32(ctx, 31, 0x1B4388u);
    ctx->pc = 0x1B4384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4380u;
            // 0x1b4384: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4388u; }
        if (ctx->pc != 0x1B4388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4388u; }
        if (ctx->pc != 0x1B4388u) { return; }
    }
    ctx->pc = 0x1B4388u;
    // 0x1b4388: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1b4388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1b438c: 0x2442ab38  addiu       $v0, $v0, -0x54C8
    ctx->pc = 0x1b438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945592));
label_1b4390:
    // 0x1b4390: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b4390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1b4394: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b4394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1b4398:
    // 0x1b4398: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1b4398u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1b439c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1b439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1b43a0: 0x40f809  jalr        $v0
    ctx->pc = 0x1B43A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B43A8u);
        ctx->pc = 0x1B43A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43A0u;
            // 0x1b43a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B43A8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3F98u: goto label_1b3f98;
            case 0x1B3FE8u: goto label_1b3fe8;
            case 0x1B4010u: goto label_1b4010;
            case 0x1B4060u: goto label_1b4060;
            case 0x1B4088u: goto label_1b4088;
            case 0x1B40D8u: goto label_1b40d8;
            case 0x1B4100u: goto label_1b4100;
            case 0x1B4150u: goto label_1b4150;
            case 0x1B4178u: goto label_1b4178;
            case 0x1B41D0u: goto label_1b41d0;
            case 0x1B41F8u: goto label_1b41f8;
            case 0x1B4250u: goto label_1b4250;
            case 0x1B4278u: goto label_1b4278;
            case 0x1B42D0u: goto label_1b42d0;
            case 0x1B42F8u: goto label_1b42f8;
            case 0x1B4338u: goto label_1b4338;
            case 0x1B4364u: goto label_1b4364;
            case 0x1B4390u: goto label_1b4390;
            case 0x1B4398u: goto label_1b4398;
            case 0x1B43D8u: goto label_1b43d8;
            case 0x1B43F4u: goto label_1b43f4;
            case 0x1B4410u: goto label_1b4410;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B43A8u; }
            if (ctx->pc != 0x1B43A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B43A8u;
    // 0x1b43a8: 0xc069780  jal         func_1A5E00
    ctx->pc = 0x1B43A8u;
    SET_GPR_U32(ctx, 31, 0x1B43B0u);
    ctx->pc = 0x1B43ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43A8u;
            // 0x1b43ac: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5E00u;
    if (runtime->hasFunction(0x1A5E00u)) {
        auto targetFn = runtime->lookupFunction(0x1A5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43B0u; }
        if (ctx->pc != 0x1B43B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5E00_0x1a5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43B0u; }
        if (ctx->pc != 0x1B43B0u) { return; }
    }
    ctx->pc = 0x1B43B0u;
    // 0x1b43b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b43b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43b4: 0xc069600  jal         func_1A5800
    ctx->pc = 0x1B43B4u;
    SET_GPR_U32(ctx, 31, 0x1B43BCu);
    ctx->pc = 0x1B43B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43B4u;
            // 0x1b43b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5800u;
    if (runtime->hasFunction(0x1A5800u)) {
        auto targetFn = runtime->lookupFunction(0x1A5800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43BCu; }
        if (ctx->pc != 0x1B43BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5800_0x1a5870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43BCu; }
        if (ctx->pc != 0x1B43BCu) { return; }
    }
    ctx->pc = 0x1B43BCu;
    // 0x1b43bc: 0x26430014  addiu       $v1, $s2, 0x14
    ctx->pc = 0x1b43bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1b43c0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1b43c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b43c4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b43c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1b43c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b43c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b43cc: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1b43ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1b43d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1b43d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1b43d4: 0x0  nop
    ctx->pc = 0x1b43d4u;
    // NOP
label_1b43d8:
    // 0x1b43d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b43d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43dc: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B43DCu;
    SET_GPR_U32(ctx, 31, 0x1B43E4u);
    ctx->pc = 0x1B43E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43DCu;
            // 0x1b43e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43E4u; }
        if (ctx->pc != 0x1B43E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43E4u; }
        if (ctx->pc != 0x1B43E4u) { return; }
    }
    ctx->pc = 0x1B43E4u;
    // 0x1b43e4: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x1b43e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b43e8: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1B43E8u;
    {
        const bool branch_taken_0x1b43e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B43ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43E8u;
            // 0x1b43ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43e8) {
            ctx->pc = 0x1B4338u;
            runtime->cooperativeGuestYield();
            goto label_1b4338;
        }
    }
    ctx->pc = 0x1B43F0u;
    // 0x1b43f0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b43f4:
    // 0x1b43f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b43f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b43fc: 0x1c60ffbe  bgtz        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1B43FCu;
    {
        const bool branch_taken_0x1b43fc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1B4400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43FCu;
            // 0x1b4400: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43fc) {
            ctx->pc = 0x1B42F8u;
            runtime->cooperativeGuestYield();
            goto label_1b42f8;
        }
    }
    ctx->pc = 0x1B4404u;
    // 0x1b4404: 0xc08b5b0  jal         func_22D6C0
    ctx->pc = 0x1B4404u;
    SET_GPR_U32(ctx, 31, 0x1B440Cu);
    ctx->pc = 0x1B4408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4404u;
            // 0x1b4408: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6C0u;
    if (runtime->hasFunction(0x22D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B440Cu; }
        if (ctx->pc != 0x1B440Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22d6c0_0x22d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B440Cu; }
        if (ctx->pc != 0x1B440Cu) { return; }
    }
    ctx->pc = 0x1B440Cu;
    // 0x1b440c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b440cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b4410:
    // 0x1b4410: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b4410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b4414: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b4414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4418: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b4418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b441c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1b441cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4424: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4424u;
            // 0x1b4428: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3F98u: goto label_1b3f98;
            case 0x1B3FE8u: goto label_1b3fe8;
            case 0x1B4010u: goto label_1b4010;
            case 0x1B4060u: goto label_1b4060;
            case 0x1B4088u: goto label_1b4088;
            case 0x1B40D8u: goto label_1b40d8;
            case 0x1B4100u: goto label_1b4100;
            case 0x1B4150u: goto label_1b4150;
            case 0x1B4178u: goto label_1b4178;
            case 0x1B41D0u: goto label_1b41d0;
            case 0x1B41F8u: goto label_1b41f8;
            case 0x1B4250u: goto label_1b4250;
            case 0x1B4278u: goto label_1b4278;
            case 0x1B42D0u: goto label_1b42d0;
            case 0x1B42F8u: goto label_1b42f8;
            case 0x1B4338u: goto label_1b4338;
            case 0x1B4364u: goto label_1b4364;
            case 0x1B4390u: goto label_1b4390;
            case 0x1B4398u: goto label_1b4398;
            case 0x1B43D8u: goto label_1b43d8;
            case 0x1B43F4u: goto label_1b43f4;
            case 0x1B4410u: goto label_1b4410;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B442Cu;
    // 0x1b442c: 0x0  nop
    ctx->pc = 0x1b442cu;
    // NOP
}
