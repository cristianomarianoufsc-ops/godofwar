#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015BE30
// Address: 0x15be30 - 0x15bff8
void sub_0015BE30_0x15be30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BE30_0x15be30");
#endif

    ctx->pc = 0x15be30u;

    // 0x15be30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15be30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15be34: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15be34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x15be38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15be38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15be3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15be3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15be40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15be44: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x15be44u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15be48: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x15be48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15be4c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x15be4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15be50: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x15be50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15be54: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x15be54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15be58: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x15be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x15be5c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15be5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x15be60: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x15BE60u;
    {
        const bool branch_taken_0x15be60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15be60) {
            ctx->pc = 0x15BF9Cu;
            goto label_15bf9c;
        }
    }
    ctx->pc = 0x15BE68u;
    // 0x15be68: 0xc477004c  lwc1        $f23, 0x4C($v1)
    ctx->pc = 0x15be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x15be6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15be6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15be70: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x15be70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15be74: 0x0  nop
    ctx->pc = 0x15be74u;
    // NOP
    // 0x15be78: 0x45010048  bc1t        . + 4 + (0x48 << 2)
    ctx->pc = 0x15BE78u;
    {
        const bool branch_taken_0x15be78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15BE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE78u;
            // 0x15be7c: 0xc4760050  lwc1        $f22, 0x50($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be78) {
            ctx->pc = 0x15BF9Cu;
            goto label_15bf9c;
        }
    }
    ctx->pc = 0x15BE80u;
    // 0x15be80: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x15be80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15be84: 0x0  nop
    ctx->pc = 0x15be84u;
    // NOP
    // 0x15be88: 0x45010044  bc1t        . + 4 + (0x44 << 2)
    ctx->pc = 0x15BE88u;
    {
        const bool branch_taken_0x15be88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15BE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE88u;
            // 0x15be8c: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be88) {
            ctx->pc = 0x15BF9Cu;
            goto label_15bf9c;
        }
    }
    ctx->pc = 0x15BE90u;
    // 0x15be90: 0xde020068  ld          $v0, 0x68($s0)
    ctx->pc = 0x15be90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x15be94: 0xde25bdf8  ld          $a1, -0x4208($s1)
    ctx->pc = 0x15be94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 4294950392)));
    // 0x15be98: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x15be98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x15be9c: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x15be9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
    // 0x15bea0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15bea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15bea4: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BEA4u;
    {
        const bool branch_taken_0x15bea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x15BEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BEA4u;
            // 0x15bea8: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bea4) {
            ctx->pc = 0x15BEB8u;
            goto label_15beb8;
        }
    }
    ctx->pc = 0x15BEACu;
    // 0x15beac: 0xc056f5e  jal         func_15BD78
    ctx->pc = 0x15BEACu;
    SET_GPR_U32(ctx, 31, 0x15BEB4u);
    ctx->pc = 0x15BEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BEACu;
            // 0x15beb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD78u;
    if (runtime->hasFunction(0x15BD78u)) {
        auto targetFn = runtime->lookupFunction(0x15BD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BEB4u; }
        if (ctx->pc != 0x15BEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BD78_0x15bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BEB4u; }
        if (ctx->pc != 0x15BEB4u) { return; }
    }
    ctx->pc = 0x15BEB4u;
    // 0x15beb4: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x15beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_15beb8:
    // 0x15beb8: 0x7a100120  lq          $s0, 0x120($s0)
    ctx->pc = 0x15beb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x15bebc: 0x8c43bc78  lw          $v1, -0x4388($v0)
    ctx->pc = 0x15bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950008)));
    // 0x15bec0: 0x2442bc78  addiu       $v0, $v0, -0x4388
    ctx->pc = 0x15bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950008));
    // 0x15bec4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15bec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15bec8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x15bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15becc: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x15BECCu;
    {
        const bool branch_taken_0x15becc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15BED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BECCu;
            // 0x15bed0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15becc) {
            ctx->pc = 0x15BF84u;
            goto label_15bf84;
        }
    }
    ctx->pc = 0x15BED4u;
    // 0x15bed4: 0x0  nop
    ctx->pc = 0x15bed4u;
    // NOP
