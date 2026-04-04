#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BFE80
// Address: 0x1bfe80 - 0x1c0868
void sub_001BFE80_0x1bfe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFE80_0x1bfe80");
#endif

    ctx->pc = 0x1bfe80u;

label_1bfe80:
    // 0x1bfe80: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1bfe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1bfe84: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1bfe84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x1bfe88: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1bfe88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x1bfe8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bfe8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe90: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1bfe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x1bfe94: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1bfe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x1bfe98: 0xe7bb0198  swc1        $f27, 0x198($sp)
    ctx->pc = 0x1bfe98u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x1bfe9c: 0xe7ba0190  swc1        $f26, 0x190($sp)
    ctx->pc = 0x1bfe9cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x1bfea0: 0xe7b90188  swc1        $f25, 0x188($sp)
    ctx->pc = 0x1bfea0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x1bfea4: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x1bfea4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1bfea8: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x1bfea8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x1bfeac: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x1bfeacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x1bfeb0: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x1bfeb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1bfeb4: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x1bfeb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1bfeb8: 0x8e2203e4  lw          $v0, 0x3E4($s1)
    ctx->pc = 0x1bfeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 996)));
    // 0x1bfebc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1bfebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1bfec0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BFEC0u;
    {
        const bool branch_taken_0x1bfec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFEC0u;
            // 0x1bfec4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfec0) {
            ctx->pc = 0x1BFEF8u;
            goto label_1bfef8;
        }
    }
    ctx->pc = 0x1BFEC8u;
    // 0x1bfec8: 0xc06a1f6  jal         func_1A87D8
    ctx->pc = 0x1BFEC8u;
    SET_GPR_U32(ctx, 31, 0x1BFED0u);
    ctx->pc = 0x1BFECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFEC8u;
            // 0x1bfecc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A87D8u;
    if (runtime->hasFunction(0x1A87D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A87D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFED0u; }
        if (ctx->pc != 0x1BFED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A87D8_0x1a87d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFED0u; }
        if (ctx->pc != 0x1BFED0u) { return; }
    }
    ctx->pc = 0x1BFED0u;
    // 0x1bfed0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BFED0u;
    {
        const bool branch_taken_0x1bfed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfed0) {
            ctx->pc = 0x1BFED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFED0u;
            // 0x1bfed4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BFEF8u;
            goto label_1bfef8;
        }
    }
    ctx->pc = 0x1BFED8u;
    // 0x1bfed8: 0xc06a5e8  jal         func_1A97A0
    ctx->pc = 0x1BFED8u;
    SET_GPR_U32(ctx, 31, 0x1BFEE0u);
    ctx->pc = 0x1BFEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFED8u;
            // 0x1bfedc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A97A0u;
    if (runtime->hasFunction(0x1A97A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A97A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEE0u; }
        if (ctx->pc != 0x1BFEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A97A0_0x1a97a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEE0u; }
        if (ctx->pc != 0x1BFEE0u) { return; }
    }
    ctx->pc = 0x1BFEE0u;
    // 0x1bfee0: 0x8e2303e4  lw          $v1, 0x3E4($s1)
    ctx->pc = 0x1bfee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 996)));
    // 0x1bfee4: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x1bfee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1bfee8: 0x7e220360  sq          $v0, 0x360($s1)
    ctx->pc = 0x1bfee8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 864), GPR_VEC(ctx, 2));
    // 0x1bfeec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1bfeecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1bfef0: 0xae2303e4  sw          $v1, 0x3E4($s1)
    ctx->pc = 0x1bfef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 996), GPR_U32(ctx, 3));
    // 0x1bfef4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bfef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1bfef8:
    // 0x1bfef8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1bfef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1bfefc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bfefcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bff00: 0xc440cd14  lwc1        $f0, -0x32EC($v0)
    ctx->pc = 0x1bff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bff04: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bff04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bff08: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1bff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1bff0c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1bff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1bff10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bff10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bff14: 0xc461cd18  lwc1        $f1, -0x32E8($v1)
    ctx->pc = 0x1bff14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bff18: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1bff18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1bff1c: 0x8e2303ec  lw          $v1, 0x3EC($s1)
    ctx->pc = 0x1bff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1004)));
    // 0x1bff20: 0xae2202d8  sw          $v0, 0x2D8($s1)
    ctx->pc = 0x1bff20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 2));
    // 0x1bff24: 0xe4610048  swc1        $f1, 0x48($v1)
    ctx->pc = 0x1bff24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x1bff28: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1BFF28u;
    SET_GPR_U32(ctx, 31, 0x1BFF30u);
    ctx->pc = 0x1BFF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF28u;
            // 0x1bff2c: 0xe4600040  swc1        $f0, 0x40($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF30u; }
        if (ctx->pc != 0x1BFF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF30u; }
        if (ctx->pc != 0x1BFF30u) { return; }
    }
    ctx->pc = 0x1BFF30u;
    // 0x1bff30: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1BFF30u;
    {
        const bool branch_taken_0x1bff30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF30u;
            // 0x1bff34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff30) {
            ctx->pc = 0x1BFFDCu;
            goto label_1bffdc;
        }
    }
    ctx->pc = 0x1BFF38u;
    // 0x1bff38: 0x8e320380  lw          $s2, 0x380($s1)
    ctx->pc = 0x1bff38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x1bff3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bff40: 0x12420015  beq         $s2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BFF40u;
    {
        const bool branch_taken_0x1bff40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BFF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF40u;
            // 0x1bff44: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff40) {
            ctx->pc = 0x1BFF98u;
            goto label_1bff98;
        }
    }
    ctx->pc = 0x1BFF48u;
    // 0x1bff48: 0x8c50cb94  lw          $s0, -0x346C($v0)
    ctx->pc = 0x1bff48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1bff4c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bff50: 0x8c42e560  lw          $v0, -0x1AA0($v0)
    ctx->pc = 0x1bff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x1bff54: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x1bff54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x1bff58: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BFF58u;
    {
        const bool branch_taken_0x1bff58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF58u;
            // 0x1bff5c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff58) {
            ctx->pc = 0x1BFF90u;
            goto label_1bff90;
        }
    }
    ctx->pc = 0x1BFF60u;
    // 0x1bff60: 0x8e021590  lw          $v0, 0x1590($s0)
    ctx->pc = 0x1bff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5520)));
    // 0x1bff64: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BFF64u;
    {
        const bool branch_taken_0x1bff64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BFF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF64u;
            // 0x1bff68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff64) {
            ctx->pc = 0x1BFF80u;
            goto label_1bff80;
        }
    }
    ctx->pc = 0x1BFF6Cu;
    // 0x1bff6c: 0xae031590  sw          $v1, 0x1590($s0)
    ctx->pc = 0x1bff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5520), GPR_U32(ctx, 3));
    // 0x1bff70: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1BFF70u;
    SET_GPR_U32(ctx, 31, 0x1BFF78u);
    ctx->pc = 0x1BFF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF70u;
            // 0x1bff74: 0xae030238  sw          $v1, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF78u; }
        if (ctx->pc != 0x1BFF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF78u; }
        if (ctx->pc != 0x1BFF78u) { return; }
    }
    ctx->pc = 0x1BFF78u;
    // 0x1bff78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFF78u;
    {
        const bool branch_taken_0x1bff78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF78u;
            // 0x1bff7c: 0xae120028  sw          $s2, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff78) {
            ctx->pc = 0x1BFF90u;
            goto label_1bff90;
        }
    }
    ctx->pc = 0x1BFF80u;
label_1bff80:
    // 0x1bff80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bff84: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1BFF84u;
    SET_GPR_U32(ctx, 31, 0x1BFF8Cu);
    ctx->pc = 0x1BFF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF84u;
            // 0x1bff88: 0xae020238  sw          $v0, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF8Cu; }
        if (ctx->pc != 0x1BFF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF8Cu; }
        if (ctx->pc != 0x1BFF8Cu) { return; }
    }
    ctx->pc = 0x1BFF8Cu;
    // 0x1bff8c: 0xae120028  sw          $s2, 0x28($s0)
    ctx->pc = 0x1bff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
label_1bff90:
    // 0x1bff90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bff90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bff94: 0xae220380  sw          $v0, 0x380($s1)
    ctx->pc = 0x1bff94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 2));
label_1bff98:
    // 0x1bff98: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bff98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bff9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bffa0: 0x8c50cb94  lw          $s0, -0x346C($v0)
    ctx->pc = 0x1bffa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1bffa4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bffa8: 0x8c42e560  lw          $v0, -0x1AA0($v0)
    ctx->pc = 0x1bffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x1bffac: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x1bffacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x1bffb0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BFFB0u;
    {
        const bool branch_taken_0x1bffb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFB0u;
            // 0x1bffb4: 0x8e120028  lw          $s2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffb0) {
            ctx->pc = 0x1BFFD8u;
            goto label_1bffd8;
        }
    }
    ctx->pc = 0x1BFFB8u;
    // 0x1bffb8: 0x8e021590  lw          $v0, 0x1590($s0)
    ctx->pc = 0x1bffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5520)));
    // 0x1bffbc: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BFFBCu;
    {
        const bool branch_taken_0x1bffbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bffbc) {
            ctx->pc = 0x1BFFC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFBCu;
            // 0x1bffc0: 0xae120028  sw          $s2, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BFFD8u;
            goto label_1bffd8;
        }
    }
    ctx->pc = 0x1BFFC4u;
    // 0x1bffc4: 0xae031590  sw          $v1, 0x1590($s0)
    ctx->pc = 0x1bffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5520), GPR_U32(ctx, 3));
    // 0x1bffc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bffc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bffcc: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1BFFCCu;
    SET_GPR_U32(ctx, 31, 0x1BFFD4u);
    ctx->pc = 0x1BFFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFCCu;
            // 0x1bffd0: 0xae030238  sw          $v1, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFD4u; }
        if (ctx->pc != 0x1BFFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFD4u; }
        if (ctx->pc != 0x1BFFD4u) { return; }
    }
    ctx->pc = 0x1BFFD4u;
    // 0x1bffd4: 0xae120028  sw          $s2, 0x28($s0)
    ctx->pc = 0x1bffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
