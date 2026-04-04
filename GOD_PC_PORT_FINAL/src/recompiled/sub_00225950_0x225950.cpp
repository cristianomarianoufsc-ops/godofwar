#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225950
// Address: 0x225950 - 0x226078
void sub_00225950_0x225950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225950_0x225950");
#endif

    ctx->pc = 0x225950u;

    // 0x225950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x225950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x225954: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x225954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x225958: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x225958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22595c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22595cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x225960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x225960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225964: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x225964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x225968: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x225968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22596c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22596cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225970: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x225970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x225974: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x225974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x225978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22597c: 0x700694a9  por         $s2, $zero, $a2
    ctx->pc = 0x22597cu;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x225980: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x225980u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x225984: 0x70079ca9  por         $s3, $zero, $a3
    ctx->pc = 0x225984u;
    SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x225988: 0x8c64d2ac  lw          $a0, -0x2D54($v1)
    ctx->pc = 0x225988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x22598c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22598cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225990: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x225990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x225994: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x225994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225998: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x225998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22599c: 0xc07974c  jal         func_1E5D30
    ctx->pc = 0x22599Cu;
    SET_GPR_U32(ctx, 31, 0x2259A4u);
    ctx->pc = 0x2259A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22599Cu;
            // 0x2259a0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5D30u;
    if (runtime->hasFunction(0x1E5D30u)) {
        auto targetFn = runtime->lookupFunction(0x1E5D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2259A4u; }
        if (ctx->pc != 0x2259A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5d30_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2259A4u; }
        if (ctx->pc != 0x2259A4u) { return; }
    }
    ctx->pc = 0x2259A4u;
    // 0x2259a4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2259a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2259a8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2259a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2259ac: 0x24429910  addiu       $v0, $v0, -0x66F0
    ctx->pc = 0x2259acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940944));
    // 0x2259b0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2259b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2259b4: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x2259b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x2259b8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2259b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2259bc: 0x8c6211a0  lw          $v0, 0x11A0($v1)
    ctx->pc = 0x2259bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4512)));
    // 0x2259c0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2259c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2259c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2259c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2259c8: 0xc04c992  jal         func_132648
    ctx->pc = 0x2259C8u;
    SET_GPR_U32(ctx, 31, 0x2259D0u);
    ctx->pc = 0x2259CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2259C8u;
            // 0x2259cc: 0xac6211a0  sw          $v0, 0x11A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2259D0u; }
        if (ctx->pc != 0x2259D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2259D0u; }
        if (ctx->pc != 0x2259D0u) { return; }
    }
    ctx->pc = 0x2259D0u;
    // 0x2259d0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2259D0u;
    {
        const bool branch_taken_0x2259d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2259D0u;
            // 0x2259d4: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259d0) {
            ctx->pc = 0x225AA4u;
            goto label_225aa4;
        }
    }
    ctx->pc = 0x2259D8u;
    // 0x2259d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2259d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2259dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2259dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2259e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2259e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259e4: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x2259e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x2259e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2259e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2259ec: 0x0  nop
    ctx->pc = 0x2259ecu;
    // NOP
label_2259f0:
    // 0x2259f0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2259f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2259f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2259f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2259f8: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x2259f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x2259fc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2259fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x225a00: 0x0  nop
    ctx->pc = 0x225a00u;
    // NOP
    // 0x225a04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x225A04u;
    {
        const bool branch_taken_0x225a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225A04u;
            // 0x225a08: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a04) {
            ctx->pc = 0x2259F0u;
            runtime->cooperativeGuestYield();
            goto label_2259f0;
        }
    }
    ctx->pc = 0x225A0Cu;
    // 0x225a0c: 0x3c10002d  lui         $s0, 0x2D
    ctx->pc = 0x225a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)45 << 16));
    // 0x225a10: 0x7e320020  sq          $s2, 0x20($s1)
    ctx->pc = 0x225a10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 18));
    // 0x225a14: 0x2610b950  addiu       $s0, $s0, -0x46B0
    ctx->pc = 0x225a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949200));
    // 0x225a18: 0x7e330030  sq          $s3, 0x30($s1)
    ctx->pc = 0x225a18u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 19));
    // 0x225a1c: 0x7e320040  sq          $s2, 0x40($s1)
    ctx->pc = 0x225a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 18));
    // 0x225a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x225a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x225a28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x225a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x225a2c: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x225A2Cu;
    SET_GPR_U32(ctx, 31, 0x225A34u);
    ctx->pc = 0x225A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225A2Cu;
            // 0x225a30: 0x7e320010  sq          $s2, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A34u; }
        if (ctx->pc != 0x225A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A34u; }
        if (ctx->pc != 0x225A34u) { return; }
    }
    ctx->pc = 0x225A34u;
    // 0x225a34: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x225a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x225a38: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x225a38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x225a3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225a44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225a48: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x225a48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x225a4c: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x225A4Cu;
    SET_GPR_U32(ctx, 31, 0x225A54u);
    ctx->pc = 0x225A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225A4Cu;
            // 0x225a50: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A54u; }
        if (ctx->pc != 0x225A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A54u; }
        if (ctx->pc != 0x225A54u) { return; }
    }
    ctx->pc = 0x225A54u;
    // 0x225a54: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x225a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x225a58: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x225a58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x225a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a60: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x225a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225a64: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x225a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x225a68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x225a68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x225a6c: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x225A6Cu;
    SET_GPR_U32(ctx, 31, 0x225A74u);
    ctx->pc = 0x225A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225A6Cu;
            // 0x225a70: 0xe6210054  swc1        $f1, 0x54($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A74u; }
        if (ctx->pc != 0x225A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A74u; }
        if (ctx->pc != 0x225A74u) { return; }
    }
    ctx->pc = 0x225A74u;
    // 0x225a74: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x225a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x225a78: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x225a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x225a7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225a80: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x225a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x225a84: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x225a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225a88: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x225a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x225a8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x225a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x225a90: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x225a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x225a94: 0xc04c9da  jal         func_132768
    ctx->pc = 0x225A94u;
    SET_GPR_U32(ctx, 31, 0x225A9Cu);
    ctx->pc = 0x225A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225A94u;
            // 0x225a98: 0xe621005c  swc1        $f1, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A9Cu; }
        if (ctx->pc != 0x225A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A9Cu; }
        if (ctx->pc != 0x225A9Cu) { return; }
    }
    ctx->pc = 0x225A9Cu;
    // 0x225a9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x225A9Cu;
    {
        const bool branch_taken_0x225a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225A9Cu;
            // 0x225aa0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a9c) {
            ctx->pc = 0x225AB8u;
            goto label_225ab8;
        }
    }
    ctx->pc = 0x225AA4u;
