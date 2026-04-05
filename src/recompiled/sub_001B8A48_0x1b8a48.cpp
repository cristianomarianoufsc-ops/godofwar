#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8A48
// Address: 0x1b8a48 - 0x1b8ce0
void sub_001B8A48_0x1b8a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8A48_0x1b8a48");
#endif

    ctx->pc = 0x1b8a48u;

    // 0x1b8a48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b8a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b8a4c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b8a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b8a50: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1b8a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1b8a54: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1b8a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1b8a58: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1b8a58u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x1b8a5c: 0x24535698  addiu       $s3, $v0, 0x5698
    ctx->pc = 0x1b8a5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 22168));
    // 0x1b8a60: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1b8a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1b8a64: 0x8e42cb98  lw          $v0, -0x3468($s2)
    ctx->pc = 0x1b8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953880)));
    // 0x1b8a68: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1b8a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1b8a6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b8a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b8a70: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1b8a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1b8a74: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1b8a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1b8a78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8A78u;
    {
        const bool branch_taken_0x1b8a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A78u;
            // 0x1b8a7c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a78) {
            ctx->pc = 0x1B8A90u;
            goto label_1b8a90;
        }
    }
    ctx->pc = 0x1B8A80u;
    // 0x1b8a80: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b8a84: 0x8c42cb9c  lw          $v0, -0x3464($v0)
    ctx->pc = 0x1b8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953884)));
    // 0x1b8a88: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x1B8A88u;
    {
        const bool branch_taken_0x1b8a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A88u;
            // 0x1b8a8c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a88) {
            ctx->pc = 0x1B8CA8u;
            goto label_1b8ca8;
        }
    }
    ctx->pc = 0x1B8A90u;
label_1b8a90:
    // 0x1b8a90: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1b8a90u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1b8a94: 0x8e30cb94  lw          $s0, -0x346C($s1)
    ctx->pc = 0x1b8a94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953876)));
    // 0x1b8a98: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B8A98u;
    {
        const bool branch_taken_0x1b8a98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A98u;
            // 0x1b8a9c: 0x3c15002a  lui         $s5, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a98) {
            ctx->pc = 0x1B8B04u;
            goto label_1b8b04;
        }
    }
    ctx->pc = 0x1B8AA0u;
    // 0x1b8aa0: 0x8e021528  lw          $v0, 0x1528($s0)
    ctx->pc = 0x1b8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5416)));
    // 0x1b8aa4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B8AA4u;
    {
        const bool branch_taken_0x1b8aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8aa4) {
            ctx->pc = 0x1B8AA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AA4u;
            // 0x1b8aa8: 0x8e31cb94  lw          $s1, -0x346C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953876)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8AD4u;
            goto label_1b8ad4;
        }
    }
    ctx->pc = 0x1B8AACu;
    // 0x1b8aac: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x1b8aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    // 0x1b8ab0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B8AB0u;
    SET_GPR_U32(ctx, 31, 0x1B8AB8u);
    ctx->pc = 0x1B8AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AB0u;
            // 0x1b8ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AB8u; }
        if (ctx->pc != 0x1B8AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AB8u; }
        if (ctx->pc != 0x1B8AB8u) { return; }
    }
    ctx->pc = 0x1B8AB8u;
    // 0x1b8ab8: 0xc06e4ce  jal         func_1B9338
    ctx->pc = 0x1B8AB8u;
    SET_GPR_U32(ctx, 31, 0x1B8AC0u);
    ctx->pc = 0x1B8ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AB8u;
            // 0x1b8abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9338u;
    if (runtime->hasFunction(0x1B9338u)) {
        auto targetFn = runtime->lookupFunction(0x1B9338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AC0u; }
        if (ctx->pc != 0x1B8AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9338_0x1b9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AC0u; }
        if (ctx->pc != 0x1B8AC0u) { return; }
    }
    ctx->pc = 0x1B8AC0u;
    // 0x1b8ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8ac4: 0xae001528  sw          $zero, 0x1528($s0)
    ctx->pc = 0x1b8ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5416), GPR_U32(ctx, 0));
    // 0x1b8ac8: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x1b8ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
    // 0x1b8acc: 0xae001548  sw          $zero, 0x1548($s0)
    ctx->pc = 0x1b8accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5448), GPR_U32(ctx, 0));
    // 0x1b8ad0: 0x8e31cb94  lw          $s1, -0x346C($s1)
    ctx->pc = 0x1b8ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953876)));
