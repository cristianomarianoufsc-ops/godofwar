#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5058
// Address: 0x1c5058 - 0x1c5440
void sub_001C5058_0x1c5058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5058_0x1c5058");
#endif

    ctx->pc = 0x1c5058u;

    // 0x1c5058: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1c5058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1c505c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c505cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1c5060: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1c5060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1c5064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c5064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5068: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c5068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1c506c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1c506cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1c5070: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1c5070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1c5074: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c5074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c5078: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c5078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c507c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1c507cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1c5080: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c5080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c5084: 0x3042004c  andi        $v0, $v0, 0x4C
    ctx->pc = 0x1c5084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)76);
    // 0x1c5088: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x1C5088u;
    {
        const bool branch_taken_0x1c5088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C508Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5088u;
            // 0x1c508c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5088) {
            ctx->pc = 0x1C5418u;
            goto label_1c5418;
        }
    }
    ctx->pc = 0x1C5090u;
    // 0x1c5090: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x1c5090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c5094: 0xda010120  lqc2        $vf1, 0x120($s0)
    ctx->pc = 0x1c5094u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1c5098: 0xda420010  lqc2        $vf2, 0x10($s2)
    ctx->pc = 0x1c5098u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c509c: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x1c509cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
    // 0x1c50a0: 0x4be11099  vmuly.xyzw  $vf2, $vf2, $vf1y
    ctx->pc = 0x1c50a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c50a4: 0x26622860  addiu       $v0, $s3, 0x2860
    ctx->pc = 0x1c50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 10336));
    // 0x1c50a8: 0xda410030  lqc2        $vf1, 0x30($s2)
    ctx->pc = 0x1c50a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1c50ac: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1c50acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c50b0: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c50b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c50b4: 0x3c150030  lui         $s5, 0x30
    ctx->pc = 0x1c50b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
    // 0x1c50b8: 0xaea02870  sw          $zero, 0x2870($s5)
    ctx->pc = 0x1c50b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 10352), GPR_U32(ctx, 0));
    // 0x1c50bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c50c0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1c50c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c50c4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1c50c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1c50c8: 0x40f809  jalr        $v0
    ctx->pc = 0x1C50C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C50D0u);
        ctx->pc = 0x1C50CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C50C8u;
            // 0x1c50cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C50D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C50F8u: goto label_1c50f8;
            case 0x1C5100u: goto label_1c5100;
            case 0x1C5208u: goto label_1c5208;
            case 0x1C5288u: goto label_1c5288;
            case 0x1C5340u: goto label_1c5340;
            case 0x1C5354u: goto label_1c5354;
            case 0x1C535Cu: goto label_1c535c;
            case 0x1C538Cu: goto label_1c538c;
            case 0x1C53C8u: goto label_1c53c8;
            case 0x1C5418u: goto label_1c5418;
            case 0x1C541Cu: goto label_1c541c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C50D0u; }
            if (ctx->pc != 0x1C50D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C50D0u;
    // 0x1c50d0: 0xc60102a8  lwc1        $f1, 0x2A8($s0)
    ctx->pc = 0x1c50d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c50d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c50d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c50d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c50d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c50dc: 0x0  nop
    ctx->pc = 0x1c50dcu;
    // NOP
    // 0x1c50e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C50E0u;
    {
        const bool branch_taken_0x1c50e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C50E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C50E0u;
            // 0x1c50e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50e0) {
            ctx->pc = 0x1C50F8u;
            goto label_1c50f8;
        }
    }
    ctx->pc = 0x1C50E8u;
    // 0x1c50e8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1c50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1c50ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C50ECu;
    {
        const bool branch_taken_0x1c50ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C50F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C50ECu;
            // 0x1c50f0: 0xac514f50  sw          $s1, 0x4F50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20304), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50ec) {
            ctx->pc = 0x1C5100u;
            goto label_1c5100;
        }
    }
    ctx->pc = 0x1C50F4u;
    // 0x1c50f4: 0x0  nop
    ctx->pc = 0x1c50f4u;
    // NOP
label_1c50f8:
    // 0x1c50f8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1c50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1c50fc: 0xac404f50  sw          $zero, 0x4F50($v0)
    ctx->pc = 0x1c50fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20304), GPR_U32(ctx, 0));
