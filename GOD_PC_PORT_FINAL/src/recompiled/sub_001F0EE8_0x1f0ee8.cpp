#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F0EE8
// Address: 0x1f0ee8 - 0x1f1538
void sub_001F0EE8_0x1f0ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0EE8_0x1f0ee8");
#endif

    ctx->pc = 0x1f0ee8u;

    // 0x1f0ee8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1f0ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1f0eec: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1f0eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1f0ef0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1f0ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1f0ef4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ef8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1f0ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1f0efc: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1f0efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1f0f00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f0f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0f04: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1f0f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x1f0f08: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f0f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0f0c: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x1f0f0cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1f0f10: 0x7006a4a9  por         $s4, $zero, $a2
    ctx->pc = 0x1f0f10u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x1f0f14: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f0f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1f0f18: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x1f0f18u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1f0f1c: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x1f0f1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1f0f20: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1f0f20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1f0f24: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1f0f24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1f0f28: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1f0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f0f2c: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1f0f2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1f0f30: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x1f0f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1f0f34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0f38: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0F38u;
    {
        const bool branch_taken_0x1f0f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F38u;
            // 0x1f0f3c: 0x460065c6  mov.s       $f23, $f12 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f38) {
            ctx->pc = 0x1F0F48u;
            goto label_1f0f48;
        }
    }
    ctx->pc = 0x1F0F40u;
    // 0x1f0f40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F0F40u;
    {
        const bool branch_taken_0x1f0f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F40u;
            // 0x1f0f44: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f40) {
            ctx->pc = 0x1F0F68u;
            goto label_1f0f68;
        }
    }
    ctx->pc = 0x1F0F48u;
label_1f0f48:
    // 0x1f0f48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f0f4c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1f0f4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1f0f50: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1f0f50u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1f0f54: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0F54u;
    {
        const bool branch_taken_0x1f0f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F0F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F54u;
            // 0x1f0f58: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f54) {
            ctx->pc = 0x1F0F68u;
            goto label_1f0f68;
        }
    }
    ctx->pc = 0x1F0F5Cu;
    // 0x1f0f5c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1F0F5Cu;
    SET_GPR_U32(ctx, 31, 0x1F0F64u);
    ctx->pc = 0x1F0F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F5Cu;
            // 0x1f0f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F64u; }
        if (ctx->pc != 0x1F0F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F64u; }
        if (ctx->pc != 0x1F0F64u) { return; }
    }
    ctx->pc = 0x1F0F64u;
    // 0x1f0f64: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x1f0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1f0f68:
    // 0x1f0f68: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1f0f68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f0f6c: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1f0f6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f0f70: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1f0f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0f74: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1f0f74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f0f78: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x1f0f78u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f0f7c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x1f0f7cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f0f80: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1f0f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0f84: 0xc07c0ca  jal         func_1F0328
    ctx->pc = 0x1F0F84u;
    SET_GPR_U32(ctx, 31, 0x1F0F8Cu);
    ctx->pc = 0x1F0F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F84u;
            // 0x1f0f88: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0328u;
    if (runtime->hasFunction(0x1F0328u)) {
        auto targetFn = runtime->lookupFunction(0x1F0328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F8Cu; }
        if (ctx->pc != 0x1F0F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0328_0x1f0328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F8Cu; }
        if (ctx->pc != 0x1F0F8Cu) { return; }
    }
    ctx->pc = 0x1F0F8Cu;
    // 0x1f0f8c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1f0f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0f90: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1f0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1f0f94: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1f0f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1f0f98: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f0f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f0f9c: 0x24445570  addiu       $a0, $v0, 0x5570
    ctx->pc = 0x1f0f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21872));
    // 0x1f0fa0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1f0fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0fa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0fa8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1f0fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1f0fac: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1f0facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0fb0: 0xac525570  sw          $s2, 0x5570($v0)
    ctx->pc = 0x1f0fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21872), GPR_U32(ctx, 18));
    // 0x1f0fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0fb8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f0fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1f0fbc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1f0fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1f0fc0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1f0fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0fc4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1f0fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1f0fc8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1f0fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1f0fcc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1f0fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0fd0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f0fd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f0fd4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1f0fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1f0fd8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1f0fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0fdc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f0fdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0fe0: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x1f0fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1f0fe4: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1f0fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0fe8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1f0fe8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1f0fec: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1f0fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1f0ff0: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1f0ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0ff4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f0ff4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1f0ff8: 0x1660001a  bnez        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F0FF8u;
    {
        const bool branch_taken_0x1f0ff8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0FF8u;
            // 0x1f0ffc: 0xe482001c  swc1        $f2, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ff8) {
            ctx->pc = 0x1F1064u;
            goto label_1f1064;
        }
    }
    ctx->pc = 0x1F1000u;
    // 0x1f1000: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f1000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1f1004: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x1f1004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1008: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f1008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f100c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f100cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1010: 0x245306c8  addiu       $s3, $v0, 0x6C8
    ctx->pc = 0x1f1010u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1736));
    // 0x1f1014: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1f1014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f1018: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f1018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f101c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f101cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1020: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1f1020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1f1024: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1024u;
    {
        const bool branch_taken_0x1f1024 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F1028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1024u;
            // 0x1f1028: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1024) {
            ctx->pc = 0x1F1048u;
            goto label_1f1048;
        }
    }
    ctx->pc = 0x1F102Cu;
    // 0x1f102c: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x1f102cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1030: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1f1030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1f1034: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f1034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1038: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f1038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f103c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1F103Cu;
    {
        const bool branch_taken_0x1f103c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f103c) {
            ctx->pc = 0x1F1064u;
            goto label_1f1064;
        }
    }
    ctx->pc = 0x1F1044u;
    // 0x1f1044: 0x0  nop
    ctx->pc = 0x1f1044u;
    // NOP
