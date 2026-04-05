#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E478
// Address: 0x17e478 - 0x17e528
void sub_0017E478_0x17e478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E478_0x17e478");
#endif

    ctx->pc = 0x17e478u;

    // 0x17e478: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17e478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17e47c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x17e47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x17e480: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17e480u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17e484: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17e484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x17e488: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x17e488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x17e48c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17e48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e490: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17e490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17e494: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17e494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e498: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x17e498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x17e49c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x17e49cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4a0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x17e4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x17e4a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17e4a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4a8: 0x8e02c71c  lw          $v0, -0x38E4($s0)
    ctx->pc = 0x17e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952732)));
    // 0x17e4ac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17e4acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E4B0u;
    {
        const bool branch_taken_0x17e4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4B0u;
            // 0x17e4b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e4b0) {
            ctx->pc = 0x17E4C4u;
            goto label_17e4c4;
        }
    }
    ctx->pc = 0x17E4B8u;
    // 0x17e4b8: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17E4B8u;
    SET_GPR_U32(ctx, 31, 0x17E4C0u);
    ctx->pc = 0x17E4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4B8u;
            // 0x17e4bc: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4C0u; }
        if (ctx->pc != 0x17E4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4C0u; }
        if (ctx->pc != 0x17E4C0u) { return; }
    }
    ctx->pc = 0x17E4C0u;
    // 0x17e4c0: 0xae02c71c  sw          $v0, -0x38E4($s0)
    ctx->pc = 0x17e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952732), GPR_U32(ctx, 2));
label_17e4c4:
    // 0x17e4c4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17E4C4u;
    SET_GPR_U32(ctx, 31, 0x17E4CCu);
    ctx->pc = 0x17E4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4C4u;
            // 0x17e4c8: 0x8e04c71c  lw          $a0, -0x38E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952732)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4CCu; }
        if (ctx->pc != 0x17E4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4CCu; }
        if (ctx->pc != 0x17E4CCu) { return; }
    }
    ctx->pc = 0x17E4CCu;
    // 0x17e4cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17e4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4d0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x17e4d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4d4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x17e4d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17e4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4dc: 0xc08cbe2  jal         func_232F88
    ctx->pc = 0x17E4DCu;
    SET_GPR_U32(ctx, 31, 0x17E4E4u);
    ctx->pc = 0x17E4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4DCu;
            // 0x17e4e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232F88u;
    if (runtime->hasFunction(0x232F88u)) {
        auto targetFn = runtime->lookupFunction(0x232F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4E4u; }
        if (ctx->pc != 0x17E4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232F88_0x232f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4E4u; }
        if (ctx->pc != 0x17E4E4u) { return; }
    }
    ctx->pc = 0x17E4E4u;
    // 0x17e4e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x17e4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4ec: 0xc05f652  jal         func_17D948
    ctx->pc = 0x17E4ECu;
    SET_GPR_U32(ctx, 31, 0x17E4F4u);
    ctx->pc = 0x17E4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4ECu;
            // 0x17e4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D948u;
    if (runtime->hasFunction(0x17D948u)) {
        auto targetFn = runtime->lookupFunction(0x17D948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4F4u; }
        if (ctx->pc != 0x17E4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17d948_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4F4u; }
        if (ctx->pc != 0x17E4F4u) { return; }
    }
    ctx->pc = 0x17E4F4u;
    // 0x17e4f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17e4f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4f8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17e4f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e4fc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17e4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17e500: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x17e500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e504: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17e504u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e508: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x17e508u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e50c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x17e50cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e514: 0x3e00008  jr          $ra
    ctx->pc = 0x17E514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E514u;
            // 0x17e518: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E4C4u: goto label_17e4c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E51Cu;
    // 0x17e51c: 0x0  nop
    ctx->pc = 0x17e51cu;
    // NOP
    // 0x17e520: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17e520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17e524: 0x0  nop
    ctx->pc = 0x17e524u;
    // NOP
}
