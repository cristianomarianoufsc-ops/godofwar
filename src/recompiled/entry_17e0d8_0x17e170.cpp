#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17e0d8
// Address: 0x17e0d8 - 0x17e170
void entry_17e0d8_0x17e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17e0d8_0x17e170");
#endif

    ctx->pc = 0x17e0d8u;

    // 0x17e0d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17e0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17e0dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17e0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17e0e0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17e0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17e0e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17e0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17e0e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17e0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17e0ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17e0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17e0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17e0f4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17e0f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0f8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x17e0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x17e0fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17e0fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e100: 0x8e02c728  lw          $v0, -0x38D8($s0)
    ctx->pc = 0x17e100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952744)));
    // 0x17e104: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17e104u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e108: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E108u;
    {
        const bool branch_taken_0x17e108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E108u;
            // 0x17e10c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e108) {
            ctx->pc = 0x17E11Cu;
            goto label_17e11c;
        }
    }
    ctx->pc = 0x17E110u;
    // 0x17e110: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17E110u;
    SET_GPR_U32(ctx, 31, 0x17E118u);
    ctx->pc = 0x17E114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E110u;
            // 0x17e114: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E118u; }
        if (ctx->pc != 0x17E118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E118u; }
        if (ctx->pc != 0x17E118u) { return; }
    }
    ctx->pc = 0x17E118u;
    // 0x17e118: 0xae02c728  sw          $v0, -0x38D8($s0)
    ctx->pc = 0x17e118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952744), GPR_U32(ctx, 2));
label_17e11c:
    // 0x17e11c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17E11Cu;
    SET_GPR_U32(ctx, 31, 0x17E124u);
    ctx->pc = 0x17E120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E11Cu;
            // 0x17e120: 0x8e04c728  lw          $a0, -0x38D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952744)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E124u; }
        if (ctx->pc != 0x17E124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E124u; }
        if (ctx->pc != 0x17E124u) { return; }
    }
    ctx->pc = 0x17E124u;
    // 0x17e124: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17e124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e128: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x17e128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e12c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e12cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e130: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17e130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e134: 0xc05f884  jal         func_17E210
    ctx->pc = 0x17E134u;
    SET_GPR_U32(ctx, 31, 0x17E13Cu);
    ctx->pc = 0x17E138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E134u;
            // 0x17e138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E210u;
    if (runtime->hasFunction(0x17E210u)) {
        auto targetFn = runtime->lookupFunction(0x17E210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E13Cu; }
        if (ctx->pc != 0x17E13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e210_0x17e2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E13Cu; }
        if (ctx->pc != 0x17E13Cu) { return; }
    }
    ctx->pc = 0x17E13Cu;
    // 0x17e13c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e140: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17e140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e144: 0xc05f652  jal         func_17D948
    ctx->pc = 0x17E144u;
    SET_GPR_U32(ctx, 31, 0x17E14Cu);
    ctx->pc = 0x17E148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E144u;
            // 0x17e148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D948u;
    if (runtime->hasFunction(0x17D948u)) {
        auto targetFn = runtime->lookupFunction(0x17D948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E14Cu; }
        if (ctx->pc != 0x17E14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17d948_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E14Cu; }
        if (ctx->pc != 0x17E14Cu) { return; }
    }
    ctx->pc = 0x17E14Cu;
    // 0x17e14c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17e14cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e150: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17e150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e154: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17e154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e158: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17e158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e15c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x17e15cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e160: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x17e160u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e168: 0x3e00008  jr          $ra
    ctx->pc = 0x17E168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E168u;
            // 0x17e16c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E11Cu: goto label_17e11c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E170u;
}
