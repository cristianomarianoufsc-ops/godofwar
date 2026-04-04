#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7DA8
// Address: 0x1e7da8 - 0x1e7f40
void sub_001E7DA8_0x1e7da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7DA8_0x1e7da8");
#endif

    ctx->pc = 0x1e7da8u;

    // 0x1e7da8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e7da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e7dac: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e7dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1e7db0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e7db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1e7db4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7db8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e7db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1e7dbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e7dbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7dc0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e7dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e7dc4: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x1e7dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x1e7dc8: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1E7DC8u;
    {
        const bool branch_taken_0x1e7dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DC8u;
            // 0x1e7dcc: 0x8e300320  lw          $s0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7dc8) {
            ctx->pc = 0x1E7F28u;
            goto label_1e7f28;
        }
    }
    ctx->pc = 0x1E7DD0u;
    // 0x1e7dd0: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1E7DD0u;
    SET_GPR_U32(ctx, 31, 0x1E7DD8u);
    ctx->pc = 0x1E7DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DD0u;
            // 0x1e7dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DD8u; }
        if (ctx->pc != 0x1E7DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DD8u; }
        if (ctx->pc != 0x1E7DD8u) { return; }
    }
    ctx->pc = 0x1E7DD8u;
    // 0x1e7dd8: 0x80420020  lb          $v0, 0x20($v0)
    ctx->pc = 0x1e7dd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e7ddc: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1E7DDCu;
    {
        const bool branch_taken_0x1e7ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DDCu;
            // 0x1e7de0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ddc) {
            ctx->pc = 0x1E7F28u;
            goto label_1e7f28;
        }
    }
    ctx->pc = 0x1E7DE4u;
    // 0x1e7de4: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1E7DE4u;
    SET_GPR_U32(ctx, 31, 0x1E7DECu);
    ctx->pc = 0x1E7DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DE4u;
            // 0x1e7de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DECu; }
        if (ctx->pc != 0x1E7DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DECu; }
        if (ctx->pc != 0x1E7DECu) { return; }
    }
    ctx->pc = 0x1E7DECu;
    // 0x1e7dec: 0xc04c992  jal         func_132648
    ctx->pc = 0x1E7DECu;
    SET_GPR_U32(ctx, 31, 0x1E7DF4u);
    ctx->pc = 0x1E7DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DECu;
            // 0x1e7df0: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DF4u; }
        if (ctx->pc != 0x1E7DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DF4u; }
        if (ctx->pc != 0x1E7DF4u) { return; }
    }
    ctx->pc = 0x1E7DF4u;
    // 0x1e7df4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e7df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7df8: 0x1240004b  beqz        $s2, . + 4 + (0x4B << 2)
    ctx->pc = 0x1E7DF8u;
    {
        const bool branch_taken_0x1e7df8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DF8u;
            // 0x1e7dfc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7df8) {
            ctx->pc = 0x1E7F28u;
            goto label_1e7f28;
        }
    }
    ctx->pc = 0x1E7E00u;
    // 0x1e7e00: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1e7e00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7e04: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1e7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x1e7e08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7E08u;
    {
        const bool branch_taken_0x1e7e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E08u;
            // 0x1e7e0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e08) {
            ctx->pc = 0x1E7E20u;
            goto label_1e7e20;
        }
    }
    ctx->pc = 0x1E7E10u;
    // 0x1e7e10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e7e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7e14: 0x50620002  beql        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7E14u;
    {
        const bool branch_taken_0x1e7e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e7e14) {
            ctx->pc = 0x1E7E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E14u;
            // 0x1e7e18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7E20u;
            goto label_1e7e20;
        }
    }
    ctx->pc = 0x1E7E1Cu;
    // 0x1e7e1c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1e7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e7e20:
    // 0x1e7e20: 0x24020415  addiu       $v0, $zero, 0x415
    ctx->pc = 0x1e7e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
    // 0x1e7e24: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1e7e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1e7e28: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x1e7e28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e7e2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e7e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7e30: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e7e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1e7e34: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1e7e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1e7e38: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1e7e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1e7e3c: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1e7e3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1e7e40: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7E40u;
    {
        const bool branch_taken_0x1e7e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E7E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E40u;
            // 0x1e7e44: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e40) {
            ctx->pc = 0x1E7E50u;
            goto label_1e7e50;
        }
    }
    ctx->pc = 0x1E7E48u;
    // 0x1e7e48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7E48u;
    {
        const bool branch_taken_0x1e7e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E48u;
            // 0x1e7e4c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e48) {
            ctx->pc = 0x1E7E6Cu;
            goto label_1e7e6c;
        }
    }
    ctx->pc = 0x1E7E50u;