label_225aa4:
    // 0x225aa4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x225aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x225aa8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x225aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x225aac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x225aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x225ab0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x225ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x225ab4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x225ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225ab8:
    // 0x225ab8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x225ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x225abc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x225abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225ac0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225ac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225ac4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x225ac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225acc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x225accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x225ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x225AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225AD0u;
            // 0x225ad4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2259F0u: goto label_2259f0;
            case 0x225AA4u: goto label_225aa4;
            case 0x225AB8u: goto label_225ab8;
            case 0x225B38u: goto label_225b38;
            case 0x225BA8u: goto label_225ba8;
            case 0x225BBCu: goto label_225bbc;
            case 0x225BF8u: goto label_225bf8;
            case 0x225CE0u: goto label_225ce0;
            case 0x225D2Cu: goto label_225d2c;
            case 0x225E18u: goto label_225e18;
            case 0x225E20u: goto label_225e20;
            case 0x225E24u: goto label_225e24;
            case 0x225E28u: goto label_225e28;
            case 0x225E60u: goto label_225e60;
            case 0x225ED0u: goto label_225ed0;
            case 0x225F38u: goto label_225f38;
            case 0x225F3Cu: goto label_225f3c;
            case 0x225F60u: goto label_225f60;
            case 0x225F78u: goto label_225f78;
            case 0x226020u: goto label_226020;
            case 0x226028u: goto label_226028;
            case 0x226030u: goto label_226030;
            case 0x226050u: goto label_226050;
            default: break;
        }
        return;
    }
    ctx->pc = 0x225AD8u;
    // 0x225ad8: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x225ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x225adc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225ae0: 0x8ce611a0  lw          $a2, 0x11A0($a3)
    ctx->pc = 0x225ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4512)));
    // 0x225ae4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x225ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x225ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225aec: 0x2463a380  addiu       $v1, $v1, -0x5C80
    ctx->pc = 0x225aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943616));
    // 0x225af0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x225af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x225af4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x225af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x225af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225afc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x225afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b00: 0xace611a0  sw          $a2, 0x11A0($a3)
    ctx->pc = 0x225b00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4512), GPR_U32(ctx, 6));
    // 0x225b04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x225b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b08: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x225b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x225b0c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x225b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x225b10: 0x8c44d2ac  lw          $a0, -0x2D54($v0)
    ctx->pc = 0x225b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x225b14: 0xc0797a2  jal         func_1E5E88
    ctx->pc = 0x225B14u;
    SET_GPR_U32(ctx, 31, 0x225B1Cu);
    ctx->pc = 0x225B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225B14u;
            // 0x225b18: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5E88u;
    if (runtime->hasFunction(0x1E5E88u)) {
        auto targetFn = runtime->lookupFunction(0x1E5E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225B1Cu; }
        if (ctx->pc != 0x225B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5E88_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225B1Cu; }
        if (ctx->pc != 0x225B1Cu) { return; }
    }
    ctx->pc = 0x225B1Cu;
    // 0x225b1c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x225b1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x225b20: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225B20u;
    {
        const bool branch_taken_0x225b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225B20u;
            // 0x225b24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b20) {
            ctx->pc = 0x225B38u;
            goto label_225b38;
        }
    }
    ctx->pc = 0x225B28u;
    // 0x225b28: 0xc089280  jal         func_224A00
    ctx->pc = 0x225B28u;
    SET_GPR_U32(ctx, 31, 0x225B30u);
    ctx->pc = 0x225B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225B28u;
            // 0x225b2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A00u;
    if (runtime->hasFunction(0x224A00u)) {
        auto targetFn = runtime->lookupFunction(0x224A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225B30u; }
        if (ctx->pc != 0x225B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_224a00_0x224a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225B30u; }
        if (ctx->pc != 0x225B30u) { return; }
    }
    ctx->pc = 0x225B30u;
    // 0x225b30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x225b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225b34: 0x0  nop
    ctx->pc = 0x225b34u;
    // NOP
