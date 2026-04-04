#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017BC80
// Address: 0x17bc80 - 0x17bde0
void sub_0017BC80_0x17bc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BC80_0x17bc80");
#endif

    ctx->pc = 0x17bc80u;

    // 0x17bc80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17bc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17bc84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17bc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17bc88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17bc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17bc8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bc90: 0xc05ea9e  jal         func_17AA78
    ctx->pc = 0x17BC90u;
    SET_GPR_U32(ctx, 31, 0x17BC98u);
    ctx->pc = 0x17BC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC90u;
            // 0x17bc94: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AA78u;
    if (runtime->hasFunction(0x17AA78u)) {
        auto targetFn = runtime->lookupFunction(0x17AA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC98u; }
        if (ctx->pc != 0x17BC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17aa78_0x17aa88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC98u; }
        if (ctx->pc != 0x17BC98u) { return; }
    }
    ctx->pc = 0x17BC98u;
    // 0x17bc98: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x17bc98u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x17bc9c: 0xc0a5b12  jal         func_296C48
    ctx->pc = 0x17BC9Cu;
    SET_GPR_U32(ctx, 31, 0x17BCA4u);
    ctx->pc = 0x17BCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC9Cu;
            // 0x17bca0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296C48u;
    if (runtime->hasFunction(0x296C48u)) {
        auto targetFn = runtime->lookupFunction(0x296C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCA4u; }
        if (ctx->pc != 0x17BCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296c48_0x296de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCA4u; }
        if (ctx->pc != 0x17BCA4u) { return; }
    }
    ctx->pc = 0x17BCA4u;
    // 0x17bca4: 0xc09ea04  jal         func_27A810
    ctx->pc = 0x17BCA4u;
    SET_GPR_U32(ctx, 31, 0x17BCACu);
    ctx->pc = 0x17BCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCA4u;
            // 0x17bca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A810u;
    if (runtime->hasFunction(0x27A810u)) {
        auto targetFn = runtime->lookupFunction(0x27A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCACu; }
        if (ctx->pc != 0x17BCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A810_0x27a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCACu; }
        if (ctx->pc != 0x17BCACu) { return; }
    }
    ctx->pc = 0x17BCACu;
    // 0x17bcac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17bcacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17bcb0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x17bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17bcb4: 0xc09eaf4  jal         func_27ABD0
    ctx->pc = 0x17BCB4u;
    SET_GPR_U32(ctx, 31, 0x17BCBCu);
    ctx->pc = 0x17BCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCB4u;
            // 0x17bcb8: 0xae02c5f8  sw          $v0, -0x3A08($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294952440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27ABD0u;
    if (runtime->hasFunction(0x27ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x27ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCBCu; }
        if (ctx->pc != 0x17BCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027ABD0_0x27abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCBCu; }
        if (ctx->pc != 0x17BCBCu) { return; }
    }
    ctx->pc = 0x17BCBCu;
    // 0x17bcbc: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x17BCBCu;
    {
        const bool branch_taken_0x17bcbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCBCu;
            // 0x17bcc0: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bcbc) {
            ctx->pc = 0x17BD50u;
            goto label_17bd50;
        }
    }
    ctx->pc = 0x17BCC4u;
    // 0x17bcc4: 0xc05eb22  jal         func_17AC88
    ctx->pc = 0x17BCC4u;
    SET_GPR_U32(ctx, 31, 0x17BCCCu);
    ctx->pc = 0x17BCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCC4u;
            // 0x17bcc8: 0x248429e8  addiu       $a0, $a0, 0x29E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AC88u;
    if (runtime->hasFunction(0x17AC88u)) {
        auto targetFn = runtime->lookupFunction(0x17AC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCCCu; }
        if (ctx->pc != 0x17BCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AC88_0x17ac88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCCCu; }
        if (ctx->pc != 0x17BCCCu) { return; }
    }
    ctx->pc = 0x17BCCCu;
    // 0x17bccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17bcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17bcd0:
    // 0x17bcd0: 0xc0a6448  jal         func_299120
    ctx->pc = 0x17BCD0u;
    SET_GPR_U32(ctx, 31, 0x17BCD8u);
    ctx->pc = 0x17BCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCD0u;
            // 0x17bcd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299120u;
    if (runtime->hasFunction(0x299120u)) {
        auto targetFn = runtime->lookupFunction(0x299120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCD8u; }
        if (ctx->pc != 0x17BCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00299120_0x299120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCD8u; }
        if (ctx->pc != 0x17BCD8u) { return; }
    }
    ctx->pc = 0x17BCD8u;
    // 0x17bcd8: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x17BCD8u;
    {
        const bool branch_taken_0x17bcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bcd8) {
            ctx->pc = 0x17BCD0u;
            runtime->cooperativeGuestYield();
            goto label_17bcd0;
        }
    }
    ctx->pc = 0x17BCE0u;
