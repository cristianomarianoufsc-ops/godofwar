#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015ACC0
// Address: 0x15acc0 - 0x15b450
void sub_0015ACC0_0x15acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ACC0_0x15acc0");
#endif

    ctx->pc = 0x15acc0u;

    // 0x15acc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15acc4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15acc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x15acc8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x15acc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x15accc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15acccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15acd0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15acd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x15acd4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x15acd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15acd8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15acd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15acdc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x15acdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x15ace0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15ace0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ace4: 0xc05e37e  jal         func_178DF8
    ctx->pc = 0x15ACE4u;
    SET_GPR_U32(ctx, 31, 0x15ACECu);
    ctx->pc = 0x15ACE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ACE4u;
            // 0x15ace8: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178DF8u;
    if (runtime->hasFunction(0x178DF8u)) {
        auto targetFn = runtime->lookupFunction(0x178DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACECu; }
        if (ctx->pc != 0x15ACECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178DF8_0x178df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACECu; }
        if (ctx->pc != 0x15ACECu) { return; }
    }
    ctx->pc = 0x15ACECu;
    // 0x15acec: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x15ACECu;
    SET_GPR_U32(ctx, 31, 0x15ACF4u);
    ctx->pc = 0x15ACF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ACECu;
            // 0x15acf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACF4u; }
        if (ctx->pc != 0x15ACF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACF4u; }
        if (ctx->pc != 0x15ACF4u) { return; }
    }
    ctx->pc = 0x15ACF4u;
    // 0x15acf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15acf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15acf8: 0xc08e200  jal         func_238800
    ctx->pc = 0x15ACF8u;
    SET_GPR_U32(ctx, 31, 0x15AD00u);
    ctx->pc = 0x15ACFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ACF8u;
            // 0x15acfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238800u;
    if (runtime->hasFunction(0x238800u)) {
        auto targetFn = runtime->lookupFunction(0x238800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD00u; }
        if (ctx->pc != 0x15AD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238800_0x238810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD00u; }
        if (ctx->pc != 0x15AD00u) { return; }
    }
    ctx->pc = 0x15AD00u;
    // 0x15ad00: 0xc05e37e  jal         func_178DF8
    ctx->pc = 0x15AD00u;
    SET_GPR_U32(ctx, 31, 0x15AD08u);
    ctx->pc = 0x178DF8u;
    if (runtime->hasFunction(0x178DF8u)) {
        auto targetFn = runtime->lookupFunction(0x178DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD08u; }
        if (ctx->pc != 0x15AD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178DF8_0x178df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD08u; }
        if (ctx->pc != 0x15AD08u) { return; }
    }
    ctx->pc = 0x15AD08u;
    // 0x15ad08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15ad08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ad0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad10: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15ad10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad14: 0xc04bfb8  jal         func_12FEE0
    ctx->pc = 0x15AD14u;
    SET_GPR_U32(ctx, 31, 0x15AD1Cu);
    ctx->pc = 0x15AD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD14u;
            // 0x15ad18: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FEE0u;
    if (runtime->hasFunction(0x12FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD1Cu; }
        if (ctx->pc != 0x15AD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FEE0_0x12fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD1Cu; }
        if (ctx->pc != 0x15AD1Cu) { return; }
    }
    ctx->pc = 0x15AD1Cu;
    // 0x15ad1c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15AD1Cu;
    SET_GPR_U32(ctx, 31, 0x15AD24u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD24u; }
        if (ctx->pc != 0x15AD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD24u; }
        if (ctx->pc != 0x15AD24u) { return; }
    }
    ctx->pc = 0x15AD24u;
    // 0x15ad24: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x15ad24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x15ad28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ad2c: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x15ad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x15ad30: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x15ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x15ad34: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x15ad34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x15ad38: 0x2463f970  addiu       $v1, $v1, -0x690
    ctx->pc = 0x15ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965616));
    // 0x15ad3c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x15ad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x15ad40: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x15ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x15ad44: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15AD44u;
    SET_GPR_U32(ctx, 31, 0x15AD4Cu);
    ctx->pc = 0x15AD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD44u;
            // 0x15ad48: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD4Cu; }
        if (ctx->pc != 0x15AD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD4Cu; }
        if (ctx->pc != 0x15AD4Cu) { return; }
    }
    ctx->pc = 0x15AD4Cu;
    // 0x15ad4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15ad4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad50: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15AD50u;
    {
        const bool branch_taken_0x15ad50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ad50) {
            ctx->pc = 0x15AD70u;
            goto label_15ad70;
        }
    }
    ctx->pc = 0x15AD58u;
    // 0x15ad58: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x15ad58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x15ad5c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15AD5Cu;
    {
        const bool branch_taken_0x15ad5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD5Cu;
            // 0x15ad60: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad5c) {
            ctx->pc = 0x15AD68u;
            goto label_15ad68;
        }
    }
    ctx->pc = 0x15AD64u;
    // 0x15ad64: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x15ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_15ad68:
    // 0x15ad68: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x15AD68u;
    SET_GPR_U32(ctx, 31, 0x15AD70u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD70u; }
        if (ctx->pc != 0x15AD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD70u; }
        if (ctx->pc != 0x15AD70u) { return; }
    }
    ctx->pc = 0x15AD70u;
