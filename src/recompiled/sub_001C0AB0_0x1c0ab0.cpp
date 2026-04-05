#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0AB0
// Address: 0x1c0ab0 - 0x1c0bd0
void sub_001C0AB0_0x1c0ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0AB0_0x1c0ab0");
#endif

    ctx->pc = 0x1c0ab0u;

    // 0x1c0ab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c0ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c0ab4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c0ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c0ab8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c0ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c0abc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1c0abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1c0ac0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ac4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c0ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c0ac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0acc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1c0accu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c0ad0: 0xc441ccc0  lwc1        $f1, -0x3340($v0)
    ctx->pc = 0x1c0ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0ad4: 0xc6000370  lwc1        $f0, 0x370($s0)
    ctx->pc = 0x1c0ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0ad8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c0ad8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0adc: 0x0  nop
    ctx->pc = 0x1c0adcu;
    // NOP
    // 0x1c0ae0: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x1C0AE0u;
    {
        const bool branch_taken_0x1c0ae0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0AE0u;
            // 0x1c0ae4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ae0) {
            ctx->pc = 0x1C0BA4u;
            goto label_1c0ba4;
        }
    }
    ctx->pc = 0x1C0AE8u;
    // 0x1c0ae8: 0x8e020378  lw          $v0, 0x378($s0)
    ctx->pc = 0x1c0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
    // 0x1c0aec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0af0: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x1c0af0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c0af4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C0AF4u;
    {
        const bool branch_taken_0x1c0af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0AF4u;
            // 0x1c0af8: 0xae020378  sw          $v0, 0x378($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0af4) {
            ctx->pc = 0x1C0B30u;
            goto label_1c0b30;
        }
    }
    ctx->pc = 0x1C0AFCu;
    // 0x1c0afc: 0x8e0203e4  lw          $v0, 0x3E4($s0)
    ctx->pc = 0x1c0afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
    // 0x1c0b00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c0b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c0b04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0B04u;
    {
        const bool branch_taken_0x1c0b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B04u;
            // 0x1c0b08: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b04) {
            ctx->pc = 0x1C0B14u;
            goto label_1c0b14;
        }
    }
    ctx->pc = 0x1C0B0Cu;
    // 0x1c0b0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0B0Cu;
    {
        const bool branch_taken_0x1c0b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B0Cu;
            // 0x1c0b10: 0x8445cce2  lh          $a1, -0x331E($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954210)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b0c) {
            ctx->pc = 0x1C0B1Cu;
            goto label_1c0b1c;
        }
    }
    ctx->pc = 0x1C0B14u;
label_1c0b14:
    // 0x1c0b14: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c0b18: 0x8445ccd6  lh          $a1, -0x332A($v0)
    ctx->pc = 0x1c0b18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954198)));
label_1c0b1c:
    // 0x1c0b1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c0b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b20: 0xc07021a  jal         func_1C0868
    ctx->pc = 0x1C0B20u;
    SET_GPR_U32(ctx, 31, 0x1C0B28u);
    ctx->pc = 0x1C0B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B20u;
            // 0x1c0b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0868u;
    if (runtime->hasFunction(0x1C0868u)) {
        auto targetFn = runtime->lookupFunction(0x1C0868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B28u; }
        if (ctx->pc != 0x1C0B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c0868_0x1c0880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B28u; }
        if (ctx->pc != 0x1C0B28u) { return; }
    }
    ctx->pc = 0x1C0B28u;
    // 0x1c0b28: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C0B28u;
    {
        const bool branch_taken_0x1c0b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B28u;
            // 0x1c0b2c: 0xae0003e8  sw          $zero, 0x3E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b28) {
            ctx->pc = 0x1C0B5Cu;
            goto label_1c0b5c;
        }
    }
    ctx->pc = 0x1C0B30u;
label_1c0b30:
    // 0x1c0b30: 0x8e0203e4  lw          $v0, 0x3E4($s0)
    ctx->pc = 0x1c0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
    // 0x1c0b34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c0b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c0b38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0B38u;
    {
        const bool branch_taken_0x1c0b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B38u;
            // 0x1c0b3c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b38) {
            ctx->pc = 0x1C0B48u;
            goto label_1c0b48;
        }
    }
    ctx->pc = 0x1C0B40u;
    // 0x1c0b40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0B40u;
    {
        const bool branch_taken_0x1c0b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B40u;
            // 0x1c0b44: 0x8445cce0  lh          $a1, -0x3320($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b40) {
            ctx->pc = 0x1C0B50u;
            goto label_1c0b50;
        }
    }
    ctx->pc = 0x1C0B48u;
label_1c0b48:
    // 0x1c0b48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c0b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c0b4c: 0x8445ccd4  lh          $a1, -0x332C($v0)
    ctx->pc = 0x1c0b4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954196)));