label_15bed8:
    // 0x15bed8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x15bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15bedc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x15bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15bee0: 0x8c6203a4  lw          $v0, 0x3A4($v1)
    ctx->pc = 0x15bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 932)));
    // 0x15bee4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15BEE4u;
    {
        const bool branch_taken_0x15bee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BEE4u;
            // 0x15bee8: 0x24620360  addiu       $v0, $v1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bee4) {
            ctx->pc = 0x15BF70u;
            goto label_15bf70;
        }
    }
    ctx->pc = 0x15BEECu;
    // 0x15beec: 0x8c640360  lw          $a0, 0x360($v1)
    ctx->pc = 0x15beecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 864)));
    // 0x15bef0: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15BEF0u;
    {
        const bool branch_taken_0x15bef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x15BEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BEF0u;
            // 0x15bef4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bef0) {
            ctx->pc = 0x15BEFCu;
            goto label_15befc;
        }
    }
    ctx->pc = 0x15BEF8u;
    // 0x15bef8: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x15bef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15befc:
    // 0x15befc: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15BEFCu;
    {
        const bool branch_taken_0x15befc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BEFCu;
            // 0x15bf00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15befc) {
            ctx->pc = 0x15BF70u;
            goto label_15bf70;
        }
    }
    ctx->pc = 0x15BF04u;
    // 0x15bf04: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x15bf04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x15bf08: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BF08u;
    {
        const bool branch_taken_0x15bf08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15bf08) {
            ctx->pc = 0x15BF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF08u;
            // 0x15bf0c: 0xde020068  ld          $v0, 0x68($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BF18u;
            goto label_15bf18;
        }
    }
    ctx->pc = 0x15BF10u;
    // 0x15bf10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15BF10u;
    {
        const bool branch_taken_0x15bf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF10u;
            // 0x15bf14: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf10) {
            ctx->pc = 0x15BF30u;
            goto label_15bf30;
        }
    }
    ctx->pc = 0x15BF18u;
label_15bf18:
    // 0x15bf18: 0xde25bdf8  ld          $a1, -0x4208($s1)
    ctx->pc = 0x15bf18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 4294950392)));
    // 0x15bf1c: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BF1Cu;
    {
        const bool branch_taken_0x15bf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x15BF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF1Cu;
            // 0x15bf20: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf1c) {
            ctx->pc = 0x15BF30u;
            goto label_15bf30;
        }
    }
    ctx->pc = 0x15BF24u;
    // 0x15bf24: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x15BF24u;
    SET_GPR_U32(ctx, 31, 0x15BF2Cu);
    ctx->pc = 0x15BF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF24u;
            // 0x15bf28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF2Cu; }
        if (ctx->pc != 0x15BF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF2Cu; }
        if (ctx->pc != 0x15BF2Cu) { return; }
    }
    ctx->pc = 0x15BF2Cu;
    // 0x15bf2c: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x15bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_15bf30:
    // 0x15bf30: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x15bf30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x15bf34: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x15bf34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bf38: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x15bf38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15bf3c: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x15bf3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15bf40: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x15bf40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15bf44: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x15bf44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15bf48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15bf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf4c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x15bf4cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15bf50: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x15bf50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15bf54: 0x46140504  c1          0x140504
    ctx->pc = 0x15bf54u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x15bf58: 0xc04fb12  jal         func_13EC48
    ctx->pc = 0x15BF58u;
    SET_GPR_U32(ctx, 31, 0x15BF60u);
    ctx->pc = 0x13EC48u;
    if (runtime->hasFunction(0x13EC48u)) {
        auto targetFn = runtime->lookupFunction(0x13EC48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF60u; }
        if (ctx->pc != 0x15BF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EC48_0x13ec48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF60u; }
        if (ctx->pc != 0x15BF60u) { return; }
    }
    ctx->pc = 0x15BF60u;
    // 0x15bf60: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x15bf60u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x15bf64: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x15bf64u;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
    // 0x15bf68: 0x4614ad69  min.s       $f21, $f21, $f20
    ctx->pc = 0x15bf68u;
    ctx->f[21] = std::min(ctx->f[21], ctx->f[20]);
    // 0x15bf6c: 0x0  nop
    ctx->pc = 0x15bf6cu;
    // NOP
