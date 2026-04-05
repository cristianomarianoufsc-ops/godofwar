#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8FF8
// Address: 0x1c8ff8 - 0x1c95d8
void sub_001C8FF8_0x1c8ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8FF8_0x1c8ff8");
#endif

    ctx->pc = 0x1c8ff8u;

    // 0x1c8ff8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c8ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c8ffc: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x1c8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x1c9000: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1c9000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1c9004: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c9004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c9008: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x1c9008u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1c900c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c900cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9010: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c9010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1c9014: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c9014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c9018: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1c9018u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1c901c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1c901cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c9020: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x1c9020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x1c9024: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9028: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1c9028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1c902c: 0x8e030320  lw          $v1, 0x320($s0)
    ctx->pc = 0x1c902cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c9030: 0x8e0402d8  lw          $a0, 0x2D8($s0)
    ctx->pc = 0x1c9030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c9034: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1c9034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c9038: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1c9038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c903c: 0xda010120  lqc2        $vf1, 0x120($s0)
    ctx->pc = 0x1c903cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1c9040: 0xc46001ec  lwc1        $f0, 0x1EC($v1)
    ctx->pc = 0x1c9040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9044: 0xae0402d8  sw          $a0, 0x2D8($s0)
    ctx->pc = 0x1c9044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 4));
    // 0x1c9048: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x1c9048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x1c904c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c904cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c9050: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c9050u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c9054: 0x4a820858  vmulx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1c9054u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9058: 0xda020130  lqc2        $vf2, 0x130($s0)
    ctx->pc = 0x1c9058u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1c905c: 0x4a820845  vsuby.y     $vf1, $vf1, $vf2y
    ctx->pc = 0x1c905cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9060: 0x8e060174  lw          $a2, 0x174($s0)
    ctx->pc = 0x1c9060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c9064: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1c9064u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9068: 0x700717c9  prot3w      $v0, $a3
    ctx->pc = 0x1c9068u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c906c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c906cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9070: 0x30c20380  andi        $v0, $a2, 0x380
    ctx->pc = 0x1c9070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)896);
    // 0x1c9074: 0x10400118  beqz        $v0, . + 4 + (0x118 << 2)
    ctx->pc = 0x1C9074u;
    {
        const bool branch_taken_0x1c9074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9074u;
            // 0x1c9078: 0x30c20080  andi        $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9074) {
            ctx->pc = 0x1C94D8u;
            goto label_1c94d8;
        }
    }
    ctx->pc = 0x1C907Cu;
    // 0x1c907c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C907Cu;
    {
        const bool branch_taken_0x1c907c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c907c) {
            ctx->pc = 0x1C9080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C907Cu;
            // 0x1c9080: 0x7a0200e0  lq          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9090u;
            goto label_1c9090;
        }
    }
    ctx->pc = 0x1C9084u;
    // 0x1c9084: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x1c9084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x1c9088: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1C9088u;
    {
        const bool branch_taken_0x1c9088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C908Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9088u;
            // 0x1c908c: 0x7a0200e0  lq          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9088) {
            ctx->pc = 0x1C91BCu;
            goto label_1c91bc;
        }
    }
    ctx->pc = 0x1C9090u;
label_1c9090:
    // 0x1c9090: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1c9090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c9094: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c9094u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c9098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c909c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1c909cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c90a0: 0x0  nop
    ctx->pc = 0x1c90a0u;
    // NOP
    // 0x1c90a4: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1C90A4u;
    {
        const bool branch_taken_0x1c90a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c90a4) {
            ctx->pc = 0x1C90A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C90A4u;
            // 0x1c90a8: 0x7a060110  lq          $a2, 0x110($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C90D0u;
            goto label_1c90d0;
        }
    }
    ctx->pc = 0x1C90ACu;
    // 0x1c90ac: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x1c90acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x1c90b0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c90b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c90b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c90b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c90b8: 0x3463efff  ori         $v1, $v1, 0xEFFF
    ctx->pc = 0x1c90b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61439);
    // 0x1c90bc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c90bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c90c0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1c90c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1c90c4: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c90c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1c90c8: 0xae030174  sw          $v1, 0x174($s0)
    ctx->pc = 0x1c90c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
    // 0x1c90cc: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c90ccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
