#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9B08
// Address: 0x1f9b08 - 0x1f9de8
void sub_001F9B08_0x1f9b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9B08_0x1f9b08");
#endif

    ctx->pc = 0x1f9b08u;

    // 0x1f9b08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f9b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f9b0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f9b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f9b10: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f9b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f9b14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f9b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f9b1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f9b1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9b24: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1f9b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1f9b28: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1f9b28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f9b2c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1f9b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1f9b30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F9B30u;
    {
        const bool branch_taken_0x1f9b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9B30u;
            // 0x1f9b34: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b30) {
            ctx->pc = 0x1F9B68u;
            goto label_1f9b68;
        }
    }
    ctx->pc = 0x1F9B38u;
    // 0x1f9b38: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1f9b38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f9b3c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1f9b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1f9b40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f9b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f9b44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f9b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f9b48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f9b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f9b4c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f9b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f9b50: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f9b50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1f9b54: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1f9b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1f9b58: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9B60u);
        ctx->pc = 0x1F9B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9B58u;
            // 0x1f9b5c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9B60u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9B68u: goto label_1f9b68;
            case 0x1F9BB0u: goto label_1f9bb0;
            case 0x1F9BE8u: goto label_1f9be8;
            case 0x1F9C28u: goto label_1f9c28;
            case 0x1F9C60u: goto label_1f9c60;
            case 0x1F9CA0u: goto label_1f9ca0;
            case 0x1F9CD8u: goto label_1f9cd8;
            case 0x1F9D18u: goto label_1f9d18;
            case 0x1F9D50u: goto label_1f9d50;
            case 0x1F9D90u: goto label_1f9d90;
            case 0x1F9DD0u: goto label_1f9dd0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B60u; }
            if (ctx->pc != 0x1F9B60u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9B60u;
    // 0x1f9b60: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1f9b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1f9b64: 0x0  nop
    ctx->pc = 0x1f9b64u;
    // NOP
label_1f9b68:
    // 0x1f9b68: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1f9b68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f9b6c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1f9b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1f9b70: 0x2471e848  addiu       $s1, $v1, -0x17B8
    ctx->pc = 0x1f9b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x1f9b74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9b78: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f9b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f9b7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9b80: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f9b84: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1f9b84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1f9b88: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1f9b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1f9b8c: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9B94u);
        ctx->pc = 0x1F9B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9B8Cu;
            // 0x1f9b90: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9B94u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9B68u: goto label_1f9b68;
            case 0x1F9BB0u: goto label_1f9bb0;
            case 0x1F9BE8u: goto label_1f9be8;
            case 0x1F9C28u: goto label_1f9c28;
            case 0x1F9C60u: goto label_1f9c60;
            case 0x1F9CA0u: goto label_1f9ca0;
            case 0x1F9CD8u: goto label_1f9cd8;
            case 0x1F9D18u: goto label_1f9d18;
            case 0x1F9D50u: goto label_1f9d50;
            case 0x1F9D90u: goto label_1f9d90;
            case 0x1F9DD0u: goto label_1f9dd0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B94u; }
            if (ctx->pc != 0x1F9B94u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9B94u;
    // 0x1f9b94: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x1f9b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1f9b98: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9B98u;
    {
        const bool branch_taken_0x1f9b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9b98) {
            ctx->pc = 0x1F9B9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9B98u;
            // 0x1f9b9c: 0x8e0500c8  lw          $a1, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9BB0u;
            goto label_1f9bb0;
        }
    }
    ctx->pc = 0x1F9BA0u;
    // 0x1f9ba0: 0xc08f75e  jal         func_23DD78
    ctx->pc = 0x1F9BA0u;
    SET_GPR_U32(ctx, 31, 0x1F9BA8u);
    ctx->pc = 0x1F9BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9BA0u;
            // 0x1f9ba4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DD78u;
    if (runtime->hasFunction(0x23DD78u)) {
        auto targetFn = runtime->lookupFunction(0x23DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9BA8u; }
        if (ctx->pc != 0x1F9BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23dd78_0x23ddc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9BA8u; }
        if (ctx->pc != 0x1F9BA8u) { return; }
    }
    ctx->pc = 0x1F9BA8u;
    // 0x1f9ba8: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x1f9ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x1f9bac: 0x0  nop
    ctx->pc = 0x1f9bacu;
    // NOP
