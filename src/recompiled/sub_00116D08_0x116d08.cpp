#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116D08
// Address: 0x116d08 - 0x116dd0
void sub_00116D08_0x116d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116D08_0x116d08");
#endif

    ctx->pc = 0x116d08u;

    // 0x116d08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x116d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x116d0c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x116d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x116d10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x116d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x116d14: 0x2442fa28  addiu       $v0, $v0, -0x5D8
    ctx->pc = 0x116d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965800));
    // 0x116d18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x116d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x116d20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x116d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x116d24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x116d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x116d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116d2c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x116d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d30: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x116d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x116d34: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x116d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x116d38: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x116d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x116d3c: 0xc08eb9c  jal         func_23AE70
    ctx->pc = 0x116D3Cu;
    SET_GPR_U32(ctx, 31, 0x116D44u);
    ctx->pc = 0x116D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116D3Cu;
            // 0x116d40: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AE70u;
    if (runtime->hasFunction(0x23AE70u)) {
        auto targetFn = runtime->lookupFunction(0x23AE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116D44u; }
        if (ctx->pc != 0x116D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ae70_0x23ae80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116D44u; }
        if (ctx->pc != 0x116D44u) { return; }
    }
    ctx->pc = 0x116D44u;
    // 0x116d44: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x116d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x116d48: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x116d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x116d4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116d50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x116d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116d54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x116d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d58: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x116d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x116d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116d64: 0xae12004c  sw          $s2, 0x4C($s0)
    ctx->pc = 0x116d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 18));
    // 0x116d68: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x116d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x116d6c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x116d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x116d70: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x116d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x116d74: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x116d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x116d78: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x116d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x116d7c: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x116d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x116d80: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x116d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x116d84: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x116d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x116d88: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x116d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x116d8c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x116d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x116d90: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x116d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x116d94: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x116d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x116d98: 0xc045d58  jal         func_117560
    ctx->pc = 0x116D98u;
    SET_GPR_U32(ctx, 31, 0x116DA0u);
    ctx->pc = 0x116D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116D98u;
            // 0x116d9c: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x117560u;
    if (runtime->hasFunction(0x117560u)) {
        auto targetFn = runtime->lookupFunction(0x117560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116DA0u; }
        if (ctx->pc != 0x116DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117560_0x117560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116DA0u; }
        if (ctx->pc != 0x116DA0u) { return; }
    }
    ctx->pc = 0x116DA0u;
    // 0x116da0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x116da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x116da4: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x116da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116da8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x116da8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x116dac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x116dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116db0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x116db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116db4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x116db4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116db8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x116db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x116dbc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x116dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116dc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x116DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116DC4u;
            // 0x116dc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116DCCu;
    // 0x116dcc: 0x0  nop
    ctx->pc = 0x116dccu;
    // NOP
}
