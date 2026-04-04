#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4128
// Address: 0x1d4128 - 0x1d41f8
void sub_001D4128_0x1d4128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4128_0x1d4128");
#endif

    ctx->pc = 0x1d4128u;

    // 0x1d4128: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d4128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d412c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d412cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d4130: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x1d4130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x1d4134: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d4134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d4138: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d4138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d413c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d413cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d4140: 0xc04f856  jal         func_13E158
    ctx->pc = 0x1D4140u;
    SET_GPR_U32(ctx, 31, 0x1D4148u);
    ctx->pc = 0x1D4144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4140u;
            // 0x1d4144: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4148u; }
        if (ctx->pc != 0x1D4148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4148u; }
        if (ctx->pc != 0x1D4148u) { return; }
    }
    ctx->pc = 0x1D4148u;
    // 0x1d4148: 0xc090c14  jal         func_243050
    ctx->pc = 0x1D4148u;
    SET_GPR_U32(ctx, 31, 0x1D4150u);
    ctx->pc = 0x1D414Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4148u;
            // 0x1d414c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243050u;
    if (runtime->hasFunction(0x243050u)) {
        auto targetFn = runtime->lookupFunction(0x243050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4150u; }
        if (ctx->pc != 0x1D4150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243050_0x243078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4150u; }
        if (ctx->pc != 0x1D4150u) { return; }
    }
    ctx->pc = 0x1D4150u;
    // 0x1d4150: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1D4150u;
    SET_GPR_U32(ctx, 31, 0x1D4158u);
    ctx->pc = 0x1D4154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4150u;
            // 0x1d4154: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4158u; }
        if (ctx->pc != 0x1D4158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4158u; }
        if (ctx->pc != 0x1D4158u) { return; }
    }
    ctx->pc = 0x1D4158u;
    // 0x1d4158: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1D4158u;
    SET_GPR_U32(ctx, 31, 0x1D4160u);
    ctx->pc = 0x1D415Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4158u;
            // 0x1d415c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4160u; }
        if (ctx->pc != 0x1D4160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4160u; }
        if (ctx->pc != 0x1D4160u) { return; }
    }
    ctx->pc = 0x1D4160u;
    // 0x1d4160: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d4160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4164: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4168: 0x24a54830  addiu       $a1, $a1, 0x4830
    ctx->pc = 0x1d4168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18480));
    // 0x1d416c: 0xc060978  jal         func_1825E0
    ctx->pc = 0x1D416Cu;
    SET_GPR_U32(ctx, 31, 0x1D4174u);
    ctx->pc = 0x1D4170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D416Cu;
            // 0x1d4170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4174u; }
        if (ctx->pc != 0x1D4174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4174u; }
        if (ctx->pc != 0x1D4174u) { return; }
    }
    ctx->pc = 0x1D4174u;
    // 0x1d4174: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1d4174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1d4178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d417c: 0x2442a470  addiu       $v0, $v0, -0x5B90
    ctx->pc = 0x1d417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943856));
    // 0x1d4180: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x1D4180u;
    SET_GPR_U32(ctx, 31, 0x1D4188u);
    ctx->pc = 0x1D4184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4180u;
            // 0x1d4184: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4188u; }
        if (ctx->pc != 0x1D4188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4188u; }
        if (ctx->pc != 0x1D4188u) { return; }
    }
    ctx->pc = 0x1D4188u;
    // 0x1d4188: 0x3c05eed3  lui         $a1, 0xEED3
    ctx->pc = 0x1d4188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61139 << 16));
    // 0x1d418c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d418cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4190: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x1d4190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1d4194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4198: 0x34a51206  ori         $a1, $a1, 0x1206
    ctx->pc = 0x1d4198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4614);
    // 0x1d419c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1D419Cu;
    SET_GPR_U32(ctx, 31, 0x1D41A4u);
    ctx->pc = 0x1D41A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D419Cu;
            // 0x1d41a0: 0xae30cd64  sw          $s0, -0x329C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294954340), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41A4u; }
        if (ctx->pc != 0x1D41A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41A4u; }
        if (ctx->pc != 0x1D41A4u) { return; }
    }
    ctx->pc = 0x1D41A4u;
    // 0x1d41a4: 0x8e24cd64  lw          $a0, -0x329C($s1)
    ctx->pc = 0x1d41a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954340)));
    // 0x1d41a8: 0x3c052af4  lui         $a1, 0x2AF4
    ctx->pc = 0x1d41a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10996 << 16));
    // 0x1d41ac: 0x34a58b79  ori         $a1, $a1, 0x8B79
    ctx->pc = 0x1d41acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35705);
    // 0x1d41b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d41b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d41b4: 0xc0605b2  jal         func_1816C8
    ctx->pc = 0x1D41B4u;
    SET_GPR_U32(ctx, 31, 0x1D41BCu);
    ctx->pc = 0x1D41B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D41B4u;
            // 0x1d41b8: 0x27a7001c  addiu       $a3, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816C8u;
    if (runtime->hasFunction(0x1816C8u)) {
        auto targetFn = runtime->lookupFunction(0x1816C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41BCu; }
        if (ctx->pc != 0x1D41BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001816C8_0x1816c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41BCu; }
        if (ctx->pc != 0x1D41BCu) { return; }
    }
    ctx->pc = 0x1D41BCu;
    // 0x1d41bc: 0xc04f860  jal         func_13E180
    ctx->pc = 0x1D41BCu;
    SET_GPR_U32(ctx, 31, 0x1D41C4u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41C4u; }
        if (ctx->pc != 0x1D41C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41C4u; }
        if (ctx->pc != 0x1D41C4u) { return; }
    }
    ctx->pc = 0x1D41C4u;
    // 0x1d41c4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1d41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1d41c8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1d41c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d41cc: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x1d41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x1d41d0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D41D0u;
    {
        const bool branch_taken_0x1d41d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D41D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D41D0u;
            // 0x1d41d4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41d0) {
            ctx->pc = 0x1D41E0u;
            goto label_1d41e0;
        }
    }
    ctx->pc = 0x1D41D8u;
    // 0x1d41d8: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1D41D8u;
    SET_GPR_U32(ctx, 31, 0x1D41E0u);
    ctx->pc = 0x1D41DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D41D8u;
            // 0x1d41dc: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41E0u; }
        if (ctx->pc != 0x1D41E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41E0u; }
        if (ctx->pc != 0x1D41E0u) { return; }
    }
    ctx->pc = 0x1D41E0u;
label_1d41e0:
    // 0x1d41e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d41e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d41e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d41e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d41e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d41e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d41ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D41ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D41F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D41ECu;
            // 0x1d41f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D41E0u: goto label_1d41e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D41F4u;
    // 0x1d41f4: 0x0  nop
    ctx->pc = 0x1d41f4u;
    // NOP
}