label_1bffd8:
    // 0x1bffd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bffd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bffdc:
    // 0x1bffdc: 0xc07046a  jal         func_1C11A8
    ctx->pc = 0x1BFFDCu;
    SET_GPR_U32(ctx, 31, 0x1BFFE4u);
    ctx->pc = 0x1BFFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFDCu;
            // 0x1bffe0: 0x3c12002a  lui         $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A8u;
    if (runtime->hasFunction(0x1C11A8u)) {
        auto targetFn = runtime->lookupFunction(0x1C11A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFE4u; }
        if (ctx->pc != 0x1BFFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C11A8_0x1c11a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFE4u; }
        if (ctx->pc != 0x1BFFE4u) { return; }
    }
    ctx->pc = 0x1BFFE4u;
    // 0x1bffe4: 0xc0703b8  jal         func_1C0EE0
    ctx->pc = 0x1BFFE4u;
    SET_GPR_U32(ctx, 31, 0x1BFFECu);
    ctx->pc = 0x1BFFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFE4u;
            // 0x1bffe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0EE0u;
    if (runtime->hasFunction(0x1C0EE0u)) {
        auto targetFn = runtime->lookupFunction(0x1C0EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFECu; }
        if (ctx->pc != 0x1BFFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c0ee0_0x1c0f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFECu; }
        if (ctx->pc != 0x1BFFECu) { return; }
    }
    ctx->pc = 0x1BFFECu;
    // 0x1bffec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bffecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bfff0: 0x8e43cd58  lw          $v1, -0x32A8($s2)
    ctx->pc = 0x1bfff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954328)));
    // 0x1bfff4: 0xd8490020  lqc2        $vf9, 0x20($v0)
    ctx->pc = 0x1bfff4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1bfff8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1bfff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1bfffc: 0xfba90000  sqc2        $vf9, 0x0($sp)
    ctx->pc = 0x1bfffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1c0000: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x1c0000u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c0004: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1c0004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c0008: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x1c0008u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1c000c: 0xfba80020  sqc2        $vf8, 0x20($sp)
    ctx->pc = 0x1c000cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1c0010: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1c0010u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c0014: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1c0014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c0018: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c0018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c001c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c001cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c0020: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1c0020u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1c0024: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1c0024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1c0028: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1c0028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1c002c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1c002cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c0030: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1c0030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1c0034: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1c0034u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1c0038: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1c0038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1c003c: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1c003cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1c0040: 0x4be439ac  vsub.xyzw   $vf6, $vf7, $vf4
    ctx->pc = 0x1c0040u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1c0044: 0xfba70070  sqc2        $vf7, 0x70($sp)
    ctx->pc = 0x1c0044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1c0048: 0x4be610aa  vmul.xyzw   $vf2, $vf2, $vf6
    ctx->pc = 0x1c0048u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c004c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c004cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c0050: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c0050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c0054: 0xfba800c0  sqc2        $vf8, 0xC0($sp)
    ctx->pc = 0x1c0054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1c0058: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c0058u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c005c: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1c005cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c0060: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x1c0060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1c0064: 0x4be8116c  vsub.xyzw   $vf5, $vf2, $vf8
    ctx->pc = 0x1c0064u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1c0068: 0x4be628ea  vmul.xyzw   $vf3, $vf5, $vf6
    ctx->pc = 0x1c0068u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c006c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1c006cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c0070: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1c0070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c0074: 0xfba900d0  sqc2        $vf9, 0xD0($sp)
    ctx->pc = 0x1c0074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1c0078: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c0078u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c007c: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x1c007cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c0080: 0x4be910ac  vsub.xyzw   $vf2, $vf2, $vf9
    ctx->pc = 0x1c0080u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c0084: 0x4be610aa  vmul.xyzw   $vf2, $vf2, $vf6
    ctx->pc = 0x1c0084u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c0088: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c0088u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c008c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c008cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c0090: 0xfba800e0  sqc2        $vf8, 0xE0($sp)
    ctx->pc = 0x1c0090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1c0094: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1c0094u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c0098: 0x4486c000  mtc1        $a2, $f24
    ctx->pc = 0x1c0098u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1c009c: 0xda220360  lqc2        $vf2, 0x360($s1)
    ctx->pc = 0x1c009cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x1c00a0: 0x4be2212c  vsub.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x1c00a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c00a4: 0x4be4292a  vmul.xyzw   $vf4, $vf5, $vf4
    ctx->pc = 0x1c00a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c00a8: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1c00a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c00ac: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1c00acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c00b0: 0xfba800f0  sqc2        $vf8, 0xF0($sp)
    ctx->pc = 0x1c00b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1c00b4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c00b4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c00b8: 0x4483d000  mtc1        $v1, $f26
    ctx->pc = 0x1c00b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1c00bc: 0x4600d586  mov.s       $f22, $f26
    ctx->pc = 0x1c00bcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[26]);
    // 0x1c00c0: 0x4be239ec  vsub.xyzw   $vf7, $vf7, $vf2
    ctx->pc = 0x1c00c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1c00c4: 0x4be7296a  vmul.xyzw   $vf5, $vf5, $vf7
    ctx->pc = 0x1c00c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1c00c8: 0x4b052841  vaddy.x     $vf1, $vf5, $vf5y
    ctx->pc = 0x1c00c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c00cc: 0x4b050842  vaddz.x     $vf1, $vf1, $vf5z
    ctx->pc = 0x1c00ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c00d0: 0x8e2203e4  lw          $v0, 0x3E4($s1)
    ctx->pc = 0x1c00d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 996)));
    // 0x1c00d4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c00d4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c00d8: 0x4484d800  mtc1        $a0, $f27
    ctx->pc = 0x1c00d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x1c00dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c00dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c00e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C00E0u;
    {
        const bool branch_taken_0x1c00e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C00E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00E0u;
            // 0x1c00e4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00e0) {
            ctx->pc = 0x1C0118u;
            goto label_1c0118;
        }
    }
    ctx->pc = 0x1C00E8u;
    // 0x1c00e8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1c00e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1c00ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c00ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c00f0: 0xc44ccd10  lwc1        $f12, -0x32F0($v0)
    ctx->pc = 0x1c00f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c00f4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c00f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c00f8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1c00f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1c00fc: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c00fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c0100: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0104: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x1c0104u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x1c0108: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x1C0108u;
    SET_GPR_U32(ctx, 31, 0x1C0110u);
    ctx->pc = 0x1C010Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0108u;
            // 0x1c010c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0110u; }
        if (ctx->pc != 0x1C0110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0110u; }
        if (ctx->pc != 0x1C0110u) { return; }
    }
    ctx->pc = 0x1C0110u;
    // 0x1c0110: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C0110u;
    {
        const bool branch_taken_0x1c0110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0110u;
            // 0x1c0114: 0xc7a10100  lwc1        $f1, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0110) {
            ctx->pc = 0x1C0148u;
            goto label_1c0148;
        }
    }
    ctx->pc = 0x1C0118u;
label_1c0118:
    // 0x1c0118: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c0118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c011c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1c011cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1c0120: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0124: 0xc44ccd00  lwc1        $f12, -0x3300($v0)
    ctx->pc = 0x1c0124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0128: 0x27a40104  addiu       $a0, $sp, 0x104
    ctx->pc = 0x1c0128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1c012c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1c012cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1c0130: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c0130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c0134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0138: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x1c0138u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x1c013c: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x1C013Cu;
    SET_GPR_U32(ctx, 31, 0x1C0144u);
    ctx->pc = 0x1C0140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C013Cu;
            // 0x1c0140: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0144u; }
        if (ctx->pc != 0x1C0144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0144u; }
        if (ctx->pc != 0x1C0144u) { return; }
    }
    ctx->pc = 0x1C0144u;
    // 0x1c0144: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x1c0144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0148:
    // 0x1c0148: 0x46010643  div.s       $f25, $f0, $f1
    ctx->pc = 0x1c0148u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[25] = ctx->f[0] / ctx->f[1];
    // 0x1c014c: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x1c014cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1c0150: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C0150u;
    {
        const bool branch_taken_0x1c0150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0150) {
            ctx->pc = 0x1C0154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0150u;
            // 0x1c0154: 0x8e230374  lw          $v1, 0x374($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0184u;
            goto label_1c0184;
        }
    }
    ctx->pc = 0x1C0158u;
    // 0x1c0158: 0x8e220374  lw          $v0, 0x374($s1)
    ctx->pc = 0x1c0158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
    // 0x1c015c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1c015cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c0160: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0160u;
    {
        const bool branch_taken_0x1c0160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0160u;
            // 0x1c0164: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0160) {
            ctx->pc = 0x1C0178u;
            goto label_1c0178;
        }
    }
    ctx->pc = 0x1C0168u;
    // 0x1c0168: 0xc05c472  jal         func_1711C8
    ctx->pc = 0x1C0168u;
    SET_GPR_U32(ctx, 31, 0x1C0170u);
    ctx->pc = 0x1C016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0168u;
            // 0x1c016c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711C8u;
    if (runtime->hasFunction(0x1711C8u)) {
        auto targetFn = runtime->lookupFunction(0x1711C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0170u; }
        if (ctx->pc != 0x1C0170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1711c8_0x1711d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0170u; }
        if (ctx->pc != 0x1C0170u) { return; }
    }
    ctx->pc = 0x1C0170u;
    // 0x1c0170: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0170u;
    {
        const bool branch_taken_0x1c0170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0170u;
            // 0x1c0174: 0x8e230374  lw          $v1, 0x374($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0170) {
            ctx->pc = 0x1C0184u;
            goto label_1c0184;
        }
    }
    ctx->pc = 0x1C0178u;
label_1c0178:
    // 0x1c0178: 0xc05c472  jal         func_1711C8
    ctx->pc = 0x1C0178u;
    SET_GPR_U32(ctx, 31, 0x1C0180u);
    ctx->pc = 0x1C017Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0178u;
            // 0x1c017c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711C8u;
    if (runtime->hasFunction(0x1711C8u)) {
        auto targetFn = runtime->lookupFunction(0x1711C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0180u; }
        if (ctx->pc != 0x1C0180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1711c8_0x1711d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0180u; }
        if (ctx->pc != 0x1C0180u) { return; }
    }
    ctx->pc = 0x1C0180u;
    // 0x1c0180: 0x8e230374  lw          $v1, 0x374($s1)
    ctx->pc = 0x1c0180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
