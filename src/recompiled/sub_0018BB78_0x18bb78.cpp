#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018BB78
// Address: 0x18bb78 - 0x18bbf0
void sub_0018BB78_0x18bb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BB78_0x18bb78");
#endif

    ctx->pc = 0x18bb78u;

    // 0x18bb78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18bb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18bb7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18bb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18bb80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18bb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18bb84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18bb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bb88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18bb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18bb8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18bb8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bb90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bb94: 0xc045ada  jal         func_116B68
    ctx->pc = 0x18BB94u;
    SET_GPR_U32(ctx, 31, 0x18BB9Cu);
    ctx->pc = 0x18BB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB94u;
            // 0x18bb98: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116B68u;
    if (runtime->hasFunction(0x116B68u)) {
        auto targetFn = runtime->lookupFunction(0x116B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB9Cu; }
        if (ctx->pc != 0x18BB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116b68_0x116bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB9Cu; }
        if (ctx->pc != 0x18BB9Cu) { return; }
    }
    ctx->pc = 0x18BB9Cu;
    // 0x18bb9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18bb9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bba0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18BBA0u;
    {
        const bool branch_taken_0x18bba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bba0) {
            ctx->pc = 0x18BBA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18BBA0u;
            // 0x18bba4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BBBCu;
            goto label_18bbbc;
        }
    }
    ctx->pc = 0x18BBA8u;
    // 0x18bba8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x18bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18bbac: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x18bbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x18bbb0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x18bbb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18BBB4u;
    {
        const bool branch_taken_0x18bbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BBB4u;
            // 0x18bbb8: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bbb4) {
            ctx->pc = 0x18BBD8u;
            goto label_18bbd8;
        }
    }
    ctx->pc = 0x18BBBCu;
label_18bbbc:
    // 0x18bbbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bbc0: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x18BBC0u;
    SET_GPR_U32(ctx, 31, 0x18BBC8u);
    ctx->pc = 0x18BBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BBC0u;
            // 0x18bbc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BBC8u; }
        if (ctx->pc != 0x18BBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BBC8u; }
        if (ctx->pc != 0x18BBC8u) { return; }
    }
    ctx->pc = 0x18BBC8u;
    // 0x18bbc8: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x18bbc8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x18bbcc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x18bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x18bbd0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x18bbd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x18bbd4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x18bbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_18bbd8:
    // 0x18bbd8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18bbd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bbdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18bbdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bbe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18bbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x18BBE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BBE4u;
            // 0x18bbe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BBBCu: goto label_18bbbc;
            case 0x18BBD8u: goto label_18bbd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18BBECu;
    // 0x18bbec: 0x0  nop
    ctx->pc = 0x18bbecu;
    // NOP
}
