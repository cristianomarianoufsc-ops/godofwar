#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8DF0
// Address: 0x1b8df0 - 0x1b8e88
void sub_001B8DF0_0x1b8df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8DF0_0x1b8df0");
#endif

    ctx->pc = 0x1b8df0u;

    // 0x1b8df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b8df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b8df4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b8df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b8df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b8dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8e00: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1b8e00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b8e04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b8e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8e0c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b8e0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1b8e10: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B8E10u;
    {
        const bool branch_taken_0x1b8e10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E10u;
            // 0x1b8e14: 0xae001540  sw          $zero, 0x1540($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e10) {
            ctx->pc = 0x1B8E3Cu;
            goto label_1b8e3c;
        }
    }
    ctx->pc = 0x1B8E18u;
    // 0x1b8e18: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B8E18u;
    SET_GPR_U32(ctx, 31, 0x1B8E20u);
    ctx->pc = 0x1B8E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E18u;
            // 0x1b8e1c: 0xae000204  sw          $zero, 0x204($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E20u; }
        if (ctx->pc != 0x1B8E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E20u; }
        if (ctx->pc != 0x1B8E20u) { return; }
    }
    ctx->pc = 0x1B8E20u;
    // 0x1b8e20: 0xc06e4ce  jal         func_1B9338
    ctx->pc = 0x1B8E20u;
    SET_GPR_U32(ctx, 31, 0x1B8E28u);
    ctx->pc = 0x1B8E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E20u;
            // 0x1b8e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9338u;
    if (runtime->hasFunction(0x1B9338u)) {
        auto targetFn = runtime->lookupFunction(0x1B9338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E28u; }
        if (ctx->pc != 0x1B8E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9338_0x1b9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E28u; }
        if (ctx->pc != 0x1B8E28u) { return; }
    }
    ctx->pc = 0x1B8E28u;
    // 0x1b8e28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8e2c: 0xae001528  sw          $zero, 0x1528($s0)
    ctx->pc = 0x1b8e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5416), GPR_U32(ctx, 0));
    // 0x1b8e30: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x1b8e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
    // 0x1b8e34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B8E34u;
    {
        const bool branch_taken_0x1b8e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E34u;
            // 0x1b8e38: 0xae001548  sw          $zero, 0x1548($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e34) {
            ctx->pc = 0x1B8E70u;
            goto label_1b8e70;
        }
    }
    ctx->pc = 0x1B8E3Cu;
label_1b8e3c:
    // 0x1b8e3c: 0x8e021530  lw          $v0, 0x1530($s0)
    ctx->pc = 0x1b8e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5424)));
    // 0x1b8e40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8E40u;
    {
        const bool branch_taken_0x1b8e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E40u;
            // 0x1b8e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e40) {
            ctx->pc = 0x1B8E58u;
            goto label_1b8e58;
        }
    }
    ctx->pc = 0x1B8E48u;
    // 0x1b8e48: 0xae001530  sw          $zero, 0x1530($s0)
    ctx->pc = 0x1b8e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5424), GPR_U32(ctx, 0));
    // 0x1b8e4c: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x1b8e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x1b8e50: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B8E50u;
    SET_GPR_U32(ctx, 31, 0x1B8E58u);
    ctx->pc = 0x1B8E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E50u;
            // 0x1b8e54: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E58u; }
        if (ctx->pc != 0x1B8E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E58u; }
        if (ctx->pc != 0x1B8E58u) { return; }
    }
    ctx->pc = 0x1B8E58u;
label_1b8e58:
    // 0x1b8e58: 0xe614153c  swc1        $f20, 0x153C($s0)
    ctx->pc = 0x1b8e58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5436), bits); }
    // 0x1b8e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8e60: 0xae111528  sw          $s1, 0x1528($s0)
    ctx->pc = 0x1b8e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5416), GPR_U32(ctx, 17));
    // 0x1b8e64: 0xae001534  sw          $zero, 0x1534($s0)
    ctx->pc = 0x1b8e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5428), GPR_U32(ctx, 0));
    // 0x1b8e68: 0xc06e3a2  jal         func_1B8E88
    ctx->pc = 0x1B8E68u;
    SET_GPR_U32(ctx, 31, 0x1B8E70u);
    ctx->pc = 0x1B8E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E68u;
            // 0x1b8e6c: 0xae001554  sw          $zero, 0x1554($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5460), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E88u;
    if (runtime->hasFunction(0x1B8E88u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E70u; }
        if (ctx->pc != 0x1B8E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E88_0x1b8e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E70u; }
        if (ctx->pc != 0x1B8E70u) { return; }
    }
    ctx->pc = 0x1B8E70u;
label_1b8e70:
    // 0x1b8e70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b8e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8e74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8e7c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1b8e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b8e80: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E80u;
            // 0x1b8e84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8E3Cu: goto label_1b8e3c;
            case 0x1B8E58u: goto label_1b8e58;
            case 0x1B8E70u: goto label_1b8e70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8E88u;
}
