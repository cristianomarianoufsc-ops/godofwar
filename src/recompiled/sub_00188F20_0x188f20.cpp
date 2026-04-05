#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188F20
// Address: 0x188f20 - 0x189880
void sub_00188F20_0x188f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188F20_0x188f20");
#endif

    ctx->pc = 0x188f20u;

label_188f20:
    // 0x188f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x188f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x188f24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188f28: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x188f28u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x188f2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x188f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x188f30: 0x8e22c838  lw          $v0, -0x37C8($s1)
    ctx->pc = 0x188f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953016)));
    // 0x188f34: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x188f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x188f38: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x188f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x188f3c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x188F3Cu;
    {
        const bool branch_taken_0x188f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188F3Cu;
            // 0x188f40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f3c) {
            ctx->pc = 0x188FE0u;
            goto label_188fe0;
        }
    }
    ctx->pc = 0x188F44u;
    // 0x188f44: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x188f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x188f48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x188f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x188f4c: 0x24422f20  addiu       $v0, $v0, 0x2F20
    ctx->pc = 0x188f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12064));
    // 0x188f50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x188f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x188f54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x188f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188f58: 0x400008  jr          $v0
    ctx->pc = 0x188F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188F60u: goto label_188f60;
            case 0x188F70u: goto label_188f70;
            case 0x188F88u: goto label_188f88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188F60u;
label_188f60:
    // 0x188f60: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x188f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x188f64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x188f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f68: 0xc05d452  jal         func_175148
    ctx->pc = 0x188F68u;
    SET_GPR_U32(ctx, 31, 0x188F70u);
    ctx->pc = 0x188F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188F68u;
            // 0x188f6c: 0x8c454db4  lw          $a1, 0x4DB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175148u;
    if (runtime->hasFunction(0x175148u)) {
        auto targetFn = runtime->lookupFunction(0x175148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F70u; }
        if (ctx->pc != 0x188F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175148_0x175148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F70u; }
        if (ctx->pc != 0x188F70u) { return; }
    }
    ctx->pc = 0x188F70u;
label_188f70:
    // 0x188f70: 0xc0626e6  jal         func_189B98
    ctx->pc = 0x188F70u;
    SET_GPR_U32(ctx, 31, 0x188F78u);
    ctx->pc = 0x189B98u;
    if (runtime->hasFunction(0x189B98u)) {
        auto targetFn = runtime->lookupFunction(0x189B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F78u; }
        if (ctx->pc != 0x188F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189B98_0x189b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F78u; }
        if (ctx->pc != 0x188F78u) { return; }
    }
    ctx->pc = 0x188F78u;
    // 0x188f78: 0xc06211e  jal         func_188478
    ctx->pc = 0x188F78u;
    SET_GPR_U32(ctx, 31, 0x188F80u);
    ctx->pc = 0x188478u;
    if (runtime->hasFunction(0x188478u)) {
        auto targetFn = runtime->lookupFunction(0x188478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F80u; }
        if (ctx->pc != 0x188F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188478_0x188478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F80u; }
        if (ctx->pc != 0x188F80u) { return; }
    }
    ctx->pc = 0x188F80u;
    // 0x188f80: 0xc09b3be  jal         func_26CEF8
    ctx->pc = 0x188F80u;
    SET_GPR_U32(ctx, 31, 0x188F88u);
    ctx->pc = 0x26CEF8u;
    if (runtime->hasFunction(0x26CEF8u)) {
        auto targetFn = runtime->lookupFunction(0x26CEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F88u; }
        if (ctx->pc != 0x188F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CEF8_0x26cef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F88u; }
        if (ctx->pc != 0x188F88u) { return; }
    }
    ctx->pc = 0x188F88u;
label_188f88:
    // 0x188f88: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x188f88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x188f8c: 0x2610de10  addiu       $s0, $s0, -0x21F0
    ctx->pc = 0x188f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958608));
    // 0x188f90: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x188F90u;
    SET_GPR_U32(ctx, 31, 0x188F98u);
    ctx->pc = 0x188F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188F90u;
            // 0x188f94: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F98u; }
        if (ctx->pc != 0x188F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188F98u; }
        if (ctx->pc != 0x188F98u) { return; }
    }
    ctx->pc = 0x188F98u;
    // 0x188f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f9c: 0xc05ebba  jal         func_17AEE8
    ctx->pc = 0x188F9Cu;
    SET_GPR_U32(ctx, 31, 0x188FA4u);
    ctx->pc = 0x188FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188F9Cu;
            // 0x188fa0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AEE8u;
    if (runtime->hasFunction(0x17AEE8u)) {
        auto targetFn = runtime->lookupFunction(0x17AEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188FA4u; }
        if (ctx->pc != 0x188FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AEE8_0x17aee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188FA4u; }
        if (ctx->pc != 0x188FA4u) { return; }
    }
    ctx->pc = 0x188FA4u;
    // 0x188fa4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x188fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x188fa8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x188fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x188fac: 0x8c444db8  lw          $a0, 0x4DB8($v0)
    ctx->pc = 0x188facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19896)));
    // 0x188fb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x188fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188fb4: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x188fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x188fb8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x188fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x188fbc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x188fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x188fc0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x188fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x188fc4: 0xc04f628  jal         func_13D8A0
    ctx->pc = 0x188FC4u;
    SET_GPR_U32(ctx, 31, 0x188FCCu);
    ctx->pc = 0x188FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188FC4u;
            // 0x188fc8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D8A0u;
    if (runtime->hasFunction(0x13D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x13D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188FCCu; }
        if (ctx->pc != 0x188FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D8A0_0x13d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188FCCu; }
        if (ctx->pc != 0x188FCCu) { return; }
    }
    ctx->pc = 0x188FCCu;
    // 0x188fcc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x188fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x188fd0: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x188FD0u;
    SET_GPR_U32(ctx, 31, 0x188FD8u);
    ctx->pc = 0x188FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188FD0u;
            // 0x188fd4: 0x8c444dbc  lw          $a0, 0x4DBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19900)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188FD8u; }
        if (ctx->pc != 0x188FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188FD8u; }
        if (ctx->pc != 0x188FD8u) { return; }
    }
    ctx->pc = 0x188FD8u;
    // 0x188fd8: 0xc05e7bc  jal         func_179EF0
    ctx->pc = 0x188FD8u;
    SET_GPR_U32(ctx, 31, 0x188FE0u);
    ctx->pc = 0x188FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188FD8u;
            // 0x188fdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179EF0u;
    if (runtime->hasFunction(0x179EF0u)) {
        auto targetFn = runtime->lookupFunction(0x179EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188FE0u; }
        if (ctx->pc != 0x188FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_179ef0_0x179f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188FE0u; }
        if (ctx->pc != 0x188FE0u) { return; }
    }
    ctx->pc = 0x188FE0u;
label_188fe0:
    // 0x188fe0: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x188fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x188fe4: 0xae20c838  sw          $zero, -0x37C8($s1)
    ctx->pc = 0x188fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953016), GPR_U32(ctx, 0));
    // 0x188fe8: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x188fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x188fec: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x188fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x188ff0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x188ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ff4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x188ff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ff8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x188ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ffc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x188ffcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189000: 0xc09b260  jal         func_26C980
    ctx->pc = 0x189000u;
    SET_GPR_U32(ctx, 31, 0x189008u);
    ctx->pc = 0x189004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189000u;
            // 0x189004: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189008u; }
        if (ctx->pc != 0x189008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189008u; }
        if (ctx->pc != 0x189008u) { return; }
    }
    ctx->pc = 0x189008u;
    // 0x189008: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x189008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18900c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18900cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189014: 0x3e00008  jr          $ra
    ctx->pc = 0x189014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189014u;
            // 0x189018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188F20u: goto label_188f20;
            case 0x188F60u: goto label_188f60;
            case 0x188F70u: goto label_188f70;
            case 0x188F88u: goto label_188f88;
            case 0x188FE0u: goto label_188fe0;
            case 0x189050u: goto label_189050;
            case 0x189084u: goto label_189084;
            case 0x189094u: goto label_189094;
            case 0x1890ACu: goto label_1890ac;
            case 0x1890F8u: goto label_1890f8;
            case 0x189138u: goto label_189138;
            case 0x189140u: goto label_189140;
            case 0x189148u: goto label_189148;
            case 0x189170u: goto label_189170;
            case 0x189184u: goto label_189184;
            case 0x1891D8u: goto label_1891d8;
            case 0x189210u: goto label_189210;
            case 0x189214u: goto label_189214;
            case 0x189250u: goto label_189250;
            case 0x189254u: goto label_189254;
            case 0x189258u: goto label_189258;
            case 0x189278u: goto label_189278;
            case 0x189328u: goto label_189328;
            case 0x189348u: goto label_189348;
            case 0x189378u: goto label_189378;
            case 0x189384u: goto label_189384;
            case 0x1893A0u: goto label_1893a0;
            case 0x1893C8u: goto label_1893c8;
            case 0x1893E8u: goto label_1893e8;
            case 0x189450u: goto label_189450;
            case 0x189470u: goto label_189470;
            case 0x189474u: goto label_189474;
            case 0x1894E8u: goto label_1894e8;
            case 0x189500u: goto label_189500;
            case 0x189520u: goto label_189520;
            case 0x18953Cu: goto label_18953c;
            case 0x189568u: goto label_189568;
            case 0x189598u: goto label_189598;
            case 0x1895A8u: goto label_1895a8;
            case 0x1895C0u: goto label_1895c0;
            case 0x18960Cu: goto label_18960c;
            case 0x189650u: goto label_189650;
            case 0x189658u: goto label_189658;
            case 0x189660u: goto label_189660;
            case 0x1896C0u: goto label_1896c0;
            case 0x1896F0u: goto label_1896f0;
            case 0x1896F4u: goto label_1896f4;
            case 0x1896F8u: goto label_1896f8;
            case 0x189768u: goto label_189768;
            case 0x189778u: goto label_189778;
            case 0x189790u: goto label_189790;
            case 0x18979Cu: goto label_18979c;
            case 0x1897F8u: goto label_1897f8;
            case 0x189804u: goto label_189804;
            case 0x18983Cu: goto label_18983c;
            case 0x189844u: goto label_189844;
            case 0x189860u: goto label_189860;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18901Cu;
    // 0x18901c: 0x0  nop
    ctx->pc = 0x18901cu;
    // NOP
    // 0x189020: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x189020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x189024: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x189024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x189028: 0x8c444db8  lw          $a0, 0x4DB8($v0)
    ctx->pc = 0x189028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19896)));
    // 0x18902c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18902cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x189030: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x189030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x189034: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x189034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x189038: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x189038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18903c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x18903cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x189040: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x189040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x189044: 0xc04f856  jal         func_13E158
    ctx->pc = 0x189044u;
    SET_GPR_U32(ctx, 31, 0x18904Cu);
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18904Cu; }
        if (ctx->pc != 0x18904Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18904Cu; }
        if (ctx->pc != 0x18904Cu) { return; }
    }
    ctx->pc = 0x18904Cu;
    // 0x18904c: 0x0  nop
    ctx->pc = 0x18904cu;
    // NOP
