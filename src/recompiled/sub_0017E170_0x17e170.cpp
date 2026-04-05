#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E170
// Address: 0x17e170 - 0x17e210
void sub_0017E170_0x17e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E170_0x17e170");
#endif

    ctx->pc = 0x17e170u;

    // 0x17e170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17e170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17e174: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17e174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17e178: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17e178u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17e17c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17e17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17e180: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17e180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17e184: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17e184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e188: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17e188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17e18c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17e18cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e190: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x17e190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x17e194: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17e194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e198: 0x8e02c728  lw          $v0, -0x38D8($s0)
    ctx->pc = 0x17e198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952744)));
    // 0x17e19c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17e19cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E1A0u;
    {
        const bool branch_taken_0x17e1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1A0u;
            // 0x17e1a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e1a0) {
            ctx->pc = 0x17E1B4u;
            goto label_17e1b4;
        }
    }
    ctx->pc = 0x17E1A8u;
    // 0x17e1a8: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17E1A8u;
    SET_GPR_U32(ctx, 31, 0x17E1B0u);
    ctx->pc = 0x17E1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1A8u;
            // 0x17e1ac: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1B0u; }
        if (ctx->pc != 0x17E1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1B0u; }
        if (ctx->pc != 0x17E1B0u) { return; }
    }
    ctx->pc = 0x17E1B0u;
    // 0x17e1b0: 0xae02c728  sw          $v0, -0x38D8($s0)
    ctx->pc = 0x17e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952744), GPR_U32(ctx, 2));
label_17e1b4:
    // 0x17e1b4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17E1B4u;
    SET_GPR_U32(ctx, 31, 0x17E1BCu);
    ctx->pc = 0x17E1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1B4u;
            // 0x17e1b8: 0x8e04c728  lw          $a0, -0x38D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952744)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1BCu; }
        if (ctx->pc != 0x17E1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1BCu; }
        if (ctx->pc != 0x17E1BCu) { return; }
    }
    ctx->pc = 0x17E1BCu;
    // 0x17e1bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17e1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1c0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x17e1c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x17e1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e1c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17e1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1cc: 0xc05f884  jal         func_17E210
    ctx->pc = 0x17E1CCu;
    SET_GPR_U32(ctx, 31, 0x17E1D4u);
    ctx->pc = 0x17E1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1CCu;
            // 0x17e1d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E210u;
    if (runtime->hasFunction(0x17E210u)) {
        auto targetFn = runtime->lookupFunction(0x17E210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1D4u; }
        if (ctx->pc != 0x17E1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e210_0x17e2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1D4u; }
        if (ctx->pc != 0x17E1D4u) { return; }
    }
    ctx->pc = 0x17E1D4u;
    // 0x17e1d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17e1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1dc: 0xc05f652  jal         func_17D948
    ctx->pc = 0x17E1DCu;
    SET_GPR_U32(ctx, 31, 0x17E1E4u);
    ctx->pc = 0x17E1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1DCu;
            // 0x17e1e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D948u;
    if (runtime->hasFunction(0x17D948u)) {
        auto targetFn = runtime->lookupFunction(0x17D948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1E4u; }
        if (ctx->pc != 0x17E1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17d948_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1E4u; }
        if (ctx->pc != 0x17E1E4u) { return; }
    }
    ctx->pc = 0x17E1E4u;
    // 0x17e1e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17e1e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17e1e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e1ec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17e1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e1f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17e1f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e1f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x17e1f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e1f8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x17e1f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e1fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e200: 0x3e00008  jr          $ra
    ctx->pc = 0x17E200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E200u;
            // 0x17e204: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E1B4u: goto label_17e1b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E208u;
    // 0x17e208: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17e208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17e20c: 0x0  nop
    ctx->pc = 0x17e20cu;
    // NOP
}