label_17bce0:
    // 0x17bce0: 0xc0a6434  jal         func_2990D0
    ctx->pc = 0x17BCE0u;
    SET_GPR_U32(ctx, 31, 0x17BCE8u);
    ctx->pc = 0x2990D0u;
    if (runtime->hasFunction(0x2990D0u)) {
        auto targetFn = runtime->lookupFunction(0x2990D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCE8u; }
        if (ctx->pc != 0x17BCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002990D0_0x2990d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCE8u; }
        if (ctx->pc != 0x17BCE8u) { return; }
    }
    ctx->pc = 0x17BCE8u;
    // 0x17bce8: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x17BCE8u;
    {
        const bool branch_taken_0x17bce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bce8) {
            ctx->pc = 0x17BCE0u;
            runtime->cooperativeGuestYield();
            goto label_17bce0;
        }
    }
    ctx->pc = 0x17BCF0u;
    // 0x17bcf0: 0xc09ea04  jal         func_27A810
    ctx->pc = 0x17BCF0u;
    SET_GPR_U32(ctx, 31, 0x17BCF8u);
    ctx->pc = 0x17BCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCF0u;
            // 0x17bcf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A810u;
    if (runtime->hasFunction(0x27A810u)) {
        auto targetFn = runtime->lookupFunction(0x27A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCF8u; }
        if (ctx->pc != 0x17BCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A810_0x27a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCF8u; }
        if (ctx->pc != 0x17BCF8u) { return; }
    }
    ctx->pc = 0x17BCF8u;
    // 0x17bcf8: 0xc09eaf4  jal         func_27ABD0
    ctx->pc = 0x17BCF8u;
    SET_GPR_U32(ctx, 31, 0x17BD00u);
    ctx->pc = 0x17BCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCF8u;
            // 0x17bcfc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27ABD0u;
    if (runtime->hasFunction(0x27ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x27ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD00u; }
        if (ctx->pc != 0x17BD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027ABD0_0x27abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD00u; }
        if (ctx->pc != 0x17BD00u) { return; }
    }
    ctx->pc = 0x17BD00u;
    // 0x17bd00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17BD00u;
    {
        const bool branch_taken_0x17bd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD00u;
            // 0x17bd04: 0x3c040030  lui         $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd00) {
            ctx->pc = 0x17BD14u;
            goto label_17bd14;
        }
    }
    ctx->pc = 0x17BD08u;
