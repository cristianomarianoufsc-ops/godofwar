#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021EE30
// Address: 0x21ee30 - 0x21ee90
void sub_0021EE30_0x21ee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EE30_0x21ee30");
#endif

    ctx->pc = 0x21ee30u;

    // 0x21ee30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ee30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ee34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21ee34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21ee38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ee38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ee3c: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21EE3Cu;
    SET_GPR_U32(ctx, 31, 0x21EE44u);
    ctx->pc = 0x21EE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EE3Cu;
            // 0x21ee40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE44u; }
        if (ctx->pc != 0x21EE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE44u; }
        if (ctx->pc != 0x21EE44u) { return; }
    }
    ctx->pc = 0x21EE44u;
    // 0x21ee44: 0xc0879d8  jal         func_21E760
    ctx->pc = 0x21EE44u;
    SET_GPR_U32(ctx, 31, 0x21EE4Cu);
    ctx->pc = 0x21EE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EE44u;
            // 0x21ee48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E760u;
    if (runtime->hasFunction(0x21E760u)) {
        auto targetFn = runtime->lookupFunction(0x21E760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE4Cu; }
        if (ctx->pc != 0x21EE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0021e760_0x21e760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE4Cu; }
        if (ctx->pc != 0x21EE4Cu) { return; }
    }
    ctx->pc = 0x21EE4Cu;
    // 0x21ee4c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21EE4Cu;
    {
        const bool branch_taken_0x21ee4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EE4Cu;
            // 0x21ee50: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee4c) {
            ctx->pc = 0x21EE84u;
            goto label_21ee84;
        }
    }
    ctx->pc = 0x21EE54u;
    // 0x21ee54: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x21ee54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x21ee58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21ee5c: 0x8e02cb94  lw          $v0, -0x346C($s0)
    ctx->pc = 0x21ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21ee60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ee60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee64: 0xc06ef42  jal         func_1BBD08
    ctx->pc = 0x21EE64u;
    SET_GPR_U32(ctx, 31, 0x21EE6Cu);
    ctx->pc = 0x21EE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EE64u;
            // 0x21ee68: 0xac4301a8  sw          $v1, 0x1A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 424), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD08u;
    if (runtime->hasFunction(0x1BBD08u)) {
        auto targetFn = runtime->lookupFunction(0x1BBD08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE6Cu; }
        if (ctx->pc != 0x21EE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBD08_0x1bbd08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE6Cu; }
        if (ctx->pc != 0x21EE6Cu) { return; }
    }
    ctx->pc = 0x21EE6Cu;
    // 0x21ee6c: 0x8e04cb94  lw          $a0, -0x346C($s0)
    ctx->pc = 0x21ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21ee70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21ee70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21ee74: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ee78: 0xac43e560  sw          $v1, -0x1AA0($v0)
    ctx->pc = 0x21ee78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 3));
    // 0x21ee7c: 0xac80027c  sw          $zero, 0x27C($a0)
    ctx->pc = 0x21ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 636), GPR_U32(ctx, 0));
    // 0x21ee80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21ee80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21ee84:
    // 0x21ee84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ee84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ee88: 0x3e00008  jr          $ra
    ctx->pc = 0x21EE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EE88u;
            // 0x21ee8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21EE84u: goto label_21ee84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21EE90u;
}