label_1c90d0:
    // 0x1c90d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c90d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c90d4: 0xc6140230  lwc1        $f20, 0x230($s0)
    ctx->pc = 0x1c90d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c90d8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c90d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c90dc: 0xc079308  jal         func_1E4C20
    ctx->pc = 0x1C90DCu;
    SET_GPR_U32(ctx, 31, 0x1C90E4u);
    ctx->pc = 0x1C90E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C90DCu;
            // 0x1c90e0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4C20u;
    if (runtime->hasFunction(0x1E4C20u)) {
        auto targetFn = runtime->lookupFunction(0x1E4C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C90E4u; }
        if (ctx->pc != 0x1C90E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4C20_0x1e4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C90E4u; }
        if (ctx->pc != 0x1C90E4u) { return; }
    }
    ctx->pc = 0x1C90E4u;
    // 0x1c90e4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C90E4u;
    {
        const bool branch_taken_0x1c90e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c90e4) {
            ctx->pc = 0x1C9150u;
            goto label_1c9150;
        }
    }
    ctx->pc = 0x1C90ECu;
    // 0x1c90ec: 0xc0721fe  jal         func_1C87F8
    ctx->pc = 0x1C90ECu;
    SET_GPR_U32(ctx, 31, 0x1C90F4u);
    ctx->pc = 0x1C90F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C90ECu;
            // 0x1c90f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C87F8u;
    if (runtime->hasFunction(0x1C87F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C87F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C90F4u; }
        if (ctx->pc != 0x1C90F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C87F8_0x1c87f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C90F4u; }
        if (ctx->pc != 0x1C90F4u) { return; }
    }
    ctx->pc = 0x1C90F4u;
    // 0x1c90f4: 0xc6000230  lwc1        $f0, 0x230($s0)
    ctx->pc = 0x1c90f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c90f8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1c90f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c90fc: 0x0  nop
    ctx->pc = 0x1c90fcu;
    // NOP
    // 0x1c9100: 0x4500012c  bc1f        . + 4 + (0x12C << 2)
    ctx->pc = 0x1C9100u;
    {
        const bool branch_taken_0x1c9100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9100u;
            // 0x1c9104: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9100) {
            ctx->pc = 0x1C95B4u;
            goto label_1c95b4;
        }
    }
    ctx->pc = 0x1C9108u;
    // 0x1c9108: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1c9108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1c910c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1c910cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1c9110: 0x10400128  beqz        $v0, . + 4 + (0x128 << 2)
    ctx->pc = 0x1C9110u;
    {
        const bool branch_taken_0x1c9110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9110u;
            // 0x1c9114: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9110) {
            ctx->pc = 0x1C95B4u;
            goto label_1c95b4;
        }
    }
    ctx->pc = 0x1C9118u;
    // 0x1c9118: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x1c9118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1c911c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1c911cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1c9120: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c9120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c9124: 0x10400123  beqz        $v0, . + 4 + (0x123 << 2)
    ctx->pc = 0x1C9124u;
    {
        const bool branch_taken_0x1c9124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9124u;
            // 0x1c9128: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9124) {
            ctx->pc = 0x1C95B4u;
            goto label_1c95b4;
        }
    }
    ctx->pc = 0x1C912Cu;
    // 0x1c912c: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1c912cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c9130: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c9130u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c9134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9138: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x1c9138u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c913c: 0x0  nop
    ctx->pc = 0x1c913cu;
    // NOP
    // 0x1c9140: 0x4500011c  bc1f        . + 4 + (0x11C << 2)
    ctx->pc = 0x1C9140u;
    {
        const bool branch_taken_0x1c9140 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9140u;
            // 0x1c9144: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9140) {
            ctx->pc = 0x1C95B4u;
            goto label_1c95b4;
        }
    }
    ctx->pc = 0x1C9148u;
    // 0x1c9148: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1C9148u;
    {
        const bool branch_taken_0x1c9148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9148) {
            ctx->pc = 0x1C91ACu;
            goto label_1c91ac;
        }
    }
    ctx->pc = 0x1C9150u;