label_225b38:
    // 0x225b38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225b40: 0x3e00008  jr          $ra
    ctx->pc = 0x225B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225B40u;
            // 0x225b44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2259F0u: goto label_2259f0;
            case 0x225AA4u: goto label_225aa4;
            case 0x225AB8u: goto label_225ab8;
            case 0x225B38u: goto label_225b38;
            case 0x225BA8u: goto label_225ba8;
            case 0x225BBCu: goto label_225bbc;
            case 0x225BF8u: goto label_225bf8;
            case 0x225CE0u: goto label_225ce0;
            case 0x225D2Cu: goto label_225d2c;
            case 0x225E18u: goto label_225e18;
            case 0x225E20u: goto label_225e20;
            case 0x225E24u: goto label_225e24;
            case 0x225E28u: goto label_225e28;
            case 0x225E60u: goto label_225e60;
            case 0x225ED0u: goto label_225ed0;
            case 0x225F38u: goto label_225f38;
            case 0x225F3Cu: goto label_225f3c;
            case 0x225F60u: goto label_225f60;
            case 0x225F78u: goto label_225f78;
            case 0x226020u: goto label_226020;
            case 0x226028u: goto label_226028;
            case 0x226030u: goto label_226030;
            case 0x226050u: goto label_226050;
            default: break;
        }
        return;
    }
    ctx->pc = 0x225B48u;
    // 0x225b48: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x225b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x225b4c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x225b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x225b50: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x225b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x225b54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b58: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x225b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x225b5c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x225b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x225b60: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x225b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x225b64: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x225b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x225b68: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x225b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x225b6c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x225b6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x225b70: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x225b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x225b74: 0x50400136  beql        $v0, $zero, . + 4 + (0x136 << 2)
    ctx->pc = 0x225B74u;
    {
        const bool branch_taken_0x225b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225b74) {
            ctx->pc = 0x225B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x225B74u;
            // 0x225b78: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x226050u;
            goto label_226050;
        }
    }
    ctx->pc = 0x225B7Cu;
    // 0x225b7c: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x225B7Cu;
    SET_GPR_U32(ctx, 31, 0x225B84u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225B84u; }
        if (ctx->pc != 0x225B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225B84u; }
        if (ctx->pc != 0x225B84u) { return; }
    }
    ctx->pc = 0x225B84u;
    // 0x225b84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x225B84u;
    {
        const bool branch_taken_0x225b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225B84u;
            // 0x225b88: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b84) {
            ctx->pc = 0x225BA8u;
            goto label_225ba8;
        }
    }
    ctx->pc = 0x225B8Cu;
    // 0x225b8c: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x225b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225b90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x225b94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225b98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225b98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225b9c: 0x0  nop
    ctx->pc = 0x225b9cu;
    // NOP
    // 0x225ba0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x225BA0u;
    {
        const bool branch_taken_0x225ba0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225BA0u;
            // 0x225ba4: 0x3c04002a  lui         $a0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ba0) {
            ctx->pc = 0x225BBCu;
            goto label_225bbc;
        }
    }
    ctx->pc = 0x225BA8u;
label_225ba8:
    // 0x225ba8: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x225ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225bac: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x225bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225bb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x225bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x225bb4: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x225bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x225bb8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x225bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_225bbc:
    // 0x225bbc: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x225bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225bc0: 0xc481c658  lwc1        $f1, -0x39A8($a0)
    ctx->pc = 0x225bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225bc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x225bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x225bc8: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x225bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x225bcc: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x225bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225bd0: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x225bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225bd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x225bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225bd8: 0x0  nop
    ctx->pc = 0x225bd8u;
    // NOP
    // 0x225bdc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x225BDCu;
    {
        const bool branch_taken_0x225bdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225bdc) {
            ctx->pc = 0x225BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x225BDCu;
            // 0x225be0: 0xc6020054  lwc1        $f2, 0x54($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x225BF8u;
            goto label_225bf8;
        }
    }
    ctx->pc = 0x225BE4u;
    // 0x225be4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x225be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225be8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x225be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x225bec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x225becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x225bf0: 0xc6020054  lwc1        $f2, 0x54($s0)
    ctx->pc = 0x225bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x225bf4: 0x0  nop
    ctx->pc = 0x225bf4u;
    // NOP
