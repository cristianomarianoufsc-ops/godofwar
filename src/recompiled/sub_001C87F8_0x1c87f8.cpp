#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C87F8
// Address: 0x1c87f8 - 0x1c88f0
void sub_001C87F8_0x1c87f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C87F8_0x1c87f8");
#endif

    ctx->pc = 0x1c87f8u;

    // 0x1c87f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c87f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c87fc: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x1c87fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x1c8800: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c8800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c8804: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c880c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c880cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8810: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1c8810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8814: 0x3c05fffb  lui         $a1, 0xFFFB
    ctx->pc = 0x1c8814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
    // 0x1c8818: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c8818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c881c: 0x3484fcff  ori         $a0, $a0, 0xFCFF
    ctx->pc = 0x1c881cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64767);
    // 0x1c8820: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1c8820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1c8824: 0x8e060174  lw          $a2, 0x174($s0)
    ctx->pc = 0x1c8824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c8828: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c8828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c882c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c882cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c8830: 0x3c04ffdf  lui         $a0, 0xFFDF
    ctx->pc = 0x1c8830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65503 << 16));
    // 0x1c8834: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1c8834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1c8838: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x1c8838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x1c883c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c883cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8840: 0x3c05ffef  lui         $a1, 0xFFEF
    ctx->pc = 0x1c8840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65519 << 16));
    // 0x1c8844: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c8844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c8848: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1c8848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1c884c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1c884cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c8850: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1c8850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1c8854: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c8854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8858: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c8858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c885c: 0x3442efff  ori         $v0, $v0, 0xEFFF
    ctx->pc = 0x1c885cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61439);
    // 0x1c8860: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1c8860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1c8864: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1c8864u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1c8868: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c8868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
    // 0x1c886c: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1C886Cu;
    SET_GPR_U32(ctx, 31, 0x1C8874u);
    ctx->pc = 0x1C8870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C886Cu;
            // 0x1c8870: 0xae060174  sw          $a2, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8874u; }
        if (ctx->pc != 0x1C8874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8874u; }
        if (ctx->pc != 0x1C8874u) { return; }
    }
    ctx->pc = 0x1C8874u;
    // 0x1c8874: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c8874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c8878: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c8878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c887c: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x1c887cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x1c8880: 0xda020260  lqc2        $vf2, 0x260($s0)
    ctx->pc = 0x1c8880u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c8884: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c8884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c8888: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1c8888u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c888c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1c888cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1c8890: 0xae030174  sw          $v1, 0x174($s0)
    ctx->pc = 0x1c8890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
    // 0x1c8894: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c8894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8898: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c8898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c889c: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1c889cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1c88a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c88a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c88a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c88a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c88a8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c88a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c88ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c88acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c88b0: 0x46000004  c1          0x4
    ctx->pc = 0x1c88b0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c88b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c88b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c88b8: 0x0  nop
    ctx->pc = 0x1c88b8u;
    // NOP
    // 0x1c88bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C88BCu;
    {
        const bool branch_taken_0x1c88bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C88C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88BCu;
            // 0x1c88c0: 0x24030029  addiu       $v1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88bc) {
            ctx->pc = 0x1C88C8u;
            goto label_1c88c8;
        }
    }
    ctx->pc = 0x1C88C4u;
    // 0x1c88c4: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1c88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1c88c8:
    // 0x1c88c8: 0x8e020328  lw          $v0, 0x328($s0)
    ctx->pc = 0x1c88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1c88cc: 0xa44300e0  sh          $v1, 0xE0($v0)
    ctx->pc = 0x1c88ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 224), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c88d0: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c88d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c88d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c88d8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c88d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c88dc: 0xc44001d8  lwc1        $f0, 0x1D8($v0)
    ctx->pc = 0x1c88dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c88e0: 0xe6000164  swc1        $f0, 0x164($s0)
    ctx->pc = 0x1c88e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
    // 0x1c88e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c88e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c88e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C88E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C88ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88E8u;
            // 0x1c88ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C88C8u: goto label_1c88c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C88F0u;
}