label_189050:
    // 0x189050: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x189050u;
    SET_GPR_U32(ctx, 31, 0x189058u);
    ctx->pc = 0x189054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189050u;
            // 0x189054: 0x3c130030  lui         $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189058u; }
        if (ctx->pc != 0x189058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189058u; }
        if (ctx->pc != 0x189058u) { return; }
    }
    ctx->pc = 0x189058u;
    // 0x189058: 0x2670de10  addiu       $s0, $s3, -0x21F0
    ctx->pc = 0x189058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958608));
    // 0x18905c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x18905cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189060: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x189060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x189064: 0x10710011  beq         $v1, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x189064u;
    {
        const bool branch_taken_0x189064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x189068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189064u;
            // 0x189068: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189064) {
            ctx->pc = 0x1890ACu;
            goto label_1890ac;
        }
    }
    ctx->pc = 0x18906Cu;
    // 0x18906c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18906Cu;
    {
        const bool branch_taken_0x18906c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18906Cu;
            // 0x189070: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18906c) {
            ctx->pc = 0x189084u;
            goto label_189084;
        }
    }
    ctx->pc = 0x189074u;
    // 0x189074: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x189074u;
    {
        const bool branch_taken_0x189074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x189078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189074u;
            // 0x189078: 0x3c04002a  lui         $a0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189074) {
            ctx->pc = 0x189094u;
            goto label_189094;
        }
    }
    ctx->pc = 0x18907Cu;
    // 0x18907c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x18907Cu;
    {
        const bool branch_taken_0x18907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18907Cu;
            // 0x189080: 0x8c82c838  lw          $v0, -0x37C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18907c) {
            ctx->pc = 0x189148u;
            goto label_189148;
        }
    }
    ctx->pc = 0x189084u;
label_189084:
    // 0x189084: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x189084u;
    {
        const bool branch_taken_0x189084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x189088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189084u;
            // 0x189088: 0x3c04002a  lui         $a0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189084) {
            ctx->pc = 0x1890F8u;
            goto label_1890f8;
        }
    }
    ctx->pc = 0x18908Cu;
    // 0x18908c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x18908Cu;
    {
        const bool branch_taken_0x18908c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18908Cu;
            // 0x189090: 0x8c82c838  lw          $v0, -0x37C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18908c) {
            ctx->pc = 0x189148u;
            goto label_189148;
        }
    }
    ctx->pc = 0x189094u;
label_189094:
    // 0x189094: 0x8e63de10  lw          $v1, -0x21F0($s3)
    ctx->pc = 0x189094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958608)));
    // 0x189098: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x189098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x18909c: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x18909Cu;
    {
        const bool branch_taken_0x18909c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1890A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18909Cu;
            // 0x1890a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18909c) {
            ctx->pc = 0x189140u;
            goto label_189140;
        }
    }
    ctx->pc = 0x1890A4u;
    // 0x1890a4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1890A4u;
    {
        const bool branch_taken_0x1890a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1890A4u;
            // 0x1890a8: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890a4) {
            ctx->pc = 0x189140u;
            goto label_189140;
        }
    }
    ctx->pc = 0x1890ACu;
label_1890ac:
    // 0x1890ac: 0xc05ebde  jal         func_17AF78
    ctx->pc = 0x1890ACu;
    SET_GPR_U32(ctx, 31, 0x1890B4u);
    ctx->pc = 0x1890B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1890ACu;
            // 0x1890b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AF78u;
    if (runtime->hasFunction(0x17AF78u)) {
        auto targetFn = runtime->lookupFunction(0x17AF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1890B4u; }
        if (ctx->pc != 0x1890B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17af78_0x17afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1890B4u; }
        if (ctx->pc != 0x1890B4u) { return; }
    }
    ctx->pc = 0x1890B4u;
    // 0x1890b4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1890B4u;
    {
        const bool branch_taken_0x1890b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1890B4u;
            // 0x1890b8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890b4) {
            ctx->pc = 0x189140u;
            goto label_189140;
        }
    }
    ctx->pc = 0x1890BCu;
    // 0x1890bc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1890bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1890c0: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1890c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1890c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1890c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1890c8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1890c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1890cc: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x1890ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x1890d0: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1890d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1890d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1890d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1890d8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1890d8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1890dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1890dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1890e0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1890e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1890e4: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x1890e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x1890e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1890e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1890ec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1890ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1890f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1890F0u;
    {
        const bool branch_taken_0x1890f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1890F0u;
            // 0x1890f4: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890f0) {
            ctx->pc = 0x189140u;
            goto label_189140;
        }
    }
    ctx->pc = 0x1890F8u;
label_1890f8:
    // 0x1890f8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1890f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1890fc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1890FCu;
    {
        const bool branch_taken_0x1890fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1890FCu;
            // 0x189100: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890fc) {
            ctx->pc = 0x189140u;
            goto label_189140;
        }
    }
    ctx->pc = 0x189104u;
    // 0x189104: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x189104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x189108: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x189108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x18910c: 0x52b80  sll         $a1, $a1, 14
    ctx->pc = 0x18910cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
    // 0x189110: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x189110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x189114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189118: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x189118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x18911c: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x18911cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x189120: 0xc05ebf8  jal         func_17AFE0
    ctx->pc = 0x189120u;
    SET_GPR_U32(ctx, 31, 0x189128u);
    ctx->pc = 0x189124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189120u;
            // 0x189124: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AFE0u;
    if (runtime->hasFunction(0x17AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x17AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189128u; }
        if (ctx->pc != 0x189128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AFE0_0x17afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189128u; }
        if (ctx->pc != 0x189128u) { return; }
    }
    ctx->pc = 0x189128u;
    // 0x189128: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189128u;
    {
        const bool branch_taken_0x189128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18912Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189128u;
            // 0x18912c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189128) {
            ctx->pc = 0x189138u;
            goto label_189138;
        }
    }
    ctx->pc = 0x189130u;
    // 0x189130: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189130u;
    {
        const bool branch_taken_0x189130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189130u;
            // 0x189134: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189130) {
            ctx->pc = 0x189140u;
            goto label_189140;
        }
    }
    ctx->pc = 0x189138u;
label_189138:
    // 0x189138: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x189138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x18913c: 0x0  nop
    ctx->pc = 0x18913cu;
    // NOP
label_189140:
    // 0x189140: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x189140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x189144: 0x8c82c838  lw          $v0, -0x37C8($a0)
    ctx->pc = 0x189144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953016)));
label_189148:
    // 0x189148: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x189148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18914c: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x18914cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x189150: 0x104001bc  beqz        $v0, . + 4 + (0x1BC << 2)
    ctx->pc = 0x189150u;
    {
        const bool branch_taken_0x189150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189150u;
            // 0x189154: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189150) {
            ctx->pc = 0x189844u;
            goto label_189844;
        }
    }
    ctx->pc = 0x189158u;
    // 0x189158: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x189158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18915c: 0x24422f80  addiu       $v0, $v0, 0x2F80
    ctx->pc = 0x18915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12160));
    // 0x189160: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x189160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189164: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x189164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189168: 0x400008  jr          $v0
    ctx->pc = 0x189168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189170u: goto label_189170;
            case 0x189184u: goto label_189184;
            case 0x189258u: goto label_189258;
            case 0x189278u: goto label_189278;
            case 0x189328u: goto label_189328;
            case 0x189348u: goto label_189348;
            case 0x189384u: goto label_189384;
            case 0x1893A0u: goto label_1893a0;
            case 0x1893C8u: goto label_1893c8;
            case 0x1893E8u: goto label_1893e8;
            case 0x189450u: goto label_189450;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189170u;
label_189170:
    // 0x189170: 0x8e63de10  lw          $v1, -0x21F0($s3)
    ctx->pc = 0x189170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958608)));
    // 0x189174: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x189174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x189178: 0x106201b2  beq         $v1, $v0, . + 4 + (0x1B2 << 2)
    ctx->pc = 0x189178u;
    {
        const bool branch_taken_0x189178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18917Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189178u;
            // 0x18917c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189178) {
            ctx->pc = 0x189844u;
            goto label_189844;
        }
    }
    ctx->pc = 0x189180u;
    // 0x189180: 0xac82c838  sw          $v0, -0x37C8($a0)
    ctx->pc = 0x189180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294953016), GPR_U32(ctx, 2));
label_189184:
    // 0x189184: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x189184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x189188: 0xc05ebae  jal         func_17AEB8
    ctx->pc = 0x189188u;
    SET_GPR_U32(ctx, 31, 0x189190u);
    ctx->pc = 0x18918Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189188u;
            // 0x18918c: 0x2484de10  addiu       $a0, $a0, -0x21F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AEB8u;
    if (runtime->hasFunction(0x17AEB8u)) {
        auto targetFn = runtime->lookupFunction(0x17AEB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189190u; }
        if (ctx->pc != 0x189190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17aeb8_0x17aee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189190u; }
        if (ctx->pc != 0x189190u) { return; }
    }
    ctx->pc = 0x189190u;
    // 0x189190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x189190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189194: 0xc0a2589  jal         func_289624
    ctx->pc = 0x189194u;
    SET_GPR_U32(ctx, 31, 0x18919Cu);
    ctx->pc = 0x189198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189194u;
            // 0x189198: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289624u;
    if (runtime->hasFunction(0x289624u)) {
        auto targetFn = runtime->lookupFunction(0x289624u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18919Cu; }
        if (ctx->pc != 0x18919Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289624_0x2897c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18919Cu; }
        if (ctx->pc != 0x18919Cu) { return; }
    }
    ctx->pc = 0x18919Cu;
    // 0x18919c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18919cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1891a0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1891a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1891a4: 0x24a52f50  addiu       $a1, $a1, 0x2F50
    ctx->pc = 0x1891a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12112));
    // 0x1891a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1891a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1891ac: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x1891ACu;
    SET_GPR_U32(ctx, 31, 0x1891B4u);
    ctx->pc = 0x1891B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1891ACu;
            // 0x1891b0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1891B4u; }
        if (ctx->pc != 0x1891B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1891B4u; }
        if (ctx->pc != 0x1891B4u) { return; }
    }
    ctx->pc = 0x1891B4u;
    // 0x1891b4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1891B4u;
    {
        const bool branch_taken_0x1891b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1891B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1891B4u;
            // 0x1891b8: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1891b4) {
            ctx->pc = 0x1891D8u;
            goto label_1891d8;
        }
    }
    ctx->pc = 0x1891BCu;
    // 0x1891bc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1891bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1891c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1891c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1891c4: 0x24424d10  addiu       $v0, $v0, 0x4D10
    ctx->pc = 0x1891c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19728));
    // 0x1891c8: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x1891c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
    // 0x1891cc: 0xac40008c  sw          $zero, 0x8C($v0)
    ctx->pc = 0x1891ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
    // 0x1891d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1891D0u;
    {
        const bool branch_taken_0x1891d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1891D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1891D0u;
            // 0x1891d4: 0xac400094  sw          $zero, 0x94($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1891d0) {
            ctx->pc = 0x189210u;
            goto label_189210;
        }
    }
    ctx->pc = 0x1891D8u;