label_225bf8:
    // 0x225bf8: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x225bf8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x225bfc: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x225bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c00: 0xc6a1c64c  lwc1        $f1, -0x39B4($s5)
    ctx->pc = 0x225c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225c04: 0x46001141  sub.s       $f5, $f2, $f0
    ctx->pc = 0x225c04u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x225c08: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x225c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225c0c: 0x0  nop
    ctx->pc = 0x225c0cu;
    // NOP
    // 0x225c10: 0x45020033  bc1fl       . + 4 + (0x33 << 2)
    ctx->pc = 0x225C10u;
    {
        const bool branch_taken_0x225c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225c10) {
            ctx->pc = 0x225C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x225C10u;
            // 0x225c14: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x225CE0u;
            goto label_225ce0;
        }
    }
    ctx->pc = 0x225C18u;
    // 0x225c18: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x225c18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x225c1c: 0xda030030  lqc2        $vf3, 0x30($s0)
    ctx->pc = 0x225c1cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x225c20: 0x4be5186c  vsub.xyzw   $vf1, $vf3, $vf5
    ctx->pc = 0x225c20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x225c24: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x225c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x225c28: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x225c28u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x225c2c: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x225c2cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x225c30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x225c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225c34: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x225c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x225c38: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x225c38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x225c3c: 0x4a840040  vaddx.y     $vf1, $vf0, $vf4x
    ctx->pc = 0x225c3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x225c40: 0xda020040  lqc2        $vf2, 0x40($s0)
    ctx->pc = 0x225c40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x225c44: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x225c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x225c48: 0x4be218ac  vsub.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x225c48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x225c4c: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x225c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x225c50: 0x4a840080  vaddx.y     $vf2, $vf0, $vf4x
    ctx->pc = 0x225c50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x225c54: 0x46022803  div.s       $f0, $f5, $f2
    ctx->pc = 0x225c54u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[0] = ctx->f[5] / ctx->f[2];
    // 0x225c58: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x225c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x225c5c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x225c5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x225c60: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x225c60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x225c64: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x225c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x225c68: 0x4be218ec  vsub.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x225c68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x225c6c: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x225c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x225c70: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x225c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x225c74: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x225c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x225c78: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x225c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x225c7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x225c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x225c80: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x225c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x225c84: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x225c84u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[5];
    // 0x225c88: 0xc483c658  lwc1        $f3, -0x39A8($a0)
    ctx->pc = 0x225c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x225c8c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x225c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c90: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x225c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x225c94: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x225c94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x225c98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x225c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x225c9c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x225c9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x225ca0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x225ca0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x225ca4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x225ca4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x225ca8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x225ca8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x225cac: 0x4a812940  vaddx.y     $vf5, $vf5, $vf1x
    ctx->pc = 0x225cacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x225cb0: 0x4b050041  vaddy.x     $vf1, $vf0, $vf5y
    ctx->pc = 0x225cb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x225cb4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x225cb4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x225cb8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x225cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225cbc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x225cbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x225cc0: 0x4a8100c0  vaddx.y     $vf3, $vf0, $vf1x
    ctx->pc = 0x225cc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x225cc4: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x225cc4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x225cc8: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x225cc8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x225ccc: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x225cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x225cd0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x225cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x225cd4: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x225cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x225cd8: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x225cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x225cdc: 0x0  nop
    ctx->pc = 0x225cdcu;
    // NOP