label_1c0184:
    // 0x1c0184: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c0184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0188: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c0188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c018c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1c018cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c0190: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c0190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0194: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1c0194u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1c0198: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x1c0198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c019c: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x1c019cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c01a0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1c01a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1c01a4: 0x65300a  movz        $a2, $v1, $a1
    ctx->pc = 0x1c01a4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1c01a8: 0x8e2203e4  lw          $v0, 0x3E4($s1)
    ctx->pc = 0x1c01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 996)));
    // 0x1c01ac: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x1c01acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1c01b0: 0x24842740  addiu       $a0, $a0, 0x2740
    ctx->pc = 0x1c01b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10048));
    // 0x1c01b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c01b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c01b8: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1C01B8u;
    {
        const bool branch_taken_0x1c01b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C01BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01B8u;
            // 0x1c01bc: 0xc48021  addu        $s0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01b8) {
            ctx->pc = 0x1C0278u;
            goto label_1c0278;
        }
    }
    ctx->pc = 0x1C01C0u;
    // 0x1c01c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c01c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c01c4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1c01c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1c01c8: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1c01c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1c01cc: 0x40f809  jalr        $v0
    ctx->pc = 0x1C01CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C01D4u);
        ctx->pc = 0x1C01D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01CCu;
            // 0x1c01d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C01D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFE80u: goto label_1bfe80;
            case 0x1BFEF8u: goto label_1bfef8;
            case 0x1BFF80u: goto label_1bff80;
            case 0x1BFF90u: goto label_1bff90;
            case 0x1BFF98u: goto label_1bff98;
            case 0x1BFFD8u: goto label_1bffd8;
            case 0x1BFFDCu: goto label_1bffdc;
            case 0x1C0118u: goto label_1c0118;
            case 0x1C0148u: goto label_1c0148;
            case 0x1C0178u: goto label_1c0178;
            case 0x1C0184u: goto label_1c0184;
            case 0x1C0238u: goto label_1c0238;
            case 0x1C023Cu: goto label_1c023c;
            case 0x1C0260u: goto label_1c0260;
            case 0x1C0270u: goto label_1c0270;
            case 0x1C0278u: goto label_1c0278;
            case 0x1C027Cu: goto label_1c027c;
            case 0x1C02E8u: goto label_1c02e8;
            case 0x1C0324u: goto label_1c0324;
            case 0x1C0344u: goto label_1c0344;
            case 0x1C0368u: goto label_1c0368;
            case 0x1C03B4u: goto label_1c03b4;
            case 0x1C03C0u: goto label_1c03c0;
            case 0x1C03F0u: goto label_1c03f0;
            case 0x1C0408u: goto label_1c0408;
            case 0x1C0430u: goto label_1c0430;
            case 0x1C0434u: goto label_1c0434;
            case 0x1C0494u: goto label_1c0494;
            case 0x1C04D0u: goto label_1c04d0;
            case 0x1C04F4u: goto label_1c04f4;
            case 0x1C0508u: goto label_1c0508;
            case 0x1C0558u: goto label_1c0558;
            case 0x1C0584u: goto label_1c0584;
            case 0x1C0598u: goto label_1c0598;
            case 0x1C05DCu: goto label_1c05dc;
            case 0x1C0608u: goto label_1c0608;
            case 0x1C061Cu: goto label_1c061c;
            case 0x1C0654u: goto label_1c0654;
            case 0x1C0680u: goto label_1c0680;
            case 0x1C0690u: goto label_1c0690;
            case 0x1C06D4u: goto label_1c06d4;
            case 0x1C0748u: goto label_1c0748;
            case 0x1C07B4u: goto label_1c07b4;
            case 0x1C07E4u: goto label_1c07e4;
            case 0x1C0834u: goto label_1c0834;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C01D4u; }
            if (ctx->pc != 0x1C01D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1C01D4u;
    // 0x1c01d4: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1c01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c01d8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C01D8u;
    {
        const bool branch_taken_0x1c01d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01D8u;
            // 0x1c01dc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01d8) {
            ctx->pc = 0x1C0270u;
            goto label_1c0270;
        }
    }
    ctx->pc = 0x1C01E0u;
    // 0x1c01e0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c01e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c01e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c01e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c01e8: 0xc440ccf0  lwc1        $f0, -0x3310($v0)
    ctx->pc = 0x1c01e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c01ec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c01ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c01f0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c01f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c01f4: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x1C01F4u;
    {
        const bool branch_taken_0x1c01f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c01f4) {
            ctx->pc = 0x1C0260u;
            goto label_1c0260;
        }
    }
    ctx->pc = 0x1C01FCu;
    // 0x1c01fc: 0xc06ff50  jal         func_1BFD40
    ctx->pc = 0x1C01FCu;
    SET_GPR_U32(ctx, 31, 0x1C0204u);
    ctx->pc = 0x1C0200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01FCu;
            // 0x1c0200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFD40u;
    if (runtime->hasFunction(0x1BFD40u)) {
        auto targetFn = runtime->lookupFunction(0x1BFD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0204u; }
        if (ctx->pc != 0x1C0204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFD40_0x1bfd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0204u; }
        if (ctx->pc != 0x1C0204u) { return; }
    }
    ctx->pc = 0x1C0204u;
    // 0x1c0204: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C0204u;
    {
        const bool branch_taken_0x1c0204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0204u;
            // 0x1c0208: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0204) {
            ctx->pc = 0x1C0238u;
            goto label_1c0238;
        }
    }
    ctx->pc = 0x1C020Cu;
    // 0x1c020c: 0xc440ccf4  lwc1        $f0, -0x330C($v0)
    ctx->pc = 0x1c020cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0210: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c0210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c0214: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c0214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0218: 0x0  nop
    ctx->pc = 0x1c0218u;
    // NOP
    // 0x1c021c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1C021Cu;
    {
        const bool branch_taken_0x1c021c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c021c) {
            ctx->pc = 0x1C0220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C021Cu;
            // 0x1c0220: 0x8e2203e4  lw          $v0, 0x3E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 996)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C023Cu;
            goto label_1c023c;
        }
    }
    ctx->pc = 0x1C0224u;
    // 0x1c0224: 0x3c0142c0  lui         $at, 0x42C0
    ctx->pc = 0x1c0224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17088 << 16));
    // 0x1c0228: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c022c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1c022cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0230: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1C0230u;
    {
        const bool branch_taken_0x1c0230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0230) {
            ctx->pc = 0x1C0260u;
            goto label_1c0260;
        }
    }
    ctx->pc = 0x1C0238u;
label_1c0238:
    // 0x1c0238: 0x8e2203e4  lw          $v0, 0x3E4($s1)
    ctx->pc = 0x1c0238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 996)));
label_1c023c:
    // 0x1c023c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c023cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c0240: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1C0240u;
    {
        const bool branch_taken_0x1c0240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0240) {
            ctx->pc = 0x1C0244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0240u;
            // 0x1c0244: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C027Cu;
            goto label_1c027c;
        }
    }
    ctx->pc = 0x1C0248u;
    // 0x1c0248: 0x3c0142c0  lui         $at, 0x42C0
    ctx->pc = 0x1c0248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17088 << 16));
    // 0x1c024c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c024cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0250: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1c0250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0254: 0x0  nop
    ctx->pc = 0x1c0254u;
    // NOP
    // 0x1c0258: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0258u;
    {
        const bool branch_taken_0x1c0258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0258) {
            ctx->pc = 0x1C025Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0258u;
            // 0x1c025c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C027Cu;
            goto label_1c027c;
        }
    }
    ctx->pc = 0x1C0260u;
label_1c0260:
    // 0x1c0260: 0xc0783be  jal         func_1E0EF8
    ctx->pc = 0x1C0260u;
    SET_GPR_U32(ctx, 31, 0x1C0268u);
    ctx->pc = 0x1C0264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0260u;
            // 0x1c0264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EF8u;
    if (runtime->hasFunction(0x1E0EF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0268u; }
        if (ctx->pc != 0x1C0268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EF8_0x1e0ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0268u; }
        if (ctx->pc != 0x1C0268u) { return; }
    }
    ctx->pc = 0x1C0268u;
    // 0x1c0268: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0268u;
    {
        const bool branch_taken_0x1c0268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C026Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0268u;
            // 0x1c026c: 0xae2003e8  sw          $zero, 0x3E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0268) {
            ctx->pc = 0x1C0278u;
            goto label_1c0278;
        }
    }
    ctx->pc = 0x1C0270u;
label_1c0270:
    // 0x1c0270: 0xc0783d6  jal         func_1E0F58
    ctx->pc = 0x1C0270u;
    SET_GPR_U32(ctx, 31, 0x1C0278u);
    ctx->pc = 0x1C0274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0270u;
            // 0x1c0274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0F58u;
    if (runtime->hasFunction(0x1E0F58u)) {
        auto targetFn = runtime->lookupFunction(0x1E0F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0278u; }
        if (ctx->pc != 0x1C0278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0F58_0x1e0f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0278u; }
        if (ctx->pc != 0x1C0278u) { return; }
    }
    ctx->pc = 0x1C0278u;