label_1c5100:
    // 0x1c5100: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c5100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c5104: 0x26652860  addiu       $a1, $s3, 0x2860
    ctx->pc = 0x1c5104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 10336));
    // 0x1c5108: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x1c5108u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c510c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1c510cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1c5110: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1c5110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1c5114: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1c5114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1c5118: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1c5118u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c511c: 0x24c2f170  addiu       $v0, $a2, -0xE90
    ctx->pc = 0x1c511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963568));
    // 0x1c5120: 0xacd4f170  sw          $s4, -0xE90($a2)
    ctx->pc = 0x1c5120u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963568), GPR_U32(ctx, 20));
    // 0x1c5124: 0x24634f28  addiu       $v1, $v1, 0x4F28
    ctx->pc = 0x1c5124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20264));
    // 0x1c5128: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1c5128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x1c512c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c512cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5130: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1c5130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1c5134: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1c5134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1c5138: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1c5138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1c513c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1c513cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1c5140: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1c5140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1c5144: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1c5144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1c5148: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1c5148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1c514c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1c514cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1c5150: 0xc0479ec  jal         func_11E7B0
    ctx->pc = 0x1C5150u;
    SET_GPR_U32(ctx, 31, 0x1C5158u);
    ctx->pc = 0x1C5154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5150u;
            // 0x1c5154: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E7B0u;
    if (runtime->hasFunction(0x11E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x11E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5158u; }
        if (ctx->pc != 0x1C5158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E7B0_0x11e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5158u; }
        if (ctx->pc != 0x1C5158u) { return; }
    }
    ctx->pc = 0x1C5158u;
    // 0x1c5158: 0x8ea52870  lw          $a1, 0x2870($s5)
    ctx->pc = 0x1c5158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10352)));
    // 0x1c515c: 0x10a000ae  beqz        $a1, . + 4 + (0xAE << 2)
    ctx->pc = 0x1C515Cu;
    {
        const bool branch_taken_0x1c515c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C515Cu;
            // 0x1c5160: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c515c) {
            ctx->pc = 0x1C5418u;
            goto label_1c5418;
        }
    }
    ctx->pc = 0x1C5164u;
    // 0x1c5164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5168: 0xc0710cc  jal         func_1C4330
    ctx->pc = 0x1C5168u;
    SET_GPR_U32(ctx, 31, 0x1C5170u);
    ctx->pc = 0x1C516Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5168u;
            // 0x1c516c: 0xc44c4f54  lwc1        $f12, 0x4F54($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4330u;
    if (runtime->hasFunction(0x1C4330u)) {
        auto targetFn = runtime->lookupFunction(0x1C4330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5170u; }
        if (ctx->pc != 0x1C5170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4330_0x1c4330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5170u; }
        if (ctx->pc != 0x1C5170u) { return; }
    }
    ctx->pc = 0x1C5170u;
    // 0x1c5170: 0x504000aa  beql        $v0, $zero, . + 4 + (0xAA << 2)
    ctx->pc = 0x1C5170u;
    {
        const bool branch_taken_0x1c5170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5170) {
            ctx->pc = 0x1C5174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5170u;
            // 0x1c5174: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C541Cu;
            goto label_1c541c;
        }
    }
    ctx->pc = 0x1C5178u;
    // 0x1c5178: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c5178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c517c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1c517cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c5180: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1c5180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1c5184: 0x40f809  jalr        $v0
    ctx->pc = 0x1C5184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C518Cu);
        ctx->pc = 0x1C5188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5184u;
            // 0x1c5188: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C518Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C50F8u: goto label_1c50f8;
            case 0x1C5100u: goto label_1c5100;
            case 0x1C5208u: goto label_1c5208;
            case 0x1C5288u: goto label_1c5288;
            case 0x1C5340u: goto label_1c5340;
            case 0x1C5354u: goto label_1c5354;
            case 0x1C535Cu: goto label_1c535c;
            case 0x1C538Cu: goto label_1c538c;
            case 0x1C53C8u: goto label_1c53c8;
            case 0x1C5418u: goto label_1c5418;
            case 0x1C541Cu: goto label_1c541c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C518Cu; }
            if (ctx->pc != 0x1C518Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C518Cu;
    // 0x1c518c: 0x7a040050  lq          $a0, 0x50($s0)
    ctx->pc = 0x1c518cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1c5190: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1c5190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1c5194: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x1c5194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
    // 0x1c5198: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c5198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c519c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1c519cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1c51a0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1c51a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1c51a4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c51a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c51a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c51a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c51ac: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1c51acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1c51b0: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x1c51b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1c51b4: 0x24a52830  addiu       $a1, $a1, 0x2830
    ctx->pc = 0x1c51b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10288));
    // 0x1c51b8: 0xe460cd30  swc1        $f0, -0x32D0($v1)
    ctx->pc = 0x1c51b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954288), bits); }
    // 0x1c51bc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1c51bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1c51c0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1c51c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1c51c4: 0x34c67fff  ori         $a2, $a2, 0x7FFF
    ctx->pc = 0x1c51c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32767);
    // 0x1c51c8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1c51c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1c51cc: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c51ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c51d0: 0xac80cd34  sw          $zero, -0x32CC($a0)
    ctx->pc = 0x1c51d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954292), GPR_U32(ctx, 0));
    // 0x1c51d4: 0x463024  and         $a2, $v0, $a2
    ctx->pc = 0x1c51d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1c51d8: 0xae0602d8  sw          $a2, 0x2D8($s0)
    ctx->pc = 0x1c51d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 6));
    // 0x1c51dc: 0x8e230374  lw          $v1, 0x374($s1)
    ctx->pc = 0x1c51dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
    // 0x1c51e0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1c51e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1c51e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C51E4u;
    {
        const bool branch_taken_0x1c51e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C51E4u;
            // 0x1c51e8: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51e4) {
            ctx->pc = 0x1C5208u;
            goto label_1c5208;
        }
    }
    ctx->pc = 0x1C51ECu;
    // 0x1c51ec: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c51f0: 0x3c03fd80  lui         $v1, 0xFD80
    ctx->pc = 0x1c51f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64896 << 16));
    // 0x1c51f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c51f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c51f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c51f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c51fc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c51fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c5200: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1C5200u;
    {
        const bool branch_taken_0x1c5200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5200u;
            // 0x1c5204: 0xae020174  sw          $v0, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5200) {
            ctx->pc = 0x1C53C8u;
            goto label_1c53c8;
        }
    }
    ctx->pc = 0x1C5208u;