label_15ad70:
    // 0x15ad70: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x15AD70u;
    SET_GPR_U32(ctx, 31, 0x15AD78u);
    ctx->pc = 0x15AD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD70u;
            // 0x15ad74: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD78u; }
        if (ctx->pc != 0x15AD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD78u; }
        if (ctx->pc != 0x15AD78u) { return; }
    }
    ctx->pc = 0x15AD78u;
    // 0x15ad78: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AD78u;
    {
        const bool branch_taken_0x15ad78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD78u;
            // 0x15ad7c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad78) {
            ctx->pc = 0x15AD88u;
            goto label_15ad88;
        }
    }
    ctx->pc = 0x15AD80u;
    // 0x15ad80: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x15AD80u;
    SET_GPR_U32(ctx, 31, 0x15AD88u);
    ctx->pc = 0x15AD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD80u;
            // 0x15ad84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD88u; }
        if (ctx->pc != 0x15AD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD88u; }
        if (ctx->pc != 0x15AD88u) { return; }
    }
    ctx->pc = 0x15AD88u;
label_15ad88:
    // 0x15ad88: 0xc6800070  lwc1        $f0, 0x70($s4)
    ctx->pc = 0x15ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ad8c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x15ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x15ad90: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x15ad90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x15ad94: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x15ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x15ad98: 0xc6800074  lwc1        $f0, 0x74($s4)
    ctx->pc = 0x15ad98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ad9c: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x15ad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x15ada0: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x15ada0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x15ada4: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x15ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x15ada8: 0xc6800078  lwc1        $f0, 0x78($s4)
    ctx->pc = 0x15ada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15adac: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x15adacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x15adb0: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x15adb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x15adb4: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x15adb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x15adb8: 0xc680007c  lwc1        $f0, 0x7C($s4)
    ctx->pc = 0x15adb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15adbc: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x15adbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x15adc0: 0x6a820093  ldl         $v0, 0x93($s4)
    ctx->pc = 0x15adc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 147); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15adc4: 0x6e82008c  ldr         $v0, 0x8C($s4)
    ctx->pc = 0x15adc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 140); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15adc8: 0x8a830097  lwl         $v1, 0x97($s4)
    ctx->pc = 0x15adc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 151); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x15adcc: 0x9a830094  lwr         $v1, 0x94($s4)
    ctx->pc = 0x15adccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 148); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x15add0: 0xb2220063  sdl         $v0, 0x63($s1)
    ctx->pc = 0x15add0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15add4: 0xb622005c  sdr         $v0, 0x5C($s1)
    ctx->pc = 0x15add4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15add8: 0xaa230067  swl         $v1, 0x67($s1)
    ctx->pc = 0x15add8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 103); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x15addc: 0xba230064  swr         $v1, 0x64($s1)
    ctx->pc = 0x15addcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 100); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x15ade0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15ade4: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x15ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x15ade8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x15ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15adec: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x15adecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x15adf0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x15adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x15adf4: 0x40f809  jalr        $v0
    ctx->pc = 0x15ADF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15ADFCu);
        ctx->pc = 0x15ADF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ADF4u;
            // 0x15adf8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15ADFCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15AD68u: goto label_15ad68;
            case 0x15AD70u: goto label_15ad70;
            case 0x15AD88u: goto label_15ad88;
            case 0x15AEA0u: goto label_15aea0;
            case 0x15AED0u: goto label_15aed0;
            case 0x15AEDCu: goto label_15aedc;
            case 0x15AF08u: goto label_15af08;
            case 0x15AF20u: goto label_15af20;
            case 0x15AF30u: goto label_15af30;
            case 0x15AF60u: goto label_15af60;
            case 0x15AF6Cu: goto label_15af6c;
            case 0x15AF98u: goto label_15af98;
            case 0x15AFB0u: goto label_15afb0;
            case 0x15AFC0u: goto label_15afc0;
            case 0x15AFF0u: goto label_15aff0;
            case 0x15AFFCu: goto label_15affc;
            case 0x15B028u: goto label_15b028;
            case 0x15B040u: goto label_15b040;
            case 0x15B050u: goto label_15b050;
            case 0x15B080u: goto label_15b080;
            case 0x15B08Cu: goto label_15b08c;
            case 0x15B0B8u: goto label_15b0b8;
            case 0x15B0D0u: goto label_15b0d0;
            case 0x15B0E0u: goto label_15b0e0;
            case 0x15B110u: goto label_15b110;
            case 0x15B11Cu: goto label_15b11c;
            case 0x15B148u: goto label_15b148;
            case 0x15B160u: goto label_15b160;
            case 0x15B170u: goto label_15b170;
            case 0x15B1A0u: goto label_15b1a0;
            case 0x15B1ACu: goto label_15b1ac;
            case 0x15B1D8u: goto label_15b1d8;
            case 0x15B1F0u: goto label_15b1f0;
            case 0x15B208u: goto label_15b208;
            case 0x15B238u: goto label_15b238;
            case 0x15B24Cu: goto label_15b24c;
            case 0x15B278u: goto label_15b278;
            case 0x15B290u: goto label_15b290;
            case 0x15B2A0u: goto label_15b2a0;
            case 0x15B2D0u: goto label_15b2d0;
            case 0x15B2DCu: goto label_15b2dc;
            case 0x15B308u: goto label_15b308;
            case 0x15B320u: goto label_15b320;
            case 0x15B328u: goto label_15b328;
            case 0x15B32Cu: goto label_15b32c;
            case 0x15B370u: goto label_15b370;
            case 0x15B378u: goto label_15b378;
            case 0x15B37Cu: goto label_15b37c;
            case 0x15B3C0u: goto label_15b3c0;
            case 0x15B3C4u: goto label_15b3c4;
            case 0x15B3E0u: goto label_15b3e0;
            case 0x15B404u: goto label_15b404;
            case 0x15B424u: goto label_15b424;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15ADFCu; }
            if (ctx->pc != 0x15ADFCu) { return; }
        }
        }
    }
    ctx->pc = 0x15ADFCu;
    // 0x15adfc: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x15adfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    // 0x15ae00: 0x26240028  addiu       $a0, $s1, 0x28
    ctx->pc = 0x15ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x15ae04: 0x26850054  addiu       $a1, $s4, 0x54
    ctx->pc = 0x15ae04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 84));
    // 0x15ae08: 0xc0a2644  jal         func_289910
    ctx->pc = 0x15AE08u;
    SET_GPR_U32(ctx, 31, 0x15AE10u);
    ctx->pc = 0x15AE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE08u;
            // 0x15ae0c: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE10u; }
        if (ctx->pc != 0x15AE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE10u; }
        if (ctx->pc != 0x15AE10u) { return; }
    }
    ctx->pc = 0x15AE10u;
    // 0x15ae10: 0x8e900050  lw          $s0, 0x50($s4)
    ctx->pc = 0x15ae10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x15ae14: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15AE14u;
    SET_GPR_U32(ctx, 31, 0x15AE1Cu);
    ctx->pc = 0x15AE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE14u;
            // 0x15ae18: 0x2610ff68  addiu       $s0, $s0, -0x98 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE1Cu; }
        if (ctx->pc != 0x15AE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE1Cu; }
        if (ctx->pc != 0x15AE1Cu) { return; }
    }
    ctx->pc = 0x15AE1Cu;
    // 0x15ae1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15ae1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ae20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae24: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15AE24u;
    SET_GPR_U32(ctx, 31, 0x15AE2Cu);
    ctx->pc = 0x15AE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE24u;
            // 0x15ae28: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE2Cu; }
        if (ctx->pc != 0x15AE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE2Cu; }
        if (ctx->pc != 0x15AE2Cu) { return; }
    }
    ctx->pc = 0x15AE2Cu;
    // 0x15ae2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15ae2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15ae30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae34: 0x26850098  addiu       $a1, $s4, 0x98
    ctx->pc = 0x15ae34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
    // 0x15ae38: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x15AE38u;
    SET_GPR_U32(ctx, 31, 0x15AE40u);
    ctx->pc = 0x15AE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE38u;
            // 0x15ae3c: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE40u; }
        if (ctx->pc != 0x15AE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE40u; }
        if (ctx->pc != 0x15AE40u) { return; }
    }
    ctx->pc = 0x15AE40u;
    // 0x15ae40: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x15ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x15ae44: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x15ae44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x15ae48: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x15ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x15ae4c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x15ae4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15ae50: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x15ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15ae54: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x15ae54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x15ae58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15ae5c: 0x8ca5c098  lw          $a1, -0x3F68($a1)
    ctx->pc = 0x15ae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294951064)));
    // 0x15ae60: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x15ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x15ae64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ae64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15ae6c: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x15ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x15ae70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x15ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15ae74: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x15ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15ae78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15ae7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15ae80: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x15ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x15ae84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ae88: 0x2463001f  addiu       $v1, $v1, 0x1F
    ctx->pc = 0x15ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x15ae8c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x15ae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x15ae90: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x15ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x15ae94: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x15ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x15ae98: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x15ae98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x15ae9c: 0x0  nop
    ctx->pc = 0x15ae9cu;
    // NOP
