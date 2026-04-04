#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7F40
// Address: 0x1e7f40 - 0x1e8088
void sub_001E7F40_0x1e7f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7F40_0x1e7f40");
#endif

    ctx->pc = 0x1e7f40u;

    // 0x1e7f40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e7f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e7f44: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1e7f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1e7f48: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1e7f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1e7f4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f50: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e7f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e7f54: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x1e7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x1e7f58: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1E7F58u;
    {
        const bool branch_taken_0x1e7f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F58u;
            // 0x1e7f5c: 0x2402040c  addiu       $v0, $zero, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f58) {
            ctx->pc = 0x1E8070u;
            goto label_1e8070;
        }
    }
    ctx->pc = 0x1E7F60u;
    // 0x1e7f60: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1e7f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1e7f64: 0xa7a20040  sh          $v0, 0x40($sp)
    ctx->pc = 0x1e7f64u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e7f68: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1e7f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1e7f6c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x1e7f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x1e7f70: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1E7F70u;
    {
        const bool branch_taken_0x1e7f70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F70u;
            // 0x1e7f74: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f70) {
            ctx->pc = 0x1E8054u;
            goto label_1e8054;
        }
    }
    ctx->pc = 0x1E7F78u;
    // 0x1e7f78: 0xc077c50  jal         func_1DF140
    ctx->pc = 0x1E7F78u;
    SET_GPR_U32(ctx, 31, 0x1E7F80u);
    ctx->pc = 0x1DF140u;
    if (runtime->hasFunction(0x1DF140u)) {
        auto targetFn = runtime->lookupFunction(0x1DF140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F80u; }
        if (ctx->pc != 0x1E7F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF140_0x1df140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F80u; }
        if (ctx->pc != 0x1E7F80u) { return; }
    }
    ctx->pc = 0x1E7F80u;
    // 0x1e7f80: 0xc077e80  jal         func_1DFA00
    ctx->pc = 0x1E7F80u;
    SET_GPR_U32(ctx, 31, 0x1E7F88u);
    ctx->pc = 0x1E7F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F80u;
            // 0x1e7f84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFA00u;
    if (runtime->hasFunction(0x1DFA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F88u; }
        if (ctx->pc != 0x1E7F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFA00_0x1dfa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F88u; }
        if (ctx->pc != 0x1E7F88u) { return; }
    }
    ctx->pc = 0x1E7F88u;
    // 0x1e7f88: 0xc077b2c  jal         func_1DECB0
    ctx->pc = 0x1E7F88u;
    SET_GPR_U32(ctx, 31, 0x1E7F90u);
    ctx->pc = 0x1E7F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F88u;
            // 0x1e7f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DECB0u;
    if (runtime->hasFunction(0x1DECB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DECB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F90u; }
        if (ctx->pc != 0x1E7F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DECB0_0x1decb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F90u; }
        if (ctx->pc != 0x1E7F90u) { return; }
    }
    ctx->pc = 0x1E7F90u;
    // 0x1e7f90: 0xc62c028c  lwc1        $f12, 0x28C($s1)
    ctx->pc = 0x1e7f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e7f94: 0xc079f42  jal         func_1E7D08
    ctx->pc = 0x1E7F94u;
    SET_GPR_U32(ctx, 31, 0x1E7F9Cu);
    ctx->pc = 0x1E7F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F94u;
            // 0x1e7f98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D08u;
    if (runtime->hasFunction(0x1E7D08u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F9Cu; }
        if (ctx->pc != 0x1E7F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7D08_0x1e7d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F9Cu; }
        if (ctx->pc != 0x1E7F9Cu) { return; }
    }
    ctx->pc = 0x1E7F9Cu;
    // 0x1e7f9c: 0xc0783be  jal         func_1E0EF8
    ctx->pc = 0x1E7F9Cu;
    SET_GPR_U32(ctx, 31, 0x1E7FA4u);
    ctx->pc = 0x1E7FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F9Cu;
            // 0x1e7fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EF8u;
    if (runtime->hasFunction(0x1E0EF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7FA4u; }
        if (ctx->pc != 0x1E7FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EF8_0x1e0ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7FA4u; }
        if (ctx->pc != 0x1E7FA4u) { return; }
    }
    ctx->pc = 0x1E7FA4u;
    // 0x1e7fa4: 0x8e300340  lw          $s0, 0x340($s1)
    ctx->pc = 0x1e7fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x1e7fa8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e7fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7fac: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1e7facu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1e7fb0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7FB0u;
    {
        const bool branch_taken_0x1e7fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E7FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7FB0u;
            // 0x1e7fb4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fb0) {
            ctx->pc = 0x1E7FC0u;
            goto label_1e7fc0;
        }
    }
    ctx->pc = 0x1E7FB8u;
    // 0x1e7fb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7FB8u;
    {
        const bool branch_taken_0x1e7fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7FB8u;
            // 0x1e7fbc: 0x26030020  addiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fb8) {
            ctx->pc = 0x1E7FDCu;
            goto label_1e7fdc;
        }
    }
    ctx->pc = 0x1E7FC0u;