label_1c9150:
    // 0x1c9150: 0xc07223c  jal         func_1C88F0
    ctx->pc = 0x1C9150u;
    SET_GPR_U32(ctx, 31, 0x1C9158u);
    ctx->pc = 0x1C9154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9150u;
            // 0x1c9154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C88F0u;
    if (runtime->hasFunction(0x1C88F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C88F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9158u; }
        if (ctx->pc != 0x1C9158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C88F0_0x1c88f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9158u; }
        if (ctx->pc != 0x1C9158u) { return; }
    }
    ctx->pc = 0x1C9158u;
    // 0x1c9158: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1c9158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1c915c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1c915cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1c9160: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C9160u;
    {
        const bool branch_taken_0x1c9160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9160u;
            // 0x1c9164: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9160) {
            ctx->pc = 0x1C91A4u;
            goto label_1c91a4;
        }
    }
    ctx->pc = 0x1C9168u;
    // 0x1c9168: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x1c9168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1c916c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1c916cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1c9170: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c9170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c9174: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9174u;
    {
        const bool branch_taken_0x1c9174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9174) {
            ctx->pc = 0x1C91A4u;
            goto label_1c91a4;
        }
    }
    ctx->pc = 0x1C917Cu;
    // 0x1c917c: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1c917cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c9180: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c9180u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c9184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9188: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x1c9188u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c918c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C918Cu;
    {
        const bool branch_taken_0x1c918c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c918c) {
            ctx->pc = 0x1C91A4u;
            goto label_1c91a4;
        }
    }
    ctx->pc = 0x1C9194u;
    // 0x1c9194: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c9194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c9198: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1c9198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1c919c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c919cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c91a0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1c91a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1c91a4:
    // 0x1c91a4: 0x10600103  beqz        $v1, . + 4 + (0x103 << 2)
    ctx->pc = 0x1C91A4u;
    {
        const bool branch_taken_0x1c91a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C91A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C91A4u;
            // 0x1c91a8: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c91a4) {
            ctx->pc = 0x1C95B4u;
            goto label_1c95b4;
        }
    }
    ctx->pc = 0x1C91ACu;
label_1c91ac:
    // 0x1c91ac: 0xc07227c  jal         func_1C89F0
    ctx->pc = 0x1C91ACu;
    SET_GPR_U32(ctx, 31, 0x1C91B4u);
    ctx->pc = 0x1C91B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C91ACu;
            // 0x1c91b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C89F0u;
    if (runtime->hasFunction(0x1C89F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C89F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91B4u; }
        if (ctx->pc != 0x1C91B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C89F0_0x1c89f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91B4u; }
        if (ctx->pc != 0x1C91B4u) { return; }
    }
    ctx->pc = 0x1C91B4u;
    // 0x1c91b4: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x1C91B4u;
    {
        const bool branch_taken_0x1c91b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C91B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C91B4u;
            // 0x1c91b8: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c91b4) {
            ctx->pc = 0x1C95B4u;
            goto label_1c95b4;
        }
    }
    ctx->pc = 0x1C91BCu;