label_15aea0:
    // 0x15aea0: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x15aea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x15aea4: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x15aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15aea8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15aeac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15aeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15aeb0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15aeb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15aeb8: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x15aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15aebc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x15aebcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15aec0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AEC0u;
    {
        const bool branch_taken_0x15aec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15AEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AEC0u;
            // 0x15aec4: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aec0) {
            ctx->pc = 0x15AED0u;
            goto label_15aed0;
        }
    }
    ctx->pc = 0x15AEC8u;
    // 0x15aec8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15AEC8u;
    {
        const bool branch_taken_0x15aec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AEC8u;
            // 0x15aecc: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aec8) {
            ctx->pc = 0x15AEDCu;
            goto label_15aedc;
        }
    }
    ctx->pc = 0x15AED0u;
label_15aed0:
    // 0x15aed0: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x15aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x15aed4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x15aed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aed8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x15aed8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_15aedc:
    // 0x15aedc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15aedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15aee0: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x15aee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x15aee4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15AEE4u;
    {
        const bool branch_taken_0x15aee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AEE4u;
            // 0x15aee8: 0x30e20003  andi        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aee4) {
            ctx->pc = 0x15AEA0u;
            runtime->cooperativeGuestYield();
            goto label_15aea0;
        }
    }
    ctx->pc = 0x15AEECu;
    // 0x15aeec: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x15aeecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15aef0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15AEF0u;
    {
        const bool branch_taken_0x15aef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AEF0u;
            // 0x15aef4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aef0) {
            ctx->pc = 0x15AF08u;
            goto label_15af08;
        }
    }
    ctx->pc = 0x15AEF8u;
    // 0x15aef8: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x15aef8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15aefc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15af00: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x15af00u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x15af04: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15af04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15af08:
    // 0x15af08: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15AF08u;
    {
        const bool branch_taken_0x15af08 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x15af08) {
            ctx->pc = 0x15AF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF08u;
            // 0x15af0c: 0x8e22006c  lw          $v0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AF20u;
            goto label_15af20;
        }
    }
    ctx->pc = 0x15AF10u;
    // 0x15af10: 0x94c2000e  lhu         $v0, 0xE($a2)
    ctx->pc = 0x15af10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x15af14: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15af14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15af18: 0xa4c2000e  sh          $v0, 0xE($a2)
    ctx->pc = 0x15af18u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x15af1c: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x15af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_15af20:
    // 0x15af20: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x15af20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15af24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15af24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af28: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x15af28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x15af2c: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x15af2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