label_1e7fc0:
    // 0x1e7fc0: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1e7fc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1e7fc4: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1e7fc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1e7fc8: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7FC8u;
    {
        const bool branch_taken_0x1e7fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E7FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7FC8u;
            // 0x1e7fcc: 0x26030070  addiu       $v1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fc8) {
            ctx->pc = 0x1E7FDCu;
            goto label_1e7fdc;
        }
    }
    ctx->pc = 0x1E7FD0u;
    // 0x1e7fd0: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1E7FD0u;
    SET_GPR_U32(ctx, 31, 0x1E7FD8u);
    ctx->pc = 0x1E7FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7FD0u;
            // 0x1e7fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7FD8u; }
        if (ctx->pc != 0x1E7FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7FD8u; }
        if (ctx->pc != 0x1E7FD8u) { return; }
    }
    ctx->pc = 0x1E7FD8u;
    // 0x1e7fd8: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x1e7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1e7fdc:
    // 0x1e7fdc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1e7fdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e7fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7fe4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e7fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7fe8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e7fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1e7fec: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1e7fecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e7ff0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1e7ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1e7ff4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1e7ff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e7ff8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e7ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1e7ffc: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1e7ffcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e8000: 0xc077f80  jal         func_1DFE00
    ctx->pc = 0x1E8000u;
    SET_GPR_U32(ctx, 31, 0x1E8008u);
    ctx->pc = 0x1E8004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8000u;
            // 0x1e8004: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFE00u;
    if (runtime->hasFunction(0x1DFE00u)) {
        auto targetFn = runtime->lookupFunction(0x1DFE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8008u; }
        if (ctx->pc != 0x1E8008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dfe00_0x1dfe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8008u; }
        if (ctx->pc != 0x1E8008u) { return; }
    }
    ctx->pc = 0x1E8008u;
    // 0x1e8008: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e8008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e800c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1e800cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1e8010: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1e8010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8014: 0xdcc5bdf8  ld          $a1, -0x4208($a2)
    ctx->pc = 0x1e8014u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x1e8018: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x1e8018u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x1e801c: 0x84830060  lh          $v1, 0x60($a0)
    ctx->pc = 0x1e801cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1e8020: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x1e8020u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x1e8024: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1e8024u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8028: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1e8028u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1e802c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x1e802cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x1e8030: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e8030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8034: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x1e8034u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1e8038: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e8038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e803c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1e803cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8040: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x1e8040u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x1e8044: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1e8044u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8048: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x1e8048u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x1e804c: 0xfcc5bdf8  sd          $a1, -0x4208($a2)
    ctx->pc = 0x1e804cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 5));
    // 0x1e8050: 0xfc830068  sd          $v1, 0x68($a0)
    ctx->pc = 0x1e8050u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 3));
label_1e8054:
    // 0x1e8054: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e8054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1e8058: 0x8e250340  lw          $a1, 0x340($s1)
    ctx->pc = 0x1e8058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x1e805c: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1e805cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1e8060: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1E8060u;
    SET_GPR_U32(ctx, 31, 0x1E8068u);
    ctx->pc = 0x1E8064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8060u;
            // 0x1e8064: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8068u; }
        if (ctx->pc != 0x1E8068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8068u; }
        if (ctx->pc != 0x1E8068u) { return; }
    }
    ctx->pc = 0x1E8068u;
    // 0x1e8068: 0xae200340  sw          $zero, 0x340($s1)
    ctx->pc = 0x1e8068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 0));
    // 0x1e806c: 0x0  nop
    ctx->pc = 0x1e806cu;
    // NOP
label_1e8070:
    // 0x1e8070: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1e8070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e8074: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1e8074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8078: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e8078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e807c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E807Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E807Cu;
            // 0x1e8080: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7FC0u: goto label_1e7fc0;
            case 0x1E7FDCu: goto label_1e7fdc;
            case 0x1E8054u: goto label_1e8054;
            case 0x1E8070u: goto label_1e8070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E8084u;
    // 0x1e8084: 0x0  nop
    ctx->pc = 0x1e8084u;
    // NOP
}