label_17bd08:
    // 0x17bd08: 0xc0a2832  jal         func_28A0C8
    ctx->pc = 0x17BD08u;
    SET_GPR_U32(ctx, 31, 0x17BD10u);
    ctx->pc = 0x17BD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD08u;
            // 0x17bd0c: 0x248429f8  addiu       $a0, $a0, 0x29F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A0C8u;
    if (runtime->hasFunction(0x28A0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28A0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD10u; }
        if (ctx->pc != 0x17BD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28a0c8_0x28a128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD10u; }
        if (ctx->pc != 0x17BD10u) { return; }
    }
    ctx->pc = 0x17BD10u;
    // 0x17bd10: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x17bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_17bd14:
    // 0x17bd14: 0x248453e4  addiu       $a0, $a0, 0x53E4
    ctx->pc = 0x17bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21476));
    // 0x17bd18: 0xc09eac0  jal         func_27AB00
    ctx->pc = 0x17BD18u;
    SET_GPR_U32(ctx, 31, 0x17BD20u);
    ctx->pc = 0x17BD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD18u;
            // 0x17bd1c: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27AB00u;
    if (runtime->hasFunction(0x27AB00u)) {
        auto targetFn = runtime->lookupFunction(0x27AB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD20u; }
        if (ctx->pc != 0x17BD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27ab00_0x27abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD20u; }
        if (ctx->pc != 0x17BD20u) { return; }
    }
    ctx->pc = 0x17BD20u;
    // 0x17bd20: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17BD20u;
    {
        const bool branch_taken_0x17bd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD20u;
            // 0x17bd24: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd20) {
            ctx->pc = 0x17BD08u;
            runtime->cooperativeGuestYield();
            goto label_17bd08;
        }
    }
    ctx->pc = 0x17BD28u;
    // 0x17bd28: 0xc0a5b12  jal         func_296C48
    ctx->pc = 0x17BD28u;
    SET_GPR_U32(ctx, 31, 0x17BD30u);
    ctx->pc = 0x17BD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD28u;
            // 0x17bd2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296C48u;
    if (runtime->hasFunction(0x296C48u)) {
        auto targetFn = runtime->lookupFunction(0x296C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD30u; }
        if (ctx->pc != 0x17BD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296c48_0x296de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD30u; }
        if (ctx->pc != 0x17BD30u) { return; }
    }
    ctx->pc = 0x17BD30u;
    // 0x17bd30: 0xc0a6016  jal         func_298058
    ctx->pc = 0x17BD30u;
    SET_GPR_U32(ctx, 31, 0x17BD38u);
    ctx->pc = 0x298058u;
    if (runtime->hasFunction(0x298058u)) {
        auto targetFn = runtime->lookupFunction(0x298058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD38u; }
        if (ctx->pc != 0x17BD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298058_0x298058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD38u; }
        if (ctx->pc != 0x17BD38u) { return; }
    }
    ctx->pc = 0x17BD38u;
    // 0x17bd38: 0xc0a62a8  jal         func_298AA0
    ctx->pc = 0x17BD38u;
    SET_GPR_U32(ctx, 31, 0x17BD40u);
    ctx->pc = 0x298AA0u;
    if (runtime->hasFunction(0x298AA0u)) {
        auto targetFn = runtime->lookupFunction(0x298AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD40u; }
        if (ctx->pc != 0x17BD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298AA0_0x298aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD40u; }
        if (ctx->pc != 0x17BD40u) { return; }
    }
    ctx->pc = 0x17BD40u;
    // 0x17bd40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17BD40u;
    {
        const bool branch_taken_0x17bd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bd40) {
            ctx->pc = 0x17BD68u;
            goto label_17bd68;
        }
    }
    ctx->pc = 0x17BD48u;
label_17bd48:
    // 0x17bd48: 0xc0a2832  jal         func_28A0C8
    ctx->pc = 0x17BD48u;
    SET_GPR_U32(ctx, 31, 0x17BD50u);
    ctx->pc = 0x17BD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD48u;
            // 0x17bd4c: 0x248429f8  addiu       $a0, $a0, 0x29F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A0C8u;
    if (runtime->hasFunction(0x28A0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28A0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD50u; }
        if (ctx->pc != 0x17BD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28a0c8_0x28a128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD50u; }
        if (ctx->pc != 0x17BD50u) { return; }
    }
    ctx->pc = 0x17BD50u;
label_17bd50:
    // 0x17bd50: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x17bd50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x17bd54: 0x248453e4  addiu       $a0, $a0, 0x53E4
    ctx->pc = 0x17bd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21476));
    // 0x17bd58: 0xc09eac0  jal         func_27AB00
    ctx->pc = 0x17BD58u;
    SET_GPR_U32(ctx, 31, 0x17BD60u);
    ctx->pc = 0x17BD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD58u;
            // 0x17bd5c: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27AB00u;
    if (runtime->hasFunction(0x27AB00u)) {
        auto targetFn = runtime->lookupFunction(0x27AB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD60u; }
        if (ctx->pc != 0x17BD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27ab00_0x27abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD60u; }
        if (ctx->pc != 0x17BD60u) { return; }
    }
    ctx->pc = 0x17BD60u;
    // 0x17bd60: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17BD60u;
    {
        const bool branch_taken_0x17bd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD60u;
            // 0x17bd64: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd60) {
            ctx->pc = 0x17BD48u;
            runtime->cooperativeGuestYield();
            goto label_17bd48;
        }
    }
    ctx->pc = 0x17BD68u;
label_17bd68:
    // 0x17bd68: 0xc0a61dc  jal         func_298770
    ctx->pc = 0x17BD68u;
    SET_GPR_U32(ctx, 31, 0x17BD70u);
    ctx->pc = 0x17BD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD68u;
            // 0x17bd6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298770u;
    if (runtime->hasFunction(0x298770u)) {
        auto targetFn = runtime->lookupFunction(0x298770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD70u; }
        if (ctx->pc != 0x17BD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_298770_0x2987f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD70u; }
        if (ctx->pc != 0x17BD70u) { return; }
    }
    ctx->pc = 0x17BD70u;
    // 0x17bd70: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x17bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x17bd74: 0x0  nop
    ctx->pc = 0x17bd74u;
    // NOP