label_1c0278:
    // 0x1c0278: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c0278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c027c:
    // 0x1c027c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1c027cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1c0280: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1c0280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1c0284: 0x40f809  jalr        $v0
    ctx->pc = 0x1C0284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C028Cu);
        ctx->pc = 0x1C0288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0284u;
            // 0x1c0288: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C028Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFE80u: goto label_1bfe80;
            case 0x1BFEF8u: goto label_1bfef8;
            case 0x1BFF80u: goto label_1bff80;
            case 0x1BFF90u: goto label_1bff90;
            case 0x1BFF98u: goto label_1bff98;
            case 0x1BFFD8u: goto label_1bffd8;
            case 0x1BFFDCu: goto label_1bffdc;
            case 0x1C0118u: goto label_1c0118;
            case 0x1C0148u: goto label_1c0148;
            case 0x1C0178u: goto label_1c0178;
            case 0x1C0184u: goto label_1c0184;
            case 0x1C0238u: goto label_1c0238;
            case 0x1C023Cu: goto label_1c023c;
            case 0x1C0260u: goto label_1c0260;
            case 0x1C0270u: goto label_1c0270;
            case 0x1C0278u: goto label_1c0278;
            case 0x1C027Cu: goto label_1c027c;
            case 0x1C02E8u: goto label_1c02e8;
            case 0x1C0324u: goto label_1c0324;
            case 0x1C0344u: goto label_1c0344;
            case 0x1C0368u: goto label_1c0368;
            case 0x1C03B4u: goto label_1c03b4;
            case 0x1C03C0u: goto label_1c03c0;
            case 0x1C03F0u: goto label_1c03f0;
            case 0x1C0408u: goto label_1c0408;
            case 0x1C0430u: goto label_1c0430;
            case 0x1C0434u: goto label_1c0434;
            case 0x1C0494u: goto label_1c0494;
            case 0x1C04D0u: goto label_1c04d0;
            case 0x1C04F4u: goto label_1c04f4;
            case 0x1C0508u: goto label_1c0508;
            case 0x1C0558u: goto label_1c0558;
            case 0x1C0584u: goto label_1c0584;
            case 0x1C0598u: goto label_1c0598;
            case 0x1C05DCu: goto label_1c05dc;
            case 0x1C0608u: goto label_1c0608;
            case 0x1C061Cu: goto label_1c061c;
            case 0x1C0654u: goto label_1c0654;
            case 0x1C0680u: goto label_1c0680;
            case 0x1C0690u: goto label_1c0690;
            case 0x1C06D4u: goto label_1c06d4;
            case 0x1C0748u: goto label_1c0748;
            case 0x1C07B4u: goto label_1c07b4;
            case 0x1C07E4u: goto label_1c07e4;
            case 0x1C0834u: goto label_1c0834;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C028Cu; }
            if (ctx->pc != 0x1C028Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C028Cu;
    // 0x1c028c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1c028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c0290: 0x144000ff  bnez        $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x1C0290u;
    {
        const bool branch_taken_0x1c0290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0290u;
            // 0x1c0294: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0290) {
            ctx->pc = 0x1C0690u;
            goto label_1c0690;
        }
    }
    ctx->pc = 0x1C0298u;
    // 0x1c0298: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c0298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c029c: 0xc62003e8  lwc1        $f0, 0x3E8($s1)
    ctx->pc = 0x1c029cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c02a0: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1c02a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c02a4: 0x8e43cd58  lw          $v1, -0x32A8($s2)
    ctx->pc = 0x1c02a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954328)));
    // 0x1c02a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c02a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c02ac: 0x8e2203e4  lw          $v0, 0x3E4($s1)
    ctx->pc = 0x1c02acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 996)));
    // 0x1c02b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c02b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c02b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c02b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c02b8: 0xe62003e8  swc1        $f0, 0x3E8($s1)
    ctx->pc = 0x1c02b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1000), bits); }
    // 0x1c02bc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C02BCu;
    {
        const bool branch_taken_0x1c02bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02BCu;
            // 0x1c02c0: 0xc4600178  lwc1        $f0, 0x178($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02bc) {
            ctx->pc = 0x1C0344u;
            goto label_1c0344;
        }
    }
    ctx->pc = 0x1C02C4u;
    // 0x1c02c4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c02c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c02c8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1c02c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c02cc: 0x0  nop
    ctx->pc = 0x1c02ccu;
    // NOP
    // 0x1c02d0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C02D0u;
    {
        const bool branch_taken_0x1c02d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C02D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02D0u;
            // 0x1c02d4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02d0) {
            ctx->pc = 0x1C02E8u;
            goto label_1c02e8;
        }
    }
    ctx->pc = 0x1C02D8u;
    // 0x1c02d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c02d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02dc: 0x8445ccec  lh          $a1, -0x3314($v0)
    ctx->pc = 0x1c02dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954220)));
    // 0x1c02e0: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C02E0u;
    SET_GPR_U32(ctx, 31, 0x1C02E8u);
    ctx->pc = 0x1C02E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02E0u;
            // 0x1c02e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C02E8u; }
        if (ctx->pc != 0x1C02E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C02E8u; }
        if (ctx->pc != 0x1C02E8u) { return; }
    }
    ctx->pc = 0x1C02E8u;
label_1c02e8:
    // 0x1c02e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c02ec: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c02ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c02f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c02f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c02f4: 0xc440ccf0  lwc1        $f0, -0x3310($v0)
    ctx->pc = 0x1c02f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c02f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c02f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c02fc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c02fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0300: 0x0  nop
    ctx->pc = 0x1c0300u;
    // NOP
    // 0x1c0304: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0304u;
    {
        const bool branch_taken_0x1c0304 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0304u;
            // 0x1c0308: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0304) {
            ctx->pc = 0x1C0324u;
            goto label_1c0324;
        }
    }
    ctx->pc = 0x1C030Cu;
    // 0x1c030c: 0x3c0142c0  lui         $at, 0x42C0
    ctx->pc = 0x1c030cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17088 << 16));
    // 0x1c0310: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0314: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1c0314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0318: 0x0  nop
    ctx->pc = 0x1c0318u;
    // NOP
    // 0x1c031c: 0x45020045  bc1fl       . + 4 + (0x45 << 2)
    ctx->pc = 0x1C031Cu;
    {
        const bool branch_taken_0x1c031c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c031c) {
            ctx->pc = 0x1C0320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C031Cu;
            // 0x1c0320: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0434u;
            goto label_1c0434;
        }
    }
    ctx->pc = 0x1C0324u;
label_1c0324:
    // 0x1c0324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c0324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0328: 0x8445cce8  lh          $a1, -0x3318($v0)
    ctx->pc = 0x1c0328u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954216)));
    // 0x1c032c: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C032Cu;
    SET_GPR_U32(ctx, 31, 0x1C0334u);
    ctx->pc = 0x1C0330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C032Cu;
            // 0x1c0330: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0334u; }
        if (ctx->pc != 0x1C0334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0334u; }
        if (ctx->pc != 0x1C0334u) { return; }
    }
    ctx->pc = 0x1C0334u;
    // 0x1c0334: 0xc06ff7c  jal         func_1BFDF0
    ctx->pc = 0x1C0334u;
    SET_GPR_U32(ctx, 31, 0x1C033Cu);
    ctx->pc = 0x1C0338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0334u;
            // 0x1c0338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFDF0u;
    if (runtime->hasFunction(0x1BFDF0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C033Cu; }
        if (ctx->pc != 0x1C033Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFDF0_0x1bfdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C033Cu; }
        if (ctx->pc != 0x1C033Cu) { return; }
    }
    ctx->pc = 0x1C033Cu;
    // 0x1c033c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1C033Cu;
    {
        const bool branch_taken_0x1c033c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C033Cu;
            // 0x1c0340: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c033c) {
            ctx->pc = 0x1C0434u;
            goto label_1c0434;
        }
    }
    ctx->pc = 0x1C0344u;
label_1c0344:
    // 0x1c0344: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c0344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c0348: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1c0348u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c034c: 0x0  nop
    ctx->pc = 0x1c034cu;
    // NOP
    // 0x1c0350: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0350u;
    {
        const bool branch_taken_0x1c0350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0350u;
            // 0x1c0354: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0350) {
            ctx->pc = 0x1C0368u;
            goto label_1c0368;
        }
    }
    ctx->pc = 0x1C0358u;
    // 0x1c0358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c0358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c035c: 0x8445ccea  lh          $a1, -0x3316($v0)
    ctx->pc = 0x1c035cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954218)));
    // 0x1c0360: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C0360u;
    SET_GPR_U32(ctx, 31, 0x1C0368u);
    ctx->pc = 0x1C0364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0360u;
            // 0x1c0364: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0368u; }
        if (ctx->pc != 0x1C0368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0368u; }
        if (ctx->pc != 0x1C0368u) { return; }
    }
    ctx->pc = 0x1C0368u;
label_1c0368:
    // 0x1c0368: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c0368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c036c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c036cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c0370: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0374: 0xc440cd04  lwc1        $f0, -0x32FC($v0)
    ctx->pc = 0x1c0374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0378: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c0378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c037c: 0x461a0034  c.lt.s      $f0, $f26
    ctx->pc = 0x1c037cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0380: 0x0  nop
    ctx->pc = 0x1c0380u;
    // NOP
    // 0x1c0384: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1C0384u;
    {
        const bool branch_taken_0x1c0384 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0384u;
            // 0x1c0388: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0384) {
            ctx->pc = 0x1C03C0u;
            goto label_1c03c0;
        }
    }
    ctx->pc = 0x1C038Cu;
    // 0x1c038c: 0x3c0142c0  lui         $at, 0x42C0
    ctx->pc = 0x1c038cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17088 << 16));
    // 0x1c0390: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0394: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1c0394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0398: 0x0  nop
    ctx->pc = 0x1c0398u;
    // NOP
    // 0x1c039c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C039Cu;
    {
        const bool branch_taken_0x1c039c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C03A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C039Cu;
            // 0x1c03a0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c039c) {
            ctx->pc = 0x1C03B4u;
            goto label_1c03b4;
        }
    }
    ctx->pc = 0x1C03A4u;
    // 0x1c03a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c03a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c03a8: 0x8445ccee  lh          $a1, -0x3312($v0)
    ctx->pc = 0x1c03a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954222)));
    // 0x1c03ac: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C03ACu;
    SET_GPR_U32(ctx, 31, 0x1C03B4u);
    ctx->pc = 0x1C03B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C03ACu;
            // 0x1c03b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C03B4u; }
        if (ctx->pc != 0x1C03B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C03B4u; }
        if (ctx->pc != 0x1C03B4u) { return; }
    }
    ctx->pc = 0x1C03B4u;