label_225ce0:
    // 0x225ce0: 0xc480c658  lwc1        $f0, -0x39A8($a0)
    ctx->pc = 0x225ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225ce4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x225ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225ce8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x225ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x225cec: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x225cecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x225cf0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x225cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x225cf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225cf8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x225cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x225cfc: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x225cfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x225d00: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x225d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x225d04: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x225d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225d08: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x225d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x225d0c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x225d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x225d10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x225d10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x225d14: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x225d14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225d18: 0x0  nop
    ctx->pc = 0x225d18u;
    // NOP
    // 0x225d1c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x225D1Cu;
    {
        const bool branch_taken_0x225d1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225D1Cu;
            // 0x225d20: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d1c) {
            ctx->pc = 0x225D2Cu;
            goto label_225d2c;
        }
    }
    ctx->pc = 0x225D24u;
    // 0x225d24: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x225d24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x225d28: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x225d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_225d2c:
    // 0x225d2c: 0xc060e80  jal         func_183A00
    ctx->pc = 0x225D2Cu;
    SET_GPR_U32(ctx, 31, 0x225D34u);
    ctx->pc = 0x225D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225D2Cu;
            // 0x225d30: 0xc60c0050  lwc1        $f12, 0x50($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x183A00u;
    if (runtime->hasFunction(0x183A00u)) {
        auto targetFn = runtime->lookupFunction(0x183A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225D34u; }
        if (ctx->pc != 0x225D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183a00_0x183ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225D34u; }
        if (ctx->pc != 0x225D34u) { return; }
    }
    ctx->pc = 0x225D34u;
    // 0x225d34: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x225d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x225d38: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x225d38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x225d3c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x225d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225d40: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x225d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x225d44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225d48: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x225d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x225d4c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x225d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x225d50: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x225d50u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x225d54: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x225d54u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x225d58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x225d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225d5c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x225d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x225d60: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x225d60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x225d64: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x225d64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x225d68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x225d68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x225d6c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x225d6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x225d70: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x225d70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x225d74: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x225d74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x225d78: 0x7a060020  lq          $a2, 0x20($s0)
    ctx->pc = 0x225d78u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x225d7c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x225d7cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x225d80: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x225d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x225d84: 0xc08981e  jal         func_226078
    ctx->pc = 0x225D84u;
    SET_GPR_U32(ctx, 31, 0x225D8Cu);
    ctx->pc = 0x225D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225D84u;
            // 0x225d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226078u;
    if (runtime->hasFunction(0x226078u)) {
        auto targetFn = runtime->lookupFunction(0x226078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225D8Cu; }
        if (ctx->pc != 0x225D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226078_0x226078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225D8Cu; }
        if (ctx->pc != 0x225D8Cu) { return; }
    }
    ctx->pc = 0x225D8Cu;
    // 0x225d8c: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x225d8cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x225d90: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x225d90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225d94: 0x8e83cd58  lw          $v1, -0x32A8($s4)
    ctx->pc = 0x225d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954328)));
    // 0x225d98: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x225d98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x225d9c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x225d9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x225da0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x225da0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225da4: 0xc6200178  lwc1        $f0, 0x178($s1)
    ctx->pc = 0x225da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225da8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x225da8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225dac: 0x0  nop
    ctx->pc = 0x225dacu;
    // NOP
    // 0x225db0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x225DB0u;
    {
        const bool branch_taken_0x225db0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225DB0u;
            // 0x225db4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225db0) {
            ctx->pc = 0x225E20u;
            goto label_225e20;
        }
    }
    ctx->pc = 0x225DB8u;
    // 0x225db8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x225db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x225dbc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x225dbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x225dc0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x225dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x225dc4: 0x40f809  jalr        $v0
    ctx->pc = 0x225DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x225DCCu);
        ctx->pc = 0x225DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225DC4u;
            // 0x225dc8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x225DCCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2259F0u: goto label_2259f0;
            case 0x225AA4u: goto label_225aa4;
            case 0x225AB8u: goto label_225ab8;
            case 0x225B38u: goto label_225b38;
            case 0x225BA8u: goto label_225ba8;
            case 0x225BBCu: goto label_225bbc;
            case 0x225BF8u: goto label_225bf8;
            case 0x225CE0u: goto label_225ce0;
            case 0x225D2Cu: goto label_225d2c;
            case 0x225E18u: goto label_225e18;
            case 0x225E20u: goto label_225e20;
            case 0x225E24u: goto label_225e24;
            case 0x225E28u: goto label_225e28;
            case 0x225E60u: goto label_225e60;
            case 0x225ED0u: goto label_225ed0;
            case 0x225F38u: goto label_225f38;
            case 0x225F3Cu: goto label_225f3c;
            case 0x225F60u: goto label_225f60;
            case 0x225F78u: goto label_225f78;
            case 0x226020u: goto label_226020;
            case 0x226028u: goto label_226028;
            case 0x226030u: goto label_226030;
            case 0x226050u: goto label_226050;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x225DCCu; }
            if (ctx->pc != 0x225DCCu) { return; }
        }
        }
    }
    ctx->pc = 0x225DCCu;
    // 0x225dcc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x225DCCu;
    {
        const bool branch_taken_0x225dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225DCCu;
            // 0x225dd0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225dcc) {
            ctx->pc = 0x225E24u;
            goto label_225e24;
        }
    }
    ctx->pc = 0x225DD4u;
    // 0x225dd4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x225dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x225dd8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x225dd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x225ddc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x225ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x225de0: 0x40f809  jalr        $v0
    ctx->pc = 0x225DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x225DE8u);
        ctx->pc = 0x225DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225DE0u;
            // 0x225de4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x225DE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2259F0u: goto label_2259f0;
            case 0x225AA4u: goto label_225aa4;
            case 0x225AB8u: goto label_225ab8;
            case 0x225B38u: goto label_225b38;
            case 0x225BA8u: goto label_225ba8;
            case 0x225BBCu: goto label_225bbc;
            case 0x225BF8u: goto label_225bf8;
            case 0x225CE0u: goto label_225ce0;
            case 0x225D2Cu: goto label_225d2c;
            case 0x225E18u: goto label_225e18;
            case 0x225E20u: goto label_225e20;
            case 0x225E24u: goto label_225e24;
            case 0x225E28u: goto label_225e28;
            case 0x225E60u: goto label_225e60;
            case 0x225ED0u: goto label_225ed0;
            case 0x225F38u: goto label_225f38;
            case 0x225F3Cu: goto label_225f3c;
            case 0x225F60u: goto label_225f60;
            case 0x225F78u: goto label_225f78;
            case 0x226020u: goto label_226020;
            case 0x226028u: goto label_226028;
            case 0x226030u: goto label_226030;
            case 0x226050u: goto label_226050;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x225DE8u; }
            if (ctx->pc != 0x225DE8u) { return; }
        }
        }
    }
    ctx->pc = 0x225DE8u;
    // 0x225de8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x225de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225dec: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x225decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x225df0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x225DF0u;
    {
        const bool branch_taken_0x225df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225df0) {
            ctx->pc = 0x225E18u;
            goto label_225e18;
        }
    }
    ctx->pc = 0x225DF8u;
    // 0x225df8: 0xc090d58  jal         func_243560
    ctx->pc = 0x225DF8u;
    SET_GPR_U32(ctx, 31, 0x225E00u);
    ctx->pc = 0x243560u;
    if (runtime->hasFunction(0x243560u)) {
        auto targetFn = runtime->lookupFunction(0x243560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225E00u; }
        if (ctx->pc != 0x225E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243560_0x243568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225E00u; }
        if (ctx->pc != 0x225E00u) { return; }
    }
    ctx->pc = 0x225E00u;
    // 0x225e00: 0xc4400178  lwc1        $f0, 0x178($v0)
    ctx->pc = 0x225e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225e04: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x225e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225e08: 0x0  nop
    ctx->pc = 0x225e08u;
    // NOP
    // 0x225e0c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x225E0Cu;
    {
        const bool branch_taken_0x225e0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x225e0c) {
            ctx->pc = 0x225E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x225E0Cu;
            // 0x225e10: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x225E18u;
            goto label_225e18;
        }
    }
    ctx->pc = 0x225E14u;
    // 0x225e14: 0x0  nop
    ctx->pc = 0x225e14u;
    // NOP