label_1f9bb0:
    // 0x1f9bb0: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1f9bb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f9bb4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1f9bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1f9bb8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F9BB8u;
    {
        const bool branch_taken_0x1f9bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9bb8) {
            ctx->pc = 0x1F9BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9BB8u;
            // 0x1f9bbc: 0x8e0500c8  lw          $a1, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9BE8u;
            goto label_1f9be8;
        }
    }
    ctx->pc = 0x1F9BC0u;
    // 0x1f9bc0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1f9bc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f9bc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9bc8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f9bcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9bd0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f9bd4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f9bd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1f9bd8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1f9bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1f9bdc: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9BE4u);
        ctx->pc = 0x1F9BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9BDCu;
            // 0x1f9be0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9BE4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9B68u: goto label_1f9b68;
            case 0x1F9BB0u: goto label_1f9bb0;
            case 0x1F9BE8u: goto label_1f9be8;
            case 0x1F9C28u: goto label_1f9c28;
            case 0x1F9C60u: goto label_1f9c60;
            case 0x1F9CA0u: goto label_1f9ca0;
            case 0x1F9CD8u: goto label_1f9cd8;
            case 0x1F9D18u: goto label_1f9d18;
            case 0x1F9D50u: goto label_1f9d50;
            case 0x1F9D90u: goto label_1f9d90;
            case 0x1F9DD0u: goto label_1f9dd0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9BE4u; }
            if (ctx->pc != 0x1F9BE4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9BE4u;
    // 0x1f9be4: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x1f9be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_1f9be8:
    // 0x1f9be8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1f9be8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f9bec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9bf0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f9bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f9bf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9bf8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f9bfc: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1f9bfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1f9c00: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1f9c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1f9c04: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9C0Cu);
        ctx->pc = 0x1F9C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C04u;
            // 0x1f9c08: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9C0Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9B68u: goto label_1f9b68;
            case 0x1F9BB0u: goto label_1f9bb0;
            case 0x1F9BE8u: goto label_1f9be8;
            case 0x1F9C28u: goto label_1f9c28;
            case 0x1F9C60u: goto label_1f9c60;
            case 0x1F9CA0u: goto label_1f9ca0;
            case 0x1F9CD8u: goto label_1f9cd8;
            case 0x1F9D18u: goto label_1f9d18;
            case 0x1F9D50u: goto label_1f9d50;
            case 0x1F9D90u: goto label_1f9d90;
            case 0x1F9DD0u: goto label_1f9dd0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C0Cu; }
            if (ctx->pc != 0x1F9C0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F9C0Cu;
    // 0x1f9c0c: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x1f9c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x1f9c10: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9C10u;
    {
        const bool branch_taken_0x1f9c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9c10) {
            ctx->pc = 0x1F9C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C10u;
            // 0x1f9c14: 0x8e0500c0  lw          $a1, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9C28u;
            goto label_1f9c28;
        }
    }
    ctx->pc = 0x1F9C18u;
    // 0x1f9c18: 0xc08f75e  jal         func_23DD78
    ctx->pc = 0x1F9C18u;
    SET_GPR_U32(ctx, 31, 0x1F9C20u);
    ctx->pc = 0x1F9C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C18u;
            // 0x1f9c1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DD78u;
    if (runtime->hasFunction(0x23DD78u)) {
        auto targetFn = runtime->lookupFunction(0x23DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C20u; }
        if (ctx->pc != 0x1F9C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23dd78_0x23ddc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C20u; }
        if (ctx->pc != 0x1F9C20u) { return; }
    }
    ctx->pc = 0x1F9C20u;
    // 0x1f9c20: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x1f9c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1f9c24: 0x0  nop
    ctx->pc = 0x1f9c24u;
    // NOP
