#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014CF20
// Address: 0x14cf20 - 0x14cfc8
void sub_0014CF20_0x14cf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CF20_0x14cf20");
#endif

    ctx->pc = 0x14cf20u;

    // 0x14cf20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14cf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14cf24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14cf28: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x14cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x14cf2c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x14CF2Cu;
    {
        const bool branch_taken_0x14cf2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF2Cu;
            // 0x14cf30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf2c) {
            ctx->pc = 0x14CFB4u;
            goto label_14cfb4;
        }
    }
    ctx->pc = 0x14CF34u;
    // 0x14cf34: 0x94820040  lhu         $v0, 0x40($a0)
    ctx->pc = 0x14cf34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x14cf38: 0x84830042  lh          $v1, 0x42($a0)
    ctx->pc = 0x14cf38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x14cf3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14cf40: 0x94850042  lhu         $a1, 0x42($a0)
    ctx->pc = 0x14cf40u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x14cf44: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CF44u;
    {
        const bool branch_taken_0x14cf44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF44u;
            // 0x14cf48: 0xa4820040  sh          $v0, 0x40($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf44) {
            ctx->pc = 0x14CF54u;
            goto label_14cf54;
        }
    }
    ctx->pc = 0x14CF4Cu;
    // 0x14cf4c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x14cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x14cf50: 0xa4820042  sh          $v0, 0x42($a0)
    ctx->pc = 0x14cf50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 66), (uint16_t)GPR_U32(ctx, 2));
label_14cf54:
    // 0x14cf54: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x14cf54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x14cf58: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14CF58u;
    {
        const bool branch_taken_0x14cf58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF58u;
            // 0x14cf5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf58) {
            ctx->pc = 0x14CF70u;
            goto label_14cf70;
        }
    }
    ctx->pc = 0x14CF60u;
    // 0x14cf60: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x14cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14cf64: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x14cf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x14cf68: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x14cf68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x14cf6c: 0x0  nop
    ctx->pc = 0x14cf6cu;
    // NOP
label_14cf70:
    // 0x14cf70: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14CF70u;
    {
        const bool branch_taken_0x14cf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF70u;
            // 0x14cf74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf70) {
            ctx->pc = 0x14CFB4u;
            goto label_14cfb4;
        }
    }
    ctx->pc = 0x14CF78u;
    // 0x14cf78: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x14cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14cf7c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x14CF7Cu;
    {
        const bool branch_taken_0x14cf7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cf7c) {
            ctx->pc = 0x14CFB4u;
            goto label_14cfb4;
        }
    }
    ctx->pc = 0x14CF84u;
    // 0x14cf84: 0x84820040  lh          $v0, 0x40($a0)
    ctx->pc = 0x14cf84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x14cf88: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14CF88u;
    {
        const bool branch_taken_0x14cf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cf88) {
            ctx->pc = 0x14CF8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF88u;
            // 0x14cf8c: 0x84820042  lh          $v0, 0x42($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CFA0u;
            goto label_14cfa0;
        }
    }
    ctx->pc = 0x14CF90u;
    // 0x14cf90: 0xc0540ac  jal         func_1502B0
    ctx->pc = 0x14CF90u;
    SET_GPR_U32(ctx, 31, 0x14CF98u);
    ctx->pc = 0x14CF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF90u;
            // 0x14cf94: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1502B0u;
    if (runtime->hasFunction(0x1502B0u)) {
        auto targetFn = runtime->lookupFunction(0x1502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CF98u; }
        if (ctx->pc != 0x14CF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1502b0_0x150308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CF98u; }
        if (ctx->pc != 0x14CF98u) { return; }
    }
    ctx->pc = 0x14CF98u;
    // 0x14cf98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14CF98u;
    {
        const bool branch_taken_0x14cf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF98u;
            // 0x14cf9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf98) {
            ctx->pc = 0x14CFB4u;
            goto label_14cfb4;
        }
    }
    ctx->pc = 0x14CFA0u;
label_14cfa0:
    // 0x14cfa0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CFA0u;
    {
        const bool branch_taken_0x14cfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CFA0u;
            // 0x14cfa4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cfa0) {
            ctx->pc = 0x14CFB4u;
            goto label_14cfb4;
        }
    }
    ctx->pc = 0x14CFA8u;
    // 0x14cfa8: 0xc054088  jal         func_150220
    ctx->pc = 0x14CFA8u;
    SET_GPR_U32(ctx, 31, 0x14CFB0u);
    ctx->pc = 0x14CFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CFA8u;
            // 0x14cfac: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150220u;
    if (runtime->hasFunction(0x150220u)) {
        auto targetFn = runtime->lookupFunction(0x150220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CFB0u; }
        if (ctx->pc != 0x14CFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150220_0x150250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CFB0u; }
        if (ctx->pc != 0x14CFB0u) { return; }
    }
    ctx->pc = 0x14CFB0u;
    // 0x14cfb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14cfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14cfb4:
    // 0x14cfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x14CFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CFB4u;
            // 0x14cfb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CF54u: goto label_14cf54;
            case 0x14CF70u: goto label_14cf70;
            case 0x14CFA0u: goto label_14cfa0;
            case 0x14CFB4u: goto label_14cfb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CFBCu;
    // 0x14cfbc: 0x0  nop
    ctx->pc = 0x14cfbcu;
    // NOP
    // 0x14cfc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14cfc4: 0x0  nop
    ctx->pc = 0x14cfc4u;
    // NOP
}