label_1c0b50:
    // 0x1c0b50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c0b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c0b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b58: 0xae0003e8  sw          $zero, 0x3E8($s0)
    ctx->pc = 0x1c0b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 0));
label_1c0b5c:
    // 0x1c0b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c0b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b64: 0xc61403e8  lwc1        $f20, 0x3E8($s0)
    ctx->pc = 0x1c0b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c0b68: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C0B68u;
    SET_GPR_U32(ctx, 31, 0x1C0B70u);
    ctx->pc = 0x1C0B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B68u;
            // 0x1c0b6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B70u; }
        if (ctx->pc != 0x1C0B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B70u; }
        if (ctx->pc != 0x1C0B70u) { return; }
    }
    ctx->pc = 0x1C0B70u;
    // 0x1c0b70: 0xc06ff7c  jal         func_1BFDF0
    ctx->pc = 0x1C0B70u;
    SET_GPR_U32(ctx, 31, 0x1C0B78u);
    ctx->pc = 0x1C0B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B70u;
            // 0x1c0b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFDF0u;
    if (runtime->hasFunction(0x1BFDF0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B78u; }
        if (ctx->pc != 0x1C0B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFDF0_0x1bfdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B78u; }
        if (ctx->pc != 0x1C0B78u) { return; }
    }
    ctx->pc = 0x1C0B78u;
    // 0x1c0b78: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0B78u;
    {
        const bool branch_taken_0x1c0b78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b78) {
            ctx->pc = 0x1C0B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B78u;
            // 0x1c0b7c: 0xe6140370  swc1        $f20, 0x370($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 880), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0B90u;
            goto label_1c0b90;
        }
    }
    ctx->pc = 0x1C0B80u;
    // 0x1c0b80: 0x8e0203e4  lw          $v0, 0x3E4($s0)
    ctx->pc = 0x1c0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
    // 0x1c0b84: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1c0b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1c0b88: 0xae0203e4  sw          $v0, 0x3E4($s0)
    ctx->pc = 0x1c0b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 2));
    // 0x1c0b8c: 0xe6140370  swc1        $f20, 0x370($s0)
    ctx->pc = 0x1c0b8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 880), bits); }
label_1c0b90:
    // 0x1c0b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b94: 0xc070364  jal         func_1C0D90
    ctx->pc = 0x1C0B94u;
    SET_GPR_U32(ctx, 31, 0x1C0B9Cu);
    ctx->pc = 0x1C0B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B94u;
            // 0x1c0b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0D90u;
    if (runtime->hasFunction(0x1C0D90u)) {
        auto targetFn = runtime->lookupFunction(0x1C0D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B9Cu; }
        if (ctx->pc != 0x1C0B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c0d90_0x1c0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B9Cu; }
        if (ctx->pc != 0x1C0B9Cu) { return; }
    }
    ctx->pc = 0x1C0B9Cu;
    // 0x1c0b9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0B9Cu;
    {
        const bool branch_taken_0x1c0b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B9Cu;
            // 0x1c0ba0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b9c) {
            ctx->pc = 0x1C0BB4u;
            goto label_1c0bb4;
        }
    }
    ctx->pc = 0x1C0BA4u;
label_1c0ba4:
    // 0x1c0ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ba8: 0xc070364  jal         func_1C0D90
    ctx->pc = 0x1C0BA8u;
    SET_GPR_U32(ctx, 31, 0x1C0BB0u);
    ctx->pc = 0x1C0BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BA8u;
            // 0x1c0bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0D90u;
    if (runtime->hasFunction(0x1C0D90u)) {
        auto targetFn = runtime->lookupFunction(0x1C0D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BB0u; }
        if (ctx->pc != 0x1C0BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c0d90_0x1c0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BB0u; }
        if (ctx->pc != 0x1C0BB0u) { return; }
    }
    ctx->pc = 0x1C0BB0u;
    // 0x1c0bb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c0bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c0bb4:
    // 0x1c0bb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c0bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0bb8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1c0bb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0bbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0bc0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1c0bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c0bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BC4u;
            // 0x1c0bc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0B14u: goto label_1c0b14;
            case 0x1C0B1Cu: goto label_1c0b1c;
            case 0x1C0B30u: goto label_1c0b30;
            case 0x1C0B48u: goto label_1c0b48;
            case 0x1C0B50u: goto label_1c0b50;
            case 0x1C0B5Cu: goto label_1c0b5c;
            case 0x1C0B90u: goto label_1c0b90;
            case 0x1C0BA4u: goto label_1c0ba4;
            case 0x1C0BB4u: goto label_1c0bb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0BCCu;
    // 0x1c0bcc: 0x0  nop
    ctx->pc = 0x1c0bccu;
    // NOP
}