label_15af30:
    // 0x15af30: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x15af30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x15af34: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x15af34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15af38: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15af38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15af3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15af3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15af40: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15af40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15af44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15af44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15af48: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x15af48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15af4c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x15af4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15af50: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AF50u;
    {
        const bool branch_taken_0x15af50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15AF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF50u;
            // 0x15af54: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af50) {
            ctx->pc = 0x15AF60u;
            goto label_15af60;
        }
    }
    ctx->pc = 0x15AF58u;
    // 0x15af58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15AF58u;
    {
        const bool branch_taken_0x15af58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF58u;
            // 0x15af5c: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af58) {
            ctx->pc = 0x15AF6Cu;
            goto label_15af6c;
        }
    }
    ctx->pc = 0x15AF60u;
label_15af60:
    // 0x15af60: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x15af60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x15af64: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x15af64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af68: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x15af68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_15af6c:
    // 0x15af6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15af6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15af70: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x15af70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x15af74: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15AF74u;
    {
        const bool branch_taken_0x15af74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF74u;
            // 0x15af78: 0x30e20003  andi        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af74) {
            ctx->pc = 0x15AF30u;
            runtime->cooperativeGuestYield();
            goto label_15af30;
        }
    }
    ctx->pc = 0x15AF7Cu;
    // 0x15af7c: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x15af7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15af80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15AF80u;
    {
        const bool branch_taken_0x15af80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF80u;
            // 0x15af84: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af80) {
            ctx->pc = 0x15AF98u;
            goto label_15af98;
        }
    }
    ctx->pc = 0x15AF88u;
    // 0x15af88: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x15af88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15af8c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15af8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15af90: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x15af90u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x15af94: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15af94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15af98:
    // 0x15af98: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15AF98u;
    {
        const bool branch_taken_0x15af98 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x15af98) {
            ctx->pc = 0x15AF9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF98u;
            // 0x15af9c: 0x8e22006c  lw          $v0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AFB0u;
            goto label_15afb0;
        }
    }
    ctx->pc = 0x15AFA0u;
    // 0x15afa0: 0x94c2000e  lhu         $v0, 0xE($a2)
    ctx->pc = 0x15afa0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x15afa4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15afa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15afa8: 0xa4c2000e  sh          $v0, 0xE($a2)
    ctx->pc = 0x15afa8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x15afac: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x15afacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_15afb0:
    // 0x15afb0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x15afb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15afb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15afb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afb8: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x15afb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15afbc: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x15afbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
label_15afc0:
    // 0x15afc0: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x15afc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x15afc4: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x15afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15afc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15afcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15afccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15afd0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15afd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15afd8: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x15afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15afdc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x15afdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15afe0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AFE0u;
    {
        const bool branch_taken_0x15afe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15AFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AFE0u;
            // 0x15afe4: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afe0) {
            ctx->pc = 0x15AFF0u;
            goto label_15aff0;
        }
    }
    ctx->pc = 0x15AFE8u;
    // 0x15afe8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15AFE8u;
    {
        const bool branch_taken_0x15afe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AFE8u;
            // 0x15afec: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afe8) {
            ctx->pc = 0x15AFFCu;
            goto label_15affc;
        }
    }
    ctx->pc = 0x15AFF0u;
label_15aff0:
    // 0x15aff0: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x15aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x15aff4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x15aff4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aff8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x15aff8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_15affc:
    // 0x15affc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15affcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15b000: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x15b000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x15b004: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15B004u;
    {
        const bool branch_taken_0x15b004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B004u;
            // 0x15b008: 0x30e20003  andi        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b004) {
            ctx->pc = 0x15AFC0u;
            runtime->cooperativeGuestYield();
            goto label_15afc0;
        }
    }
    ctx->pc = 0x15B00Cu;
    // 0x15b00c: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x15b00cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15b010: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B010u;
    {
        const bool branch_taken_0x15b010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B010u;
            // 0x15b014: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b010) {
            ctx->pc = 0x15B028u;
            goto label_15b028;
        }
    }
    ctx->pc = 0x15B018u;
    // 0x15b018: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x15b018u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15b01c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15b01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15b020: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x15b020u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b024: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15b024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15b028:
    // 0x15b028: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B028u;
    {
        const bool branch_taken_0x15b028 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x15b028) {
            ctx->pc = 0x15B02Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B028u;
            // 0x15b02c: 0x8e22006c  lw          $v0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B040u;
            goto label_15b040;
        }
    }
    ctx->pc = 0x15B030u;
    // 0x15b030: 0x94c2000e  lhu         $v0, 0xE($a2)
    ctx->pc = 0x15b030u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x15b034: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15b034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15b038: 0xa4c2000e  sh          $v0, 0xE($a2)
    ctx->pc = 0x15b038u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b03c: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x15b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_15b040:
    // 0x15b040: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x15b040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b044: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15b044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b048: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x15b048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x15b04c: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x15b04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
