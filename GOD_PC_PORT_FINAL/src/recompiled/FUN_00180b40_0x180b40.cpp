#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00180b40
// Address: 0x180b40 - 0x180bac
void FUN_00180b40_0x180b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180b40_0x180b40");
#endif

    ctx->pc = 0x180b40u;

    // 0x180b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180b44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x180b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x180b48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x180b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b50: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x180B50u;
    {
        const bool branch_taken_0x180b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B50u;
            // 0x180b54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b50) {
            ctx->pc = 0x180BA0u;
            goto label_180ba0;
        }
    }
    ctx->pc = 0x180B58u;
    // 0x180b58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x180b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x180b5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x180b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x180b60: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x180b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x180b64: 0x3046000f  andi        $a2, $v0, 0xF
    ctx->pc = 0x180b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x180b68: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x180B68u;
    {
        const bool branch_taken_0x180b68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x180B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B68u;
            // 0x180b6c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b68) {
            ctx->pc = 0x180B80u;
            goto label_180b80;
        }
    }
    ctx->pc = 0x180B70u;
    // 0x180b70: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180B70u;
    {
        const bool branch_taken_0x180b70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x180B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B70u;
            // 0x180b74: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b70) {
            ctx->pc = 0x180B80u;
            goto label_180b80;
        }
    }
    ctx->pc = 0x180B78u;
    // 0x180b78: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x180B78u;
    {
        const bool branch_taken_0x180b78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x180b78) {
            ctx->pc = 0x180B90u;
            goto label_180b90;
        }
    }
    ctx->pc = 0x180B80u;
label_180b80:
    // 0x180b80: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x180B80u;
    SET_GPR_U32(ctx, 31, 0x180B88u);
    ctx->pc = 0x180B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180B80u;
            // 0x180b84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B88u; }
        if (ctx->pc != 0x180B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B88u; }
        if (ctx->pc != 0x180B88u) { return; }
    }
    ctx->pc = 0x180B88u;
    // 0x180b88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x180B88u;
    {
        const bool branch_taken_0x180b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B88u;
            // 0x180b8c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b88) {
            ctx->pc = 0x180BACu;
            return;
        }
    }
    ctx->pc = 0x180B90u;
label_180b90:
    // 0x180b90: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x180B90u;
    SET_GPR_U32(ctx, 31, 0x180B98u);
    ctx->pc = 0x180B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180B90u;
            // 0x180b94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B98u; }
        if (ctx->pc != 0x180B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B98u; }
        if (ctx->pc != 0x180B98u) { return; }
    }
    ctx->pc = 0x180B98u;
    // 0x180b98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x180B98u;
    {
        const bool branch_taken_0x180b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B98u;
            // 0x180b9c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b98) {
            ctx->pc = 0x180BACu;
            return;
        }
    }
    ctx->pc = 0x180BA0u;
label_180ba0:
    // 0x180ba0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x180ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x180ba4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x180ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x180ba8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x180ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
}