label_225e18:
    // 0x225e18: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x225E18u;
    {
        const bool branch_taken_0x225e18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x225e18) {
            ctx->pc = 0x225E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x225E18u;
            // 0x225e1c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x225E28u;
            goto label_225e28;
        }
    }
    ctx->pc = 0x225E20u;
label_225e20:
    // 0x225e20: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x225e20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225e24:
    // 0x225e24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x225e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_225e28:
    // 0x225e28: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x225e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x225e2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x225E2Cu;
    {
        const bool branch_taken_0x225e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225E2Cu;
            // 0x225e30: 0xc6a2c64c  lwc1        $f2, -0x39B4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e2c) {
            ctx->pc = 0x225E60u;
            goto label_225e60;
        }
    }
    ctx->pc = 0x225E34u;
    // 0x225e34: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x225e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225e38: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x225e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225e3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x225e3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x225e40: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x225e40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225e44: 0x0  nop
    ctx->pc = 0x225e44u;
    // NOP
    // 0x225e48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x225E48u;
    {
        const bool branch_taken_0x225e48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225E48u;
            // 0x225e4c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e48) {
            ctx->pc = 0x225E60u;
            goto label_225e60;
        }
    }
    ctx->pc = 0x225E50u;
    // 0x225e50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x225e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x225e54: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x225e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x225e58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x225e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x225e5c: 0x0  nop
    ctx->pc = 0x225e5cu;
    // NOP
label_225e60:
    // 0x225e60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x225e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225e64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x225e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x225e68: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x225E68u;
    {
        const bool branch_taken_0x225e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225e68) {
            ctx->pc = 0x225F60u;
            goto label_225f60;
        }
    }
    ctx->pc = 0x225E70u;
    // 0x225e70: 0xc0909c4  jal         func_242710
    ctx->pc = 0x225E70u;
    SET_GPR_U32(ctx, 31, 0x225E78u);
    ctx->pc = 0x225E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225E70u;
            // 0x225e74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225E78u; }
        if (ctx->pc != 0x225E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225E78u; }
        if (ctx->pc != 0x225E78u) { return; }
    }
    ctx->pc = 0x225E78u;
    // 0x225e78: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x225e78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x225e7c: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x225e7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x225e80: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x225e80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x225e84: 0x5660002d  bnel        $s3, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x225E84u;
    {
        const bool branch_taken_0x225e84 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x225e84) {
            ctx->pc = 0x225E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x225E84u;
            // 0x225e88: 0xc6010060  lwc1        $f1, 0x60($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x225F3Cu;
            goto label_225f3c;
        }
    }
    ctx->pc = 0x225E8Cu;
    // 0x225e8c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x225e8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x225e90: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x225e90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x225e94: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x225e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x225e98: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x225e98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x225e9c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x225e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x225ea0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225ea4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x225ea4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x225ea8: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x225ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225eac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x225eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x225eb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225eb4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x225eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x225eb8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x225eb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225ebc: 0x0  nop
    ctx->pc = 0x225ebcu;
    // NOP
    // 0x225ec0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x225EC0u;
    {
        const bool branch_taken_0x225ec0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x225EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225EC0u;
            // 0x225ec4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ec0) {
            ctx->pc = 0x225ED0u;
            goto label_225ed0;
        }
    }
    ctx->pc = 0x225EC8u;
    // 0x225ec8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ecc: 0x0  nop
    ctx->pc = 0x225eccu;
    // NOP