label_1c91bc:
    // 0x1c91bc: 0x70058ca9  por         $s1, $zero, $a1
    ctx->pc = 0x1c91bcu;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x1c91c0: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c91c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c91c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c91c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c91c8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1c91c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1c91cc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c91ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c91d0: 0xc079308  jal         func_1E4C20
    ctx->pc = 0x1C91D0u;
    SET_GPR_U32(ctx, 31, 0x1C91D8u);
    ctx->pc = 0x1C91D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C91D0u;
            // 0x1c91d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4C20u;
    if (runtime->hasFunction(0x1E4C20u)) {
        auto targetFn = runtime->lookupFunction(0x1E4C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91D8u; }
        if (ctx->pc != 0x1C91D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4C20_0x1e4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91D8u; }
        if (ctx->pc != 0x1C91D8u) { return; }
    }
    ctx->pc = 0x1C91D8u;
    // 0x1c91d8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1C91D8u;
    {
        const bool branch_taken_0x1c91d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c91d8) {
            ctx->pc = 0x1C92A8u;
            goto label_1c92a8;
        }
    }
    ctx->pc = 0x1C91E0u;
    // 0x1c91e0: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c91e4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c91e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c91e8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1c91e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c91ec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c91ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c91f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c91f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c91f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c91f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c91f8: 0xc44001d4  lwc1        $f0, 0x1D4($v0)
    ctx->pc = 0x1c91f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c91fc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1c91fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9200: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1c9200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1c9204: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c9204u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c9208: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1c9208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c920c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c920cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c9210: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1c9210u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9214: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1C9214u;
    {
        const bool branch_taken_0x1c9214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9214) {
            ctx->pc = 0x1C9270u;
            goto label_1c9270;
        }
    }
    ctx->pc = 0x1C921Cu;
    // 0x1c921c: 0xc0722e4  jal         func_1C8B90
    ctx->pc = 0x1C921Cu;
    SET_GPR_U32(ctx, 31, 0x1C9224u);
    ctx->pc = 0x1C9220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C921Cu;
            // 0x1c9220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8B90u;
    if (runtime->hasFunction(0x1C8B90u)) {
        auto targetFn = runtime->lookupFunction(0x1C8B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9224u; }
        if (ctx->pc != 0x1C9224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8B90_0x1c8b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9224u; }
        if (ctx->pc != 0x1C9224u) { return; }
    }
    ctx->pc = 0x1C9224u;
    // 0x1c9224: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c9224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c9228: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1c9228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1c922c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c922cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9230: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c9230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c9234: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1c9234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1c9238: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c923c: 0xc44000c4  lwc1        $f0, 0xC4($v0)
    ctx->pc = 0x1c923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9240: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1c9240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1c9244: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c9244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c9248: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1c9248u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x1c924c: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x1c924cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x1c9250: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1c9250u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c9254: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c9254u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c9258: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c9258u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c925c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1c925cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9260: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c9260u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9264: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C9264u;
    {
        const bool branch_taken_0x1c9264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9264u;
            // 0x1c9268: 0x7fb10010  sq          $s1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9264) {
            ctx->pc = 0x1C92B0u;
            goto label_1c92b0;
        }
    }
    ctx->pc = 0x1C926Cu;
    // 0x1c926c: 0x0  nop
    ctx->pc = 0x1c926cu;
    // NOP
label_1c9270:
    // 0x1c9270: 0xc0721fe  jal         func_1C87F8
    ctx->pc = 0x1C9270u;
    SET_GPR_U32(ctx, 31, 0x1C9278u);
    ctx->pc = 0x1C9274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9270u;
            // 0x1c9274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C87F8u;
    if (runtime->hasFunction(0x1C87F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C87F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9278u; }
        if (ctx->pc != 0x1C9278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C87F8_0x1c87f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9278u; }
        if (ctx->pc != 0x1C9278u) { return; }
    }
    ctx->pc = 0x1C9278u;
    // 0x1c9278: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1c9278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1c927c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c927cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c9280: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c9284: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9288: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1c9288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1c928c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1c928cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1c9290: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c9290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c9294: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c9294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c9298: 0xe476000c  swc1        $f22, 0xC($v1)
    ctx->pc = 0x1c9298u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1c929c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c929cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c92a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C92A0u;
    {
        const bool branch_taken_0x1c92a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92A0u;
            // 0x1c92a4: 0xae020174  sw          $v0, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92a0) {
            ctx->pc = 0x1C92B0u;
            goto label_1c92b0;
        }
    }
    ctx->pc = 0x1C92A8u;
label_1c92a8:
    // 0x1c92a8: 0xc07227c  jal         func_1C89F0
    ctx->pc = 0x1C92A8u;
    SET_GPR_U32(ctx, 31, 0x1C92B0u);
    ctx->pc = 0x1C92ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92A8u;
            // 0x1c92ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C89F0u;
    if (runtime->hasFunction(0x1C89F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C89F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C92B0u; }
        if (ctx->pc != 0x1C92B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C89F0_0x1c89f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C92B0u; }
        if (ctx->pc != 0x1C92B0u) { return; }
    }
    ctx->pc = 0x1C92B0u;
