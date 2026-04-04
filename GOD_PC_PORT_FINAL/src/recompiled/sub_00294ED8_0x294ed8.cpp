#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294ED8
// Address: 0x294ed8 - 0x295050
void sub_00294ED8_0x294ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294ED8_0x294ed8");
#endif

    ctx->pc = 0x294ed8u;

    // 0x294ed8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x294ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x294edc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x294edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x294ee0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x294ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x294ee4: 0x3c150032  lui         $s5, 0x32
    ctx->pc = 0x294ee4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)50 << 16));
    // 0x294ee8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x294ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x294eec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x294eecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ef0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x294ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x294ef4: 0x26b37490  addiu       $s3, $s5, 0x7490
    ctx->pc = 0x294ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 29840));
    // 0x294ef8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x294ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294efc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x294efcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294f04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x294f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f08: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x294f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x294f0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f10: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x294f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x294f14: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x294f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x294f18: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x294F18u;
    {
        const bool branch_taken_0x294f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294F18u;
            // 0x294f1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f18) {
            ctx->pc = 0x295024u;
            goto label_295024;
        }
    }
    ctx->pc = 0x294F20u;
    // 0x294f20: 0xc0a648c  jal         func_299230
    ctx->pc = 0x294F20u;
    SET_GPR_U32(ctx, 31, 0x294F28u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F28u; }
        if (ctx->pc != 0x294F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F28u; }
        if (ctx->pc != 0x294F28u) { return; }
    }
    ctx->pc = 0x294F28u;
    // 0x294f28: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x294f28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f2c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x294f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x294f30: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x294f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x294f34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294f38: 0x244274c0  addiu       $v0, $v0, 0x74C0
    ctx->pc = 0x294f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29888));
    // 0x294f3c: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x294f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x294f40: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x294f40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x294f44: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x294f44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294f48: 0xae660010  sw          $a2, 0x10($s3)
    ctx->pc = 0x294f48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
    // 0x294f4c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x294f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x294f50: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x294f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x294f54: 0x24c4000c  addiu       $a0, $a2, 0xC
    ctx->pc = 0x294f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_294f58:
    // 0x294f58: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x294f58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x294f5c: 0x52480012  beql        $s2, $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x294F5Cu;
    {
        const bool branch_taken_0x294f5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x294f5c) {
            ctx->pc = 0x294F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x294F5Cu;
            // 0x294f60: 0x26b07490  addiu       $s0, $s5, 0x7490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 29840));
        ctx->in_delay_slot = false;
            ctx->pc = 0x294FA8u;
            goto label_294fa8;
        }
    }
    ctx->pc = 0x294F64u;
    // 0x294f64: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x294f64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x294f68: 0x14470007  bne         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x294F68u;
    {
        const bool branch_taken_0x294f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x294F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294F68u;
            // 0x294f6c: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f68) {
            ctx->pc = 0x294F88u;
            goto label_294f88;
        }
    }
    ctx->pc = 0x294F70u;
    // 0x294f70: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x294f70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x294f74: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x294f74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x294f78: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x294f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x294f7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x294F7Cu;
    {
        const bool branch_taken_0x294f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294F7Cu;
            // 0x294f80: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f7c) {
            ctx->pc = 0x294FA4u;
            goto label_294fa4;
        }
    }
    ctx->pc = 0x294F84u;
    // 0x294f84: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x294f84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_294f88:
    // 0x294f88: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x294f88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x294f8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x294f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x294f90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x294f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x294f94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x294f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x294f98: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x294f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x294f9c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x294F9Cu;
    {
        const bool branch_taken_0x294f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294F9Cu;
            // 0x294fa0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f9c) {
            ctx->pc = 0x294F58u;
            runtime->cooperativeGuestYield();
            goto label_294f58;
        }
    }
    ctx->pc = 0x294FA4u;
label_294fa4:
    // 0x294fa4: 0x26b07490  addiu       $s0, $s5, 0x7490
    ctx->pc = 0x294fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 29840));