label_1f9c28:
    // 0x1f9c28: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1f9c28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f9c2c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1f9c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1f9c30: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F9C30u;
    {
        const bool branch_taken_0x1f9c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9c30) {
            ctx->pc = 0x1F9C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C30u;
            // 0x1f9c34: 0x8e0500c0  lw          $a1, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9C60u;
            goto label_1f9c60;
        }
    }
    ctx->pc = 0x1F9C38u;
    // 0x1f9c38: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1f9c38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f9c3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9c40: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f9c44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9c48: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f9c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f9c4c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f9c4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1f9c50: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1f9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1f9c54: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9C5Cu);
        ctx->pc = 0x1F9C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C54u;
            // 0x1f9c58: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9C5Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9B68u: goto label_1f9b68;
            case 0x1F9BB0u: goto label_1f9bb0;
            case 0x1F9BE8u: goto label_1f9be8;
            case 0x1F9C28u: goto label_1f9c28;
            case 0x1F9C60u: goto label_1f9c60;
            case 0x1F9CA0u: goto label_1f9ca0;
            case 0x1F9CD8u: goto label_1f9cd8;
            case 0x1F9D18u: goto label_1f9d18;
            case 0x1F9D50u: goto label_1f9d50;
            case 0x1F9D90u: goto label_1f9d90;
            case 0x1F9DD0u: goto label_1f9dd0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C5Cu; }
            if (ctx->pc != 0x1F9C5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F9C5Cu;
    // 0x1f9c5c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x1f9c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1f9c60:
    // 0x1f9c60: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1f9c60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f9c64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9c68: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f9c6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9c70: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f9c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f9c74: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1f9c74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1f9c78: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1f9c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1f9c7c: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9C84u);
        ctx->pc = 0x1F9C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C7Cu;
            // 0x1f9c80: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9C84u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9B68u: goto label_1f9b68;
            case 0x1F9BB0u: goto label_1f9bb0;
            case 0x1F9BE8u: goto label_1f9be8;
            case 0x1F9C28u: goto label_1f9c28;
            case 0x1F9C60u: goto label_1f9c60;
            case 0x1F9CA0u: goto label_1f9ca0;
            case 0x1F9CD8u: goto label_1f9cd8;
            case 0x1F9D18u: goto label_1f9d18;
            case 0x1F9D50u: goto label_1f9d50;
            case 0x1F9D90u: goto label_1f9d90;
            case 0x1F9DD0u: goto label_1f9dd0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C84u; }
            if (ctx->pc != 0x1F9C84u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9C84u;
    // 0x1f9c84: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x1f9c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1f9c88: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9C88u;
    {
        const bool branch_taken_0x1f9c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9c88) {
            ctx->pc = 0x1F9C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C88u;
            // 0x1f9c8c: 0x8e0500b8  lw          $a1, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9CA0u;
            goto label_1f9ca0;
        }
    }
    ctx->pc = 0x1F9C90u;
    // 0x1f9c90: 0xc08f75e  jal         func_23DD78
    ctx->pc = 0x1F9C90u;
    SET_GPR_U32(ctx, 31, 0x1F9C98u);
    ctx->pc = 0x1F9C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C90u;
            // 0x1f9c94: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DD78u;
    if (runtime->hasFunction(0x23DD78u)) {
        auto targetFn = runtime->lookupFunction(0x23DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C98u; }
        if (ctx->pc != 0x1F9C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23dd78_0x23ddc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C98u; }
        if (ctx->pc != 0x1F9C98u) { return; }
    }
    ctx->pc = 0x1F9C98u;
    // 0x1f9c98: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x1f9c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1f9c9c: 0x0  nop
    ctx->pc = 0x1f9c9cu;
    // NOP