label_1c92b0:
    // 0x1c92b0: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c92b4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1c92b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1c92b8: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x1C92B8u;
    {
        const bool branch_taken_0x1c92b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92B8u;
            // 0x1c92bc: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92b8) {
            ctx->pc = 0x1C95B0u;
            goto label_1c95b0;
        }
    }
    ctx->pc = 0x1C92C0u;
    // 0x1c92c0: 0x8e0502d8  lw          $a1, 0x2D8($s0)
    ctx->pc = 0x1c92c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c92c4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1c92c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1c92c8: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x1C92C8u;
    {
        const bool branch_taken_0x1c92c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c92c8) {
            ctx->pc = 0x1C92CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92C8u;
            // 0x1c92cc: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9418u;
            goto label_1c9418;
        }
    }
    ctx->pc = 0x1C92D0u;
    // 0x1c92d0: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x1c92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1c92d4: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x1c92d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x1c92d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c92d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c92dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C92DCu;
    {
        const bool branch_taken_0x1c92dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92DCu;
            // 0x1c92e0: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92dc) {
            ctx->pc = 0x1C9310u;
            goto label_1c9310;
        }
    }
    ctx->pc = 0x1C92E4u;
    // 0x1c92e4: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1c92e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1c92e8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c92e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c92ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c92ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c92f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C92F0u;
    {
        const bool branch_taken_0x1c92f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92F0u;
            // 0x1c92f4: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92f0) {
            ctx->pc = 0x1C9310u;
            goto label_1c9310;
        }
    }
    ctx->pc = 0x1C92F8u;
    // 0x1c92f8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1c92f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1c92fc: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x1c92fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1c9300: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1C9300u;
    {
        const bool branch_taken_0x1c9300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9300u;
            // 0x1c9304: 0xa31025  or          $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9300) {
            ctx->pc = 0x1C9488u;
            goto label_1c9488;
        }
    }
    ctx->pc = 0x1C9308u;
    // 0x1c9308: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x1C9308u;
    {
        const bool branch_taken_0x1c9308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C930Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9308u;
            // 0x1c930c: 0xae0002b8  sw          $zero, 0x2B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9308) {
            ctx->pc = 0x1C95ACu;
            goto label_1c95ac;
        }
    }
    ctx->pc = 0x1C9310u;
label_1c9310:
    // 0x1c9310: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1c9310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1c9314: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1C9314u;
    {
        const bool branch_taken_0x1c9314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9314u;
            // 0x1c9318: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9314) {
            ctx->pc = 0x1C95B4u;
            goto label_1c95b4;
        }
    }
    ctx->pc = 0x1C931Cu;
    // 0x1c931c: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x1c931cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x1c9320: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c9320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c9324: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c9324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c9328: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1c9328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x1c932c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1c932cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1c9330: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c9330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c9334: 0x1460009e  bnez        $v1, . + 4 + (0x9E << 2)
    ctx->pc = 0x1C9334u;
    {
        const bool branch_taken_0x1c9334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9334u;
            // 0x1c9338: 0xae0502d8  sw          $a1, 0x2D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9334) {
            ctx->pc = 0x1C95B0u;
            goto label_1c95b0;
        }
    }
    ctx->pc = 0x1C933Cu;
    // 0x1c933c: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c933cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c9340: 0xc60102b8  lwc1        $f1, 0x2B8($s0)
    ctx->pc = 0x1c9340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9344: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c9344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c9348: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c934c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1c934cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1c9350: 0xc46201f8  lwc1        $f2, 0x1F8($v1)
    ctx->pc = 0x1c9350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c9354: 0xc46001fc  lwc1        $f0, 0x1FC($v1)
    ctx->pc = 0x1c9354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9358: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c9358u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c935c: 0xc464020c  lwc1        $f4, 0x20C($v1)
    ctx->pc = 0x1c935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c9360: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c9360u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c9364: 0xc4660200  lwc1        $f6, 0x200($v1)
    ctx->pc = 0x1c9364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c9368: 0xc4620208  lwc1        $f2, 0x208($v1)
    ctx->pc = 0x1c9368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c936c: 0xc4630204  lwc1        $f3, 0x204($v1)
    ctx->pc = 0x1c936cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c9370: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c9370u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1c9374: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x1c9374u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x1c9378: 0x46061881  sub.s       $f2, $f3, $f6
    ctx->pc = 0x1c9378u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x1c937c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c937cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9380: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x1c9380u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x1c9384: 0x460708e9  min.s       $f3, $f1, $f7
    ctx->pc = 0x1c9384u;
    ctx->f[3] = std::min(ctx->f[1], ctx->f[7]);
    // 0x1c9388: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1c9388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c938c: 0x0  nop
    ctx->pc = 0x1c938cu;
    // NOP
    // 0x1c9390: 0x45000088  bc1f        . + 4 + (0x88 << 2)
    ctx->pc = 0x1C9390u;
    {
        const bool branch_taken_0x1c9390 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9390u;
            // 0x1c9394: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9390) {
            ctx->pc = 0x1C95B4u;
            goto label_1c95b4;
        }
    }
    ctx->pc = 0x1C9398u;
    // 0x1c9398: 0x46031042  mul.s       $f1, $f2, $f3
    ctx->pc = 0x1c9398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1c939c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c939cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c93a0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1c93a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c93a4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1c93a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1c93a8: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1c93a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c93ac: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c93acu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c93b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c93b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c93b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c93b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c93b8: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x1c93b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x1c93bc: 0x46001105  abs.s       $f4, $f2
    ctx->pc = 0x1c93bcu;
    ctx->f[4] = FPU_ABS_S(ctx->f[2]);
    // 0x1c93c0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c93c4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1c93c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1c93c8: 0xe60102c4  swc1        $f1, 0x2C4($s0)
    ctx->pc = 0x1c93c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 708), bits); }
    // 0x1c93cc: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c93ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1c93d0: 0xc4600208  lwc1        $f0, 0x208($v1)
    ctx->pc = 0x1c93d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c93d4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1c93d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1c93d8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x1c93d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x1c93dc: 0xe60002b8  swc1        $f0, 0x2B8($s0)
    ctx->pc = 0x1c93dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 696), bits); }
    // 0x1c93e0: 0xc46001d4  lwc1        $f0, 0x1D4($v1)
    ctx->pc = 0x1c93e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c93e4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c93e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1c93e8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1c93e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1c93ec: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1c93ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1c93f0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1c93f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c93f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c93f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c93f8: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x1c93f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c93fc: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x1c93fcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1c9400: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c9400u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c9404: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x1c9404u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x1c9408: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1c9408u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1c940c: 0x7e020260  sq          $v0, 0x260($s0)
    ctx->pc = 0x1c940cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), GPR_VEC(ctx, 2));
    // 0x1c9410: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1C9410u;
    {
        const bool branch_taken_0x1c9410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9410u;
            // 0x1c9414: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9410) {
            ctx->pc = 0x1C95B0u;
            goto label_1c95b0;
        }
    }
    ctx->pc = 0x1C9418u;