label_1c03b4:
    // 0x1c03b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c03b8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c03b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c03bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c03bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c03c0:
    // 0x1c03c0: 0xc440ccfc  lwc1        $f0, -0x3304($v0)
    ctx->pc = 0x1c03c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c03c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c03c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c03c8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1c03c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c03cc: 0x0  nop
    ctx->pc = 0x1c03ccu;
    // NOP
    // 0x1c03d0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C03D0u;
    {
        const bool branch_taken_0x1c03d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C03D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C03D0u;
            // 0x1c03d4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03d0) {
            ctx->pc = 0x1C03F0u;
            goto label_1c03f0;
        }
    }
    ctx->pc = 0x1C03D8u;
    // 0x1c03d8: 0x3c0142c0  lui         $at, 0x42C0
    ctx->pc = 0x1c03d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17088 << 16));
    // 0x1c03dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c03dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c03e0: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1c03e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c03e4: 0x0  nop
    ctx->pc = 0x1c03e4u;
    // NOP
    // 0x1c03e8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1C03E8u;
    {
        const bool branch_taken_0x1c03e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c03e8) {
            ctx->pc = 0x1C03ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C03E8u;
            // 0x1c03ec: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0408u;
            goto label_1c0408;
        }
    }
    ctx->pc = 0x1C03F0u;
label_1c03f0:
    // 0x1c03f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c03f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c03f4: 0x8445ccc8  lh          $a1, -0x3338($v0)
    ctx->pc = 0x1c03f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954184)));
    // 0x1c03f8: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C03F8u;
    SET_GPR_U32(ctx, 31, 0x1C0400u);
    ctx->pc = 0x1C03FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C03F8u;
            // 0x1c03fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0400u; }
        if (ctx->pc != 0x1C0400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0400u; }
        if (ctx->pc != 0x1C0400u) { return; }
    }
    ctx->pc = 0x1C0400u;
    // 0x1c0400: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C0400u;
    {
        const bool branch_taken_0x1c0400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0400u;
            // 0x1c0404: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0400) {
            ctx->pc = 0x1C0434u;
            goto label_1c0434;
        }
    }
    ctx->pc = 0x1C0408u;
label_1c0408:
    // 0x1c0408: 0xc440ccf0  lwc1        $f0, -0x3310($v0)
    ctx->pc = 0x1c0408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c040c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c040cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c0410: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c0410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0414: 0x0  nop
    ctx->pc = 0x1c0414u;
    // NOP
    // 0x1c0418: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0418u;
    {
        const bool branch_taken_0x1c0418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C041Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0418u;
            // 0x1c041c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0418) {
            ctx->pc = 0x1C0430u;
            goto label_1c0430;
        }
    }
    ctx->pc = 0x1C0420u;
    // 0x1c0420: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c0420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c0424: 0x8445ccca  lh          $a1, -0x3336($v0)
    ctx->pc = 0x1c0424u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954186)));
    // 0x1c0428: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C0428u;
    SET_GPR_U32(ctx, 31, 0x1C0430u);
    ctx->pc = 0x1C042Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0428u;
            // 0x1c042c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0430u; }
        if (ctx->pc != 0x1C0430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0430u; }
        if (ctx->pc != 0x1C0430u) { return; }
    }
    ctx->pc = 0x1C0430u;
label_1c0430:
    // 0x1c0430: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c0430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c0434:
    // 0x1c0434: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1c0434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1c0438: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1c0438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1c043c: 0x40f809  jalr        $v0
    ctx->pc = 0x1C043Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0444u);
        ctx->pc = 0x1C0440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C043Cu;
            // 0x1c0440: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0444u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFE80u: goto label_1bfe80;
            case 0x1BFEF8u: goto label_1bfef8;
            case 0x1BFF80u: goto label_1bff80;
            case 0x1BFF90u: goto label_1bff90;
            case 0x1BFF98u: goto label_1bff98;
            case 0x1BFFD8u: goto label_1bffd8;
            case 0x1BFFDCu: goto label_1bffdc;
            case 0x1C0118u: goto label_1c0118;
            case 0x1C0148u: goto label_1c0148;
            case 0x1C0178u: goto label_1c0178;
            case 0x1C0184u: goto label_1c0184;
            case 0x1C0238u: goto label_1c0238;
            case 0x1C023Cu: goto label_1c023c;
            case 0x1C0260u: goto label_1c0260;
            case 0x1C0270u: goto label_1c0270;
            case 0x1C0278u: goto label_1c0278;
            case 0x1C027Cu: goto label_1c027c;
            case 0x1C02E8u: goto label_1c02e8;
            case 0x1C0324u: goto label_1c0324;
            case 0x1C0344u: goto label_1c0344;
            case 0x1C0368u: goto label_1c0368;
            case 0x1C03B4u: goto label_1c03b4;
            case 0x1C03C0u: goto label_1c03c0;
            case 0x1C03F0u: goto label_1c03f0;
            case 0x1C0408u: goto label_1c0408;
            case 0x1C0430u: goto label_1c0430;
            case 0x1C0434u: goto label_1c0434;
            case 0x1C0494u: goto label_1c0494;
            case 0x1C04D0u: goto label_1c04d0;
            case 0x1C04F4u: goto label_1c04f4;
            case 0x1C0508u: goto label_1c0508;
            case 0x1C0558u: goto label_1c0558;
            case 0x1C0584u: goto label_1c0584;
            case 0x1C0598u: goto label_1c0598;
            case 0x1C05DCu: goto label_1c05dc;
            case 0x1C0608u: goto label_1c0608;
            case 0x1C061Cu: goto label_1c061c;
            case 0x1C0654u: goto label_1c0654;
            case 0x1C0680u: goto label_1c0680;
            case 0x1C0690u: goto label_1c0690;
            case 0x1C06D4u: goto label_1c06d4;
            case 0x1C0748u: goto label_1c0748;
            case 0x1C07B4u: goto label_1c07b4;
            case 0x1C07E4u: goto label_1c07e4;
            case 0x1C0834u: goto label_1c0834;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0444u; }
            if (ctx->pc != 0x1C0444u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0444u;
    // 0x1c0444: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1c0444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c0448: 0x14400091  bnez        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x1C0448u;
    {
        const bool branch_taken_0x1c0448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C044Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0448u;
            // 0x1c044c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0448) {
            ctx->pc = 0x1C0690u;
            goto label_1c0690;
        }
    }
    ctx->pc = 0x1C0450u;
    // 0x1c0450: 0x8e2203e4  lw          $v0, 0x3E4($s1)
    ctx->pc = 0x1c0450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 996)));
    // 0x1c0454: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c0454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c0458: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C0458u;
    {
        const bool branch_taken_0x1c0458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C045Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0458u;
            // 0x1c045c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0458) {
            ctx->pc = 0x1C0508u;
            goto label_1c0508;
        }
    }
    ctx->pc = 0x1C0460u;
    // 0x1c0460: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c0460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c0464: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0468: 0xc440cd0c  lwc1        $f0, -0x32F4($v0)
    ctx->pc = 0x1c0468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c046c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c046cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c0470: 0x461b0034  c.lt.s      $f0, $f27
    ctx->pc = 0x1c0470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0474: 0x0  nop
    ctx->pc = 0x1c0474u;
    // NOP
    // 0x1c0478: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0478u;
    {
        const bool branch_taken_0x1c0478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C047Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0478u;
            // 0x1c047c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0478) {
            ctx->pc = 0x1C0494u;
            goto label_1c0494;
        }
    }
    ctx->pc = 0x1C0480u;
    // 0x1c0480: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x1c0480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0484: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C0484u;
    SET_GPR_U32(ctx, 31, 0x1C048Cu);
    ctx->pc = 0x1C0488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0484u;
            // 0x1c0488: 0x8605001e  lh          $a1, 0x1E($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C048Cu; }
        if (ctx->pc != 0x1C048Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C048Cu; }
        if (ctx->pc != 0x1C048Cu) { return; }
    }
    ctx->pc = 0x1C048Cu;
    // 0x1c048c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1C048Cu;
    {
        const bool branch_taken_0x1c048c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C048Cu;
            // 0x1c0490: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c048c) {
            ctx->pc = 0x1C0690u;
            goto label_1c0690;
        }
    }
    ctx->pc = 0x1C0494u;
label_1c0494:
    // 0x1c0494: 0x3c014484  lui         $at, 0x4484
    ctx->pc = 0x1c0494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17540 << 16));
    // 0x1c0498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c049c: 0x4600c045  abs.s       $f1, $f24
    ctx->pc = 0x1c049cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[24]);
    // 0x1c04a0: 0x4600d801  sub.s       $f0, $f27, $f0
    ctx->pc = 0x1c04a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[27], ctx->f[0]);
    // 0x1c04a4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c04a4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c04a8: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x1c04a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x1c04ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c04acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c04b0: 0x0  nop
    ctx->pc = 0x1c04b0u;
    // NOP
    // 0x1c04b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C04B4u;
    {
        const bool branch_taken_0x1c04b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C04B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04B4u;
            // 0x1c04b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04b4) {
            ctx->pc = 0x1C04D0u;
            goto label_1c04d0;
        }
    }
    ctx->pc = 0x1C04BCu;
    // 0x1c04bc: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x1c04bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c04c0: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C04C0u;
    SET_GPR_U32(ctx, 31, 0x1C04C8u);
    ctx->pc = 0x1C04C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04C0u;
            // 0x1c04c4: 0x8605001a  lh          $a1, 0x1A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C04C8u; }
        if (ctx->pc != 0x1C04C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C04C8u; }
        if (ctx->pc != 0x1C04C8u) { return; }
    }
    ctx->pc = 0x1C04C8u;
    // 0x1c04c8: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1C04C8u;
    {
        const bool branch_taken_0x1c04c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C04CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04C8u;
            // 0x1c04cc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04c8) {
            ctx->pc = 0x1C0690u;
            goto label_1c0690;
        }
    }
    ctx->pc = 0x1C04D0u;
label_1c04d0:
    // 0x1c04d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c04d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c04d4: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x1c04d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c04d8: 0x0  nop
    ctx->pc = 0x1c04d8u;
    // NOP
    // 0x1c04dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C04DCu;
    {
        const bool branch_taken_0x1c04dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C04E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04DCu;
            // 0x1c04e0: 0xc60c0020  lwc1        $f12, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04dc) {
            ctx->pc = 0x1C04F4u;
            goto label_1c04f4;
        }
    }
    ctx->pc = 0x1C04E4u;
    // 0x1c04e4: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C04E4u;
    SET_GPR_U32(ctx, 31, 0x1C04ECu);
    ctx->pc = 0x1C04E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04E4u;
            // 0x1c04e8: 0x86050018  lh          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C04ECu; }
        if (ctx->pc != 0x1C04ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C04ECu; }
        if (ctx->pc != 0x1C04ECu) { return; }
    }
    ctx->pc = 0x1C04ECu;
    // 0x1c04ec: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1C04ECu;
    {
        const bool branch_taken_0x1c04ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C04F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04ECu;
            // 0x1c04f0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04ec) {
            ctx->pc = 0x1C0690u;
            goto label_1c0690;
        }
    }
    ctx->pc = 0x1C04F4u;