label_1b8ad4:
    // 0x1b8ad4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B8AD4u;
    {
        const bool branch_taken_0x1b8ad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AD4u;
            // 0x1b8ad8: 0x3c15002a  lui         $s5, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ad4) {
            ctx->pc = 0x1B8B04u;
            goto label_1b8b04;
        }
    }
    ctx->pc = 0x1B8ADCu;
    // 0x1b8adc: 0x8e22152c  lw          $v0, 0x152C($s1)
    ctx->pc = 0x1b8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5420)));
    // 0x1b8ae0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8AE0u;
    {
        const bool branch_taken_0x1b8ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AE0u;
            // 0x1b8ae4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ae0) {
            ctx->pc = 0x1B8B04u;
            goto label_1b8b04;
        }
    }
    ctx->pc = 0x1B8AE8u;
    // 0x1b8ae8: 0xae200208  sw          $zero, 0x208($s1)
    ctx->pc = 0x1b8ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
    // 0x1b8aec: 0xae300278  sw          $s0, 0x278($s1)
    ctx->pc = 0x1b8aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 16));
    // 0x1b8af0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B8AF0u;
    SET_GPR_U32(ctx, 31, 0x1B8AF8u);
    ctx->pc = 0x1B8AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AF0u;
            // 0x1b8af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AF8u; }
        if (ctx->pc != 0x1B8AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AF8u; }
        if (ctx->pc != 0x1B8AF8u) { return; }
    }
    ctx->pc = 0x1B8AF8u;
    // 0x1b8af8: 0xae3001bc  sw          $s0, 0x1BC($s1)
    ctx->pc = 0x1b8af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 16));
    // 0x1b8afc: 0xae20152c  sw          $zero, 0x152C($s1)
    ctx->pc = 0x1b8afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5420), GPR_U32(ctx, 0));
    // 0x1b8b00: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x1b8b00u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
label_1b8b04:
    // 0x1b8b04: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b8b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b8b08: 0x8e44cb98  lw          $a0, -0x3468($s2)
    ctx->pc = 0x1b8b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953880)));
    // 0x1b8b0c: 0xac40cbac  sw          $zero, -0x3454($v0)
    ctx->pc = 0x1b8b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953900), GPR_U32(ctx, 0));
    // 0x1b8b10: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8B10u;
    {
        const bool branch_taken_0x1b8b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B10u;
            // 0x1b8b14: 0xaea0cba8  sw          $zero, -0x3458($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294953896), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b10) {
            ctx->pc = 0x1B8B34u;
            goto label_1b8b34;
        }
    }
    ctx->pc = 0x1B8B18u;
    // 0x1b8b18: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1b8b18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1b8b1c: 0x8e02cb9c  lw          $v0, -0x3464($s0)
    ctx->pc = 0x1b8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953884)));
    // 0x1b8b20: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8B20u;
    {
        const bool branch_taken_0x1b8b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8b20) {
            ctx->pc = 0x1B8B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B20u;
            // 0x1b8b24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8B38u;
            goto label_1b8b38;
        }
    }
    ctx->pc = 0x1B8B28u;
    // 0x1b8b28: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x1B8B28u;
    SET_GPR_U32(ctx, 31, 0x1B8B30u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B30u; }
        if (ctx->pc != 0x1B8B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B30u; }
        if (ctx->pc != 0x1B8B30u) { return; }
    }
    ctx->pc = 0x1B8B30u;
    // 0x1b8b30: 0xae00cb9c  sw          $zero, -0x3464($s0)
    ctx->pc = 0x1b8b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953884), GPR_U32(ctx, 0));
