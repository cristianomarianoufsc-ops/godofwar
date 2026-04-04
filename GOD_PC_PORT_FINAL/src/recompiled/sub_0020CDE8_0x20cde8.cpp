#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020CDE8
// Address: 0x20cde8 - 0x20ceb0
void sub_0020CDE8_0x20cde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CDE8_0x20cde8");
#endif

    ctx->pc = 0x20cde8u;

    // 0x20cde8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20cde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20cdec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20cdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x20cdf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20cdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20cdf4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20cdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x20cdf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20cdf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cdfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ce00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20ce00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce04: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x20ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x20ce08: 0x96420046  lhu         $v0, 0x46($s2)
    ctx->pc = 0x20ce08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x20ce0c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x20ce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x20ce10: 0xc0833e6  jal         func_20CF98
    ctx->pc = 0x20CE10u;
    SET_GPR_U32(ctx, 31, 0x20CE18u);
    ctx->pc = 0x20CE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CE10u;
            // 0x20ce14: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CF98u;
    if (runtime->hasFunction(0x20CF98u)) {
        auto targetFn = runtime->lookupFunction(0x20CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE18u; }
        if (ctx->pc != 0x20CE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020CF98_0x20cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE18u; }
        if (ctx->pc != 0x20CE18u) { return; }
    }
    ctx->pc = 0x20CE18u;
    // 0x20ce18: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x20ce18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x20ce1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20ce1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20ce20: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x20ce20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x20ce24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20ce24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20ce28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20ce28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x20ce2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x20ce2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20ce30: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x20ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x20ce34: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x20ce34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20ce38: 0xc04f824  jal         func_13E090
    ctx->pc = 0x20CE38u;
    SET_GPR_U32(ctx, 31, 0x20CE40u);
    ctx->pc = 0x20CE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CE38u;
            // 0x20ce3c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE40u; }
        if (ctx->pc != 0x20CE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE40u; }
        if (ctx->pc != 0x20CE40u) { return; }
    }
    ctx->pc = 0x20CE40u;
    // 0x20ce40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ce40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20ce44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce48: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x20CE48u;
    SET_GPR_U32(ctx, 31, 0x20CE50u);
    ctx->pc = 0x20CE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CE48u;
            // 0x20ce4c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE50u; }
        if (ctx->pc != 0x20CE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE50u; }
        if (ctx->pc != 0x20CE50u) { return; }
    }
    ctx->pc = 0x20CE50u;
    // 0x20ce50: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x20ce50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x20ce54: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x20ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x20ce58: 0xc04f824  jal         func_13E090
    ctx->pc = 0x20CE58u;
    SET_GPR_U32(ctx, 31, 0x20CE60u);
    ctx->pc = 0x20CE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CE58u;
            // 0x20ce5c: 0x108100  sll         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE60u; }
        if (ctx->pc != 0x20CE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE60u; }
        if (ctx->pc != 0x20CE60u) { return; }
    }
    ctx->pc = 0x20CE60u;
    // 0x20ce60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ce60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce64: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x20ce64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20ce68: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x20CE68u;
    SET_GPR_U32(ctx, 31, 0x20CE70u);
    ctx->pc = 0x20CE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CE68u;
            // 0x20ce6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE70u; }
        if (ctx->pc != 0x20CE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE70u; }
        if (ctx->pc != 0x20CE70u) { return; }
    }
    ctx->pc = 0x20CE70u;
    // 0x20ce70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ce74: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x20ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x20ce78: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x20ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x20ce7c: 0xc0834a0  jal         func_20D280
    ctx->pc = 0x20CE7Cu;
    SET_GPR_U32(ctx, 31, 0x20CE84u);
    ctx->pc = 0x20CE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CE7Cu;
            // 0x20ce80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D280u;
    if (runtime->hasFunction(0x20D280u)) {
        auto targetFn = runtime->lookupFunction(0x20D280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE84u; }
        if (ctx->pc != 0x20CE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D280_0x20d280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CE84u; }
        if (ctx->pc != 0x20CE84u) { return; }
    }
    ctx->pc = 0x20CE84u;
    // 0x20ce84: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x20ce84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x20ce88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20ce88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce8c: 0x2463db68  addiu       $v1, $v1, -0x2498
    ctx->pc = 0x20ce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957928));
    // 0x20ce90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20ce90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ce94: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x20ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x20ce98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20ce98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ce9c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20ce9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cea4: 0x3e00008  jr          $ra
    ctx->pc = 0x20CEA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CEA4u;
            // 0x20cea8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20CEACu;
    // 0x20ceac: 0x0  nop
    ctx->pc = 0x20ceacu;
    // NOP
}