label_1c5208:
    // 0x1c5208: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c5208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c520c: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1C520Cu;
    {
        const bool branch_taken_0x1c520c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C520Cu;
            // 0x1c5210: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c520c) {
            ctx->pc = 0x1C538Cu;
            goto label_1c538c;
        }
    }
    ctx->pc = 0x1C5214u;
    // 0x1c5214: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C5214u;
    {
        const bool branch_taken_0x1c5214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5214u;
            // 0x1c5218: 0x8e030174  lw          $v1, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5214) {
            ctx->pc = 0x1C5288u;
            goto label_1c5288;
        }
    }
    ctx->pc = 0x1C521Cu;
    // 0x1c521c: 0x3c02fd80  lui         $v0, 0xFD80
    ctx->pc = 0x1c521cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64896 << 16));
    // 0x1c5220: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c5220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c5224: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x1c5224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x1c5228: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c5228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c522c: 0xc62c0060  lwc1        $f12, 0x60($s1)
    ctx->pc = 0x1c522cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5230: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c5230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c5234: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c5234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c5238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c523c: 0xc085e52  jal         func_217948
    ctx->pc = 0x1C523Cu;
    SET_GPR_U32(ctx, 31, 0x1C5244u);
    ctx->pc = 0x1C5240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C523Cu;
            // 0x1c5240: 0xae030174  sw          $v1, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217948u;
    if (runtime->hasFunction(0x217948u)) {
        auto targetFn = runtime->lookupFunction(0x217948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5244u; }
        if (ctx->pc != 0x1C5244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217948_0x2179e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5244u; }
        if (ctx->pc != 0x1C5244u) { return; }
    }
    ctx->pc = 0x1C5244u;
    // 0x1c5244: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c5244u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c5248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c524c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c524cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c5250: 0xc085e52  jal         func_217948
    ctx->pc = 0x1C5250u;
    SET_GPR_U32(ctx, 31, 0x1C5258u);
    ctx->pc = 0x1C5254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5250u;
            // 0x1c5254: 0xfba10020  sqc2        $vf1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217948u;
    if (runtime->hasFunction(0x217948u)) {
        auto targetFn = runtime->lookupFunction(0x217948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5258u; }
        if (ctx->pc != 0x1C5258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217948_0x2179e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5258u; }
        if (ctx->pc != 0x1C5258u) { return; }
    }
    ctx->pc = 0x1C5258u;
    // 0x1c5258: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c5258u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c525c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c525cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c5260: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1c5260u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5264: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c5264u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5268: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1c5268u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c526c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c526cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5270: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1c5270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5274: 0x0  nop
    ctx->pc = 0x1c5274u;
    // NOP
    // 0x1c5278: 0x45030031  bc1tl       . + 4 + (0x31 << 2)
    ctx->pc = 0x1C5278u;
    {
        const bool branch_taken_0x1c5278 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5278) {
            ctx->pc = 0x1C527Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5278u;
            // 0x1c527c: 0x8e0302d8  lw          $v1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5340u;
            goto label_1c5340;
        }
    }
    ctx->pc = 0x1C5280u;
    // 0x1c5280: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1C5280u;
    {
        const bool branch_taken_0x1c5280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5280u;
            // 0x1c5284: 0x8e0202d8  lw          $v0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5280) {
            ctx->pc = 0x1C5354u;
            goto label_1c5354;
        }
    }
    ctx->pc = 0x1C5288u;