label_1891d8:
    // 0x1891d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1891d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1891dc: 0x24a52f58  addiu       $a1, $a1, 0x2F58
    ctx->pc = 0x1891dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12120));
    // 0x1891e0: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x1891E0u;
    SET_GPR_U32(ctx, 31, 0x1891E8u);
    ctx->pc = 0x1891E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1891E0u;
            // 0x1891e4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1891E8u; }
        if (ctx->pc != 0x1891E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1891E8u; }
        if (ctx->pc != 0x1891E8u) { return; }
    }
    ctx->pc = 0x1891E8u;
    // 0x1891e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1891E8u;
    {
        const bool branch_taken_0x1891e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1891ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1891E8u;
            // 0x1891ec: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1891e8) {
            ctx->pc = 0x189214u;
            goto label_189214;
        }
    }
    ctx->pc = 0x1891F0u;
    // 0x1891f0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1891f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1891f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1891f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1891f8: 0x24424d10  addiu       $v0, $v0, 0x4D10
    ctx->pc = 0x1891f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19728));
    // 0x1891fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1891fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189200: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x189200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
    // 0x189204: 0xac440094  sw          $a0, 0x94($v0)
    ctx->pc = 0x189204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 4));
    // 0x189208: 0xac44008c  sw          $a0, 0x8C($v0)
    ctx->pc = 0x189208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 4));
    // 0x18920c: 0x0  nop
    ctx->pc = 0x18920cu;
    // NOP
label_189210:
    // 0x189210: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x189210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_189214:
    // 0x189214: 0x8c42c850  lw          $v0, -0x37B0($v0)
    ctx->pc = 0x189214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953040)));
    // 0x189218: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x189218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x18921c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18921Cu;
    {
        const bool branch_taken_0x18921c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18921Cu;
            // 0x189220: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18921c) {
            ctx->pc = 0x189250u;
            goto label_189250;
        }
    }
    ctx->pc = 0x189224u;
    // 0x189224: 0x82040003  lb          $a0, 0x3($s0)
    ctx->pc = 0x189224u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x189228: 0x24020057  addiu       $v0, $zero, 0x57
    ctx->pc = 0x189228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x18922c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18922Cu;
    {
        const bool branch_taken_0x18922c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x189230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18922Cu;
            // 0x189230: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18922c) {
            ctx->pc = 0x189254u;
            goto label_189254;
        }
    }
    ctx->pc = 0x189234u;
    // 0x189234: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x189234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x189238: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x189238u;
    {
        const bool branch_taken_0x189238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18923Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189238u;
            // 0x18923c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189238) {
            ctx->pc = 0x189254u;
            goto label_189254;
        }
    }
    ctx->pc = 0x189240u;
    // 0x189240: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x189240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x189244: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x189244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189248: 0xac624d94  sw          $v0, 0x4D94($v1)
    ctx->pc = 0x189248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19860), GPR_U32(ctx, 2));
    // 0x18924c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x18924cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_189250:
    // 0x189250: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x189250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_189254:
    // 0x189254: 0xac62c838  sw          $v0, -0x37C8($v1)
    ctx->pc = 0x189254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953016), GPR_U32(ctx, 2));
label_189258:
    // 0x189258: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x189258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x18925c: 0x8c42de34  lw          $v0, -0x21CC($v0)
    ctx->pc = 0x18925cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958644)));
    // 0x189260: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x189260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x189264: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x189264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x189268: 0x10400176  beqz        $v0, . + 4 + (0x176 << 2)
    ctx->pc = 0x189268u;
    {
        const bool branch_taken_0x189268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18926Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189268u;
            // 0x18926c: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189268) {
            ctx->pc = 0x189844u;
            goto label_189844;
        }
    }
    ctx->pc = 0x189270u;
    // 0x189270: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x189270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x189274: 0xac62c838  sw          $v0, -0x37C8($v1)
    ctx->pc = 0x189274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953016), GPR_U32(ctx, 2));
label_189278:
    // 0x189278: 0xc09bb36  jal         func_26ECD8
    ctx->pc = 0x189278u;
    SET_GPR_U32(ctx, 31, 0x189280u);
    ctx->pc = 0x18927Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189278u;
            // 0x18927c: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD8u;
    if (runtime->hasFunction(0x26ECD8u)) {
        auto targetFn = runtime->lookupFunction(0x26ECD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189280u; }
        if (ctx->pc != 0x189280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ecd8_0x26ed20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189280u; }
        if (ctx->pc != 0x189280u) { return; }
    }
    ctx->pc = 0x189280u;
    // 0x189280: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x189280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x189284: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x189284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x189288: 0x8c47382c  lw          $a3, 0x382C($v0)
    ctx->pc = 0x189288u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14380)));
    // 0x18928c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x18928cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x189290: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x189290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x189294: 0x8c64f1a0  lw          $a0, -0xE60($v1)
    ctx->pc = 0x189294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963616)));
    // 0x189298: 0x8c451074  lw          $a1, 0x1074($v0)
    ctx->pc = 0x189298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4212)));
    // 0x18929c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x18929cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x1892a0: 0xc09b2b6  jal         func_26CAD8
    ctx->pc = 0x1892A0u;
    SET_GPR_U32(ctx, 31, 0x1892A8u);
    ctx->pc = 0x1892A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1892A0u;
            // 0x1892a4: 0x8cc6f1ac  lw          $a2, -0xE54($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963628)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CAD8u;
    if (runtime->hasFunction(0x26CAD8u)) {
        auto targetFn = runtime->lookupFunction(0x26CAD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1892A8u; }
        if (ctx->pc != 0x1892A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26cad8_0x26cb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1892A8u; }
        if (ctx->pc != 0x1892A8u) { return; }
    }
    ctx->pc = 0x1892A8u;
    // 0x1892a8: 0xc062630  jal         func_1898C0
    ctx->pc = 0x1892A8u;
    SET_GPR_U32(ctx, 31, 0x1892B0u);
    ctx->pc = 0x1892ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1892A8u;
            // 0x1892ac: 0x26104d10  addiu       $s0, $s0, 0x4D10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1898C0u;
    if (runtime->hasFunction(0x1898C0u)) {
        auto targetFn = runtime->lookupFunction(0x1898C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1892B0u; }
        if (ctx->pc != 0x1892B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001898C0_0x1898c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1892B0u; }
        if (ctx->pc != 0x1892B0u) { return; }
    }
    ctx->pc = 0x1892B0u;
    // 0x1892b0: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x1892b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x1892b4: 0x8c43a314  lw          $v1, -0x5CEC($v0)
    ctx->pc = 0x1892b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943508)));
    // 0x1892b8: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1892b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1892bc: 0x8e080098  lw          $t0, 0x98($s0)
    ctx->pc = 0x1892bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1892c0: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x1892c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1892c4: 0x26314dc8  addiu       $s1, $s1, 0x4DC8
    ctx->pc = 0x1892c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 19912));
    // 0x1892c8: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x1892c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1892cc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1892ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1892d0: 0x8e070094  lw          $a3, 0x94($s0)
    ctx->pc = 0x1892d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1892d4: 0x3c090019  lui         $t1, 0x19
    ctx->pc = 0x1892d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)25 << 16));
    // 0x1892d8: 0x3c0a0019  lui         $t2, 0x19
    ctx->pc = 0x1892d8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)25 << 16));
    // 0x1892dc: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x1892dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892e0: 0x25298838  addiu       $t1, $t1, -0x77C8
    ctx->pc = 0x1892e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936632));
    // 0x1892e4: 0x254a8848  addiu       $t2, $t2, -0x77B8
    ctx->pc = 0x1892e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294936648));
    // 0x1892e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1892e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892ec: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1892ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1892f0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1892f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1892f4: 0xc062656  jal         func_189958
    ctx->pc = 0x1892F4u;
    SET_GPR_U32(ctx, 31, 0x1892FCu);
    ctx->pc = 0x1892F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1892F4u;
            // 0x1892f8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189958u;
    if (runtime->hasFunction(0x189958u)) {
        auto targetFn = runtime->lookupFunction(0x189958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1892FCu; }
        if (ctx->pc != 0x1892FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189958_0x189958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1892FCu; }
        if (ctx->pc != 0x1892FCu) { return; }
    }
    ctx->pc = 0x1892FCu;
    // 0x1892fc: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x1892fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x189300: 0x24848b80  addiu       $a0, $a0, -0x7480
    ctx->pc = 0x189300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937472));
    // 0x189304: 0xc09b4c6  jal         func_26D318
    ctx->pc = 0x189304u;
    SET_GPR_U32(ctx, 31, 0x18930Cu);
    ctx->pc = 0x189308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189304u;
            // 0x189308: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D318u;
    if (runtime->hasFunction(0x26D318u)) {
        auto targetFn = runtime->lookupFunction(0x26D318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18930Cu; }
        if (ctx->pc != 0x18930Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26d318_0x26d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18930Cu; }
        if (ctx->pc != 0x18930Cu) { return; }
    }
    ctx->pc = 0x18930Cu;
    // 0x18930c: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x18930cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x189310: 0xc0620ba  jal         func_1882E8
    ctx->pc = 0x189310u;
    SET_GPR_U32(ctx, 31, 0x189318u);
    ctx->pc = 0x189314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189310u;
            // 0x189314: 0x2625010c  addiu       $a1, $s1, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1882E8u;
    if (runtime->hasFunction(0x1882E8u)) {
        auto targetFn = runtime->lookupFunction(0x1882E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189318u; }
        if (ctx->pc != 0x189318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001882E8_0x1882e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189318u; }
        if (ctx->pc != 0x189318u) { return; }
    }
    ctx->pc = 0x189318u;
    // 0x189318: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x189318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x18931c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18931cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x189320: 0xac62c838  sw          $v0, -0x37C8($v1)
    ctx->pc = 0x189320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953016), GPR_U32(ctx, 2));
    // 0x189324: 0x0  nop
    ctx->pc = 0x189324u;
    // NOP
