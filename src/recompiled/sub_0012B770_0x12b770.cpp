#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012B770
// Address: 0x12b770 - 0x12b808
void sub_0012B770_0x12b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B770_0x12b770");
#endif

    ctx->pc = 0x12b770u;

    // 0x12b770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12b770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12b774: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x12b774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x12b778: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x12b778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x12b77c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12b77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12b780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12b780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b784: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x12b784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x12b788: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x12b788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b78c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x12b78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x12b790: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12b790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b798: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x12b798u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x12b79c: 0x2412000d  addiu       $s2, $zero, 0xD
    ctx->pc = 0x12b79cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12b7a0: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x12b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x12b7a4: 0xae82bdec  sw          $v0, -0x4214($s4)
    ctx->pc = 0x12b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294950380), GPR_U32(ctx, 2));
label_12b7a8:
    // 0x12b7a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x12b7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b7ac: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B7ACu;
    {
        const bool branch_taken_0x12b7ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b7ac) {
            ctx->pc = 0x12B7B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7ACu;
            // 0x12b7b0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B7C4u;
            goto label_12b7c4;
        }
    }
    ctx->pc = 0x12B7B4u;
    // 0x12b7b4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x12B7B4u;
    SET_GPR_U32(ctx, 31, 0x12B7BCu);
    ctx->pc = 0x12B7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7B4u;
            // 0x12b7b8: 0x8e84bdec  lw          $a0, -0x4214($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950380)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B7BCu; }
        if (ctx->pc != 0x12B7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B7BCu; }
        if (ctx->pc != 0x12B7BCu) { return; }
    }
    ctx->pc = 0x12B7BCu;
    // 0x12b7bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x12b7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x12b7c0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x12b7c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_12b7c4:
    // 0x12b7c4: 0x641fff8  bgez        $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12B7C4u;
    {
        const bool branch_taken_0x12b7c4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x12B7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7C4u;
            // 0x12b7c8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7c4) {
            ctx->pc = 0x12B7A8u;
            runtime->cooperativeGuestYield();
            goto label_12b7a8;
        }
    }
    ctx->pc = 0x12B7CCu;
    // 0x12b7cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x12b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x12b7d0: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x12b7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x12b7d4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B7D4u;
    {
        const bool branch_taken_0x12b7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7D4u;
            // 0x12b7d8: 0xac40bdec  sw          $zero, -0x4214($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7d4) {
            ctx->pc = 0x12B7E4u;
            goto label_12b7e4;
        }
    }
    ctx->pc = 0x12B7DCu;
    // 0x12b7dc: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x12B7DCu;
    SET_GPR_U32(ctx, 31, 0x12B7E4u);
    ctx->pc = 0x12B7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7DCu;
            // 0x12b7e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B7E4u; }
        if (ctx->pc != 0x12B7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B7E4u; }
        if (ctx->pc != 0x12B7E4u) { return; }
    }
    ctx->pc = 0x12B7E4u;
label_12b7e4:
    // 0x12b7e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x12b7e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12b7e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x12b7e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b7ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12b7ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b7f0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x12b7f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b7f4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x12b7f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x12B7FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7FCu;
            // 0x12b800: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B7A8u: goto label_12b7a8;
            case 0x12B7C4u: goto label_12b7c4;
            case 0x12B7E4u: goto label_12b7e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B804u;
    // 0x12b804: 0x0  nop
    ctx->pc = 0x12b804u;
    // NOP
}