label_15b050:
    // 0x15b050: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x15b050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x15b054: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x15b054u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15b058: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15b058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15b05c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15b05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15b060: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15b060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15b064: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15b064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b068: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x15b068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15b06c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x15b06cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b070: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B070u;
    {
        const bool branch_taken_0x15b070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B070u;
            // 0x15b074: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b070) {
            ctx->pc = 0x15B080u;
            goto label_15b080;
        }
    }
    ctx->pc = 0x15B078u;
    // 0x15b078: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15B078u;
    {
        const bool branch_taken_0x15b078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B078u;
            // 0x15b07c: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b078) {
            ctx->pc = 0x15B08Cu;
            goto label_15b08c;
        }
    }
    ctx->pc = 0x15B080u;
label_15b080:
    // 0x15b080: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x15b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x15b084: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x15b084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b088: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x15b088u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_15b08c:
    // 0x15b08c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15b08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15b090: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x15b090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x15b094: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15B094u;
    {
        const bool branch_taken_0x15b094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B094u;
            // 0x15b098: 0x30e20003  andi        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b094) {
            ctx->pc = 0x15B050u;
            runtime->cooperativeGuestYield();
            goto label_15b050;
        }
    }
    ctx->pc = 0x15B09Cu;
    // 0x15b09c: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x15b09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15b0a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B0A0u;
    {
        const bool branch_taken_0x15b0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B0A0u;
            // 0x15b0a4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0a0) {
            ctx->pc = 0x15B0B8u;
            goto label_15b0b8;
        }
    }
    ctx->pc = 0x15B0A8u;
    // 0x15b0a8: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x15b0a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15b0ac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15b0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15b0b0: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x15b0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b0b4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15b0b8:
    // 0x15b0b8: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B0B8u;
    {
        const bool branch_taken_0x15b0b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x15b0b8) {
            ctx->pc = 0x15B0BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B0B8u;
            // 0x15b0bc: 0x8e22006c  lw          $v0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B0D0u;
            goto label_15b0d0;
        }
    }
    ctx->pc = 0x15B0C0u;
    // 0x15b0c0: 0x94c2000e  lhu         $v0, 0xE($a2)
    ctx->pc = 0x15b0c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x15b0c4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15b0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15b0c8: 0xa4c2000e  sh          $v0, 0xE($a2)
    ctx->pc = 0x15b0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b0cc: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x15b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_15b0d0:
    // 0x15b0d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x15b0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b0d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15b0d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0d8: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x15b0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x15b0dc: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x15b0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
label_15b0e0:
    // 0x15b0e0: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x15b0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x15b0e4: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x15b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15b0e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15b0ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15b0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15b0f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15b0f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b0f8: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x15b0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15b0fc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x15b0fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b100: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B100u;
    {
        const bool branch_taken_0x15b100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B100u;
            // 0x15b104: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b100) {
            ctx->pc = 0x15B110u;
            goto label_15b110;
        }
    }
    ctx->pc = 0x15B108u;
    // 0x15b108: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15B108u;
    {
        const bool branch_taken_0x15b108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B108u;
            // 0x15b10c: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b108) {
            ctx->pc = 0x15B11Cu;
            goto label_15b11c;
        }
    }
    ctx->pc = 0x15B110u;
label_15b110:
    // 0x15b110: 0x24a20222  addiu       $v0, $a1, 0x222
    ctx->pc = 0x15b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 546));
    // 0x15b114: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x15b114u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b118: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x15b118u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_15b11c:
    // 0x15b11c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15b11cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15b120: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x15b120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x15b124: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15B124u;
    {
        const bool branch_taken_0x15b124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B124u;
            // 0x15b128: 0x30e20003  andi        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b124) {
            ctx->pc = 0x15B0E0u;
            runtime->cooperativeGuestYield();
            goto label_15b0e0;
        }
    }
    ctx->pc = 0x15B12Cu;
    // 0x15b12c: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x15b12cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15b130: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B130u;
    {
        const bool branch_taken_0x15b130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B130u;
            // 0x15b134: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b130) {
            ctx->pc = 0x15B148u;
            goto label_15b148;
        }
    }
    ctx->pc = 0x15B138u;
    // 0x15b138: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x15b138u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15b13c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15b13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15b140: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x15b140u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b144: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15b144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15b148:
    // 0x15b148: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B148u;
    {
        const bool branch_taken_0x15b148 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x15b148) {
            ctx->pc = 0x15B14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B148u;
            // 0x15b14c: 0x8e22006c  lw          $v0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B160u;
            goto label_15b160;
        }
    }
    ctx->pc = 0x15B150u;
    // 0x15b150: 0x94c2000e  lhu         $v0, 0xE($a2)
    ctx->pc = 0x15b150u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x15b154: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15b154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15b158: 0xa4c2000e  sh          $v0, 0xE($a2)
    ctx->pc = 0x15b158u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b15c: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x15b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_15b160:
    // 0x15b160: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x15b160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15b164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b168: 0x24460060  addiu       $a2, $v0, 0x60
    ctx->pc = 0x15b168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x15b16c: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x15b16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
