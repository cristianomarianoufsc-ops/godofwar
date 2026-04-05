#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5D70
// Address: 0x1b5d70 - 0x1b77d8
void sub_001B5D70_0x1b5d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5D70_0x1b5d70");
#endif

    ctx->pc = 0x1b5d70u;

    // 0x1b5d70: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1b5d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1b5d74: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1b5d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1b5d78: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1b5d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1b5d7c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1b5d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1b5d80: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1b5d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1b5d84: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1b5d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1b5d88: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1b5d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1b5d8c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1b5d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1b5d90: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b5d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b5d94: 0xc08ee16  jal         func_23B858
    ctx->pc = 0x1B5D94u;
    SET_GPR_U32(ctx, 31, 0x1B5D9Cu);
    ctx->pc = 0x1B5D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D94u;
            // 0x1b5d98: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B858u;
    if (runtime->hasFunction(0x23B858u)) {
        auto targetFn = runtime->lookupFunction(0x23B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D9Cu; }
        if (ctx->pc != 0x1B5D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b858_0x23b870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D9Cu; }
        if (ctx->pc != 0x1B5D9Cu) { return; }
    }
    ctx->pc = 0x1B5D9Cu;
    // 0x1b5d9c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1b5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1b5da0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b5da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5da4: 0x2442a4b0  addiu       $v0, $v0, -0x5B50
    ctx->pc = 0x1b5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943920));
    // 0x1b5da8: 0xaec20010  sw          $v0, 0x10($s6)
    ctx->pc = 0x1b5da8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 2));
    // 0x1b5dac: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1b5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1b5db0:
    // 0x1b5db0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1b5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1b5db4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b5db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b5db8: 0xac401558  sw          $zero, 0x1558($v0)
    ctx->pc = 0x1b5db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5464), GPR_U32(ctx, 0));
    // 0x1b5dbc: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x1b5dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b5dc0: 0x0  nop
    ctx->pc = 0x1b5dc0u;
    // NOP
    // 0x1b5dc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B5DC4u;
    {
        const bool branch_taken_0x1b5dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5DC4u;
            // 0x1b5dc8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5dc4) {
            ctx->pc = 0x1B5DB0u;
            runtime->cooperativeGuestYield();
            goto label_1b5db0;
        }
    }
    ctx->pc = 0x1B5DCCu;
    // 0x1b5dcc: 0xc06e292  jal         func_1B8A48
    ctx->pc = 0x1B5DCCu;
    SET_GPR_U32(ctx, 31, 0x1B5DD4u);
    ctx->pc = 0x1B8A48u;
    if (runtime->hasFunction(0x1B8A48u)) {
        auto targetFn = runtime->lookupFunction(0x1B8A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5DD4u; }
        if (ctx->pc != 0x1B5DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8A48_0x1b8a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5DD4u; }
        if (ctx->pc != 0x1B5DD4u) { return; }
    }
    ctx->pc = 0x1B5DD4u;
    // 0x1b5dd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b5dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5dd8:
    // 0x1b5dd8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1b5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b5ddc: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1b5ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b5de0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b5de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b5de4: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x1b5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1b5de8: 0x288300bf  slti        $v1, $a0, 0xBF
    ctx->pc = 0x1b5de8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)191) ? 1 : 0);
    // 0x1b5dec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B5DECu;
    {
        const bool branch_taken_0x1b5dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5DECu;
            // 0x1b5df0: 0xac4002bc  sw          $zero, 0x2BC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5dec) {
            ctx->pc = 0x1B5DD8u;
            runtime->cooperativeGuestYield();
            goto label_1b5dd8;
        }
    }
    ctx->pc = 0x1B5DF4u;
    // 0x1b5df4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b5df8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b5df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b5dfc: 0x68504877  ldl         $s0, 0x4877($v0)
    ctx->pc = 0x1b5dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 18551); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x1b5e00: 0x6c504870  ldr         $s0, 0x4870($v0)
    ctx->pc = 0x1b5e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 18544); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x1b5e04: 0x24c64858  addiu       $a2, $a2, 0x4858
    ctx->pc = 0x1b5e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18520));
    // 0x1b5e08: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e0c: 0x26c80014  addiu       $t0, $s6, 0x14
    ctx->pc = 0x1b5e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x1b5e10: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b5e10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e14: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5e18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b5e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5e1c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B5E1Cu;
    SET_GPR_U32(ctx, 31, 0x1B5E24u);
    ctx->pc = 0x1B5E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E1Cu;
            // 0x1b5e20: 0x24130064  addiu       $s3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E24u; }
        if (ctx->pc != 0x1B5E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E24u; }
        if (ctx->pc != 0x1B5E24u) { return; }
    }
    ctx->pc = 0x1B5E24u;
    // 0x1b5e24: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1b5e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e28: 0xaec00014  sw          $zero, 0x14($s6)
    ctx->pc = 0x1b5e28u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 0));
    // 0x1b5e2c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b5e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b5e30: 0x24c64878  addiu       $a2, $a2, 0x4878
    ctx->pc = 0x1b5e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18552));
    // 0x1b5e34: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b5e34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e38: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e3c: 0x26c80018  addiu       $t0, $s6, 0x18
    ctx->pc = 0x1b5e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    // 0x1b5e40: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5e44: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B5E44u;
    SET_GPR_U32(ctx, 31, 0x1B5E4Cu);
    ctx->pc = 0x1B5E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E44u;
            // 0x1b5e48: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E4Cu; }
        if (ctx->pc != 0x1B5E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E4Cu; }
        if (ctx->pc != 0x1B5E4Cu) { return; }
    }
    ctx->pc = 0x1B5E4Cu;
    // 0x1b5e4c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1b5e4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5e50: 0xaec00018  sw          $zero, 0x18($s6)
    ctx->pc = 0x1b5e50u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 0));
    // 0x1b5e54: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b5e54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b5e58: 0x24c64890  addiu       $a2, $a2, 0x4890
    ctx->pc = 0x1b5e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18576));
    // 0x1b5e5c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b5e5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e60: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e64: 0x26c8001c  addiu       $t0, $s6, 0x1C
    ctx->pc = 0x1b5e64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 28));
    // 0x1b5e68: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5e6c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B5E6Cu;
    SET_GPR_U32(ctx, 31, 0x1B5E74u);
    ctx->pc = 0x1B5E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E6Cu;
            // 0x1b5e70: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E74u; }
        if (ctx->pc != 0x1B5E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E74u; }
        if (ctx->pc != 0x1B5E74u) { return; }
    }
    ctx->pc = 0x1B5E74u;
    // 0x1b5e74: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1b5e74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b5e78: 0xaec0001c  sw          $zero, 0x1C($s6)
    ctx->pc = 0x1b5e78u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 0));
    // 0x1b5e7c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b5e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b5e80: 0x24c648a8  addiu       $a2, $a2, 0x48A8
    ctx->pc = 0x1b5e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18600));
    // 0x1b5e84: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b5e84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e8c: 0x26c80020  addiu       $t0, $s6, 0x20
    ctx->pc = 0x1b5e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x1b5e90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5e94: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B5E94u;
    SET_GPR_U32(ctx, 31, 0x1B5E9Cu);
    ctx->pc = 0x1B5E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E94u;
            // 0x1b5e98: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E9Cu; }
        if (ctx->pc != 0x1B5E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E9Cu; }
        if (ctx->pc != 0x1B5E9Cu) { return; }
    }
    ctx->pc = 0x1B5E9Cu;
    // 0x1b5e9c: 0x2415000a  addiu       $s5, $zero, 0xA
    ctx->pc = 0x1b5e9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b5ea0: 0xaec00020  sw          $zero, 0x20($s6)
    ctx->pc = 0x1b5ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 0));
    // 0x1b5ea4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b5ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b5ea8: 0x24c648c0  addiu       $a2, $a2, 0x48C0
    ctx->pc = 0x1b5ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18624));
    // 0x1b5eac: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b5eacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5eb0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5eb4: 0x26c80024  addiu       $t0, $s6, 0x24
    ctx->pc = 0x1b5eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
    // 0x1b5eb8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5ebc: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B5EBCu;
    SET_GPR_U32(ctx, 31, 0x1B5EC4u);
    ctx->pc = 0x1B5EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5EBCu;
            // 0x1b5ec0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5EC4u; }
        if (ctx->pc != 0x1B5EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5EC4u; }
        if (ctx->pc != 0x1B5EC4u) { return; }
    }
    ctx->pc = 0x1B5EC4u;
    // 0x1b5ec4: 0xaec00024  sw          $zero, 0x24($s6)
    ctx->pc = 0x1b5ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 0));
    // 0x1b5ec8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b5ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b5ecc: 0x24c648d8  addiu       $a2, $a2, 0x48D8
    ctx->pc = 0x1b5eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18648));
    // 0x1b5ed0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b5ed0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ed4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ed8: 0x26c80028  addiu       $t0, $s6, 0x28
    ctx->pc = 0x1b5ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 40));
    // 0x1b5edc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5ee0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B5EE0u;
    SET_GPR_U32(ctx, 31, 0x1B5EE8u);
    ctx->pc = 0x1B5EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5EE0u;
            // 0x1b5ee4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5EE8u; }
        if (ctx->pc != 0x1B5EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5EE8u; }
        if (ctx->pc != 0x1B5EE8u) { return; }
    }
    ctx->pc = 0x1B5EE8u;
    // 0x1b5ee8: 0xaec00028  sw          $zero, 0x28($s6)
    ctx->pc = 0x1b5ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 40), GPR_U32(ctx, 0));
    // 0x1b5eec: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b5eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b5ef0: 0x24c648f0  addiu       $a2, $a2, 0x48F0
    ctx->pc = 0x1b5ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18672));
    // 0x1b5ef4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b5ef4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ef8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5efc: 0x26c8002c  addiu       $t0, $s6, 0x2C
    ctx->pc = 0x1b5efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 44));
    // 0x1b5f00: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5f04: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B5F04u;
    SET_GPR_U32(ctx, 31, 0x1B5F0Cu);
    ctx->pc = 0x1B5F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F04u;
            // 0x1b5f08: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F0Cu; }
        if (ctx->pc != 0x1B5F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F0Cu; }
        if (ctx->pc != 0x1B5F0Cu) { return; }
    }
    ctx->pc = 0x1B5F0Cu;
    // 0x1b5f0c: 0xaec0002c  sw          $zero, 0x2C($s6)
    ctx->pc = 0x1b5f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 44), GPR_U32(ctx, 0));
    // 0x1b5f10: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b5f10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b5f14: 0x24c64908  addiu       $a2, $a2, 0x4908
    ctx->pc = 0x1b5f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18696));
    // 0x1b5f18: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b5f18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f20: 0x26c80030  addiu       $t0, $s6, 0x30
    ctx->pc = 0x1b5f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x1b5f24: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5f28: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B5F28u;
    SET_GPR_U32(ctx, 31, 0x1B5F30u);
    ctx->pc = 0x1B5F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F28u;
            // 0x1b5f2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F30u; }
        if (ctx->pc != 0x1B5F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F30u; }
        if (ctx->pc != 0x1B5F30u) { return; }
    }
    ctx->pc = 0x1B5F30u;
    // 0x1b5f30: 0xaec00030  sw          $zero, 0x30($s6)
    ctx->pc = 0x1b5f30u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 48), GPR_U32(ctx, 0));
    // 0x1b5f34: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b5f34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b5f38: 0x24c64920  addiu       $a2, $a2, 0x4920
    ctx->pc = 0x1b5f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18720));
    // 0x1b5f3c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b5f3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f40: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f44: 0x26c80034  addiu       $t0, $s6, 0x34
    ctx->pc = 0x1b5f44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 52));
    // 0x1b5f48: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5f4c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B5F4Cu;
    SET_GPR_U32(ctx, 31, 0x1B5F54u);
    ctx->pc = 0x1B5F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F4Cu;
            // 0x1b5f50: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F54u; }
        if (ctx->pc != 0x1B5F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F54u; }
        if (ctx->pc != 0x1B5F54u) { return; }
    }
    ctx->pc = 0x1B5F54u;
    // 0x1b5f54: 0xaed30034  sw          $s3, 0x34($s6)
    ctx->pc = 0x1b5f54u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 52), GPR_U32(ctx, 19));
    // 0x1b5f58: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b5f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b5f5c: 0x24c64930  addiu       $a2, $a2, 0x4930
    ctx->pc = 0x1b5f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18736));
    // 0x1b5f60: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b5f60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f64: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f68: 0x26c80038  addiu       $t0, $s6, 0x38
    ctx->pc = 0x1b5f68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 56));
    // 0x1b5f6c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5f70: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B5F70u;
    SET_GPR_U32(ctx, 31, 0x1B5F78u);
    ctx->pc = 0x1B5F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F70u;
            // 0x1b5f74: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F78u; }
        if (ctx->pc != 0x1B5F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F78u; }
        if (ctx->pc != 0x1B5F78u) { return; }
    }
    ctx->pc = 0x1B5F78u;
    // 0x1b5f78: 0xaec00038  sw          $zero, 0x38($s6)
    ctx->pc = 0x1b5f78u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 56), GPR_U32(ctx, 0));
    // 0x1b5f7c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b5f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b5f80: 0x24c64940  addiu       $a2, $a2, 0x4940
    ctx->pc = 0x1b5f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18752));
    // 0x1b5f84: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b5f84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f8c: 0x26c8003c  addiu       $t0, $s6, 0x3C
    ctx->pc = 0x1b5f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 60));
    // 0x1b5f90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5f94: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B5F94u;
    SET_GPR_U32(ctx, 31, 0x1B5F9Cu);
    ctx->pc = 0x1B5F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F94u;
            // 0x1b5f98: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F9Cu; }
        if (ctx->pc != 0x1B5F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F9Cu; }
        if (ctx->pc != 0x1B5F9Cu) { return; }
    }
    ctx->pc = 0x1B5F9Cu;
    // 0x1b5f9c: 0xaec0003c  sw          $zero, 0x3C($s6)
    ctx->pc = 0x1b5f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
    // 0x1b5fa0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b5fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b5fa4: 0x24c64950  addiu       $a2, $a2, 0x4950
    ctx->pc = 0x1b5fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18768));
    // 0x1b5fa8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b5fa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fb0: 0x26c80040  addiu       $t0, $s6, 0x40
    ctx->pc = 0x1b5fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    // 0x1b5fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fb8: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B5FB8u;
    SET_GPR_U32(ctx, 31, 0x1B5FC0u);
    ctx->pc = 0x1B5FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5FB8u;
            // 0x1b5fbc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5FC0u; }
        if (ctx->pc != 0x1B5FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5FC0u; }
        if (ctx->pc != 0x1B5FC0u) { return; }
    }
    ctx->pc = 0x1B5FC0u;
    // 0x1b5fc0: 0xaec00040  sw          $zero, 0x40($s6)
    ctx->pc = 0x1b5fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 64), GPR_U32(ctx, 0));
    // 0x1b5fc4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b5fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b5fc8: 0x24c64960  addiu       $a2, $a2, 0x4960
    ctx->pc = 0x1b5fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18784));
    // 0x1b5fcc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b5fccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fd4: 0x26c80044  addiu       $t0, $s6, 0x44
    ctx->pc = 0x1b5fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 68));
    // 0x1b5fd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fdc: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B5FDCu;
    SET_GPR_U32(ctx, 31, 0x1B5FE4u);
    ctx->pc = 0x1B5FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5FDCu;
            // 0x1b5fe0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5FE4u; }
        if (ctx->pc != 0x1B5FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5FE4u; }
        if (ctx->pc != 0x1B5FE4u) { return; }
    }
    ctx->pc = 0x1B5FE4u;
    // 0x1b5fe4: 0xaec00044  sw          $zero, 0x44($s6)
    ctx->pc = 0x1b5fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 68), GPR_U32(ctx, 0));
    // 0x1b5fe8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b5fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b5fec: 0x24c64978  addiu       $a2, $a2, 0x4978
    ctx->pc = 0x1b5fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18808));
    // 0x1b5ff0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b5ff0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ff4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b5ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ff8: 0x26c80048  addiu       $t0, $s6, 0x48
    ctx->pc = 0x1b5ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 72));
    // 0x1b5ffc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6000: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6000u;
    SET_GPR_U32(ctx, 31, 0x1B6008u);
    ctx->pc = 0x1B6004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6000u;
            // 0x1b6004: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6008u; }
        if (ctx->pc != 0x1B6008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6008u; }
        if (ctx->pc != 0x1B6008u) { return; }
    }
    ctx->pc = 0x1B6008u;
    // 0x1b6008: 0xaec00048  sw          $zero, 0x48($s6)
    ctx->pc = 0x1b6008u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 72), GPR_U32(ctx, 0));
    // 0x1b600c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b600cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6010: 0x24c64990  addiu       $a2, $a2, 0x4990
    ctx->pc = 0x1b6010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18832));
    // 0x1b6014: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6014u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6018: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b601c: 0x26c8004c  addiu       $t0, $s6, 0x4C
    ctx->pc = 0x1b601cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 76));
    // 0x1b6020: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6024: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6024u;
    SET_GPR_U32(ctx, 31, 0x1B602Cu);
    ctx->pc = 0x1B6028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6024u;
            // 0x1b6028: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B602Cu; }
        if (ctx->pc != 0x1B602Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B602Cu; }
        if (ctx->pc != 0x1B602Cu) { return; }
    }
    ctx->pc = 0x1B602Cu;
    // 0x1b602c: 0xaec0004c  sw          $zero, 0x4C($s6)
    ctx->pc = 0x1b602cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 76), GPR_U32(ctx, 0));
    // 0x1b6030: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6034: 0x24c649a0  addiu       $a2, $a2, 0x49A0
    ctx->pc = 0x1b6034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18848));
    // 0x1b6038: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6038u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b603c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b603cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6040: 0x26c80050  addiu       $t0, $s6, 0x50
    ctx->pc = 0x1b6040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
    // 0x1b6044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6048: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6048u;
    SET_GPR_U32(ctx, 31, 0x1B6050u);
    ctx->pc = 0x1B604Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6048u;
            // 0x1b604c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6050u; }
        if (ctx->pc != 0x1B6050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6050u; }
        if (ctx->pc != 0x1B6050u) { return; }
    }
    ctx->pc = 0x1B6050u;
    // 0x1b6050: 0xaec00050  sw          $zero, 0x50($s6)
    ctx->pc = 0x1b6050u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 80), GPR_U32(ctx, 0));
    // 0x1b6054: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6058: 0x24c649b0  addiu       $a2, $a2, 0x49B0
    ctx->pc = 0x1b6058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18864));
    // 0x1b605c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b605cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6060: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6064: 0x26c80054  addiu       $t0, $s6, 0x54
    ctx->pc = 0x1b6064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 84));
    // 0x1b6068: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b606c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B606Cu;
    SET_GPR_U32(ctx, 31, 0x1B6074u);
    ctx->pc = 0x1B6070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B606Cu;
            // 0x1b6070: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6074u; }
        if (ctx->pc != 0x1B6074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6074u; }
        if (ctx->pc != 0x1B6074u) { return; }
    }
    ctx->pc = 0x1B6074u;
    // 0x1b6074: 0xaec00054  sw          $zero, 0x54($s6)
    ctx->pc = 0x1b6074u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 84), GPR_U32(ctx, 0));
    // 0x1b6078: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6078u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b607c: 0x24c649c8  addiu       $a2, $a2, 0x49C8
    ctx->pc = 0x1b607cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18888));
    // 0x1b6080: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6080u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6084: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6088: 0x26c80058  addiu       $t0, $s6, 0x58
    ctx->pc = 0x1b6088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 88));
    // 0x1b608c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b608cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6090: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6090u;
    SET_GPR_U32(ctx, 31, 0x1B6098u);
    ctx->pc = 0x1B6094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6090u;
            // 0x1b6094: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6098u; }
        if (ctx->pc != 0x1B6098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6098u; }
        if (ctx->pc != 0x1B6098u) { return; }
    }
    ctx->pc = 0x1B6098u;
    // 0x1b6098: 0xaec00058  sw          $zero, 0x58($s6)
    ctx->pc = 0x1b6098u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 88), GPR_U32(ctx, 0));
    // 0x1b609c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b609cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b60a0: 0x24c649e0  addiu       $a2, $a2, 0x49E0
    ctx->pc = 0x1b60a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18912));
    // 0x1b60a4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b60a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b60a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b60a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b60ac: 0x26c8005c  addiu       $t0, $s6, 0x5C
    ctx->pc = 0x1b60acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 92));
    // 0x1b60b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b60b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b60b4: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B60B4u;
    SET_GPR_U32(ctx, 31, 0x1B60BCu);
    ctx->pc = 0x1B60B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60B4u;
            // 0x1b60b8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B60BCu; }
        if (ctx->pc != 0x1B60BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B60BCu; }
        if (ctx->pc != 0x1B60BCu) { return; }
    }
    ctx->pc = 0x1B60BCu;
    // 0x1b60bc: 0xaec0005c  sw          $zero, 0x5C($s6)
    ctx->pc = 0x1b60bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 92), GPR_U32(ctx, 0));
    // 0x1b60c0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b60c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b60c4: 0x24c649f0  addiu       $a2, $a2, 0x49F0
    ctx->pc = 0x1b60c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18928));
    // 0x1b60c8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b60c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b60cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b60ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b60d0: 0x26c80060  addiu       $t0, $s6, 0x60
    ctx->pc = 0x1b60d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    // 0x1b60d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b60d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b60d8: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B60D8u;
    SET_GPR_U32(ctx, 31, 0x1B60E0u);
    ctx->pc = 0x1B60DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60D8u;
            // 0x1b60dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B60E0u; }
        if (ctx->pc != 0x1B60E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B60E0u; }
        if (ctx->pc != 0x1B60E0u) { return; }
    }
    ctx->pc = 0x1B60E0u;
    // 0x1b60e0: 0xaec00060  sw          $zero, 0x60($s6)
    ctx->pc = 0x1b60e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 96), GPR_U32(ctx, 0));
    // 0x1b60e4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b60e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b60e8: 0x24c64a08  addiu       $a2, $a2, 0x4A08
    ctx->pc = 0x1b60e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18952));
    // 0x1b60ec: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b60ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b60f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b60f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b60f4: 0x26c80064  addiu       $t0, $s6, 0x64
    ctx->pc = 0x1b60f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 100));
    // 0x1b60f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b60f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b60fc: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B60FCu;
    SET_GPR_U32(ctx, 31, 0x1B6104u);
    ctx->pc = 0x1B6100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60FCu;
            // 0x1b6100: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6104u; }
        if (ctx->pc != 0x1B6104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6104u; }
        if (ctx->pc != 0x1B6104u) { return; }
    }
    ctx->pc = 0x1B6104u;
    // 0x1b6104: 0xaec00064  sw          $zero, 0x64($s6)
    ctx->pc = 0x1b6104u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 100), GPR_U32(ctx, 0));
    // 0x1b6108: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b610c: 0x24c64a20  addiu       $a2, $a2, 0x4A20
    ctx->pc = 0x1b610cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18976));
    // 0x1b6110: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6114: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6118: 0x26c80068  addiu       $t0, $s6, 0x68
    ctx->pc = 0x1b6118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 104));
    // 0x1b611c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b611cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6120: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6120u;
    SET_GPR_U32(ctx, 31, 0x1B6128u);
    ctx->pc = 0x1B6124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6120u;
            // 0x1b6124: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6128u; }
        if (ctx->pc != 0x1B6128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6128u; }
        if (ctx->pc != 0x1B6128u) { return; }
    }
    ctx->pc = 0x1B6128u;
    // 0x1b6128: 0xaec00068  sw          $zero, 0x68($s6)
    ctx->pc = 0x1b6128u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 104), GPR_U32(ctx, 0));
    // 0x1b612c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b612cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6130: 0x24c64a38  addiu       $a2, $a2, 0x4A38
    ctx->pc = 0x1b6130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19000));
    // 0x1b6134: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6134u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6138: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b613c: 0x26c8006c  addiu       $t0, $s6, 0x6C
    ctx->pc = 0x1b613cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 108));
    // 0x1b6140: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6144: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6144u;
    SET_GPR_U32(ctx, 31, 0x1B614Cu);
    ctx->pc = 0x1B6148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6144u;
            // 0x1b6148: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B614Cu; }
        if (ctx->pc != 0x1B614Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B614Cu; }
        if (ctx->pc != 0x1B614Cu) { return; }
    }
    ctx->pc = 0x1B614Cu;
    // 0x1b614c: 0xaec0006c  sw          $zero, 0x6C($s6)
    ctx->pc = 0x1b614cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 0));
    // 0x1b6150: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6150u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6154: 0x24c64a48  addiu       $a2, $a2, 0x4A48
    ctx->pc = 0x1b6154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19016));
    // 0x1b6158: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6158u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b615c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b615cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6160: 0x26c80070  addiu       $t0, $s6, 0x70
    ctx->pc = 0x1b6160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
    // 0x1b6164: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6168: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6168u;
    SET_GPR_U32(ctx, 31, 0x1B6170u);
    ctx->pc = 0x1B616Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6168u;
            // 0x1b616c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6170u; }
        if (ctx->pc != 0x1B6170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6170u; }
        if (ctx->pc != 0x1B6170u) { return; }
    }
    ctx->pc = 0x1B6170u;
    // 0x1b6170: 0xaec00070  sw          $zero, 0x70($s6)
    ctx->pc = 0x1b6170u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 112), GPR_U32(ctx, 0));
    // 0x1b6174: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6178: 0x24c64a60  addiu       $a2, $a2, 0x4A60
    ctx->pc = 0x1b6178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19040));
    // 0x1b617c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b617cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6180: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6184: 0x26c80074  addiu       $t0, $s6, 0x74
    ctx->pc = 0x1b6184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 116));
    // 0x1b6188: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b618c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B618Cu;
    SET_GPR_U32(ctx, 31, 0x1B6194u);
    ctx->pc = 0x1B6190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B618Cu;
            // 0x1b6190: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6194u; }
        if (ctx->pc != 0x1B6194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6194u; }
        if (ctx->pc != 0x1B6194u) { return; }
    }
    ctx->pc = 0x1B6194u;
    // 0x1b6194: 0xaec00074  sw          $zero, 0x74($s6)
    ctx->pc = 0x1b6194u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 116), GPR_U32(ctx, 0));
    // 0x1b6198: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b619c: 0x24c64a70  addiu       $a2, $a2, 0x4A70
    ctx->pc = 0x1b619cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19056));
    // 0x1b61a0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b61a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b61a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61a8: 0x26c80078  addiu       $t0, $s6, 0x78
    ctx->pc = 0x1b61a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 120));
    // 0x1b61ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b61acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b61b0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B61B0u;
    SET_GPR_U32(ctx, 31, 0x1B61B8u);
    ctx->pc = 0x1B61B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B61B0u;
            // 0x1b61b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B61B8u; }
        if (ctx->pc != 0x1B61B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B61B8u; }
        if (ctx->pc != 0x1B61B8u) { return; }
    }
    ctx->pc = 0x1B61B8u;
    // 0x1b61b8: 0xaec00078  sw          $zero, 0x78($s6)
    ctx->pc = 0x1b61b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 120), GPR_U32(ctx, 0));
    // 0x1b61bc: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b61bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b61c0: 0x24c64a88  addiu       $a2, $a2, 0x4A88
    ctx->pc = 0x1b61c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19080));
    // 0x1b61c4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b61c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b61c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61cc: 0x26c8007c  addiu       $t0, $s6, 0x7C
    ctx->pc = 0x1b61ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 124));
    // 0x1b61d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b61d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b61d4: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B61D4u;
    SET_GPR_U32(ctx, 31, 0x1B61DCu);
    ctx->pc = 0x1B61D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B61D4u;
            // 0x1b61d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B61DCu; }
        if (ctx->pc != 0x1B61DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B61DCu; }
        if (ctx->pc != 0x1B61DCu) { return; }
    }
    ctx->pc = 0x1B61DCu;
    // 0x1b61dc: 0xaec0007c  sw          $zero, 0x7C($s6)
    ctx->pc = 0x1b61dcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 124), GPR_U32(ctx, 0));
    // 0x1b61e0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b61e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b61e4: 0x24c64aa0  addiu       $a2, $a2, 0x4AA0
    ctx->pc = 0x1b61e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19104));
    // 0x1b61e8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b61e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b61ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61f0: 0x26c80080  addiu       $t0, $s6, 0x80
    ctx->pc = 0x1b61f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
    // 0x1b61f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b61f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b61f8: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B61F8u;
    SET_GPR_U32(ctx, 31, 0x1B6200u);
    ctx->pc = 0x1B61FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B61F8u;
            // 0x1b61fc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6200u; }
        if (ctx->pc != 0x1B6200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6200u; }
        if (ctx->pc != 0x1B6200u) { return; }
    }
    ctx->pc = 0x1B6200u;
    // 0x1b6200: 0xaec00080  sw          $zero, 0x80($s6)
    ctx->pc = 0x1b6200u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 128), GPR_U32(ctx, 0));
    // 0x1b6204: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6204u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6208: 0x24c64ab8  addiu       $a2, $a2, 0x4AB8
    ctx->pc = 0x1b6208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19128));
    // 0x1b620c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b620cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6210: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6214: 0x26c80084  addiu       $t0, $s6, 0x84
    ctx->pc = 0x1b6214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
    // 0x1b6218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b621c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B621Cu;
    SET_GPR_U32(ctx, 31, 0x1B6224u);
    ctx->pc = 0x1B6220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B621Cu;
            // 0x1b6220: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6224u; }
        if (ctx->pc != 0x1B6224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6224u; }
        if (ctx->pc != 0x1B6224u) { return; }
    }
    ctx->pc = 0x1B6224u;
    // 0x1b6224: 0xaec00084  sw          $zero, 0x84($s6)
    ctx->pc = 0x1b6224u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 132), GPR_U32(ctx, 0));
    // 0x1b6228: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6228u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b622c: 0x24c64ad0  addiu       $a2, $a2, 0x4AD0
    ctx->pc = 0x1b622cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19152));
    // 0x1b6230: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6230u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6234: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6238: 0x26c80088  addiu       $t0, $s6, 0x88
    ctx->pc = 0x1b6238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 136));
    // 0x1b623c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b623cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6240: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6240u;
    SET_GPR_U32(ctx, 31, 0x1B6248u);
    ctx->pc = 0x1B6244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6240u;
            // 0x1b6244: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6248u; }
        if (ctx->pc != 0x1B6248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6248u; }
        if (ctx->pc != 0x1B6248u) { return; }
    }
    ctx->pc = 0x1B6248u;
    // 0x1b6248: 0xaec00088  sw          $zero, 0x88($s6)
    ctx->pc = 0x1b6248u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 136), GPR_U32(ctx, 0));
    // 0x1b624c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b624cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6250: 0x24c64ae8  addiu       $a2, $a2, 0x4AE8
    ctx->pc = 0x1b6250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19176));
    // 0x1b6254: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6258: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b625c: 0x26c8008c  addiu       $t0, $s6, 0x8C
    ctx->pc = 0x1b625cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 140));
    // 0x1b6260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6264: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6264u;
    SET_GPR_U32(ctx, 31, 0x1B626Cu);
    ctx->pc = 0x1B6268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6264u;
            // 0x1b6268: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B626Cu; }
        if (ctx->pc != 0x1B626Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B626Cu; }
        if (ctx->pc != 0x1B626Cu) { return; }
    }
    ctx->pc = 0x1B626Cu;
    // 0x1b626c: 0xaec0008c  sw          $zero, 0x8C($s6)
    ctx->pc = 0x1b626cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 140), GPR_U32(ctx, 0));
    // 0x1b6270: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6270u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6274: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x1b6274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
    // 0x1b6278: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6278u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b627c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b627cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6280: 0x26c80090  addiu       $t0, $s6, 0x90
    ctx->pc = 0x1b6280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x1b6284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6288: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6288u;
    SET_GPR_U32(ctx, 31, 0x1B6290u);
    ctx->pc = 0x1B628Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6288u;
            // 0x1b628c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6290u; }
        if (ctx->pc != 0x1B6290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6290u; }
        if (ctx->pc != 0x1B6290u) { return; }
    }
    ctx->pc = 0x1B6290u;
    // 0x1b6290: 0xaec00090  sw          $zero, 0x90($s6)
    ctx->pc = 0x1b6290u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 144), GPR_U32(ctx, 0));
    // 0x1b6294: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6294u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6298: 0x24c64b18  addiu       $a2, $a2, 0x4B18
    ctx->pc = 0x1b6298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19224));
    // 0x1b629c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b629cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b62a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62a4: 0x26c80094  addiu       $t0, $s6, 0x94
    ctx->pc = 0x1b62a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 148));
    // 0x1b62a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b62a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62ac: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B62ACu;
    SET_GPR_U32(ctx, 31, 0x1B62B4u);
    ctx->pc = 0x1B62B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62ACu;
            // 0x1b62b0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B62B4u; }
        if (ctx->pc != 0x1B62B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B62B4u; }
        if (ctx->pc != 0x1B62B4u) { return; }
    }
    ctx->pc = 0x1B62B4u;
    // 0x1b62b4: 0xaec00094  sw          $zero, 0x94($s6)
    ctx->pc = 0x1b62b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 0));
    // 0x1b62b8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b62b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b62bc: 0x24c64b30  addiu       $a2, $a2, 0x4B30
    ctx->pc = 0x1b62bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19248));
    // 0x1b62c0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b62c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b62c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62c8: 0x26c80098  addiu       $t0, $s6, 0x98
    ctx->pc = 0x1b62c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 152));
    // 0x1b62cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b62ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62d0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B62D0u;
    SET_GPR_U32(ctx, 31, 0x1B62D8u);
    ctx->pc = 0x1B62D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62D0u;
            // 0x1b62d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B62D8u; }
        if (ctx->pc != 0x1B62D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B62D8u; }
        if (ctx->pc != 0x1B62D8u) { return; }
    }
    ctx->pc = 0x1B62D8u;
    // 0x1b62d8: 0xaec00098  sw          $zero, 0x98($s6)
    ctx->pc = 0x1b62d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 152), GPR_U32(ctx, 0));
    // 0x1b62dc: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b62dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b62e0: 0x24c64b48  addiu       $a2, $a2, 0x4B48
    ctx->pc = 0x1b62e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19272));
    // 0x1b62e4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b62e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b62e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62ec: 0x26c8009c  addiu       $t0, $s6, 0x9C
    ctx->pc = 0x1b62ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 156));
    // 0x1b62f0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b62f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b62f4: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B62F4u;
    SET_GPR_U32(ctx, 31, 0x1B62FCu);
    ctx->pc = 0x1B62F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62F4u;
            // 0x1b62f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B62FCu; }
        if (ctx->pc != 0x1B62FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B62FCu; }
        if (ctx->pc != 0x1B62FCu) { return; }
    }
    ctx->pc = 0x1B62FCu;
    // 0x1b62fc: 0xaec0009c  sw          $zero, 0x9C($s6)
    ctx->pc = 0x1b62fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 156), GPR_U32(ctx, 0));
    // 0x1b6300: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6300u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6304: 0x24c64b60  addiu       $a2, $a2, 0x4B60
    ctx->pc = 0x1b6304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19296));
    // 0x1b6308: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6308u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b630c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b630cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6310: 0x26c800a0  addiu       $t0, $s6, 0xA0
    ctx->pc = 0x1b6310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
    // 0x1b6314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6318: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6318u;
    SET_GPR_U32(ctx, 31, 0x1B6320u);
    ctx->pc = 0x1B631Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6318u;
            // 0x1b631c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6320u; }
        if (ctx->pc != 0x1B6320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6320u; }
        if (ctx->pc != 0x1B6320u) { return; }
    }
    ctx->pc = 0x1B6320u;
    // 0x1b6320: 0xaec000a0  sw          $zero, 0xA0($s6)
    ctx->pc = 0x1b6320u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 160), GPR_U32(ctx, 0));
    // 0x1b6324: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6324u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6328: 0x24c64b78  addiu       $a2, $a2, 0x4B78
    ctx->pc = 0x1b6328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19320));
    // 0x1b632c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b632cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6330: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6334: 0x26c800a4  addiu       $t0, $s6, 0xA4
    ctx->pc = 0x1b6334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 164));
    // 0x1b6338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b633c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B633Cu;
    SET_GPR_U32(ctx, 31, 0x1B6344u);
    ctx->pc = 0x1B6340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B633Cu;
            // 0x1b6340: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6344u; }
        if (ctx->pc != 0x1B6344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6344u; }
        if (ctx->pc != 0x1B6344u) { return; }
    }
    ctx->pc = 0x1B6344u;
    // 0x1b6344: 0xaec000a4  sw          $zero, 0xA4($s6)
    ctx->pc = 0x1b6344u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 164), GPR_U32(ctx, 0));
    // 0x1b6348: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b634c: 0x24c64b90  addiu       $a2, $a2, 0x4B90
    ctx->pc = 0x1b634cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19344));
    // 0x1b6350: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6350u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6354: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6358: 0x26c800a8  addiu       $t0, $s6, 0xA8
    ctx->pc = 0x1b6358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 168));
    // 0x1b635c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b635cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6360: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6360u;
    SET_GPR_U32(ctx, 31, 0x1B6368u);
    ctx->pc = 0x1B6364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6360u;
            // 0x1b6364: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6368u; }
        if (ctx->pc != 0x1B6368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6368u; }
        if (ctx->pc != 0x1B6368u) { return; }
    }
    ctx->pc = 0x1B6368u;
    // 0x1b6368: 0xaec000a8  sw          $zero, 0xA8($s6)
    ctx->pc = 0x1b6368u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 168), GPR_U32(ctx, 0));
    // 0x1b636c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b636cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6370: 0x24c64ba8  addiu       $a2, $a2, 0x4BA8
    ctx->pc = 0x1b6370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19368));
    // 0x1b6374: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6374u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6378: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b637c: 0x26c800ac  addiu       $t0, $s6, 0xAC
    ctx->pc = 0x1b637cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 172));
    // 0x1b6380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6384: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6384u;
    SET_GPR_U32(ctx, 31, 0x1B638Cu);
    ctx->pc = 0x1B6388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6384u;
            // 0x1b6388: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B638Cu; }
        if (ctx->pc != 0x1B638Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B638Cu; }
        if (ctx->pc != 0x1B638Cu) { return; }
    }
    ctx->pc = 0x1B638Cu;
    // 0x1b638c: 0xaec000ac  sw          $zero, 0xAC($s6)
    ctx->pc = 0x1b638cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 172), GPR_U32(ctx, 0));
    // 0x1b6390: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6394: 0x24c64bc0  addiu       $a2, $a2, 0x4BC0
    ctx->pc = 0x1b6394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19392));
    // 0x1b6398: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6398u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b639c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b639cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63a0: 0x26c800b0  addiu       $t0, $s6, 0xB0
    ctx->pc = 0x1b63a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 176));
    // 0x1b63a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b63a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63a8: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B63A8u;
    SET_GPR_U32(ctx, 31, 0x1B63B0u);
    ctx->pc = 0x1B63ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63A8u;
            // 0x1b63ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63B0u; }
        if (ctx->pc != 0x1B63B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63B0u; }
        if (ctx->pc != 0x1B63B0u) { return; }
    }
    ctx->pc = 0x1B63B0u;
    // 0x1b63b0: 0xaec000b0  sw          $zero, 0xB0($s6)
    ctx->pc = 0x1b63b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 176), GPR_U32(ctx, 0));
    // 0x1b63b4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b63b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b63b8: 0x24c64bd8  addiu       $a2, $a2, 0x4BD8
    ctx->pc = 0x1b63b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19416));
    // 0x1b63bc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b63bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b63c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63c4: 0x26c800b4  addiu       $t0, $s6, 0xB4
    ctx->pc = 0x1b63c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 180));
    // 0x1b63c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b63c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63cc: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B63CCu;
    SET_GPR_U32(ctx, 31, 0x1B63D4u);
    ctx->pc = 0x1B63D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63CCu;
            // 0x1b63d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63D4u; }
        if (ctx->pc != 0x1B63D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63D4u; }
        if (ctx->pc != 0x1B63D4u) { return; }
    }
    ctx->pc = 0x1B63D4u;
    // 0x1b63d4: 0xaec000b4  sw          $zero, 0xB4($s6)
    ctx->pc = 0x1b63d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 180), GPR_U32(ctx, 0));
    // 0x1b63d8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b63d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b63dc: 0x24c64bf0  addiu       $a2, $a2, 0x4BF0
    ctx->pc = 0x1b63dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19440));
    // 0x1b63e0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b63e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b63e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63e8: 0x26c800b8  addiu       $t0, $s6, 0xB8
    ctx->pc = 0x1b63e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 184));
    // 0x1b63ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b63ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63f0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B63F0u;
    SET_GPR_U32(ctx, 31, 0x1B63F8u);
    ctx->pc = 0x1B63F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63F0u;
            // 0x1b63f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63F8u; }
        if (ctx->pc != 0x1B63F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63F8u; }
        if (ctx->pc != 0x1B63F8u) { return; }
    }
    ctx->pc = 0x1B63F8u;
    // 0x1b63f8: 0xaec000b8  sw          $zero, 0xB8($s6)
    ctx->pc = 0x1b63f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 184), GPR_U32(ctx, 0));
    // 0x1b63fc: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b63fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6400: 0x24c64c08  addiu       $a2, $a2, 0x4C08
    ctx->pc = 0x1b6400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19464));
    // 0x1b6404: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6404u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6408: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b640c: 0x26c800bc  addiu       $t0, $s6, 0xBC
    ctx->pc = 0x1b640cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 188));
    // 0x1b6410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6414: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6414u;
    SET_GPR_U32(ctx, 31, 0x1B641Cu);
    ctx->pc = 0x1B6418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6414u;
            // 0x1b6418: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B641Cu; }
        if (ctx->pc != 0x1B641Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B641Cu; }
        if (ctx->pc != 0x1B641Cu) { return; }
    }
    ctx->pc = 0x1B641Cu;
    // 0x1b641c: 0xaec000bc  sw          $zero, 0xBC($s6)
    ctx->pc = 0x1b641cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 188), GPR_U32(ctx, 0));
    // 0x1b6420: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6420u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6424: 0x24c64c20  addiu       $a2, $a2, 0x4C20
    ctx->pc = 0x1b6424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19488));
    // 0x1b6428: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6428u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b642c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b642cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6430: 0x26c800c0  addiu       $t0, $s6, 0xC0
    ctx->pc = 0x1b6430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
    // 0x1b6434: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6438: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6438u;
    SET_GPR_U32(ctx, 31, 0x1B6440u);
    ctx->pc = 0x1B643Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6438u;
            // 0x1b643c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6440u; }
        if (ctx->pc != 0x1B6440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6440u; }
        if (ctx->pc != 0x1B6440u) { return; }
    }
    ctx->pc = 0x1B6440u;
    // 0x1b6440: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x1b6440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1b6444: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6448: 0xaec200c0  sw          $v0, 0xC0($s6)
    ctx->pc = 0x1b6448u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 192), GPR_U32(ctx, 2));
    // 0x1b644c: 0x24c64c38  addiu       $a2, $a2, 0x4C38
    ctx->pc = 0x1b644cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19512));
    // 0x1b6450: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6454: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6458: 0x26c800c4  addiu       $t0, $s6, 0xC4
    ctx->pc = 0x1b6458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 196));
    // 0x1b645c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b645cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6460: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6460u;
    SET_GPR_U32(ctx, 31, 0x1B6468u);
    ctx->pc = 0x1B6464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6460u;
            // 0x1b6464: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6468u; }
        if (ctx->pc != 0x1B6468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6468u; }
        if (ctx->pc != 0x1B6468u) { return; }
    }
    ctx->pc = 0x1B6468u;
    // 0x1b6468: 0xaed300c4  sw          $s3, 0xC4($s6)
    ctx->pc = 0x1b6468u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 196), GPR_U32(ctx, 19));
    // 0x1b646c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b646cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6470: 0x24c64c50  addiu       $a2, $a2, 0x4C50
    ctx->pc = 0x1b6470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19536));
    // 0x1b6474: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6478: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b647c: 0x26c800c8  addiu       $t0, $s6, 0xC8
    ctx->pc = 0x1b647cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 200));
    // 0x1b6480: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6484: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6484u;
    SET_GPR_U32(ctx, 31, 0x1B648Cu);
    ctx->pc = 0x1B6488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6484u;
            // 0x1b6488: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B648Cu; }
        if (ctx->pc != 0x1B648Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B648Cu; }
        if (ctx->pc != 0x1B648Cu) { return; }
    }
    ctx->pc = 0x1B648Cu;
    // 0x1b648c: 0xaed300c8  sw          $s3, 0xC8($s6)
    ctx->pc = 0x1b648cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 200), GPR_U32(ctx, 19));
    // 0x1b6490: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6490u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6494: 0x24c64c68  addiu       $a2, $a2, 0x4C68
    ctx->pc = 0x1b6494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19560));
    // 0x1b6498: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6498u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b649c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b649cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b64a0: 0x26c800cc  addiu       $t0, $s6, 0xCC
    ctx->pc = 0x1b64a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 204));
    // 0x1b64a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b64a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b64a8: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B64A8u;
    SET_GPR_U32(ctx, 31, 0x1B64B0u);
    ctx->pc = 0x1B64ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64A8u;
            // 0x1b64ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B64B0u; }
        if (ctx->pc != 0x1B64B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B64B0u; }
        if (ctx->pc != 0x1B64B0u) { return; }
    }
    ctx->pc = 0x1B64B0u;
    // 0x1b64b0: 0xaed300cc  sw          $s3, 0xCC($s6)
    ctx->pc = 0x1b64b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 204), GPR_U32(ctx, 19));
    // 0x1b64b4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b64b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b64b8: 0x24c64c80  addiu       $a2, $a2, 0x4C80
    ctx->pc = 0x1b64b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19584));
    // 0x1b64bc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b64bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b64c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b64c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b64c4: 0x26c800d0  addiu       $t0, $s6, 0xD0
    ctx->pc = 0x1b64c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 208));
    // 0x1b64c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b64c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b64cc: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B64CCu;
    SET_GPR_U32(ctx, 31, 0x1B64D4u);
    ctx->pc = 0x1B64D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64CCu;
            // 0x1b64d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B64D4u; }
        if (ctx->pc != 0x1B64D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B64D4u; }
        if (ctx->pc != 0x1B64D4u) { return; }
    }
    ctx->pc = 0x1B64D4u;
    // 0x1b64d4: 0xaed300d0  sw          $s3, 0xD0($s6)
    ctx->pc = 0x1b64d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 208), GPR_U32(ctx, 19));
    // 0x1b64d8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b64d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b64dc: 0x24c64c98  addiu       $a2, $a2, 0x4C98
    ctx->pc = 0x1b64dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19608));
    // 0x1b64e0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b64e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b64e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b64e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b64e8: 0x26c800d4  addiu       $t0, $s6, 0xD4
    ctx->pc = 0x1b64e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 212));
    // 0x1b64ec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b64ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b64f0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B64F0u;
    SET_GPR_U32(ctx, 31, 0x1B64F8u);
    ctx->pc = 0x1B64F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64F0u;
            // 0x1b64f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B64F8u; }
        if (ctx->pc != 0x1B64F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B64F8u; }
        if (ctx->pc != 0x1B64F8u) { return; }
    }
    ctx->pc = 0x1B64F8u;
    // 0x1b64f8: 0xaed300d4  sw          $s3, 0xD4($s6)
    ctx->pc = 0x1b64f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 212), GPR_U32(ctx, 19));
    // 0x1b64fc: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b64fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6500: 0x24c64cb8  addiu       $a2, $a2, 0x4CB8
    ctx->pc = 0x1b6500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19640));
    // 0x1b6504: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6504u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6508: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b650c: 0x26c800d8  addiu       $t0, $s6, 0xD8
    ctx->pc = 0x1b650cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 216));
    // 0x1b6510: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6514: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6514u;
    SET_GPR_U32(ctx, 31, 0x1B651Cu);
    ctx->pc = 0x1B6518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6514u;
            // 0x1b6518: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B651Cu; }
        if (ctx->pc != 0x1B651Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B651Cu; }
        if (ctx->pc != 0x1B651Cu) { return; }
    }
    ctx->pc = 0x1B651Cu;
    // 0x1b651c: 0xaed300d8  sw          $s3, 0xD8($s6)
    ctx->pc = 0x1b651cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 216), GPR_U32(ctx, 19));
    // 0x1b6520: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6524: 0x24c64cd0  addiu       $a2, $a2, 0x4CD0
    ctx->pc = 0x1b6524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19664));
    // 0x1b6528: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b652c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b652cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6530: 0x26c800dc  addiu       $t0, $s6, 0xDC
    ctx->pc = 0x1b6530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 220));
    // 0x1b6534: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6538: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6538u;
    SET_GPR_U32(ctx, 31, 0x1B6540u);
    ctx->pc = 0x1B653Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6538u;
            // 0x1b653c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6540u; }
        if (ctx->pc != 0x1B6540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6540u; }
        if (ctx->pc != 0x1B6540u) { return; }
    }
    ctx->pc = 0x1B6540u;
    // 0x1b6540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6544: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6544u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6548: 0xaec200dc  sw          $v0, 0xDC($s6)
    ctx->pc = 0x1b6548u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 220), GPR_U32(ctx, 2));
    // 0x1b654c: 0x24c64ce8  addiu       $a2, $a2, 0x4CE8
    ctx->pc = 0x1b654cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19688));
    // 0x1b6550: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6550u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6554: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6558: 0x26c800e0  addiu       $t0, $s6, 0xE0
    ctx->pc = 0x1b6558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 224));
    // 0x1b655c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b655cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6560: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6560u;
    SET_GPR_U32(ctx, 31, 0x1B6568u);
    ctx->pc = 0x1B6564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6560u;
            // 0x1b6564: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6568u; }
        if (ctx->pc != 0x1B6568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6568u; }
        if (ctx->pc != 0x1B6568u) { return; }
    }
    ctx->pc = 0x1B6568u;
    // 0x1b6568: 0xaec000e0  sw          $zero, 0xE0($s6)
    ctx->pc = 0x1b6568u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 224), GPR_U32(ctx, 0));
    // 0x1b656c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b656cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6570: 0x24c64d00  addiu       $a2, $a2, 0x4D00
    ctx->pc = 0x1b6570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19712));
    // 0x1b6574: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6574u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6578: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b657c: 0x26c800e4  addiu       $t0, $s6, 0xE4
    ctx->pc = 0x1b657cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 228));
    // 0x1b6580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6584: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6584u;
    SET_GPR_U32(ctx, 31, 0x1B658Cu);
    ctx->pc = 0x1B6588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6584u;
            // 0x1b6588: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B658Cu; }
        if (ctx->pc != 0x1B658Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B658Cu; }
        if (ctx->pc != 0x1B658Cu) { return; }
    }
    ctx->pc = 0x1B658Cu;
    // 0x1b658c: 0xaec000e4  sw          $zero, 0xE4($s6)
    ctx->pc = 0x1b658cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 228), GPR_U32(ctx, 0));
    // 0x1b6590: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6594: 0x24c64d18  addiu       $a2, $a2, 0x4D18
    ctx->pc = 0x1b6594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19736));
    // 0x1b6598: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6598u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b659c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b659cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65a0: 0x26c800e8  addiu       $t0, $s6, 0xE8
    ctx->pc = 0x1b65a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 232));
    // 0x1b65a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b65a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65a8: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B65A8u;
    SET_GPR_U32(ctx, 31, 0x1B65B0u);
    ctx->pc = 0x1B65ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65A8u;
            // 0x1b65ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65B0u; }
        if (ctx->pc != 0x1B65B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65B0u; }
        if (ctx->pc != 0x1B65B0u) { return; }
    }
    ctx->pc = 0x1B65B0u;
    // 0x1b65b0: 0xaec000e8  sw          $zero, 0xE8($s6)
    ctx->pc = 0x1b65b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 232), GPR_U32(ctx, 0));
    // 0x1b65b4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b65b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b65b8: 0x24c64d30  addiu       $a2, $a2, 0x4D30
    ctx->pc = 0x1b65b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19760));
    // 0x1b65bc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b65bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b65c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65c4: 0x26c800ec  addiu       $t0, $s6, 0xEC
    ctx->pc = 0x1b65c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 236));
    // 0x1b65c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b65c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65cc: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B65CCu;
    SET_GPR_U32(ctx, 31, 0x1B65D4u);
    ctx->pc = 0x1B65D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65CCu;
            // 0x1b65d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65D4u; }
        if (ctx->pc != 0x1B65D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65D4u; }
        if (ctx->pc != 0x1B65D4u) { return; }
    }
    ctx->pc = 0x1B65D4u;
    // 0x1b65d4: 0xaec000ec  sw          $zero, 0xEC($s6)
    ctx->pc = 0x1b65d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 236), GPR_U32(ctx, 0));
    // 0x1b65d8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b65d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b65dc: 0x24c64d48  addiu       $a2, $a2, 0x4D48
    ctx->pc = 0x1b65dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19784));
    // 0x1b65e0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b65e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b65e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65e8: 0x26c800f0  addiu       $t0, $s6, 0xF0
    ctx->pc = 0x1b65e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 240));
    // 0x1b65ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b65ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65f0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B65F0u;
    SET_GPR_U32(ctx, 31, 0x1B65F8u);
    ctx->pc = 0x1B65F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65F0u;
            // 0x1b65f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65F8u; }
        if (ctx->pc != 0x1B65F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65F8u; }
        if (ctx->pc != 0x1B65F8u) { return; }
    }
    ctx->pc = 0x1B65F8u;
    // 0x1b65f8: 0xaec000f0  sw          $zero, 0xF0($s6)
    ctx->pc = 0x1b65f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 240), GPR_U32(ctx, 0));
    // 0x1b65fc: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b65fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6600: 0x24c64d60  addiu       $a2, $a2, 0x4D60
    ctx->pc = 0x1b6600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19808));
    // 0x1b6604: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6604u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6608: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b660c: 0x26c800f4  addiu       $t0, $s6, 0xF4
    ctx->pc = 0x1b660cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 244));
    // 0x1b6610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6614: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6614u;
    SET_GPR_U32(ctx, 31, 0x1B661Cu);
    ctx->pc = 0x1B6618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6614u;
            // 0x1b6618: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B661Cu; }
        if (ctx->pc != 0x1B661Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B661Cu; }
        if (ctx->pc != 0x1B661Cu) { return; }
    }
    ctx->pc = 0x1B661Cu;
    // 0x1b661c: 0xaec000f4  sw          $zero, 0xF4($s6)
    ctx->pc = 0x1b661cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 244), GPR_U32(ctx, 0));
    // 0x1b6620: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6624: 0x24c64d78  addiu       $a2, $a2, 0x4D78
    ctx->pc = 0x1b6624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19832));
    // 0x1b6628: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6628u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b662c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b662cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6630: 0x26c800f8  addiu       $t0, $s6, 0xF8
    ctx->pc = 0x1b6630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 248));
    // 0x1b6634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6638: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6638u;
    SET_GPR_U32(ctx, 31, 0x1B6640u);
    ctx->pc = 0x1B663Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6638u;
            // 0x1b663c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6640u; }
        if (ctx->pc != 0x1B6640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6640u; }
        if (ctx->pc != 0x1B6640u) { return; }
    }
    ctx->pc = 0x1B6640u;
    // 0x1b6640: 0xaec000f8  sw          $zero, 0xF8($s6)
    ctx->pc = 0x1b6640u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 248), GPR_U32(ctx, 0));
    // 0x1b6644: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6644u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6648: 0x24c64d90  addiu       $a2, $a2, 0x4D90
    ctx->pc = 0x1b6648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19856));
    // 0x1b664c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b664cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6650: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6654: 0x26c800fc  addiu       $t0, $s6, 0xFC
    ctx->pc = 0x1b6654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 252));
    // 0x1b6658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b665c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B665Cu;
    SET_GPR_U32(ctx, 31, 0x1B6664u);
    ctx->pc = 0x1B6660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B665Cu;
            // 0x1b6660: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6664u; }
        if (ctx->pc != 0x1B6664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6664u; }
        if (ctx->pc != 0x1B6664u) { return; }
    }
    ctx->pc = 0x1B6664u;
    // 0x1b6664: 0xaec000fc  sw          $zero, 0xFC($s6)
    ctx->pc = 0x1b6664u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 252), GPR_U32(ctx, 0));
    // 0x1b6668: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b666c: 0x24c64da8  addiu       $a2, $a2, 0x4DA8
    ctx->pc = 0x1b666cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19880));
    // 0x1b6670: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6670u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6674: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6678: 0x26c80100  addiu       $t0, $s6, 0x100
    ctx->pc = 0x1b6678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 256));
    // 0x1b667c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b667cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6680: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6680u;
    SET_GPR_U32(ctx, 31, 0x1B6688u);
    ctx->pc = 0x1B6684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6680u;
            // 0x1b6684: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6688u; }
        if (ctx->pc != 0x1B6688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6688u; }
        if (ctx->pc != 0x1B6688u) { return; }
    }
    ctx->pc = 0x1B6688u;
    // 0x1b6688: 0xaec00100  sw          $zero, 0x100($s6)
    ctx->pc = 0x1b6688u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 256), GPR_U32(ctx, 0));
    // 0x1b668c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b668cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6690: 0x24c64dc0  addiu       $a2, $a2, 0x4DC0
    ctx->pc = 0x1b6690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19904));
    // 0x1b6694: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6694u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6698: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b669c: 0x26c80104  addiu       $t0, $s6, 0x104
    ctx->pc = 0x1b669cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 260));
    // 0x1b66a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b66a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66a4: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B66A4u;
    SET_GPR_U32(ctx, 31, 0x1B66ACu);
    ctx->pc = 0x1B66A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B66A4u;
            // 0x1b66a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B66ACu; }
        if (ctx->pc != 0x1B66ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B66ACu; }
        if (ctx->pc != 0x1B66ACu) { return; }
    }
    ctx->pc = 0x1B66ACu;
    // 0x1b66ac: 0xaec00104  sw          $zero, 0x104($s6)
    ctx->pc = 0x1b66acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 260), GPR_U32(ctx, 0));
    // 0x1b66b0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b66b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b66b4: 0x24c64dd8  addiu       $a2, $a2, 0x4DD8
    ctx->pc = 0x1b66b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19928));
    // 0x1b66b8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b66b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b66bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66c0: 0x26c80108  addiu       $t0, $s6, 0x108
    ctx->pc = 0x1b66c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 264));
    // 0x1b66c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b66c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66c8: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B66C8u;
    SET_GPR_U32(ctx, 31, 0x1B66D0u);
    ctx->pc = 0x1B66CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B66C8u;
            // 0x1b66cc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B66D0u; }
        if (ctx->pc != 0x1B66D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B66D0u; }
        if (ctx->pc != 0x1B66D0u) { return; }
    }
    ctx->pc = 0x1B66D0u;
    // 0x1b66d0: 0xaec00108  sw          $zero, 0x108($s6)
    ctx->pc = 0x1b66d0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 264), GPR_U32(ctx, 0));
    // 0x1b66d4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b66d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b66d8: 0x24c64df0  addiu       $a2, $a2, 0x4DF0
    ctx->pc = 0x1b66d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19952));
    // 0x1b66dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b66dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66e0: 0x26c8010c  addiu       $t0, $s6, 0x10C
    ctx->pc = 0x1b66e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 268));
    // 0x1b66e4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b66e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b66e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66ec: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B66ECu;
    SET_GPR_U32(ctx, 31, 0x1B66F4u);
    ctx->pc = 0x1B66F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B66ECu;
            // 0x1b66f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B66F4u; }
        if (ctx->pc != 0x1B66F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B66F4u; }
        if (ctx->pc != 0x1B66F4u) { return; }
    }
    ctx->pc = 0x1B66F4u;
    // 0x1b66f4: 0xaec0010c  sw          $zero, 0x10C($s6)
    ctx->pc = 0x1b66f4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 268), GPR_U32(ctx, 0));
    // 0x1b66f8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b66f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b66fc: 0x24c64e08  addiu       $a2, $a2, 0x4E08
    ctx->pc = 0x1b66fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19976));
    // 0x1b6700: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6704: 0x26c80110  addiu       $t0, $s6, 0x110
    ctx->pc = 0x1b6704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 272));
    // 0x1b6708: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6708u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b670c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b670cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6710: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6710u;
    SET_GPR_U32(ctx, 31, 0x1B6718u);
    ctx->pc = 0x1B6714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6710u;
            // 0x1b6714: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6718u; }
        if (ctx->pc != 0x1B6718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6718u; }
        if (ctx->pc != 0x1B6718u) { return; }
    }
    ctx->pc = 0x1B6718u;
    // 0x1b6718: 0xaec00110  sw          $zero, 0x110($s6)
    ctx->pc = 0x1b6718u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 272), GPR_U32(ctx, 0));
    // 0x1b671c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b671cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6720: 0x24c64e18  addiu       $a2, $a2, 0x4E18
    ctx->pc = 0x1b6720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19992));
    // 0x1b6724: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6728: 0x26c80114  addiu       $t0, $s6, 0x114
    ctx->pc = 0x1b6728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 276));
    // 0x1b672c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b672cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6730: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6734: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6734u;
    SET_GPR_U32(ctx, 31, 0x1B673Cu);
    ctx->pc = 0x1B6738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6734u;
            // 0x1b6738: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B673Cu; }
        if (ctx->pc != 0x1B673Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B673Cu; }
        if (ctx->pc != 0x1B673Cu) { return; }
    }
    ctx->pc = 0x1B673Cu;
    // 0x1b673c: 0xaec00114  sw          $zero, 0x114($s6)
    ctx->pc = 0x1b673cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 276), GPR_U32(ctx, 0));
    // 0x1b6740: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6740u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6744: 0x24c64e28  addiu       $a2, $a2, 0x4E28
    ctx->pc = 0x1b6744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20008));
    // 0x1b6748: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b674c: 0x26c80118  addiu       $t0, $s6, 0x118
    ctx->pc = 0x1b674cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 280));
    // 0x1b6750: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6750u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6754: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6758: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6758u;
    SET_GPR_U32(ctx, 31, 0x1B6760u);
    ctx->pc = 0x1B675Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6758u;
            // 0x1b675c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6760u; }
        if (ctx->pc != 0x1B6760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6760u; }
        if (ctx->pc != 0x1B6760u) { return; }
    }
    ctx->pc = 0x1B6760u;
    // 0x1b6760: 0xaec00118  sw          $zero, 0x118($s6)
    ctx->pc = 0x1b6760u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 280), GPR_U32(ctx, 0));
    // 0x1b6764: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6764u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6768: 0x24c64e38  addiu       $a2, $a2, 0x4E38
    ctx->pc = 0x1b6768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20024));
    // 0x1b676c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b676cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6770: 0x26c8011c  addiu       $t0, $s6, 0x11C
    ctx->pc = 0x1b6770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 284));
    // 0x1b6774: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6774u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6778: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b677c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B677Cu;
    SET_GPR_U32(ctx, 31, 0x1B6784u);
    ctx->pc = 0x1B6780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B677Cu;
            // 0x1b6780: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6784u; }
        if (ctx->pc != 0x1B6784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6784u; }
        if (ctx->pc != 0x1B6784u) { return; }
    }
    ctx->pc = 0x1B6784u;
    // 0x1b6784: 0xaec0011c  sw          $zero, 0x11C($s6)
    ctx->pc = 0x1b6784u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 284), GPR_U32(ctx, 0));
    // 0x1b6788: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b678c: 0x24c64e48  addiu       $a2, $a2, 0x4E48
    ctx->pc = 0x1b678cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20040));
    // 0x1b6790: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6794: 0x26c80120  addiu       $t0, $s6, 0x120
    ctx->pc = 0x1b6794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 288));
    // 0x1b6798: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6798u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b679c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b679cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b67a0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B67A0u;
    SET_GPR_U32(ctx, 31, 0x1B67A8u);
    ctx->pc = 0x1B67A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67A0u;
            // 0x1b67a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67A8u; }
        if (ctx->pc != 0x1B67A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67A8u; }
        if (ctx->pc != 0x1B67A8u) { return; }
    }
    ctx->pc = 0x1B67A8u;
    // 0x1b67a8: 0xaec00120  sw          $zero, 0x120($s6)
    ctx->pc = 0x1b67a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 288), GPR_U32(ctx, 0));
    // 0x1b67ac: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b67acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b67b0: 0x24c64e58  addiu       $a2, $a2, 0x4E58
    ctx->pc = 0x1b67b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20056));
    // 0x1b67b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b67b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b67b8: 0x26c80124  addiu       $t0, $s6, 0x124
    ctx->pc = 0x1b67b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
    // 0x1b67bc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b67bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b67c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b67c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b67c4: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B67C4u;
    SET_GPR_U32(ctx, 31, 0x1B67CCu);
    ctx->pc = 0x1B67C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67C4u;
            // 0x1b67c8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67CCu; }
        if (ctx->pc != 0x1B67CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67CCu; }
        if (ctx->pc != 0x1B67CCu) { return; }
    }
    ctx->pc = 0x1B67CCu;
    // 0x1b67cc: 0xaec00124  sw          $zero, 0x124($s6)
    ctx->pc = 0x1b67ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 292), GPR_U32(ctx, 0));
    // 0x1b67d0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b67d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b67d4: 0x24c64e68  addiu       $a2, $a2, 0x4E68
    ctx->pc = 0x1b67d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20072));
    // 0x1b67d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b67d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b67dc: 0x26c80128  addiu       $t0, $s6, 0x128
    ctx->pc = 0x1b67dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 296));
    // 0x1b67e0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b67e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b67e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b67e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b67e8: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B67E8u;
    SET_GPR_U32(ctx, 31, 0x1B67F0u);
    ctx->pc = 0x1B67ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67E8u;
            // 0x1b67ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67F0u; }
        if (ctx->pc != 0x1B67F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67F0u; }
        if (ctx->pc != 0x1B67F0u) { return; }
    }
    ctx->pc = 0x1B67F0u;
    // 0x1b67f0: 0xaec00128  sw          $zero, 0x128($s6)
    ctx->pc = 0x1b67f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 296), GPR_U32(ctx, 0));
    // 0x1b67f4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b67f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b67f8: 0x24c64e78  addiu       $a2, $a2, 0x4E78
    ctx->pc = 0x1b67f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20088));
    // 0x1b67fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b67fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6800: 0x26c8012c  addiu       $t0, $s6, 0x12C
    ctx->pc = 0x1b6800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 300));
    // 0x1b6804: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b680c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B680Cu;
    SET_GPR_U32(ctx, 31, 0x1B6814u);
    ctx->pc = 0x1B6810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B680Cu;
            // 0x1b6810: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6814u; }
        if (ctx->pc != 0x1B6814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6814u; }
        if (ctx->pc != 0x1B6814u) { return; }
    }
    ctx->pc = 0x1B6814u;
    // 0x1b6814: 0xaec0012c  sw          $zero, 0x12C($s6)
    ctx->pc = 0x1b6814u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 300), GPR_U32(ctx, 0));
    // 0x1b6818: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b681c: 0x24c64e88  addiu       $a2, $a2, 0x4E88
    ctx->pc = 0x1b681cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20104));
    // 0x1b6820: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6824: 0x26c80130  addiu       $t0, $s6, 0x130
    ctx->pc = 0x1b6824u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 304));
    // 0x1b6828: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6828u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b682c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b682cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6830: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6830u;
    SET_GPR_U32(ctx, 31, 0x1B6838u);
    ctx->pc = 0x1B6834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6830u;
            // 0x1b6834: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6838u; }
        if (ctx->pc != 0x1B6838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6838u; }
        if (ctx->pc != 0x1B6838u) { return; }
    }
    ctx->pc = 0x1B6838u;
    // 0x1b6838: 0xaec00130  sw          $zero, 0x130($s6)
    ctx->pc = 0x1b6838u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 304), GPR_U32(ctx, 0));
    // 0x1b683c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b683cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6840: 0x24c64e98  addiu       $a2, $a2, 0x4E98
    ctx->pc = 0x1b6840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20120));
    // 0x1b6844: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6848: 0x26c80134  addiu       $t0, $s6, 0x134
    ctx->pc = 0x1b6848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 308));
    // 0x1b684c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b684cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6850: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6854: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6854u;
    SET_GPR_U32(ctx, 31, 0x1B685Cu);
    ctx->pc = 0x1B6858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6854u;
            // 0x1b6858: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B685Cu; }
        if (ctx->pc != 0x1B685Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B685Cu; }
        if (ctx->pc != 0x1B685Cu) { return; }
    }
    ctx->pc = 0x1B685Cu;
    // 0x1b685c: 0xaec00134  sw          $zero, 0x134($s6)
    ctx->pc = 0x1b685cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 308), GPR_U32(ctx, 0));
    // 0x1b6860: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6860u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6864: 0x24c64ea8  addiu       $a2, $a2, 0x4EA8
    ctx->pc = 0x1b6864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20136));
    // 0x1b6868: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b686c: 0x26c80138  addiu       $t0, $s6, 0x138
    ctx->pc = 0x1b686cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 312));
    // 0x1b6870: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6870u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6874: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6878: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6878u;
    SET_GPR_U32(ctx, 31, 0x1B6880u);
    ctx->pc = 0x1B687Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6878u;
            // 0x1b687c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6880u; }
        if (ctx->pc != 0x1B6880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6880u; }
        if (ctx->pc != 0x1B6880u) { return; }
    }
    ctx->pc = 0x1B6880u;
    // 0x1b6880: 0xaec00138  sw          $zero, 0x138($s6)
    ctx->pc = 0x1b6880u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 312), GPR_U32(ctx, 0));
    // 0x1b6884: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6884u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6888: 0x24c64eb8  addiu       $a2, $a2, 0x4EB8
    ctx->pc = 0x1b6888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20152));
    // 0x1b688c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b688cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6890: 0x26c8013c  addiu       $t0, $s6, 0x13C
    ctx->pc = 0x1b6890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 316));
    // 0x1b6894: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6894u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6898: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b689c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B689Cu;
    SET_GPR_U32(ctx, 31, 0x1B68A4u);
    ctx->pc = 0x1B68A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B689Cu;
            // 0x1b68a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B68A4u; }
        if (ctx->pc != 0x1B68A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B68A4u; }
        if (ctx->pc != 0x1B68A4u) { return; }
    }
    ctx->pc = 0x1B68A4u;
    // 0x1b68a4: 0xaec0013c  sw          $zero, 0x13C($s6)
    ctx->pc = 0x1b68a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 316), GPR_U32(ctx, 0));
    // 0x1b68a8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b68a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b68ac: 0x24c64ec8  addiu       $a2, $a2, 0x4EC8
    ctx->pc = 0x1b68acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20168));
    // 0x1b68b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b68b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68b4: 0x26c80140  addiu       $t0, $s6, 0x140
    ctx->pc = 0x1b68b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 320));
    // 0x1b68b8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b68b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68bc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b68bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b68c0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B68C0u;
    SET_GPR_U32(ctx, 31, 0x1B68C8u);
    ctx->pc = 0x1B68C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B68C0u;
            // 0x1b68c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B68C8u; }
        if (ctx->pc != 0x1B68C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B68C8u; }
        if (ctx->pc != 0x1B68C8u) { return; }
    }
    ctx->pc = 0x1B68C8u;
    // 0x1b68c8: 0xaec00140  sw          $zero, 0x140($s6)
    ctx->pc = 0x1b68c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 320), GPR_U32(ctx, 0));
    // 0x1b68cc: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b68ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b68d0: 0x24c64ed8  addiu       $a2, $a2, 0x4ED8
    ctx->pc = 0x1b68d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20184));
    // 0x1b68d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b68d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68d8: 0x26c80144  addiu       $t0, $s6, 0x144
    ctx->pc = 0x1b68d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 324));
    // 0x1b68dc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b68dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68e0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b68e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b68e4: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B68E4u;
    SET_GPR_U32(ctx, 31, 0x1B68ECu);
    ctx->pc = 0x1B68E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B68E4u;
            // 0x1b68e8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B68ECu; }
        if (ctx->pc != 0x1B68ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B68ECu; }
        if (ctx->pc != 0x1B68ECu) { return; }
    }
    ctx->pc = 0x1B68ECu;
    // 0x1b68ec: 0xaec00144  sw          $zero, 0x144($s6)
    ctx->pc = 0x1b68ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 324), GPR_U32(ctx, 0));
    // 0x1b68f0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b68f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b68f4: 0x24c64ee8  addiu       $a2, $a2, 0x4EE8
    ctx->pc = 0x1b68f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20200));
    // 0x1b68f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b68f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68fc: 0x26c80148  addiu       $t0, $s6, 0x148
    ctx->pc = 0x1b68fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 328));
    // 0x1b6900: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6900u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6904: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6908: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6908u;
    SET_GPR_U32(ctx, 31, 0x1B6910u);
    ctx->pc = 0x1B690Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6908u;
            // 0x1b690c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6910u; }
        if (ctx->pc != 0x1B6910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6910u; }
        if (ctx->pc != 0x1B6910u) { return; }
    }
    ctx->pc = 0x1B6910u;
    // 0x1b6910: 0xaec00148  sw          $zero, 0x148($s6)
    ctx->pc = 0x1b6910u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 328), GPR_U32(ctx, 0));
    // 0x1b6914: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6914u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6918: 0x24c64ef8  addiu       $a2, $a2, 0x4EF8
    ctx->pc = 0x1b6918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20216));
    // 0x1b691c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b691cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6920: 0x26c8014c  addiu       $t0, $s6, 0x14C
    ctx->pc = 0x1b6920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 332));
    // 0x1b6924: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6924u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6928: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b692c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B692Cu;
    SET_GPR_U32(ctx, 31, 0x1B6934u);
    ctx->pc = 0x1B6930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B692Cu;
            // 0x1b6930: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6934u; }
        if (ctx->pc != 0x1B6934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6934u; }
        if (ctx->pc != 0x1B6934u) { return; }
    }
    ctx->pc = 0x1B6934u;
    // 0x1b6934: 0xaec0014c  sw          $zero, 0x14C($s6)
    ctx->pc = 0x1b6934u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 332), GPR_U32(ctx, 0));
    // 0x1b6938: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6938u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b693c: 0x24c64f08  addiu       $a2, $a2, 0x4F08
    ctx->pc = 0x1b693cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20232));
    // 0x1b6940: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6944: 0x26c80150  addiu       $t0, $s6, 0x150
    ctx->pc = 0x1b6944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 336));
    // 0x1b6948: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6948u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b694c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b694cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6950: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6950u;
    SET_GPR_U32(ctx, 31, 0x1B6958u);
    ctx->pc = 0x1B6954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6950u;
            // 0x1b6954: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6958u; }
        if (ctx->pc != 0x1B6958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6958u; }
        if (ctx->pc != 0x1B6958u) { return; }
    }
    ctx->pc = 0x1B6958u;
    // 0x1b6958: 0xaec00150  sw          $zero, 0x150($s6)
    ctx->pc = 0x1b6958u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 336), GPR_U32(ctx, 0));
    // 0x1b695c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b695cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6960: 0x24c64f18  addiu       $a2, $a2, 0x4F18
    ctx->pc = 0x1b6960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20248));
    // 0x1b6964: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6968: 0x26c80154  addiu       $t0, $s6, 0x154
    ctx->pc = 0x1b6968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 340));
    // 0x1b696c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b696cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6974: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6974u;
    SET_GPR_U32(ctx, 31, 0x1B697Cu);
    ctx->pc = 0x1B6978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6974u;
            // 0x1b6978: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B697Cu; }
        if (ctx->pc != 0x1B697Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B697Cu; }
        if (ctx->pc != 0x1B697Cu) { return; }
    }
    ctx->pc = 0x1B697Cu;
    // 0x1b697c: 0xaec00154  sw          $zero, 0x154($s6)
    ctx->pc = 0x1b697cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 340), GPR_U32(ctx, 0));
    // 0x1b6980: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6980u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6984: 0x24c64f28  addiu       $a2, $a2, 0x4F28
    ctx->pc = 0x1b6984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20264));
    // 0x1b6988: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b698c: 0x26c80158  addiu       $t0, $s6, 0x158
    ctx->pc = 0x1b698cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 344));
    // 0x1b6990: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6998: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6998u;
    SET_GPR_U32(ctx, 31, 0x1B69A0u);
    ctx->pc = 0x1B699Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6998u;
            // 0x1b699c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69A0u; }
        if (ctx->pc != 0x1B69A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69A0u; }
        if (ctx->pc != 0x1B69A0u) { return; }
    }
    ctx->pc = 0x1B69A0u;
    // 0x1b69a0: 0xaec00158  sw          $zero, 0x158($s6)
    ctx->pc = 0x1b69a0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 344), GPR_U32(ctx, 0));
    // 0x1b69a4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b69a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b69a8: 0x24c64f38  addiu       $a2, $a2, 0x4F38
    ctx->pc = 0x1b69a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20280));
    // 0x1b69ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b69acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69b0: 0x26c8015c  addiu       $t0, $s6, 0x15C
    ctx->pc = 0x1b69b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 348));
    // 0x1b69b4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b69b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b69b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69bc: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B69BCu;
    SET_GPR_U32(ctx, 31, 0x1B69C4u);
    ctx->pc = 0x1B69C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B69BCu;
            // 0x1b69c0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69C4u; }
        if (ctx->pc != 0x1B69C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69C4u; }
        if (ctx->pc != 0x1B69C4u) { return; }
    }
    ctx->pc = 0x1B69C4u;
    // 0x1b69c4: 0xaec0015c  sw          $zero, 0x15C($s6)
    ctx->pc = 0x1b69c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 348), GPR_U32(ctx, 0));
    // 0x1b69c8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b69c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b69cc: 0x24c64f48  addiu       $a2, $a2, 0x4F48
    ctx->pc = 0x1b69ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20296));
    // 0x1b69d0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b69d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69d4: 0x26c80160  addiu       $t0, $s6, 0x160
    ctx->pc = 0x1b69d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 352));
    // 0x1b69d8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b69d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b69dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69e0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B69E0u;
    SET_GPR_U32(ctx, 31, 0x1B69E8u);
    ctx->pc = 0x1B69E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B69E0u;
            // 0x1b69e4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69E8u; }
        if (ctx->pc != 0x1B69E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69E8u; }
        if (ctx->pc != 0x1B69E8u) { return; }
    }
    ctx->pc = 0x1B69E8u;
    // 0x1b69e8: 0xaec00160  sw          $zero, 0x160($s6)
    ctx->pc = 0x1b69e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 352), GPR_U32(ctx, 0));
    // 0x1b69ec: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b69ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b69f0: 0x24c64f58  addiu       $a2, $a2, 0x4F58
    ctx->pc = 0x1b69f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20312));
    // 0x1b69f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b69f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69f8: 0x26c80164  addiu       $t0, $s6, 0x164
    ctx->pc = 0x1b69f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 356));
    // 0x1b69fc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b69fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a04: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6A04u;
    SET_GPR_U32(ctx, 31, 0x1B6A0Cu);
    ctx->pc = 0x1B6A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A04u;
            // 0x1b6a08: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A0Cu; }
        if (ctx->pc != 0x1B6A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A0Cu; }
        if (ctx->pc != 0x1B6A0Cu) { return; }
    }
    ctx->pc = 0x1B6A0Cu;
    // 0x1b6a0c: 0xaec00164  sw          $zero, 0x164($s6)
    ctx->pc = 0x1b6a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 356), GPR_U32(ctx, 0));
    // 0x1b6a10: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6a10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6a14: 0x24c64f68  addiu       $a2, $a2, 0x4F68
    ctx->pc = 0x1b6a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20328));
    // 0x1b6a18: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a1c: 0x26c80168  addiu       $t0, $s6, 0x168
    ctx->pc = 0x1b6a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 360));
    // 0x1b6a20: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6a20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a28: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6A28u;
    SET_GPR_U32(ctx, 31, 0x1B6A30u);
    ctx->pc = 0x1B6A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A28u;
            // 0x1b6a2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A30u; }
        if (ctx->pc != 0x1B6A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A30u; }
        if (ctx->pc != 0x1B6A30u) { return; }
    }
    ctx->pc = 0x1B6A30u;
    // 0x1b6a30: 0xaec00168  sw          $zero, 0x168($s6)
    ctx->pc = 0x1b6a30u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 360), GPR_U32(ctx, 0));
    // 0x1b6a34: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6a34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6a38: 0x24c64f78  addiu       $a2, $a2, 0x4F78
    ctx->pc = 0x1b6a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20344));
    // 0x1b6a3c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a40: 0x26c8016c  addiu       $t0, $s6, 0x16C
    ctx->pc = 0x1b6a40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 364));
    // 0x1b6a44: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6a44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a4c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6A4Cu;
    SET_GPR_U32(ctx, 31, 0x1B6A54u);
    ctx->pc = 0x1B6A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A4Cu;
            // 0x1b6a50: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A54u; }
        if (ctx->pc != 0x1B6A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A54u; }
        if (ctx->pc != 0x1B6A54u) { return; }
    }
    ctx->pc = 0x1B6A54u;
    // 0x1b6a54: 0xaec0016c  sw          $zero, 0x16C($s6)
    ctx->pc = 0x1b6a54u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 364), GPR_U32(ctx, 0));
    // 0x1b6a58: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6a58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6a5c: 0x24c64f88  addiu       $a2, $a2, 0x4F88
    ctx->pc = 0x1b6a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20360));
    // 0x1b6a60: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a64: 0x26c80170  addiu       $t0, $s6, 0x170
    ctx->pc = 0x1b6a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 368));
    // 0x1b6a68: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6a68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a70: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6A70u;
    SET_GPR_U32(ctx, 31, 0x1B6A78u);
    ctx->pc = 0x1B6A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A70u;
            // 0x1b6a74: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A78u; }
        if (ctx->pc != 0x1B6A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A78u; }
        if (ctx->pc != 0x1B6A78u) { return; }
    }
    ctx->pc = 0x1B6A78u;
    // 0x1b6a78: 0xaec00170  sw          $zero, 0x170($s6)
    ctx->pc = 0x1b6a78u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 368), GPR_U32(ctx, 0));
    // 0x1b6a7c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6a80: 0x24c64f98  addiu       $a2, $a2, 0x4F98
    ctx->pc = 0x1b6a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20376));
    // 0x1b6a84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a88: 0x26c80174  addiu       $t0, $s6, 0x174
    ctx->pc = 0x1b6a88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 372));
    // 0x1b6a8c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6a8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a94: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6A94u;
    SET_GPR_U32(ctx, 31, 0x1B6A9Cu);
    ctx->pc = 0x1B6A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A94u;
            // 0x1b6a98: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A9Cu; }
        if (ctx->pc != 0x1B6A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A9Cu; }
        if (ctx->pc != 0x1B6A9Cu) { return; }
    }
    ctx->pc = 0x1B6A9Cu;
    // 0x1b6a9c: 0xaec00174  sw          $zero, 0x174($s6)
    ctx->pc = 0x1b6a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 372), GPR_U32(ctx, 0));
    // 0x1b6aa0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6aa4: 0x24c64fa8  addiu       $a2, $a2, 0x4FA8
    ctx->pc = 0x1b6aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20392));
    // 0x1b6aa8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6aac: 0x26c80178  addiu       $t0, $s6, 0x178
    ctx->pc = 0x1b6aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 376));
    // 0x1b6ab0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6ab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ab8: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6AB8u;
    SET_GPR_U32(ctx, 31, 0x1B6AC0u);
    ctx->pc = 0x1B6ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6AB8u;
            // 0x1b6abc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6AC0u; }
        if (ctx->pc != 0x1B6AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6AC0u; }
        if (ctx->pc != 0x1B6AC0u) { return; }
    }
    ctx->pc = 0x1B6AC0u;
    // 0x1b6ac0: 0xaec00178  sw          $zero, 0x178($s6)
    ctx->pc = 0x1b6ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 376), GPR_U32(ctx, 0));
    // 0x1b6ac4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6ac8: 0x24c64fb8  addiu       $a2, $a2, 0x4FB8
    ctx->pc = 0x1b6ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20408));
    // 0x1b6acc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ad0: 0x26c8017c  addiu       $t0, $s6, 0x17C
    ctx->pc = 0x1b6ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 380));
    // 0x1b6ad4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6ad4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ad8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6adc: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6ADCu;
    SET_GPR_U32(ctx, 31, 0x1B6AE4u);
    ctx->pc = 0x1B6AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6ADCu;
            // 0x1b6ae0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6AE4u; }
        if (ctx->pc != 0x1B6AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6AE4u; }
        if (ctx->pc != 0x1B6AE4u) { return; }
    }
    ctx->pc = 0x1B6AE4u;
    // 0x1b6ae4: 0xaec0017c  sw          $zero, 0x17C($s6)
    ctx->pc = 0x1b6ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 380), GPR_U32(ctx, 0));
    // 0x1b6ae8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6aec: 0x24c64fc8  addiu       $a2, $a2, 0x4FC8
    ctx->pc = 0x1b6aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20424));
    // 0x1b6af0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6af4: 0x26c80180  addiu       $t0, $s6, 0x180
    ctx->pc = 0x1b6af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 384));
    // 0x1b6af8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6af8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b00: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6B00u;
    SET_GPR_U32(ctx, 31, 0x1B6B08u);
    ctx->pc = 0x1B6B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B00u;
            // 0x1b6b04: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B08u; }
        if (ctx->pc != 0x1B6B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B08u; }
        if (ctx->pc != 0x1B6B08u) { return; }
    }
    ctx->pc = 0x1B6B08u;
    // 0x1b6b08: 0xaec00180  sw          $zero, 0x180($s6)
    ctx->pc = 0x1b6b08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 384), GPR_U32(ctx, 0));
    // 0x1b6b0c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6b10: 0x24c64fd8  addiu       $a2, $a2, 0x4FD8
    ctx->pc = 0x1b6b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20440));
    // 0x1b6b14: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b18: 0x26c80184  addiu       $t0, $s6, 0x184
    ctx->pc = 0x1b6b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 388));
    // 0x1b6b1c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6b1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b24: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6B24u;
    SET_GPR_U32(ctx, 31, 0x1B6B2Cu);
    ctx->pc = 0x1B6B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B24u;
            // 0x1b6b28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B2Cu; }
        if (ctx->pc != 0x1B6B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B2Cu; }
        if (ctx->pc != 0x1B6B2Cu) { return; }
    }
    ctx->pc = 0x1B6B2Cu;
    // 0x1b6b2c: 0xaec00184  sw          $zero, 0x184($s6)
    ctx->pc = 0x1b6b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 388), GPR_U32(ctx, 0));
    // 0x1b6b30: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6b30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6b34: 0x24c64fe8  addiu       $a2, $a2, 0x4FE8
    ctx->pc = 0x1b6b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20456));
    // 0x1b6b38: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b3c: 0x26c80188  addiu       $t0, $s6, 0x188
    ctx->pc = 0x1b6b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 392));
    // 0x1b6b40: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6b40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b48: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6B48u;
    SET_GPR_U32(ctx, 31, 0x1B6B50u);
    ctx->pc = 0x1B6B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B48u;
            // 0x1b6b4c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B50u; }
        if (ctx->pc != 0x1B6B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B50u; }
        if (ctx->pc != 0x1B6B50u) { return; }
    }
    ctx->pc = 0x1B6B50u;
    // 0x1b6b50: 0xaec00188  sw          $zero, 0x188($s6)
    ctx->pc = 0x1b6b50u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 392), GPR_U32(ctx, 0));
    // 0x1b6b54: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6b54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6b58: 0x24c64ff8  addiu       $a2, $a2, 0x4FF8
    ctx->pc = 0x1b6b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20472));
    // 0x1b6b5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b60: 0x26c8018c  addiu       $t0, $s6, 0x18C
    ctx->pc = 0x1b6b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 396));
    // 0x1b6b64: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6b64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b6c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6B6Cu;
    SET_GPR_U32(ctx, 31, 0x1B6B74u);
    ctx->pc = 0x1B6B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B6Cu;
            // 0x1b6b70: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B74u; }
        if (ctx->pc != 0x1B6B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B74u; }
        if (ctx->pc != 0x1B6B74u) { return; }
    }
    ctx->pc = 0x1B6B74u;
    // 0x1b6b74: 0xaec0018c  sw          $zero, 0x18C($s6)
    ctx->pc = 0x1b6b74u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 396), GPR_U32(ctx, 0));
    // 0x1b6b78: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6b78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6b7c: 0x24c65008  addiu       $a2, $a2, 0x5008
    ctx->pc = 0x1b6b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20488));
    // 0x1b6b80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b84: 0x26c80190  addiu       $t0, $s6, 0x190
    ctx->pc = 0x1b6b84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 400));
    // 0x1b6b88: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6b88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b90: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6B90u;
    SET_GPR_U32(ctx, 31, 0x1B6B98u);
    ctx->pc = 0x1B6B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B90u;
            // 0x1b6b94: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B98u; }
        if (ctx->pc != 0x1B6B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B98u; }
        if (ctx->pc != 0x1B6B98u) { return; }
    }
    ctx->pc = 0x1B6B98u;
    // 0x1b6b98: 0xaec00190  sw          $zero, 0x190($s6)
    ctx->pc = 0x1b6b98u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 400), GPR_U32(ctx, 0));
    // 0x1b6b9c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6ba0: 0x24c65018  addiu       $a2, $a2, 0x5018
    ctx->pc = 0x1b6ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20504));
    // 0x1b6ba4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ba8: 0x26c80194  addiu       $t0, $s6, 0x194
    ctx->pc = 0x1b6ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 404));
    // 0x1b6bac: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6bacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bb4: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6BB4u;
    SET_GPR_U32(ctx, 31, 0x1B6BBCu);
    ctx->pc = 0x1B6BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BB4u;
            // 0x1b6bb8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BBCu; }
        if (ctx->pc != 0x1B6BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BBCu; }
        if (ctx->pc != 0x1B6BBCu) { return; }
    }
    ctx->pc = 0x1B6BBCu;
    // 0x1b6bbc: 0xaec00194  sw          $zero, 0x194($s6)
    ctx->pc = 0x1b6bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 404), GPR_U32(ctx, 0));
    // 0x1b6bc0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6bc4: 0x24c65028  addiu       $a2, $a2, 0x5028
    ctx->pc = 0x1b6bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20520));
    // 0x1b6bc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bcc: 0x26c80198  addiu       $t0, $s6, 0x198
    ctx->pc = 0x1b6bccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 408));
    // 0x1b6bd0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6bd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bd8: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6BD8u;
    SET_GPR_U32(ctx, 31, 0x1B6BE0u);
    ctx->pc = 0x1B6BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BD8u;
            // 0x1b6bdc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BE0u; }
        if (ctx->pc != 0x1B6BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BE0u; }
        if (ctx->pc != 0x1B6BE0u) { return; }
    }
    ctx->pc = 0x1B6BE0u;
    // 0x1b6be0: 0xaec00198  sw          $zero, 0x198($s6)
    ctx->pc = 0x1b6be0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 408), GPR_U32(ctx, 0));
    // 0x1b6be4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6be4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6be8: 0x24c65038  addiu       $a2, $a2, 0x5038
    ctx->pc = 0x1b6be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20536));
    // 0x1b6bec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bf0: 0x26c8019c  addiu       $t0, $s6, 0x19C
    ctx->pc = 0x1b6bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 412));
    // 0x1b6bf4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6bf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bfc: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6BFCu;
    SET_GPR_U32(ctx, 31, 0x1B6C04u);
    ctx->pc = 0x1B6C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BFCu;
            // 0x1b6c00: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C04u; }
        if (ctx->pc != 0x1B6C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C04u; }
        if (ctx->pc != 0x1B6C04u) { return; }
    }
    ctx->pc = 0x1B6C04u;
    // 0x1b6c04: 0xaec0019c  sw          $zero, 0x19C($s6)
    ctx->pc = 0x1b6c04u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 412), GPR_U32(ctx, 0));
    // 0x1b6c08: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6c08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6c0c: 0x24c65048  addiu       $a2, $a2, 0x5048
    ctx->pc = 0x1b6c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20552));
    // 0x1b6c10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c14: 0x26c801a0  addiu       $t0, $s6, 0x1A0
    ctx->pc = 0x1b6c14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 416));
    // 0x1b6c18: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6c18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c20: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6C20u;
    SET_GPR_U32(ctx, 31, 0x1B6C28u);
    ctx->pc = 0x1B6C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C20u;
            // 0x1b6c24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C28u; }
        if (ctx->pc != 0x1B6C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C28u; }
        if (ctx->pc != 0x1B6C28u) { return; }
    }
    ctx->pc = 0x1B6C28u;
    // 0x1b6c28: 0xaec001a0  sw          $zero, 0x1A0($s6)
    ctx->pc = 0x1b6c28u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 416), GPR_U32(ctx, 0));
    // 0x1b6c2c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6c30: 0x24c65058  addiu       $a2, $a2, 0x5058
    ctx->pc = 0x1b6c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20568));
    // 0x1b6c34: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c38: 0x26c801a4  addiu       $t0, $s6, 0x1A4
    ctx->pc = 0x1b6c38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 420));
    // 0x1b6c3c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6c3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c44: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6C44u;
    SET_GPR_U32(ctx, 31, 0x1B6C4Cu);
    ctx->pc = 0x1B6C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C44u;
            // 0x1b6c48: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C4Cu; }
        if (ctx->pc != 0x1B6C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C4Cu; }
        if (ctx->pc != 0x1B6C4Cu) { return; }
    }
    ctx->pc = 0x1B6C4Cu;
    // 0x1b6c4c: 0xaec001a4  sw          $zero, 0x1A4($s6)
    ctx->pc = 0x1b6c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 420), GPR_U32(ctx, 0));
    // 0x1b6c50: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6c50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6c54: 0x24c65068  addiu       $a2, $a2, 0x5068
    ctx->pc = 0x1b6c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20584));
    // 0x1b6c58: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c5c: 0x26c801a8  addiu       $t0, $s6, 0x1A8
    ctx->pc = 0x1b6c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 424));
    // 0x1b6c60: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6c60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c64: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6c68: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6C68u;
    SET_GPR_U32(ctx, 31, 0x1B6C70u);
    ctx->pc = 0x1B6C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C68u;
            // 0x1b6c6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C70u; }
        if (ctx->pc != 0x1B6C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C70u; }
        if (ctx->pc != 0x1B6C70u) { return; }
    }
    ctx->pc = 0x1B6C70u;
    // 0x1b6c70: 0xaec001a8  sw          $zero, 0x1A8($s6)
    ctx->pc = 0x1b6c70u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 424), GPR_U32(ctx, 0));
    // 0x1b6c74: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6c74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6c78: 0x24c65078  addiu       $a2, $a2, 0x5078
    ctx->pc = 0x1b6c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20600));
    // 0x1b6c7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c80: 0x26c801ac  addiu       $t0, $s6, 0x1AC
    ctx->pc = 0x1b6c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 428));
    // 0x1b6c84: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6c84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c88: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6c8c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6C8Cu;
    SET_GPR_U32(ctx, 31, 0x1B6C94u);
    ctx->pc = 0x1B6C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C8Cu;
            // 0x1b6c90: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C94u; }
        if (ctx->pc != 0x1B6C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C94u; }
        if (ctx->pc != 0x1B6C94u) { return; }
    }
    ctx->pc = 0x1B6C94u;
    // 0x1b6c94: 0xaec001ac  sw          $zero, 0x1AC($s6)
    ctx->pc = 0x1b6c94u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 428), GPR_U32(ctx, 0));
    // 0x1b6c98: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6c98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6c9c: 0x24c65090  addiu       $a2, $a2, 0x5090
    ctx->pc = 0x1b6c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20624));
    // 0x1b6ca0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ca4: 0x26c801b0  addiu       $t0, $s6, 0x1B0
    ctx->pc = 0x1b6ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 432));
    // 0x1b6ca8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6ca8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6cb0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6CB0u;
    SET_GPR_U32(ctx, 31, 0x1B6CB8u);
    ctx->pc = 0x1B6CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6CB0u;
            // 0x1b6cb4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CB8u; }
        if (ctx->pc != 0x1B6CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CB8u; }
        if (ctx->pc != 0x1B6CB8u) { return; }
    }
    ctx->pc = 0x1B6CB8u;
    // 0x1b6cb8: 0xaec001b0  sw          $zero, 0x1B0($s6)
    ctx->pc = 0x1b6cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 432), GPR_U32(ctx, 0));
    // 0x1b6cbc: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6cc0: 0x24c650a8  addiu       $a2, $a2, 0x50A8
    ctx->pc = 0x1b6cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20648));
    // 0x1b6cc4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cc8: 0x26c801b4  addiu       $t0, $s6, 0x1B4
    ctx->pc = 0x1b6cc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 436));
    // 0x1b6ccc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6cccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cd4: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6CD4u;
    SET_GPR_U32(ctx, 31, 0x1B6CDCu);
    ctx->pc = 0x1B6CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6CD4u;
            // 0x1b6cd8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CDCu; }
        if (ctx->pc != 0x1B6CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CDCu; }
        if (ctx->pc != 0x1B6CDCu) { return; }
    }
    ctx->pc = 0x1B6CDCu;
    // 0x1b6cdc: 0xaec001b4  sw          $zero, 0x1B4($s6)
    ctx->pc = 0x1b6cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 436), GPR_U32(ctx, 0));
    // 0x1b6ce0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6ce4: 0x24c650b8  addiu       $a2, $a2, 0x50B8
    ctx->pc = 0x1b6ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20664));
    // 0x1b6ce8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cec: 0x26c801b8  addiu       $t0, $s6, 0x1B8
    ctx->pc = 0x1b6cecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 440));
    // 0x1b6cf0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6cf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cf4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6cf8: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6CF8u;
    SET_GPR_U32(ctx, 31, 0x1B6D00u);
    ctx->pc = 0x1B6CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6CF8u;
            // 0x1b6cfc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D00u; }
        if (ctx->pc != 0x1B6D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D00u; }
        if (ctx->pc != 0x1B6D00u) { return; }
    }
    ctx->pc = 0x1B6D00u;
    // 0x1b6d00: 0xaec001b8  sw          $zero, 0x1B8($s6)
    ctx->pc = 0x1b6d00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 440), GPR_U32(ctx, 0));
    // 0x1b6d04: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6d04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6d08: 0x24c650c0  addiu       $a2, $a2, 0x50C0
    ctx->pc = 0x1b6d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20672));
    // 0x1b6d0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d10: 0x26c801bc  addiu       $t0, $s6, 0x1BC
    ctx->pc = 0x1b6d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 444));
    // 0x1b6d14: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6d14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d18: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6d1c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6D1Cu;
    SET_GPR_U32(ctx, 31, 0x1B6D24u);
    ctx->pc = 0x1B6D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D1Cu;
            // 0x1b6d20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D24u; }
        if (ctx->pc != 0x1B6D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D24u; }
        if (ctx->pc != 0x1B6D24u) { return; }
    }
    ctx->pc = 0x1B6D24u;
    // 0x1b6d24: 0xaed401bc  sw          $s4, 0x1BC($s6)
    ctx->pc = 0x1b6d24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 444), GPR_U32(ctx, 20));
    // 0x1b6d28: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6d28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6d2c: 0x24c650d0  addiu       $a2, $a2, 0x50D0
    ctx->pc = 0x1b6d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20688));
    // 0x1b6d30: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d34: 0x26c801c0  addiu       $t0, $s6, 0x1C0
    ctx->pc = 0x1b6d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 448));
    // 0x1b6d38: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6d38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d3c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6d40: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6D40u;
    SET_GPR_U32(ctx, 31, 0x1B6D48u);
    ctx->pc = 0x1B6D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D40u;
            // 0x1b6d44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D48u; }
        if (ctx->pc != 0x1B6D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D48u; }
        if (ctx->pc != 0x1B6D48u) { return; }
    }
    ctx->pc = 0x1B6D48u;
    // 0x1b6d48: 0xaec001c0  sw          $zero, 0x1C0($s6)
    ctx->pc = 0x1b6d48u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 448), GPR_U32(ctx, 0));
    // 0x1b6d4c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6d50: 0x24c650e8  addiu       $a2, $a2, 0x50E8
    ctx->pc = 0x1b6d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20712));
    // 0x1b6d54: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d58: 0x26c801c4  addiu       $t0, $s6, 0x1C4
    ctx->pc = 0x1b6d58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 452));
    // 0x1b6d5c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6d5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d60: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6d64: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6D64u;
    SET_GPR_U32(ctx, 31, 0x1B6D6Cu);
    ctx->pc = 0x1B6D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D64u;
            // 0x1b6d68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D6Cu; }
        if (ctx->pc != 0x1B6D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D6Cu; }
        if (ctx->pc != 0x1B6D6Cu) { return; }
    }
    ctx->pc = 0x1B6D6Cu;
    // 0x1b6d6c: 0xaec001c4  sw          $zero, 0x1C4($s6)
    ctx->pc = 0x1b6d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 452), GPR_U32(ctx, 0));
    // 0x1b6d70: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6d70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6d74: 0x24c650f8  addiu       $a2, $a2, 0x50F8
    ctx->pc = 0x1b6d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20728));
    // 0x1b6d78: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d7c: 0x26c801c8  addiu       $t0, $s6, 0x1C8
    ctx->pc = 0x1b6d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 456));
    // 0x1b6d80: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6d80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d84: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6d88: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6D88u;
    SET_GPR_U32(ctx, 31, 0x1B6D90u);
    ctx->pc = 0x1B6D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D88u;
            // 0x1b6d8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D90u; }
        if (ctx->pc != 0x1B6D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D90u; }
        if (ctx->pc != 0x1B6D90u) { return; }
    }
    ctx->pc = 0x1B6D90u;
    // 0x1b6d90: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b6d94: 0xaed401c8  sw          $s4, 0x1C8($s6)
    ctx->pc = 0x1b6d94u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 456), GPR_U32(ctx, 20));
    // 0x1b6d98: 0x68495127  ldl         $t1, 0x5127($v0)
    ctx->pc = 0x1b6d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20775); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1b6d9c: 0x6c495120  ldr         $t1, 0x5120($v0)
    ctx->pc = 0x1b6d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20768); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1b6da0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6da0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6da4: 0x24c65110  addiu       $a2, $a2, 0x5110
    ctx->pc = 0x1b6da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20752));
    // 0x1b6da8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6dac: 0x26c801cc  addiu       $t0, $s6, 0x1CC
    ctx->pc = 0x1b6dacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 460));
    // 0x1b6db0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6db4: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6DB4u;
    SET_GPR_U32(ctx, 31, 0x1B6DBCu);
    ctx->pc = 0x1B6DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DB4u;
            // 0x1b6db8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DBCu; }
        if (ctx->pc != 0x1B6DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DBCu; }
        if (ctx->pc != 0x1B6DBCu) { return; }
    }
    ctx->pc = 0x1B6DBCu;
    // 0x1b6dbc: 0xaec001cc  sw          $zero, 0x1CC($s6)
    ctx->pc = 0x1b6dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 460), GPR_U32(ctx, 0));
    // 0x1b6dc0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6dc4: 0x24c65128  addiu       $a2, $a2, 0x5128
    ctx->pc = 0x1b6dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20776));
    // 0x1b6dc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6dcc: 0x26c801d0  addiu       $t0, $s6, 0x1D0
    ctx->pc = 0x1b6dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 464));
    // 0x1b6dd0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6dd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6dd4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6dd8: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6DD8u;
    SET_GPR_U32(ctx, 31, 0x1B6DE0u);
    ctx->pc = 0x1B6DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DD8u;
            // 0x1b6ddc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DE0u; }
        if (ctx->pc != 0x1B6DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DE0u; }
        if (ctx->pc != 0x1B6DE0u) { return; }
    }
    ctx->pc = 0x1B6DE0u;
    // 0x1b6de0: 0xaec001d0  sw          $zero, 0x1D0($s6)
    ctx->pc = 0x1b6de0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 464), GPR_U32(ctx, 0));
    // 0x1b6de4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6de4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6de8: 0x24c65138  addiu       $a2, $a2, 0x5138
    ctx->pc = 0x1b6de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20792));
    // 0x1b6dec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6df0: 0x26c801d4  addiu       $t0, $s6, 0x1D4
    ctx->pc = 0x1b6df0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 468));
    // 0x1b6df4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6df4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6df8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6dfc: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6DFCu;
    SET_GPR_U32(ctx, 31, 0x1B6E04u);
    ctx->pc = 0x1B6E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DFCu;
            // 0x1b6e00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E04u; }
        if (ctx->pc != 0x1B6E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E04u; }
        if (ctx->pc != 0x1B6E04u) { return; }
    }
    ctx->pc = 0x1B6E04u;
    // 0x1b6e04: 0xaec001d4  sw          $zero, 0x1D4($s6)
    ctx->pc = 0x1b6e04u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 468), GPR_U32(ctx, 0));
    // 0x1b6e08: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6e08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6e0c: 0x24c65150  addiu       $a2, $a2, 0x5150
    ctx->pc = 0x1b6e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20816));
    // 0x1b6e10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e14: 0x26c801d8  addiu       $t0, $s6, 0x1D8
    ctx->pc = 0x1b6e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 472));
    // 0x1b6e18: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6e18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e1c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6e20: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6E20u;
    SET_GPR_U32(ctx, 31, 0x1B6E28u);
    ctx->pc = 0x1B6E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E20u;
            // 0x1b6e24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E28u; }
        if (ctx->pc != 0x1B6E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E28u; }
        if (ctx->pc != 0x1B6E28u) { return; }
    }
    ctx->pc = 0x1B6E28u;
    // 0x1b6e28: 0xaec001d8  sw          $zero, 0x1D8($s6)
    ctx->pc = 0x1b6e28u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 472), GPR_U32(ctx, 0));
    // 0x1b6e2c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6e30: 0x24c65160  addiu       $a2, $a2, 0x5160
    ctx->pc = 0x1b6e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20832));
    // 0x1b6e34: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e38: 0x26c801dc  addiu       $t0, $s6, 0x1DC
    ctx->pc = 0x1b6e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 476));
    // 0x1b6e3c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6e3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e40: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6e44: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6E44u;
    SET_GPR_U32(ctx, 31, 0x1B6E4Cu);
    ctx->pc = 0x1B6E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E44u;
            // 0x1b6e48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E4Cu; }
        if (ctx->pc != 0x1B6E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E4Cu; }
        if (ctx->pc != 0x1B6E4Cu) { return; }
    }
    ctx->pc = 0x1B6E4Cu;
    // 0x1b6e4c: 0xaec001dc  sw          $zero, 0x1DC($s6)
    ctx->pc = 0x1b6e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 476), GPR_U32(ctx, 0));
    // 0x1b6e50: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6e50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6e54: 0x24c65178  addiu       $a2, $a2, 0x5178
    ctx->pc = 0x1b6e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20856));
    // 0x1b6e58: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e5c: 0x26c801e0  addiu       $t0, $s6, 0x1E0
    ctx->pc = 0x1b6e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 480));
    // 0x1b6e60: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6e60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e64: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6e68: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6E68u;
    SET_GPR_U32(ctx, 31, 0x1B6E70u);
    ctx->pc = 0x1B6E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E68u;
            // 0x1b6e6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E70u; }
        if (ctx->pc != 0x1B6E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E70u; }
        if (ctx->pc != 0x1B6E70u) { return; }
    }
    ctx->pc = 0x1B6E70u;
    // 0x1b6e70: 0xaec001e0  sw          $zero, 0x1E0($s6)
    ctx->pc = 0x1b6e70u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 480), GPR_U32(ctx, 0));
    // 0x1b6e74: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6e74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6e78: 0x24c65190  addiu       $a2, $a2, 0x5190
    ctx->pc = 0x1b6e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20880));
    // 0x1b6e7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e80: 0x26c801e4  addiu       $t0, $s6, 0x1E4
    ctx->pc = 0x1b6e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 484));
    // 0x1b6e84: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6e84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e88: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6e8c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6E8Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E94u);
    ctx->pc = 0x1B6E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E8Cu;
            // 0x1b6e90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E94u; }
        if (ctx->pc != 0x1B6E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E94u; }
        if (ctx->pc != 0x1B6E94u) { return; }
    }
    ctx->pc = 0x1B6E94u;
    // 0x1b6e94: 0xaec001e4  sw          $zero, 0x1E4($s6)
    ctx->pc = 0x1b6e94u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 484), GPR_U32(ctx, 0));
    // 0x1b6e98: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6e98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6e9c: 0x24c651a8  addiu       $a2, $a2, 0x51A8
    ctx->pc = 0x1b6e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20904));
    // 0x1b6ea0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ea4: 0x26c801e8  addiu       $t0, $s6, 0x1E8
    ctx->pc = 0x1b6ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 488));
    // 0x1b6ea8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6ea8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6eac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6eb0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6EB0u;
    SET_GPR_U32(ctx, 31, 0x1B6EB8u);
    ctx->pc = 0x1B6EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6EB0u;
            // 0x1b6eb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6EB8u; }
        if (ctx->pc != 0x1B6EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6EB8u; }
        if (ctx->pc != 0x1B6EB8u) { return; }
    }
    ctx->pc = 0x1B6EB8u;
    // 0x1b6eb8: 0xaec001e8  sw          $zero, 0x1E8($s6)
    ctx->pc = 0x1b6eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 488), GPR_U32(ctx, 0));
    // 0x1b6ebc: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6ec0: 0x24c651b8  addiu       $a2, $a2, 0x51B8
    ctx->pc = 0x1b6ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20920));
    // 0x1b6ec4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ec8: 0x26c801ec  addiu       $t0, $s6, 0x1EC
    ctx->pc = 0x1b6ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 492));
    // 0x1b6ecc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6eccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ed0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6ed4: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6ED4u;
    SET_GPR_U32(ctx, 31, 0x1B6EDCu);
    ctx->pc = 0x1B6ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6ED4u;
            // 0x1b6ed8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6EDCu; }
        if (ctx->pc != 0x1B6EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6EDCu; }
        if (ctx->pc != 0x1B6EDCu) { return; }
    }
    ctx->pc = 0x1B6EDCu;
    // 0x1b6edc: 0xaec001ec  sw          $zero, 0x1EC($s6)
    ctx->pc = 0x1b6edcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 492), GPR_U32(ctx, 0));
    // 0x1b6ee0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6ee4: 0x24c651c8  addiu       $a2, $a2, 0x51C8
    ctx->pc = 0x1b6ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20936));
    // 0x1b6ee8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6eec: 0x26c801f0  addiu       $t0, $s6, 0x1F0
    ctx->pc = 0x1b6eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 496));
    // 0x1b6ef0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6ef0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ef4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6ef8: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6EF8u;
    SET_GPR_U32(ctx, 31, 0x1B6F00u);
    ctx->pc = 0x1B6EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6EF8u;
            // 0x1b6efc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F00u; }
        if (ctx->pc != 0x1B6F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F00u; }
        if (ctx->pc != 0x1B6F00u) { return; }
    }
    ctx->pc = 0x1B6F00u;
    // 0x1b6f00: 0xaec001f0  sw          $zero, 0x1F0($s6)
    ctx->pc = 0x1b6f00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 496), GPR_U32(ctx, 0));
    // 0x1b6f04: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6f08: 0x24c651d8  addiu       $a2, $a2, 0x51D8
    ctx->pc = 0x1b6f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20952));
    // 0x1b6f0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f10: 0x26c801f4  addiu       $t0, $s6, 0x1F4
    ctx->pc = 0x1b6f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 500));
    // 0x1b6f14: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6f14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f18: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6f1c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6F1Cu;
    SET_GPR_U32(ctx, 31, 0x1B6F24u);
    ctx->pc = 0x1B6F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F1Cu;
            // 0x1b6f20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F24u; }
        if (ctx->pc != 0x1B6F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F24u; }
        if (ctx->pc != 0x1B6F24u) { return; }
    }
    ctx->pc = 0x1B6F24u;
    // 0x1b6f24: 0xaec001f4  sw          $zero, 0x1F4($s6)
    ctx->pc = 0x1b6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 500), GPR_U32(ctx, 0));
    // 0x1b6f28: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6f28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6f2c: 0x24c651f0  addiu       $a2, $a2, 0x51F0
    ctx->pc = 0x1b6f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20976));
    // 0x1b6f30: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f34: 0x26c801f8  addiu       $t0, $s6, 0x1F8
    ctx->pc = 0x1b6f34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 504));
    // 0x1b6f38: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6f38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f3c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6f40: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6F40u;
    SET_GPR_U32(ctx, 31, 0x1B6F48u);
    ctx->pc = 0x1B6F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F40u;
            // 0x1b6f44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F48u; }
        if (ctx->pc != 0x1B6F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F48u; }
        if (ctx->pc != 0x1B6F48u) { return; }
    }
    ctx->pc = 0x1B6F48u;
    // 0x1b6f48: 0xaec001f8  sw          $zero, 0x1F8($s6)
    ctx->pc = 0x1b6f48u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 504), GPR_U32(ctx, 0));
    // 0x1b6f4c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6f50: 0x24c65200  addiu       $a2, $a2, 0x5200
    ctx->pc = 0x1b6f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20992));
    // 0x1b6f54: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f58: 0x26c801fc  addiu       $t0, $s6, 0x1FC
    ctx->pc = 0x1b6f58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 508));
    // 0x1b6f5c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6f5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f60: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6f64: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6F64u;
    SET_GPR_U32(ctx, 31, 0x1B6F6Cu);
    ctx->pc = 0x1B6F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F64u;
            // 0x1b6f68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F6Cu; }
        if (ctx->pc != 0x1B6F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F6Cu; }
        if (ctx->pc != 0x1B6F6Cu) { return; }
    }
    ctx->pc = 0x1B6F6Cu;
    // 0x1b6f6c: 0xaec001fc  sw          $zero, 0x1FC($s6)
    ctx->pc = 0x1b6f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 508), GPR_U32(ctx, 0));
    // 0x1b6f70: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6f70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6f74: 0x24c65218  addiu       $a2, $a2, 0x5218
    ctx->pc = 0x1b6f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21016));
    // 0x1b6f78: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f7c: 0x26c80200  addiu       $t0, $s6, 0x200
    ctx->pc = 0x1b6f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 512));
    // 0x1b6f80: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6f80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f84: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6f88: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6F88u;
    SET_GPR_U32(ctx, 31, 0x1B6F90u);
    ctx->pc = 0x1B6F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F88u;
            // 0x1b6f8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F90u; }
        if (ctx->pc != 0x1B6F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F90u; }
        if (ctx->pc != 0x1B6F90u) { return; }
    }
    ctx->pc = 0x1B6F90u;
    // 0x1b6f90: 0xaec00200  sw          $zero, 0x200($s6)
    ctx->pc = 0x1b6f90u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 512), GPR_U32(ctx, 0));
    // 0x1b6f94: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6f94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6f98: 0x24c65228  addiu       $a2, $a2, 0x5228
    ctx->pc = 0x1b6f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21032));
    // 0x1b6f9c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6f9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fa0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fa4: 0x26c80204  addiu       $t0, $s6, 0x204
    ctx->pc = 0x1b6fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 516));
    // 0x1b6fa8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6fac: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6FACu;
    SET_GPR_U32(ctx, 31, 0x1B6FB4u);
    ctx->pc = 0x1B6FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6FACu;
            // 0x1b6fb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FB4u; }
        if (ctx->pc != 0x1B6FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FB4u; }
        if (ctx->pc != 0x1B6FB4u) { return; }
    }
    ctx->pc = 0x1B6FB4u;
    // 0x1b6fb4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b6fb8: 0xaed20204  sw          $s2, 0x204($s6)
    ctx->pc = 0x1b6fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 516), GPR_U32(ctx, 18));
    // 0x1b6fbc: 0x68504877  ldl         $s0, 0x4877($v0)
    ctx->pc = 0x1b6fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 18551); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x1b6fc0: 0x6c504870  ldr         $s0, 0x4870($v0)
    ctx->pc = 0x1b6fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 18544); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x1b6fc4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6fc8: 0x24c65240  addiu       $a2, $a2, 0x5240
    ctx->pc = 0x1b6fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21056));
    // 0x1b6fcc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fd0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6fd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fd4: 0x26c80208  addiu       $t0, $s6, 0x208
    ctx->pc = 0x1b6fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 520));
    // 0x1b6fd8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6fdc: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B6FDCu;
    SET_GPR_U32(ctx, 31, 0x1B6FE4u);
    ctx->pc = 0x1B6FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6FDCu;
            // 0x1b6fe0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FE4u; }
        if (ctx->pc != 0x1B6FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FE4u; }
        if (ctx->pc != 0x1B6FE4u) { return; }
    }
    ctx->pc = 0x1B6FE4u;
    // 0x1b6fe4: 0xaed20208  sw          $s2, 0x208($s6)
    ctx->pc = 0x1b6fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 520), GPR_U32(ctx, 18));
    // 0x1b6fe8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b6fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b6fec: 0x24c65258  addiu       $a2, $a2, 0x5258
    ctx->pc = 0x1b6fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21080));
    // 0x1b6ff0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6ff0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ff4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b6ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ff8: 0x26c8020c  addiu       $t0, $s6, 0x20C
    ctx->pc = 0x1b6ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 524));
    // 0x1b6ffc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7000: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7000u;
    SET_GPR_U32(ctx, 31, 0x1B7008u);
    ctx->pc = 0x1B7004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7000u;
            // 0x1b7004: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7008u; }
        if (ctx->pc != 0x1B7008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7008u; }
        if (ctx->pc != 0x1B7008u) { return; }
    }
    ctx->pc = 0x1B7008u;
    // 0x1b7008: 0xaed2020c  sw          $s2, 0x20C($s6)
    ctx->pc = 0x1b7008u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 524), GPR_U32(ctx, 18));
    // 0x1b700c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b700cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7010: 0x24c65270  addiu       $a2, $a2, 0x5270
    ctx->pc = 0x1b7010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21104));
    // 0x1b7014: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b7014u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7018: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b701c: 0x26c80210  addiu       $t0, $s6, 0x210
    ctx->pc = 0x1b701cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 528));
    // 0x1b7020: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7024: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7024u;
    SET_GPR_U32(ctx, 31, 0x1B702Cu);
    ctx->pc = 0x1B7028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7024u;
            // 0x1b7028: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B702Cu; }
        if (ctx->pc != 0x1B702Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B702Cu; }
        if (ctx->pc != 0x1B702Cu) { return; }
    }
    ctx->pc = 0x1B702Cu;
    // 0x1b702c: 0xaed20210  sw          $s2, 0x210($s6)
    ctx->pc = 0x1b702cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 528), GPR_U32(ctx, 18));
    // 0x1b7030: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7034: 0x24c65280  addiu       $a2, $a2, 0x5280
    ctx->pc = 0x1b7034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21120));
    // 0x1b7038: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b7038u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b703c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b703cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7040: 0x26c80214  addiu       $t0, $s6, 0x214
    ctx->pc = 0x1b7040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 532));
    // 0x1b7044: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7048: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7048u;
    SET_GPR_U32(ctx, 31, 0x1B7050u);
    ctx->pc = 0x1B704Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7048u;
            // 0x1b704c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7050u; }
        if (ctx->pc != 0x1B7050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7050u; }
        if (ctx->pc != 0x1B7050u) { return; }
    }
    ctx->pc = 0x1B7050u;
    // 0x1b7050: 0xaed20214  sw          $s2, 0x214($s6)
    ctx->pc = 0x1b7050u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 532), GPR_U32(ctx, 18));
    // 0x1b7054: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7058: 0x24c65298  addiu       $a2, $a2, 0x5298
    ctx->pc = 0x1b7058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21144));
    // 0x1b705c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b705cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7060: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7064: 0x26c80218  addiu       $t0, $s6, 0x218
    ctx->pc = 0x1b7064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 536));
    // 0x1b7068: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b706c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B706Cu;
    SET_GPR_U32(ctx, 31, 0x1B7074u);
    ctx->pc = 0x1B7070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B706Cu;
            // 0x1b7070: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7074u; }
        if (ctx->pc != 0x1B7074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7074u; }
        if (ctx->pc != 0x1B7074u) { return; }
    }
    ctx->pc = 0x1B7074u;
    // 0x1b7074: 0xaed20218  sw          $s2, 0x218($s6)
    ctx->pc = 0x1b7074u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 536), GPR_U32(ctx, 18));
    // 0x1b7078: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7078u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b707c: 0x24c652b0  addiu       $a2, $a2, 0x52B0
    ctx->pc = 0x1b707cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21168));
    // 0x1b7080: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b7080u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7084: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7088: 0x26c8021c  addiu       $t0, $s6, 0x21C
    ctx->pc = 0x1b7088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 540));
    // 0x1b708c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b708cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7090: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7090u;
    SET_GPR_U32(ctx, 31, 0x1B7098u);
    ctx->pc = 0x1B7094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7090u;
            // 0x1b7094: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7098u; }
        if (ctx->pc != 0x1B7098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7098u; }
        if (ctx->pc != 0x1B7098u) { return; }
    }
    ctx->pc = 0x1B7098u;
    // 0x1b7098: 0xaed2021c  sw          $s2, 0x21C($s6)
    ctx->pc = 0x1b7098u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 540), GPR_U32(ctx, 18));
    // 0x1b709c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b709cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b70a0: 0x24c652c0  addiu       $a2, $a2, 0x52C0
    ctx->pc = 0x1b70a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21184));
    // 0x1b70a4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b70a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b70a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70ac: 0x26c80220  addiu       $t0, $s6, 0x220
    ctx->pc = 0x1b70acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 544));
    // 0x1b70b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b70b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b70b4: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B70B4u;
    SET_GPR_U32(ctx, 31, 0x1B70BCu);
    ctx->pc = 0x1B70B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B70B4u;
            // 0x1b70b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B70BCu; }
        if (ctx->pc != 0x1B70BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B70BCu; }
        if (ctx->pc != 0x1B70BCu) { return; }
    }
    ctx->pc = 0x1B70BCu;
    // 0x1b70bc: 0xaed20220  sw          $s2, 0x220($s6)
    ctx->pc = 0x1b70bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 544), GPR_U32(ctx, 18));
    // 0x1b70c0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b70c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b70c4: 0x24c652d8  addiu       $a2, $a2, 0x52D8
    ctx->pc = 0x1b70c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21208));
    // 0x1b70c8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b70c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b70ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70d0: 0x26c80224  addiu       $t0, $s6, 0x224
    ctx->pc = 0x1b70d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 548));
    // 0x1b70d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b70d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b70d8: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B70D8u;
    SET_GPR_U32(ctx, 31, 0x1B70E0u);
    ctx->pc = 0x1B70DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B70D8u;
            // 0x1b70dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B70E0u; }
        if (ctx->pc != 0x1B70E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B70E0u; }
        if (ctx->pc != 0x1B70E0u) { return; }
    }
    ctx->pc = 0x1B70E0u;
    // 0x1b70e0: 0xaed20224  sw          $s2, 0x224($s6)
    ctx->pc = 0x1b70e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 548), GPR_U32(ctx, 18));
    // 0x1b70e4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b70e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b70e8: 0x24c652e8  addiu       $a2, $a2, 0x52E8
    ctx->pc = 0x1b70e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21224));
    // 0x1b70ec: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b70ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b70f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70f4: 0x26c80228  addiu       $t0, $s6, 0x228
    ctx->pc = 0x1b70f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 552));
    // 0x1b70f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b70f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b70fc: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B70FCu;
    SET_GPR_U32(ctx, 31, 0x1B7104u);
    ctx->pc = 0x1B7100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B70FCu;
            // 0x1b7100: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7104u; }
        if (ctx->pc != 0x1B7104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7104u; }
        if (ctx->pc != 0x1B7104u) { return; }
    }
    ctx->pc = 0x1B7104u;
    // 0x1b7104: 0xaed20228  sw          $s2, 0x228($s6)
    ctx->pc = 0x1b7104u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 552), GPR_U32(ctx, 18));
    // 0x1b7108: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b710c: 0x24c65300  addiu       $a2, $a2, 0x5300
    ctx->pc = 0x1b710cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21248));
    // 0x1b7110: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b7110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7114: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7118: 0x26c8022c  addiu       $t0, $s6, 0x22C
    ctx->pc = 0x1b7118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 556));
    // 0x1b711c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b711cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7120: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7120u;
    SET_GPR_U32(ctx, 31, 0x1B7128u);
    ctx->pc = 0x1B7124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7120u;
            // 0x1b7124: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7128u; }
        if (ctx->pc != 0x1B7128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7128u; }
        if (ctx->pc != 0x1B7128u) { return; }
    }
    ctx->pc = 0x1B7128u;
    // 0x1b7128: 0xaed2022c  sw          $s2, 0x22C($s6)
    ctx->pc = 0x1b7128u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 556), GPR_U32(ctx, 18));
    // 0x1b712c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b712cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7130: 0x24c65318  addiu       $a2, $a2, 0x5318
    ctx->pc = 0x1b7130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21272));
    // 0x1b7134: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b7134u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7138: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b713c: 0x26c80230  addiu       $t0, $s6, 0x230
    ctx->pc = 0x1b713cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 560));
    // 0x1b7140: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7144: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7144u;
    SET_GPR_U32(ctx, 31, 0x1B714Cu);
    ctx->pc = 0x1B7148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7144u;
            // 0x1b7148: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B714Cu; }
        if (ctx->pc != 0x1B714Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B714Cu; }
        if (ctx->pc != 0x1B714Cu) { return; }
    }
    ctx->pc = 0x1B714Cu;
    // 0x1b714c: 0xaed20230  sw          $s2, 0x230($s6)
    ctx->pc = 0x1b714cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 560), GPR_U32(ctx, 18));
    // 0x1b7150: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7150u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7154: 0x24c65330  addiu       $a2, $a2, 0x5330
    ctx->pc = 0x1b7154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21296));
    // 0x1b7158: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b7158u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b715c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b715cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7160: 0x26c80234  addiu       $t0, $s6, 0x234
    ctx->pc = 0x1b7160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 564));
    // 0x1b7164: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7168: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7168u;
    SET_GPR_U32(ctx, 31, 0x1B7170u);
    ctx->pc = 0x1B716Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7168u;
            // 0x1b716c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7170u; }
        if (ctx->pc != 0x1B7170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7170u; }
        if (ctx->pc != 0x1B7170u) { return; }
    }
    ctx->pc = 0x1B7170u;
    // 0x1b7170: 0xaed20234  sw          $s2, 0x234($s6)
    ctx->pc = 0x1b7170u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 564), GPR_U32(ctx, 18));
    // 0x1b7174: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7178: 0x24c65348  addiu       $a2, $a2, 0x5348
    ctx->pc = 0x1b7178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21320));
    // 0x1b717c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b717cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7180: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7184: 0x26c80238  addiu       $t0, $s6, 0x238
    ctx->pc = 0x1b7184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 568));
    // 0x1b7188: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b718c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B718Cu;
    SET_GPR_U32(ctx, 31, 0x1B7194u);
    ctx->pc = 0x1B7190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B718Cu;
            // 0x1b7190: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7194u; }
        if (ctx->pc != 0x1B7194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7194u; }
        if (ctx->pc != 0x1B7194u) { return; }
    }
    ctx->pc = 0x1B7194u;
    // 0x1b7194: 0xaed20238  sw          $s2, 0x238($s6)
    ctx->pc = 0x1b7194u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 568), GPR_U32(ctx, 18));
    // 0x1b7198: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b719c: 0x24c65360  addiu       $a2, $a2, 0x5360
    ctx->pc = 0x1b719cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21344));
    // 0x1b71a0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b71a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b71a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71a8: 0x26c8023c  addiu       $t0, $s6, 0x23C
    ctx->pc = 0x1b71a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 572));
    // 0x1b71ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b71acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b71b0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B71B0u;
    SET_GPR_U32(ctx, 31, 0x1B71B8u);
    ctx->pc = 0x1B71B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B71B0u;
            // 0x1b71b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B71B8u; }
        if (ctx->pc != 0x1B71B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B71B8u; }
        if (ctx->pc != 0x1B71B8u) { return; }
    }
    ctx->pc = 0x1B71B8u;
    // 0x1b71b8: 0xaed2023c  sw          $s2, 0x23C($s6)
    ctx->pc = 0x1b71b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 572), GPR_U32(ctx, 18));
    // 0x1b71bc: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b71bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b71c0: 0x24c65378  addiu       $a2, $a2, 0x5378
    ctx->pc = 0x1b71c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21368));
    // 0x1b71c4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b71c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b71c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71cc: 0x26c80240  addiu       $t0, $s6, 0x240
    ctx->pc = 0x1b71ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 576));
    // 0x1b71d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b71d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b71d4: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B71D4u;
    SET_GPR_U32(ctx, 31, 0x1B71DCu);
    ctx->pc = 0x1B71D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B71D4u;
            // 0x1b71d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B71DCu; }
        if (ctx->pc != 0x1B71DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B71DCu; }
        if (ctx->pc != 0x1B71DCu) { return; }
    }
    ctx->pc = 0x1B71DCu;
    // 0x1b71dc: 0xaed20240  sw          $s2, 0x240($s6)
    ctx->pc = 0x1b71dcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 576), GPR_U32(ctx, 18));
    // 0x1b71e0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b71e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b71e4: 0x24c65390  addiu       $a2, $a2, 0x5390
    ctx->pc = 0x1b71e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21392));
    // 0x1b71e8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b71e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b71ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71f0: 0x26c80244  addiu       $t0, $s6, 0x244
    ctx->pc = 0x1b71f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 580));
    // 0x1b71f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b71f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b71f8: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B71F8u;
    SET_GPR_U32(ctx, 31, 0x1B7200u);
    ctx->pc = 0x1B71FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B71F8u;
            // 0x1b71fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7200u; }
        if (ctx->pc != 0x1B7200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7200u; }
        if (ctx->pc != 0x1B7200u) { return; }
    }
    ctx->pc = 0x1B7200u;
    // 0x1b7200: 0xaed20244  sw          $s2, 0x244($s6)
    ctx->pc = 0x1b7200u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 580), GPR_U32(ctx, 18));
    // 0x1b7204: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7204u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7208: 0x24c653a0  addiu       $a2, $a2, 0x53A0
    ctx->pc = 0x1b7208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21408));
    // 0x1b720c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b720cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7210: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7214: 0x26c80248  addiu       $t0, $s6, 0x248
    ctx->pc = 0x1b7214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 584));
    // 0x1b7218: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b721c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B721Cu;
    SET_GPR_U32(ctx, 31, 0x1B7224u);
    ctx->pc = 0x1B7220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B721Cu;
            // 0x1b7220: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7224u; }
        if (ctx->pc != 0x1B7224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7224u; }
        if (ctx->pc != 0x1B7224u) { return; }
    }
    ctx->pc = 0x1B7224u;
    // 0x1b7224: 0xaed20248  sw          $s2, 0x248($s6)
    ctx->pc = 0x1b7224u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 584), GPR_U32(ctx, 18));
    // 0x1b7228: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7228u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b722c: 0x24c653b0  addiu       $a2, $a2, 0x53B0
    ctx->pc = 0x1b722cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21424));
    // 0x1b7230: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b7230u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7234: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7238: 0x26c8024c  addiu       $t0, $s6, 0x24C
    ctx->pc = 0x1b7238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 588));
    // 0x1b723c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b723cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7240: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7240u;
    SET_GPR_U32(ctx, 31, 0x1B7248u);
    ctx->pc = 0x1B7244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7240u;
            // 0x1b7244: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7248u; }
        if (ctx->pc != 0x1B7248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7248u; }
        if (ctx->pc != 0x1B7248u) { return; }
    }
    ctx->pc = 0x1B7248u;
    // 0x1b7248: 0xaed2024c  sw          $s2, 0x24C($s6)
    ctx->pc = 0x1b7248u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 588), GPR_U32(ctx, 18));
    // 0x1b724c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b724cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7250: 0x24c653c0  addiu       $a2, $a2, 0x53C0
    ctx->pc = 0x1b7250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21440));
    // 0x1b7254: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b7254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7258: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b725c: 0x26c80250  addiu       $t0, $s6, 0x250
    ctx->pc = 0x1b725cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 592));
    // 0x1b7260: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7264: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7264u;
    SET_GPR_U32(ctx, 31, 0x1B726Cu);
    ctx->pc = 0x1B7268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7264u;
            // 0x1b7268: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B726Cu; }
        if (ctx->pc != 0x1B726Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B726Cu; }
        if (ctx->pc != 0x1B726Cu) { return; }
    }
    ctx->pc = 0x1B726Cu;
    // 0x1b726c: 0xaed20250  sw          $s2, 0x250($s6)
    ctx->pc = 0x1b726cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 592), GPR_U32(ctx, 18));
    // 0x1b7270: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7270u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7274: 0x24c653d8  addiu       $a2, $a2, 0x53D8
    ctx->pc = 0x1b7274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21464));
    // 0x1b7278: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b7278u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b727c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b727cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7280: 0x26c80254  addiu       $t0, $s6, 0x254
    ctx->pc = 0x1b7280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 596));
    // 0x1b7284: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7288: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7288u;
    SET_GPR_U32(ctx, 31, 0x1B7290u);
    ctx->pc = 0x1B728Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7288u;
            // 0x1b728c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7290u; }
        if (ctx->pc != 0x1B7290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7290u; }
        if (ctx->pc != 0x1B7290u) { return; }
    }
    ctx->pc = 0x1B7290u;
    // 0x1b7290: 0xaed20254  sw          $s2, 0x254($s6)
    ctx->pc = 0x1b7290u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 596), GPR_U32(ctx, 18));
    // 0x1b7294: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7294u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7298: 0x24c653e8  addiu       $a2, $a2, 0x53E8
    ctx->pc = 0x1b7298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21480));
    // 0x1b729c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b729cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b72a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72a4: 0x26c80258  addiu       $t0, $s6, 0x258
    ctx->pc = 0x1b72a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 600));
    // 0x1b72a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b72a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b72ac: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B72ACu;
    SET_GPR_U32(ctx, 31, 0x1B72B4u);
    ctx->pc = 0x1B72B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B72ACu;
            // 0x1b72b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B72B4u; }
        if (ctx->pc != 0x1B72B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B72B4u; }
        if (ctx->pc != 0x1B72B4u) { return; }
    }
    ctx->pc = 0x1B72B4u;
    // 0x1b72b4: 0xaed20258  sw          $s2, 0x258($s6)
    ctx->pc = 0x1b72b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 600), GPR_U32(ctx, 18));
    // 0x1b72b8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b72b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b72bc: 0x24c653f8  addiu       $a2, $a2, 0x53F8
    ctx->pc = 0x1b72bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21496));
    // 0x1b72c0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b72c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b72c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72c8: 0x26c8025c  addiu       $t0, $s6, 0x25C
    ctx->pc = 0x1b72c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 604));
    // 0x1b72cc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b72ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b72d0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B72D0u;
    SET_GPR_U32(ctx, 31, 0x1B72D8u);
    ctx->pc = 0x1B72D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B72D0u;
            // 0x1b72d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B72D8u; }
        if (ctx->pc != 0x1B72D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B72D8u; }
        if (ctx->pc != 0x1B72D8u) { return; }
    }
    ctx->pc = 0x1B72D8u;
    // 0x1b72d8: 0xaed2025c  sw          $s2, 0x25C($s6)
    ctx->pc = 0x1b72d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 604), GPR_U32(ctx, 18));
    // 0x1b72dc: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b72dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b72e0: 0x24c65408  addiu       $a2, $a2, 0x5408
    ctx->pc = 0x1b72e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21512));
    // 0x1b72e4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b72e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b72e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72ec: 0x26c80260  addiu       $t0, $s6, 0x260
    ctx->pc = 0x1b72ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 608));
    // 0x1b72f0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b72f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b72f4: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B72F4u;
    SET_GPR_U32(ctx, 31, 0x1B72FCu);
    ctx->pc = 0x1B72F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B72F4u;
            // 0x1b72f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B72FCu; }
        if (ctx->pc != 0x1B72FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B72FCu; }
        if (ctx->pc != 0x1B72FCu) { return; }
    }
    ctx->pc = 0x1B72FCu;
    // 0x1b72fc: 0xaed20260  sw          $s2, 0x260($s6)
    ctx->pc = 0x1b72fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 608), GPR_U32(ctx, 18));
    // 0x1b7300: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7300u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7304: 0x24c65420  addiu       $a2, $a2, 0x5420
    ctx->pc = 0x1b7304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21536));
    // 0x1b7308: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b7308u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b730c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b730cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7310: 0x26c80264  addiu       $t0, $s6, 0x264
    ctx->pc = 0x1b7310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 612));
    // 0x1b7314: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7318: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7318u;
    SET_GPR_U32(ctx, 31, 0x1B7320u);
    ctx->pc = 0x1B731Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7318u;
            // 0x1b731c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7320u; }
        if (ctx->pc != 0x1B7320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7320u; }
        if (ctx->pc != 0x1B7320u) { return; }
    }
    ctx->pc = 0x1B7320u;
    // 0x1b7320: 0xaed20264  sw          $s2, 0x264($s6)
    ctx->pc = 0x1b7320u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 612), GPR_U32(ctx, 18));
    // 0x1b7324: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7324u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7328: 0x24c65438  addiu       $a2, $a2, 0x5438
    ctx->pc = 0x1b7328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21560));
    // 0x1b732c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b732cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7330: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7334: 0x26c80268  addiu       $t0, $s6, 0x268
    ctx->pc = 0x1b7334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 616));
    // 0x1b7338: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b733c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B733Cu;
    SET_GPR_U32(ctx, 31, 0x1B7344u);
    ctx->pc = 0x1B7340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B733Cu;
            // 0x1b7340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7344u; }
        if (ctx->pc != 0x1B7344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7344u; }
        if (ctx->pc != 0x1B7344u) { return; }
    }
    ctx->pc = 0x1B7344u;
    // 0x1b7344: 0xaed20268  sw          $s2, 0x268($s6)
    ctx->pc = 0x1b7344u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 616), GPR_U32(ctx, 18));
    // 0x1b7348: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b734c: 0x24c65448  addiu       $a2, $a2, 0x5448
    ctx->pc = 0x1b734cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21576));
    // 0x1b7350: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b7350u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7354: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7358: 0x26c8026c  addiu       $t0, $s6, 0x26C
    ctx->pc = 0x1b7358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 620));
    // 0x1b735c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b735cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7360: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7360u;
    SET_GPR_U32(ctx, 31, 0x1B7368u);
    ctx->pc = 0x1B7364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7360u;
            // 0x1b7364: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7368u; }
        if (ctx->pc != 0x1B7368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7368u; }
        if (ctx->pc != 0x1B7368u) { return; }
    }
    ctx->pc = 0x1B7368u;
    // 0x1b7368: 0xaed2026c  sw          $s2, 0x26C($s6)
    ctx->pc = 0x1b7368u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 620), GPR_U32(ctx, 18));
    // 0x1b736c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b736cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7370: 0x24c65460  addiu       $a2, $a2, 0x5460
    ctx->pc = 0x1b7370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21600));
    // 0x1b7374: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b7374u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7378: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b737c: 0x26c80270  addiu       $t0, $s6, 0x270
    ctx->pc = 0x1b737cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 624));
    // 0x1b7380: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7384: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7384u;
    SET_GPR_U32(ctx, 31, 0x1B738Cu);
    ctx->pc = 0x1B7388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7384u;
            // 0x1b7388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B738Cu; }
        if (ctx->pc != 0x1B738Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B738Cu; }
        if (ctx->pc != 0x1B738Cu) { return; }
    }
    ctx->pc = 0x1B738Cu;
    // 0x1b738c: 0xaed20270  sw          $s2, 0x270($s6)
    ctx->pc = 0x1b738cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 624), GPR_U32(ctx, 18));
    // 0x1b7390: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7394: 0x24c65478  addiu       $a2, $a2, 0x5478
    ctx->pc = 0x1b7394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21624));
    // 0x1b7398: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b7398u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b739c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b739cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b73a0: 0x26c80274  addiu       $t0, $s6, 0x274
    ctx->pc = 0x1b73a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 628));
    // 0x1b73a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b73a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b73a8: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B73A8u;
    SET_GPR_U32(ctx, 31, 0x1B73B0u);
    ctx->pc = 0x1B73ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B73A8u;
            // 0x1b73ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B73B0u; }
        if (ctx->pc != 0x1B73B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B73B0u; }
        if (ctx->pc != 0x1B73B0u) { return; }
    }
    ctx->pc = 0x1B73B0u;
    // 0x1b73b0: 0xaed20274  sw          $s2, 0x274($s6)
    ctx->pc = 0x1b73b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 628), GPR_U32(ctx, 18));
    // 0x1b73b4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b73b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b73b8: 0x24c65490  addiu       $a2, $a2, 0x5490
    ctx->pc = 0x1b73b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21648));
    // 0x1b73bc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b73bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b73c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b73c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b73c4: 0x26c80278  addiu       $t0, $s6, 0x278
    ctx->pc = 0x1b73c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 632));
    // 0x1b73c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b73c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b73cc: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B73CCu;
    SET_GPR_U32(ctx, 31, 0x1B73D4u);
    ctx->pc = 0x1B73D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B73CCu;
            // 0x1b73d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B73D4u; }
        if (ctx->pc != 0x1B73D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B73D4u; }
        if (ctx->pc != 0x1B73D4u) { return; }
    }
    ctx->pc = 0x1B73D4u;
    // 0x1b73d4: 0xaec00278  sw          $zero, 0x278($s6)
    ctx->pc = 0x1b73d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 632), GPR_U32(ctx, 0));
    // 0x1b73d8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b73d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b73dc: 0x24c654a0  addiu       $a2, $a2, 0x54A0
    ctx->pc = 0x1b73dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21664));
    // 0x1b73e0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b73e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b73e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b73e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b73e8: 0x26c8027c  addiu       $t0, $s6, 0x27C
    ctx->pc = 0x1b73e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 636));
    // 0x1b73ec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b73ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b73f0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B73F0u;
    SET_GPR_U32(ctx, 31, 0x1B73F8u);
    ctx->pc = 0x1B73F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B73F0u;
            // 0x1b73f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B73F8u; }
        if (ctx->pc != 0x1B73F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B73F8u; }
        if (ctx->pc != 0x1B73F8u) { return; }
    }
    ctx->pc = 0x1B73F8u;
    // 0x1b73f8: 0xaec0027c  sw          $zero, 0x27C($s6)
    ctx->pc = 0x1b73f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 636), GPR_U32(ctx, 0));
    // 0x1b73fc: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b73fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7400: 0x24c654a8  addiu       $a2, $a2, 0x54A8
    ctx->pc = 0x1b7400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21672));
    // 0x1b7404: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b7404u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7408: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b740c: 0x26c80280  addiu       $t0, $s6, 0x280
    ctx->pc = 0x1b740cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 640));
    // 0x1b7410: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7414: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7414u;
    SET_GPR_U32(ctx, 31, 0x1B741Cu);
    ctx->pc = 0x1B7418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7414u;
            // 0x1b7418: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B741Cu; }
        if (ctx->pc != 0x1B741Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B741Cu; }
        if (ctx->pc != 0x1B741Cu) { return; }
    }
    ctx->pc = 0x1B741Cu;
    // 0x1b741c: 0xaec00280  sw          $zero, 0x280($s6)
    ctx->pc = 0x1b741cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 640), GPR_U32(ctx, 0));
    // 0x1b7420: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7420u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7424: 0x24c654b8  addiu       $a2, $a2, 0x54B8
    ctx->pc = 0x1b7424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21688));
    // 0x1b7428: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b7428u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b742c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b742cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7430: 0x26c80284  addiu       $t0, $s6, 0x284
    ctx->pc = 0x1b7430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 644));
    // 0x1b7434: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7438: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7438u;
    SET_GPR_U32(ctx, 31, 0x1B7440u);
    ctx->pc = 0x1B743Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7438u;
            // 0x1b743c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7440u; }
        if (ctx->pc != 0x1B7440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7440u; }
        if (ctx->pc != 0x1B7440u) { return; }
    }
    ctx->pc = 0x1B7440u;
    // 0x1b7440: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b7440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b7444: 0xaec00284  sw          $zero, 0x284($s6)
    ctx->pc = 0x1b7444u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 644), GPR_U32(ctx, 0));
    // 0x1b7448: 0x684954d7  ldl         $t1, 0x54D7($v0)
    ctx->pc = 0x1b7448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21719); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1b744c: 0x6c4954d0  ldr         $t1, 0x54D0($v0)
    ctx->pc = 0x1b744cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21712); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1b7450: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7454: 0x24c654c0  addiu       $a2, $a2, 0x54C0
    ctx->pc = 0x1b7454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21696));
    // 0x1b7458: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b745c: 0x26c80288  addiu       $t0, $s6, 0x288
    ctx->pc = 0x1b745cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 648));
    // 0x1b7460: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7464: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7464u;
    SET_GPR_U32(ctx, 31, 0x1B746Cu);
    ctx->pc = 0x1B7468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7464u;
            // 0x1b7468: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B746Cu; }
        if (ctx->pc != 0x1B746Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B746Cu; }
        if (ctx->pc != 0x1B746Cu) { return; }
    }
    ctx->pc = 0x1B746Cu;
    // 0x1b746c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b746cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b7470: 0xaec00288  sw          $zero, 0x288($s6)
    ctx->pc = 0x1b7470u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 648), GPR_U32(ctx, 0));
    // 0x1b7474: 0x684954f7  ldl         $t1, 0x54F7($v0)
    ctx->pc = 0x1b7474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21751); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1b7478: 0x6c4954f0  ldr         $t1, 0x54F0($v0)
    ctx->pc = 0x1b7478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21744); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1b747c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b747cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7480: 0x24c654d8  addiu       $a2, $a2, 0x54D8
    ctx->pc = 0x1b7480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21720));
    // 0x1b7484: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7488: 0x26c8028c  addiu       $t0, $s6, 0x28C
    ctx->pc = 0x1b7488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 652));
    // 0x1b748c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b748cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7490: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7490u;
    SET_GPR_U32(ctx, 31, 0x1B7498u);
    ctx->pc = 0x1B7494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7490u;
            // 0x1b7494: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7498u; }
        if (ctx->pc != 0x1B7498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7498u; }
        if (ctx->pc != 0x1B7498u) { return; }
    }
    ctx->pc = 0x1B7498u;
    // 0x1b7498: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b7498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b749c: 0xaec0028c  sw          $zero, 0x28C($s6)
    ctx->pc = 0x1b749cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 652), GPR_U32(ctx, 0));
    // 0x1b74a0: 0x6850550f  ldl         $s0, 0x550F($v0)
    ctx->pc = 0x1b74a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21775); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x1b74a4: 0x6c505508  ldr         $s0, 0x5508($v0)
    ctx->pc = 0x1b74a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21768); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x1b74a8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b74a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b74ac: 0x24c654f8  addiu       $a2, $a2, 0x54F8
    ctx->pc = 0x1b74acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21752));
    // 0x1b74b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b74b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b74b4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b74b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b74b8: 0x26c80290  addiu       $t0, $s6, 0x290
    ctx->pc = 0x1b74b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 656));
    // 0x1b74bc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b74bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b74c0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B74C0u;
    SET_GPR_U32(ctx, 31, 0x1B74C8u);
    ctx->pc = 0x1B74C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B74C0u;
            // 0x1b74c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74C8u; }
        if (ctx->pc != 0x1B74C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74C8u; }
        if (ctx->pc != 0x1B74C8u) { return; }
    }
    ctx->pc = 0x1B74C8u;
    // 0x1b74c8: 0xaed50290  sw          $s5, 0x290($s6)
    ctx->pc = 0x1b74c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 656), GPR_U32(ctx, 21));
    // 0x1b74cc: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b74ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b74d0: 0x24c65510  addiu       $a2, $a2, 0x5510
    ctx->pc = 0x1b74d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21776));
    // 0x1b74d4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b74d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b74d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b74d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b74dc: 0x26c80294  addiu       $t0, $s6, 0x294
    ctx->pc = 0x1b74dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 660));
    // 0x1b74e0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b74e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b74e4: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B74E4u;
    SET_GPR_U32(ctx, 31, 0x1B74ECu);
    ctx->pc = 0x1B74E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B74E4u;
            // 0x1b74e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74ECu; }
        if (ctx->pc != 0x1B74ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74ECu; }
        if (ctx->pc != 0x1B74ECu) { return; }
    }
    ctx->pc = 0x1B74ECu;
    // 0x1b74ec: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b74ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b74f0: 0xaed50294  sw          $s5, 0x294($s6)
    ctx->pc = 0x1b74f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 660), GPR_U32(ctx, 21));
    // 0x1b74f4: 0x68495537  ldl         $t1, 0x5537($v0)
    ctx->pc = 0x1b74f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21815); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1b74f8: 0x6c495530  ldr         $t1, 0x5530($v0)
    ctx->pc = 0x1b74f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21808); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1b74fc: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b74fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7500: 0x24c65520  addiu       $a2, $a2, 0x5520
    ctx->pc = 0x1b7500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21792));
    // 0x1b7504: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7508: 0x26c80298  addiu       $t0, $s6, 0x298
    ctx->pc = 0x1b7508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 664));
    // 0x1b750c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b750cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7510: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7510u;
    SET_GPR_U32(ctx, 31, 0x1B7518u);
    ctx->pc = 0x1B7514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7510u;
            // 0x1b7514: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7518u; }
        if (ctx->pc != 0x1B7518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7518u; }
        if (ctx->pc != 0x1B7518u) { return; }
    }
    ctx->pc = 0x1B7518u;
    // 0x1b7518: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b7518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b751c: 0xaed40298  sw          $s4, 0x298($s6)
    ctx->pc = 0x1b751cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 664), GPR_U32(ctx, 20));
    // 0x1b7520: 0x6849554f  ldl         $t1, 0x554F($v0)
    ctx->pc = 0x1b7520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21839); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1b7524: 0x6c495548  ldr         $t1, 0x5548($v0)
    ctx->pc = 0x1b7524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21832); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1b7528: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7528u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b752c: 0x24c65538  addiu       $a2, $a2, 0x5538
    ctx->pc = 0x1b752cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21816));
    // 0x1b7530: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7534: 0x26c8029c  addiu       $t0, $s6, 0x29C
    ctx->pc = 0x1b7534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 668));
    // 0x1b7538: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b753c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B753Cu;
    SET_GPR_U32(ctx, 31, 0x1B7544u);
    ctx->pc = 0x1B7540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B753Cu;
            // 0x1b7540: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7544u; }
        if (ctx->pc != 0x1B7544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7544u; }
        if (ctx->pc != 0x1B7544u) { return; }
    }
    ctx->pc = 0x1B7544u;
    // 0x1b7544: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b7544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b7548: 0xaec0029c  sw          $zero, 0x29C($s6)
    ctx->pc = 0x1b7548u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 668), GPR_U32(ctx, 0));
    // 0x1b754c: 0x68495567  ldl         $t1, 0x5567($v0)
    ctx->pc = 0x1b754cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21863); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1b7550: 0x6c495560  ldr         $t1, 0x5560($v0)
    ctx->pc = 0x1b7550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21856); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1b7554: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7554u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7558: 0x24c65550  addiu       $a2, $a2, 0x5550
    ctx->pc = 0x1b7558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21840));
    // 0x1b755c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b755cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7560: 0x26c802a0  addiu       $t0, $s6, 0x2A0
    ctx->pc = 0x1b7560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 672));
    // 0x1b7564: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7568: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7568u;
    SET_GPR_U32(ctx, 31, 0x1B7570u);
    ctx->pc = 0x1B756Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7568u;
            // 0x1b756c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7570u; }
        if (ctx->pc != 0x1B7570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7570u; }
        if (ctx->pc != 0x1B7570u) { return; }
    }
    ctx->pc = 0x1B7570u;
    // 0x1b7570: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b7570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b7574: 0xaec002a0  sw          $zero, 0x2A0($s6)
    ctx->pc = 0x1b7574u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 672), GPR_U32(ctx, 0));
    // 0x1b7578: 0x6849557f  ldl         $t1, 0x557F($v0)
    ctx->pc = 0x1b7578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21887); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1b757c: 0x6c495578  ldr         $t1, 0x5578($v0)
    ctx->pc = 0x1b757cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21880); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1b7580: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7580u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7584: 0x24c65568  addiu       $a2, $a2, 0x5568
    ctx->pc = 0x1b7584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21864));
    // 0x1b7588: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b758c: 0x26c802a4  addiu       $t0, $s6, 0x2A4
    ctx->pc = 0x1b758cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 676));
    // 0x1b7590: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7594: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7594u;
    SET_GPR_U32(ctx, 31, 0x1B759Cu);
    ctx->pc = 0x1B7598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7594u;
            // 0x1b7598: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B759Cu; }
        if (ctx->pc != 0x1B759Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B759Cu; }
        if (ctx->pc != 0x1B759Cu) { return; }
    }
    ctx->pc = 0x1B759Cu;
    // 0x1b759c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b759cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b75a0: 0xaec002a4  sw          $zero, 0x2A4($s6)
    ctx->pc = 0x1b75a0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 676), GPR_U32(ctx, 0));
    // 0x1b75a4: 0x68495597  ldl         $t1, 0x5597($v0)
    ctx->pc = 0x1b75a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21911); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1b75a8: 0x6c495590  ldr         $t1, 0x5590($v0)
    ctx->pc = 0x1b75a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21904); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1b75ac: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b75acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b75b0: 0x24c65580  addiu       $a2, $a2, 0x5580
    ctx->pc = 0x1b75b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21888));
    // 0x1b75b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b75b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75b8: 0x26c802a8  addiu       $t0, $s6, 0x2A8
    ctx->pc = 0x1b75b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 680));
    // 0x1b75bc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b75bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b75c0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B75C0u;
    SET_GPR_U32(ctx, 31, 0x1B75C8u);
    ctx->pc = 0x1B75C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B75C0u;
            // 0x1b75c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B75C8u; }
        if (ctx->pc != 0x1B75C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B75C8u; }
        if (ctx->pc != 0x1B75C8u) { return; }
    }
    ctx->pc = 0x1B75C8u;
    // 0x1b75c8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b75cc: 0xaec002a8  sw          $zero, 0x2A8($s6)
    ctx->pc = 0x1b75ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 680), GPR_U32(ctx, 0));
    // 0x1b75d0: 0x685055a7  ldl         $s0, 0x55A7($v0)
    ctx->pc = 0x1b75d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21927); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x1b75d4: 0x6c5055a0  ldr         $s0, 0x55A0($v0)
    ctx->pc = 0x1b75d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21920); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x1b75d8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b75d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b75dc: 0x24c65598  addiu       $a2, $a2, 0x5598
    ctx->pc = 0x1b75dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21912));
    // 0x1b75e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b75e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75e4: 0x26c802ac  addiu       $t0, $s6, 0x2AC
    ctx->pc = 0x1b75e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 684));
    // 0x1b75e8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b75e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b75ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75f0: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B75F0u;
    SET_GPR_U32(ctx, 31, 0x1B75F8u);
    ctx->pc = 0x1B75F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B75F0u;
            // 0x1b75f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B75F8u; }
        if (ctx->pc != 0x1B75F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B75F8u; }
        if (ctx->pc != 0x1B75F8u) { return; }
    }
    ctx->pc = 0x1B75F8u;
    // 0x1b75f8: 0xaec002ac  sw          $zero, 0x2AC($s6)
    ctx->pc = 0x1b75f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 684), GPR_U32(ctx, 0));
    // 0x1b75fc: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b75fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7600: 0x24c655a8  addiu       $a2, $a2, 0x55A8
    ctx->pc = 0x1b7600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21928));
    // 0x1b7604: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7608: 0x26c802b0  addiu       $t0, $s6, 0x2B0
    ctx->pc = 0x1b7608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 688));
    // 0x1b760c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b760cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7614: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7614u;
    SET_GPR_U32(ctx, 31, 0x1B761Cu);
    ctx->pc = 0x1B7618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7614u;
            // 0x1b7618: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B761Cu; }
        if (ctx->pc != 0x1B761Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B761Cu; }
        if (ctx->pc != 0x1B761Cu) { return; }
    }
    ctx->pc = 0x1B761Cu;
    // 0x1b761c: 0xaec002b0  sw          $zero, 0x2B0($s6)
    ctx->pc = 0x1b761cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 688), GPR_U32(ctx, 0));
    // 0x1b7620: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7624: 0x24c655b0  addiu       $a2, $a2, 0x55B0
    ctx->pc = 0x1b7624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21936));
    // 0x1b7628: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b7628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b762c: 0x26c802b4  addiu       $t0, $s6, 0x2B4
    ctx->pc = 0x1b762cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 692));
    // 0x1b7630: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b7630u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7638: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B7638u;
    SET_GPR_U32(ctx, 31, 0x1B7640u);
    ctx->pc = 0x1B763Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7638u;
            // 0x1b763c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7640u; }
        if (ctx->pc != 0x1B7640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7640u; }
        if (ctx->pc != 0x1B7640u) { return; }
    }
    ctx->pc = 0x1B7640u;
    // 0x1b7640: 0xaec002b4  sw          $zero, 0x2B4($s6)
    ctx->pc = 0x1b7640u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 692), GPR_U32(ctx, 0));
    // 0x1b7644: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b7644u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b7648: 0x24c655b8  addiu       $a2, $a2, 0x55B8
    ctx->pc = 0x1b7648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21944));
    // 0x1b764c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b764cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7654: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b7654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7658: 0x26c802b8  addiu       $t0, $s6, 0x2B8
    ctx->pc = 0x1b7658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 696));
    // 0x1b765c: 0xc06d738  jal         func_1B5CE0
    ctx->pc = 0x1B765Cu;
    SET_GPR_U32(ctx, 31, 0x1B7664u);
    ctx->pc = 0x1B7660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B765Cu;
            // 0x1b7660: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CE0u;
    if (runtime->hasFunction(0x1B5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7664u; }
        if (ctx->pc != 0x1B7664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CE0_0x1b5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7664u; }
        if (ctx->pc != 0x1B7664u) { return; }
    }
    ctx->pc = 0x1B7664u;
    // 0x1b7664: 0xaec002b8  sw          $zero, 0x2B8($s6)
    ctx->pc = 0x1b7664u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 696), GPR_U32(ctx, 0));
    // 0x1b7668: 0xc06e6f2  jal         func_1B9BC8
    ctx->pc = 0x1B7668u;
    SET_GPR_U32(ctx, 31, 0x1B7670u);
    ctx->pc = 0x1B766Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7668u;
            // 0x1b766c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9BC8u;
    if (runtime->hasFunction(0x1B9BC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B9BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7670u; }
        if (ctx->pc != 0x1B7670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9BC8_0x1b9bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7670u; }
        if (ctx->pc != 0x1B7670u) { return; }
    }
    ctx->pc = 0x1B7670u;
    // 0x1b7670: 0xc06e888  jal         func_1BA220
    ctx->pc = 0x1B7670u;
    SET_GPR_U32(ctx, 31, 0x1B7678u);
    ctx->pc = 0x1B7674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7670u;
            // 0x1b7674: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA220u;
    if (runtime->hasFunction(0x1BA220u)) {
        auto targetFn = runtime->lookupFunction(0x1BA220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7678u; }
        if (ctx->pc != 0x1B7678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA220_0x1ba220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7678u; }
        if (ctx->pc != 0x1B7678u) { return; }
    }
    ctx->pc = 0x1B7678u;
    // 0x1b7678: 0xc05c162  jal         func_170588
    ctx->pc = 0x1B7678u;
    SET_GPR_U32(ctx, 31, 0x1B7680u);
    ctx->pc = 0x1B767Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7678u;
            // 0x1b767c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170588u;
    if (runtime->hasFunction(0x170588u)) {
        auto targetFn = runtime->lookupFunction(0x170588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7680u; }
        if (ctx->pc != 0x1B7680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_170588_0x170620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7680u; }
        if (ctx->pc != 0x1B7680u) { return; }
    }
    ctx->pc = 0x1B7680u;
    // 0x1b7680: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x1b7680u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7684: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1b7684u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1b7688: 0x2631e848  addiu       $s1, $s1, -0x17B8
    ctx->pc = 0x1b7688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x1b768c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b768cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b7690: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b7690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b7694: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b7694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7698: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b7698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b769c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b769cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b76a0: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1b76a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1b76a4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1b76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1b76a8: 0x40f809  jalr        $v0
    ctx->pc = 0x1B76A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B76B0u);
        ctx->pc = 0x1B76ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B76A8u;
            // 0x1b76ac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B76B0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5DB0u: goto label_1b5db0;
            case 0x1B5DD8u: goto label_1b5dd8;
            case 0x1B77C0u: goto label_1b77c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B76B0u; }
            if (ctx->pc != 0x1B76B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B76B0u;
    // 0x1b76b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b76b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b76b4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1b76b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b76b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b76b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b76bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b76c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b76c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b76c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b76c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b76c8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b76cc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1b76ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b76d0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1b76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1b76d4: 0x40f809  jalr        $v0
    ctx->pc = 0x1B76D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B76DCu);
        ctx->pc = 0x1B76D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B76D4u;
            // 0x1b76d8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B76DCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5DB0u: goto label_1b5db0;
            case 0x1B5DD8u: goto label_1b5dd8;
            case 0x1B77C0u: goto label_1b77c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B76DCu; }
            if (ctx->pc != 0x1B76DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1B76DCu;
    // 0x1b76dc: 0xaed01564  sw          $s0, 0x1564($s6)
    ctx->pc = 0x1b76dcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 5476), GPR_U32(ctx, 16));
    // 0x1b76e0: 0xc06ddf6  jal         func_1B77D8
    ctx->pc = 0x1B76E0u;
    SET_GPR_U32(ctx, 31, 0x1B76E8u);
    ctx->pc = 0x1B76E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B76E0u;
            // 0x1b76e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B77D8u;
    if (runtime->hasFunction(0x1B77D8u)) {
        auto targetFn = runtime->lookupFunction(0x1B77D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B76E8u; }
        if (ctx->pc != 0x1B76E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B77D8_0x1b77d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B76E8u; }
        if (ctx->pc != 0x1B76E8u) { return; }
    }
    ctx->pc = 0x1B76E8u;
    // 0x1b76e8: 0xc06de32  jal         func_1B78C8
    ctx->pc = 0x1B76E8u;
    SET_GPR_U32(ctx, 31, 0x1B76F0u);
    ctx->pc = 0x1B76ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B76E8u;
            // 0x1b76ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B78C8u;
    if (runtime->hasFunction(0x1B78C8u)) {
        auto targetFn = runtime->lookupFunction(0x1B78C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B76F0u; }
        if (ctx->pc != 0x1B76F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b78c8_0x1b79e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B76F0u; }
        if (ctx->pc != 0x1B76F0u) { return; }
    }
    ctx->pc = 0x1B76F0u;
    // 0x1b76f0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1b76f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b76f4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1b76f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b76f8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1b76f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b76fc: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1b76fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b7700: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1b7700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b7704: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1b7704u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7708: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1b7708u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b770c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1b770cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b7710: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b7710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7714: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7714u;
            // 0x1b7718: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5DB0u: goto label_1b5db0;
            case 0x1B5DD8u: goto label_1b5dd8;
            case 0x1B77C0u: goto label_1b77c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B771Cu;
    // 0x1b771c: 0x0  nop
    ctx->pc = 0x1b771cu;
    // NOP
    // 0x1b7720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b7724: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1b7724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1b7728: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b7728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b772c: 0x2442a4b0  addiu       $v0, $v0, -0x5B50
    ctx->pc = 0x1b772cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943920));
    // 0x1b7730: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b7730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b7734: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b7734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7738: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b7738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b773c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b773cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b7740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7748: 0xc06df7c  jal         func_1B7DF0
    ctx->pc = 0x1B7748u;
    SET_GPR_U32(ctx, 31, 0x1B7750u);
    ctx->pc = 0x1B774Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7748u;
            // 0x1b774c: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DF0u;
    if (runtime->hasFunction(0x1B7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7750u; }
        if (ctx->pc != 0x1B7750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7DF0_0x1b7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7750u; }
        if (ctx->pc != 0x1B7750u) { return; }
    }
    ctx->pc = 0x1B7750u;
    // 0x1b7750: 0x8e451564  lw          $a1, 0x1564($s2)
    ctx->pc = 0x1b7750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5476)));
    // 0x1b7754: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1b7754u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b7758: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1b7758u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1b775c: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x1b775cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1b7760: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b7760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b7764: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b7764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b7768: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b7768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b776c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b776cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b7770: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1b7770u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1b7774: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1b7774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1b7778: 0x40f809  jalr        $v0
    ctx->pc = 0x1B7778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7780u);
        ctx->pc = 0x1B777Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7778u;
            // 0x1b777c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B7780u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5DB0u: goto label_1b5db0;
            case 0x1B5DD8u: goto label_1b5dd8;
            case 0x1B77C0u: goto label_1b77c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B7780u; }
            if (ctx->pc != 0x1B7780u) { return; }
        }
        }
    }
    ctx->pc = 0x1B7780u;
    // 0x1b7780: 0x8e451564  lw          $a1, 0x1564($s2)
    ctx->pc = 0x1b7780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5476)));
    // 0x1b7784: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1b7784u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b7788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b7788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b778c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b7790: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b7790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7794: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b7794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b7798: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1b7798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1b779c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1b779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1b77a0: 0x40f809  jalr        $v0
    ctx->pc = 0x1B77A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B77A8u);
        ctx->pc = 0x1B77A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B77A0u;
            // 0x1b77a4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B77A8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5DB0u: goto label_1b5db0;
            case 0x1B5DD8u: goto label_1b5dd8;
            case 0x1B77C0u: goto label_1b77c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B77A8u; }
            if (ctx->pc != 0x1B77A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B77A8u;
    // 0x1b77a8: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x1b77a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1b77ac: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B77ACu;
    {
        const bool branch_taken_0x1b77ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B77B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B77ACu;
            // 0x1b77b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b77ac) {
            ctx->pc = 0x1B77C0u;
            goto label_1b77c0;
        }
    }
    ctx->pc = 0x1B77B4u;
    // 0x1b77b4: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x1B77B4u;
    SET_GPR_U32(ctx, 31, 0x1B77BCu);
    ctx->pc = 0x1B77B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B77B4u;
            // 0x1b77b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B77BCu; }
        if (ctx->pc != 0x1B77BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B77BCu; }
        if (ctx->pc != 0x1B77BCu) { return; }
    }
    ctx->pc = 0x1B77BCu;
    // 0x1b77bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b77bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b77c0:
    // 0x1b77c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b77c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b77c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b77c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b77c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b77c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b77cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B77CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B77D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B77CCu;
            // 0x1b77d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5DB0u: goto label_1b5db0;
            case 0x1B5DD8u: goto label_1b5dd8;
            case 0x1B77C0u: goto label_1b77c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B77D4u;
    // 0x1b77d4: 0x0  nop
    ctx->pc = 0x1b77d4u;
    // NOP
}