label_1b8b34:
    // 0x1b8b34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b8b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b8b38:
    // 0x1b8b38: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1B8B38u;
    SET_GPR_U32(ctx, 31, 0x1B8B40u);
    ctx->pc = 0x1B8B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B38u;
            // 0x1b8b3c: 0xae40cb98  sw          $zero, -0x3468($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294953880), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B40u; }
        if (ctx->pc != 0x1B8B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B40u; }
        if (ctx->pc != 0x1B8B40u) { return; }
    }
    ctx->pc = 0x1B8B40u;
    // 0x1b8b40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1b8b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b8b44: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x1b8b44u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x1b8b48: 0xae42cb98  sw          $v0, -0x3468($s2)
    ctx->pc = 0x1b8b48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294953880), GPR_U32(ctx, 2));
    // 0x1b8b4c: 0x8e82cba0  lw          $v0, -0x3460($s4)
    ctx->pc = 0x1b8b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953888)));
    // 0x1b8b50: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B8B50u;
    {
        const bool branch_taken_0x1b8b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B50u;
            // 0x1b8b54: 0x3c13002a  lui         $s3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b50) {
            ctx->pc = 0x1B8B78u;
            goto label_1b8b78;
        }
    }
    ctx->pc = 0x1B8B58u;
    // 0x1b8b58: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1B8B58u;
    SET_GPR_U32(ctx, 31, 0x1B8B60u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B60u; }
        if (ctx->pc != 0x1B8B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B60u; }
        if (ctx->pc != 0x1B8B60u) { return; }
    }
    ctx->pc = 0x1B8B60u;
    // 0x1b8b60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b8b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b64: 0x24050a04  addiu       $a1, $zero, 0xA04
    ctx->pc = 0x1b8b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2564));
    // 0x1b8b68: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1B8B68u;
    SET_GPR_U32(ctx, 31, 0x1B8B70u);
    ctx->pc = 0x1B8B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B68u;
            // 0x1b8b6c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B70u; }
        if (ctx->pc != 0x1B8B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B70u; }
        if (ctx->pc != 0x1B8B70u) { return; }
    }
    ctx->pc = 0x1B8B70u;
    // 0x1b8b70: 0xae82cba0  sw          $v0, -0x3460($s4)
    ctx->pc = 0x1b8b70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294953888), GPR_U32(ctx, 2));
    // 0x1b8b74: 0x0  nop
    ctx->pc = 0x1b8b74u;
    // NOP
label_1b8b78:
    // 0x1b8b78: 0x8e62cba4  lw          $v0, -0x345C($s3)
    ctx->pc = 0x1b8b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953892)));
    // 0x1b8b7c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B8B7Cu;
    {
        const bool branch_taken_0x1b8b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B7Cu;
            // 0x1b8b80: 0x8e44cb98  lw          $a0, -0x3468($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b7c) {
            ctx->pc = 0x1B8BA4u;
            goto label_1b8ba4;
        }
    }
    ctx->pc = 0x1B8B84u;
    // 0x1b8b84: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1B8B84u;
    SET_GPR_U32(ctx, 31, 0x1B8B8Cu);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B8Cu; }
        if (ctx->pc != 0x1B8B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B8Cu; }
        if (ctx->pc != 0x1B8B8Cu) { return; }
    }
    ctx->pc = 0x1B8B8Cu;
    // 0x1b8b8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b8b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b90: 0x24051900  addiu       $a1, $zero, 0x1900
    ctx->pc = 0x1b8b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
    // 0x1b8b94: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1B8B94u;
    SET_GPR_U32(ctx, 31, 0x1B8B9Cu);
    ctx->pc = 0x1B8B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B94u;
            // 0x1b8b98: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B9Cu; }
        if (ctx->pc != 0x1B8B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B9Cu; }
        if (ctx->pc != 0x1B8B9Cu) { return; }
    }
    ctx->pc = 0x1B8B9Cu;
    // 0x1b8b9c: 0xae62cba4  sw          $v0, -0x345C($s3)
    ctx->pc = 0x1b8b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294953892), GPR_U32(ctx, 2));
    // 0x1b8ba0: 0x8e44cb98  lw          $a0, -0x3468($s2)
    ctx->pc = 0x1b8ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953880)));
label_1b8ba4:
    // 0x1b8ba4: 0x3c16002b  lui         $s6, 0x2B
    ctx->pc = 0x1b8ba4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)43 << 16));
    // 0x1b8ba8: 0x26c556a8  addiu       $a1, $s6, 0x56A8
    ctx->pc = 0x1b8ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 22184));
    // 0x1b8bac: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1B8BACu;
    {
        const bool branch_taken_0x1b8bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BACu;
            // 0x1b8bb0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8bac) {
            ctx->pc = 0x1B8C68u;
            goto label_1b8c68;
        }
    }
    ctx->pc = 0x1B8BB4u;
    // 0x1b8bb4: 0x0  nop
    ctx->pc = 0x1b8bb4u;
    // NOP