label_15b170:
    // 0x15b170: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x15b170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x15b174: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x15b174u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15b178: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15b178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15b17c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15b17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15b180: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15b180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15b184: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15b184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b188: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x15b188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15b18c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x15b18cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b190: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B190u;
    {
        const bool branch_taken_0x15b190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B190u;
            // 0x15b194: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b190) {
            ctx->pc = 0x15B1A0u;
            goto label_15b1a0;
        }
    }
    ctx->pc = 0x15B198u;
    // 0x15b198: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15B198u;
    {
        const bool branch_taken_0x15b198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B198u;
            // 0x15b19c: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b198) {
            ctx->pc = 0x15B1ACu;
            goto label_15b1ac;
        }
    }
    ctx->pc = 0x15B1A0u;
label_15b1a0:
    // 0x15b1a0: 0x24a20222  addiu       $v0, $a1, 0x222
    ctx->pc = 0x15b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 546));
    // 0x15b1a4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x15b1a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b1a8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x15b1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_15b1ac:
    // 0x15b1ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15b1acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15b1b0: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x15b1b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x15b1b4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15B1B4u;
    {
        const bool branch_taken_0x15b1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B1B4u;
            // 0x15b1b8: 0x30e20003  andi        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1b4) {
            ctx->pc = 0x15B170u;
            runtime->cooperativeGuestYield();
            goto label_15b170;
        }
    }
    ctx->pc = 0x15B1BCu;
    // 0x15b1bc: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x15b1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15b1c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B1C0u;
    {
        const bool branch_taken_0x15b1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B1C0u;
            // 0x15b1c4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1c0) {
            ctx->pc = 0x15B1D8u;
            goto label_15b1d8;
        }
    }
    ctx->pc = 0x15B1C8u;
    // 0x15b1c8: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x15b1c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15b1cc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15b1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15b1d0: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x15b1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b1d4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15b1d8:
    // 0x15b1d8: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B1D8u;
    {
        const bool branch_taken_0x15b1d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x15b1d8) {
            ctx->pc = 0x15B1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B1D8u;
            // 0x15b1dc: 0x8e23006c  lw          $v1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B1F0u;
            goto label_15b1f0;
        }
    }
    ctx->pc = 0x15B1E0u;
    // 0x15b1e0: 0x94c2000e  lhu         $v0, 0xE($a2)
    ctx->pc = 0x15b1e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x15b1e4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15b1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15b1e8: 0xa4c2000e  sh          $v0, 0xE($a2)
    ctx->pc = 0x15b1e8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b1ec: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x15b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_15b1f0:
    // 0x15b1f0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x15b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x15b1f4: 0x8c48c094  lw          $t0, -0x3F6C($v0)
    ctx->pc = 0x15b1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951060)));
    // 0x15b1f8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x15b1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b1fc: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x15b1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x15b200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b204: 0x30c20003  andi        $v0, $a2, 0x3
    ctx->pc = 0x15b204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
label_15b208:
    // 0x15b208: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x15b208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x15b20c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x15b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15b210: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15b210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15b214: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15b214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15b218: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15b218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15b21c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b220: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x15b220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15b224: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x15b224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b228: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B228u;
    {
        const bool branch_taken_0x15b228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B228u;
            // 0x15b22c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b228) {
            ctx->pc = 0x15B238u;
            goto label_15b238;
        }
    }
    ctx->pc = 0x15B230u;
    // 0x15b230: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15B230u;
    {
        const bool branch_taken_0x15b230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B230u;
            // 0x15b234: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b230) {
            ctx->pc = 0x15B24Cu;
            goto label_15b24c;
        }
    }
    ctx->pc = 0x15B238u;
label_15b238:
    // 0x15b238: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x15b238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b23c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x15b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x15b240: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15b240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b244: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x15b244u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x15b248: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x15b248u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_15b24c:
    // 0x15b24c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b250: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x15b250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x15b254: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15B254u;
    {
        const bool branch_taken_0x15b254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B254u;
            // 0x15b258: 0x30c20003  andi        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b254) {
            ctx->pc = 0x15B208u;
            runtime->cooperativeGuestYield();
            goto label_15b208;
        }
    }
    ctx->pc = 0x15B25Cu;
    // 0x15b25c: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x15b25cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15b260: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B260u;
    {
        const bool branch_taken_0x15b260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B260u;
            // 0x15b264: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b260) {
            ctx->pc = 0x15B278u;
            goto label_15b278;
        }
    }
    ctx->pc = 0x15B268u;
    // 0x15b268: 0x94a2000c  lhu         $v0, 0xC($a1)
    ctx->pc = 0x15b268u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x15b26c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15b26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15b270: 0xa4a2000c  sh          $v0, 0xC($a1)
    ctx->pc = 0x15b270u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b274: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15b274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15b278:
    // 0x15b278: 0x54e20005  bnel        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B278u;
    {
        const bool branch_taken_0x15b278 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x15b278) {
            ctx->pc = 0x15B27Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B278u;
            // 0x15b27c: 0x8e22006c  lw          $v0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B290u;
            goto label_15b290;
        }
    }
    ctx->pc = 0x15B280u;
    // 0x15b280: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x15b280u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x15b284: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15b284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15b288: 0xa4a2000e  sh          $v0, 0xE($a1)
    ctx->pc = 0x15b288u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b28c: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x15b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_15b290:
    // 0x15b290: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x15b290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b294: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15b294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b298: 0x24460080  addiu       $a2, $v0, 0x80
    ctx->pc = 0x15b298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15b29c: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x15b29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