label_15bf70:
    // 0x15bf70: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x15bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15bf74: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bf78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15bf7c: 0x1443ffd6  bne         $v0, $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x15BF7Cu;
    {
        const bool branch_taken_0x15bf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15BF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF7Cu;
            // 0x15bf80: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf7c) {
            ctx->pc = 0x15BED8u;
            runtime->cooperativeGuestYield();
            goto label_15bed8;
        }
    }
    ctx->pc = 0x15BF84u;
label_15bf84:
    // 0x15bf84: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x15bf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x15bf88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15bf88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bf8c: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x15bf8cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x15bf90: 0x4617a834  c.lt.s      $f21, $f23
    ctx->pc = 0x15bf90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bf94: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x15BF94u;
    {
        const bool branch_taken_0x15bf94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15bf94) {
            ctx->pc = 0x15BFACu;
            goto label_15bfac;
        }
    }
    ctx->pc = 0x15BF9Cu;
label_15bf9c:
    // 0x15bf9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15bf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15bfa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15bfa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bfa4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15BFA4u;
    {
        const bool branch_taken_0x15bfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BFA4u;
            // 0x15bfa8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bfa4) {
            ctx->pc = 0x15BFD4u;
            goto label_15bfd4;
        }
    }
    ctx->pc = 0x15BFACu;
label_15bfac:
    // 0x15bfac: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x15bfacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bfb0: 0x0  nop
    ctx->pc = 0x15bfb0u;
    // NOP
    // 0x15bfb4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x15BFB4u;
    {
        const bool branch_taken_0x15bfb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15BFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BFB4u;
            // 0x15bfb8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bfb4) {
            ctx->pc = 0x15BFD0u;
            goto label_15bfd0;
        }
    }
    ctx->pc = 0x15BFBCu;
    // 0x15bfbc: 0x4617b041  sub.s       $f1, $f22, $f23
    ctx->pc = 0x15bfbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x15bfc0: 0x4615b001  sub.s       $f0, $f22, $f21
    ctx->pc = 0x15bfc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x15bfc4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x15bfc4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x15bfc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15BFC8u;
    {
        const bool branch_taken_0x15bfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BFC8u;
            // 0x15bfcc: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bfc8) {
            ctx->pc = 0x15BFD8u;
            goto label_15bfd8;
        }
    }
    ctx->pc = 0x15BFD0u;
label_15bfd0:
    // 0x15bfd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15bfd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15bfd4:
    // 0x15bfd4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15bfd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15bfd8:
    // 0x15bfd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15bfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bfdc: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x15bfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x15bfe0: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x15bfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15bfe4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x15bfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15bfe8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x15bfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15bfec: 0x3e00008  jr          $ra
    ctx->pc = 0x15BFECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BFECu;
            // 0x15bff0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15BEB8u: goto label_15beb8;
            case 0x15BED8u: goto label_15bed8;
            case 0x15BEFCu: goto label_15befc;
            case 0x15BF18u: goto label_15bf18;
            case 0x15BF30u: goto label_15bf30;
            case 0x15BF70u: goto label_15bf70;
            case 0x15BF84u: goto label_15bf84;
            case 0x15BF9Cu: goto label_15bf9c;
            case 0x15BFACu: goto label_15bfac;
            case 0x15BFD0u: goto label_15bfd0;
            case 0x15BFD4u: goto label_15bfd4;
            case 0x15BFD8u: goto label_15bfd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15BFF4u;
    // 0x15bff4: 0x0  nop
    ctx->pc = 0x15bff4u;
    // NOP
}