label_1f1048:
    // 0x1f1048: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1f1048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f104c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f104cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f1050: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1f1050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1f1054: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1054u;
    {
        const bool branch_taken_0x1f1054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1054u;
            // 0x1f1058: 0x24730a90  addiu       $s3, $v1, 0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1054) {
            ctx->pc = 0x1F1064u;
            goto label_1f1064;
        }
    }
    ctx->pc = 0x1F105Cu;
    // 0x1f105c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f105cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1f1060: 0x24530738  addiu       $s3, $v0, 0x738
    ctx->pc = 0x1f1060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1848));
label_1f1064:
    // 0x1f1064: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F1064u;
    {
        const bool branch_taken_0x1f1064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1064u;
            // 0x1f1068: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1064) {
            ctx->pc = 0x1F109Cu;
            goto label_1f109c;
        }
    }
    ctx->pc = 0x1F106Cu;
    // 0x1f106c: 0x8c42e2c4  lw          $v0, -0x1D3C($v0)
    ctx->pc = 0x1f106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959812)));
    // 0x1f1070: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1f1070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f1074: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F1074u;
    {
        const bool branch_taken_0x1f1074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1074u;
            // 0x1f1078: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1074) {
            ctx->pc = 0x1F10A0u;
            goto label_1f10a0;
        }
    }
    ctx->pc = 0x1F107Cu;
    // 0x1f107c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1f107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f1080: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1f1080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1f1084: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f1084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f1088: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1088u;
    {
        const bool branch_taken_0x1f1088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F108Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1088u;
            // 0x1f108c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1088) {
            ctx->pc = 0x1F109Cu;
            goto label_1f109c;
        }
    }
    ctx->pc = 0x1F1090u;
    // 0x1f1090: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f1090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f1094: 0xac53e2b8  sw          $s3, -0x1D48($v0)
    ctx->pc = 0x1f1094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959800), GPR_U32(ctx, 19));
    // 0x1f1098: 0x24730e18  addiu       $s3, $v1, 0xE18
    ctx->pc = 0x1f1098u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 3608));
label_1f109c:
    // 0x1f109c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f109cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1f10a0:
    // 0x1f10a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f10a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f10a4: 0xc442e2c0  lwc1        $f2, -0x1D40($v0)
    ctx->pc = 0x1f10a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f10a8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1f10a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1f10ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f10acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f10b0: 0x4602b840  add.s       $f1, $f23, $f2
    ctx->pc = 0x1f10b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
    // 0x1f10b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f10b8: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1f10b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f10bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f10bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f10c0: 0x0  nop
    ctx->pc = 0x1f10c0u;
    // NOP
    // 0x1f10c4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1F10C4u;
    {
        const bool branch_taken_0x1f10c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F10C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F10C4u;
            // 0x1f10c8: 0x46001546  mov.s       $f21, $f2 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f10c4) {
            ctx->pc = 0x1F10E4u;
            goto label_1f10e4;
        }
    }
    ctx->pc = 0x1F10CCu;
    // 0x1f10cc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f10d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f10d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f10d4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F10D4u;
    {
        const bool branch_taken_0x1f10d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f10d4) {
            ctx->pc = 0x1F10D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F10D4u;
            // 0x1f10d8: 0x46001087  neg.s       $f2, $f2 (Delay Slot)
        ctx->f[2] = FPU_NEG_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F10E0u;
            goto label_1f10e0;
        }
    }
    ctx->pc = 0x1F10DCu;
    // 0x1f10dc: 0x0  nop
    ctx->pc = 0x1f10dcu;
    // NOP
