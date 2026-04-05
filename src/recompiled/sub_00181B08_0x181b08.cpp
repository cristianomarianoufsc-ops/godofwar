#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181B08
// Address: 0x181b08 - 0x181c18
void sub_00181B08_0x181b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181B08_0x181b08");
#endif

    ctx->pc = 0x181b08u;

    // 0x181b08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x181b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x181b0c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x181b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x181b10: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x181b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x181b14: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x181b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x181b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x181b1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x181b1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b20: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x181b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x181b24: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x181b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b28: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x181b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x181b2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x181b2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181b34: 0xc08f164  jal         func_23C590
    ctx->pc = 0x181B34u;
    SET_GPR_U32(ctx, 31, 0x181B3Cu);
    ctx->pc = 0x181B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181B34u;
            // 0x181b38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C590u;
    if (runtime->hasFunction(0x23C590u)) {
        auto targetFn = runtime->lookupFunction(0x23C590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181B3Cu; }
        if (ctx->pc != 0x181B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23c590_0x23c5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181B3Cu; }
        if (ctx->pc != 0x181B3Cu) { return; }
    }
    ctx->pc = 0x181B3Cu;
    // 0x181b3c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x181b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x181b40: 0x2708023  subu        $s0, $s3, $s0
    ctx->pc = 0x181b40u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x181b44: 0x8e22c700  lw          $v0, -0x3900($s1)
    ctx->pc = 0x181b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952704)));
    // 0x181b48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181B48u;
    {
        const bool branch_taken_0x181b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B48u;
            // 0x181b4c: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b48) {
            ctx->pc = 0x181B60u;
            goto label_181b60;
        }
    }
    ctx->pc = 0x181B50u;
    // 0x181b50: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x181B50u;
    SET_GPR_U32(ctx, 31, 0x181B58u);
    ctx->pc = 0x181B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181B50u;
            // 0x181b54: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181B58u; }
        if (ctx->pc != 0x181B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181B58u; }
        if (ctx->pc != 0x181B58u) { return; }
    }
    ctx->pc = 0x181B58u;
    // 0x181b58: 0xae22c700  sw          $v0, -0x3900($s1)
    ctx->pc = 0x181b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952704), GPR_U32(ctx, 2));
    // 0x181b5c: 0x0  nop
    ctx->pc = 0x181b5cu;
    // NOP
label_181b60:
    // 0x181b60: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181B60u;
    SET_GPR_U32(ctx, 31, 0x181B68u);
    ctx->pc = 0x181B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181B60u;
            // 0x181b64: 0x8e24c700  lw          $a0, -0x3900($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952704)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181B68u; }
        if (ctx->pc != 0x181B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181B68u; }
        if (ctx->pc != 0x181B68u) { return; }
    }
    ctx->pc = 0x181B68u;
    // 0x181b68: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x181b68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x181b6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x181b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b78: 0xc060292  jal         func_180A48
    ctx->pc = 0x181B78u;
    SET_GPR_U32(ctx, 31, 0x181B80u);
    ctx->pc = 0x181B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181B78u;
            // 0x181b7c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A48u;
    if (runtime->hasFunction(0x180A48u)) {
        auto targetFn = runtime->lookupFunction(0x180A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181B80u; }
        if (ctx->pc != 0x181B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A48_0x180a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181B80u; }
        if (ctx->pc != 0x181B80u) { return; }
    }
    ctx->pc = 0x181B80u;
    // 0x181b80: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x181b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x181b84: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x181b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x181b88: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x181b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x181b8c: 0x2442af48  addiu       $v0, $v0, -0x50B8
    ctx->pc = 0x181b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946632));
    // 0x181b90: 0x8e23c7bc  lw          $v1, -0x3844($s1)
    ctx->pc = 0x181b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
    // 0x181b94: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x181b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x181b98: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x181b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x181b9c: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x181b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x181ba0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181BA0u;
    {
        const bool branch_taken_0x181ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181BA0u;
            // 0x181ba4: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ba0) {
            ctx->pc = 0x181BB0u;
            goto label_181bb0;
        }
    }
    ctx->pc = 0x181BA8u;
    // 0x181ba8: 0xc060468  jal         func_1811A0
    ctx->pc = 0x181BA8u;
    SET_GPR_U32(ctx, 31, 0x181BB0u);
    ctx->pc = 0x1811A0u;
    if (runtime->hasFunction(0x1811A0u)) {
        auto targetFn = runtime->lookupFunction(0x1811A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181BB0u; }
        if (ctx->pc != 0x181BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001811A0_0x1811a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181BB0u; }
        if (ctx->pc != 0x181BB0u) { return; }
    }
    ctx->pc = 0x181BB0u;
label_181bb0:
    // 0x181bb0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x181BB0u;
    SET_GPR_U32(ctx, 31, 0x181BB8u);
    ctx->pc = 0x181BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181BB0u;
            // 0x181bb4: 0x8e24c7bc  lw          $a0, -0x3844($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181BB8u; }
        if (ctx->pc != 0x181BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181BB8u; }
        if (ctx->pc != 0x181BB8u) { return; }
    }
    ctx->pc = 0x181BB8u;
    // 0x181bb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x181bb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181bbc: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x181bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x181bc0: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x181bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x181bc4: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x181bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x181bc8: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x181bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x181bcc: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x181bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181bd0: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x181bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181bd4: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x181bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181bd8: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x181bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x181bdc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x181bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x181be0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x181be0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x181be4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x181be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181be8: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x181be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x181bec: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x181becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x181bf0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x181bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x181bf4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x181bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181bf8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x181bf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181bfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x181bfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181c00: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x181c00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181c04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181c08: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x181c08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x181c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x181C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181C0Cu;
            // 0x181c10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181B60u: goto label_181b60;
            case 0x181BB0u: goto label_181bb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181C14u;
    // 0x181c14: 0x0  nop
    ctx->pc = 0x181c14u;
    // NOP
}