label_225ed0:
    // 0x225ed0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x225ED0u;
    {
        const bool branch_taken_0x225ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225ED0u;
            // 0x225ed4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ed0) {
            ctx->pc = 0x225F38u;
            goto label_225f38;
        }
    }
    ctx->pc = 0x225ED8u;
    // 0x225ed8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x225ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225edc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x225edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x225ee0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x225ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x225ee4: 0x8e82cd58  lw          $v0, -0x32A8($s4)
    ctx->pc = 0x225ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954328)));
    // 0x225ee8: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x225ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225eec: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x225eecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225ef0: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x225ef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x225ef4: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x225ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x225ef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225efc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x225efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x225f00: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x225f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x225f04: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x225f04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x225f08: 0xc0909c4  jal         func_242710
    ctx->pc = 0x225F08u;
    SET_GPR_U32(ctx, 31, 0x225F10u);
    ctx->pc = 0x225F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225F08u;
            // 0x225f0c: 0x7e020040  sq          $v0, 0x40($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F10u; }
        if (ctx->pc != 0x225F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F10u; }
        if (ctx->pc != 0x225F10u) { return; }
    }
    ctx->pc = 0x225F10u;
    // 0x225f10: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x225f10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x225f14: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x225f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x225f18: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x225f18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x225f1c: 0xc05e996  jal         func_17A658
    ctx->pc = 0x225F1Cu;
    SET_GPR_U32(ctx, 31, 0x225F24u);
    ctx->pc = 0x225F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225F1Cu;
            // 0x225f20: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F24u; }
        if (ctx->pc != 0x225F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F24u; }
        if (ctx->pc != 0x225F24u) { return; }
    }
    ctx->pc = 0x225F24u;
    // 0x225f24: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x225F24u;
    {
        const bool branch_taken_0x225f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225f24) {
            ctx->pc = 0x225F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x225F24u;
            // 0x225f28: 0xc6010060  lwc1        $f1, 0x60($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x225F3Cu;
            goto label_225f3c;
        }
    }
    ctx->pc = 0x225F2Cu;
    // 0x225f2c: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x225f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x225f30: 0xc05c294  jal         func_170A50
    ctx->pc = 0x225F30u;
    SET_GPR_U32(ctx, 31, 0x225F38u);
    ctx->pc = 0x225F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225F30u;
            // 0x225f34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F38u; }
        if (ctx->pc != 0x225F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F38u; }
        if (ctx->pc != 0x225F38u) { return; }
    }
    ctx->pc = 0x225F38u;
label_225f38:
    // 0x225f38: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x225f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225f3c:
    // 0x225f3c: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x225f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225f40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x225f44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x225f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x225f48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x225f48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x225f4c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x225f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225f50: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x225f50u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x225f54: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x225f54u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x225f58: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x225f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x225f5c: 0x0  nop
    ctx->pc = 0x225f5cu;
    // NOP