label_1f10e0:
    // 0x1f10e0: 0x46001546  mov.s       $f21, $f2
    ctx->pc = 0x1f10e0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[2]);
label_1f10e4:
    // 0x1f10e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f10e8: 0x4600bd06  mov.s       $f20, $f23
    ctx->pc = 0x1f10e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[23]);
    // 0x1f10ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f10ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f10f0: 0x4615a040  add.s       $f1, $f20, $f21
    ctx->pc = 0x1f10f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x1f10f4: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1f10f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f10f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f10f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f10fc: 0x0  nop
    ctx->pc = 0x1f10fcu;
    // NOP
    // 0x1f1100: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1100u;
    {
        const bool branch_taken_0x1f1100 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1100) {
            ctx->pc = 0x1F1104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1100u;
            // 0x1f1104: 0x4617b842  mul.s       $f1, $f23, $f23 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F111Cu;
            goto label_1f111c;
        }
    }
    ctx->pc = 0x1F1108u;
    // 0x1f1108: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f1108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f110c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f110cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f1110: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F1110u;
    {
        const bool branch_taken_0x1f1110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1110) {
            ctx->pc = 0x1F1114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1110u;
            // 0x1f1114: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1118u;
            goto label_1f1118;
        }
    }
    ctx->pc = 0x1F1118u;
label_1f1118:
    // 0x1f1118: 0x4617b842  mul.s       $f1, $f23, $f23
    ctx->pc = 0x1f1118u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
label_1f111c:
    // 0x1f111c: 0x46170802  mul.s       $f0, $f1, $f23
    ctx->pc = 0x1f111cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x1f1120: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f1120u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f1124: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1f1124u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1f1128: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1f1128u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f112c: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x1f112cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x1f1130: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x1f1130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f1134: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x1f1134u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x1f1138: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1f1138u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f113c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f113cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f1140: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1f1140u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f1144: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1f1144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1f1148: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1f1148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1f114c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1f114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f1150: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F1150u;
    {
        const bool branch_taken_0x1f1150 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F1154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1150u;
            // 0x1f1154: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1150) {
            ctx->pc = 0x1F11A0u;
            goto label_1f11a0;
        }
    }
    ctx->pc = 0x1F1158u;
    // 0x1f1158: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1f1158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1f115c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1160: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x1f1160u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1164: 0x0  nop
    ctx->pc = 0x1f1164u;
    // NOP
    // 0x1f1168: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x1F1168u;
    {
        const bool branch_taken_0x1f1168 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1168) {
            ctx->pc = 0x1F116Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1168u;
            // 0x1f116c: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F11A4u;
            goto label_1f11a4;
        }
    }
    ctx->pc = 0x1F1170u;
    // 0x1f1170: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f1170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f1174: 0x0  nop
    ctx->pc = 0x1f1174u;
    // NOP
label_1f1178:
    // 0x1f1178: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1f1178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f117c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f117cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f1180: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1180u;
    {
        const bool branch_taken_0x1f1180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1180u;
            // 0x1f1184: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1180) {
            ctx->pc = 0x1F11A0u;
            goto label_1f11a0;
        }
    }
    ctx->pc = 0x1F1188u;
    // 0x1f1188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f1188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f118c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1190: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x1f1190u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1194: 0x0  nop
    ctx->pc = 0x1f1194u;
    // NOP
    // 0x1f1198: 0x4502fff7  bc1fl       . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F1198u;
    {
        const bool branch_taken_0x1f1198 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1198) {
            ctx->pc = 0x1F119Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1198u;
            // 0x1f119c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1178u;
            runtime->cooperativeGuestYield();
            goto label_1f1178;
        }
    }
    ctx->pc = 0x1F11A0u;