label_1f9ca0:
    // 0x1f9ca0: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1f9ca0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f9ca4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1f9ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1f9ca8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F9CA8u;
    {
        const bool branch_taken_0x1f9ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9ca8) {
            ctx->pc = 0x1F9CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9CA8u;
            // 0x1f9cac: 0x8e0500b8  lw          $a1, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9CD8u;
            goto label_1f9cd8;
        }
    }
    ctx->pc = 0x1F9CB0u;
    // 0x1f9cb0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1f9cb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f9cb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9cb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f9cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f9cbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9cc0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f9cc4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f9cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1f9cc8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1f9cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1f9ccc: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9CD4u);
        ctx->pc = 0x1F9CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9CCCu;
            // 0x1f9cd0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9CD4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9B68u: goto label_1f9b68;
            case 0x1F9BB0u: goto label_1f9bb0;
            case 0x1F9BE8u: goto label_1f9be8;
            case 0x1F9C28u: goto label_1f9c28;
            case 0x1F9C60u: goto label_1f9c60;
            case 0x1F9CA0u: goto label_1f9ca0;
            case 0x1F9CD8u: goto label_1f9cd8;
            case 0x1F9D18u: goto label_1f9d18;
            case 0x1F9D50u: goto label_1f9d50;
            case 0x1F9D90u: goto label_1f9d90;
            case 0x1F9DD0u: goto label_1f9dd0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9CD4u; }
            if (ctx->pc != 0x1F9CD4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9CD4u;
    // 0x1f9cd4: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x1f9cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_1f9cd8:
    // 0x1f9cd8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1f9cd8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f9cdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9ce0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f9ce4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9ce8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f9cec: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1f9cecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1f9cf0: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1f9cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1f9cf4: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9CFCu);
        ctx->pc = 0x1F9CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9CF4u;
            // 0x1f9cf8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9CFCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9B68u: goto label_1f9b68;
            case 0x1F9BB0u: goto label_1f9bb0;
            case 0x1F9BE8u: goto label_1f9be8;
            case 0x1F9C28u: goto label_1f9c28;
            case 0x1F9C60u: goto label_1f9c60;
            case 0x1F9CA0u: goto label_1f9ca0;
            case 0x1F9CD8u: goto label_1f9cd8;
            case 0x1F9D18u: goto label_1f9d18;
            case 0x1F9D50u: goto label_1f9d50;
            case 0x1F9D90u: goto label_1f9d90;
            case 0x1F9DD0u: goto label_1f9dd0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9CFCu; }
            if (ctx->pc != 0x1F9CFCu) { return; }
        }
        }
    }
    ctx->pc = 0x1F9CFCu;
    // 0x1f9cfc: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x1f9cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1f9d00: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9D00u;
    {
        const bool branch_taken_0x1f9d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9d00) {
            ctx->pc = 0x1F9D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D00u;
            // 0x1f9d04: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9D18u;
            goto label_1f9d18;
        }
    }
    ctx->pc = 0x1F9D08u;
    // 0x1f9d08: 0xc08f75e  jal         func_23DD78
    ctx->pc = 0x1F9D08u;
    SET_GPR_U32(ctx, 31, 0x1F9D10u);
    ctx->pc = 0x1F9D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D08u;
            // 0x1f9d0c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DD78u;
    if (runtime->hasFunction(0x23DD78u)) {
        auto targetFn = runtime->lookupFunction(0x23DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D10u; }
        if (ctx->pc != 0x1F9D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23dd78_0x23ddc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D10u; }
        if (ctx->pc != 0x1F9D10u) { return; }
    }
    ctx->pc = 0x1F9D10u;
    // 0x1f9d10: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x1f9d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1f9d14: 0x0  nop
    ctx->pc = 0x1f9d14u;
    // NOP
label_1f9d18:
    // 0x1f9d18: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1f9d18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f9d1c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1f9d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1f9d20: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F9D20u;
    {
        const bool branch_taken_0x1f9d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9d20) {
            ctx->pc = 0x1F9D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D20u;
            // 0x1f9d24: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9D50u;
            goto label_1f9d50;
        }
    }
    ctx->pc = 0x1F9D28u;
    // 0x1f9d28: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1f9d28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f9d2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9d30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f9d34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9d38: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f9d3c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f9d3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1f9d40: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1f9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1f9d44: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9D4Cu);
        ctx->pc = 0x1F9D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D44u;
            // 0x1f9d48: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9D4Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9B68u: goto label_1f9b68;
            case 0x1F9BB0u: goto label_1f9bb0;
            case 0x1F9BE8u: goto label_1f9be8;
            case 0x1F9C28u: goto label_1f9c28;
            case 0x1F9C60u: goto label_1f9c60;
            case 0x1F9CA0u: goto label_1f9ca0;
            case 0x1F9CD8u: goto label_1f9cd8;
            case 0x1F9D18u: goto label_1f9d18;
            case 0x1F9D50u: goto label_1f9d50;
            case 0x1F9D90u: goto label_1f9d90;
            case 0x1F9DD0u: goto label_1f9dd0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D4Cu; }
            if (ctx->pc != 0x1F9D4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F9D4Cu;
    // 0x1f9d4c: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x1f9d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_1f9d50:
    // 0x1f9d50: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1f9d50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f9d54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9d58: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f9d5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9d60: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f9d64: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1f9d64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1f9d68: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1f9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1f9d6c: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9D74u);
        ctx->pc = 0x1F9D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D6Cu;
            // 0x1f9d70: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9D74u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9B68u: goto label_1f9b68;
            case 0x1F9BB0u: goto label_1f9bb0;
            case 0x1F9BE8u: goto label_1f9be8;
            case 0x1F9C28u: goto label_1f9c28;
            case 0x1F9C60u: goto label_1f9c60;
            case 0x1F9CA0u: goto label_1f9ca0;
            case 0x1F9CD8u: goto label_1f9cd8;
            case 0x1F9D18u: goto label_1f9d18;
            case 0x1F9D50u: goto label_1f9d50;
            case 0x1F9D90u: goto label_1f9d90;
            case 0x1F9DD0u: goto label_1f9dd0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D74u; }
            if (ctx->pc != 0x1F9D74u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9D74u;
    // 0x1f9d74: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x1f9d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1f9d78: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9D78u;
    {
        const bool branch_taken_0x1f9d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9d78) {
            ctx->pc = 0x1F9D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D78u;
            // 0x1f9d7c: 0x8e030080  lw          $v1, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9D90u;
            goto label_1f9d90;
        }
    }
    ctx->pc = 0x1F9D80u;
    // 0x1f9d80: 0xc04b770  jal         func_12DDC0
    ctx->pc = 0x1F9D80u;
    SET_GPR_U32(ctx, 31, 0x1F9D88u);
    ctx->pc = 0x1F9D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D80u;
            // 0x1f9d84: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDC0u;
    if (runtime->hasFunction(0x12DDC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D88u; }
        if (ctx->pc != 0x1F9D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DDC0_0x12ddc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D88u; }
        if (ctx->pc != 0x1F9D88u) { return; }
    }
    ctx->pc = 0x1F9D88u;
    // 0x1f9d88: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1f9d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1f9d8c: 0x0  nop
    ctx->pc = 0x1f9d8cu;
    // NOP
