#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A89D8
// Address: 0x1a89d8 - 0x1a8ba0
void sub_001A89D8_0x1a89d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A89D8_0x1a89d8");
#endif

    ctx->pc = 0x1a89d8u;

    // 0x1a89d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a89d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a89dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a89dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a89e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a89e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a89e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a89e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a89e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a89e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a89ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a89ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a89f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a89f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1a89f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a89f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a89f8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1a89f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a89fc: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x1a89fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1a8a00: 0x10730009  beq         $v1, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8A00u;
    {
        const bool branch_taken_0x1a8a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A8A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A00u;
            // 0x1a8a04: 0x261200d0  addiu       $s2, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a00) {
            ctx->pc = 0x1A8A28u;
            goto label_1a8a28;
        }
    }
    ctx->pc = 0x1A8A08u;
    // 0x1a8a08: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1a8a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1a8a0c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8a10: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1a8a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1a8a14: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1a8a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1a8a18: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a8a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a8a1c: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A8A1Cu;
    SET_GPR_U32(ctx, 31, 0x1A8A24u);
    ctx->pc = 0x1A8A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A1Cu;
            // 0x1a8a20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A24u; }
        if (ctx->pc != 0x1A8A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A24u; }
        if (ctx->pc != 0x1A8A24u) { return; }
    }
    ctx->pc = 0x1A8A24u;
    // 0x1a8a24: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1a8a24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1a8a28:
    // 0x1a8a28: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1a8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a8a2c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a8a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8a30: 0x18600054  blez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1A8A30u;
    {
        const bool branch_taken_0x1a8a30 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1A8A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A30u;
            // 0x1a8a34: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a30) {
            ctx->pc = 0x1A8B84u;
            goto label_1a8b84;
        }
    }
    ctx->pc = 0x1A8A38u;
    // 0x1a8a38: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x1a8a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1a8a3c: 0x10730009  beq         $v1, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8A3Cu;
    {
        const bool branch_taken_0x1a8a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A8A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A3Cu;
            // 0x1a8a40: 0x261200e8  addiu       $s2, $s0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a3c) {
            ctx->pc = 0x1A8A64u;
            goto label_1a8a64;
        }
    }
    ctx->pc = 0x1A8A44u;
    // 0x1a8a44: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1a8a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1a8a48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8a4c: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1a8a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1a8a50: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1a8a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1a8a54: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a8a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a8a58: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A8A58u;
    SET_GPR_U32(ctx, 31, 0x1A8A60u);
    ctx->pc = 0x1A8A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A58u;
            // 0x1a8a5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A60u; }
        if (ctx->pc != 0x1A8A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A60u; }
        if (ctx->pc != 0x1A8A60u) { return; }
    }
    ctx->pc = 0x1A8A60u;
    // 0x1a8a60: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1a8a60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1a8a64:
    // 0x1a8a64: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1a8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a8a68: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x1a8a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1a8a6c: 0x261200d8  addiu       $s2, $s0, 0xD8
    ctx->pc = 0x1a8a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
    // 0x1a8a70: 0x10730009  beq         $v1, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8A70u;
    {
        const bool branch_taken_0x1a8a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A8A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A70u;
            // 0x1a8a74: 0xa6220006  sh          $v0, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a70) {
            ctx->pc = 0x1A8A98u;
            goto label_1a8a98;
        }
    }
    ctx->pc = 0x1A8A78u;
    // 0x1a8a78: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1a8a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1a8a7c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8a80: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1a8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1a8a84: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1a8a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1a8a88: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a8a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a8a8c: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A8A8Cu;
    SET_GPR_U32(ctx, 31, 0x1A8A94u);
    ctx->pc = 0x1A8A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A8Cu;
            // 0x1a8a90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A94u; }
        if (ctx->pc != 0x1A8A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A94u; }
        if (ctx->pc != 0x1A8A94u) { return; }
    }
    ctx->pc = 0x1A8A94u;
    // 0x1a8a94: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1a8a94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1a8a98:
    // 0x1a8a98: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1a8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a8a9c: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1a8a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1a8aa0: 0x261200e0  addiu       $s2, $s0, 0xE0
    ctx->pc = 0x1a8aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1a8aa4: 0x10730009  beq         $v1, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8AA4u;
    {
        const bool branch_taken_0x1a8aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A8AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8AA4u;
            // 0x1a8aa8: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8aa4) {
            ctx->pc = 0x1A8ACCu;
            goto label_1a8acc;
        }
    }
    ctx->pc = 0x1A8AACu;
    // 0x1a8aac: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1a8aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1a8ab0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8ab4: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1a8ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1a8ab8: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1a8ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1a8abc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a8abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a8ac0: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A8AC0u;
    SET_GPR_U32(ctx, 31, 0x1A8AC8u);
    ctx->pc = 0x1A8AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8AC0u;
            // 0x1a8ac4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AC8u; }
        if (ctx->pc != 0x1A8AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AC8u; }
        if (ctx->pc != 0x1A8AC8u) { return; }
    }
    ctx->pc = 0x1A8AC8u;
    // 0x1a8ac8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1a8ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1a8acc:
    // 0x1a8acc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1a8accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a8ad0: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1a8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1a8ad4: 0x261200f0  addiu       $s2, $s0, 0xF0
    ctx->pc = 0x1a8ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x1a8ad8: 0x10730009  beq         $v1, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8AD8u;
    {
        const bool branch_taken_0x1a8ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A8ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8AD8u;
            // 0x1a8adc: 0xa6220004  sh          $v0, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ad8) {
            ctx->pc = 0x1A8B00u;
            goto label_1a8b00;
        }
    }
    ctx->pc = 0x1A8AE0u;
    // 0x1a8ae0: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1a8ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1a8ae4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8ae8: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1a8ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1a8aec: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1a8aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1a8af0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a8af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a8af4: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A8AF4u;
    SET_GPR_U32(ctx, 31, 0x1A8AFCu);
    ctx->pc = 0x1A8AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8AF4u;
            // 0x1a8af8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AFCu; }
        if (ctx->pc != 0x1A8AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AFCu; }
        if (ctx->pc != 0x1A8AFCu) { return; }
    }
    ctx->pc = 0x1A8AFCu;
    // 0x1a8afc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1a8afcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1a8b00:
    // 0x1a8b00: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1a8b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a8b04: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x1a8b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x1a8b08: 0x261200f8  addiu       $s2, $s0, 0xF8
    ctx->pc = 0x1a8b08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    // 0x1a8b0c: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x1a8b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a8b10: 0x10730009  beq         $v1, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8B10u;
    {
        const bool branch_taken_0x1a8b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A8B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B10u;
            // 0x1a8b14: 0xa633000a  sh          $s3, 0xA($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b10) {
            ctx->pc = 0x1A8B38u;
            goto label_1a8b38;
        }
    }
    ctx->pc = 0x1A8B18u;
    // 0x1a8b18: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1a8b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1a8b1c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8b20: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1a8b20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1a8b24: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1a8b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1a8b28: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a8b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a8b2c: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A8B2Cu;
    SET_GPR_U32(ctx, 31, 0x1A8B34u);
    ctx->pc = 0x1A8B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B2Cu;
            // 0x1a8b30: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B34u; }
        if (ctx->pc != 0x1A8B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B34u; }
        if (ctx->pc != 0x1A8B34u) { return; }
    }
    ctx->pc = 0x1A8B34u;
    // 0x1a8b34: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1a8b34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1a8b38:
    // 0x1a8b38: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1a8b38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a8b3c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A8B3Cu;
    {
        const bool branch_taken_0x1a8b3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B3Cu;
            // 0x1a8b40: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b3c) {
            ctx->pc = 0x1A8B74u;
            goto label_1a8b74;
        }
    }
    ctx->pc = 0x1A8B44u;
    // 0x1a8b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b48: 0x24a54228  addiu       $a1, $a1, 0x4228
    ctx->pc = 0x1a8b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16936));
    // 0x1a8b4c: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x1A8B4Cu;
    SET_GPR_U32(ctx, 31, 0x1A8B54u);
    ctx->pc = 0x1A8B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B4Cu;
            // 0x1a8b50: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B54u; }
        if (ctx->pc != 0x1A8B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B54u; }
        if (ctx->pc != 0x1A8B54u) { return; }
    }
    ctx->pc = 0x1A8B54u;
    // 0x1a8b54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8B54u;
    {
        const bool branch_taken_0x1a8b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B54u;
            // 0x1a8b58: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b54) {
            ctx->pc = 0x1A8B78u;
            goto label_1a8b78;
        }
    }
    ctx->pc = 0x1A8B5Cu;
    // 0x1a8b5c: 0x26040006  addiu       $a0, $s0, 0x6
    ctx->pc = 0x1a8b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x1a8b60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a8b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b64: 0xc0a441e  jal         func_291078
    ctx->pc = 0x1A8B64u;
    SET_GPR_U32(ctx, 31, 0x1A8B6Cu);
    ctx->pc = 0x1A8B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B64u;
            // 0x1a8b68: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291078u;
    if (runtime->hasFunction(0x291078u)) {
        auto targetFn = runtime->lookupFunction(0x291078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B6Cu; }
        if (ctx->pc != 0x1A8B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_291078_0x2910b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B6Cu; }
        if (ctx->pc != 0x1A8B6Cu) { return; }
    }
    ctx->pc = 0x1A8B6Cu;
    // 0x1a8b6c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a8b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8b70: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x1a8b70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
label_1a8b74:
    // 0x1a8b74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a8b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a8b78:
    // 0x1a8b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8b7c: 0xa222000e  sb          $v0, 0xE($s1)
    ctx->pc = 0x1a8b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a8b80: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x1a8b80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_1a8b84:
    // 0x1a8b84: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a8b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a8b88: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a8b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8b8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a8b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8b90: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a8b90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8b94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8b98: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B98u;
            // 0x1a8b9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8A28u: goto label_1a8a28;
            case 0x1A8A64u: goto label_1a8a64;
            case 0x1A8A98u: goto label_1a8a98;
            case 0x1A8ACCu: goto label_1a8acc;
            case 0x1A8B00u: goto label_1a8b00;
            case 0x1A8B38u: goto label_1a8b38;
            case 0x1A8B74u: goto label_1a8b74;
            case 0x1A8B78u: goto label_1a8b78;
            case 0x1A8B84u: goto label_1a8b84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8BA0u;
}