label_1c04f4:
    // 0x1c04f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c04f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c04f8: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C04F8u;
    SET_GPR_U32(ctx, 31, 0x1C0500u);
    ctx->pc = 0x1C04FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04F8u;
            // 0x1c04fc: 0x8605001c  lh          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0500u; }
        if (ctx->pc != 0x1C0500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0500u; }
        if (ctx->pc != 0x1C0500u) { return; }
    }
    ctx->pc = 0x1C0500u;
    // 0x1c0500: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1C0500u;
    {
        const bool branch_taken_0x1c0500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0500u;
            // 0x1c0504: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0500) {
            ctx->pc = 0x1C0690u;
            goto label_1c0690;
        }
    }
    ctx->pc = 0x1C0508u;
label_1c0508:
    // 0x1c0508: 0x4600a805  abs.s       $f0, $f21
    ctx->pc = 0x1c0508u;
    ctx->f[0] = FPU_ABS_S(ctx->f[21]);
    // 0x1c050c: 0x4600c045  abs.s       $f1, $f24
    ctx->pc = 0x1c050cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[24]);
    // 0x1c0510: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x1c0510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x1c0514: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c0514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0518: 0x0  nop
    ctx->pc = 0x1c0518u;
    // NOP
    // 0x1c051c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1C051Cu;
    {
        const bool branch_taken_0x1c051c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C051Cu;
            // 0x1c0520: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c051c) {
            ctx->pc = 0x1C0598u;
            goto label_1c0598;
        }
    }
    ctx->pc = 0x1C0524u;
    // 0x1c0524: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c0524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c0528: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c052c: 0xc440ccf4  lwc1        $f0, -0x330C($v0)
    ctx->pc = 0x1c052cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0530: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c0530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c0534: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c0534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0538: 0x0  nop
    ctx->pc = 0x1c0538u;
    // NOP
    // 0x1c053c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C053Cu;
    {
        const bool branch_taken_0x1c053c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C053Cu;
            // 0x1c0540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c053c) {
            ctx->pc = 0x1C0558u;
            goto label_1c0558;
        }
    }
    ctx->pc = 0x1C0544u;
    // 0x1c0544: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x1c0544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0548: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C0548u;
    SET_GPR_U32(ctx, 31, 0x1C0550u);
    ctx->pc = 0x1C054Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0548u;
            // 0x1c054c: 0x86050002  lh          $a1, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0550u; }
        if (ctx->pc != 0x1C0550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0550u; }
        if (ctx->pc != 0x1C0550u) { return; }
    }
    ctx->pc = 0x1C0550u;
    // 0x1c0550: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1C0550u;
    {
        const bool branch_taken_0x1c0550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0550u;
            // 0x1c0554: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0550) {
            ctx->pc = 0x1C0690u;
            goto label_1c0690;
        }
    }
    ctx->pc = 0x1C0558u;
label_1c0558:
    // 0x1c0558: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c0558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c055c: 0xc440ccf8  lwc1        $f0, -0x3308($v0)
    ctx->pc = 0x1c055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0560: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c0560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c0564: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c0564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0568: 0x0  nop
    ctx->pc = 0x1c0568u;
    // NOP
    // 0x1c056c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C056Cu;
    {
        const bool branch_taken_0x1c056c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C056Cu;
            // 0x1c0570: 0xc60c0014  lwc1        $f12, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c056c) {
            ctx->pc = 0x1C0584u;
            goto label_1c0584;
        }
    }
    ctx->pc = 0x1C0574u;
    // 0x1c0574: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C0574u;
    SET_GPR_U32(ctx, 31, 0x1C057Cu);
    ctx->pc = 0x1C0578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0574u;
            // 0x1c0578: 0x86050008  lh          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C057Cu; }
        if (ctx->pc != 0x1C057Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C057Cu; }
        if (ctx->pc != 0x1C057Cu) { return; }
    }
    ctx->pc = 0x1C057Cu;
    // 0x1c057c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1C057Cu;
    {
        const bool branch_taken_0x1c057c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C057Cu;
            // 0x1c0580: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c057c) {
            ctx->pc = 0x1C0690u;
            goto label_1c0690;
        }
    }
    ctx->pc = 0x1C0584u;
label_1c0584:
    // 0x1c0584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c0584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0588: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C0588u;
    SET_GPR_U32(ctx, 31, 0x1C0590u);
    ctx->pc = 0x1C058Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0588u;
            // 0x1c058c: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0590u; }
        if (ctx->pc != 0x1C0590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0590u; }
        if (ctx->pc != 0x1C0590u) { return; }
    }
    ctx->pc = 0x1C0590u;
    // 0x1c0590: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1C0590u;
    {
        const bool branch_taken_0x1c0590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0590u;
            // 0x1c0594: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0590) {
            ctx->pc = 0x1C0690u;
            goto label_1c0690;
        }
    }
    ctx->pc = 0x1C0598u;
label_1c0598:
    // 0x1c0598: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c0598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c059c: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x1c059cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c05a0: 0x0  nop
    ctx->pc = 0x1c05a0u;
    // NOP
    // 0x1c05a4: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1C05A4u;
    {
        const bool branch_taken_0x1c05a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C05A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C05A4u;
            // 0x1c05a8: 0xc440ccf4  lwc1        $f0, -0x330C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05a4) {
            ctx->pc = 0x1C061Cu;
            goto label_1c061c;
        }
    }
    ctx->pc = 0x1C05ACu;
    // 0x1c05ac: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c05acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c05b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c05b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c05b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c05b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c05b8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c05b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c05bc: 0x0  nop
    ctx->pc = 0x1c05bcu;
    // NOP
    // 0x1c05c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C05C0u;
    {
        const bool branch_taken_0x1c05c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C05C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C05C0u;
            // 0x1c05c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05c0) {
            ctx->pc = 0x1C05DCu;
            goto label_1c05dc;
        }
    }
    ctx->pc = 0x1C05C8u;
    // 0x1c05c8: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x1c05c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c05cc: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C05CCu;
    SET_GPR_U32(ctx, 31, 0x1C05D4u);
    ctx->pc = 0x1C05D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C05CCu;
            // 0x1c05d0: 0x86050000  lh          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C05D4u; }
        if (ctx->pc != 0x1C05D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C05D4u; }
        if (ctx->pc != 0x1C05D4u) { return; }
    }
    ctx->pc = 0x1C05D4u;
    // 0x1c05d4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1C05D4u;
    {
        const bool branch_taken_0x1c05d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C05D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C05D4u;
            // 0x1c05d8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05d4) {
            ctx->pc = 0x1C0690u;
            goto label_1c0690;
        }
    }
    ctx->pc = 0x1C05DCu;
label_1c05dc:
    // 0x1c05dc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c05e0: 0xc440ccf8  lwc1        $f0, -0x3308($v0)
    ctx->pc = 0x1c05e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c05e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c05e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c05e8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c05e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c05ec: 0x0  nop
    ctx->pc = 0x1c05ecu;
    // NOP
    // 0x1c05f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C05F0u;
    {
        const bool branch_taken_0x1c05f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C05F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C05F0u;
            // 0x1c05f4: 0xc60c0014  lwc1        $f12, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05f0) {
            ctx->pc = 0x1C0608u;
            goto label_1c0608;
        }
    }
    ctx->pc = 0x1C05F8u;
    // 0x1c05f8: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C05F8u;
    SET_GPR_U32(ctx, 31, 0x1C0600u);
    ctx->pc = 0x1C05FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C05F8u;
            // 0x1c05fc: 0x86050006  lh          $a1, 0x6($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0600u; }
        if (ctx->pc != 0x1C0600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0600u; }
        if (ctx->pc != 0x1C0600u) { return; }
    }
    ctx->pc = 0x1C0600u;
    // 0x1c0600: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1C0600u;
    {
        const bool branch_taken_0x1c0600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0600u;
            // 0x1c0604: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0600) {
            ctx->pc = 0x1C0690u;
            goto label_1c0690;
        }
    }
    ctx->pc = 0x1C0608u;
label_1c0608:
    // 0x1c0608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c0608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c060c: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C060Cu;
    SET_GPR_U32(ctx, 31, 0x1C0614u);
    ctx->pc = 0x1C0610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C060Cu;
            // 0x1c0610: 0x8605000c  lh          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0614u; }
        if (ctx->pc != 0x1C0614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0614u; }
        if (ctx->pc != 0x1C0614u) { return; }
    }
    ctx->pc = 0x1C0614u;
    // 0x1c0614: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1C0614u;
    {
        const bool branch_taken_0x1c0614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0614u;
            // 0x1c0618: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0614) {
            ctx->pc = 0x1C0690u;
            goto label_1c0690;
        }
    }
    ctx->pc = 0x1C061Cu;
label_1c061c:
    // 0x1c061c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c061cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c0620: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c0620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c0624: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0628: 0xc440ccf4  lwc1        $f0, -0x330C($v0)
    ctx->pc = 0x1c0628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c062c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c062cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c0630: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c0630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0634: 0x0  nop
    ctx->pc = 0x1c0634u;
    // NOP
    // 0x1c0638: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0638u;
    {
        const bool branch_taken_0x1c0638 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C063Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0638u;
            // 0x1c063c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0638) {
            ctx->pc = 0x1C0654u;
            goto label_1c0654;
        }
    }
    ctx->pc = 0x1C0640u;
    // 0x1c0640: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x1c0640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0644: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C0644u;
    SET_GPR_U32(ctx, 31, 0x1C064Cu);
    ctx->pc = 0x1C0648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0644u;
            // 0x1c0648: 0x86050004  lh          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C064Cu; }
        if (ctx->pc != 0x1C064Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C064Cu; }
        if (ctx->pc != 0x1C064Cu) { return; }
    }
    ctx->pc = 0x1C064Cu;
    // 0x1c064c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C064Cu;
    {
        const bool branch_taken_0x1c064c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C064Cu;
            // 0x1c0650: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c064c) {
            ctx->pc = 0x1C0690u;
            goto label_1c0690;
        }
    }
    ctx->pc = 0x1C0654u;
