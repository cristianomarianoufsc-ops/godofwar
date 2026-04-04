#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DD10
// Address: 0x17dd10 - 0x17ddb0
void sub_0017DD10_0x17dd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DD10_0x17dd10");
#endif

    ctx->pc = 0x17dd10u;

    // 0x17dd10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17dd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17dd14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17dd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17dd18: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17dd18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17dd1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17dd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17dd20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17dd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17dd24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17dd24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd28: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17dd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17dd2c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17dd2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd30: 0x8e02c714  lw          $v0, -0x38EC($s0)
    ctx->pc = 0x17dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952724)));
    // 0x17dd34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17dd34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DD38u;
    {
        const bool branch_taken_0x17dd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD38u;
            // 0x17dd3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd38) {
            ctx->pc = 0x17DD4Cu;
            goto label_17dd4c;
        }
    }
    ctx->pc = 0x17DD40u;
    // 0x17dd40: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17DD40u;
    SET_GPR_U32(ctx, 31, 0x17DD48u);
    ctx->pc = 0x17DD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD40u;
            // 0x17dd44: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD48u; }
        if (ctx->pc != 0x17DD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD48u; }
        if (ctx->pc != 0x17DD48u) { return; }
    }
    ctx->pc = 0x17DD48u;
    // 0x17dd48: 0xae02c714  sw          $v0, -0x38EC($s0)
    ctx->pc = 0x17dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952724), GPR_U32(ctx, 2));
label_17dd4c:
    // 0x17dd4c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17DD4Cu;
    SET_GPR_U32(ctx, 31, 0x17DD54u);
    ctx->pc = 0x17DD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD4Cu;
            // 0x17dd50: 0x8e04c714  lw          $a0, -0x38EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952724)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD54u; }
        if (ctx->pc != 0x17DD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD54u; }
        if (ctx->pc != 0x17DD54u) { return; }
    }
    ctx->pc = 0x17DD54u;
    // 0x17dd54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17dd54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd58: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17dd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17dd5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17dd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd60: 0xc060284  jal         func_180A10
    ctx->pc = 0x17DD60u;
    SET_GPR_U32(ctx, 31, 0x17DD68u);
    ctx->pc = 0x17DD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD60u;
            // 0x17dd64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD68u; }
        if (ctx->pc != 0x17DD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD68u; }
        if (ctx->pc != 0x17DD68u) { return; }
    }
    ctx->pc = 0x17DD68u;
    // 0x17dd68: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17dd6c: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x17dd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x17dd70: 0x2442ad68  addiu       $v0, $v0, -0x5298
    ctx->pc = 0x17dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946152));
    // 0x17dd74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17dd78: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17dd7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17dd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd80: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17dd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17dd84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17dd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd88: 0xc05f652  jal         func_17D948
    ctx->pc = 0x17DD88u;
    SET_GPR_U32(ctx, 31, 0x17DD90u);
    ctx->pc = 0x17DD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD88u;
            // 0x17dd8c: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D948u;
    if (runtime->hasFunction(0x17D948u)) {
        auto targetFn = runtime->lookupFunction(0x17D948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD90u; }
        if (ctx->pc != 0x17DD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17d948_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD90u; }
        if (ctx->pc != 0x17DD90u) { return; }
    }
    ctx->pc = 0x17DD90u;
    // 0x17dd90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17dd90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd94: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17dd94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dd98: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17dd98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17dd9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17dd9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dda0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17dda0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dda4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17dda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dda8: 0x3e00008  jr          $ra
    ctx->pc = 0x17DDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DDA8u;
            // 0x17ddac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DD4Cu: goto label_17dd4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DDB0u;
}