label_1c5288:
    // 0x1c5288: 0x3c02fd80  lui         $v0, 0xFD80
    ctx->pc = 0x1c5288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64896 << 16));
    // 0x1c528c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c5290: 0xc60c0294  lwc1        $f12, 0x294($s0)
    ctx->pc = 0x1c5290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5294: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c5294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c5298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c529c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1c529cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1c52a0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1c52a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1c52a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c52a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c52a8: 0xc085e52  jal         func_217948
    ctx->pc = 0x1C52A8u;
    SET_GPR_U32(ctx, 31, 0x1C52B0u);
    ctx->pc = 0x1C52ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52A8u;
            // 0x1c52ac: 0xae030174  sw          $v1, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217948u;
    if (runtime->hasFunction(0x217948u)) {
        auto targetFn = runtime->lookupFunction(0x217948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52B0u; }
        if (ctx->pc != 0x1C52B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217948_0x2179e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52B0u; }
        if (ctx->pc != 0x1C52B0u) { return; }
    }
    ctx->pc = 0x1C52B0u;
    // 0x1c52b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c52b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c52b4: 0xc60c0294  lwc1        $f12, 0x294($s0)
    ctx->pc = 0x1c52b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c52b8: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1c52b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c52bc: 0xc085e52  jal         func_217948
    ctx->pc = 0x1C52BCu;
    SET_GPR_U32(ctx, 31, 0x1C52C4u);
    ctx->pc = 0x1C52C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52BCu;
            // 0x1c52c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217948u;
    if (runtime->hasFunction(0x217948u)) {
        auto targetFn = runtime->lookupFunction(0x217948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52C4u; }
        if (ctx->pc != 0x1C52C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217948_0x2179e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52C4u; }
        if (ctx->pc != 0x1C52C4u) { return; }
    }
    ctx->pc = 0x1C52C4u;
    // 0x1c52c4: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1c52c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c52c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c52c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c52cc: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1c52ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c52d0: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1c52d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c52d4: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1c52d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c52d8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c52d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c52dc: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1c52dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c52e0: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1c52e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c52e4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1c52e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c52e8: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1c52e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c52ec: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1c52ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c52f0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c52f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c52f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c52f4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c52f8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1c52f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c52fc: 0x4a0002ff  vnop
    ctx->pc = 0x1c52fcu;
    // NOP operation, no action needed for VU0
    // 0x1c5300: 0x4a0002ff  vnop
    ctx->pc = 0x1c5300u;
    // NOP operation, no action needed for VU0
    // 0x1c5304: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1c5304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c5308: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1c5308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c530c: 0xda410020  lqc2        $vf1, 0x20($s2)
    ctx->pc = 0x1c530cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1c5310: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1c5310u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5314: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1c5314u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5318: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1c5318u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c531c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c531cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5320: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1c5320u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c5324: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c5324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5328: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c5328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c532c: 0x0  nop
    ctx->pc = 0x1c532cu;
    // NOP
    // 0x1c5330: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5330u;
    {
        const bool branch_taken_0x1c5330 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5330) {
            ctx->pc = 0x1C5334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5330u;
            // 0x1c5334: 0x8e0202d8  lw          $v0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5354u;
            goto label_1c5354;
        }
    }
    ctx->pc = 0x1C5338u;
    // 0x1c5338: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c5338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c533c: 0x0  nop
    ctx->pc = 0x1c533cu;
    // NOP