label_189328:
    // 0x189328: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x189328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x18932c: 0x8c42de34  lw          $v0, -0x21CC($v0)
    ctx->pc = 0x18932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958644)));
    // 0x189330: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x189330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x189334: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x189334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x189338: 0x10400142  beqz        $v0, . + 4 + (0x142 << 2)
    ctx->pc = 0x189338u;
    {
        const bool branch_taken_0x189338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18933Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189338u;
            // 0x18933c: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189338) {
            ctx->pc = 0x189844u;
            goto label_189844;
        }
    }
    ctx->pc = 0x189340u;
    // 0x189340: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x189340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x189344: 0xac62c838  sw          $v0, -0x37C8($v1)
    ctx->pc = 0x189344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953016), GPR_U32(ctx, 2));
label_189348:
    // 0x189348: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x189348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x18934c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x18934cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x189350: 0x8c45a310  lw          $a1, -0x5CF0($v0)
    ctx->pc = 0x189350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943504)));
    // 0x189354: 0xc062678  jal         func_1899E0
    ctx->pc = 0x189354u;
    SET_GPR_U32(ctx, 31, 0x18935Cu);
    ctx->pc = 0x189358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189354u;
            // 0x189358: 0x24844dc4  addiu       $a0, $a0, 0x4DC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19908));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1899E0u;
    if (runtime->hasFunction(0x1899E0u)) {
        auto targetFn = runtime->lookupFunction(0x1899E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18935Cu; }
        if (ctx->pc != 0x18935Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001899E0_0x1899e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18935Cu; }
        if (ctx->pc != 0x18935Cu) { return; }
    }
    ctx->pc = 0x18935Cu;
    // 0x18935c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18935Cu;
    {
        const bool branch_taken_0x18935c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18935Cu;
            // 0x189360: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18935c) {
            ctx->pc = 0x189378u;
            goto label_189378;
        }
    }
    ctx->pc = 0x189364u;
    // 0x189364: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x189364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x189368: 0xc0a2832  jal         func_28A0C8
    ctx->pc = 0x189368u;
    SET_GPR_U32(ctx, 31, 0x189370u);
    ctx->pc = 0x18936Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189368u;
            // 0x18936c: 0x24842f60  addiu       $a0, $a0, 0x2F60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A0C8u;
    if (runtime->hasFunction(0x28A0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28A0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189370u; }
        if (ctx->pc != 0x189370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28a0c8_0x28a128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189370u; }
        if (ctx->pc != 0x189370u) { return; }
    }
    ctx->pc = 0x189370u;
    // 0x189370: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x189370u;
    {
        const bool branch_taken_0x189370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189370) {
            ctx->pc = 0x18979Cu;
            goto label_18979c;
        }
    }
    ctx->pc = 0x189378u;
label_189378:
    // 0x189378: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x189378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18937c: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x18937Cu;
    {
        const bool branch_taken_0x18937c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18937Cu;
            // 0x189380: 0xac62c838  sw          $v0, -0x37C8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18937c) {
            ctx->pc = 0x189844u;
            goto label_189844;
        }
    }
    ctx->pc = 0x189384u;
label_189384:
    // 0x189384: 0x2662de10  addiu       $v0, $s3, -0x21F0
    ctx->pc = 0x189384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958608));
    // 0x189388: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x189388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x18938c: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x18938cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x189390: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x189390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x189394: 0x1040012b  beqz        $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x189394u;
    {
        const bool branch_taken_0x189394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189394u;
            // 0x189398: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189394) {
            ctx->pc = 0x189844u;
            goto label_189844;
        }
    }
    ctx->pc = 0x18939Cu;
    // 0x18939c: 0xac82c838  sw          $v0, -0x37C8($a0)
    ctx->pc = 0x18939cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294953016), GPR_U32(ctx, 2));
label_1893a0:
    // 0x1893a0: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x1893a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x1893a4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1893a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1893a8: 0x8c45a310  lw          $a1, -0x5CF0($v0)
    ctx->pc = 0x1893a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943504)));
    // 0x1893ac: 0xc062678  jal         func_1899E0
    ctx->pc = 0x1893ACu;
    SET_GPR_U32(ctx, 31, 0x1893B4u);
    ctx->pc = 0x1893B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1893ACu;
            // 0x1893b0: 0x24844dc0  addiu       $a0, $a0, 0x4DC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1899E0u;
    if (runtime->hasFunction(0x1899E0u)) {
        auto targetFn = runtime->lookupFunction(0x1899E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1893B4u; }
        if (ctx->pc != 0x1893B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001899E0_0x1899e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1893B4u; }
        if (ctx->pc != 0x1893B4u) { return; }
    }
    ctx->pc = 0x1893B4u;
    // 0x1893b4: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x1893B4u;
    {
        const bool branch_taken_0x1893b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1893B4u;
            // 0x1893b8: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893b4) {
            ctx->pc = 0x18979Cu;
            goto label_18979c;
        }
    }
    ctx->pc = 0x1893BCu;
    // 0x1893bc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1893bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1893c0: 0xac62c838  sw          $v0, -0x37C8($v1)
    ctx->pc = 0x1893c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953016), GPR_U32(ctx, 2));
    // 0x1893c4: 0x0  nop
    ctx->pc = 0x1893c4u;
    // NOP
label_1893c8:
    // 0x1893c8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1893c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1893cc: 0x8c42de34  lw          $v0, -0x21CC($v0)
    ctx->pc = 0x1893ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958644)));
    // 0x1893d0: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1893d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1893d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1893d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1893d8: 0x1040011a  beqz        $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x1893D8u;
    {
        const bool branch_taken_0x1893d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1893D8u;
            // 0x1893dc: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893d8) {
            ctx->pc = 0x189844u;
            goto label_189844;
        }
    }
    ctx->pc = 0x1893E0u;
    // 0x1893e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1893e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1893e4: 0xac62c838  sw          $v0, -0x37C8($v1)
    ctx->pc = 0x1893e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953016), GPR_U32(ctx, 2));
label_1893e8:
    // 0x1893e8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1893e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1893ec: 0x24504d10  addiu       $s0, $v0, 0x4D10
    ctx->pc = 0x1893ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19728));
    // 0x1893f0: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1893f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1893f4: 0x10400113  beqz        $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x1893F4u;
    {
        const bool branch_taken_0x1893f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1893F4u;
            // 0x1893f8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893f4) {
            ctx->pc = 0x189844u;
            goto label_189844;
        }
    }
    ctx->pc = 0x1893FCu;
    // 0x1893fc: 0x8c42e878  lw          $v0, -0x1788($v0)
    ctx->pc = 0x1893fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961272)));
    // 0x189400: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x189400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x189404: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x189404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x189408: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x189408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18940c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18940cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189410: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x189410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x189414: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x189414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x189418: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x189418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18941c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18941cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189424: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x189424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189428: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x189428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18942c: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x18942Cu;
    SET_GPR_U32(ctx, 31, 0x189434u);
    ctx->pc = 0x189430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18942Cu;
            // 0x189430: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (runtime->hasFunction(0x14EF60u)) {
        auto targetFn = runtime->lookupFunction(0x14EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189434u; }
        if (ctx->pc != 0x189434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014EF60_0x14ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189434u; }
        if (ctx->pc != 0x189434u) { return; }
    }
    ctx->pc = 0x189434u;
    // 0x189434: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x189434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x189438: 0xc05d452  jal         func_175148
    ctx->pc = 0x189438u;
    SET_GPR_U32(ctx, 31, 0x189440u);
    ctx->pc = 0x18943Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189438u;
            // 0x18943c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175148u;
    if (runtime->hasFunction(0x175148u)) {
        auto targetFn = runtime->lookupFunction(0x175148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189440u; }
        if (ctx->pc != 0x189440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175148_0x175148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189440u; }
        if (ctx->pc != 0x189440u) { return; }
    }
    ctx->pc = 0x189440u;
    // 0x189440: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x189440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x189444: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x189444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x189448: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x189448u;
    {
        const bool branch_taken_0x189448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18944Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189448u;
            // 0x18944c: 0xac62c838  sw          $v0, -0x37C8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189448) {
            ctx->pc = 0x189844u;
            goto label_189844;
        }
    }
    ctx->pc = 0x189450u;
label_189450:
    // 0x189450: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x189450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x189454: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x189454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x189458: 0x8c421078  lw          $v0, 0x1078($v0)
    ctx->pc = 0x189458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4216)));
    // 0x18945c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18945Cu;
    {
        const bool branch_taken_0x18945c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x189460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18945Cu;
            // 0x189460: 0x3c030030  lui         $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18945c) {
            ctx->pc = 0x189470u;
            goto label_189470;
        }
    }
    ctx->pc = 0x189464u;
    // 0x189464: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189464u;
    {
        const bool branch_taken_0x189464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189464u;
            // 0x189468: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189464) {
            ctx->pc = 0x189474u;
            goto label_189474;
        }
    }
    ctx->pc = 0x18946Cu;
    // 0x18946c: 0x0  nop
    ctx->pc = 0x18946cu;
    // NOP
