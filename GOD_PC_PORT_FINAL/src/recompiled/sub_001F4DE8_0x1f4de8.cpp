#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F4DE8
// Address: 0x1f4de8 - 0x1f4f00
void sub_001F4DE8_0x1f4de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4DE8_0x1f4de8");
#endif

    ctx->pc = 0x1f4de8u;

    // 0x1f4de8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f4de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f4dec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f4decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f4df0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f4df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f4df4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f4df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f4df8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f4df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f4dfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f4dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f4e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f4e04: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1f4e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1f4e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4e0c: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1f4e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1f4e10: 0x8c66cd60  lw          $a2, -0x32A0($v1)
    ctx->pc = 0x1f4e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954336)));
    // 0x1f4e14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f4e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f4e18: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f4e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f4e1c: 0x8ca4e328  lw          $a0, -0x1CD8($a1)
    ctx->pc = 0x1f4e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294959912)));
    // 0x1f4e20: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1f4e20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f4e24: 0xac72e390  sw          $s2, -0x1C70($v1)
    ctx->pc = 0x1f4e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 18));
    // 0x1f4e28: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F4E28u;
    {
        const bool branch_taken_0x1f4e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E28u;
            // 0x1f4e2c: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e28) {
            ctx->pc = 0x1F4E50u;
            goto label_1f4e50;
        }
    }
    ctx->pc = 0x1F4E30u;
    // 0x1f4e30: 0x8e300104  lw          $s0, 0x104($s1)
    ctx->pc = 0x1f4e30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1f4e34: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1F4E34u;
    SET_GPR_U32(ctx, 31, 0x1F4E3Cu);
    ctx->pc = 0x1F4E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E34u;
            // 0x1f4e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E3Cu; }
        if (ctx->pc != 0x1F4E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E3Cu; }
        if (ctx->pc != 0x1F4E3Cu) { return; }
    }
    ctx->pc = 0x1F4E3Cu;
    // 0x1f4e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e40: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1F4E40u;
    SET_GPR_U32(ctx, 31, 0x1F4E48u);
    ctx->pc = 0x1F4E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E40u;
            // 0x1f4e44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E48u; }
        if (ctx->pc != 0x1F4E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E48u; }
        if (ctx->pc != 0x1F4E48u) { return; }
    }
    ctx->pc = 0x1F4E48u;
    // 0x1f4e48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4E48u;
    {
        const bool branch_taken_0x1f4e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E48u;
            // 0x1f4e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e48) {
            ctx->pc = 0x1F4E58u;
            goto label_1f4e58;
        }
    }
    ctx->pc = 0x1F4E50u;
label_1f4e50:
    // 0x1f4e50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4e54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e58:
    // 0x1f4e58: 0xc07ccf0  jal         func_1F33C0
    ctx->pc = 0x1F4E58u;
    SET_GPR_U32(ctx, 31, 0x1F4E60u);
    ctx->pc = 0x1F4E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E58u;
            // 0x1f4e5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F33C0u;
    if (runtime->hasFunction(0x1F33C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F33C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E60u; }
        if (ctx->pc != 0x1F4E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F33C0_0x1f33c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E60u; }
        if (ctx->pc != 0x1F4E60u) { return; }
    }
    ctx->pc = 0x1F4E60u;
    // 0x1f4e60: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f4e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f4e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e68: 0xac62e380  sw          $v0, -0x1C80($v1)
    ctx->pc = 0x1f4e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960000), GPR_U32(ctx, 2));
    // 0x1f4e6c: 0xc07ccf0  jal         func_1F33C0
    ctx->pc = 0x1F4E6Cu;
    SET_GPR_U32(ctx, 31, 0x1F4E74u);
    ctx->pc = 0x1F4E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E6Cu;
            // 0x1f4e70: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F33C0u;
    if (runtime->hasFunction(0x1F33C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F33C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E74u; }
        if (ctx->pc != 0x1F4E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F33C0_0x1f33c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E74u; }
        if (ctx->pc != 0x1F4E74u) { return; }
    }
    ctx->pc = 0x1F4E74u;
    // 0x1f4e74: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f4e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f4e78: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x1f4e78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4e7c: 0x8c64e324  lw          $a0, -0x1CDC($v1)
    ctx->pc = 0x1f4e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959908)));
    // 0x1f4e80: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f4e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f4e84: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F4E84u;
    {
        const bool branch_taken_0x1f4e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E84u;
            // 0x1f4e88: 0xac62e384  sw          $v0, -0x1C7C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e84) {
            ctx->pc = 0x1F4EACu;
            goto label_1f4eac;
        }
    }
    ctx->pc = 0x1F4E8Cu;
    // 0x1f4e8c: 0x8e300104  lw          $s0, 0x104($s1)
    ctx->pc = 0x1f4e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1f4e90: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1F4E90u;
    SET_GPR_U32(ctx, 31, 0x1F4E98u);
    ctx->pc = 0x1F4E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E90u;
            // 0x1f4e94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E98u; }
        if (ctx->pc != 0x1F4E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E98u; }
        if (ctx->pc != 0x1F4E98u) { return; }
    }
    ctx->pc = 0x1F4E98u;
    // 0x1f4e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e9c: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1F4E9Cu;
    SET_GPR_U32(ctx, 31, 0x1F4EA4u);
    ctx->pc = 0x1F4EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E9Cu;
            // 0x1f4ea0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EA4u; }
        if (ctx->pc != 0x1F4EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EA4u; }
        if (ctx->pc != 0x1F4EA4u) { return; }
    }
    ctx->pc = 0x1F4EA4u;
    // 0x1f4ea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4EA4u;
    {
        const bool branch_taken_0x1f4ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4EA4u;
            // 0x1f4ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ea4) {
            ctx->pc = 0x1F4EB4u;
            goto label_1f4eb4;
        }
    }
    ctx->pc = 0x1F4EACu;
