#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADF60
// Address: 0x1adf60 - 0x1adff8
void sub_001ADF60_0x1adf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADF60_0x1adf60");
#endif

    ctx->pc = 0x1adf60u;

    // 0x1adf60: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1adf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1adf64: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1adf64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1adf68: 0x8c432600  lw          $v1, 0x2600($v0)
    ctx->pc = 0x1adf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9728)));
    // 0x1adf6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1adf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1adf70: 0x24422600  addiu       $v0, $v0, 0x2600
    ctx->pc = 0x1adf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9728));
    // 0x1adf74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1adf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1adf78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1adf78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1adf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1adf80: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1adf80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1adf84: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1ADF84u;
    {
        const bool branch_taken_0x1adf84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ADF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF84u;
            // 0x1adf88: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf84) {
            ctx->pc = 0x1ADFE0u;
            goto label_1adfe0;
        }
    }
    ctx->pc = 0x1ADF8Cu;
    // 0x1adf8c: 0x0  nop
    ctx->pc = 0x1adf8cu;
    // NOP
label_1adf90:
    // 0x1adf90: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ADF90u;
    {
        const bool branch_taken_0x1adf90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF90u;
            // 0x1adf94: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf90) {
            ctx->pc = 0x1ADFB4u;
            goto label_1adfb4;
        }
    }
    ctx->pc = 0x1ADF98u;
    // 0x1adf98: 0xc06a5f2  jal         func_1A97C8
    ctx->pc = 0x1ADF98u;
    SET_GPR_U32(ctx, 31, 0x1ADFA0u);
    ctx->pc = 0x1ADF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF98u;
            // 0x1adf9c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A97C8u;
    if (runtime->hasFunction(0x1A97C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A97C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFA0u; }
        if (ctx->pc != 0x1ADFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A97C8_0x1a97c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFA0u; }
        if (ctx->pc != 0x1ADFA0u) { return; }
    }
    ctx->pc = 0x1ADFA0u;
    // 0x1adfa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1adfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfa4: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1ADFA4u;
    SET_GPR_U32(ctx, 31, 0x1ADFACu);
    ctx->pc = 0x1ADFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADFA4u;
            // 0x1adfa8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFACu; }
        if (ctx->pc != 0x1ADFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFACu; }
        if (ctx->pc != 0x1ADFACu) { return; }
    }
    ctx->pc = 0x1ADFACu;
    // 0x1adfac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ADFACu;
    {
        const bool branch_taken_0x1adfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADFACu;
            // 0x1adfb0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfac) {
            ctx->pc = 0x1ADFD0u;
            goto label_1adfd0;
        }
    }
    ctx->pc = 0x1ADFB4u;
label_1adfb4:
    // 0x1adfb4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1adfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1adfb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1adfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adfbc: 0x94820046  lhu         $v0, 0x46($a0)
    ctx->pc = 0x1adfbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x1adfc0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADFC0u;
    {
        const bool branch_taken_0x1adfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ADFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADFC0u;
            // 0x1adfc4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfc0) {
            ctx->pc = 0x1ADFD0u;
            goto label_1adfd0;
        }
    }
    ctx->pc = 0x1ADFC8u;
    // 0x1adfc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADFC8u;
    {
        const bool branch_taken_0x1adfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADFC8u;
            // 0x1adfcc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfc8) {
            ctx->pc = 0x1ADFE4u;
            goto label_1adfe4;
        }
    }
    ctx->pc = 0x1ADFD0u;
label_1adfd0:
    // 0x1adfd0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1adfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adfd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1adfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1adfd8: 0x1443ffed  bne         $v0, $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1ADFD8u;
    {
        const bool branch_taken_0x1adfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ADFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADFD8u;
            // 0x1adfdc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfd8) {
            ctx->pc = 0x1ADF90u;
            runtime->cooperativeGuestYield();
            goto label_1adf90;
        }
    }
    ctx->pc = 0x1ADFE0u;
label_1adfe0:
    // 0x1adfe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1adfe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adfe4:
    // 0x1adfe4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1adfe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adfe8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1adfe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adfec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1adfecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADFF0u;
            // 0x1adff4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADF90u: goto label_1adf90;
            case 0x1ADFB4u: goto label_1adfb4;
            case 0x1ADFD0u: goto label_1adfd0;
            case 0x1ADFE0u: goto label_1adfe0;
            case 0x1ADFE4u: goto label_1adfe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ADFF8u;
}