label_189470:
    // 0x189470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189474:
    // 0x189474: 0xac624d90  sw          $v0, 0x4D90($v1)
    ctx->pc = 0x189474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19856), GPR_U32(ctx, 2));
    // 0x189478: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x189478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18947c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x18947cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x189480: 0x8c47382c  lw          $a3, 0x382C($v0)
    ctx->pc = 0x189480u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14380)));
    // 0x189484: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x189484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x189488: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x189488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18948c: 0x8c64f1a0  lw          $a0, -0xE60($v1)
    ctx->pc = 0x18948cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963616)));
    // 0x189490: 0x8c46f1ac  lw          $a2, -0xE54($v0)
    ctx->pc = 0x189490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963628)));
    // 0x189494: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x189494u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x189498: 0x8ca51074  lw          $a1, 0x1074($a1)
    ctx->pc = 0x189498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4212)));
    // 0x18949c: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x18949cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1894a0: 0x26304d10  addiu       $s0, $s1, 0x4D10
    ctx->pc = 0x1894a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 19728));
    // 0x1894a4: 0xc09b2b6  jal         func_26CAD8
    ctx->pc = 0x1894A4u;
    SET_GPR_U32(ctx, 31, 0x1894ACu);
    ctx->pc = 0x1894A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1894A4u;
            // 0x1894a8: 0x3c140031  lui         $s4, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CAD8u;
    if (runtime->hasFunction(0x26CAD8u)) {
        auto targetFn = runtime->lookupFunction(0x26CAD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1894ACu; }
        if (ctx->pc != 0x1894ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26cad8_0x26cb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1894ACu; }
        if (ctx->pc != 0x1894ACu) { return; }
    }
    ctx->pc = 0x1894ACu;
    // 0x1894ac: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x1894acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1894b0: 0xc09b2c2  jal         func_26CB08
    ctx->pc = 0x1894B0u;
    SET_GPR_U32(ctx, 31, 0x1894B8u);
    ctx->pc = 0x1894B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1894B0u;
            // 0x1894b4: 0x8e050088  lw          $a1, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CB08u;
    if (runtime->hasFunction(0x26CB08u)) {
        auto targetFn = runtime->lookupFunction(0x26CB08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1894B8u; }
        if (ctx->pc != 0x1894B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26cb08_0x26cb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1894B8u; }
        if (ctx->pc != 0x1894B8u) { return; }
    }
    ctx->pc = 0x1894B8u;
    // 0x1894b8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1894b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1894bc: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x1894bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1894c0: 0x24424dc8  addiu       $v0, $v0, 0x4DC8
    ctx->pc = 0x1894c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19912));
    // 0x1894c4: 0x8e87a310  lw          $a3, -0x5CF0($s4)
    ctx->pc = 0x1894c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943504)));
    // 0x1894c8: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x1894c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1894cc: 0xc09b320  jal         func_26CC80
    ctx->pc = 0x1894CCu;
    SET_GPR_U32(ctx, 31, 0x1894D4u);
    ctx->pc = 0x1894D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1894CCu;
            // 0x1894d0: 0x8c45005c  lw          $a1, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CC80u;
    if (runtime->hasFunction(0x26CC80u)) {
        auto targetFn = runtime->lookupFunction(0x26CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1894D4u; }
        if (ctx->pc != 0x1894D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26cc80_0x26cdb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1894D4u; }
        if (ctx->pc != 0x1894D4u) { return; }
    }
    ctx->pc = 0x1894D4u;
    // 0x1894d4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1894d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1894d8: 0xc09b36e  jal         func_26CDB8
    ctx->pc = 0x1894D8u;
    SET_GPR_U32(ctx, 31, 0x1894E0u);
    ctx->pc = 0x1894DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1894D8u;
            // 0x1894dc: 0x8c444dc4  lw          $a0, 0x4DC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19908)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CDB8u;
    if (runtime->hasFunction(0x26CDB8u)) {
        auto targetFn = runtime->lookupFunction(0x26CDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1894E0u; }
        if (ctx->pc != 0x1894E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CDB8_0x26cdb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1894E0u; }
        if (ctx->pc != 0x1894E0u) { return; }
    }
    ctx->pc = 0x1894E0u;
    // 0x1894e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1894E0u;
    {
        const bool branch_taken_0x1894e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1894e0) {
            ctx->pc = 0x189500u;
            goto label_189500;
        }
    }
    ctx->pc = 0x1894E8u;
label_1894e8:
    // 0x1894e8: 0xc0626de  jal         func_189B78
    ctx->pc = 0x1894E8u;
    SET_GPR_U32(ctx, 31, 0x1894F0u);
    ctx->pc = 0x189B78u;
    if (runtime->hasFunction(0x189B78u)) {
        auto targetFn = runtime->lookupFunction(0x189B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1894F0u; }
        if (ctx->pc != 0x1894F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189B78_0x189b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1894F0u; }
        if (ctx->pc != 0x1894F0u) { return; }
    }
    ctx->pc = 0x1894F0u;
    // 0x1894f0: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x1894f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x1894f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1894f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1894f8: 0xc0626a2  jal         func_189A88
    ctx->pc = 0x1894F8u;
    SET_GPR_U32(ctx, 31, 0x189500u);
    ctx->pc = 0x1894FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1894F8u;
            // 0x1894fc: 0x24848380  addiu       $a0, $a0, -0x7C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189A88u;
    if (runtime->hasFunction(0x189A88u)) {
        auto targetFn = runtime->lookupFunction(0x189A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189500u; }
        if (ctx->pc != 0x189500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189A88_0x189a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189500u; }
        if (ctx->pc != 0x189500u) { return; }
    }
    ctx->pc = 0x189500u;
label_189500:
    // 0x189500: 0xc0626c0  jal         func_189B00
    ctx->pc = 0x189500u;
    SET_GPR_U32(ctx, 31, 0x189508u);
    ctx->pc = 0x189B00u;
    if (runtime->hasFunction(0x189B00u)) {
        auto targetFn = runtime->lookupFunction(0x189B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189508u; }
        if (ctx->pc != 0x189508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189B00_0x189b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189508u; }
        if (ctx->pc != 0x189508u) { return; }
    }
    ctx->pc = 0x189508u;
    // 0x189508: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189508u;
    {
        const bool branch_taken_0x189508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18950Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189508u;
            // 0x18950c: 0x26224d10  addiu       $v0, $s1, 0x4D10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 19728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189508) {
            ctx->pc = 0x189520u;
            goto label_189520;
        }
    }
    ctx->pc = 0x189510u;
    // 0x189510: 0xc0620f2  jal         func_1883C8
    ctx->pc = 0x189510u;
    SET_GPR_U32(ctx, 31, 0x189518u);
    ctx->pc = 0x1883C8u;
    if (runtime->hasFunction(0x1883C8u)) {
        auto targetFn = runtime->lookupFunction(0x1883C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189518u; }
        if (ctx->pc != 0x189518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1883c8_0x188408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189518u; }
        if (ctx->pc != 0x189518u) { return; }
    }
    ctx->pc = 0x189518u;
    // 0x189518: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x189518u;
    {
        const bool branch_taken_0x189518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18951Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189518u;
            // 0x18951c: 0x26224d10  addiu       $v0, $s1, 0x4D10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 19728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189518) {
            ctx->pc = 0x1894E8u;
            runtime->cooperativeGuestYield();
            goto label_1894e8;
        }
    }
    ctx->pc = 0x189520u;
label_189520:
    // 0x189520: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x189520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189524: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x189524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x189528: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x189528u;
    {
        const bool branch_taken_0x189528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18952Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189528u;
            // 0x18952c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189528) {
            ctx->pc = 0x18953Cu;
            goto label_18953c;
        }
    }
    ctx->pc = 0x189530u;
    // 0x189530: 0xc0502ae  jal         func_140AB8
    ctx->pc = 0x189530u;
    SET_GPR_U32(ctx, 31, 0x189538u);
    ctx->pc = 0x140AB8u;
    if (runtime->hasFunction(0x140AB8u)) {
        auto targetFn = runtime->lookupFunction(0x140AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189538u; }
        if (ctx->pc != 0x189538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140AB8_0x140ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189538u; }
        if (ctx->pc != 0x189538u) { return; }
    }
    ctx->pc = 0x189538u;
    // 0x189538: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x189538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18953c:
    // 0x18953c: 0xc05e874  jal         func_17A1D0
    ctx->pc = 0x18953Cu;
    SET_GPR_U32(ctx, 31, 0x189544u);
    ctx->pc = 0x189540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18953Cu;
            // 0x189540: 0x2412000f  addiu       $s2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A1D0u;
    if (runtime->hasFunction(0x17A1D0u)) {
        auto targetFn = runtime->lookupFunction(0x17A1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189544u; }
        if (ctx->pc != 0x189544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17a1d0_0x17a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189544u; }
        if (ctx->pc != 0x189544u) { return; }
    }
    ctx->pc = 0x189544u;
    // 0x189544: 0xc09b2e4  jal         func_26CB90
    ctx->pc = 0x189544u;
    SET_GPR_U32(ctx, 31, 0x18954Cu);
    ctx->pc = 0x26CB90u;
    if (runtime->hasFunction(0x26CB90u)) {
        auto targetFn = runtime->lookupFunction(0x26CB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18954Cu; }
        if (ctx->pc != 0x18954Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26cb90_0x26cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18954Cu; }
        if (ctx->pc != 0x18954Cu) { return; }
    }
    ctx->pc = 0x18954Cu;
    // 0x18954c: 0xc09b38c  jal         func_26CE30
    ctx->pc = 0x18954Cu;
    SET_GPR_U32(ctx, 31, 0x189554u);
    ctx->pc = 0x26CE30u;
    if (runtime->hasFunction(0x26CE30u)) {
        auto targetFn = runtime->lookupFunction(0x26CE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189554u; }
        if (ctx->pc != 0x189554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CE30_0x26ce30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189554u; }
        if (ctx->pc != 0x189554u) { return; }
    }
    ctx->pc = 0x189554u;
    // 0x189554: 0xc062102  jal         func_188408
    ctx->pc = 0x189554u;
    SET_GPR_U32(ctx, 31, 0x18955Cu);
    ctx->pc = 0x188408u;
    if (runtime->hasFunction(0x188408u)) {
        auto targetFn = runtime->lookupFunction(0x188408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18955Cu; }
        if (ctx->pc != 0x18955Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188408_0x188408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18955Cu; }
        if (ctx->pc != 0x18955Cu) { return; }
    }
    ctx->pc = 0x18955Cu;
    // 0x18955c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x18955Cu;
    {
        const bool branch_taken_0x18955c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18955c) {
            ctx->pc = 0x189768u;
            goto label_189768;
        }
    }
    ctx->pc = 0x189564u;
    // 0x189564: 0x0  nop
    ctx->pc = 0x189564u;
    // NOP