label_1c0654:
    // 0x1c0654: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c0654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c0658: 0xc440ccf8  lwc1        $f0, -0x3308($v0)
    ctx->pc = 0x1c0658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c065c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c065cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c0660: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c0660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0664: 0x0  nop
    ctx->pc = 0x1c0664u;
    // NOP
    // 0x1c0668: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0668u;
    {
        const bool branch_taken_0x1c0668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C066Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0668u;
            // 0x1c066c: 0xc60c0014  lwc1        $f12, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0668) {
            ctx->pc = 0x1C0680u;
            goto label_1c0680;
        }
    }
    ctx->pc = 0x1C0670u;
    // 0x1c0670: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C0670u;
    SET_GPR_U32(ctx, 31, 0x1C0678u);
    ctx->pc = 0x1C0674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0670u;
            // 0x1c0674: 0x8605000a  lh          $a1, 0xA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0678u; }
        if (ctx->pc != 0x1C0678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0678u; }
        if (ctx->pc != 0x1C0678u) { return; }
    }
    ctx->pc = 0x1C0678u;
    // 0x1c0678: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0678u;
    {
        const bool branch_taken_0x1c0678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C067Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0678u;
            // 0x1c067c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0678) {
            ctx->pc = 0x1C0690u;
            goto label_1c0690;
        }
    }
    ctx->pc = 0x1C0680u;
label_1c0680:
    // 0x1c0680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c0680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0684: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C0684u;
    SET_GPR_U32(ctx, 31, 0x1C068Cu);
    ctx->pc = 0x1C0688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0684u;
            // 0x1c0688: 0x86050010  lh          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C068Cu; }
        if (ctx->pc != 0x1C068Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C068Cu; }
        if (ctx->pc != 0x1C068Cu) { return; }
    }
    ctx->pc = 0x1C068Cu;
    // 0x1c068c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c068cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1c0690:
    // 0x1c0690: 0xc6210178  lwc1        $f1, 0x178($s1)
    ctx->pc = 0x1c0690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0694: 0xc440ccc4  lwc1        $f0, -0x333C($v0)
    ctx->pc = 0x1c0694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0698: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c0698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c069c: 0x0  nop
    ctx->pc = 0x1c069cu;
    // NOP
    // 0x1c06a0: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x1C06A0u;
    {
        const bool branch_taken_0x1c06a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C06A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C06A0u;
            // 0x1c06a4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c06a0) {
            ctx->pc = 0x1C0748u;
            goto label_1c0748;
        }
    }
    ctx->pc = 0x1C06A8u;
    // 0x1c06a8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1c06a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c06ac: 0x4602d034  c.lt.s      $f26, $f2
    ctx->pc = 0x1c06acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c06b0: 0x0  nop
    ctx->pc = 0x1c06b0u;
    // NOP
    // 0x1c06b4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C06B4u;
    {
        const bool branch_taken_0x1c06b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C06B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C06B4u;
            // 0x1c06b8: 0xc440cd08  lwc1        $f0, -0x32F8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c06b4) {
            ctx->pc = 0x1C06D4u;
            goto label_1c06d4;
        }
    }
    ctx->pc = 0x1C06BCu;
    // 0x1c06bc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c06bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c06c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c06c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c06c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c06c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c06c8: 0x461a0034  c.lt.s      $f0, $f26
    ctx->pc = 0x1c06c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c06cc: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1C06CCu;
    {
        const bool branch_taken_0x1c06cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c06cc) {
            ctx->pc = 0x1C0748u;
            goto label_1c0748;
        }
    }
    ctx->pc = 0x1C06D4u;
label_1c06d4:
    // 0x1c06d4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c06d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c06d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c06d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c06dc: 0xc440cd08  lwc1        $f0, -0x32F8($v0)
    ctx->pc = 0x1c06dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c06e0: 0x4602d5a8  max.s       $f22, $f26, $f2
    ctx->pc = 0x1c06e0u;
    ctx->f[22] = std::max(ctx->f[26], ctx->f[2]);
    // 0x1c06e4: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x1c06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1c06e8: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1c06e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c06ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c06ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c06f0: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x1c06f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c06f4: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x1c06f4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c06f8: 0x7a240050  lq          $a0, 0x50($s1)
    ctx->pc = 0x1c06f8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1c06fc: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1c06fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1c0700: 0x4600b5a9  min.s       $f22, $f22, $f0
    ctx->pc = 0x1c0700u;
    ctx->f[22] = std::min(ctx->f[22], ctx->f[0]);
    // 0x1c0704: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x1c0704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x1c0708: 0x4406b000  mfc1        $a2, $f22
    ctx->pc = 0x1c0708u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c070c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1c070cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1c0710: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x1c0710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x1c0714: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x1c0714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
    // 0x1c0718: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1c0718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1c071c: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x1c071cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c0720: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1c0720u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c0724: 0xda210360  lqc2        $vf1, 0x360($s1)
    ctx->pc = 0x1c0724u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x1c0728: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1c0728u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c072c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1c072cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c0730: 0xfa210080  sqc2        $vf1, 0x80($s1)
    ctx->pc = 0x1c0730u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c0734: 0x7e240050  sq          $a0, 0x50($s1)
    ctx->pc = 0x1c0734u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 4));
    // 0x1c0738: 0x7e250060  sq          $a1, 0x60($s1)
    ctx->pc = 0x1c0738u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 5));
    // 0x1c073c: 0x7e220070  sq          $v0, 0x70($s1)
    ctx->pc = 0x1c073cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 2));
    // 0x1c0740: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c0740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c0744: 0x0  nop
    ctx->pc = 0x1c0744u;
    // NOP
label_1c0748:
    // 0x1c0748: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c0748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c074c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c074cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c0750: 0xc441cd08  lwc1        $f1, -0x32F8($v0)
    ctx->pc = 0x1c0750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0754: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x1c0754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c0758: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x1c0758u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c075c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1C075Cu;
    {
        const bool branch_taken_0x1c075c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c075c) {
            ctx->pc = 0x1C07B4u;
            goto label_1c07b4;
        }
    }
    ctx->pc = 0x1C0764u;
    // 0x1c0764: 0xc06ff50  jal         func_1BFD40
    ctx->pc = 0x1C0764u;
    SET_GPR_U32(ctx, 31, 0x1C076Cu);
    ctx->pc = 0x1C0768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0764u;
            // 0x1c0768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFD40u;
    if (runtime->hasFunction(0x1BFD40u)) {
        auto targetFn = runtime->lookupFunction(0x1BFD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C076Cu; }
        if (ctx->pc != 0x1C076Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFD40_0x1bfd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C076Cu; }
        if (ctx->pc != 0x1C076Cu) { return; }
    }
    ctx->pc = 0x1C076Cu;
    // 0x1c076c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C076Cu;
    {
        const bool branch_taken_0x1c076c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C076Cu;
            // 0x1c0770: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c076c) {
            ctx->pc = 0x1C07E4u;
            goto label_1c07e4;
        }
    }
    ctx->pc = 0x1C0774u;
    // 0x1c0774: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c0774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c0778: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1c0778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1c077c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1c077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1c0780: 0x40f809  jalr        $v0
    ctx->pc = 0x1C0780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0788u);
        ctx->pc = 0x1C0784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0780u;
            // 0x1c0784: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0788u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFE80u: goto label_1bfe80;
            case 0x1BFEF8u: goto label_1bfef8;
            case 0x1BFF80u: goto label_1bff80;
            case 0x1BFF90u: goto label_1bff90;
            case 0x1BFF98u: goto label_1bff98;
            case 0x1BFFD8u: goto label_1bffd8;
            case 0x1BFFDCu: goto label_1bffdc;
            case 0x1C0118u: goto label_1c0118;
            case 0x1C0148u: goto label_1c0148;
            case 0x1C0178u: goto label_1c0178;
            case 0x1C0184u: goto label_1c0184;
            case 0x1C0238u: goto label_1c0238;
            case 0x1C023Cu: goto label_1c023c;
            case 0x1C0260u: goto label_1c0260;
            case 0x1C0270u: goto label_1c0270;
            case 0x1C0278u: goto label_1c0278;
            case 0x1C027Cu: goto label_1c027c;
            case 0x1C02E8u: goto label_1c02e8;
            case 0x1C0324u: goto label_1c0324;
            case 0x1C0344u: goto label_1c0344;
            case 0x1C0368u: goto label_1c0368;
            case 0x1C03B4u: goto label_1c03b4;
            case 0x1C03C0u: goto label_1c03c0;
            case 0x1C03F0u: goto label_1c03f0;
            case 0x1C0408u: goto label_1c0408;
            case 0x1C0430u: goto label_1c0430;
            case 0x1C0434u: goto label_1c0434;
            case 0x1C0494u: goto label_1c0494;
            case 0x1C04D0u: goto label_1c04d0;
            case 0x1C04F4u: goto label_1c04f4;
            case 0x1C0508u: goto label_1c0508;
            case 0x1C0558u: goto label_1c0558;
            case 0x1C0584u: goto label_1c0584;
            case 0x1C0598u: goto label_1c0598;
            case 0x1C05DCu: goto label_1c05dc;
            case 0x1C0608u: goto label_1c0608;
            case 0x1C061Cu: goto label_1c061c;
            case 0x1C0654u: goto label_1c0654;
            case 0x1C0680u: goto label_1c0680;
            case 0x1C0690u: goto label_1c0690;
            case 0x1C06D4u: goto label_1c06d4;
            case 0x1C0748u: goto label_1c0748;
            case 0x1C07B4u: goto label_1c07b4;
            case 0x1C07E4u: goto label_1c07e4;
            case 0x1C0834u: goto label_1c0834;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0788u; }
            if (ctx->pc != 0x1C0788u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0788u;
    // 0x1c0788: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1C0788u;
    SET_GPR_U32(ctx, 31, 0x1C0790u);
    ctx->pc = 0x1C078Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0788u;
            // 0x1c078c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0790u; }
        if (ctx->pc != 0x1C0790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0790u; }
        if (ctx->pc != 0x1C0790u) { return; }
    }
    ctx->pc = 0x1C0790u;
    // 0x1c0790: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c0790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c0794: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c0794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c0798: 0x8445cce6  lh          $a1, -0x331A($v0)
    ctx->pc = 0x1c0798u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954214)));
    // 0x1c079c: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C079Cu;
    SET_GPR_U32(ctx, 31, 0x1C07A4u);
    ctx->pc = 0x1C07A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C079Cu;
            // 0x1c07a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C07A4u; }
        if (ctx->pc != 0x1C07A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C07A4u; }
        if (ctx->pc != 0x1C07A4u) { return; }
    }
    ctx->pc = 0x1C07A4u;
    // 0x1c07a4: 0xc06ff6c  jal         func_1BFDB0
    ctx->pc = 0x1C07A4u;
    SET_GPR_U32(ctx, 31, 0x1C07ACu);
    ctx->pc = 0x1C07A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C07A4u;
            // 0x1c07a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFDB0u;
    if (runtime->hasFunction(0x1BFDB0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C07ACu; }
        if (ctx->pc != 0x1C07ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFDB0_0x1bfdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C07ACu; }
        if (ctx->pc != 0x1C07ACu) { return; }
    }
    ctx->pc = 0x1C07ACu;
    // 0x1c07ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C07ACu;
    {
        const bool branch_taken_0x1c07ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C07B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C07ACu;
            // 0x1c07b0: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c07ac) {
            ctx->pc = 0x1C07E4u;
            goto label_1c07e4;
        }
    }
    ctx->pc = 0x1C07B4u;