label_15b2a0:
    // 0x15b2a0: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x15b2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x15b2a4: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x15b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15b2a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15b2ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15b2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15b2b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15b2b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b2b8: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x15b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15b2bc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x15b2bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b2c0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B2C0u;
    {
        const bool branch_taken_0x15b2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B2C0u;
            // 0x15b2c4: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2c0) {
            ctx->pc = 0x15B2D0u;
            goto label_15b2d0;
        }
    }
    ctx->pc = 0x15B2C8u;
    // 0x15b2c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15B2C8u;
    {
        const bool branch_taken_0x15b2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B2C8u;
            // 0x15b2cc: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2c8) {
            ctx->pc = 0x15B2DCu;
            goto label_15b2dc;
        }
    }
    ctx->pc = 0x15B2D0u;
label_15b2d0:
    // 0x15b2d0: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x15b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x15b2d4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x15b2d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b2d8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x15b2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_15b2dc:
    // 0x15b2dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15b2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15b2e0: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x15b2e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x15b2e4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15B2E4u;
    {
        const bool branch_taken_0x15b2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B2E4u;
            // 0x15b2e8: 0x30e20003  andi        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2e4) {
            ctx->pc = 0x15B2A0u;
            runtime->cooperativeGuestYield();
            goto label_15b2a0;
        }
    }
    ctx->pc = 0x15B2ECu;
    // 0x15b2ec: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x15b2ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15b2f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B2F0u;
    {
        const bool branch_taken_0x15b2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B2F0u;
            // 0x15b2f4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2f0) {
            ctx->pc = 0x15B308u;
            goto label_15b308;
        }
    }
    ctx->pc = 0x15B2F8u;
    // 0x15b2f8: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x15b2f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15b2fc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15b2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15b300: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x15b300u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b304: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15b304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15b308:
    // 0x15b308: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B308u;
    {
        const bool branch_taken_0x15b308 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x15b308) {
            ctx->pc = 0x15B30Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B308u;
            // 0x15b30c: 0xae200058  sw          $zero, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B320u;
            goto label_15b320;
        }
    }
    ctx->pc = 0x15B310u;
    // 0x15b310: 0x94c2000e  lhu         $v0, 0xE($a2)
    ctx->pc = 0x15b310u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x15b314: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15b314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15b318: 0xa4c2000e  sh          $v0, 0xE($a2)
    ctx->pc = 0x15b318u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b31c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x15b31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_15b320:
    // 0x15b320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15B320u;
    {
        const bool branch_taken_0x15b320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B320u;
            // 0x15b324: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b320) {
            ctx->pc = 0x15B32Cu;
            goto label_15b32c;
        }
    }
    ctx->pc = 0x15B328u;
label_15b328:
    // 0x15b328: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15b328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15b32c:
    // 0x15b32c: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x15b32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x15b330: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15B330u;
    {
        const bool branch_taken_0x15b330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B330u;
            // 0x15b334: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b330) {
            ctx->pc = 0x15B370u;
            goto label_15b370;
        }
    }
    ctx->pc = 0x15B338u;
    // 0x15b338: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x15b338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x15b33c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x15b33cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15b340: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15b340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15b344: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15b344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15b348: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x15b348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x15b34c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15b350: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15b350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15b354: 0x84620030  lh          $v0, 0x30($v1)
    ctx->pc = 0x15b354u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15b358: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x15B358u;
    {
        const bool branch_taken_0x15b358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b358) {
            ctx->pc = 0x15B35Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B358u;
            // 0x15b35c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B37Cu;
            goto label_15b37c;
        }
    }
    ctx->pc = 0x15B360u;
    // 0x15b360: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x15b360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x15b364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15b368: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x15B368u;
    {
        const bool branch_taken_0x15b368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B368u;
            // 0x15b36c: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b368) {
            ctx->pc = 0x15B328u;
            runtime->cooperativeGuestYield();
            goto label_15b328;
        }
    }
    ctx->pc = 0x15B370u;
label_15b370:
    // 0x15b370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15B370u;
    {
        const bool branch_taken_0x15b370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B370u;
            // 0x15b374: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b370) {
            ctx->pc = 0x15B37Cu;
            goto label_15b37c;
        }
    }
    ctx->pc = 0x15B378u;
label_15b378:
    // 0x15b378: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15b378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15b37c:
    // 0x15b37c: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x15b37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x15b380: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15B380u;
    {
        const bool branch_taken_0x15b380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B380u;
            // 0x15b384: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b380) {
            ctx->pc = 0x15B3C0u;
            goto label_15b3c0;
        }
    }
    ctx->pc = 0x15B388u;
    // 0x15b388: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x15b388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x15b38c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x15b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15b390: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15b390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15b394: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15b394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15b398: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x15b398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x15b39c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15b3a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15b3a4: 0x84620040  lh          $v0, 0x40($v1)
    ctx->pc = 0x15b3a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x15b3a8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B3A8u;
    {
        const bool branch_taken_0x15b3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b3a8) {
            ctx->pc = 0x15B3ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B3A8u;
            // 0x15b3ac: 0x8e83009c  lw          $v1, 0x9C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B3C4u;
            goto label_15b3c4;
        }
    }
    ctx->pc = 0x15B3B0u;
    // 0x15b3b0: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x15b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x15b3b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15b3b8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x15B3B8u;
    {
        const bool branch_taken_0x15b3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B3B8u;
            // 0x15b3bc: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3b8) {
            ctx->pc = 0x15B378u;
            runtime->cooperativeGuestYield();
            goto label_15b378;
        }
    }
    ctx->pc = 0x15B3C0u;
