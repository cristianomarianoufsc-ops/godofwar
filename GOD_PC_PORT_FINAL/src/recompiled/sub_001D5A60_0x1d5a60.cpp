#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5A60
// Address: 0x1d5a60 - 0x1d5b50
void sub_001D5A60_0x1d5a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5A60_0x1d5a60");
#endif

    ctx->pc = 0x1d5a60u;

    // 0x1d5a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d5a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d5a64: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d5a68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d5a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d5a6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d5a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d5a70: 0x24502cc0  addiu       $s0, $v0, 0x2CC0
    ctx->pc = 0x1d5a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1d5a74: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d5a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d5a78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d5a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5a80: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1d5a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1d5a84: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1d5a84u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x1d5a88: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1d5a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1d5a8c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1d5a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1d5a90: 0xa2000057  sb          $zero, 0x57($s0)
    ctx->pc = 0x1d5a90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5a94: 0xa2000056  sb          $zero, 0x56($s0)
    ctx->pc = 0x1d5a94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5a98: 0xa2000055  sb          $zero, 0x55($s0)
    ctx->pc = 0x1d5a98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5a9c: 0xc0756d4  jal         func_1D5B50
    ctx->pc = 0x1D5A9Cu;
    SET_GPR_U32(ctx, 31, 0x1D5AA4u);
    ctx->pc = 0x1D5AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A9Cu;
            // 0x1d5aa0: 0xa2000054  sb          $zero, 0x54($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5B50u;
    if (runtime->hasFunction(0x1D5B50u)) {
        auto targetFn = runtime->lookupFunction(0x1D5B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5AA4u; }
        if (ctx->pc != 0x1D5AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5B50_0x1d5b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5AA4u; }
        if (ctx->pc != 0x1D5AA4u) { return; }
    }
    ctx->pc = 0x1D5AA4u;
    // 0x1d5aa4: 0x8e44cb94  lw          $a0, -0x346C($s2)
    ctx->pc = 0x1d5aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953876)));
    // 0x1d5aa8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d5aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5aac: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x1d5aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5ab0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d5ab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d5ab4: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1d5ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1d5ab8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d5ab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d5abc: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1d5abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1d5ac0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5AC0u;
    {
        const bool branch_taken_0x1d5ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5AC0u;
            // 0x1d5ac4: 0xac8201d0  sw          $v0, 0x1D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ac0) {
            ctx->pc = 0x1D5AD8u;
            goto label_1d5ad8;
        }
    }
    ctx->pc = 0x1D5AC8u;
    // 0x1d5ac8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d5ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5acc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1d5accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1d5ad0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1D5AD0u;
    SET_GPR_U32(ctx, 31, 0x1D5AD8u);
    ctx->pc = 0x1D5AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5AD0u;
            // 0x1d5ad4: 0xac820214  sw          $v0, 0x214($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5AD8u; }
        if (ctx->pc != 0x1D5AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5AD8u; }
        if (ctx->pc != 0x1D5AD8u) { return; }
    }
    ctx->pc = 0x1D5AD8u;
label_1d5ad8:
    // 0x1d5ad8: 0x8e44cb94  lw          $a0, -0x346C($s2)
    ctx->pc = 0x1d5ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953876)));
    // 0x1d5adc: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x1d5adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5ae0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d5ae0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d5ae4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1d5ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1d5ae8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d5ae8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d5aec: 0x0  nop
    ctx->pc = 0x1d5aecu;
    // NOP
    // 0x1d5af0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5AF0u;
    {
        const bool branch_taken_0x1d5af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D5AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5AF0u;
            // 0x1d5af4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5af0) {
            ctx->pc = 0x1D5B08u;
            goto label_1d5b08;
        }
    }
    ctx->pc = 0x1D5AF8u;
    // 0x1d5af8: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1d5af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1d5afc: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1D5AFCu;
    SET_GPR_U32(ctx, 31, 0x1D5B04u);
    ctx->pc = 0x1D5B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5AFCu;
            // 0x1d5b00: 0xac820218  sw          $v0, 0x218($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B04u; }
        if (ctx->pc != 0x1D5B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B04u; }
        if (ctx->pc != 0x1D5B04u) { return; }
    }
    ctx->pc = 0x1D5B04u;
    // 0x1d5b04: 0x8e44cb94  lw          $a0, -0x346C($s2)
    ctx->pc = 0x1d5b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953876)));
label_1d5b08:
    // 0x1d5b08: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x1d5b08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1d5b0c: 0x8c8201d0  lw          $v0, 0x1D0($a0)
    ctx->pc = 0x1d5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x1d5b10: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5B10u;
    {
        const bool branch_taken_0x1d5b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D5B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B10u;
            // 0x1d5b14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b10) {
            ctx->pc = 0x1D5B24u;
            goto label_1d5b24;
        }
    }
    ctx->pc = 0x1D5B18u;
    // 0x1d5b18: 0xac8301d0  sw          $v1, 0x1D0($a0)
    ctx->pc = 0x1d5b18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 3));
    // 0x1d5b1c: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1D5B1Cu;
    SET_GPR_U32(ctx, 31, 0x1D5B24u);
    ctx->pc = 0x1D5B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B1Cu;
            // 0x1d5b20: 0xac82021c  sw          $v0, 0x21C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B24u; }
        if (ctx->pc != 0x1D5B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B24u; }
        if (ctx->pc != 0x1D5B24u) { return; }
    }
    ctx->pc = 0x1D5B24u;
label_1d5b24:
    // 0x1d5b24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b2c: 0xae2201c8  sw          $v0, 0x1C8($s1)
    ctx->pc = 0x1d5b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 2));
    // 0x1d5b30: 0xc075aae  jal         func_1D6AB8
    ctx->pc = 0x1D5B30u;
    SET_GPR_U32(ctx, 31, 0x1D5B38u);
    ctx->pc = 0x1D5B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B30u;
            // 0x1d5b34: 0xae2201c0  sw          $v0, 0x1C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6AB8u;
    if (runtime->hasFunction(0x1D6AB8u)) {
        auto targetFn = runtime->lookupFunction(0x1D6AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B38u; }
        if (ctx->pc != 0x1D5B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d6ab8_0x1d6b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B38u; }
        if (ctx->pc != 0x1D5B38u) { return; }
    }
    ctx->pc = 0x1D5B38u;
    // 0x1d5b38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d5b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5b3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d5b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5b40: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d5b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5b48: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B48u;
            // 0x1d5b4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5AD8u: goto label_1d5ad8;
            case 0x1D5B08u: goto label_1d5b08;
            case 0x1D5B24u: goto label_1d5b24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5B50u;
}