label_1c9418:
    // 0x1c9418: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c9418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c941c: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1c941cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c9420: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1c9420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1c9424: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1c9424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1c9428: 0x40f809  jalr        $v0
    ctx->pc = 0x1C9428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C9430u);
        ctx->pc = 0x1C942Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9428u;
            // 0x1c942c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C9430u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9090u: goto label_1c9090;
            case 0x1C90D0u: goto label_1c90d0;
            case 0x1C9150u: goto label_1c9150;
            case 0x1C91A4u: goto label_1c91a4;
            case 0x1C91ACu: goto label_1c91ac;
            case 0x1C91BCu: goto label_1c91bc;
            case 0x1C9270u: goto label_1c9270;
            case 0x1C92A8u: goto label_1c92a8;
            case 0x1C92B0u: goto label_1c92b0;
            case 0x1C9310u: goto label_1c9310;
            case 0x1C9418u: goto label_1c9418;
            case 0x1C9488u: goto label_1c9488;
            case 0x1C94D8u: goto label_1c94d8;
            case 0x1C9590u: goto label_1c9590;
            case 0x1C95ACu: goto label_1c95ac;
            case 0x1C95B0u: goto label_1c95b0;
            case 0x1C95B4u: goto label_1c95b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C9430u; }
            if (ctx->pc != 0x1C9430u) { return; }
        }
        }
    }
    ctx->pc = 0x1C9430u;
    // 0x1c9430: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c9430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c9434: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9438: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1c9438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1c943c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c943cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c9440: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c9440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c9444: 0xc602016c  lwc1        $f2, 0x16C($s0)
    ctx->pc = 0x1c9444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c9448: 0xc60102b8  lwc1        $f1, 0x2B8($s0)
    ctx->pc = 0x1c9448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c944c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1c944cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c9450: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1c9450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1c9454: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c9454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c9458: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1c9458u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c945c: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1c945cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1c9460: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x1c9460u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9464: 0x0  nop
    ctx->pc = 0x1c9464u;
    // NOP
    // 0x1c9468: 0x45000051  bc1f        . + 4 + (0x51 << 2)
    ctx->pc = 0x1C9468u;
    {
        const bool branch_taken_0x1c9468 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C946Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9468u;
            // 0x1c946c: 0xe60102b8  swc1        $f1, 0x2B8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9468) {
            ctx->pc = 0x1C95B0u;
            goto label_1c95b0;
        }
    }
    ctx->pc = 0x1C9470u;
    // 0x1c9470: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c9470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c9474: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x1c9474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x1c9478: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c9478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c947c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c947cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c9480: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1C9480u;
    {
        const bool branch_taken_0x1c9480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9480u;
            // 0x1c9484: 0xae0302d8  sw          $v1, 0x2D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9480) {
            ctx->pc = 0x1C95B0u;
            goto label_1c95b0;
        }
    }
    ctx->pc = 0x1C9488u;