label_1e7e50:
    // 0x1e7e50: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1e7e50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1e7e54: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1e7e54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1e7e58: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7E58u;
    {
        const bool branch_taken_0x1e7e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1e7e58) {
            ctx->pc = 0x1E7E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E58u;
            // 0x1e7e5c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7E6Cu;
            goto label_1e7e6c;
        }
    }
    ctx->pc = 0x1E7E60u;
    // 0x1e7e60: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1E7E60u;
    SET_GPR_U32(ctx, 31, 0x1E7E68u);
    ctx->pc = 0x1E7E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E60u;
            // 0x1e7e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E68u; }
        if (ctx->pc != 0x1E7E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E68u; }
        if (ctx->pc != 0x1E7E68u) { return; }
    }
    ctx->pc = 0x1E7E68u;
    // 0x1e7e68: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1e7e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1e7e6c:
    // 0x1e7e6c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1e7e6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e7e70: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e7e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1e7e74: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1e7e74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e7e78: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1e7e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1e7e7c: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1e7e7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1e7e80: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1e7e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1e7e84: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1e7e84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1e7e88: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1e7e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1e7e8c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e7e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1e7e90: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1e7e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1e7e94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e7e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e98: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1E7E98u;
    SET_GPR_U32(ctx, 31, 0x1E7EA0u);
    ctx->pc = 0x1E7E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E98u;
            // 0x1e7e9c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7EA0u; }
        if (ctx->pc != 0x1E7EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7EA0u; }
        if (ctx->pc != 0x1E7EA0u) { return; }
    }
    ctx->pc = 0x1E7EA0u;
    // 0x1e7ea0: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1e7ea0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7ea4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e7ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e7ea8: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1e7ea8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e7eac: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e7eacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7eb0: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x1e7eb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7eb4: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e7eb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e7eb8: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1e7eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e7ebc: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1e7ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1e7ec0: 0xdcc5bdf8  ld          $a1, -0x4208($a2)
    ctx->pc = 0x1e7ec0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x1e7ec4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1e7ec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ecc: 0x86430060  lh          $v1, 0x60($s2)
    ctx->pc = 0x1e7eccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1e7ed0: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x1e7ed0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x1e7ed4: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x1e7ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    // 0x1e7ed8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1e7ed8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1e7edc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1e7edcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7ee0: 0x7e420030  sq          $v0, 0x30($s2)
    ctx->pc = 0x1e7ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
    // 0x1e7ee4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e7ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ee8: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x1e7ee8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1e7eec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e7eecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ef0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1e7ef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7ef4: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x1e7ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
    // 0x1e7ef8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1e7ef8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7efc: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x1e7efcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
    // 0x1e7f00: 0xfcc5bdf8  sd          $a1, -0x4208($a2)
    ctx->pc = 0x1e7f00u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 5));
    // 0x1e7f04: 0xc077cfa  jal         func_1DF3E8
    ctx->pc = 0x1E7F04u;
    SET_GPR_U32(ctx, 31, 0x1E7F0Cu);
    ctx->pc = 0x1E7F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F04u;
            // 0x1e7f08: 0xfe430068  sd          $v1, 0x68($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF3E8u;
    if (runtime->hasFunction(0x1DF3E8u)) {
        auto targetFn = runtime->lookupFunction(0x1DF3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F0Cu; }
        if (ctx->pc != 0x1E7F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF3E8_0x1df3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F0Cu; }
        if (ctx->pc != 0x1E7F0Cu) { return; }
    }
    ctx->pc = 0x1E7F0Cu;
    // 0x1e7f0c: 0xc077b96  jal         func_1DEE58
    ctx->pc = 0x1E7F0Cu;
    SET_GPR_U32(ctx, 31, 0x1E7F14u);
    ctx->pc = 0x1E7F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F0Cu;
            // 0x1e7f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE58u;
    if (runtime->hasFunction(0x1DEE58u)) {
        auto targetFn = runtime->lookupFunction(0x1DEE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F14u; }
        if (ctx->pc != 0x1E7F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEE58_0x1dee58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F14u; }
        if (ctx->pc != 0x1E7F14u) { return; }
    }
    ctx->pc = 0x1E7F14u;
    // 0x1e7f14: 0xc077eea  jal         func_1DFBA8
    ctx->pc = 0x1E7F14u;
    SET_GPR_U32(ctx, 31, 0x1E7F1Cu);
    ctx->pc = 0x1E7F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F14u;
            // 0x1e7f18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFBA8u;
    if (runtime->hasFunction(0x1DFBA8u)) {
        auto targetFn = runtime->lookupFunction(0x1DFBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F1Cu; }
        if (ctx->pc != 0x1E7F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFBA8_0x1dfba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F1Cu; }
        if (ctx->pc != 0x1E7F1Cu) { return; }
    }
    ctx->pc = 0x1E7F1Cu;
    // 0x1e7f1c: 0xae320340  sw          $s2, 0x340($s1)
    ctx->pc = 0x1e7f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 18));
    // 0x1e7f20: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1e7f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f24: 0x0  nop
    ctx->pc = 0x1e7f24u;
    // NOP
label_1e7f28:
    // 0x1e7f28: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1e7f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e7f2c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1e7f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e7f30: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1e7f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7f34: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e7f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7f38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F38u;
            // 0x1e7f3c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7E20u: goto label_1e7e20;
            case 0x1E7E50u: goto label_1e7e50;
            case 0x1E7E6Cu: goto label_1e7e6c;
            case 0x1E7F28u: goto label_1e7f28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7F40u;
}
