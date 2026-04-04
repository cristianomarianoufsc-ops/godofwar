#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DDB0
// Address: 0x17ddb0 - 0x17de50
void sub_0017DDB0_0x17ddb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DDB0_0x17ddb0");
#endif

    ctx->pc = 0x17ddb0u;

    // 0x17ddb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17ddb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17ddb4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17ddb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17ddb8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17ddb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17ddbc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17ddbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17ddc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17ddc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17ddc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17ddc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddc8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17ddc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17ddcc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17ddccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddd0: 0x8e02c710  lw          $v0, -0x38F0($s0)
    ctx->pc = 0x17ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952720)));
    // 0x17ddd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17ddd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DDD8u;
    {
        const bool branch_taken_0x17ddd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DDD8u;
            // 0x17dddc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ddd8) {
            ctx->pc = 0x17DDECu;
            goto label_17ddec;
        }
    }
    ctx->pc = 0x17DDE0u;
    // 0x17dde0: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17DDE0u;
    SET_GPR_U32(ctx, 31, 0x17DDE8u);
    ctx->pc = 0x17DDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DDE0u;
            // 0x17dde4: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDE8u; }
        if (ctx->pc != 0x17DDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDE8u; }
        if (ctx->pc != 0x17DDE8u) { return; }
    }
    ctx->pc = 0x17DDE8u;
    // 0x17dde8: 0xae02c710  sw          $v0, -0x38F0($s0)
    ctx->pc = 0x17dde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952720), GPR_U32(ctx, 2));
label_17ddec:
    // 0x17ddec: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17DDECu;
    SET_GPR_U32(ctx, 31, 0x17DDF4u);
    ctx->pc = 0x17DDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DDECu;
            // 0x17ddf0: 0x8e04c710  lw          $a0, -0x38F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952720)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDF4u; }
        if (ctx->pc != 0x17DDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDF4u; }
        if (ctx->pc != 0x17DDF4u) { return; }
    }
    ctx->pc = 0x17DDF4u;
    // 0x17ddf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17ddf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddf8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17ddf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17ddfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ddfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de00: 0xc060284  jal         func_180A10
    ctx->pc = 0x17DE00u;
    SET_GPR_U32(ctx, 31, 0x17DE08u);
    ctx->pc = 0x17DE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE00u;
            // 0x17de04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE08u; }
        if (ctx->pc != 0x17DE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE08u; }
        if (ctx->pc != 0x17DE08u) { return; }
    }
    ctx->pc = 0x17DE08u;
    // 0x17de08: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17de08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17de0c: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x17de0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x17de10: 0x2442ade0  addiu       $v0, $v0, -0x5220
    ctx->pc = 0x17de10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946272));
    // 0x17de14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17de14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17de18: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17de18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17de1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17de1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de20: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17de20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17de24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17de24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de28: 0xc05f652  jal         func_17D948
    ctx->pc = 0x17DE28u;
    SET_GPR_U32(ctx, 31, 0x17DE30u);
    ctx->pc = 0x17DE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE28u;
            // 0x17de2c: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D948u;
    if (runtime->hasFunction(0x17D948u)) {
        auto targetFn = runtime->lookupFunction(0x17D948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE30u; }
        if (ctx->pc != 0x17DE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17d948_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE30u; }
        if (ctx->pc != 0x17DE30u) { return; }
    }
    ctx->pc = 0x17DE30u;
    // 0x17de30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17de30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de34: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17de34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17de38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17de38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17de3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17de3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17de40: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17de40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17de44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17de44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17de48: 0x3e00008  jr          $ra
    ctx->pc = 0x17DE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE48u;
            // 0x17de4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DDECu: goto label_17ddec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DE50u;
}