label_1f11a0:
    // 0x1f11a0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1f11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f11a4:
    // 0x1f11a4: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x1f11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1f11a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f11ac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f11acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f11b0: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x1f11b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f11b4: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x1f11b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f11b8: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1f11b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f11bc: 0x4be308bd  vmadday.xyzw $ACC, $vf1, $vf3y
    ctx->pc = 0x1f11bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f11c0: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1f11c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f11c4: 0x4be308be  vmaddaz.xyzw $ACC, $vf1, $vf3z
    ctx->pc = 0x1f11c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f11c8: 0x4be3108b  vmaddw.xyzw $vf2, $vf2, $vf3w
    ctx->pc = 0x1f11c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f11cc: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1f11ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f11d0: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x1f11d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f11d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f11d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f11d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f11d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f11dc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1f11dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f11e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f11e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f11e4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f11e4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f11e8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1f11e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1f11ec: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1f11ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1f11f0: 0x4be110d8  vmulx.xyzw  $vf3, $vf2, $vf1x
    ctx->pc = 0x1f11f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f11f4: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x1f11f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f11f8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1f11f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1f11fc: 0x701424a9  por         $a0, $zero, $s4
    ctx->pc = 0x1f11fcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 20)));
    // 0x1f1200: 0x260f809  jalr        $s3
    ctx->pc = 0x1F1200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x1F1208u);
        ctx->pc = 0x1F1204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1200u;
            // 0x1f1204: 0x7ba50080  lq          $a1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F1208u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0F48u: goto label_1f0f48;
            case 0x1F0F68u: goto label_1f0f68;
            case 0x1F1048u: goto label_1f1048;
            case 0x1F1064u: goto label_1f1064;
            case 0x1F109Cu: goto label_1f109c;
            case 0x1F10A0u: goto label_1f10a0;
            case 0x1F10E0u: goto label_1f10e0;
            case 0x1F10E4u: goto label_1f10e4;
            case 0x1F1118u: goto label_1f1118;
            case 0x1F111Cu: goto label_1f111c;
            case 0x1F1178u: goto label_1f1178;
            case 0x1F11A0u: goto label_1f11a0;
            case 0x1F11A4u: goto label_1f11a4;
            case 0x1F1210u: goto label_1f1210;
            case 0x1F1248u: goto label_1f1248;
            case 0x1F1258u: goto label_1f1258;
            case 0x1F1270u: goto label_1f1270;
            case 0x1F128Cu: goto label_1f128c;
            case 0x1F12A0u: goto label_1f12a0;
            case 0x1F12F8u: goto label_1f12f8;
            case 0x1F1320u: goto label_1f1320;
            case 0x1F1324u: goto label_1f1324;
            case 0x1F13C0u: goto label_1f13c0;
            case 0x1F13E8u: goto label_1f13e8;
            case 0x1F1414u: goto label_1f1414;
            case 0x1F1424u: goto label_1f1424;
            case 0x1F1430u: goto label_1f1430;
            case 0x1F1478u: goto label_1f1478;
            case 0x1F14B8u: goto label_1f14b8;
            case 0x1F14C8u: goto label_1f14c8;
            case 0x1F14E0u: goto label_1f14e0;
            case 0x1F14F8u: goto label_1f14f8;
            case 0x1F1508u: goto label_1f1508;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F1208u; }
            if (ctx->pc != 0x1F1208u) { return; }
        }
        }
    }
    ctx->pc = 0x1F1208u;
    // 0x1f1208: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x1f1208u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x1f120c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f120cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f1210:
    // 0x1f1210: 0x4615a580  add.s       $f22, $f20, $f21
    ctx->pc = 0x1f1210u;
    ctx->f[22] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x1f1214: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1f1214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1f1218: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f1218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f121c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1f121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f1220: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f1220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f1224: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f1224u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f1228: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f1228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f122c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F122Cu;
    {
        const bool branch_taken_0x1f122c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F122Cu;
            // 0x1f1230: 0xc441fffc  lwc1        $f1, -0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f122c) {
            ctx->pc = 0x1F128Cu;
            goto label_1f128c;
        }
    }
    ctx->pc = 0x1F1234u;
    // 0x1f1234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1238: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1f1238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f123c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F123Cu;
    {
        const bool branch_taken_0x1f123c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f123c) {
            ctx->pc = 0x1F1258u;
            goto label_1f1258;
        }
    }
    ctx->pc = 0x1F1244u;
    // 0x1f1244: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x1f1244u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_1f1248:
    // 0x1f1248: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1f1248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f124c: 0x0  nop
    ctx->pc = 0x1f124cu;
    // NOP
    // 0x1f1250: 0x4503fffd  bc1tl       . + 4 + (-0x3 << 2)
    ctx->pc = 0x1F1250u;
    {
        const bool branch_taken_0x1f1250 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1250) {
            ctx->pc = 0x1F1254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1250u;
            // 0x1f1254: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1248u;
            runtime->cooperativeGuestYield();
            goto label_1f1248;
        }
    }
    ctx->pc = 0x1F1258u;
label_1f1258:
    // 0x1f1258: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1f1258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f125c: 0x0  nop
    ctx->pc = 0x1f125cu;
    // NOP
    // 0x1f1260: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x1F1260u;
    {
        const bool branch_taken_0x1f1260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1260) {
            ctx->pc = 0x1F1264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1260u;
            // 0x1f1264: 0x460c6042  mul.s       $f1, $f12, $f12 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F12A0u;
            goto label_1f12a0;
        }
    }
    ctx->pc = 0x1F1268u;
    // 0x1f1268: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x1f1268u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1f126c: 0x0  nop
    ctx->pc = 0x1f126cu;
    // NOP