label_17bd78:
    // 0x17bd78: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x17bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x17bd7c: 0x2442d970  addiu       $v0, $v0, -0x2690
    ctx->pc = 0x17bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957424));
    // 0x17bd80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17bd80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17bd84: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x17bd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17bd88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17bd8c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x17bd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17bd90: 0xc05eef2  jal         func_17BBC8
    ctx->pc = 0x17BD90u;
    SET_GPR_U32(ctx, 31, 0x17BD98u);
    ctx->pc = 0x17BD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD90u;
            // 0x17bd94: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17BBC8u;
    if (runtime->hasFunction(0x17BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x17BBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD98u; }
        if (ctx->pc != 0x17BD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017BBC8_0x17bbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD98u; }
        if (ctx->pc != 0x17BD98u) { return; }
    }
    ctx->pc = 0x17BD98u;
    // 0x17bd98: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x17bd98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x17bd9c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17BD9Cu;
    {
        const bool branch_taken_0x17bd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD9Cu;
            // 0x17bda0: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd9c) {
            ctx->pc = 0x17BD78u;
            runtime->cooperativeGuestYield();
            goto label_17bd78;
        }
    }
    ctx->pc = 0x17BDA4u;
    // 0x17bda4: 0xc09eb40  jal         func_27AD00
    ctx->pc = 0x17BDA4u;
    SET_GPR_U32(ctx, 31, 0x17BDACu);
    ctx->pc = 0x27AD00u;
    if (runtime->hasFunction(0x27AD00u)) {
        auto targetFn = runtime->lookupFunction(0x27AD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDACu; }
        if (ctx->pc != 0x17BDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027AD00_0x27ad00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDACu; }
        if (ctx->pc != 0x17BDACu) { return; }
    }
    ctx->pc = 0x17BDACu;
    // 0x17bdac: 0xc09f040  jal         func_27C100
    ctx->pc = 0x17BDACu;
    SET_GPR_U32(ctx, 31, 0x17BDB4u);
    ctx->pc = 0x17BDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BDACu;
            // 0x17bdb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27C100u;
    if (runtime->hasFunction(0x27C100u)) {
        auto targetFn = runtime->lookupFunction(0x27C100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDB4u; }
        if (ctx->pc != 0x17BDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027C100_0x27c100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDB4u; }
        if (ctx->pc != 0x17BDB4u) { return; }
    }
    ctx->pc = 0x17BDB4u;
    // 0x17bdb4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x17bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x17bdb8: 0xc0a0d5c  jal         func_283570
    ctx->pc = 0x17BDB8u;
    SET_GPR_U32(ctx, 31, 0x17BDC0u);
    ctx->pc = 0x17BDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BDB8u;
            // 0x17bdbc: 0x2484c4e0  addiu       $a0, $a0, -0x3B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283570u;
    if (runtime->hasFunction(0x283570u)) {
        auto targetFn = runtime->lookupFunction(0x283570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDC0u; }
        if (ctx->pc != 0x17BDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283570_0x283570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDC0u; }
        if (ctx->pc != 0x17BDC0u) { return; }
    }
    ctx->pc = 0x17BDC0u;
    // 0x17bdc0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17bdc4: 0xc04e276  jal         func_1389D8
    ctx->pc = 0x17BDC4u;
    SET_GPR_U32(ctx, 31, 0x17BDCCu);
    ctx->pc = 0x17BDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BDC4u;
            // 0x17bdc8: 0xac62c4dc  sw          $v0, -0x3B24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1389D8u;
    if (runtime->hasFunction(0x1389D8u)) {
        auto targetFn = runtime->lookupFunction(0x1389D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDCCu; }
        if (ctx->pc != 0x17BDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1389d8_0x138cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDCCu; }
        if (ctx->pc != 0x17BDCCu) { return; }
    }
    ctx->pc = 0x17BDCCu;
    // 0x17bdcc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17bdccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bdd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17bdd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bdd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bdd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BDD8u;
            // 0x17bddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BCD0u: goto label_17bcd0;
            case 0x17BCE0u: goto label_17bce0;
            case 0x17BD08u: goto label_17bd08;
            case 0x17BD14u: goto label_17bd14;
            case 0x17BD48u: goto label_17bd48;
            case 0x17BD50u: goto label_17bd50;
            case 0x17BD68u: goto label_17bd68;
            case 0x17BD78u: goto label_17bd78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17BDE0u;
}