label_1c07b4:
    // 0x1c07b4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c07b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1c07b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c07b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c07bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c07bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c07c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c07c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c07c4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c07c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c07c8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1c07c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c07cc: 0x0  nop
    ctx->pc = 0x1c07ccu;
    // NOP
    // 0x1c07d0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C07D0u;
    {
        const bool branch_taken_0x1c07d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C07D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C07D0u;
            // 0x1c07d4: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c07d0) {
            ctx->pc = 0x1C07E4u;
            goto label_1c07e4;
        }
    }
    ctx->pc = 0x1C07D8u;
    // 0x1c07d8: 0xc06ff7c  jal         func_1BFDF0
    ctx->pc = 0x1C07D8u;
    SET_GPR_U32(ctx, 31, 0x1C07E0u);
    ctx->pc = 0x1C07DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C07D8u;
            // 0x1c07dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFDF0u;
    if (runtime->hasFunction(0x1BFDF0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C07E0u; }
        if (ctx->pc != 0x1C07E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFDF0_0x1bfdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C07E0u; }
        if (ctx->pc != 0x1C07E0u) { return; }
    }
    ctx->pc = 0x1C07E0u;
    // 0x1c07e0: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x1c07e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1c07e4:
    // 0x1c07e4: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x1c07e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c07e8: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x1c07e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1c07ec: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1c07ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1c07f0: 0xc7bb0198  lwc1        $f27, 0x198($sp)
    ctx->pc = 0x1c07f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1c07f4: 0xc7ba0190  lwc1        $f26, 0x190($sp)
    ctx->pc = 0x1c07f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1c07f8: 0xc7b90188  lwc1        $f25, 0x188($sp)
    ctx->pc = 0x1c07f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1c07fc: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x1c07fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1c0800: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x1c0800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1c0804: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x1c0804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c0808: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x1c0808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c080c: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x1c080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c0810: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0810u;
            // 0x1c0814: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFE80u: goto label_1bfe80;
            case 0x1BFEF8u: goto label_1bfef8;
            case 0x1BFF80u: goto label_1bff80;
            case 0x1BFF90u: goto label_1bff90;
            case 0x1BFF98u: goto label_1bff98;
            case 0x1BFFD8u: goto label_1bffd8;
            case 0x1BFFDCu: goto label_1bffdc;
            case 0x1C0118u: goto label_1c0118;
            case 0x1C0148u: goto label_1c0148;
            case 0x1C0178u: goto label_1c0178;
            case 0x1C0184u: goto label_1c0184;
            case 0x1C0238u: goto label_1c0238;
            case 0x1C023Cu: goto label_1c023c;
            case 0x1C0260u: goto label_1c0260;
            case 0x1C0270u: goto label_1c0270;
            case 0x1C0278u: goto label_1c0278;
            case 0x1C027Cu: goto label_1c027c;
            case 0x1C02E8u: goto label_1c02e8;
            case 0x1C0324u: goto label_1c0324;
            case 0x1C0344u: goto label_1c0344;
            case 0x1C0368u: goto label_1c0368;
            case 0x1C03B4u: goto label_1c03b4;
            case 0x1C03C0u: goto label_1c03c0;
            case 0x1C03F0u: goto label_1c03f0;
            case 0x1C0408u: goto label_1c0408;
            case 0x1C0430u: goto label_1c0430;
            case 0x1C0434u: goto label_1c0434;
            case 0x1C0494u: goto label_1c0494;
            case 0x1C04D0u: goto label_1c04d0;
            case 0x1C04F4u: goto label_1c04f4;
            case 0x1C0508u: goto label_1c0508;
            case 0x1C0558u: goto label_1c0558;
            case 0x1C0584u: goto label_1c0584;
            case 0x1C0598u: goto label_1c0598;
            case 0x1C05DCu: goto label_1c05dc;
            case 0x1C0608u: goto label_1c0608;
            case 0x1C061Cu: goto label_1c061c;
            case 0x1C0654u: goto label_1c0654;
            case 0x1C0680u: goto label_1c0680;
            case 0x1C0690u: goto label_1c0690;
            case 0x1C06D4u: goto label_1c06d4;
            case 0x1C0748u: goto label_1c0748;
            case 0x1C07B4u: goto label_1c07b4;
            case 0x1C07E4u: goto label_1c07e4;
            case 0x1C0834u: goto label_1c0834;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0818u;
    // 0x1c0818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c0818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c081c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c081cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c0820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c0824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c082c: 0xc06ffa0  jal         func_1BFE80
    ctx->pc = 0x1C082Cu;
    SET_GPR_U32(ctx, 31, 0x1C0834u);
    ctx->pc = 0x1C0830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C082Cu;
            // 0x1c0830: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFE80u;
    runtime->cooperativeGuestYield();
    goto label_1bfe80;
    ctx->pc = 0x1C0834u;
label_1c0834:
    // 0x1c0834: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c0834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0838: 0xc07ac70  jal         func_1EB1C0
    ctx->pc = 0x1C0838u;
    SET_GPR_U32(ctx, 31, 0x1C0840u);
    ctx->pc = 0x1C083Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0838u;
            // 0x1c083c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB1C0u;
    if (runtime->hasFunction(0x1EB1C0u)) {
        auto targetFn = runtime->lookupFunction(0x1EB1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0840u; }
        if (ctx->pc != 0x1C0840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB1C0_0x1eb1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0840u; }
        if (ctx->pc != 0x1C0840u) { return; }
    }
    ctx->pc = 0x1C0840u;
    // 0x1c0840: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c0840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0844: 0xc0703d2  jal         func_1C0F48
    ctx->pc = 0x1C0844u;
    SET_GPR_U32(ctx, 31, 0x1C084Cu);
    ctx->pc = 0x1C0848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0844u;
            // 0x1c0848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F48u;
    if (runtime->hasFunction(0x1C0F48u)) {
        auto targetFn = runtime->lookupFunction(0x1C0F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C084Cu; }
        if (ctx->pc != 0x1C084Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0F48_0x1c0f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C084Cu; }
        if (ctx->pc != 0x1C084Cu) { return; }
    }
    ctx->pc = 0x1C084Cu;
    // 0x1c084c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c084cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0850: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c0850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0854: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c085c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C085Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C085Cu;
            // 0x1c0860: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFE80u: goto label_1bfe80;
            case 0x1BFEF8u: goto label_1bfef8;
            case 0x1BFF80u: goto label_1bff80;
            case 0x1BFF90u: goto label_1bff90;
            case 0x1BFF98u: goto label_1bff98;
            case 0x1BFFD8u: goto label_1bffd8;
            case 0x1BFFDCu: goto label_1bffdc;
            case 0x1C0118u: goto label_1c0118;
            case 0x1C0148u: goto label_1c0148;
            case 0x1C0178u: goto label_1c0178;
            case 0x1C0184u: goto label_1c0184;
            case 0x1C0238u: goto label_1c0238;
            case 0x1C023Cu: goto label_1c023c;
            case 0x1C0260u: goto label_1c0260;
            case 0x1C0270u: goto label_1c0270;
            case 0x1C0278u: goto label_1c0278;
            case 0x1C027Cu: goto label_1c027c;
            case 0x1C02E8u: goto label_1c02e8;
            case 0x1C0324u: goto label_1c0324;
            case 0x1C0344u: goto label_1c0344;
            case 0x1C0368u: goto label_1c0368;
            case 0x1C03B4u: goto label_1c03b4;
            case 0x1C03C0u: goto label_1c03c0;
            case 0x1C03F0u: goto label_1c03f0;
            case 0x1C0408u: goto label_1c0408;
            case 0x1C0430u: goto label_1c0430;
            case 0x1C0434u: goto label_1c0434;
            case 0x1C0494u: goto label_1c0494;
            case 0x1C04D0u: goto label_1c04d0;
            case 0x1C04F4u: goto label_1c04f4;
            case 0x1C0508u: goto label_1c0508;
            case 0x1C0558u: goto label_1c0558;
            case 0x1C0584u: goto label_1c0584;
            case 0x1C0598u: goto label_1c0598;
            case 0x1C05DCu: goto label_1c05dc;
            case 0x1C0608u: goto label_1c0608;
            case 0x1C061Cu: goto label_1c061c;
            case 0x1C0654u: goto label_1c0654;
            case 0x1C0680u: goto label_1c0680;
            case 0x1C0690u: goto label_1c0690;
            case 0x1C06D4u: goto label_1c06d4;
            case 0x1C0748u: goto label_1c0748;
            case 0x1C07B4u: goto label_1c07b4;
            case 0x1C07E4u: goto label_1c07e4;
            case 0x1C0834u: goto label_1c0834;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0864u;
    // 0x1c0864: 0x0  nop
    ctx->pc = 0x1c0864u;
    // NOP
}