label_1f1270:
    // 0x1f1270: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1f1270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1274: 0x0  nop
    ctx->pc = 0x1f1274u;
    // NOP
    // 0x1f1278: 0x0  nop
    ctx->pc = 0x1f1278u;
    // NOP
    // 0x1f127c: 0x4503fffc  bc1tl       . + 4 + (-0x4 << 2)
    ctx->pc = 0x1F127Cu;
    {
        const bool branch_taken_0x1f127c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f127c) {
            ctx->pc = 0x1F1280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F127Cu;
            // 0x1f1280: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1270u;
            runtime->cooperativeGuestYield();
            goto label_1f1270;
        }
    }
    ctx->pc = 0x1F1284u;
    // 0x1f1284: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1284u;
    {
        const bool branch_taken_0x1f1284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1284u;
            // 0x1f1288: 0x460c6042  mul.s       $f1, $f12, $f12 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1284) {
            ctx->pc = 0x1F12A0u;
            goto label_1f12a0;
        }
    }
    ctx->pc = 0x1F128Cu;
label_1f128c:
    // 0x1f128c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f128cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1290: 0x4600b028  max.s       $f0, $f22, $f0
    ctx->pc = 0x1f1290u;
    ctx->f[0] = std::max(ctx->f[22], ctx->f[0]);
    // 0x1f1294: 0x46010329  min.s       $f12, $f0, $f1
    ctx->pc = 0x1f1294u;
    ctx->f[12] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1f1298: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x1f1298u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1f129c: 0x0  nop
    ctx->pc = 0x1f129cu;
    // NOP
label_1f12a0:
    // 0x1f12a0: 0x460c0802  mul.s       $f0, $f1, $f12
    ctx->pc = 0x1f12a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1f12a4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f12a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f12a8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1f12a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1f12ac: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1f12acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f12b0: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x1f12b0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x1f12b4: 0x44066000  mfc1        $a2, $f12
    ctx->pc = 0x1f12b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f12b8: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x1f12b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x1f12bc: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1f12bcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f12c0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f12c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f12c4: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1f12c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f12c8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f12c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1f12cc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1f12ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1f12d0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1f12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f12d4: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F12D4u;
    {
        const bool branch_taken_0x1f12d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F12D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F12D4u;
            // 0x1f12d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12d4) {
            ctx->pc = 0x1F1320u;
            goto label_1f1320;
        }
    }
    ctx->pc = 0x1F12DCu;
    // 0x1f12dc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1f12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1f12e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f12e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f12e4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1f12e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f12e8: 0x0  nop
    ctx->pc = 0x1f12e8u;
    // NOP
    // 0x1f12ec: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x1F12ECu;
    {
        const bool branch_taken_0x1f12ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f12ec) {
            ctx->pc = 0x1F12F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F12ECu;
            // 0x1f12f0: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1324u;
            goto label_1f1324;
        }
    }
    ctx->pc = 0x1F12F4u;
    // 0x1f12f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f12f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f12f8:
    // 0x1f12f8: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1f12f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f12fc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f12fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f1300: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1300u;
    {
        const bool branch_taken_0x1f1300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1300u;
            // 0x1f1304: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1300) {
            ctx->pc = 0x1F1320u;
            goto label_1f1320;
        }
    }
    ctx->pc = 0x1F1308u;
    // 0x1f1308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f1308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f130c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1310: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1f1310u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1314: 0x0  nop
    ctx->pc = 0x1f1314u;
    // NOP
    // 0x1f1318: 0x4502fff7  bc1fl       . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F1318u;
    {
        const bool branch_taken_0x1f1318 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1318) {
            ctx->pc = 0x1F131Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1318u;
            // 0x1f131c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F12F8u;
            runtime->cooperativeGuestYield();
            goto label_1f12f8;
        }
    }
    ctx->pc = 0x1F1320u;
