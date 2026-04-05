#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DEF0
// Address: 0x17def0 - 0x17df90
void sub_0017DEF0_0x17def0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DEF0_0x17def0");
#endif

    ctx->pc = 0x17def0u;

    // 0x17def0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17def0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17def4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17def4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17def8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17def8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17defc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17defcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17df00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17df00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17df04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17df04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df08: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17df08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17df0c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17df0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df10: 0x8e02c70c  lw          $v0, -0x38F4($s0)
    ctx->pc = 0x17df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952716)));
    // 0x17df14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17df14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DF18u;
    {
        const bool branch_taken_0x17df18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF18u;
            // 0x17df1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df18) {
            ctx->pc = 0x17DF2Cu;
            goto label_17df2c;
        }
    }
    ctx->pc = 0x17DF20u;
    // 0x17df20: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17DF20u;
    SET_GPR_U32(ctx, 31, 0x17DF28u);
    ctx->pc = 0x17DF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF20u;
            // 0x17df24: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF28u; }
        if (ctx->pc != 0x17DF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF28u; }
        if (ctx->pc != 0x17DF28u) { return; }
    }
    ctx->pc = 0x17DF28u;
    // 0x17df28: 0xae02c70c  sw          $v0, -0x38F4($s0)
    ctx->pc = 0x17df28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952716), GPR_U32(ctx, 2));
label_17df2c:
    // 0x17df2c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17DF2Cu;
    SET_GPR_U32(ctx, 31, 0x17DF34u);
    ctx->pc = 0x17DF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF2Cu;
            // 0x17df30: 0x8e04c70c  lw          $a0, -0x38F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952716)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF34u; }
        if (ctx->pc != 0x17DF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF34u; }
        if (ctx->pc != 0x17DF34u) { return; }
    }
    ctx->pc = 0x17DF34u;
    // 0x17df34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17df34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df38: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17df38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17df3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17df3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df40: 0xc060284  jal         func_180A10
    ctx->pc = 0x17DF40u;
    SET_GPR_U32(ctx, 31, 0x17DF48u);
    ctx->pc = 0x17DF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF40u;
            // 0x17df44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF48u; }
        if (ctx->pc != 0x17DF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF48u; }
        if (ctx->pc != 0x17DF48u) { return; }
    }
    ctx->pc = 0x17DF48u;
    // 0x17df48: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17df48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17df4c: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x17df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x17df50: 0x2442ae58  addiu       $v0, $v0, -0x51A8
    ctx->pc = 0x17df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946392));
    // 0x17df54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17df54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17df58: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17df58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17df5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17df5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df60: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17df60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17df64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17df64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df68: 0xc05f652  jal         func_17D948
    ctx->pc = 0x17DF68u;
    SET_GPR_U32(ctx, 31, 0x17DF70u);
    ctx->pc = 0x17DF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF68u;
            // 0x17df6c: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D948u;
    if (runtime->hasFunction(0x17D948u)) {
        auto targetFn = runtime->lookupFunction(0x17D948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF70u; }
        if (ctx->pc != 0x17DF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17d948_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF70u; }
        if (ctx->pc != 0x17DF70u) { return; }
    }
    ctx->pc = 0x17DF70u;
    // 0x17df70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17df70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17df74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17df78: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17df78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17df7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17df7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17df80: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17df80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17df84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17df84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17df88: 0x3e00008  jr          $ra
    ctx->pc = 0x17DF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF88u;
            // 0x17df8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DF2Cu: goto label_17df2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DF90u;
}
