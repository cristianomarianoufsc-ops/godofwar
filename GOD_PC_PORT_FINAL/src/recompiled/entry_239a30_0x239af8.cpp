#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_239a30
// Address: 0x239a30 - 0x239af8
void entry_239a30_0x239af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_239a30_0x239af8");
#endif

    ctx->pc = 0x239a30u;

label_239a30:
    // 0x239a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239a38: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x239a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x239a3c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x239a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x239a40: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x239a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x239a44: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x239A44u;
    {
        const bool branch_taken_0x239a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A44u;
            // 0x239a48: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a44) {
            ctx->pc = 0x239A54u;
            goto label_239a54;
        }
    }
    ctx->pc = 0x239A4Cu;
    // 0x239a4c: 0xc08e68c  jal         func_239A30
    ctx->pc = 0x239A4Cu;
    SET_GPR_U32(ctx, 31, 0x239A54u);
    ctx->pc = 0x239A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239A4Cu;
            // 0x239a50: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239A30u;
    runtime->cooperativeGuestYield();
    goto label_239a30;
    ctx->pc = 0x239A54u;
label_239a54:
    // 0x239a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239a58: 0x3e00008  jr          $ra
    ctx->pc = 0x239A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A58u;
            // 0x239a5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239A30u: goto label_239a30;
            case 0x239A54u: goto label_239a54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239A60u;
    // 0x239a60: 0x3e00008  jr          $ra
    ctx->pc = 0x239A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239A30u: goto label_239a30;
            case 0x239A54u: goto label_239a54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239A68u;
    // 0x239a68: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x239a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x239a6c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x239a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x239a70: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x239a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x239a74: 0x3e00008  jr          $ra
    ctx->pc = 0x239A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A74u;
            // 0x239a78: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239A30u: goto label_239a30;
            case 0x239A54u: goto label_239a54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239A7Cu;
    // 0x239a7c: 0x0  nop
    ctx->pc = 0x239a7cu;
    // NOP
    // 0x239a80: 0x3e00008  jr          $ra
    ctx->pc = 0x239A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A80u;
            // 0x239a84: 0x84820020  lh          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239A30u: goto label_239a30;
            case 0x239A54u: goto label_239a54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239A88u;
    // 0x239a88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x239a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x239a8c: 0x0  nop
    ctx->pc = 0x239a8cu;
    // NOP
    // 0x239a90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x239a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x239a94: 0x0  nop
    ctx->pc = 0x239a94u;
    // NOP
    // 0x239a98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x239a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x239a9c: 0x0  nop
    ctx->pc = 0x239a9cu;
    // NOP
    // 0x239aa0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x239aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x239aa4: 0x0  nop
    ctx->pc = 0x239aa4u;
    // NOP
    // 0x239aa8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x239aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x239aac: 0x0  nop
    ctx->pc = 0x239aacu;
    // NOP
    // 0x239ab0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x239ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x239ab4: 0x0  nop
    ctx->pc = 0x239ab4u;
    // NOP
    // 0x239ab8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x239ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x239abc: 0x0  nop
    ctx->pc = 0x239abcu;
    // NOP
    // 0x239ac0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x239ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x239ac4: 0x0  nop
    ctx->pc = 0x239ac4u;
    // NOP
    // 0x239ac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239acc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x239accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x239ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239ad4: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x239ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x239ad8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x239ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x239adc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x239adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x239ae0: 0xc05fbcc  jal         func_17EF30
    ctx->pc = 0x239AE0u;
    SET_GPR_U32(ctx, 31, 0x239AE8u);
    ctx->pc = 0x239AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239AE0u;
            // 0x239ae4: 0xac60c790  sw          $zero, -0x3870($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952848), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17EF30u;
    if (runtime->hasFunction(0x17EF30u)) {
        auto targetFn = runtime->lookupFunction(0x17EF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239AE8u; }
        if (ctx->pc != 0x239AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EF30_0x17ef30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239AE8u; }
        if (ctx->pc != 0x239AE8u) { return; }
    }
    ctx->pc = 0x239AE8u;
    // 0x239ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239aec: 0x3e00008  jr          $ra
    ctx->pc = 0x239AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239AECu;
            // 0x239af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239A30u: goto label_239a30;
            case 0x239A54u: goto label_239a54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239AF4u;
    // 0x239af4: 0x0  nop
    ctx->pc = 0x239af4u;
    // NOP
}