label_1f1320:
    // 0x1f1320: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1f1320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f1324:
    // 0x1f1324: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x1f1324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1f1328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f1328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f132c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f132cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1330: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x1f1330u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f1334: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x1f1334u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1338: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1f1338u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f133c: 0x4be308bd  vmadday.xyzw $ACC, $vf1, $vf3y
    ctx->pc = 0x1f133cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f1340: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1f1340u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f1344: 0x4be308be  vmaddaz.xyzw $ACC, $vf1, $vf3z
    ctx->pc = 0x1f1344u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f1348: 0x4be3108b  vmaddw.xyzw $vf2, $vf2, $vf3w
    ctx->pc = 0x1f1348u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f134c: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1f134cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f1350: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x1f1350u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f1354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f1354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f1358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f1358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f135c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1f135cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f1360: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f1360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1364: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f1364u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f1368: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1f1368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1f136c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1f136cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1f1370: 0x4be110d8  vmulx.xyzw  $vf3, $vf2, $vf1x
    ctx->pc = 0x1f1370u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f1374: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x1f1374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f1378: 0x701424a9  por         $a0, $zero, $s4
    ctx->pc = 0x1f1378u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 20)));
    // 0x1f137c: 0x260f809  jalr        $s3
    ctx->pc = 0x1F137Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x1F1384u);
        ctx->pc = 0x1F1380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F137Cu;
            // 0x1f1380: 0x7ba50090  lq          $a1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F1384u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0F48u: goto label_1f0f48;
            case 0x1F0F68u: goto label_1f0f68;
            case 0x1F1048u: goto label_1f1048;
            case 0x1F1064u: goto label_1f1064;
            case 0x1F109Cu: goto label_1f109c;
            case 0x1F10A0u: goto label_1f10a0;
            case 0x1F10E0u: goto label_1f10e0;
            case 0x1F10E4u: goto label_1f10e4;
            case 0x1F1118u: goto label_1f1118;
            case 0x1F111Cu: goto label_1f111c;
            case 0x1F1178u: goto label_1f1178;
            case 0x1F11A0u: goto label_1f11a0;
            case 0x1F11A4u: goto label_1f11a4;
            case 0x1F1210u: goto label_1f1210;
            case 0x1F1248u: goto label_1f1248;
            case 0x1F1258u: goto label_1f1258;
            case 0x1F1270u: goto label_1f1270;
            case 0x1F128Cu: goto label_1f128c;
            case 0x1F12A0u: goto label_1f12a0;
            case 0x1F12F8u: goto label_1f12f8;
            case 0x1F1320u: goto label_1f1320;
            case 0x1F1324u: goto label_1f1324;
            case 0x1F13C0u: goto label_1f13c0;
            case 0x1F13E8u: goto label_1f13e8;
            case 0x1F1414u: goto label_1f1414;
            case 0x1F1424u: goto label_1f1424;
            case 0x1F1430u: goto label_1f1430;
            case 0x1F1478u: goto label_1f1478;
            case 0x1F14B8u: goto label_1f14b8;
            case 0x1F14C8u: goto label_1f14c8;
            case 0x1F14E0u: goto label_1f14e0;
            case 0x1F14F8u: goto label_1f14f8;
            case 0x1F1508u: goto label_1f1508;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F1384u; }
            if (ctx->pc != 0x1F1384u) { return; }
        }
        }
    }
    ctx->pc = 0x1F1384u;
    // 0x1f1384: 0xdba20080  lqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1f1384u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f1388: 0xdba30090  lqc2        $vf3, 0x90($sp)
    ctx->pc = 0x1f1388u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f138c: 0x4be3106c  vsub.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x1f138cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f1390: 0x4617a041  sub.s       $f1, $f20, $f23
    ctx->pc = 0x1f1390u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
    // 0x1f1394: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1f1394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f1398: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1f1398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f139c: 0x0  nop
    ctx->pc = 0x1f139cu;
    // NOP
    // 0x1f13a0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1F13A0u;
    {
        const bool branch_taken_0x1f13a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F13A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F13A0u;
            // 0x1f13a4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13a0) {
            ctx->pc = 0x1F13C0u;
            goto label_1f13c0;
        }
    }
    ctx->pc = 0x1F13A8u;
    // 0x1f13a8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1f13a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f13ac: 0x0  nop
    ctx->pc = 0x1f13acu;
    // NOP
    // 0x1f13b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F13B0u;
    {
        const bool branch_taken_0x1f13b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F13B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F13B0u;
            // 0x1f13b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13b0) {
            ctx->pc = 0x1F13C0u;
            goto label_1f13c0;
        }
    }
    ctx->pc = 0x1F13B8u;
    // 0x1f13b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f13bc: 0x0  nop
    ctx->pc = 0x1f13bcu;
    // NOP