label_1c9488:
    // 0x1c9488: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c9488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c948c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c948cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c9490: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1c9490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c9494: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1c9494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1c9498: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1c9498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1c949c: 0x40f809  jalr        $v0
    ctx->pc = 0x1C949Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C94A4u);
        ctx->pc = 0x1C94A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C949Cu;
            // 0x1c94a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C94A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9090u: goto label_1c9090;
            case 0x1C90D0u: goto label_1c90d0;
            case 0x1C9150u: goto label_1c9150;
            case 0x1C91A4u: goto label_1c91a4;
            case 0x1C91ACu: goto label_1c91ac;
            case 0x1C91BCu: goto label_1c91bc;
            case 0x1C9270u: goto label_1c9270;
            case 0x1C92A8u: goto label_1c92a8;
            case 0x1C92B0u: goto label_1c92b0;
            case 0x1C9310u: goto label_1c9310;
            case 0x1C9418u: goto label_1c9418;
            case 0x1C9488u: goto label_1c9488;
            case 0x1C94D8u: goto label_1c94d8;
            case 0x1C9590u: goto label_1c9590;
            case 0x1C95ACu: goto label_1c95ac;
            case 0x1C95B0u: goto label_1c95b0;
            case 0x1C95B4u: goto label_1c95b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C94A4u; }
            if (ctx->pc != 0x1C94A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1C94A4u;
    // 0x1c94a4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c94a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c94a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c94a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c94ac: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1c94acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1c94b0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c94b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c94b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c94b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c94b8: 0xc602016c  lwc1        $f2, 0x16C($s0)
    ctx->pc = 0x1c94b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c94bc: 0xc60102b8  lwc1        $f1, 0x2B8($s0)
    ctx->pc = 0x1c94bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c94c0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1c94c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1c94c4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c94c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c94c8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1c94c8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c94cc: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x1c94ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x1c94d0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1C94D0u;
    {
        const bool branch_taken_0x1c94d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C94D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C94D0u;
            // 0x1c94d4: 0xe60102b8  swc1        $f1, 0x2B8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94d0) {
            ctx->pc = 0x1C95B0u;
            goto label_1c95b0;
        }
    }
    ctx->pc = 0x1C94D8u;