label_225f60:
    // 0x225f60: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x225F60u;
    {
        const bool branch_taken_0x225f60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x225F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225F60u;
            // 0x225f64: 0x2403fff9  addiu       $v1, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f60) {
            ctx->pc = 0x225F78u;
            goto label_225f78;
        }
    }
    ctx->pc = 0x225F68u;
    // 0x225f68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x225f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225f6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x225f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x225f70: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x225f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x225f74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x225f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_225f78:
    // 0x225f78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x225f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225f7c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x225f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x225f80: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x225F80u;
    {
        const bool branch_taken_0x225f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225F80u;
            // 0x225f84: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f80) {
            ctx->pc = 0x226028u;
            goto label_226028;
        }
    }
    ctx->pc = 0x225F88u;
    // 0x225f88: 0x8e22cd58  lw          $v0, -0x32A8($s1)
    ctx->pc = 0x225f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
    // 0x225f8c: 0xc0909c4  jal         func_242710
    ctx->pc = 0x225F8Cu;
    SET_GPR_U32(ctx, 31, 0x225F94u);
    ctx->pc = 0x225F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225F8Cu;
            // 0x225f90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F94u; }
        if (ctx->pc != 0x225F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F94u; }
        if (ctx->pc != 0x225F94u) { return; }
    }
    ctx->pc = 0x225F94u;
    // 0x225f94: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x225f94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x225f98: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x225f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x225f9c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x225f9cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x225fa0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x225fa0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x225fa4: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x225fa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x225fa8: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x225fa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x225fac: 0xfa020030  sqc2        $vf2, 0x30($s0)
    ctx->pc = 0x225facu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x225fb0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x225fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x225fb4: 0xc442c64c  lwc1        $f2, -0x39B4($v0)
    ctx->pc = 0x225fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x225fb8: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x225fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225fbc: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x225fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225fc0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x225fc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x225fc4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x225fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225fc8: 0x0  nop
    ctx->pc = 0x225fc8u;
    // NOP
    // 0x225fcc: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x225FCCu;
    {
        const bool branch_taken_0x225fcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225fcc) {
            ctx->pc = 0x225FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x225FCCu;
            // 0x225fd0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x226030u;
            goto label_226030;
        }
    }
    ctx->pc = 0x225FD4u;
    // 0x225fd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x225fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225fd8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x225fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x225fdc: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x225FDCu;
    {
        const bool branch_taken_0x225fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225fdc) {
            ctx->pc = 0x225FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x225FDCu;
            // 0x225fe0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x226020u;
            goto label_226020;
        }
    }
    ctx->pc = 0x225FE4u;
    // 0x225fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x225fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225fe8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x225fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x225fec: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x225fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x225ff0: 0x27a60044  addiu       $a2, $sp, 0x44
    ctx->pc = 0x225ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x225ff4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x225ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x225ff8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x225ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x225ffc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x225ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x226000: 0xc089626  jal         func_225898
    ctx->pc = 0x226000u;
    SET_GPR_U32(ctx, 31, 0x226008u);
    ctx->pc = 0x226004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226000u;
            // 0x226004: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x225898u;
    if (runtime->hasFunction(0x225898u)) {
        auto targetFn = runtime->lookupFunction(0x225898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226008u; }
        if (ctx->pc != 0x226008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_225898_0x225940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226008u; }
        if (ctx->pc != 0x226008u) { return; }
    }
    ctx->pc = 0x226008u;
    // 0x226008: 0x8e24cd58  lw          $a0, -0x32A8($s1)
    ctx->pc = 0x226008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
    // 0x22600c: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x22600cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226010: 0xc7ad0044  lwc1        $f13, 0x44($sp)
    ctx->pc = 0x226010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x226014: 0xc075afc  jal         func_1D6BF0
    ctx->pc = 0x226014u;
    SET_GPR_U32(ctx, 31, 0x22601Cu);
    ctx->pc = 0x226018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226014u;
            // 0x226018: 0xc7ae0048  lwc1        $f14, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6BF0u;
    if (runtime->hasFunction(0x1D6BF0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22601Cu; }
        if (ctx->pc != 0x22601Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6BF0_0x1d6bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22601Cu; }
        if (ctx->pc != 0x22601Cu) { return; }
    }
    ctx->pc = 0x22601Cu;
    // 0x22601c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_226020:
    // 0x226020: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x226020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x226024: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x226024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_226028:
    // 0x226028: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x226028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22602c: 0x0  nop
    ctx->pc = 0x22602cu;
    // NOP
label_226030:
    // 0x226030: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x226030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x226034: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x226034u;
    {
        const bool branch_taken_0x226034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226034) {
            ctx->pc = 0x226038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x226034u;
            // 0x226038: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x226050u;
            goto label_226050;
        }
    }
    ctx->pc = 0x22603Cu;
    // 0x22603c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x22603cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x226040: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x226040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x226044: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x226044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x226048: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x226048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22604c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x22604cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_226050:
    // 0x226050: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x226050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x226054: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x226054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x226058: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x226058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22605c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x22605cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x226060: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x226060u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x226064: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x226064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226068: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x226068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22606c: 0x3e00008  jr          $ra
    ctx->pc = 0x22606Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22606Cu;
            // 0x226070: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2259F0u: goto label_2259f0;
            case 0x225AA4u: goto label_225aa4;
            case 0x225AB8u: goto label_225ab8;
            case 0x225B38u: goto label_225b38;
            case 0x225BA8u: goto label_225ba8;
            case 0x225BBCu: goto label_225bbc;
            case 0x225BF8u: goto label_225bf8;
            case 0x225CE0u: goto label_225ce0;
            case 0x225D2Cu: goto label_225d2c;
            case 0x225E18u: goto label_225e18;
            case 0x225E20u: goto label_225e20;
            case 0x225E24u: goto label_225e24;
            case 0x225E28u: goto label_225e28;
            case 0x225E60u: goto label_225e60;
            case 0x225ED0u: goto label_225ed0;
            case 0x225F38u: goto label_225f38;
            case 0x225F3Cu: goto label_225f3c;
            case 0x225F60u: goto label_225f60;
            case 0x225F78u: goto label_225f78;
            case 0x226020u: goto label_226020;
            case 0x226028u: goto label_226028;
            case 0x226030u: goto label_226030;
            case 0x226050u: goto label_226050;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226074u;
    // 0x226074: 0x0  nop
    ctx->pc = 0x226074u;
    // NOP
}