label_1c5340:
    // 0x1c5340: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c5340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c5344: 0x3442dfff  ori         $v0, $v0, 0xDFFF
    ctx->pc = 0x1c5344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57343);
    // 0x1c5348: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c5348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c534c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C534Cu;
    {
        const bool branch_taken_0x1c534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C534Cu;
            // 0x1c5350: 0xae0302d8  sw          $v1, 0x2D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c534c) {
            ctx->pc = 0x1C535Cu;
            goto label_1c535c;
        }
    }
    ctx->pc = 0x1C5354u;
label_1c5354:
    // 0x1c5354: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c5354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c5358: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c5358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
label_1c535c:
    // 0x1c535c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c535cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c5360: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1c5360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1c5364: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c5364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c5368: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c5368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c536c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c536cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c5370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5374: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c5374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5378: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c5378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c537c: 0xe6000150  swc1        $f0, 0x150($s0)
    ctx->pc = 0x1c537cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x1c5380: 0xe6010154  swc1        $f1, 0x154($s0)
    ctx->pc = 0x1c5380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x1c5384: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C5384u;
    {
        const bool branch_taken_0x1c5384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5384u;
            // 0x1c5388: 0xae020174  sw          $v0, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5384) {
            ctx->pc = 0x1C53C8u;
            goto label_1c53c8;
        }
    }
    ctx->pc = 0x1C538Cu;
label_1c538c:
    // 0x1c538c: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c538cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c5390: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x1c5390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x1c5394: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c5394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c5398: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x1c5398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x1c539c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c539cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c53a0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1c53a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c53a4: 0x3c05fffb  lui         $a1, 0xFFFB
    ctx->pc = 0x1c53a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
    // 0x1c53a8: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1c53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x1c53ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c53acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c53b0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1c53b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1c53b4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1c53b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1c53b8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1c53b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1c53bc: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x1c53bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1c53c0: 0xae030174  sw          $v1, 0x174($s0)
    ctx->pc = 0x1c53c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
    // 0x1c53c4: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c53c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
label_1c53c8:
    // 0x1c53c8: 0xc071156  jal         func_1C4558
    ctx->pc = 0x1C53C8u;
    SET_GPR_U32(ctx, 31, 0x1C53D0u);
    ctx->pc = 0x1C53CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C53C8u;
            // 0x1c53cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4558u;
    if (runtime->hasFunction(0x1C4558u)) {
        auto targetFn = runtime->lookupFunction(0x1C4558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C53D0u; }
        if (ctx->pc != 0x1C53D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4558_0x1c4558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C53D0u; }
        if (ctx->pc != 0x1C53D0u) { return; }
    }
    ctx->pc = 0x1C53D0u;
    // 0x1c53d0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x1c53d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1c53d4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c53d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c53d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c53d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c53dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c53dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c53e0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1c53e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1c53e4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1c53e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x1c53e8: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1c53e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1c53ec: 0x342138da  ori         $at, $at, 0x38DA
    ctx->pc = 0x1c53ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14554);
    // 0x1c53f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c53f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c53f4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1c53f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1c53f8: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c53f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c53fc: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c5400: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1c5400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c5404: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1c5404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1c5408: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c5408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c540c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1c540cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1c5410: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c5410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1c5414: 0xae030174  sw          $v1, 0x174($s0)
    ctx->pc = 0x1c5414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
label_1c5418:
    // 0x1c5418: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c5418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c541c:
    // 0x1c541c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c541cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c5420: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1c5420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c5424: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1c5424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c5428: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1c5428u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c542c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c542cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5430: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c5430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c5434: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1c5434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c5438: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C543Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5438u;
            // 0x1c543c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C50F8u: goto label_1c50f8;
            case 0x1C5100u: goto label_1c5100;
            case 0x1C5208u: goto label_1c5208;
            case 0x1C5288u: goto label_1c5288;
            case 0x1C5340u: goto label_1c5340;
            case 0x1C5354u: goto label_1c5354;
            case 0x1C535Cu: goto label_1c535c;
            case 0x1C538Cu: goto label_1c538c;
            case 0x1C53C8u: goto label_1c53c8;
            case 0x1C5418u: goto label_1c5418;
            case 0x1C541Cu: goto label_1c541c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C5440u;
}