label_1f9d90:
    // 0x1f9d90: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f9d94: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f9d94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1f9d98: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1f9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1f9d9c: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9DA4u);
        ctx->pc = 0x1F9DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D9Cu;
            // 0x1f9da0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9DA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9B68u: goto label_1f9b68;
            case 0x1F9BB0u: goto label_1f9bb0;
            case 0x1F9BE8u: goto label_1f9be8;
            case 0x1F9C28u: goto label_1f9c28;
            case 0x1F9C60u: goto label_1f9c60;
            case 0x1F9CA0u: goto label_1f9ca0;
            case 0x1F9CD8u: goto label_1f9cd8;
            case 0x1F9D18u: goto label_1f9d18;
            case 0x1F9D50u: goto label_1f9d50;
            case 0x1F9D90u: goto label_1f9d90;
            case 0x1F9DD0u: goto label_1f9dd0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9DA4u; }
            if (ctx->pc != 0x1F9DA4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9DA4u;
    // 0x1f9da4: 0x86040090  lh          $a0, 0x90($s0)
    ctx->pc = 0x1f9da4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1f9da8: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x1f9da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1f9dac: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1f9dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f9db0: 0xc080406  jal         func_201018
    ctx->pc = 0x1F9DB0u;
    SET_GPR_U32(ctx, 31, 0x1F9DB8u);
    ctx->pc = 0x1F9DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9DB0u;
            // 0x1f9db4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201018u;
    if (runtime->hasFunction(0x201018u)) {
        auto targetFn = runtime->lookupFunction(0x201018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9DB8u; }
        if (ctx->pc != 0x1F9DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201018_0x201018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9DB8u; }
        if (ctx->pc != 0x1F9DB8u) { return; }
    }
    ctx->pc = 0x1F9DB8u;
    // 0x1f9db8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1f9db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1f9dbc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9DBCu;
    {
        const bool branch_taken_0x1f9dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9dbc) {
            ctx->pc = 0x1F9DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9DBCu;
            // 0x1f9dc0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9DD0u;
            goto label_1f9dd0;
        }
    }
    ctx->pc = 0x1F9DC4u;
    // 0x1f9dc4: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x1F9DC4u;
    SET_GPR_U32(ctx, 31, 0x1F9DCCu);
    ctx->pc = 0x1F9DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9DC4u;
            // 0x1f9dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9DCCu; }
        if (ctx->pc != 0x1F9DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9DCCu; }
        if (ctx->pc != 0x1F9DCCu) { return; }
    }
    ctx->pc = 0x1F9DCCu;
    // 0x1f9dcc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f9dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f9dd0:
    // 0x1f9dd0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f9dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9dd4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f9dd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9DDCu;
            // 0x1f9de0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9B68u: goto label_1f9b68;
            case 0x1F9BB0u: goto label_1f9bb0;
            case 0x1F9BE8u: goto label_1f9be8;
            case 0x1F9C28u: goto label_1f9c28;
            case 0x1F9C60u: goto label_1f9c60;
            case 0x1F9CA0u: goto label_1f9ca0;
            case 0x1F9CD8u: goto label_1f9cd8;
            case 0x1F9D18u: goto label_1f9d18;
            case 0x1F9D50u: goto label_1f9d50;
            case 0x1F9D90u: goto label_1f9d90;
            case 0x1F9DD0u: goto label_1f9dd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F9DE4u;
    // 0x1f9de4: 0x0  nop
    ctx->pc = 0x1f9de4u;
    // NOP
}