label_1f4eac:
    // 0x1f4eac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f4eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4eb4:
    // 0x1f4eb4: 0xc07ccf0  jal         func_1F33C0
    ctx->pc = 0x1F4EB4u;
    SET_GPR_U32(ctx, 31, 0x1F4EBCu);
    ctx->pc = 0x1F4EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4EB4u;
            // 0x1f4eb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F33C0u;
    if (runtime->hasFunction(0x1F33C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F33C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EBCu; }
        if (ctx->pc != 0x1F4EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F33C0_0x1f33c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EBCu; }
        if (ctx->pc != 0x1F4EBCu) { return; }
    }
    ctx->pc = 0x1F4EBCu;
    // 0x1f4ebc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f4ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4ec0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f4ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f4ec4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x1f4ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1f4ec8: 0xc07ccf0  jal         func_1F33C0
    ctx->pc = 0x1F4EC8u;
    SET_GPR_U32(ctx, 31, 0x1F4ED0u);
    ctx->pc = 0x1F4ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4EC8u;
            // 0x1f4ecc: 0xac62e388  sw          $v0, -0x1C78($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F33C0u;
    if (runtime->hasFunction(0x1F33C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F33C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4ED0u; }
        if (ctx->pc != 0x1F4ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F33C0_0x1f33c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4ED0u; }
        if (ctx->pc != 0x1F4ED0u) { return; }
    }
    ctx->pc = 0x1F4ED0u;
    // 0x1f4ed0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f4ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f4ed4: 0xc07d326  jal         func_1F4C98
    ctx->pc = 0x1F4ED4u;
    SET_GPR_U32(ctx, 31, 0x1F4EDCu);
    ctx->pc = 0x1F4ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4ED4u;
            // 0x1f4ed8: 0xac62e38c  sw          $v0, -0x1C74($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960012), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C98u;
    if (runtime->hasFunction(0x1F4C98u)) {
        auto targetFn = runtime->lookupFunction(0x1F4C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EDCu; }
        if (ctx->pc != 0x1F4EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f4c98_0x1f4de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EDCu; }
        if (ctx->pc != 0x1F4EDCu) { return; }
    }
    ctx->pc = 0x1F4EDCu;
    // 0x1f4edc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f4edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f4ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4ee4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f4ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4ee8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f4ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4eec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f4eecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4ef4: 0xac62e394  sw          $v0, -0x1C6C($v1)
    ctx->pc = 0x1f4ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960020), GPR_U32(ctx, 2));
    // 0x1f4ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4EF8u;
            // 0x1f4efc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4E50u: goto label_1f4e50;
            case 0x1F4E58u: goto label_1f4e58;
            case 0x1F4EACu: goto label_1f4eac;
            case 0x1F4EB4u: goto label_1f4eb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F4F00u;
}