label_1f13c0:
    // 0x1f13c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f13c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f13c4: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x1f13c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f13c8: 0x0  nop
    ctx->pc = 0x1f13c8u;
    // NOP
    // 0x1f13cc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F13CCu;
    {
        const bool branch_taken_0x1f13cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F13D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F13CCu;
            // 0x1f13d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13cc) {
            ctx->pc = 0x1F13E8u;
            goto label_1f13e8;
        }
    }
    ctx->pc = 0x1F13D4u;
    // 0x1f13d4: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1f13d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f13d8: 0x0  nop
    ctx->pc = 0x1f13d8u;
    // NOP
    // 0x1f13dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F13DCu;
    {
        const bool branch_taken_0x1f13dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F13E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F13DCu;
            // 0x1f13e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13dc) {
            ctx->pc = 0x1F13E8u;
            goto label_1f13e8;
        }
    }
    ctx->pc = 0x1F13E4u;
    // 0x1f13e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f13e8:
    // 0x1f13e8: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1f13e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f13ec: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1F13ECu;
    {
        const bool branch_taken_0x1f13ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f13ec) {
            ctx->pc = 0x1F1414u;
            goto label_1f1414;
        }
    }
    ctx->pc = 0x1F13F4u;
    // 0x1f13f4: 0x46180032  c.eq.s      $f0, $f24
    ctx->pc = 0x1f13f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f13f8: 0x0  nop
    ctx->pc = 0x1f13f8u;
    // NOP
    // 0x1f13fc: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1F13FCu;
    {
        const bool branch_taken_0x1f13fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f13fc) {
            ctx->pc = 0x1F1400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F13FCu;
            // 0x1f1400: 0x7ba20090  lq          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1424u;
            goto label_1f1424;
        }
    }
    ctx->pc = 0x1F1404u;
    // 0x1f1404: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1404u;
    {
        const bool branch_taken_0x1f1404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f1404) {
            ctx->pc = 0x1F1414u;
            goto label_1f1414;
        }
    }
    ctx->pc = 0x1F140Cu;
    // 0x1f140c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F140Cu;
    {
        const bool branch_taken_0x1f140c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F140Cu;
            // 0x1f1410: 0x7ba20090  lq          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f140c) {
            ctx->pc = 0x1F1424u;
            goto label_1f1424;
        }
    }
    ctx->pc = 0x1F1414u;
label_1f1414:
    // 0x1f1414: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1f1414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1f1418: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f1418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f141c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F141Cu;
    {
        const bool branch_taken_0x1f141c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F141Cu;
            // 0x1f1420: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f141c) {
            ctx->pc = 0x1F1430u;
            goto label_1f1430;
        }
    }
    ctx->pc = 0x1F1424u;
label_1f1424:
    // 0x1f1424: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x1f1424u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x1f1428: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x1f1428u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x1f142c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1f142cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_1f1430:
    // 0x1f1430: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1f1430u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f1434: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f1434u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1438: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1f1438u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f143c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f143cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f1440: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f1440u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f1444: 0xc441e2bc  lwc1        $f1, -0x1D44($v0)
    ctx->pc = 0x1f1444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1448: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1f1448u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f144c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f144cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1450: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f1450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1454: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1454u;
    {
        const bool branch_taken_0x1f1454 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1454) {
            ctx->pc = 0x1F1478u;
            goto label_1f1478;
        }
    }
    ctx->pc = 0x1F145Cu;
    // 0x1f145c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f145cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1460: 0x4600a805  abs.s       $f0, $f21
    ctx->pc = 0x1f1460u;
    ctx->f[0] = FPU_ABS_S(ctx->f[21]);
    // 0x1f1464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f1464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1468: 0x0  nop
    ctx->pc = 0x1f1468u;
    // NOP
    // 0x1f146c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1F146Cu;
    {
        const bool branch_taken_0x1f146c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f146c) {
            ctx->pc = 0x1F1470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F146Cu;
            // 0x1f1470: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1478u;
            goto label_1f1478;
        }
    }
    ctx->pc = 0x1F1474u;
    // 0x1f1474: 0x0  nop
    ctx->pc = 0x1f1474u;
    // NOP
label_1f1478:
    // 0x1f1478: 0x1460ff65  bnez        $v1, . + 4 + (-0x9B << 2)
    ctx->pc = 0x1F1478u;
    {
        const bool branch_taken_0x1f1478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F147Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1478u;
            // 0x1f147c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1478) {
            ctx->pc = 0x1F1210u;
            runtime->cooperativeGuestYield();
            goto label_1f1210;
        }
    }
    ctx->pc = 0x1F1480u;
    // 0x1f1480: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1f1480u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x1f1484: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1f1484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1f1488: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f1488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f148c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1f148cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f1490: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f1490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f1494: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f1494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f1498: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F1498u;
    {
        const bool branch_taken_0x1f1498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F149Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1498u;
            // 0x1f149c: 0xc441fffc  lwc1        $f1, -0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1498) {
            ctx->pc = 0x1F14F8u;
            goto label_1f14f8;
        }
    }
    ctx->pc = 0x1F14A0u;
    // 0x1f14a0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1f14a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f14a4: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x1f14a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f14a8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1F14A8u;
    {
        const bool branch_taken_0x1f14a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f14a8) {
            ctx->pc = 0x1F14C8u;
            goto label_1f14c8;
        }
    }
    ctx->pc = 0x1F14B0u;
    // 0x1f14b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f14b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f14b4: 0x0  nop
    ctx->pc = 0x1f14b4u;
    // NOP