label_189568:
    // 0x189568: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x189568u;
    SET_GPR_U32(ctx, 31, 0x189570u);
    ctx->pc = 0x18956Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189568u;
            // 0x18956c: 0x2670de10  addiu       $s0, $s3, -0x21F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189570u; }
        if (ctx->pc != 0x189570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189570u; }
        if (ctx->pc != 0x189570u) { return; }
    }
    ctx->pc = 0x189570u;
    // 0x189570: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x189570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x189574: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x189574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189578: 0x10710011  beq         $v1, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x189578u;
    {
        const bool branch_taken_0x189578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x18957Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189578u;
            // 0x18957c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189578) {
            ctx->pc = 0x1895C0u;
            goto label_1895c0;
        }
    }
    ctx->pc = 0x189580u;
    // 0x189580: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189580u;
    {
        const bool branch_taken_0x189580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189580u;
            // 0x189584: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189580) {
            ctx->pc = 0x189598u;
            goto label_189598;
        }
    }
    ctx->pc = 0x189588u;
    // 0x189588: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x189588u;
    {
        const bool branch_taken_0x189588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189588u;
            // 0x18958c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189588) {
            ctx->pc = 0x1895A8u;
            goto label_1895a8;
        }
    }
    ctx->pc = 0x189590u;
    // 0x189590: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x189590u;
    {
        const bool branch_taken_0x189590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189590u;
            // 0x189594: 0x8c42c83c  lw          $v0, -0x37C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189590) {
            ctx->pc = 0x189660u;
            goto label_189660;
        }
    }
    ctx->pc = 0x189598u;
label_189598:
    // 0x189598: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x189598u;
    {
        const bool branch_taken_0x189598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18959Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189598u;
            // 0x18959c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189598) {
            ctx->pc = 0x18960Cu;
            goto label_18960c;
        }
    }
    ctx->pc = 0x1895A0u;
    // 0x1895a0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1895A0u;
    {
        const bool branch_taken_0x1895a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1895A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1895A0u;
            // 0x1895a4: 0x8c42c83c  lw          $v0, -0x37C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895a0) {
            ctx->pc = 0x189660u;
            goto label_189660;
        }
    }
    ctx->pc = 0x1895A8u;
label_1895a8:
    // 0x1895a8: 0x8e63de10  lw          $v1, -0x21F0($s3)
    ctx->pc = 0x1895a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958608)));
    // 0x1895ac: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1895acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1895b0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1895B0u;
    {
        const bool branch_taken_0x1895b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1895B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1895B0u;
            // 0x1895b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895b0) {
            ctx->pc = 0x189658u;
            goto label_189658;
        }
    }
    ctx->pc = 0x1895B8u;
    // 0x1895b8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1895B8u;
    {
        const bool branch_taken_0x1895b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1895BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1895B8u;
            // 0x1895bc: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895b8) {
            ctx->pc = 0x189658u;
            goto label_189658;
        }
    }
    ctx->pc = 0x1895C0u;
label_1895c0:
    // 0x1895c0: 0xc05ebde  jal         func_17AF78
    ctx->pc = 0x1895C0u;
    SET_GPR_U32(ctx, 31, 0x1895C8u);
    ctx->pc = 0x1895C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1895C0u;
            // 0x1895c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AF78u;
    if (runtime->hasFunction(0x17AF78u)) {
        auto targetFn = runtime->lookupFunction(0x17AF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1895C8u; }
        if (ctx->pc != 0x1895C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17af78_0x17afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1895C8u; }
        if (ctx->pc != 0x1895C8u) { return; }
    }
    ctx->pc = 0x1895C8u;
    // 0x1895c8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1895C8u;
    {
        const bool branch_taken_0x1895c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1895CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1895C8u;
            // 0x1895cc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895c8) {
            ctx->pc = 0x189658u;
            goto label_189658;
        }
    }
    ctx->pc = 0x1895D0u;
    // 0x1895d0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1895d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1895d4: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1895d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1895d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1895d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1895dc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1895dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1895e0: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x1895e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x1895e4: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1895e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1895e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1895e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1895ec: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1895ecu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1895f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1895f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1895f4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1895f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1895f8: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x1895f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x1895fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1895fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x189600: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x189600u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189604: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x189604u;
    {
        const bool branch_taken_0x189604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189604u;
            // 0x189608: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189604) {
            ctx->pc = 0x189658u;
            goto label_189658;
        }
    }
    ctx->pc = 0x18960Cu;
label_18960c:
    // 0x18960c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x18960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x189610: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x189610u;
    {
        const bool branch_taken_0x189610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189610u;
            // 0x189614: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189610) {
            ctx->pc = 0x189658u;
            goto label_189658;
        }
    }
    ctx->pc = 0x189618u;
    // 0x189618: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x189618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18961c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x18961cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x189620: 0x52b80  sll         $a1, $a1, 14
    ctx->pc = 0x189620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
    // 0x189624: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x189624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x189628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18962c: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x18962cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x189630: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x189630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x189634: 0xc05ebf8  jal         func_17AFE0
    ctx->pc = 0x189634u;
    SET_GPR_U32(ctx, 31, 0x18963Cu);
    ctx->pc = 0x189638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189634u;
            // 0x189638: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AFE0u;
    if (runtime->hasFunction(0x17AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x17AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18963Cu; }
        if (ctx->pc != 0x18963Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AFE0_0x17afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18963Cu; }
        if (ctx->pc != 0x18963Cu) { return; }
    }
    ctx->pc = 0x18963Cu;
    // 0x18963c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18963Cu;
    {
        const bool branch_taken_0x18963c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18963Cu;
            // 0x189640: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18963c) {
            ctx->pc = 0x189650u;
            goto label_189650;
        }
    }
    ctx->pc = 0x189644u;
    // 0x189644: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x189644u;
    {
        const bool branch_taken_0x189644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189644u;
            // 0x189648: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189644) {
            ctx->pc = 0x189658u;
            goto label_189658;
        }
    }
    ctx->pc = 0x18964Cu;
    // 0x18964c: 0x0  nop
    ctx->pc = 0x18964cu;
    // NOP
label_189650:
    // 0x189650: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x189650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x189654: 0x0  nop
    ctx->pc = 0x189654u;
    // NOP
label_189658:
    // 0x189658: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x189658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18965c: 0x8c42c83c  lw          $v0, -0x37C4($v0)
    ctx->pc = 0x18965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953020)));
label_189660:
    // 0x189660: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x189660u;
    {
        const bool branch_taken_0x189660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189660u;
            // 0x189664: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189660) {
            ctx->pc = 0x1896F4u;
            goto label_1896f4;
        }
    }
    ctx->pc = 0x189668u;
    // 0x189668: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x189668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x18966c: 0x6410022  bgez        $s2, . + 4 + (0x22 << 2)
    ctx->pc = 0x18966Cu;
    {
        const bool branch_taken_0x18966c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x189670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18966Cu;
            // 0x189670: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18966c) {
            ctx->pc = 0x1896F8u;
            goto label_1896f8;
        }
    }
    ctx->pc = 0x189674u;
    // 0x189674: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x189674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x189678: 0x2442d9c0  addiu       $v0, $v0, -0x2640
    ctx->pc = 0x189678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957504));
    // 0x18967c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x18967cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x189680: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x189680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x189684: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x189684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x189688: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x189688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x18968c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x18968cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x189690: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x189690u;
    {
        const bool branch_taken_0x189690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189690u;
            // 0x189694: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189690) {
            ctx->pc = 0x1896C0u;
            goto label_1896c0;
        }
    }
    ctx->pc = 0x189698u;
    // 0x189698: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x189698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x18969c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18969Cu;
    {
        const bool branch_taken_0x18969c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1896A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18969Cu;
            // 0x1896a0: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18969c) {
            ctx->pc = 0x1896C0u;
            goto label_1896c0;
        }
    }
    ctx->pc = 0x1896A4u;
    // 0x1896a4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1896a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1896a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1896A8u;
    {
        const bool branch_taken_0x1896a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1896ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1896A8u;
            // 0x1896ac: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896a8) {
            ctx->pc = 0x1896C0u;
            goto label_1896c0;
        }
    }
    ctx->pc = 0x1896B0u;
    // 0x1896b0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1896b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1896b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1896B4u;
    {
        const bool branch_taken_0x1896b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1896B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1896B4u;
            // 0x1896b8: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896b4) {
            ctx->pc = 0x1896F0u;
            goto label_1896f0;
        }
    }
    ctx->pc = 0x1896BCu;
    // 0x1896bc: 0x0  nop
    ctx->pc = 0x1896bcu;
    // NOP
label_1896c0:
    // 0x1896c0: 0x2442d9c0  addiu       $v0, $v0, -0x2640
    ctx->pc = 0x1896c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957504));
    // 0x1896c4: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1896c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1896c8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1896c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1896cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1896ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1896d0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1896d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1896d4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1896d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1896d8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1896D8u;
    {
        const bool branch_taken_0x1896d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1896DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1896D8u;
            // 0x1896dc: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896d8) {
            ctx->pc = 0x189778u;
            goto label_189778;
        }
    }
    ctx->pc = 0x1896E0u;
    // 0x1896e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1896e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1896e4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1896E4u;
    {
        const bool branch_taken_0x1896e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1896E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1896E4u;
            // 0x1896e8: 0xac62c840  sw          $v0, -0x37C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896e4) {
            ctx->pc = 0x189778u;
            goto label_189778;
        }
    }
    ctx->pc = 0x1896ECu;
    // 0x1896ec: 0x0  nop
    ctx->pc = 0x1896ecu;
    // NOP