label_15b3c0:
    // 0x15b3c0: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x15b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_15b3c4:
    // 0x15b3c4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x15b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15b3c8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B3C8u;
    {
        const bool branch_taken_0x15b3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15b3c8) {
            ctx->pc = 0x15B3CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B3C8u;
            // 0x15b3cc: 0xc6200044  lwc1        $f0, 0x44($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B3E0u;
            goto label_15b3e0;
        }
    }
    ctx->pc = 0x15B3D0u;
    // 0x15b3d0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x15b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x15b3d4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x15b3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x15b3d8: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x15b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x15b3dc: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x15b3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15b3e0:
    // 0x15b3e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15b3e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b3e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15b3e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b3e8: 0x0  nop
    ctx->pc = 0x15b3e8u;
    // NOP
    // 0x15b3ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x15B3ECu;
    {
        const bool branch_taken_0x15b3ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15B3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B3ECu;
            // 0x15b3f0: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3ec) {
            ctx->pc = 0x15B404u;
            goto label_15b404;
        }
    }
    ctx->pc = 0x15B3F4u;
    // 0x15b3f4: 0xe6210044  swc1        $f1, 0x44($s1)
    ctx->pc = 0x15b3f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x15b3f8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x15b3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x15b3fc: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x15b3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x15b400: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x15b400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_15b404:
    // 0x15b404: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15b404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x15b408: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B408u;
    {
        const bool branch_taken_0x15b408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B408u;
            // 0x15b40c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b408) {
            ctx->pc = 0x15B424u;
            goto label_15b424;
        }
    }
    ctx->pc = 0x15B410u;
    // 0x15b410: 0xc04bfb6  jal         func_12FED8
    ctx->pc = 0x15B410u;
    SET_GPR_U32(ctx, 31, 0x15B418u);
    ctx->pc = 0x15B414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B410u;
            // 0x15b414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FED8u;
    if (runtime->hasFunction(0x12FED8u)) {
        auto targetFn = runtime->lookupFunction(0x12FED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B418u; }
        if (ctx->pc != 0x15B418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12fed8_0x12fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B418u; }
        if (ctx->pc != 0x15B418u) { return; }
    }
    ctx->pc = 0x15B418u;
    // 0x15b418: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15b418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b41c: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x15b41cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b420: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15b420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15b424:
    // 0x15b424: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15b424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b428: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15b428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b42c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15b42cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b430: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x15b430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b434: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x15b434u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b43c: 0x3e00008  jr          $ra
    ctx->pc = 0x15B43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B43Cu;
            // 0x15b440: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15AD68u: goto label_15ad68;
            case 0x15AD70u: goto label_15ad70;
            case 0x15AD88u: goto label_15ad88;
            case 0x15AEA0u: goto label_15aea0;
            case 0x15AED0u: goto label_15aed0;
            case 0x15AEDCu: goto label_15aedc;
            case 0x15AF08u: goto label_15af08;
            case 0x15AF20u: goto label_15af20;
            case 0x15AF30u: goto label_15af30;
            case 0x15AF60u: goto label_15af60;
            case 0x15AF6Cu: goto label_15af6c;
            case 0x15AF98u: goto label_15af98;
            case 0x15AFB0u: goto label_15afb0;
            case 0x15AFC0u: goto label_15afc0;
            case 0x15AFF0u: goto label_15aff0;
            case 0x15AFFCu: goto label_15affc;
            case 0x15B028u: goto label_15b028;
            case 0x15B040u: goto label_15b040;
            case 0x15B050u: goto label_15b050;
            case 0x15B080u: goto label_15b080;
            case 0x15B08Cu: goto label_15b08c;
            case 0x15B0B8u: goto label_15b0b8;
            case 0x15B0D0u: goto label_15b0d0;
            case 0x15B0E0u: goto label_15b0e0;
            case 0x15B110u: goto label_15b110;
            case 0x15B11Cu: goto label_15b11c;
            case 0x15B148u: goto label_15b148;
            case 0x15B160u: goto label_15b160;
            case 0x15B170u: goto label_15b170;
            case 0x15B1A0u: goto label_15b1a0;
            case 0x15B1ACu: goto label_15b1ac;
            case 0x15B1D8u: goto label_15b1d8;
            case 0x15B1F0u: goto label_15b1f0;
            case 0x15B208u: goto label_15b208;
            case 0x15B238u: goto label_15b238;
            case 0x15B24Cu: goto label_15b24c;
            case 0x15B278u: goto label_15b278;
            case 0x15B290u: goto label_15b290;
            case 0x15B2A0u: goto label_15b2a0;
            case 0x15B2D0u: goto label_15b2d0;
            case 0x15B2DCu: goto label_15b2dc;
            case 0x15B308u: goto label_15b308;
            case 0x15B320u: goto label_15b320;
            case 0x15B328u: goto label_15b328;
            case 0x15B32Cu: goto label_15b32c;
            case 0x15B370u: goto label_15b370;
            case 0x15B378u: goto label_15b378;
            case 0x15B37Cu: goto label_15b37c;
            case 0x15B3C0u: goto label_15b3c0;
            case 0x15B3C4u: goto label_15b3c4;
            case 0x15B3E0u: goto label_15b3e0;
            case 0x15B404u: goto label_15b404;
            case 0x15B424u: goto label_15b424;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B444u;
    // 0x15b444: 0x0  nop
    ctx->pc = 0x15b444u;
    // NOP
    // 0x15b448: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15b448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15b44c: 0x0  nop
    ctx->pc = 0x15b44cu;
    // NOP
}
