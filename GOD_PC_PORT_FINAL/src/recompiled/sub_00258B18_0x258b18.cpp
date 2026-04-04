#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00258B18
// Address: 0x258b18 - 0x258b98
void sub_00258B18_0x258b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258B18_0x258b18");
#endif

    ctx->pc = 0x258b18u;

    // 0x258b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x258b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x258b1c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x258b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x258b20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258b24: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x258b24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b28: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x258b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x258b2c: 0xc08e218  jal         func_238860
    ctx->pc = 0x258B2Cu;
    SET_GPR_U32(ctx, 31, 0x258B34u);
    ctx->pc = 0x258B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258B2Cu;
            // 0x258b30: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B34u; }
        if (ctx->pc != 0x258B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B34u; }
        if (ctx->pc != 0x258B34u) { return; }
    }
    ctx->pc = 0x258B34u;
    // 0x258b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258b38: 0x3e00008  jr          $ra
    ctx->pc = 0x258B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258B38u;
            // 0x258b3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x258B80u: goto label_258b80;
            case 0x258B84u: goto label_258b84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x258B40u;
    // 0x258b40: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x258b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x258b44: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x258b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x258b48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258b4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x258b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x258b50: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x258b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x258b54: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x258b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x258b58: 0x3e00008  jr          $ra
    ctx->pc = 0x258B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258B58u;
            // 0x258b5c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x258B80u: goto label_258b80;
            case 0x258B84u: goto label_258b84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x258B60u;
    // 0x258b60: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x258b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x258b64: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x258b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x258b68: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x258B68u;
    {
        const bool branch_taken_0x258b68 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x258B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258B68u;
            // 0x258b6c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b68) {
            ctx->pc = 0x258B80u;
            goto label_258b80;
        }
    }
    ctx->pc = 0x258B70u;
    // 0x258b70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x258b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x258b74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x258B74u;
    {
        const bool branch_taken_0x258b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258B74u;
            // 0x258b78: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b74) {
            ctx->pc = 0x258B84u;
            goto label_258b84;
        }
    }
    ctx->pc = 0x258B7Cu;
    // 0x258b7c: 0x0  nop
    ctx->pc = 0x258b7cu;
    // NOP
label_258b80:
    // 0x258b80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x258b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_258b84:
    // 0x258b84: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x258b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x258b88: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x258b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x258b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x258B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258B8Cu;
            // 0x258b90: 0xac830080  sw          $v1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x258B80u: goto label_258b80;
            case 0x258B84u: goto label_258b84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x258B94u;
    // 0x258b94: 0x0  nop
    ctx->pc = 0x258b94u;
    // NOP
}