label_294fa8:
    // 0x294fa8: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x294fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x294fac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x294facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x294fb0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x294fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x294fb4: 0x80c50007  lb          $a1, 0x7($a2)
    ctx->pc = 0x294fb4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x294fb8: 0x8ea47490  lw          $a0, 0x7490($s5)
    ctx->pc = 0x294fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29840)));
    // 0x294fbc: 0xc0a69fe  jal         func_29A7F8
    ctx->pc = 0x294FBCu;
    SET_GPR_U32(ctx, 31, 0x294FC4u);
    ctx->pc = 0x294FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294FBCu;
            // 0x294fc0: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A7F8u;
    if (runtime->hasFunction(0x29A7F8u)) {
        auto targetFn = runtime->lookupFunction(0x29A7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FC4u; }
        if (ctx->pc != 0x294FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a7f8_0x29a828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FC4u; }
        if (ctx->pc != 0x294FC4u) { return; }
    }
    ctx->pc = 0x294FC4u;
    // 0x294fc4: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x294FC4u;
    {
        const bool branch_taken_0x294fc4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x294fc4) {
            ctx->pc = 0x294FE8u;
            goto label_294fe8;
        }
    }
    ctx->pc = 0x294FCCu;
    // 0x294fcc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x294fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x294fd0: 0x12c00014  beqz        $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x294FD0u;
    {
        const bool branch_taken_0x294fd0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x294FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294FD0u;
            // 0x294fd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fd0) {
            ctx->pc = 0x295024u;
            goto label_295024;
        }
    }
    ctx->pc = 0x294FD8u;
    // 0x294fd8: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x294FD8u;
    SET_GPR_U32(ctx, 31, 0x294FE0u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FE0u; }
        if (ctx->pc != 0x294FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FE0u; }
        if (ctx->pc != 0x294FE0u) { return; }
    }
    ctx->pc = 0x294FE0u;
    // 0x294fe0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x294FE0u;
    {
        const bool branch_taken_0x294fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294FE0u;
            // 0x294fe4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fe0) {
            ctx->pc = 0x295024u;
            goto label_295024;
        }
    }
    ctx->pc = 0x294FE8u;
label_294fe8:
    // 0x294fe8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x294fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x294fec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x294FECu;
    {
        const bool branch_taken_0x294fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294FECu;
            // 0x294ff0: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fec) {
            ctx->pc = 0x295010u;
            goto label_295010;
        }
    }
    ctx->pc = 0x294FF4u;
    // 0x294ff4: 0x0  nop
    ctx->pc = 0x294ff4u;
    // NOP
label_294ff8:
    // 0x294ff8: 0x8e247490  lw          $a0, 0x7490($s1)
    ctx->pc = 0x294ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29840)));
    // 0x294ffc: 0xc0a6a0a  jal         func_29A828
    ctx->pc = 0x294FFCu;
    SET_GPR_U32(ctx, 31, 0x295004u);
    ctx->pc = 0x29A828u;
    if (runtime->hasFunction(0x29A828u)) {
        auto targetFn = runtime->lookupFunction(0x29A828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295004u; }
        if (ctx->pc != 0x295004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A828_0x29a828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295004u; }
        if (ctx->pc != 0x295004u) { return; }
    }
    ctx->pc = 0x295004u;
    // 0x295004: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x295004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x295008: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x295008u;
    {
        const bool branch_taken_0x295008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295008) {
            ctx->pc = 0x294FF8u;
            runtime->cooperativeGuestYield();
            goto label_294ff8;
        }
    }
    ctx->pc = 0x295010u;
label_295010:
    // 0x295010: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x295010u;
    {
        const bool branch_taken_0x295010 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x295014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295010u;
            // 0x295014: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295010) {
            ctx->pc = 0x295024u;
            goto label_295024;
        }
    }
    ctx->pc = 0x295018u;
    // 0x295018: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x295018u;
    SET_GPR_U32(ctx, 31, 0x295020u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295020u; }
        if (ctx->pc != 0x295020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295020u; }
        if (ctx->pc != 0x295020u) { return; }
    }
    ctx->pc = 0x295020u;
    // 0x295020: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x295020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_295024:
    // 0x295024: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x295024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295028: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x295028u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29502c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x29502cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x295030: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x295030u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295034: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x295034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295038: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x295038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29503c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29503cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295044: 0x3e00008  jr          $ra
    ctx->pc = 0x295044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295044u;
            // 0x295048: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294F58u: goto label_294f58;
            case 0x294F88u: goto label_294f88;
            case 0x294FA4u: goto label_294fa4;
            case 0x294FA8u: goto label_294fa8;
            case 0x294FE8u: goto label_294fe8;
            case 0x294FF8u: goto label_294ff8;
            case 0x295010u: goto label_295010;
            case 0x295024u: goto label_295024;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29504Cu;
    // 0x29504c: 0x0  nop
    ctx->pc = 0x29504cu;
    // NOP
}