label_1896f0:
    // 0x1896f0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1896f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1896f4:
    // 0x1896f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1896f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1896f8:
    // 0x1896f8: 0x8c42be50  lw          $v0, -0x41B0($v0)
    ctx->pc = 0x1896f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950480)));
    // 0x1896fc: 0x8c420278  lw          $v0, 0x278($v0)
    ctx->pc = 0x1896fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
    // 0x189700: 0x1043001d  beq         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x189700u;
    {
        const bool branch_taken_0x189700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x189704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189700u;
            // 0x189704: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189700) {
            ctx->pc = 0x189778u;
            goto label_189778;
        }
    }
    ctx->pc = 0x189708u;
    // 0x189708: 0x8c444dc0  lw          $a0, 0x4DC0($v0)
    ctx->pc = 0x189708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19904)));
    // 0x18970c: 0xc09b36e  jal         func_26CDB8
    ctx->pc = 0x18970Cu;
    SET_GPR_U32(ctx, 31, 0x189714u);
    ctx->pc = 0x189710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18970Cu;
            // 0x189710: 0x24504dc0  addiu       $s0, $v0, 0x4DC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CDB8u;
    if (runtime->hasFunction(0x26CDB8u)) {
        auto targetFn = runtime->lookupFunction(0x26CDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189714u; }
        if (ctx->pc != 0x189714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CDB8_0x26cdb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189714u; }
        if (ctx->pc != 0x189714u) { return; }
    }
    ctx->pc = 0x189714u;
    // 0x189714: 0xc05f0e6  jal         func_17C398
    ctx->pc = 0x189714u;
    SET_GPR_U32(ctx, 31, 0x18971Cu);
    ctx->pc = 0x17C398u;
    if (runtime->hasFunction(0x17C398u)) {
        auto targetFn = runtime->lookupFunction(0x17C398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18971Cu; }
        if (ctx->pc != 0x18971Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C398_0x17c398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18971Cu; }
        if (ctx->pc != 0x18971Cu) { return; }
    }
    ctx->pc = 0x18971Cu;
    // 0x18971c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18971cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x189720: 0x8c43c4ac  lw          $v1, -0x3B54($v0)
    ctx->pc = 0x189720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952108)));
    // 0x189724: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x189724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x189728: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x189728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x18972c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x18972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x189730: 0x40f809  jalr        $v0
    ctx->pc = 0x189730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x189738u);
        ctx->pc = 0x189734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189730u;
            // 0x189734: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x189738u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188F20u: goto label_188f20;
            case 0x188F60u: goto label_188f60;
            case 0x188F70u: goto label_188f70;
            case 0x188F88u: goto label_188f88;
            case 0x188FE0u: goto label_188fe0;
            case 0x189050u: goto label_189050;
            case 0x189084u: goto label_189084;
            case 0x189094u: goto label_189094;
            case 0x1890ACu: goto label_1890ac;
            case 0x1890F8u: goto label_1890f8;
            case 0x189138u: goto label_189138;
            case 0x189140u: goto label_189140;
            case 0x189148u: goto label_189148;
            case 0x189170u: goto label_189170;
            case 0x189184u: goto label_189184;
            case 0x1891D8u: goto label_1891d8;
            case 0x189210u: goto label_189210;
            case 0x189214u: goto label_189214;
            case 0x189250u: goto label_189250;
            case 0x189254u: goto label_189254;
            case 0x189258u: goto label_189258;
            case 0x189278u: goto label_189278;
            case 0x189328u: goto label_189328;
            case 0x189348u: goto label_189348;
            case 0x189378u: goto label_189378;
            case 0x189384u: goto label_189384;
            case 0x1893A0u: goto label_1893a0;
            case 0x1893C8u: goto label_1893c8;
            case 0x1893E8u: goto label_1893e8;
            case 0x189450u: goto label_189450;
            case 0x189470u: goto label_189470;
            case 0x189474u: goto label_189474;
            case 0x1894E8u: goto label_1894e8;
            case 0x189500u: goto label_189500;
            case 0x189520u: goto label_189520;
            case 0x18953Cu: goto label_18953c;
            case 0x189568u: goto label_189568;
            case 0x189598u: goto label_189598;
            case 0x1895A8u: goto label_1895a8;
            case 0x1895C0u: goto label_1895c0;
            case 0x18960Cu: goto label_18960c;
            case 0x189650u: goto label_189650;
            case 0x189658u: goto label_189658;
            case 0x189660u: goto label_189660;
            case 0x1896C0u: goto label_1896c0;
            case 0x1896F0u: goto label_1896f0;
            case 0x1896F4u: goto label_1896f4;
            case 0x1896F8u: goto label_1896f8;
            case 0x189768u: goto label_189768;
            case 0x189778u: goto label_189778;
            case 0x189790u: goto label_189790;
            case 0x18979Cu: goto label_18979c;
            case 0x1897F8u: goto label_1897f8;
            case 0x189804u: goto label_189804;
            case 0x18983Cu: goto label_18983c;
            case 0x189844u: goto label_189844;
            case 0x189860u: goto label_189860;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x189738u; }
            if (ctx->pc != 0x189738u) { return; }
        }
        }
    }
    ctx->pc = 0x189738u;
    // 0x189738: 0xc087fbe  jal         func_21FEF8
    ctx->pc = 0x189738u;
    SET_GPR_U32(ctx, 31, 0x189740u);
    ctx->pc = 0x21FEF8u;
    if (runtime->hasFunction(0x21FEF8u)) {
        auto targetFn = runtime->lookupFunction(0x21FEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189740u; }
        if (ctx->pc != 0x189740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21fef8_0x21ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189740u; }
        if (ctx->pc != 0x189740u) { return; }
    }
    ctx->pc = 0x189740u;
    // 0x189740: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x189740u;
    {
        const bool branch_taken_0x189740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189740u;
            // 0x189744: 0x8e85a310  lw          $a1, -0x5CF0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189740) {
            ctx->pc = 0x189778u;
            goto label_189778;
        }
    }
    ctx->pc = 0x189748u;
    // 0x189748: 0xc062678  jal         func_1899E0
    ctx->pc = 0x189748u;
    SET_GPR_U32(ctx, 31, 0x189750u);
    ctx->pc = 0x18974Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189748u;
            // 0x18974c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1899E0u;
    if (runtime->hasFunction(0x1899E0u)) {
        auto targetFn = runtime->lookupFunction(0x1899E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189750u; }
        if (ctx->pc != 0x189750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001899E0_0x1899e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189750u; }
        if (ctx->pc != 0x189750u) { return; }
    }
    ctx->pc = 0x189750u;
    // 0x189750: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x189750u;
    {
        const bool branch_taken_0x189750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189750u;
            // 0x189754: 0x3c040019  lui         $a0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189750) {
            ctx->pc = 0x18979Cu;
            goto label_18979c;
        }
    }
    ctx->pc = 0x189758u;
    // 0x189758: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18975c: 0xc0626a2  jal         func_189A88
    ctx->pc = 0x18975Cu;
    SET_GPR_U32(ctx, 31, 0x189764u);
    ctx->pc = 0x189760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18975Cu;
            // 0x189760: 0x24848380  addiu       $a0, $a0, -0x7C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189A88u;
    if (runtime->hasFunction(0x189A88u)) {
        auto targetFn = runtime->lookupFunction(0x189A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189764u; }
        if (ctx->pc != 0x189764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189A88_0x189a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189764u; }
        if (ctx->pc != 0x189764u) { return; }
    }
    ctx->pc = 0x189764u;
    // 0x189764: 0x0  nop
    ctx->pc = 0x189764u;
    // NOP
label_189768:
    // 0x189768: 0xc0626c0  jal         func_189B00
    ctx->pc = 0x189768u;
    SET_GPR_U32(ctx, 31, 0x189770u);
    ctx->pc = 0x189B00u;
    if (runtime->hasFunction(0x189B00u)) {
        auto targetFn = runtime->lookupFunction(0x189B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189770u; }
        if (ctx->pc != 0x189770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189B00_0x189b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189770u; }
        if (ctx->pc != 0x189770u) { return; }
    }
    ctx->pc = 0x189770u;
    // 0x189770: 0x1040ff7d  beqz        $v0, . + 4 + (-0x83 << 2)
    ctx->pc = 0x189770u;
    {
        const bool branch_taken_0x189770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189770) {
            ctx->pc = 0x189568u;
            runtime->cooperativeGuestYield();
            goto label_189568;
        }
    }
    ctx->pc = 0x189778u;
label_189778:
    // 0x189778: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x189778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x18977c: 0xc09b36e  jal         func_26CDB8
    ctx->pc = 0x18977Cu;
    SET_GPR_U32(ctx, 31, 0x189784u);
    ctx->pc = 0x189780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18977Cu;
            // 0x189780: 0x8c444dc0  lw          $a0, 0x4DC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19904)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CDB8u;
    if (runtime->hasFunction(0x26CDB8u)) {
        auto targetFn = runtime->lookupFunction(0x26CDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189784u; }
        if (ctx->pc != 0x189784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CDB8_0x26cdb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189784u; }
        if (ctx->pc != 0x189784u) { return; }
    }
    ctx->pc = 0x189784u;
    // 0x189784: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x189784u;
    {
        const bool branch_taken_0x189784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189784) {
            ctx->pc = 0x18979Cu;
            goto label_18979c;
        }
    }
    ctx->pc = 0x18978Cu;
    // 0x18978c: 0x0  nop
    ctx->pc = 0x18978cu;
    // NOP
label_189790:
    // 0x189790: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189794: 0xc0626a2  jal         func_189A88
    ctx->pc = 0x189794u;
    SET_GPR_U32(ctx, 31, 0x18979Cu);
    ctx->pc = 0x189798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189794u;
            // 0x189798: 0x24848380  addiu       $a0, $a0, -0x7C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189A88u;
    if (runtime->hasFunction(0x189A88u)) {
        auto targetFn = runtime->lookupFunction(0x189A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18979Cu; }
        if (ctx->pc != 0x18979Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189A88_0x189a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18979Cu; }
        if (ctx->pc != 0x18979Cu) { return; }
    }
    ctx->pc = 0x18979Cu;