label_1b8bb8:
    // 0x1b8bb8: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1b8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1b8bbc: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8BBCu;
    {
        const bool branch_taken_0x1b8bbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B8BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BBCu;
            // 0x1b8bc0: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8bbc) {
            ctx->pc = 0x1B8BD0u;
            goto label_1b8bd0;
        }
    }
    ctx->pc = 0x1B8BC4u;
    // 0x1b8bc4: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x1b8bc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b8bc8: 0x10510025  beq         $v0, $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B8BC8u;
    {
        const bool branch_taken_0x1b8bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B8BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BC8u;
            // 0x1b8bcc: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8bc8) {
            ctx->pc = 0x1B8C60u;
            goto label_1b8c60;
        }
    }
    ctx->pc = 0x1B8BD0u;
label_1b8bd0:
    // 0x1b8bd0: 0x1622000f  bne         $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B8BD0u;
    {
        const bool branch_taken_0x1b8bd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8bd0) {
            ctx->pc = 0x1B8C10u;
            goto label_1b8c10;
        }
    }
    ctx->pc = 0x1B8BD8u;
    // 0x1b8bd8: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x1B8BD8u;
    SET_GPR_U32(ctx, 31, 0x1B8BE0u);
    ctx->pc = 0x1B8BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BD8u;
            // 0x1b8bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BE0u; }
        if (ctx->pc != 0x1B8BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BE0u; }
        if (ctx->pc != 0x1B8BE0u) { return; }
    }
    ctx->pc = 0x1B8BE0u;
    // 0x1b8be0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b8be4: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x1b8be4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x1b8be8: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B8BE8u;
    {
        const bool branch_taken_0x1b8be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B8BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BE8u;
            // 0x1b8bec: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8be8) {
            ctx->pc = 0x1B8C10u;
            goto label_1b8c10;
        }
    }
    ctx->pc = 0x1B8BF0u;
    // 0x1b8bf0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b8bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8bf4: 0xc0a441e  jal         func_291078
    ctx->pc = 0x1B8BF4u;
    SET_GPR_U32(ctx, 31, 0x1B8BFCu);
    ctx->pc = 0x1B8BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BF4u;
            // 0x1b8bf8: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291078u;
    if (runtime->hasFunction(0x291078u)) {
        auto targetFn = runtime->lookupFunction(0x291078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BFCu; }
        if (ctx->pc != 0x1B8BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_291078_0x2910b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BFCu; }
        if (ctx->pc != 0x1B8BFCu) { return; }
    }
    ctx->pc = 0x1B8BFCu;
    // 0x1b8bfc: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x1b8bfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b8c00: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x1b8c00u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x1b8c04: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B8C04u;
    {
        const bool branch_taken_0x1b8c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C04u;
            // 0x1b8c08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c04) {
            ctx->pc = 0x1B8C64u;
            goto label_1b8c64;
        }
    }
    ctx->pc = 0x1B8C0Cu;
    // 0x1b8c0c: 0x0  nop
    ctx->pc = 0x1b8c0cu;
    // NOP
label_1b8c10:
    // 0x1b8c10: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1B8C10u;
    {
        const bool branch_taken_0x1b8c10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C10u;
            // 0x1b8c14: 0x8ea3cba8  lw          $v1, -0x3458($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c10) {
            ctx->pc = 0x1B8C40u;
            goto label_1b8c40;
        }
    }
    ctx->pc = 0x1B8C18u;
    // 0x1b8c18: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b8c1c: 0x8e84cba0  lw          $a0, -0x3460($s4)
    ctx->pc = 0x1b8c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953888)));
    // 0x1b8c20: 0x9445cbac  lhu         $a1, -0x3454($v0)
    ctx->pc = 0x1b8c20u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294953900)));
    // 0x1b8c24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b8c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b8c28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b8c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b8c2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b8c30: 0xa4520000  sh          $s2, 0x0($v0)
    ctx->pc = 0x1b8c30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x1b8c34: 0xa4450002  sh          $a1, 0x2($v0)
    ctx->pc = 0x1b8c34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b8c38: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b8c38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c3c: 0xaea3cba8  sw          $v1, -0x3458($s5)
    ctx->pc = 0x1b8c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294953896), GPR_U32(ctx, 3));
label_1b8c40:
    // 0x1b8c40: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1b8c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1b8c44: 0x8e64cba4  lw          $a0, -0x345C($s3)
    ctx->pc = 0x1b8c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953892)));
    // 0x1b8c48: 0x8ca3cbac  lw          $v1, -0x3454($a1)
    ctx->pc = 0x1b8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953900)));
    // 0x1b8c4c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b8c50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b8c54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b8c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b8c58: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b8c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b8c5c: 0xaca3cbac  sw          $v1, -0x3454($a1)
    ctx->pc = 0x1b8c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294953900), GPR_U32(ctx, 3));
