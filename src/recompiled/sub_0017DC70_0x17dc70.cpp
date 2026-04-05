#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DC70
// Address: 0x17dc70 - 0x17dd10
void sub_0017DC70_0x17dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DC70_0x17dc70");
#endif

    ctx->pc = 0x17dc70u;

    // 0x17dc70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17dc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17dc74: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17dc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17dc78: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17dc78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17dc7c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17dc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17dc80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17dc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17dc84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17dc84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc88: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17dc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17dc8c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17dc8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc90: 0x8e02c708  lw          $v0, -0x38F8($s0)
    ctx->pc = 0x17dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952712)));
    // 0x17dc94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17dc94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DC98u;
    {
        const bool branch_taken_0x17dc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC98u;
            // 0x17dc9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc98) {
            ctx->pc = 0x17DCACu;
            goto label_17dcac;
        }
    }
    ctx->pc = 0x17DCA0u;
    // 0x17dca0: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17DCA0u;
    SET_GPR_U32(ctx, 31, 0x17DCA8u);
    ctx->pc = 0x17DCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DCA0u;
            // 0x17dca4: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCA8u; }
        if (ctx->pc != 0x17DCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCA8u; }
        if (ctx->pc != 0x17DCA8u) { return; }
    }
    ctx->pc = 0x17DCA8u;
    // 0x17dca8: 0xae02c708  sw          $v0, -0x38F8($s0)
    ctx->pc = 0x17dca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952712), GPR_U32(ctx, 2));
label_17dcac:
    // 0x17dcac: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17DCACu;
    SET_GPR_U32(ctx, 31, 0x17DCB4u);
    ctx->pc = 0x17DCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DCACu;
            // 0x17dcb0: 0x8e04c708  lw          $a0, -0x38F8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCB4u; }
        if (ctx->pc != 0x17DCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCB4u; }
        if (ctx->pc != 0x17DCB4u) { return; }
    }
    ctx->pc = 0x17DCB4u;
    // 0x17dcb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17dcb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dcb8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17dcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17dcbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17dcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dcc0: 0xc060284  jal         func_180A10
    ctx->pc = 0x17DCC0u;
    SET_GPR_U32(ctx, 31, 0x17DCC8u);
    ctx->pc = 0x17DCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DCC0u;
            // 0x17dcc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCC8u; }
        if (ctx->pc != 0x17DCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCC8u; }
        if (ctx->pc != 0x17DCC8u) { return; }
    }
    ctx->pc = 0x17DCC8u;
    // 0x17dcc8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17dccc: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x17dcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x17dcd0: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x17dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x17dcd4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17dcd8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x17dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x17dcdc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17dcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dce0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17dce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17dce4: 0xc05f652  jal         func_17D948
    ctx->pc = 0x17DCE4u;
    SET_GPR_U32(ctx, 31, 0x17DCECu);
    ctx->pc = 0x17DCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DCE4u;
            // 0x17dce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D948u;
    if (runtime->hasFunction(0x17D948u)) {
        auto targetFn = runtime->lookupFunction(0x17D948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCECu; }
        if (ctx->pc != 0x17DCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17d948_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCECu; }
        if (ctx->pc != 0x17DCECu) { return; }
    }
    ctx->pc = 0x17DCECu;
    // 0x17dcec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17dcecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dcf0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17dcf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dcf4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17dcf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17dcf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17dcf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dcfc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17dcfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dd00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17dd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dd04: 0x3e00008  jr          $ra
    ctx->pc = 0x17DD04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD04u;
            // 0x17dd08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DCACu: goto label_17dcac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DD0Cu;
    // 0x17dd0c: 0x0  nop
    ctx->pc = 0x17dd0cu;
    // NOP
}