label_1c94d8:
    // 0x1c94d8: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x1c94d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c94dc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1c94dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c94e0: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c94e0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c94e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c94e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c94e8: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x1c94e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c94ec: 0x0  nop
    ctx->pc = 0x1c94ecu;
    // NOP
    // 0x1c94f0: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x1C94F0u;
    {
        const bool branch_taken_0x1c94f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C94F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C94F0u;
            // 0x1c94f4: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94f0) {
            ctx->pc = 0x1C95B0u;
            goto label_1c95b0;
        }
    }
    ctx->pc = 0x1C94F8u;
    // 0x1c94f8: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c94f8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c94fc: 0xc4546308  lwc1        $f20, 0x6308($v0)
    ctx->pc = 0x1c94fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c9500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9504: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c9504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c9508: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c950c: 0xc079308  jal         func_1E4C20
    ctx->pc = 0x1C950Cu;
    SET_GPR_U32(ctx, 31, 0x1C9514u);
    ctx->pc = 0x1C9510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C950Cu;
            // 0x1c9510: 0xe6140230  swc1        $f20, 0x230($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4C20u;
    if (runtime->hasFunction(0x1E4C20u)) {
        auto targetFn = runtime->lookupFunction(0x1E4C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9514u; }
        if (ctx->pc != 0x1C9514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4C20_0x1e4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9514u; }
        if (ctx->pc != 0x1C9514u) { return; }
    }
    ctx->pc = 0x1C9514u;
    // 0x1c9514: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C9514u;
    {
        const bool branch_taken_0x1c9514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9514) {
            ctx->pc = 0x1C9518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9514u;
            // 0x1c9518: 0xc6000230  lwc1        $f0, 0x230($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9590u;
            goto label_1c9590;
        }
    }
    ctx->pc = 0x1C951Cu;
    // 0x1c951c: 0xc07223c  jal         func_1C88F0
    ctx->pc = 0x1C951Cu;
    SET_GPR_U32(ctx, 31, 0x1C9524u);
    ctx->pc = 0x1C9520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C951Cu;
            // 0x1c9520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C88F0u;
    if (runtime->hasFunction(0x1C88F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C88F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9524u; }
        if (ctx->pc != 0x1C9524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C88F0_0x1c88f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9524u; }
        if (ctx->pc != 0x1C9524u) { return; }
    }
    ctx->pc = 0x1C9524u;
    // 0x1c9524: 0xda0200e0  lqc2        $vf2, 0xE0($s0)
    ctx->pc = 0x1c9524u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c9528: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1c9528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1c952c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c952cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c9530: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c9530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9534: 0x3c01c280  lui         $at, 0xC280
    ctx->pc = 0x1c9534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49792 << 16));
    // 0x1c9538: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c953c: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x1c953cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c9540: 0x700717c9  prot3w      $v0, $a3
    ctx->pc = 0x1c9540u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c9544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9548: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c9548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c954c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1c954cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1c9550: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c9550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c9554: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1c9554u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c9558: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1c9558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c955c: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c955cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c9560: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x1c9560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c9564: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1c9564u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c9568: 0xfa0200e0  sqc2        $vf2, 0xE0($s0)
    ctx->pc = 0x1c9568u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c956c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1c956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1c9570: 0xe61602a0  swc1        $f22, 0x2A0($s0)
    ctx->pc = 0x1c9570u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
    // 0x1c9574: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c9574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1c9578: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c9578u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c957c: 0x4a830040  vaddx.y     $vf1, $vf0, $vf3x
    ctx->pc = 0x1c957cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9580: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c9580u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9584: 0xe61502bc  swc1        $f21, 0x2BC($s0)
    ctx->pc = 0x1c9584u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 700), bits); }
    // 0x1c9588: 0xc6000230  lwc1        $f0, 0x230($s0)
    ctx->pc = 0x1c9588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c958c: 0x0  nop
    ctx->pc = 0x1c958cu;
    // NOP
label_1c9590:
    // 0x1c9590: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1c9590u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9594: 0x0  nop
    ctx->pc = 0x1c9594u;
    // NOP
    // 0x1c9598: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9598u;
    {
        const bool branch_taken_0x1c9598 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C959Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9598u;
            // 0x1c959c: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9598) {
            ctx->pc = 0x1C95B4u;
            goto label_1c95b4;
        }
    }
    ctx->pc = 0x1C95A0u;
    // 0x1c95a0: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c95a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c95a4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1c95a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1c95a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c95a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1c95ac:
    // 0x1c95ac: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c95acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
label_1c95b0:
    // 0x1c95b0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1c95b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c95b4:
    // 0x1c95b4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1c95b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c95b8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c95b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c95bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c95bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c95c0: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x1c95c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c95c4: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1c95c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c95c8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1c95c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c95cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C95CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C95D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95CCu;
            // 0x1c95d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9090u: goto label_1c9090;
            case 0x1C90D0u: goto label_1c90d0;
            case 0x1C9150u: goto label_1c9150;
            case 0x1C91A4u: goto label_1c91a4;
            case 0x1C91ACu: goto label_1c91ac;
            case 0x1C91BCu: goto label_1c91bc;
            case 0x1C9270u: goto label_1c9270;
            case 0x1C92A8u: goto label_1c92a8;
            case 0x1C92B0u: goto label_1c92b0;
            case 0x1C9310u: goto label_1c9310;
            case 0x1C9418u: goto label_1c9418;
            case 0x1C9488u: goto label_1c9488;
            case 0x1C94D8u: goto label_1c94d8;
            case 0x1C9590u: goto label_1c9590;
            case 0x1C95ACu: goto label_1c95ac;
            case 0x1C95B0u: goto label_1c95b0;
            case 0x1C95B4u: goto label_1c95b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C95D4u;
    // 0x1c95d4: 0x0  nop
    ctx->pc = 0x1c95d4u;
    // NOP
}