label_1b8c60:
    // 0x1b8c60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8c64:
    // 0x1b8c64: 0x26c556a8  addiu       $a1, $s6, 0x56A8
    ctx->pc = 0x1b8c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 22184));
label_1b8c68:
    // 0x1b8c68: 0xc0a3502  jal         func_28D408
    ctx->pc = 0x1B8C68u;
    SET_GPR_U32(ctx, 31, 0x1B8C70u);
    ctx->pc = 0x28D408u;
    if (runtime->hasFunction(0x28D408u)) {
        auto targetFn = runtime->lookupFunction(0x28D408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C70u; }
        if (ctx->pc != 0x1B8C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D408_0x28d408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C70u; }
        if (ctx->pc != 0x1B8C70u) { return; }
    }
    ctx->pc = 0x1B8C70u;
    // 0x1b8c70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c74: 0x5600ffd0  bnel        $s0, $zero, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1B8C74u;
    {
        const bool branch_taken_0x1b8c74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c74) {
            ctx->pc = 0x1B8C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C74u;
            // 0x1b8c78: 0x82110000  lb          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8BB8u;
            runtime->cooperativeGuestYield();
            goto label_1b8bb8;
        }
    }
    ctx->pc = 0x1B8C7Cu;
    // 0x1b8c7c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b8c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b8c80: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b8c84: 0x8c42cba8  lw          $v0, -0x3458($v0)
    ctx->pc = 0x1b8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953896)));
    // 0x1b8c88: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1b8c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1b8c8c: 0x8c65cba0  lw          $a1, -0x3460($v1)
    ctx->pc = 0x1b8c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953888)));
    // 0x1b8c90: 0x9483cbac  lhu         $v1, -0x3454($a0)
    ctx->pc = 0x1b8c90u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294953900)));
    // 0x1b8c94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b8c98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b8c9c: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x1b8c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b8ca0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1b8ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b8ca4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1b8ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b8ca8:
    // 0x1b8ca8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1b8ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b8cac: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1b8cacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b8cb0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b8cb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8cb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b8cb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8cb8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1b8cb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8cbc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1b8cbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8cc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CC4u;
            // 0x1b8cc8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8A90u: goto label_1b8a90;
            case 0x1B8AD4u: goto label_1b8ad4;
            case 0x1B8B04u: goto label_1b8b04;
            case 0x1B8B34u: goto label_1b8b34;
            case 0x1B8B38u: goto label_1b8b38;
            case 0x1B8B78u: goto label_1b8b78;
            case 0x1B8BA4u: goto label_1b8ba4;
            case 0x1B8BB8u: goto label_1b8bb8;
            case 0x1B8BD0u: goto label_1b8bd0;
            case 0x1B8C10u: goto label_1b8c10;
            case 0x1B8C40u: goto label_1b8c40;
            case 0x1B8C60u: goto label_1b8c60;
            case 0x1B8C64u: goto label_1b8c64;
            case 0x1B8C68u: goto label_1b8c68;
            case 0x1B8CA8u: goto label_1b8ca8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8CCCu;
    // 0x1b8ccc: 0x0  nop
    ctx->pc = 0x1b8cccu;
    // NOP
    // 0x1b8cd0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1b8cd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b8cd4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1b8cd4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b8cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CD8u;
            // 0x1b8cdc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8A90u: goto label_1b8a90;
            case 0x1B8AD4u: goto label_1b8ad4;
            case 0x1B8B04u: goto label_1b8b04;
            case 0x1B8B34u: goto label_1b8b34;
            case 0x1B8B38u: goto label_1b8b38;
            case 0x1B8B78u: goto label_1b8b78;
            case 0x1B8BA4u: goto label_1b8ba4;
            case 0x1B8BB8u: goto label_1b8bb8;
            case 0x1B8BD0u: goto label_1b8bd0;
            case 0x1B8C10u: goto label_1b8c10;
            case 0x1B8C40u: goto label_1b8c40;
            case 0x1B8C60u: goto label_1b8c60;
            case 0x1B8C64u: goto label_1b8c64;
            case 0x1B8C68u: goto label_1b8c68;
            case 0x1B8CA8u: goto label_1b8ca8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8CE0u;
}
