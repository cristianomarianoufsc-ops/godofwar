#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285B58
// Address: 0x285b58 - 0x285be0
void sub_00285B58_0x285b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285B58_0x285b58");
#endif

    ctx->pc = 0x285b58u;

    // 0x285b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x285b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x285b5c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x285b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285b64: 0x24a8029c  addiu       $t0, $a1, 0x29C
    ctx->pc = 0x285b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 668));
    // 0x285b68: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x285b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x285b6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x285b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x285b70: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x285b70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x285b74: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x285B74u;
    {
        const bool branch_taken_0x285b74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x285B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285B74u;
            // 0x285b78: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b74) {
            ctx->pc = 0x285BA8u;
            goto label_285ba8;
        }
    }
    ctx->pc = 0x285B7Cu;
    // 0x285b7c: 0x24a70018  addiu       $a3, $a1, 0x18
    ctx->pc = 0x285b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x285b80: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x285b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x285b84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x285b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_285b88:
    // 0x285b88: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x285b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x285b8c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x285b8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285b90: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x285b90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x285b94: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x285b94u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x285b98: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x285b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x285b9c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x285b9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285ba0: 0x5064fff9  beql        $v1, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x285BA0u;
    {
        const bool branch_taken_0x285ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x285ba0) {
            ctx->pc = 0x285BA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285BA0u;
            // 0x285ba4: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x285B88u;
            runtime->cooperativeGuestYield();
            goto label_285b88;
        }
    }
    ctx->pc = 0x285BA8u;
label_285ba8:
    // 0x285ba8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x285ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285bac: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x285bacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285bb0: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x285BB0u;
    {
        const bool branch_taken_0x285bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x285BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285BB0u;
            // 0x285bb4: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285bb0) {
            ctx->pc = 0x285BCCu;
            goto label_285bcc;
        }
    }
    ctx->pc = 0x285BB8u;
    // 0x285bb8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x285bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x285bbc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x285bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x285bc0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x285bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x285bc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x285BC4u;
    {
        const bool branch_taken_0x285bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285BC4u;
            // 0x285bc8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285bc4) {
            ctx->pc = 0x285BD4u;
            goto label_285bd4;
        }
    }
    ctx->pc = 0x285BCCu;
label_285bcc:
    // 0x285bcc: 0xc0a2c50  jal         func_28B140
    ctx->pc = 0x285BCCu;
    SET_GPR_U32(ctx, 31, 0x285BD4u);
    ctx->pc = 0x28B140u;
    if (runtime->hasFunction(0x28B140u)) {
        auto targetFn = runtime->lookupFunction(0x28B140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285BD4u; }
        if (ctx->pc != 0x285BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B140_0x28b140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285BD4u; }
        if (ctx->pc != 0x285BD4u) { return; }
    }
    ctx->pc = 0x285BD4u;
label_285bd4:
    // 0x285bd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x285BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285BD8u;
            // 0x285bdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285B88u: goto label_285b88;
            case 0x285BA8u: goto label_285ba8;
            case 0x285BCCu: goto label_285bcc;
            case 0x285BD4u: goto label_285bd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285BE0u;
}