label_1f14b8:
    // 0x1f14b8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1f14b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f14bc: 0x0  nop
    ctx->pc = 0x1f14bcu;
    // NOP
    // 0x1f14c0: 0x4503fffd  bc1tl       . + 4 + (-0x3 << 2)
    ctx->pc = 0x1F14C0u;
    {
        const bool branch_taken_0x1f14c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f14c0) {
            ctx->pc = 0x1F14C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F14C0u;
            // 0x1f14c4: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F14B8u;
            runtime->cooperativeGuestYield();
            goto label_1f14b8;
        }
    }
    ctx->pc = 0x1F14C8u;
label_1f14c8:
    // 0x1f14c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f14c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f14cc: 0x0  nop
    ctx->pc = 0x1f14ccu;
    // NOP
    // 0x1f14d0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1F14D0u;
    {
        const bool branch_taken_0x1f14d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F14D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F14D0u;
            // 0x1f14d4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f14d0) {
            ctx->pc = 0x1F1508u;
            goto label_1f1508;
        }
    }
    ctx->pc = 0x1F14D8u;
    // 0x1f14d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f14d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f14dc: 0x0  nop
    ctx->pc = 0x1f14dcu;
    // NOP
label_1f14e0:
    // 0x1f14e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f14e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f14e4: 0x0  nop
    ctx->pc = 0x1f14e4u;
    // NOP
    // 0x1f14e8: 0x4503fffd  bc1tl       . + 4 + (-0x3 << 2)
    ctx->pc = 0x1F14E8u;
    {
        const bool branch_taken_0x1f14e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f14e8) {
            ctx->pc = 0x1F14ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F14E8u;
            // 0x1f14ec: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F14E0u;
            runtime->cooperativeGuestYield();
            goto label_1f14e0;
        }
    }
    ctx->pc = 0x1F14F0u;
    // 0x1f14f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F14F0u;
    {
        const bool branch_taken_0x1f14f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F14F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F14F0u;
            // 0x1f14f4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f14f0) {
            ctx->pc = 0x1F1508u;
            goto label_1f1508;
        }
    }
    ctx->pc = 0x1F14F8u;
label_1f14f8:
    // 0x1f14f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f14f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f14fc: 0x4600a028  max.s       $f0, $f20, $f0
    ctx->pc = 0x1f14fcu;
    ctx->f[0] = std::max(ctx->f[20], ctx->f[0]);
    // 0x1f1500: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1f1500u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1f1504: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1f1504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1f1508:
    // 0x1f1508: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1f1508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f150c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1f150cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f1510: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1f1510u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f1514: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1f1514u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f1518: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1f1518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f151c: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x1f151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f1520: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x1f1520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f1524: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x1f1524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f1528: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1f1528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f152c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1f152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f1530: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1530u;
            // 0x1f1534: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0F48u: goto label_1f0f48;
            case 0x1F0F68u: goto label_1f0f68;
            case 0x1F1048u: goto label_1f1048;
            case 0x1F1064u: goto label_1f1064;
            case 0x1F109Cu: goto label_1f109c;
            case 0x1F10A0u: goto label_1f10a0;
            case 0x1F10E0u: goto label_1f10e0;
            case 0x1F10E4u: goto label_1f10e4;
            case 0x1F1118u: goto label_1f1118;
            case 0x1F111Cu: goto label_1f111c;
            case 0x1F1178u: goto label_1f1178;
            case 0x1F11A0u: goto label_1f11a0;
            case 0x1F11A4u: goto label_1f11a4;
            case 0x1F1210u: goto label_1f1210;
            case 0x1F1248u: goto label_1f1248;
            case 0x1F1258u: goto label_1f1258;
            case 0x1F1270u: goto label_1f1270;
            case 0x1F128Cu: goto label_1f128c;
            case 0x1F12A0u: goto label_1f12a0;
            case 0x1F12F8u: goto label_1f12f8;
            case 0x1F1320u: goto label_1f1320;
            case 0x1F1324u: goto label_1f1324;
            case 0x1F13C0u: goto label_1f13c0;
            case 0x1F13E8u: goto label_1f13e8;
            case 0x1F1414u: goto label_1f1414;
            case 0x1F1424u: goto label_1f1424;
            case 0x1F1430u: goto label_1f1430;
            case 0x1F1478u: goto label_1f1478;
            case 0x1F14B8u: goto label_1f14b8;
            case 0x1F14C8u: goto label_1f14c8;
            case 0x1F14E0u: goto label_1f14e0;
            case 0x1F14F8u: goto label_1f14f8;
            case 0x1F1508u: goto label_1f1508;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F1538u;
}