label_18979c:
    // 0x18979c: 0xc09b3a6  jal         func_26CE98
    ctx->pc = 0x18979Cu;
    SET_GPR_U32(ctx, 31, 0x1897A4u);
    ctx->pc = 0x26CE98u;
    if (runtime->hasFunction(0x26CE98u)) {
        auto targetFn = runtime->lookupFunction(0x26CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897A4u; }
        if (ctx->pc != 0x1897A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ce98_0x26cef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897A4u; }
        if (ctx->pc != 0x1897A4u) { return; }
    }
    ctx->pc = 0x1897A4u;
    // 0x1897a4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1897A4u;
    {
        const bool branch_taken_0x1897a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1897A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1897A4u;
            // 0x1897a8: 0x3c040019  lui         $a0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897a4) {
            ctx->pc = 0x189790u;
            runtime->cooperativeGuestYield();
            goto label_189790;
        }
    }
    ctx->pc = 0x1897ACu;
    // 0x1897ac: 0xc0626e6  jal         func_189B98
    ctx->pc = 0x1897ACu;
    SET_GPR_U32(ctx, 31, 0x1897B4u);
    ctx->pc = 0x189B98u;
    if (runtime->hasFunction(0x189B98u)) {
        auto targetFn = runtime->lookupFunction(0x189B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897B4u; }
        if (ctx->pc != 0x1897B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189B98_0x189b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897B4u; }
        if (ctx->pc != 0x1897B4u) { return; }
    }
    ctx->pc = 0x1897B4u;
    // 0x1897b4: 0xc06211e  jal         func_188478
    ctx->pc = 0x1897B4u;
    SET_GPR_U32(ctx, 31, 0x1897BCu);
    ctx->pc = 0x188478u;
    if (runtime->hasFunction(0x188478u)) {
        auto targetFn = runtime->lookupFunction(0x188478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897BCu; }
        if (ctx->pc != 0x1897BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188478_0x188478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897BCu; }
        if (ctx->pc != 0x1897BCu) { return; }
    }
    ctx->pc = 0x1897BCu;
    // 0x1897bc: 0xc09b3be  jal         func_26CEF8
    ctx->pc = 0x1897BCu;
    SET_GPR_U32(ctx, 31, 0x1897C4u);
    ctx->pc = 0x26CEF8u;
    if (runtime->hasFunction(0x26CEF8u)) {
        auto targetFn = runtime->lookupFunction(0x26CEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897C4u; }
        if (ctx->pc != 0x1897C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CEF8_0x26cef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897C4u; }
        if (ctx->pc != 0x1897C4u) { return; }
    }
    ctx->pc = 0x1897C4u;
    // 0x1897c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1897c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1897c8: 0xac40c870  sw          $zero, -0x3790($v0)
    ctx->pc = 0x1897c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953072), GPR_U32(ctx, 0));
    // 0x1897cc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1897ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1897d0: 0x8c431078  lw          $v1, 0x1078($v0)
    ctx->pc = 0x1897d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4216)));
    // 0x1897d4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1897d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1897d8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1897D8u;
    {
        const bool branch_taken_0x1897d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1897DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1897D8u;
            // 0x1897dc: 0x3c040030  lui         $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897d8) {
            ctx->pc = 0x1897F8u;
            goto label_1897f8;
        }
    }
    ctx->pc = 0x1897E0u;
    // 0x1897e0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1897e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1897e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1897e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1897e8: 0xc060c36  jal         func_1830D8
    ctx->pc = 0x1897E8u;
    SET_GPR_U32(ctx, 31, 0x1897F0u);
    ctx->pc = 0x1897ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1897E8u;
            // 0x1897ec: 0x2484d938  addiu       $a0, $a0, -0x26C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1830D8u;
    if (runtime->hasFunction(0x1830D8u)) {
        auto targetFn = runtime->lookupFunction(0x1830D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897F0u; }
        if (ctx->pc != 0x1897F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001830D8_0x1830d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897F0u; }
        if (ctx->pc != 0x1897F0u) { return; }
    }
    ctx->pc = 0x1897F0u;
    // 0x1897f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1897F0u;
    {
        const bool branch_taken_0x1897f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1897f0) {
            ctx->pc = 0x189804u;
            goto label_189804;
        }
    }
    ctx->pc = 0x1897F8u;
label_1897f8:
    // 0x1897f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1897f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1897fc: 0xc060c36  jal         func_1830D8
    ctx->pc = 0x1897FCu;
    SET_GPR_U32(ctx, 31, 0x189804u);
    ctx->pc = 0x189800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1897FCu;
            // 0x189800: 0x2484d900  addiu       $a0, $a0, -0x2700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1830D8u;
    if (runtime->hasFunction(0x1830D8u)) {
        auto targetFn = runtime->lookupFunction(0x1830D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189804u; }
        if (ctx->pc != 0x189804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001830D8_0x1830d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189804u; }
        if (ctx->pc != 0x189804u) { return; }
    }
    ctx->pc = 0x189804u;
label_189804:
    // 0x189804: 0xc05e874  jal         func_17A1D0
    ctx->pc = 0x189804u;
    SET_GPR_U32(ctx, 31, 0x18980Cu);
    ctx->pc = 0x189808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189804u;
            // 0x189808: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A1D0u;
    if (runtime->hasFunction(0x17A1D0u)) {
        auto targetFn = runtime->lookupFunction(0x17A1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18980Cu; }
        if (ctx->pc != 0x18980Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17a1d0_0x17a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18980Cu; }
        if (ctx->pc != 0x18980Cu) { return; }
    }
    ctx->pc = 0x18980Cu;
    // 0x18980c: 0xc05030a  jal         func_140C28
    ctx->pc = 0x18980Cu;
    SET_GPR_U32(ctx, 31, 0x189814u);
    ctx->pc = 0x140C28u;
    if (runtime->hasFunction(0x140C28u)) {
        auto targetFn = runtime->lookupFunction(0x140C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189814u; }
        if (ctx->pc != 0x189814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140C28_0x140c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189814u; }
        if (ctx->pc != 0x189814u) { return; }
    }
    ctx->pc = 0x189814u;
    // 0x189814: 0xc060dee  jal         func_1837B8
    ctx->pc = 0x189814u;
    SET_GPR_U32(ctx, 31, 0x18981Cu);
    ctx->pc = 0x1837B8u;
    if (runtime->hasFunction(0x1837B8u)) {
        auto targetFn = runtime->lookupFunction(0x1837B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18981Cu; }
        if (ctx->pc != 0x18981Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001837B8_0x1837b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18981Cu; }
        if (ctx->pc != 0x18981Cu) { return; }
    }
    ctx->pc = 0x18981Cu;
    // 0x18981c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x18981cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x189820: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x189820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189824: 0xc05d452  jal         func_175148
    ctx->pc = 0x189824u;
    SET_GPR_U32(ctx, 31, 0x18982Cu);
    ctx->pc = 0x189828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189824u;
            // 0x189828: 0x8c454db4  lw          $a1, 0x4DB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175148u;
    if (runtime->hasFunction(0x175148u)) {
        auto targetFn = runtime->lookupFunction(0x175148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18982Cu; }
        if (ctx->pc != 0x18982Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175148_0x175148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18982Cu; }
        if (ctx->pc != 0x18982Cu) { return; }
    }
    ctx->pc = 0x18982Cu;
    // 0x18982c: 0xc04f860  jal         func_13E180
    ctx->pc = 0x18982Cu;
    SET_GPR_U32(ctx, 31, 0x189834u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189834u; }
        if (ctx->pc != 0x189834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189834u; }
        if (ctx->pc != 0x189834u) { return; }
    }
    ctx->pc = 0x189834u;
    // 0x189834: 0xc0623c8  jal         func_188F20
    ctx->pc = 0x189834u;
    SET_GPR_U32(ctx, 31, 0x18983Cu);
    ctx->pc = 0x188F20u;
    runtime->cooperativeGuestYield();
    goto label_188f20;
    ctx->pc = 0x18983Cu;
label_18983c:
    // 0x18983c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18983Cu;
    {
        const bool branch_taken_0x18983c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18983Cu;
            // 0x189840: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18983c) {
            ctx->pc = 0x189860u;
            goto label_189860;
        }
    }
    ctx->pc = 0x189844u;
label_189844:
    // 0x189844: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x189844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x189848: 0x8c42c870  lw          $v0, -0x3790($v0)
    ctx->pc = 0x189848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953072)));
    // 0x18984c: 0x1440fe00  bnez        $v0, . + 4 + (-0x200 << 2)
    ctx->pc = 0x18984Cu;
    {
        const bool branch_taken_0x18984c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18984c) {
            ctx->pc = 0x189050u;
            runtime->cooperativeGuestYield();
            goto label_189050;
        }
    }
    ctx->pc = 0x189854u;
    // 0x189854: 0xc04f860  jal         func_13E180
    ctx->pc = 0x189854u;
    SET_GPR_U32(ctx, 31, 0x18985Cu);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18985Cu; }
        if (ctx->pc != 0x18985Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18985Cu; }
        if (ctx->pc != 0x18985Cu) { return; }
    }
    ctx->pc = 0x18985Cu;
    // 0x18985c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18985cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_189860:
    // 0x189860: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x189860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x189864: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x189864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189868: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x189868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18986c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x18986cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189870: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x189870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189874: 0x3e00008  jr          $ra
    ctx->pc = 0x189874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189874u;
            // 0x189878: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188F20u: goto label_188f20;
            case 0x188F60u: goto label_188f60;
            case 0x188F70u: goto label_188f70;
            case 0x188F88u: goto label_188f88;
            case 0x188FE0u: goto label_188fe0;
            case 0x189050u: goto label_189050;
            case 0x189084u: goto label_189084;
            case 0x189094u: goto label_189094;
            case 0x1890ACu: goto label_1890ac;
            case 0x1890F8u: goto label_1890f8;
            case 0x189138u: goto label_189138;
            case 0x189140u: goto label_189140;
            case 0x189148u: goto label_189148;
            case 0x189170u: goto label_189170;
            case 0x189184u: goto label_189184;
            case 0x1891D8u: goto label_1891d8;
            case 0x189210u: goto label_189210;
            case 0x189214u: goto label_189214;
            case 0x189250u: goto label_189250;
            case 0x189254u: goto label_189254;
            case 0x189258u: goto label_189258;
            case 0x189278u: goto label_189278;
            case 0x189328u: goto label_189328;
            case 0x189348u: goto label_189348;
            case 0x189378u: goto label_189378;
            case 0x189384u: goto label_189384;
            case 0x1893A0u: goto label_1893a0;
            case 0x1893C8u: goto label_1893c8;
            case 0x1893E8u: goto label_1893e8;
            case 0x189450u: goto label_189450;
            case 0x189470u: goto label_189470;
            case 0x189474u: goto label_189474;
            case 0x1894E8u: goto label_1894e8;
            case 0x189500u: goto label_189500;
            case 0x189520u: goto label_189520;
            case 0x18953Cu: goto label_18953c;
            case 0x189568u: goto label_189568;
            case 0x189598u: goto label_189598;
            case 0x1895A8u: goto label_1895a8;
            case 0x1895C0u: goto label_1895c0;
            case 0x18960Cu: goto label_18960c;
            case 0x189650u: goto label_189650;
            case 0x189658u: goto label_189658;
            case 0x189660u: goto label_189660;
            case 0x1896C0u: goto label_1896c0;
            case 0x1896F0u: goto label_1896f0;
            case 0x1896F4u: goto label_1896f4;
            case 0x1896F8u: goto label_1896f8;
            case 0x189768u: goto label_189768;
            case 0x189778u: goto label_189778;
            case 0x189790u: goto label_189790;
            case 0x18979Cu: goto label_18979c;
            case 0x1897F8u: goto label_1897f8;
            case 0x189804u: goto label_189804;
            case 0x18983Cu: goto label_18983c;
            case 0x189844u: goto label_189844;
            case 0x189860u: goto label_189860;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18987Cu;
    // 0x18987c: 0x0  nop
    ctx->pc = 0x18987cu;
    // NOP
}
