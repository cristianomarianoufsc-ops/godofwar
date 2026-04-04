#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5440
// Address: 0x1c5440 - 0x1c66b8
void sub_001C5440_0x1c5440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5440_0x1c5440");
#endif

    ctx->pc = 0x1c5440u;

    // 0x1c5440: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x1c5440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x1c5444: 0x7fb00280  sq          $s0, 0x280($sp)
    ctx->pc = 0x1c5444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 16));
    // 0x1c5448: 0x7fb40240  sq          $s4, 0x240($sp)
    ctx->pc = 0x1c5448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 20));
    // 0x1c544c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c544cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5450: 0x7fb10270  sq          $s1, 0x270($sp)
    ctx->pc = 0x1c5450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 17));
    // 0x1c5454: 0x7fb20260  sq          $s2, 0x260($sp)
    ctx->pc = 0x1c5454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 18));
    // 0x1c5458: 0x7fb30250  sq          $s3, 0x250($sp)
    ctx->pc = 0x1c5458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 19));
    // 0x1c545c: 0x7fb50230  sq          $s5, 0x230($sp)
    ctx->pc = 0x1c545cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 21));
    // 0x1c5460: 0xffbf0220  sd          $ra, 0x220($sp)
    ctx->pc = 0x1c5460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 31));
    // 0x1c5464: 0xe7b702a8  swc1        $f23, 0x2A8($sp)
    ctx->pc = 0x1c5464u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x1c5468: 0xe7b602a0  swc1        $f22, 0x2A0($sp)
    ctx->pc = 0x1c5468u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x1c546c: 0xe7b50298  swc1        $f21, 0x298($sp)
    ctx->pc = 0x1c546cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
    // 0x1c5470: 0xe7b40290  swc1        $f20, 0x290($sp)
    ctx->pc = 0x1c5470u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x1c5474: 0x7fa50160  sq          $a1, 0x160($sp)
    ctx->pc = 0x1c5474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 5));
    // 0x1c5478: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c5478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c547c: 0x7fa601d0  sq          $a2, 0x1D0($sp)
    ctx->pc = 0x1c547cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 6));
    // 0x1c5480: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1c5480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c5484: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1c5484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1c5488: 0x40f809  jalr        $v0
    ctx->pc = 0x1C5488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C5490u);
        ctx->pc = 0x1C548Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5488u;
            // 0x1c548c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C5490u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C54C0u: goto label_1c54c0;
            case 0x1C55D0u: goto label_1c55d0;
            case 0x1C55E8u: goto label_1c55e8;
            case 0x1C5640u: goto label_1c5640;
            case 0x1C5670u: goto label_1c5670;
            case 0x1C567Cu: goto label_1c567c;
            case 0x1C5760u: goto label_1c5760;
            case 0x1C5798u: goto label_1c5798;
            case 0x1C5808u: goto label_1c5808;
            case 0x1C5870u: goto label_1c5870;
            case 0x1C58D0u: goto label_1c58d0;
            case 0x1C58E0u: goto label_1c58e0;
            case 0x1C5940u: goto label_1c5940;
            case 0x1C5990u: goto label_1c5990;
            case 0x1C59A0u: goto label_1c59a0;
            case 0x1C59D8u: goto label_1c59d8;
            case 0x1C59FCu: goto label_1c59fc;
            case 0x1C5A40u: goto label_1c5a40;
            case 0x1C5B00u: goto label_1c5b00;
            case 0x1C5B70u: goto label_1c5b70;
            case 0x1C5BB0u: goto label_1c5bb0;
            case 0x1C5BD8u: goto label_1c5bd8;
            case 0x1C5C50u: goto label_1c5c50;
            case 0x1C5C90u: goto label_1c5c90;
            case 0x1C5CB8u: goto label_1c5cb8;
            case 0x1C5D48u: goto label_1c5d48;
            case 0x1C5D4Cu: goto label_1c5d4c;
            case 0x1C5D50u: goto label_1c5d50;
            case 0x1C5D80u: goto label_1c5d80;
            case 0x1C5DB0u: goto label_1c5db0;
            case 0x1C5DC4u: goto label_1c5dc4;
            case 0x1C5E38u: goto label_1c5e38;
            case 0x1C5E68u: goto label_1c5e68;
            case 0x1C5E7Cu: goto label_1c5e7c;
            case 0x1C5EB4u: goto label_1c5eb4;
            case 0x1C5EE0u: goto label_1c5ee0;
            case 0x1C5EF8u: goto label_1c5ef8;
            case 0x1C5F28u: goto label_1c5f28;
            case 0x1C5F2Cu: goto label_1c5f2c;
            case 0x1C5F30u: goto label_1c5f30;
            case 0x1C5F54u: goto label_1c5f54;
            case 0x1C5F58u: goto label_1c5f58;
            case 0x1C5F80u: goto label_1c5f80;
            case 0x1C5FC8u: goto label_1c5fc8;
            case 0x1C6158u: goto label_1c6158;
            case 0x1C61B8u: goto label_1c61b8;
            case 0x1C61BCu: goto label_1c61bc;
            case 0x1C61C8u: goto label_1c61c8;
            case 0x1C62B8u: goto label_1c62b8;
            case 0x1C6318u: goto label_1c6318;
            case 0x1C631Cu: goto label_1c631c;
            case 0x1C63C8u: goto label_1c63c8;
            case 0x1C63ECu: goto label_1c63ec;
            case 0x1C63FCu: goto label_1c63fc;
            case 0x1C641Cu: goto label_1c641c;
            case 0x1C6468u: goto label_1c6468;
            case 0x1C6488u: goto label_1c6488;
            case 0x1C649Cu: goto label_1c649c;
            case 0x1C64C0u: goto label_1c64c0;
            case 0x1C64E0u: goto label_1c64e0;
            case 0x1C64F0u: goto label_1c64f0;
            case 0x1C6510u: goto label_1c6510;
            case 0x1C6514u: goto label_1c6514;
            case 0x1C6534u: goto label_1c6534;
            case 0x1C653Cu: goto label_1c653c;
            case 0x1C6598u: goto label_1c6598;
            case 0x1C659Cu: goto label_1c659c;
            case 0x1C65A4u: goto label_1c65a4;
            case 0x1C65A8u: goto label_1c65a8;
            case 0x1C65F0u: goto label_1c65f0;
            case 0x1C65F4u: goto label_1c65f4;
            case 0x1C6614u: goto label_1c6614;
            case 0x1C6668u: goto label_1c6668;
            case 0x1C666Cu: goto label_1c666c;
            case 0x1C6680u: goto label_1c6680;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C5490u; }
            if (ctx->pc != 0x1C5490u) { return; }
        }
        }
    }
    ctx->pc = 0x1C5490u;
    // 0x1c5490: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c5490u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5494: 0x5680000a  bnel        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C5494u;
    {
        const bool branch_taken_0x1c5494 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5494) {
            ctx->pc = 0x1C5498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5494u;
            // 0x1c5498: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C54C0u;
            goto label_1c54c0;
        }
    }
    ctx->pc = 0x1C549Cu;
    // 0x1c549c: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c549cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c54a0: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x1c54a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x1c54a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c54a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c54a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c54a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c54ac: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c54acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
    // 0x1c54b0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1c54b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c54b4: 0x10000472  b           . + 4 + (0x472 << 2)
    ctx->pc = 0x1C54B4u;
    {
        const bool branch_taken_0x1c54b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C54B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54B4u;
            // 0x1c54b8: 0x48220800  qmfc2.ni    $v0, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54b4) {
            ctx->pc = 0x1C6680u;
            goto label_1c6680;
        }
    }
    ctx->pc = 0x1C54BCu;
    // 0x1c54bc: 0x0  nop
    ctx->pc = 0x1c54bcu;
    // NOP
label_1c54c0:
    // 0x1c54c0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c54c4: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1c54c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c54c8: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1c54c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1c54cc: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1c54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1c54d0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c54d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c54d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1c54d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c54d8: 0x40f809  jalr        $v0
    ctx->pc = 0x1C54D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C54E0u);
        ctx->pc = 0x1C54DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54D8u;
            // 0x1c54dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C54E0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C54C0u: goto label_1c54c0;
            case 0x1C55D0u: goto label_1c55d0;
            case 0x1C55E8u: goto label_1c55e8;
            case 0x1C5640u: goto label_1c5640;
            case 0x1C5670u: goto label_1c5670;
            case 0x1C567Cu: goto label_1c567c;
            case 0x1C5760u: goto label_1c5760;
            case 0x1C5798u: goto label_1c5798;
            case 0x1C5808u: goto label_1c5808;
            case 0x1C5870u: goto label_1c5870;
            case 0x1C58D0u: goto label_1c58d0;
            case 0x1C58E0u: goto label_1c58e0;
            case 0x1C5940u: goto label_1c5940;
            case 0x1C5990u: goto label_1c5990;
            case 0x1C59A0u: goto label_1c59a0;
            case 0x1C59D8u: goto label_1c59d8;
            case 0x1C59FCu: goto label_1c59fc;
            case 0x1C5A40u: goto label_1c5a40;
            case 0x1C5B00u: goto label_1c5b00;
            case 0x1C5B70u: goto label_1c5b70;
            case 0x1C5BB0u: goto label_1c5bb0;
            case 0x1C5BD8u: goto label_1c5bd8;
            case 0x1C5C50u: goto label_1c5c50;
            case 0x1C5C90u: goto label_1c5c90;
            case 0x1C5CB8u: goto label_1c5cb8;
            case 0x1C5D48u: goto label_1c5d48;
            case 0x1C5D4Cu: goto label_1c5d4c;
            case 0x1C5D50u: goto label_1c5d50;
            case 0x1C5D80u: goto label_1c5d80;
            case 0x1C5DB0u: goto label_1c5db0;
            case 0x1C5DC4u: goto label_1c5dc4;
            case 0x1C5E38u: goto label_1c5e38;
            case 0x1C5E68u: goto label_1c5e68;
            case 0x1C5E7Cu: goto label_1c5e7c;
            case 0x1C5EB4u: goto label_1c5eb4;
            case 0x1C5EE0u: goto label_1c5ee0;
            case 0x1C5EF8u: goto label_1c5ef8;
            case 0x1C5F28u: goto label_1c5f28;
            case 0x1C5F2Cu: goto label_1c5f2c;
            case 0x1C5F30u: goto label_1c5f30;
            case 0x1C5F54u: goto label_1c5f54;
            case 0x1C5F58u: goto label_1c5f58;
            case 0x1C5F80u: goto label_1c5f80;
            case 0x1C5FC8u: goto label_1c5fc8;
            case 0x1C6158u: goto label_1c6158;
            case 0x1C61B8u: goto label_1c61b8;
            case 0x1C61BCu: goto label_1c61bc;
            case 0x1C61C8u: goto label_1c61c8;
            case 0x1C62B8u: goto label_1c62b8;
            case 0x1C6318u: goto label_1c6318;
            case 0x1C631Cu: goto label_1c631c;
            case 0x1C63C8u: goto label_1c63c8;
            case 0x1C63ECu: goto label_1c63ec;
            case 0x1C63FCu: goto label_1c63fc;
            case 0x1C641Cu: goto label_1c641c;
            case 0x1C6468u: goto label_1c6468;
            case 0x1C6488u: goto label_1c6488;
            case 0x1C649Cu: goto label_1c649c;
            case 0x1C64C0u: goto label_1c64c0;
            case 0x1C64E0u: goto label_1c64e0;
            case 0x1C64F0u: goto label_1c64f0;
            case 0x1C6510u: goto label_1c6510;
            case 0x1C6514u: goto label_1c6514;
            case 0x1C6534u: goto label_1c6534;
            case 0x1C653Cu: goto label_1c653c;
            case 0x1C6598u: goto label_1c6598;
            case 0x1C659Cu: goto label_1c659c;
            case 0x1C65A4u: goto label_1c65a4;
            case 0x1C65A8u: goto label_1c65a8;
            case 0x1C65F0u: goto label_1c65f0;
            case 0x1C65F4u: goto label_1c65f4;
            case 0x1C6614u: goto label_1c6614;
            case 0x1C6668u: goto label_1c6668;
            case 0x1C666Cu: goto label_1c666c;
            case 0x1C6680u: goto label_1c6680;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C54E0u; }
            if (ctx->pc != 0x1C54E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C54E0u;
    // 0x1c54e0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1c54e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1c54e4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1c54e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1c54e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c54e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c54ec: 0xc602016c  lwc1        $f2, 0x16C($s0)
    ctx->pc = 0x1c54ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c54f0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c54f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c54f4: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x1c54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1c54f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c54f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c54fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c54fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c5500: 0x8e050174  lw          $a1, 0x174($s0)
    ctx->pc = 0x1c5500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c5504: 0xc6810060  lwc1        $f1, 0x60($s4)
    ctx->pc = 0x1c5504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5508: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x1c5508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x1c550c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c550cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1c5510: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1c5510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1c5514: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c5514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c5518: 0x30550001  andi        $s5, $v0, 0x1
    ctx->pc = 0x1c5518u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c551c: 0x46150dc1  sub.s       $f23, $f1, $f21
    ctx->pc = 0x1c551cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x1c5520: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1c5520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1c5524: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x1c5524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x1c5528: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1C5528u;
    {
        const bool branch_taken_0x1c5528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C552Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5528u;
            // 0x1c552c: 0x4600a582  mul.s       $f22, $f20, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5528) {
            ctx->pc = 0x1C55E8u;
            goto label_1c55e8;
        }
    }
    ctx->pc = 0x1C5530u;
    // 0x1c5530: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1c5530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c5534: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c5534u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c5538: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c5538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c553c: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c553cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5540: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c5540u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5544: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c5544u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5548: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c5548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c554c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c554cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5550: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c5550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c5554: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5558: 0x70041f89  pexew       $v1, $a0
    ctx->pc = 0x1c5558u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c555c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1c555cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c5560: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c5560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c5564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5568: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x1c5568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1c556c: 0xc44e0164  lwc1        $f14, 0x164($v0)
    ctx->pc = 0x1c556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c5570: 0xc44c0160  lwc1        $f12, 0x160($v0)
    ctx->pc = 0x1c5570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5574: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x1c5574u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x1c5578: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c5578u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c557c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1c557cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1c5580: 0x46167382  mul.s       $f14, $f14, $f22
    ctx->pc = 0x1c5580u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[22]);
    // 0x1c5584: 0xc07950a  jal         func_1E5428
    ctx->pc = 0x1C5584u;
    SET_GPR_U32(ctx, 31, 0x1C558Cu);
    ctx->pc = 0x1C5588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5584u;
            // 0x1c5588: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5428u;
    if (runtime->hasFunction(0x1E5428u)) {
        auto targetFn = runtime->lookupFunction(0x1E5428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C558Cu; }
        if (ctx->pc != 0x1C558Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5428_0x1e54c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C558Cu; }
        if (ctx->pc != 0x1C558Cu) { return; }
    }
    ctx->pc = 0x1C558Cu;
    // 0x1c558c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1c558cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c5590: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1c5590u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1c5594: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c5594u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c5598: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c5598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c559c: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1c559cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1c55a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c55a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c55a4: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1c55a4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c55a8: 0x70071789  pexew       $v0, $a3
    ctx->pc = 0x1c55a8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c55ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c55acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c55b0: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c55b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c55b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c55b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c55b8: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c55bc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1c55bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1c55c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C55C0u;
    {
        const bool branch_taken_0x1c55c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C55C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C55C0u;
            // 0x1c55c4: 0x46160042  mul.s       $f1, $f0, $f22 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55c0) {
            ctx->pc = 0x1C55D0u;
            goto label_1c55d0;
        }
    }
    ctx->pc = 0x1C55C8u;
    // 0x1c55c8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1c55c8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1c55cc: 0x0  nop
    ctx->pc = 0x1c55ccu;
    // NOP
label_1c55d0:
    // 0x1c55d0: 0xc6000294  lwc1        $f0, 0x294($s0)
    ctx->pc = 0x1c55d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c55d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c55d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c55d8: 0x46150028  max.s       $f0, $f0, $f21
    ctx->pc = 0x1c55d8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[21]);
    // 0x1c55dc: 0x46170029  min.s       $f0, $f0, $f23
    ctx->pc = 0x1c55dcu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[23]);
    // 0x1c55e0: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x1C55E0u;
    {
        const bool branch_taken_0x1c55e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C55E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C55E0u;
            // 0x1c55e4: 0xe6000294  swc1        $f0, 0x294($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55e0) {
            ctx->pc = 0x1C5B00u;
            goto label_1c5b00;
        }
    }
    ctx->pc = 0x1C55E8u;
label_1c55e8:
    // 0x1c55e8: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1c55e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c55ec: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1c55ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c55f0: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x1c55f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c55f4: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c55f4u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c55f8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1c55f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c55fc: 0x7ba201c0  lq          $v0, 0x1C0($sp)
    ctx->pc = 0x1c55fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1c5600: 0x7e020260  sq          $v0, 0x260($s0)
    ctx->pc = 0x1c5600u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), GPR_VEC(ctx, 2));
    // 0x1c5604: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1c5604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1c5608: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c5608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c560c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c560cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c5610: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5610u;
    {
        const bool branch_taken_0x1c5610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5610u;
            // 0x1c5614: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5610) {
            ctx->pc = 0x1C5640u;
            goto label_1c5640;
        }
    }
    ctx->pc = 0x1C5618u;
    // 0x1c5618: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c5618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c561c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C561Cu;
    {
        const bool branch_taken_0x1c561c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C561Cu;
            // 0x1c5620: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c561c) {
            ctx->pc = 0x1C5640u;
            goto label_1c5640;
        }
    }
    ctx->pc = 0x1C5624u;
    // 0x1c5624: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c5624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c5628: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1c5628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1c562c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C562Cu;
    {
        const bool branch_taken_0x1c562c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C562Cu;
            // 0x1c5630: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c562c) {
            ctx->pc = 0x1C5640u;
            goto label_1c5640;
        }
    }
    ctx->pc = 0x1C5634u;
    // 0x1c5634: 0x16a00132  bnez        $s5, . + 4 + (0x132 << 2)
    ctx->pc = 0x1C5634u;
    {
        const bool branch_taken_0x1c5634 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5634) {
            ctx->pc = 0x1C5B00u;
            goto label_1c5b00;
        }
    }
    ctx->pc = 0x1C563Cu;
    // 0x1c563c: 0x0  nop
    ctx->pc = 0x1c563cu;
    // NOP
label_1c5640:
    // 0x1c5640: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1c5640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c5644: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c5644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c5648: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1C5648u;
    {
        const bool branch_taken_0x1c5648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C564Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5648u;
            // 0x1c564c: 0xdba201d0  lqc2        $vf2, 0x1D0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5648) {
            ctx->pc = 0x1C5808u;
            goto label_1c5808;
        }
    }
    ctx->pc = 0x1C5650u;
    // 0x1c5650: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1c5650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1c5654: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1c5654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1c5658: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5658u;
    {
        const bool branch_taken_0x1c5658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5658) {
            ctx->pc = 0x1C5670u;
            goto label_1c5670;
        }
    }
    ctx->pc = 0x1C5660u;
    // 0x1c5660: 0xc090d56  jal         func_243558
    ctx->pc = 0x1C5660u;
    SET_GPR_U32(ctx, 31, 0x1C5668u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5668u; }
        if (ctx->pc != 0x1C5668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5668u; }
        if (ctx->pc != 0x1C5668u) { return; }
    }
    ctx->pc = 0x1C5668u;
    // 0x1c5668: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5668u;
    {
        const bool branch_taken_0x1c5668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C566Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5668u;
            // 0x1c566c: 0x90420012  lbu         $v0, 0x12($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5668) {
            ctx->pc = 0x1C567Cu;
            goto label_1c567c;
        }
    }
    ctx->pc = 0x1C5670u;
label_1c5670:
    // 0x1c5670: 0xc090d54  jal         func_243550
    ctx->pc = 0x1C5670u;
    SET_GPR_U32(ctx, 31, 0x1C5678u);
    ctx->pc = 0x243550u;
    if (runtime->hasFunction(0x243550u)) {
        auto targetFn = runtime->lookupFunction(0x243550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5678u; }
        if (ctx->pc != 0x1C5678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243550_0x243558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5678u; }
        if (ctx->pc != 0x1C5678u) { return; }
    }
    ctx->pc = 0x1C5678u;
    // 0x1c5678: 0x94420038  lhu         $v0, 0x38($v0)
    ctx->pc = 0x1c5678u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1c567c:
    // 0x1c567c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1c567cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1c5680: 0x104000de  beqz        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x1C5680u;
    {
        const bool branch_taken_0x1c5680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5680u;
            // 0x1c5684: 0xdba40160  lqc2        $vf4, 0x160($sp) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5680) {
            ctx->pc = 0x1C59FCu;
            goto label_1c59fc;
        }
    }
    ctx->pc = 0x1C5688u;
    // 0x1c5688: 0x4b040043  vaddw.x     $vf1, $vf0, $vf4w
    ctx->pc = 0x1c5688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c568c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c568cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c5690: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c5690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5694: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1c5694u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c569c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c569cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c56a0: 0x0  nop
    ctx->pc = 0x1c56a0u;
    // NOP
    // 0x1c56a4: 0x450000d5  bc1f        . + 4 + (0xD5 << 2)
    ctx->pc = 0x1C56A4u;
    {
        const bool branch_taken_0x1c56a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C56A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C56A4u;
            // 0x1c56a8: 0x26030050  addiu       $v1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56a4) {
            ctx->pc = 0x1C59FCu;
            goto label_1c59fc;
        }
    }
    ctx->pc = 0x1C56ACu;
    // 0x1c56ac: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x1c56acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1c56b0: 0x4be320aa  vmul.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x1c56b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c56b4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c56b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c56b8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c56b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c56bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c56bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c56c0: 0x4b010044  vsubx.x     $vf1, $vf0, $vf1x
    ctx->pc = 0x1c56c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c56c4: 0x4b04085b  vmulw.x     $vf1, $vf1, $vf4w
    ctx->pc = 0x1c56c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c56c8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c56c8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c56cc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c56ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c56d0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c56d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c56d4: 0x0  nop
    ctx->pc = 0x1c56d4u;
    // NOP
    // 0x1c56d8: 0x4502002f  bc1fl       . + 4 + (0x2F << 2)
    ctx->pc = 0x1C56D8u;
    {
        const bool branch_taken_0x1c56d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c56d8) {
            ctx->pc = 0x1C56DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C56D8u;
            // 0x1c56dc: 0x8e020320  lw          $v0, 0x320($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5798u;
            goto label_1c5798;
        }
    }
    ctx->pc = 0x1C56E0u;
    // 0x1c56e0: 0xfba30100  sqc2        $vf3, 0x100($sp)
    ctx->pc = 0x1c56e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c56e4: 0xdba201c0  lqc2        $vf2, 0x1C0($sp)
    ctx->pc = 0x1c56e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1c56e8: 0x4be3106c  vsub.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x1c56e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c56ec: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1c56ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c56f0: 0xda020050  lqc2        $vf2, 0x50($s0)
    ctx->pc = 0x1c56f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1c56f4: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x1c56f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c56f8: 0xdba301c0  lqc2        $vf3, 0x1C0($sp)
    ctx->pc = 0x1c56f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1c56fc: 0x4be218ac  vsub.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x1c56fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5700: 0xfa020050  sqc2        $vf2, 0x50($s0)
    ctx->pc = 0x1c5700u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c5704: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1c5704u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1c5708: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1c5708u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x1c570c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1c570cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c5710: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1c5710u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5714: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1c5714u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c5718: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1c5718u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c571c: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1c571cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5720: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1c5720u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1c5724: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c5724u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c5728: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c5728u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c572c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1c572cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5730: 0x4a0002ff  vnop
    ctx->pc = 0x1c5730u;
    // NOP operation, no action needed for VU0
    // 0x1c5734: 0x4a0002ff  vnop
    ctx->pc = 0x1c5734u;
    // NOP operation, no action needed for VU0
    // 0x1c5738: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c5738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c573c: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1c573cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5740: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c5740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c5744: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x1c5744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x1c5748: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5748u;
    {
        const bool branch_taken_0x1c5748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5748) {
            ctx->pc = 0x1C574Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5748u;
            // 0x1c574c: 0x34622000  ori         $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5760u;
            goto label_1c5760;
        }
    }
    ctx->pc = 0x1C5750u;
    // 0x1c5750: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c5750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c5754: 0x3442dfff  ori         $v0, $v0, 0xDFFF
    ctx->pc = 0x1c5754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57343);
    // 0x1c5758: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c5758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c575c: 0x0  nop
    ctx->pc = 0x1c575cu;
    // NOP
label_1c5760:
    // 0x1c5760: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c5760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1c5764: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c5764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c5768: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1c5768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1c576c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c576cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c5770: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c5770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c5774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5778: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1c5778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1c577c: 0x342138da  ori         $at, $at, 0x38DA
    ctx->pc = 0x1c577cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14554);
    // 0x1c5780: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c5780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5784: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c5784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c5788: 0xe6000150  swc1        $f0, 0x150($s0)
    ctx->pc = 0x1c5788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x1c578c: 0xe6010154  swc1        $f1, 0x154($s0)
    ctx->pc = 0x1c578cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x1c5790: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1c5790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1c5794: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c5794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
label_1c5798:
    // 0x1c5798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c579c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c579cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c57a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c57a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c57a4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c57a8: 0xc44c0158  lwc1        $f12, 0x158($v0)
    ctx->pc = 0x1c57a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c57ac: 0xc44d015c  lwc1        $f13, 0x15C($v0)
    ctx->pc = 0x1c57acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c57b0: 0x460c1302  mul.s       $f12, $f2, $f12
    ctx->pc = 0x1c57b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x1c57b4: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x1c57b4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1c57b8: 0xc079532  jal         func_1E54C8
    ctx->pc = 0x1C57B8u;
    SET_GPR_U32(ctx, 31, 0x1C57C0u);
    ctx->pc = 0x1C57BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C57B8u;
            // 0x1c57bc: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E54C8u;
    if (runtime->hasFunction(0x1E54C8u)) {
        auto targetFn = runtime->lookupFunction(0x1E54C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C57C0u; }
        if (ctx->pc != 0x1C57C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e54c8_0x1e5530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C57C0u; }
        if (ctx->pc != 0x1C57C0u) { return; }
    }
    ctx->pc = 0x1C57C0u;
    // 0x1c57c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c57c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c57c4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c57c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c57c8: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c57c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c57cc: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c57ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c57d0: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1c57d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1c57d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c57d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c57d8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c57d8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c57dc: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x1c57dcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c57e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c57e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c57e4: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c57e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c57e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c57e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c57ec: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c57f0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1c57f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1c57f4: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x1C57F4u;
    {
        const bool branch_taken_0x1c57f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C57F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C57F4u;
            // 0x1c57f8: 0x46160542  mul.s       $f21, $f0, $f22 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57f4) {
            ctx->pc = 0x1C59FCu;
            goto label_1c59fc;
        }
    }
    ctx->pc = 0x1C57FCu;
    // 0x1c57fc: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1C57FCu;
    {
        const bool branch_taken_0x1c57fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C57FCu;
            // 0x1c5800: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57fc) {
            ctx->pc = 0x1C59FCu;
            goto label_1c59fc;
        }
    }
    ctx->pc = 0x1C5804u;
    // 0x1c5804: 0x0  nop
    ctx->pc = 0x1c5804u;
    // NOP
label_1c5808:
    // 0x1c5808: 0x4a82105b  vmulw.y     $vf1, $vf2, $vf2w
    ctx->pc = 0x1c5808u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c580c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c580cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c5810: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c5810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c5814: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c5814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c5818: 0x4b010045  vsuby.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1c5818u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c581c: 0xdba301d0  lqc2        $vf3, 0x1D0($sp)
    ctx->pc = 0x1c581cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1c5820: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c5820u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5824: 0x4b03109b  vmulw.x     $vf2, $vf2, $vf3w
    ctx->pc = 0x1c5824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5828: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c5828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c582c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1c582cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c5830: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x1c5830u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x1c5834: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c5834u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5838: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1c5838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c583c: 0x0  nop
    ctx->pc = 0x1c583cu;
    // NOP
    // 0x1c5840: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x1C5840u;
    {
        const bool branch_taken_0x1c5840 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5840) {
            ctx->pc = 0x1C5844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5840u;
            // 0x1c5844: 0x8e0302d8  lw          $v1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5870u;
            goto label_1c5870;
        }
    }
    ctx->pc = 0x1C5848u;
    // 0x1c5848: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x1c5848u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x1c584c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1c584cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5850: 0x0  nop
    ctx->pc = 0x1c5850u;
    // NOP
    // 0x1c5854: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5854u;
    {
        const bool branch_taken_0x1c5854 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5854u;
            // 0x1c5858: 0x8e0302d8  lw          $v1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5854) {
            ctx->pc = 0x1C5870u;
            goto label_1c5870;
        }
    }
    ctx->pc = 0x1C585Cu;
    // 0x1c585c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1c585cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1c5860: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c5860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c5864: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c5864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c5868: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c5868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
    // 0x1c586c: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_1c5870:
    // 0x1c5870: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1c5870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x1c5874: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c5874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c5878: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1C5878u;
    {
        const bool branch_taken_0x1c5878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5878) {
            ctx->pc = 0x1C59FCu;
            goto label_1c59fc;
        }
    }
    ctx->pc = 0x1C5880u;
    // 0x1c5880: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1c5880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1c5884: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1c5884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1c5888: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C5888u;
    {
        const bool branch_taken_0x1c5888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C588Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5888u;
            // 0x1c588c: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5888) {
            ctx->pc = 0x1C58D0u;
            goto label_1c58d0;
        }
    }
    ctx->pc = 0x1C5890u;
    // 0x1c5890: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C5890u;
    {
        const bool branch_taken_0x1c5890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5890) {
            ctx->pc = 0x1C58E0u;
            goto label_1c58e0;
        }
    }
    ctx->pc = 0x1C5898u;
    // 0x1c5898: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1c5898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1c589c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c589cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c58a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c58a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c58a4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c58a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c58a8: 0x0  nop
    ctx->pc = 0x1c58a8u;
    // NOP
    // 0x1c58ac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C58ACu;
    {
        const bool branch_taken_0x1c58ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C58B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C58ACu;
            // 0x1c58b0: 0x34628000  ori         $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c58ac) {
            ctx->pc = 0x1C58D0u;
            goto label_1c58d0;
        }
    }
    ctx->pc = 0x1C58B4u;
    // 0x1c58b4: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x1c58b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c58b8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c58b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c58bc: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c58bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1c58c0: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c58c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c58c4: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c58c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c58c8: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c58c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c58cc: 0x0  nop
    ctx->pc = 0x1c58ccu;
    // NOP
label_1c58d0:
    // 0x1c58d0: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c58d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c58d4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1c58d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1c58d8: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C58D8u;
    {
        const bool branch_taken_0x1c58d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c58d8) {
            ctx->pc = 0x1C58DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C58D8u;
            // 0x1c58dc: 0x8e020320  lw          $v0, 0x320($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C59A0u;
            goto label_1c59a0;
        }
    }
    ctx->pc = 0x1C58E0u;
label_1c58e0:
    // 0x1c58e0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1c58e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1c58e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c58e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c58e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c58e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c58ec: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c58ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c58f0: 0x0  nop
    ctx->pc = 0x1c58f0u;
    // NOP
    // 0x1c58f4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1C58F4u;
    {
        const bool branch_taken_0x1c58f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C58F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C58F4u;
            // 0x1c58f8: 0x8e020320  lw          $v0, 0x320($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c58f4) {
            ctx->pc = 0x1C5940u;
            goto label_1c5940;
        }
    }
    ctx->pc = 0x1C58FCu;
    // 0x1c58fc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c58fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c5900: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c5900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c5904: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c5904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c5908: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1c5908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c590c: 0xc4400150  lwc1        $f0, 0x150($v0)
    ctx->pc = 0x1c590cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5910: 0xc441014c  lwc1        $f1, 0x14C($v0)
    ctx->pc = 0x1c5910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5914: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c5914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c5918: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c5918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c591c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1c591cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1c5920: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x1c5920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1c5924: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x1c5924u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x1c5928: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1c5928u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1c592c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1c592cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c5930: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1c5930u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1c5934: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1C5934u;
    {
        const bool branch_taken_0x1c5934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5934u;
            // 0x1c5938: 0xda010260  lqc2        $vf1, 0x260($s0) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5934) {
            ctx->pc = 0x1C59D8u;
            goto label_1c59d8;
        }
    }
    ctx->pc = 0x1C593Cu;
    // 0x1c593c: 0x0  nop
    ctx->pc = 0x1c593cu;
    // NOP
label_1c5940:
    // 0x1c5940: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c5940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c5944: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c5944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c5948: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c5948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c594c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1c594cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c5950: 0xc4400154  lwc1        $f0, 0x154($v0)
    ctx->pc = 0x1c5950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5954: 0xc441014c  lwc1        $f1, 0x14C($v0)
    ctx->pc = 0x1c5954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5958: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1c5958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1c595c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1c595cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1c5960: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1c5960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1c5964: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x1c5964u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1c5968: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x1c5968u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x1c596c: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1c596cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1c5970: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1c5970u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5974: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5974u;
    {
        const bool branch_taken_0x1c5974 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5974) {
            ctx->pc = 0x1C5990u;
            goto label_1c5990;
        }
    }
    ctx->pc = 0x1C597Cu;
    // 0x1c597c: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c5980: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c5980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c5984: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1c5984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1c5988: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c5988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c598c: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c598cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
label_1c5990:
    // 0x1c5990: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1c5990u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1c5994: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1c5994u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1c5998: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C5998u;
    {
        const bool branch_taken_0x1c5998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5998u;
            // 0x1c599c: 0xda010260  lqc2        $vf1, 0x260($s0) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5998) {
            ctx->pc = 0x1C59D8u;
            goto label_1c59d8;
        }
    }
    ctx->pc = 0x1C59A0u;
label_1c59a0:
    // 0x1c59a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c59a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59a4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c59a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c59a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c59a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c59ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c59acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c59b0: 0xc44c0138  lwc1        $f12, 0x138($v0)
    ctx->pc = 0x1c59b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c59b4: 0xc44d013c  lwc1        $f13, 0x13C($v0)
    ctx->pc = 0x1c59b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c59b8: 0x460c1302  mul.s       $f12, $f2, $f12
    ctx->pc = 0x1c59b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x1c59bc: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x1c59bcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1c59c0: 0xc079532  jal         func_1E54C8
    ctx->pc = 0x1C59C0u;
    SET_GPR_U32(ctx, 31, 0x1C59C8u);
    ctx->pc = 0x1C59C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C59C0u;
            // 0x1c59c4: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E54C8u;
    if (runtime->hasFunction(0x1E54C8u)) {
        auto targetFn = runtime->lookupFunction(0x1E54C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C59C8u; }
        if (ctx->pc != 0x1C59C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e54c8_0x1e5530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C59C8u; }
        if (ctx->pc != 0x1C59C8u) { return; }
    }
    ctx->pc = 0x1C59C8u;
    // 0x1c59c8: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x1c59c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1c59cc: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x1c59ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1c59d0: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c59d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c59d4: 0x0  nop
    ctx->pc = 0x1c59d4u;
    // NOP
label_1c59d8:
    // 0x1c59d8: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c59d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c59dc: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c59dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c59e0: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1c59e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c59e4: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1c59e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1c59e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c59e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c59ec: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c59ecu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c59f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c59f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c59f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c59f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c59f8: 0x46160542  mul.s       $f21, $f0, $f22
    ctx->pc = 0x1c59f8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1c59fc:
    // 0x1c59fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c59fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5a00: 0xc085e52  jal         func_217948
    ctx->pc = 0x1C5A00u;
    SET_GPR_U32(ctx, 31, 0x1C5A08u);
    ctx->pc = 0x1C5A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A00u;
            // 0x1c5a04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217948u;
    if (runtime->hasFunction(0x217948u)) {
        auto targetFn = runtime->lookupFunction(0x217948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A08u; }
        if (ctx->pc != 0x1C5A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217948_0x2179e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A08u; }
        if (ctx->pc != 0x1C5A08u) { return; }
    }
    ctx->pc = 0x1C5A08u;
    // 0x1c5a08: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x1c5a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x1c5a0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c5a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a10: 0xc085e52  jal         func_217948
    ctx->pc = 0x1C5A10u;
    SET_GPR_U32(ctx, 31, 0x1C5A18u);
    ctx->pc = 0x1C5A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A10u;
            // 0x1c5a14: 0xc60c0294  lwc1        $f12, 0x294($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x217948u;
    if (runtime->hasFunction(0x217948u)) {
        auto targetFn = runtime->lookupFunction(0x217948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A18u; }
        if (ctx->pc != 0x1C5A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217948_0x2179e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A18u; }
        if (ctx->pc != 0x1C5A18u) { return; }
    }
    ctx->pc = 0x1C5A18u;
    // 0x1c5a18: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1c5a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x1c5a1c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1c5a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1c5a20: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c5a24: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c5a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c5a28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c5a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5a2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c5a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c5a30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5A30u;
    {
        const bool branch_taken_0x1c5a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a30) {
            ctx->pc = 0x1C5A40u;
            goto label_1c5a40;
        }
    }
    ctx->pc = 0x1C5A38u;
    // 0x1c5a38: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c5a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c5a3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c5a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c5a40:
    // 0x1c5a40: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1c5a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1c5a44: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c5a44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1c5a48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5a4c: 0xc6140294  lwc1        $f20, 0x294($s0)
    ctx->pc = 0x1c5a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c5a50: 0x4600b801  sub.s       $f0, $f23, $f0
    ctx->pc = 0x1c5a50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x1c5a54: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x1c5a54u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x1c5a58: 0x4601a528  max.s       $f20, $f20, $f1
    ctx->pc = 0x1c5a58u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[1]);
    // 0x1c5a5c: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x1c5a5cu;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
    // 0x1c5a60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c5a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a64: 0xc085e52  jal         func_217948
    ctx->pc = 0x1C5A64u;
    SET_GPR_U32(ctx, 31, 0x1C5A6Cu);
    ctx->pc = 0x1C5A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A64u;
            // 0x1c5a68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x217948u;
    if (runtime->hasFunction(0x217948u)) {
        auto targetFn = runtime->lookupFunction(0x217948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A6Cu; }
        if (ctx->pc != 0x1C5A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217948_0x2179e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A6Cu; }
        if (ctx->pc != 0x1C5A6Cu) { return; }
    }
    ctx->pc = 0x1C5A6Cu;
    // 0x1c5a6c: 0xdba101f0  lqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x1c5a6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1c5a70: 0xdba301e0  lqc2        $vf3, 0x1E0($sp)
    ctx->pc = 0x1c5a70u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1c5a74: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1c5a74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5a78: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1c5a78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c5a7c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1c5a7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5a80: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1c5a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5a84: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1c5a84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c5a88: 0xdba501f0  lqc2        $vf5, 0x1F0($sp)
    ctx->pc = 0x1c5a88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1c5a8c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c5a8cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c5a90: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c5a90u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c5a94: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1c5a94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5a98: 0x4a0002ff  vnop
    ctx->pc = 0x1c5a98u;
    // NOP operation, no action needed for VU0
    // 0x1c5a9c: 0x4a0002ff  vnop
    ctx->pc = 0x1c5a9cu;
    // NOP operation, no action needed for VU0
    // 0x1c5aa0: 0x4be520ec  vsub.xyzw   $vf3, $vf4, $vf5
    ctx->pc = 0x1c5aa0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c5aa4: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1c5aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c5aa8: 0x4be3192a  vmul.xyzw   $vf4, $vf3, $vf3
    ctx->pc = 0x1c5aa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c5aac: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1c5aacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5ab0: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1c5ab0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5ab4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c5ab4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c5ab8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c5ab8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c5abc: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1c5abcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c5ac0: 0x4a0002ff  vnop
    ctx->pc = 0x1c5ac0u;
    // NOP operation, no action needed for VU0
    // 0x1c5ac4: 0x4a0002ff  vnop
    ctx->pc = 0x1c5ac4u;
    // NOP operation, no action needed for VU0
    // 0x1c5ac8: 0x4be310aa  vmul.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1c5ac8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5acc: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1c5accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c5ad0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c5ad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5ad4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c5ad4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5ad8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c5ad8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c5adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5ae0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1c5ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1c5ae4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1c5ae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1c5ae8: 0xc6010294  lwc1        $f1, 0x294($s0)
    ctx->pc = 0x1c5ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5aec: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x1c5aecu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x1c5af0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1c5af0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c5af4: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x1c5af4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x1c5af8: 0xe6010294  swc1        $f1, 0x294($s0)
    ctx->pc = 0x1c5af8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
    // 0x1c5afc: 0x0  nop
    ctx->pc = 0x1c5afcu;
    // NOP
label_1c5b00:
    // 0x1c5b00: 0xc07113a  jal         func_1C44E8
    ctx->pc = 0x1C5B00u;
    SET_GPR_U32(ctx, 31, 0x1C5B08u);
    ctx->pc = 0x1C5B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B00u;
            // 0x1c5b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C44E8u;
    if (runtime->hasFunction(0x1C44E8u)) {
        auto targetFn = runtime->lookupFunction(0x1C44E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B08u; }
        if (ctx->pc != 0x1C5B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C44E8_0x1c44e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B08u; }
        if (ctx->pc != 0x1C5B08u) { return; }
    }
    ctx->pc = 0x1C5B08u;
    // 0x1c5b08: 0xc60c0294  lwc1        $f12, 0x294($s0)
    ctx->pc = 0x1c5b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5b0c: 0xc085e52  jal         func_217948
    ctx->pc = 0x1C5B0Cu;
    SET_GPR_U32(ctx, 31, 0x1C5B14u);
    ctx->pc = 0x1C5B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B0Cu;
            // 0x1c5b10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217948u;
    if (runtime->hasFunction(0x217948u)) {
        auto targetFn = runtime->lookupFunction(0x217948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B14u; }
        if (ctx->pc != 0x1C5B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217948_0x2179e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B14u; }
        if (ctx->pc != 0x1C5B14u) { return; }
    }
    ctx->pc = 0x1C5B14u;
    // 0x1c5b14: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1c5b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x1c5b18: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1c5b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c5b1c: 0xda020120  lqc2        $vf2, 0x120($s0)
    ctx->pc = 0x1c5b1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1c5b20: 0xd8810010  lqc2        $vf1, 0x10($a0)
    ctx->pc = 0x1c5b20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c5b24: 0x4be20859  vmuly.xyzw  $vf1, $vf1, $vf2y
    ctx->pc = 0x1c5b24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5b28: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c5b28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c5b2c: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1c5b2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5b30: 0xfba201b0  sqc2        $vf2, 0x1B0($sp)
    ctx->pc = 0x1c5b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c5b34: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c5b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c5b38: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c5b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c5b3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c5b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c5b40: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5B40u;
    {
        const bool branch_taken_0x1c5b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b40) {
            ctx->pc = 0x1C5B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B40u;
            // 0x1c5b44: 0xd8810030  lqc2        $vf1, 0x30($a0) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5B70u;
            goto label_1c5b70;
        }
    }
    ctx->pc = 0x1C5B48u;
    // 0x1c5b48: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1c5b48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5b4c: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c5b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5b50: 0xda020130  lqc2        $vf2, 0x130($s0)
    ctx->pc = 0x1c5b50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1c5b54: 0xd8810010  lqc2        $vf1, 0x10($a0)
    ctx->pc = 0x1c5b54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c5b58: 0x4be20859  vmuly.xyzw  $vf1, $vf1, $vf2y
    ctx->pc = 0x1c5b58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5b5c: 0xdba301b0  lqc2        $vf3, 0x1B0($sp)
    ctx->pc = 0x1c5b5cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c5b60: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1c5b60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c5b64: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C5B64u;
    {
        const bool branch_taken_0x1c5b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B64u;
            // 0x1c5b68: 0xfba301b0  sqc2        $vf3, 0x1B0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b64) {
            ctx->pc = 0x1C5BB0u;
            goto label_1c5bb0;
        }
    }
    ctx->pc = 0x1C5B6Cu;
    // 0x1c5b6c: 0x0  nop
    ctx->pc = 0x1c5b6cu;
    // NOP
label_1c5b70:
    // 0x1c5b70: 0xdba401b0  lqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x1c5b70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c5b74: 0x4be1206c  vsub.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x1c5b74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5b78: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x1c5b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5b7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c5b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5b80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5b84: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x1c5b84u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x1c5b88: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c5b88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c5b8c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c5b8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c5b90: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1c5b90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5b94: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c5b94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5b98: 0xda020130  lqc2        $vf2, 0x130($s0)
    ctx->pc = 0x1c5b98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1c5b9c: 0xd8810010  lqc2        $vf1, 0x10($a0)
    ctx->pc = 0x1c5b9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c5ba0: 0x4be20859  vmuly.xyzw  $vf1, $vf1, $vf2y
    ctx->pc = 0x1c5ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5ba4: 0xd8820030  lqc2        $vf2, 0x30($a0)
    ctx->pc = 0x1c5ba4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1c5ba8: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1c5ba8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c5bac: 0xfba301b0  sqc2        $vf3, 0x1B0($sp)
    ctx->pc = 0x1c5bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[3]));
label_1c5bb0:
    // 0x1c5bb0: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c5bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c5bb4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1c5bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1c5bb8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c5bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c5bbc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5BBCu;
    {
        const bool branch_taken_0x1c5bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5bbc) {
            ctx->pc = 0x1C5BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5BBCu;
            // 0x1c5bc0: 0xc6000294  lwc1        $f0, 0x294($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5BD8u;
            goto label_1c5bd8;
        }
    }
    ctx->pc = 0x1C5BC4u;
    // 0x1c5bc4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1c5bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1c5bc8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c5bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c5bcc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1C5BCCu;
    {
        const bool branch_taken_0x1c5bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5bcc) {
            ctx->pc = 0x1C5C90u;
            goto label_1c5c90;
        }
    }
    ctx->pc = 0x1C5BD4u;
    // 0x1c5bd4: 0xc6000294  lwc1        $f0, 0x294($s0)
    ctx->pc = 0x1c5bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5bd8:
    // 0x1c5bd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c5bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5bdc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c5bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c5be0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c5be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5be4: 0xc085e52  jal         func_217948
    ctx->pc = 0x1C5BE4u;
    SET_GPR_U32(ctx, 31, 0x1C5BECu);
    ctx->pc = 0x1C5BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5BE4u;
            // 0x1c5be8: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x217948u;
    if (runtime->hasFunction(0x217948u)) {
        auto targetFn = runtime->lookupFunction(0x217948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5BECu; }
        if (ctx->pc != 0x1C5BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217948_0x2179e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5BECu; }
        if (ctx->pc != 0x1C5BECu) { return; }
    }
    ctx->pc = 0x1C5BECu;
    // 0x1c5bec: 0xdba50200  lqc2        $vf5, 0x200($sp)
    ctx->pc = 0x1c5becu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1c5bf0: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1c5bf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c5bf4: 0x4be5206c  vsub.xyzw   $vf1, $vf4, $vf5
    ctx->pc = 0x1c5bf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5bf8: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x1c5bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5bfc: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1c5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c5c00: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c5c00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c5c04: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c5c04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5c08: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x1c5c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5c0c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1c5c0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c5c10: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1c5c10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5c14: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1c5c14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5c18: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c5c1c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c5c1cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c5c20: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c5c20u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c5c24: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1c5c24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5c28: 0x4a0002ff  vnop
    ctx->pc = 0x1c5c28u;
    // NOP operation, no action needed for VU0
    // 0x1c5c2c: 0x4a0002ff  vnop
    ctx->pc = 0x1c5c2cu;
    // NOP operation, no action needed for VU0
    // 0x1c5c30: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x1c5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c5c34: 0x4be20b3c  vmove.xyzw  $vf2, $vf1
    ctx->pc = 0x1c5c34u;
    ctx->vu0_vf[2] = ctx->vu0_vf[1];
    // 0x1c5c38: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1c5c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1c5c3c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1c5c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c5c40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5C40u;
    {
        const bool branch_taken_0x1c5c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C40u;
            // 0x1c5c44: 0xfba20130  sqc2        $vf2, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c40) {
            ctx->pc = 0x1C5C50u;
            goto label_1c5c50;
        }
    }
    ctx->pc = 0x1C5C48u;
    // 0x1c5c48: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1c5c48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5c4c: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1c5c4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1c5c50:
    // 0x1c5c50: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1c5c50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c5c54: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1c5c54u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x1c5c58: 0xf8620020  sqc2        $vf2, 0x20($v1)
    ctx->pc = 0x1c5c58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c5c5c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1c5c5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c5c60: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1c5c60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5c64: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1c5c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c5c68: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1c5c68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5c6c: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1c5c6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5c70: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c5c70u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c5c74: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c5c74u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c5c78: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1c5c78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5c7c: 0x4a0002ff  vnop
    ctx->pc = 0x1c5c7cu;
    // NOP operation, no action needed for VU0
    // 0x1c5c80: 0x4a0002ff  vnop
    ctx->pc = 0x1c5c80u;
    // NOP operation, no action needed for VU0
    // 0x1c5c84: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c5c84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5c88: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x1C5C88u;
    {
        const bool branch_taken_0x1c5c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C88u;
            // 0x1c5c8c: 0xfba10040  sqc2        $vf1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c88) {
            ctx->pc = 0x1C5F54u;
            goto label_1c5f54;
        }
    }
    ctx->pc = 0x1C5C90u;
label_1c5c90:
    // 0x1c5c90: 0x56a000b1  bnel        $s5, $zero, . + 4 + (0xB1 << 2)
    ctx->pc = 0x1C5C90u;
    {
        const bool branch_taken_0x1c5c90 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5c90) {
            ctx->pc = 0x1C5C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C90u;
            // 0x1c5c94: 0xc6000294  lwc1        $f0, 0x294($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5F58u;
            goto label_1c5f58;
        }
    }
    ctx->pc = 0x1C5C98u;
    // 0x1c5c98: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c5c9c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1c5c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1c5ca0: 0x544000ad  bnel        $v0, $zero, . + 4 + (0xAD << 2)
    ctx->pc = 0x1C5CA0u;
    {
        const bool branch_taken_0x1c5ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5ca0) {
            ctx->pc = 0x1C5CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CA0u;
            // 0x1c5ca4: 0xc6000294  lwc1        $f0, 0x294($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5F58u;
            goto label_1c5f58;
        }
    }
    ctx->pc = 0x1C5CA8u;
    // 0x1c5ca8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5cac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c5cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c5cb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c5cb4: 0x0  nop
    ctx->pc = 0x1c5cb4u;
    // NOP
label_1c5cb8:
    // 0x1c5cb8: 0x0  nop
    ctx->pc = 0x1c5cb8u;
    // NOP
    // 0x1c5cbc: 0x0  nop
    ctx->pc = 0x1c5cbcu;
    // NOP
    // 0x1c5cc0: 0x0  nop
    ctx->pc = 0x1c5cc0u;
    // NOP
    // 0x1c5cc4: 0x0  nop
    ctx->pc = 0x1c5cc4u;
    // NOP
    // 0x1c5cc8: 0x0  nop
    ctx->pc = 0x1c5cc8u;
    // NOP
    // 0x1c5ccc: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C5CCCu;
    {
        const bool branch_taken_0x1c5ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C5CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CCCu;
            // 0x1c5cd0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ccc) {
            ctx->pc = 0x1C5CB8u;
            runtime->cooperativeGuestYield();
            goto label_1c5cb8;
        }
    }
    ctx->pc = 0x1C5CD4u;
    // 0x1c5cd4: 0xda830020  lqc2        $vf3, 0x20($s4)
    ctx->pc = 0x1c5cd4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1c5cd8: 0xfba30140  sqc2        $vf3, 0x140($sp)
    ctx->pc = 0x1c5cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c5cdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c5cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5ce0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c5ce0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c5ce4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1c5ce4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c5ce8: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x1c5ce8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x1c5cec: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1c5cecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5cf0: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x1c5cf0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]);
    // 0x1c5cf4: 0x4bc3086e  vopmsub.xyz $vf1, $vf1, $vf3
    ctx->pc = 0x1c5cf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c5cf8: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1c5cf8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5cfc: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x1c5cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5d00: 0x4be320ac  vsub.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x1c5d00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5d04: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1c5d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c5d08: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1c5d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c5d0c: 0x4be120ac  vsub.xyzw   $vf2, $vf4, $vf1
    ctx->pc = 0x1c5d0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5d10: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x1c5d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c5d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5d18: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1c5d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5d1c: 0x8e820388  lw          $v0, 0x388($s4)
    ctx->pc = 0x1c5d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 904)));
    // 0x1c5d20: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1c5d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1c5d24: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5D24u;
    {
        const bool branch_taken_0x1c5d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C5D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D24u;
            // 0x1c5d28: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d24) {
            ctx->pc = 0x1C5D48u;
            goto label_1c5d48;
        }
    }
    ctx->pc = 0x1C5D2Cu;
    // 0x1c5d2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5D2Cu;
    {
        const bool branch_taken_0x1c5d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D2Cu;
            // 0x1c5d30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d2c) {
            ctx->pc = 0x1C5D4Cu;
            goto label_1c5d4c;
        }
    }
    ctx->pc = 0x1C5D34u;
    // 0x1c5d34: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5D34u;
    {
        const bool branch_taken_0x1c5d34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D34u;
            // 0x1c5d38: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d34) {
            ctx->pc = 0x1C5D50u;
            goto label_1c5d50;
        }
    }
    ctx->pc = 0x1C5D3Cu;
    // 0x1c5d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5D40u;
    {
        const bool branch_taken_0x1c5d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D40u;
            // 0x1c5d44: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d40) {
            ctx->pc = 0x1C5D50u;
            goto label_1c5d50;
        }
    }
    ctx->pc = 0x1C5D48u;
label_1c5d48:
    // 0x1c5d48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5d4c:
    // 0x1c5d4c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1c5d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c5d50:
    // 0x1c5d50: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c5d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d54: 0x26080050  addiu       $t0, $s0, 0x50
    ctx->pc = 0x1c5d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c5d58: 0xd9030020  lqc2        $vf3, 0x20($t0)
    ctx->pc = 0x1c5d58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x1c5d5c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1c5d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1c5d60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c5d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5d64: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x1c5d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c5d68: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C5D68u;
    {
        const bool branch_taken_0x1c5d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D68u;
            // 0x1c5d6c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d68) {
            ctx->pc = 0x1C5DC4u;
            goto label_1c5dc4;
        }
    }
    ctx->pc = 0x1C5D70u;
    // 0x1c5d70: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1c5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c5d74: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1c5d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1c5d78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c5d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c5d7c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c5d7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5d80:
    // 0x1c5d80: 0x4be3086a  vmul.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1c5d80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5d84: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1c5d84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5d88: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1c5d88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5d8c: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x1c5d8cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c5d90: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1c5d90u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5d94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c5d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5d98: 0x0  nop
    ctx->pc = 0x1c5d98u;
    // NOP
    // 0x1c5d9c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5D9Cu;
    {
        const bool branch_taken_0x1c5d9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D9Cu;
            // 0x1c5da0: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d9c) {
            ctx->pc = 0x1C5DB0u;
            goto label_1c5db0;
        }
    }
    ctx->pc = 0x1C5DA4u;
    // 0x1c5da4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1c5da4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1c5da8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c5da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5dac: 0x0  nop
    ctx->pc = 0x1c5dacu;
    // NOP
label_1c5db0:
    // 0x1c5db0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1c5db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c5db4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c5db8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1c5db8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c5dbc: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C5DBCu;
    {
        const bool branch_taken_0x1c5dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5dbc) {
            ctx->pc = 0x1C5DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5DBCu;
            // 0x1c5dc0: 0xd8610000  lqc2        $vf1, 0x0($v1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5D80u;
            runtime->cooperativeGuestYield();
            goto label_1c5d80;
        }
    }
    ctx->pc = 0x1C5DC4u;
label_1c5dc4:
    // 0x1c5dc4: 0xdba201d0  lqc2        $vf2, 0x1D0($sp)
    ctx->pc = 0x1c5dc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1c5dc8: 0x4b02105b  vmulw.x     $vf1, $vf2, $vf2w
    ctx->pc = 0x1c5dc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5dcc: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c5dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c5dd0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c5dd0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5dd4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c5dd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c5dd8: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1c5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x1c5ddc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c5ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c5de0: 0x14600053  bnez        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x1C5DE0u;
    {
        const bool branch_taken_0x1c5de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5DE0u;
            // 0x1c5de4: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5de0) {
            ctx->pc = 0x1C5F30u;
            goto label_1c5f30;
        }
    }
    ctx->pc = 0x1C5DE8u;
    // 0x1c5de8: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x1c5de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5dec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c5decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5df0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5df4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c5df4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5df8: 0x0  nop
    ctx->pc = 0x1c5df8u;
    // NOP
    // 0x1c5dfc: 0x4500004b  bc1f        . + 4 + (0x4B << 2)
    ctx->pc = 0x1C5DFCu;
    {
        const bool branch_taken_0x1c5dfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5DFCu;
            // 0x1c5e00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5dfc) {
            ctx->pc = 0x1C5F2Cu;
            goto label_1c5f2c;
        }
    }
    ctx->pc = 0x1C5E04u;
    // 0x1c5e04: 0x14e2002b  bne         $a3, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C5E04u;
    {
        const bool branch_taken_0x1c5e04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C5E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5E04u;
            // 0x1c5e08: 0xdba10160  lqc2        $vf1, 0x160($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e04) {
            ctx->pc = 0x1C5EB4u;
            goto label_1c5eb4;
        }
    }
    ctx->pc = 0x1C5E0Cu;
    // 0x1c5e0c: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1c5e0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c5e10: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1c5e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1c5e14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c5e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5e18: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1c5e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c5e1c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C5E1Cu;
    {
        const bool branch_taken_0x1c5e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5E1Cu;
            // 0x1c5e20: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e1c) {
            ctx->pc = 0x1C5E7Cu;
            goto label_1c5e7c;
        }
    }
    ctx->pc = 0x1C5E24u;
    // 0x1c5e24: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1c5e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c5e28: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1c5e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1c5e2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c5e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c5e30: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c5e30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c5e34: 0x0  nop
    ctx->pc = 0x1c5e34u;
    // NOP
label_1c5e38:
    // 0x1c5e38: 0x4be4086a  vmul.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x1c5e38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5e3c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1c5e3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5e40: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1c5e40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5e44: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x1c5e44u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c5e48: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1c5e48u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5e4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c5e4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5e50: 0x0  nop
    ctx->pc = 0x1c5e50u;
    // NOP
    // 0x1c5e54: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5E54u;
    {
        const bool branch_taken_0x1c5e54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5E54u;
            // 0x1c5e58: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e54) {
            ctx->pc = 0x1C5E68u;
            goto label_1c5e68;
        }
    }
    ctx->pc = 0x1C5E5Cu;
    // 0x1c5e5c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1c5e5cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1c5e60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c5e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e64: 0x0  nop
    ctx->pc = 0x1c5e64u;
    // NOP
label_1c5e68:
    // 0x1c5e68: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1c5e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c5e6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c5e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c5e70: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1c5e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c5e74: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C5E74u;
    {
        const bool branch_taken_0x1c5e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e74) {
            ctx->pc = 0x1C5E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5E74u;
            // 0x1c5e78: 0xd8610000  lqc2        $vf1, 0x0($v1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5E38u;
            runtime->cooperativeGuestYield();
            goto label_1c5e38;
        }
    }
    ctx->pc = 0x1C5E7Cu;
label_1c5e7c:
    // 0x1c5e7c: 0x10c5002b  beq         $a2, $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C5E7Cu;
    {
        const bool branch_taken_0x1c5e7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C5E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5E7Cu;
            // 0x1c5e80: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e7c) {
            ctx->pc = 0x1C5F2Cu;
            goto label_1c5f2c;
        }
    }
    ctx->pc = 0x1C5E84u;
    // 0x1c5e84: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c5e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c5e88: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c5e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c5e8c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c5e8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c5e90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c5e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5e94: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c5e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e98: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1c5e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1c5e9c: 0x342138da  ori         $at, $at, 0x38DA
    ctx->pc = 0x1c5e9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14554);
    // 0x1c5ea0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5ea4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c5ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c5ea8: 0xe6010150  swc1        $f1, 0x150($s0)
    ctx->pc = 0x1c5ea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x1c5eac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1C5EACu;
    {
        const bool branch_taken_0x1c5eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5EACu;
            // 0x1c5eb0: 0xe6000154  swc1        $f0, 0x154($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5eac) {
            ctx->pc = 0x1C5F28u;
            goto label_1c5f28;
        }
    }
    ctx->pc = 0x1C5EB4u;
label_1c5eb4:
    // 0x1c5eb4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c5eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c5eb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5ebc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c5ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5ec0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5EC0u;
    {
        const bool branch_taken_0x1c5ec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5ec0) {
            ctx->pc = 0x1C5EE0u;
            goto label_1c5ee0;
        }
    }
    ctx->pc = 0x1C5EC8u;
    // 0x1c5ec8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1c5ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1c5ecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5ed0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c5ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5ed4: 0x0  nop
    ctx->pc = 0x1c5ed4u;
    // NOP
    // 0x1c5ed8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1C5ED8u;
    {
        const bool branch_taken_0x1c5ed8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5ED8u;
            // 0x1c5edc: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ed8) {
            ctx->pc = 0x1C5F30u;
            goto label_1c5f30;
        }
    }
    ctx->pc = 0x1C5EE0u;
label_1c5ee0:
    // 0x1c5ee0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c5ee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5ee4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c5ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5ee8: 0x0  nop
    ctx->pc = 0x1c5ee8u;
    // NOP
    // 0x1c5eec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5EECu;
    {
        const bool branch_taken_0x1c5eec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5EECu;
            // 0x1c5ef0: 0xc71023  subu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5eec) {
            ctx->pc = 0x1C5EF8u;
            goto label_1c5ef8;
        }
    }
    ctx->pc = 0x1C5EF4u;
    // 0x1c5ef4: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x1c5ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1c5ef8:
    // 0x1c5ef8: 0x30460003  andi        $a2, $v0, 0x3
    ctx->pc = 0x1c5ef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1c5efc: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c5f00: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1c5f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1c5f04: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c5f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c5f08: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c5f08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c5f0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5f10: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1c5f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1c5f14: 0x342138da  ori         $at, $at, 0x38DA
    ctx->pc = 0x1c5f14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14554);
    // 0x1c5f18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c5f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5f1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c5f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c5f20: 0xe6000150  swc1        $f0, 0x150($s0)
    ctx->pc = 0x1c5f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x1c5f24: 0xe6010154  swc1        $f1, 0x154($s0)
    ctx->pc = 0x1c5f24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
label_1c5f28:
    // 0x1c5f28: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1c5f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
label_1c5f2c:
    // 0x1c5f2c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x1c5f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1c5f30:
    // 0x1c5f30: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1c5f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1c5f34: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1c5f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1c5f38: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1c5f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c5f3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c5f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c5f40: 0x78630050  lq          $v1, 0x50($v1)
    ctx->pc = 0x1c5f40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1c5f44: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1c5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c5f48: 0x78420050  lq          $v0, 0x50($v0)
    ctx->pc = 0x1c5f48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1c5f4c: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x1c5f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
    // 0x1c5f50: 0x7d030020  sq          $v1, 0x20($t0)
    ctx->pc = 0x1c5f50u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
label_1c5f54:
    // 0x1c5f54: 0xc6000294  lwc1        $f0, 0x294($s0)
    ctx->pc = 0x1c5f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5f58:
    // 0x1c5f58: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x1c5f58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5f5c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5F5Cu;
    {
        const bool branch_taken_0x1c5f5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5f5c) {
            ctx->pc = 0x1C5F80u;
            goto label_1c5f80;
        }
    }
    ctx->pc = 0x1C5F64u;
    // 0x1c5f64: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1c5f64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5f68: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c5f68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5f6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c5f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5f70: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1C5F70u;
    SET_GPR_U32(ctx, 31, 0x1C5F78u);
    ctx->pc = 0x1C5F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5F70u;
            // 0x1c5f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F78u; }
        if (ctx->pc != 0x1C5F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F78u; }
        if (ctx->pc != 0x1C5F78u) { return; }
    }
    ctx->pc = 0x1C5F78u;
    // 0x1c5f78: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C5F78u;
    {
        const bool branch_taken_0x1c5f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5F78u;
            // 0x1c5f7c: 0x8e030174  lw          $v1, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f78) {
            ctx->pc = 0x1C5FC8u;
            goto label_1c5fc8;
        }
    }
    ctx->pc = 0x1C5F80u;
label_1c5f80:
    // 0x1c5f80: 0xc071156  jal         func_1C4558
    ctx->pc = 0x1C5F80u;
    SET_GPR_U32(ctx, 31, 0x1C5F88u);
    ctx->pc = 0x1C5F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5F80u;
            // 0x1c5f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4558u;
    if (runtime->hasFunction(0x1C4558u)) {
        auto targetFn = runtime->lookupFunction(0x1C4558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F88u; }
        if (ctx->pc != 0x1C5F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4558_0x1c4558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F88u; }
        if (ctx->pc != 0x1C5F88u) { return; }
    }
    ctx->pc = 0x1C5F88u;
    // 0x1c5f88: 0x7ba50160  lq          $a1, 0x160($sp)
    ctx->pc = 0x1c5f88u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1c5f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f90: 0xc071230  jal         func_1C48C0
    ctx->pc = 0x1C5F90u;
    SET_GPR_U32(ctx, 31, 0x1C5F98u);
    ctx->pc = 0x1C5F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5F90u;
            // 0x1c5f94: 0x7ba601b0  lq          $a2, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48C0u;
    if (runtime->hasFunction(0x1C48C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C48C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F98u; }
        if (ctx->pc != 0x1C5F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48C0_0x1c48c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F98u; }
        if (ctx->pc != 0x1C5F98u) { return; }
    }
    ctx->pc = 0x1C5F98u;
    // 0x1c5f98: 0x4404b000  mfc1        $a0, $f22
    ctx->pc = 0x1c5f98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c5f9c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1c5f9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1c5fa0: 0xda0100e0  lqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c5fa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c5fa4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1c5fa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c5facu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c5fb0: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1c5fb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c5fb4: 0xc071320  jal         func_1C4C80
    ctx->pc = 0x1C5FB4u;
    SET_GPR_U32(ctx, 31, 0x1C5FBCu);
    ctx->pc = 0x1C5FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5FB4u;
            // 0x1c5fb8: 0x48251000  qmfc2.ni    $a1, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4C80u;
    if (runtime->hasFunction(0x1C4C80u)) {
        auto targetFn = runtime->lookupFunction(0x1C4C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5FBCu; }
        if (ctx->pc != 0x1C5FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4C80_0x1c4c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5FBCu; }
        if (ctx->pc != 0x1C5FBCu) { return; }
    }
    ctx->pc = 0x1C5FBCu;
    // 0x1c5fbc: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x1c5fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x1c5fc0: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c5fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c5fc4: 0x0  nop
    ctx->pc = 0x1c5fc4u;
    // NOP
label_1c5fc8:
    // 0x1c5fc8: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1c5fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1c5fcc: 0x10400191  beqz        $v0, . + 4 + (0x191 << 2)
    ctx->pc = 0x1C5FCCu;
    {
        const bool branch_taken_0x1c5fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5FCCu;
            // 0x1c5fd0: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fcc) {
            ctx->pc = 0x1C6614u;
            goto label_1c6614;
        }
    }
    ctx->pc = 0x1C5FD4u;
    // 0x1c5fd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c5fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c5fd8: 0x54400186  bnel        $v0, $zero, . + 4 + (0x186 << 2)
    ctx->pc = 0x1C5FD8u;
    {
        const bool branch_taken_0x1c5fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5fd8) {
            ctx->pc = 0x1C5FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5FD8u;
            // 0x1c5fdc: 0x8e0302d8  lw          $v1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C65F4u;
            goto label_1c65f4;
        }
    }
    ctx->pc = 0x1C5FE0u;
    // 0x1c5fe0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1c5fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1c5fe4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c5fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c5fe8: 0x54400182  bnel        $v0, $zero, . + 4 + (0x182 << 2)
    ctx->pc = 0x1C5FE8u;
    {
        const bool branch_taken_0x1c5fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5fe8) {
            ctx->pc = 0x1C5FECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5FE8u;
            // 0x1c5fec: 0x8e0302d8  lw          $v1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C65F4u;
            goto label_1c65f4;
        }
    }
    ctx->pc = 0x1C5FF0u;
    // 0x1c5ff0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1c5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1c5ff4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c5ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c5ff8: 0x5440017e  bnel        $v0, $zero, . + 4 + (0x17E << 2)
    ctx->pc = 0x1C5FF8u;
    {
        const bool branch_taken_0x1c5ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5ff8) {
            ctx->pc = 0x1C5FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5FF8u;
            // 0x1c5ffc: 0x8e0302d8  lw          $v1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C65F4u;
            goto label_1c65f4;
        }
    }
    ctx->pc = 0x1C6000u;
    // 0x1c6000: 0x8e820384  lw          $v0, 0x384($s4)
    ctx->pc = 0x1c6000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 900)));
    // 0x1c6004: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c6004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c6008: 0x10400179  beqz        $v0, . + 4 + (0x179 << 2)
    ctx->pc = 0x1C6008u;
    {
        const bool branch_taken_0x1c6008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C600Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6008u;
            // 0x1c600c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6008) {
            ctx->pc = 0x1C65F0u;
            goto label_1c65f0;
        }
    }
    ctx->pc = 0x1C6010u;
    // 0x1c6010: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c6010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c6014: 0xc6010294  lwc1        $f1, 0x294($s0)
    ctx->pc = 0x1c6014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6018: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c6018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c601c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c601cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c6020: 0xc4400148  lwc1        $f0, 0x148($v0)
    ctx->pc = 0x1c6020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6024: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c6024u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c6028: 0xc085e52  jal         func_217948
    ctx->pc = 0x1C6028u;
    SET_GPR_U32(ctx, 31, 0x1C6030u);
    ctx->pc = 0x1C602Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6028u;
            // 0x1c602c: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x217948u;
    if (runtime->hasFunction(0x217948u)) {
        auto targetFn = runtime->lookupFunction(0x217948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6030u; }
        if (ctx->pc != 0x1C6030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217948_0x2179e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6030u; }
        if (ctx->pc != 0x1C6030u) { return; }
    }
    ctx->pc = 0x1C6030u;
    // 0x1c6030: 0x48a23800  qmtc2.ni    $v0, $vf7
    ctx->pc = 0x1c6030u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c6034: 0xdba30200  lqc2        $vf3, 0x200($sp)
    ctx->pc = 0x1c6034u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1c6038: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1c6038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1c603c: 0x4be3386c  vsub.xyzw   $vf1, $vf7, $vf3
    ctx->pc = 0x1c603cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6040: 0x24442850  addiu       $a0, $v0, 0x2850
    ctx->pc = 0x1c6040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10320));
    // 0x1c6044: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1c6044u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6048: 0x4600a5c6  mov.s       $f23, $f20
    ctx->pc = 0x1c6048u;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
    // 0x1c604c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1c604cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1c6050: 0xc4a0cd30  lwc1        $f0, -0x32D0($a1)
    ctx->pc = 0x1c6050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294954288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6054: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1c6054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6058: 0x0  nop
    ctx->pc = 0x1c6058u;
    // NOP
    // 0x1c605c: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
    ctx->pc = 0x1C605Cu;
    {
        const bool branch_taken_0x1c605c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C605Cu;
            // 0x1c6060: 0x3c030030  lui         $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c605c) {
            ctx->pc = 0x1C61C8u;
            goto label_1c61c8;
        }
    }
    ctx->pc = 0x1C6064u;
    // 0x1c6064: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c6064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c6068: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x1c6068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
    // 0x1c606c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1c606cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1c6070: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c6070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1c6074: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1c6074u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c6078: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c6078u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c607c: 0x4bc42afe  vopmula.xyz $ACC, $vf5, $vf4
    ctx->pc = 0x1c607cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]);
    // 0x1c6080: 0x4bc520ee  vopmsub.xyz $vf3, $vf4, $vf5
    ctx->pc = 0x1c6080u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c6084: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1c6084u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c6088: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1c6088u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c608c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c608cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6090: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1c6090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1c6094: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c6094u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6098: 0x24422830  addiu       $v0, $v0, 0x2830
    ctx->pc = 0x1c6098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10288));
    // 0x1c609c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c609cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c60a0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c60a0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c60a4: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1c60a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c60a8: 0x4a0002ff  vnop
    ctx->pc = 0x1c60a8u;
    // NOP operation, no action needed for VU0
    // 0x1c60ac: 0x4a0002ff  vnop
    ctx->pc = 0x1c60acu;
    // NOP operation, no action needed for VU0
    // 0x1c60b0: 0xd8460000  lqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1c60b0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c60b4: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1c60b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c60b8: 0xfba301a0  sqc2        $vf3, 0x1A0($sp)
    ctx->pc = 0x1c60b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c60bc: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x1c60bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c60c0: 0x4be510ac  vsub.xyzw   $vf2, $vf2, $vf5
    ctx->pc = 0x1c60c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c60c4: 0x4bc232fe  vopmula.xyz $ACC, $vf6, $vf2
    ctx->pc = 0x1c60c4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]);
    // 0x1c60c8: 0x4bc610ae  vopmsub.xyz $vf2, $vf2, $vf6
    ctx->pc = 0x1c60c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[6]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c60cc: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1c60ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c60d0: 0x46000080  add.s       $f2, $f0, $f0
    ctx->pc = 0x1c60d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1c60d4: 0x4be410aa  vmul.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x1c60d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c60d8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c60d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c60dc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c60dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c60e0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c60e0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c60e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c60e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c60e8: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1c60e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c60ec: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x1C60ECu;
    {
        const bool branch_taken_0x1c60ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c60ec) {
            ctx->pc = 0x1C6158u;
            goto label_1c6158;
        }
    }
    ctx->pc = 0x1C60F4u;
    // 0x1c60f4: 0x4be528aa  vmul.xyzw   $vf2, $vf5, $vf5
    ctx->pc = 0x1c60f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c60f8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c60f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c60fc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c60fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6100: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c6100u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c6104: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c6104u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c6108: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x1c6108u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1c610c: 0x4a0002ff  vnop
    ctx->pc = 0x1c610cu;
    // NOP operation, no action needed for VU0
    // 0x1c6110: 0x4a0002ff  vnop
    ctx->pc = 0x1c6110u;
    // NOP operation, no action needed for VU0
    // 0x1c6114: 0x4be12b3c  vmove.xyzw  $vf1, $vf5
    ctx->pc = 0x1c6114u;
    ctx->vu0_vf[1] = ctx->vu0_vf[5];
    // 0x1c6118: 0x4be608aa  vmul.xyzw   $vf2, $vf1, $vf6
    ctx->pc = 0x1c6118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c611c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1c611cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6120: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c6120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6124: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c6124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6128: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c6128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c612c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c612cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c6130: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6134: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c6134u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6138: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c6138u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c613c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c613cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6140: 0x0  nop
    ctx->pc = 0x1c6140u;
    // NOP
    // 0x1c6144: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
    ctx->pc = 0x1C6144u;
    {
        const bool branch_taken_0x1c6144 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6144) {
            ctx->pc = 0x1C6148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6144u;
            // 0x1c6148: 0x4602adc2  mul.s       $f23, $f21, $f2 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C61B8u;
            goto label_1c61b8;
        }
    }
    ctx->pc = 0x1C614Cu;
    // 0x1c614c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C614Cu;
    {
        const bool branch_taken_0x1c614c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C614Cu;
            // 0x1c6150: 0xc4a0cd30  lwc1        $f0, -0x32D0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294954288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c614c) {
            ctx->pc = 0x1C61BCu;
            goto label_1c61bc;
        }
    }
    ctx->pc = 0x1C6154u;
    // 0x1c6154: 0x0  nop
    ctx->pc = 0x1c6154u;
    // NOP
label_1c6158:
    // 0x1c6158: 0x4be528aa  vmul.xyzw   $vf2, $vf5, $vf5
    ctx->pc = 0x1c6158u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c615c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c615cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6160: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c6160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6164: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c6164u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c6168: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c6168u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c616c: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x1c616cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1c6170: 0x4a0002ff  vnop
    ctx->pc = 0x1c6170u;
    // NOP operation, no action needed for VU0
    // 0x1c6174: 0x4a0002ff  vnop
    ctx->pc = 0x1c6174u;
    // NOP operation, no action needed for VU0
    // 0x1c6178: 0x4be12b3c  vmove.xyzw  $vf1, $vf5
    ctx->pc = 0x1c6178u;
    ctx->vu0_vf[1] = ctx->vu0_vf[5];
    // 0x1c617c: 0x4be608aa  vmul.xyzw   $vf2, $vf1, $vf6
    ctx->pc = 0x1c617cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c6180: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1c6180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6184: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c6184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6188: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c6188u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c618c: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1c618cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1c6190: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c6190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c6194: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6198: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1c6198u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c619c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1c619cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c61a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c61a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c61a4: 0x0  nop
    ctx->pc = 0x1c61a4u;
    // NOP
    // 0x1c61a8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C61A8u;
    {
        const bool branch_taken_0x1c61a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C61ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C61A8u;
            // 0x1c61ac: 0xc4a0cd30  lwc1        $f0, -0x32D0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294954288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61a8) {
            ctx->pc = 0x1C61BCu;
            goto label_1c61bc;
        }
    }
    ctx->pc = 0x1C61B0u;
    // 0x1c61b0: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x1c61b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x1c61b4: 0x460205c2  mul.s       $f23, $f0, $f2
    ctx->pc = 0x1c61b4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1c61b8:
    // 0x1c61b8: 0xc4a0cd30  lwc1        $f0, -0x32D0($a1)
    ctx->pc = 0x1c61b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294954288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c61bc:
    // 0x1c61bc: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x1c61bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x1c61c0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1C61C0u;
    {
        const bool branch_taken_0x1c61c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C61C0u;
            // 0x1c61c4: 0xe4a0cd30  swc1        $f0, -0x32D0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294954288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61c0) {
            ctx->pc = 0x1C6318u;
            goto label_1c6318;
        }
    }
    ctx->pc = 0x1C61C8u;
label_1c61c8:
    // 0x1c61c8: 0xda040050  lqc2        $vf4, 0x50($s0)
    ctx->pc = 0x1c61c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1c61cc: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x1c61ccu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]);
    // 0x1c61d0: 0x4bc1206e  vopmsub.xyz $vf1, $vf4, $vf1
    ctx->pc = 0x1c61d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c61d4: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1c61d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c61d8: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1c61d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c61dc: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1c61dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c61e0: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c61e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c61e4: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1c61e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c61e8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c61e8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c61ec: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c61ecu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c61f0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1c61f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c61f4: 0x4a0002ff  vnop
    ctx->pc = 0x1c61f4u;
    // NOP operation, no action needed for VU0
    // 0x1c61f8: 0x4a0002ff  vnop
    ctx->pc = 0x1c61f8u;
    // NOP operation, no action needed for VU0
    // 0x1c61fc: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x1c61fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6200: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1c6200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1c6204: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1C6204u;
    {
        const bool branch_taken_0x1c6204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6204u;
            // 0x1c6208: 0xfba100c0  sqc2        $vf1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6204) {
            ctx->pc = 0x1C6318u;
            goto label_1c6318;
        }
    }
    ctx->pc = 0x1C620Cu;
    // 0x1c620c: 0x12a00042  beqz        $s5, . + 4 + (0x42 << 2)
    ctx->pc = 0x1C620Cu;
    {
        const bool branch_taken_0x1c620c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C620Cu;
            // 0x1c6210: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c620c) {
            ctx->pc = 0x1C6318u;
            goto label_1c6318;
        }
    }
    ctx->pc = 0x1C6214u;
    // 0x1c6214: 0xda0200e0  lqc2        $vf2, 0xE0($s0)
    ctx->pc = 0x1c6214u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c6218: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c6218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c621c: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c621cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1c6220: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x1c6220u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c6224: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x1c6224u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]);
    // 0x1c6228: 0x4bc218ae  vopmsub.xyz $vf2, $vf3, $vf2
    ctx->pc = 0x1c6228u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c622c: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1c622cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c6230: 0x4be410aa  vmul.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x1c6230u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c6234: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c6234u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6238: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c6238u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c623c: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x1c623cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6240: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1c6240u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6244: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1c6244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6248: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6248u;
    {
        const bool branch_taken_0x1c6248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6248) {
            ctx->pc = 0x1C62B8u;
            goto label_1c62b8;
        }
    }
    ctx->pc = 0x1C6250u;
    // 0x1c6250: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1c6250u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c6254: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c6254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6258: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c6258u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c625c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c625cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c6260: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c6260u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c6264: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1c6264u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c6268: 0x4a0002ff  vnop
    ctx->pc = 0x1c6268u;
    // NOP operation, no action needed for VU0
    // 0x1c626c: 0x4a0002ff  vnop
    ctx->pc = 0x1c626cu;
    // NOP operation, no action needed for VU0
    // 0x1c6270: 0xda020070  lqc2        $vf2, 0x70($s0)
    ctx->pc = 0x1c6270u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c6274: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1c6274u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1c6278: 0x4be208aa  vmul.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1c6278u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c627c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1c627cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6280: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c6280u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6284: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c6284u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6288: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c6288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c628c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c628cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c6290: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6294: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c6294u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6298: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c629c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c629cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c62a0: 0x0  nop
    ctx->pc = 0x1c62a0u;
    // NOP
    // 0x1c62a4: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
    ctx->pc = 0x1C62A4u;
    {
        const bool branch_taken_0x1c62a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c62a4) {
            ctx->pc = 0x1C62A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C62A4u;
            // 0x1c62a8: 0x4600adc6  mov.s       $f23, $f21 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6318u;
            goto label_1c6318;
        }
    }
    ctx->pc = 0x1C62ACu;
    // 0x1c62ac: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C62ACu;
    {
        const bool branch_taken_0x1c62ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C62B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C62ACu;
            // 0x1c62b0: 0xdba101b0  lqc2        $vf1, 0x1B0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c62ac) {
            ctx->pc = 0x1C631Cu;
            goto label_1c631c;
        }
    }
    ctx->pc = 0x1C62B4u;
    // 0x1c62b4: 0x0  nop
    ctx->pc = 0x1c62b4u;
    // NOP
label_1c62b8:
    // 0x1c62b8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1c62b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c62bc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c62bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c62c0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c62c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c62c4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c62c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c62c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c62c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c62cc: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1c62ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c62d0: 0x4a0002ff  vnop
    ctx->pc = 0x1c62d0u;
    // NOP operation, no action needed for VU0
    // 0x1c62d4: 0x4a0002ff  vnop
    ctx->pc = 0x1c62d4u;
    // NOP operation, no action needed for VU0
    // 0x1c62d8: 0xda020070  lqc2        $vf2, 0x70($s0)
    ctx->pc = 0x1c62d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c62dc: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1c62dcu;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1c62e0: 0x4be208aa  vmul.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1c62e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c62e4: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1c62e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c62e8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c62e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c62ec: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c62ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c62f0: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1c62f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1c62f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c62f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c62f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c62f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c62fc: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c62fcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6300: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c6300u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6304: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c6304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6308: 0x0  nop
    ctx->pc = 0x1c6308u;
    // NOP
    // 0x1c630c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1C630Cu;
    {
        const bool branch_taken_0x1c630c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c630c) {
            ctx->pc = 0x1C6310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C630Cu;
            // 0x1c6310: 0x4600adc7  neg.s       $f23, $f21 (Delay Slot)
        ctx->f[23] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6318u;
            goto label_1c6318;
        }
    }
    ctx->pc = 0x1C6314u;
    // 0x1c6314: 0x0  nop
    ctx->pc = 0x1c6314u;
    // NOP
label_1c6318:
    // 0x1c6318: 0xdba101b0  lqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x1c6318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_1c631c:
    // 0x1c631c: 0x4be708ac  vsub.xyzw   $vf2, $vf1, $vf7
    ctx->pc = 0x1c631cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c6320: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x1c6320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c6324: 0xda410020  lqc2        $vf1, 0x20($s2)
    ctx->pc = 0x1c6324u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1c6328: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1c6328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c632c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c632cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6330: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c6330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6334: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x1c6334u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c6338: 0x4b010044  vsubx.x     $vf1, $vf0, $vf1x
    ctx->pc = 0x1c6338u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c633c: 0x70022789  pexew       $a0, $v0
    ctx->pc = 0x1c633cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c6340: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1c6340u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6344: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1c6344u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6348: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x1c6348u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c634c: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x1c634cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6350: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6354: 0x70e22389  pcpyld      $a0, $a3, $v0
    ctx->pc = 0x1c6354u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1c6358: 0x70e31389  pcpyld      $v0, $a3, $v1
    ctx->pc = 0x1c6358u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x1c635c: 0x70444cc8  ppacw       $t1, $v0, $a0
    ctx->pc = 0x1c635cu;
    SET_GPR_VEC(ctx, 9, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1c6360: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x1c6360u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1c6364: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c6364u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c6368: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1c6368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c636c: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x1c636cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6370: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c6370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6374: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c6374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6378: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x1c6378u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x1c637c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c637cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6384: 0x8e63cd38  lw          $v1, -0x32C8($s3)
    ctx->pc = 0x1c6384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954296)));
    // 0x1c6388: 0x46000084  c1          0x84
    ctx->pc = 0x1c6388u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c638c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6390: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C6390u;
    {
        const bool branch_taken_0x1c6390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c6390) {
            ctx->pc = 0x1C63C8u;
            goto label_1c63c8;
        }
    }
    ctx->pc = 0x1C6398u;
    // 0x1c6398: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c6398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c639c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c639cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c63a0: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x1c63a0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
    // 0x1c63a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c63a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c63a8: 0x0  nop
    ctx->pc = 0x1c63a8u;
    // NOP
    // 0x1c63ac: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1C63ACu;
    {
        const bool branch_taken_0x1c63ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C63B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63ACu;
            // 0x1c63b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63ac) {
            ctx->pc = 0x1C63FCu;
            goto label_1c63fc;
        }
    }
    ctx->pc = 0x1C63B4u;
    // 0x1c63b4: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x1c63b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x1c63b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c63b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c63bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C63BCu;
    {
        const bool branch_taken_0x1c63bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c63bc) {
            ctx->pc = 0x1C63ECu;
            goto label_1c63ec;
        }
    }
    ctx->pc = 0x1C63C4u;
    // 0x1c63c4: 0x0  nop
    ctx->pc = 0x1c63c4u;
    // NOP
label_1c63c8:
    // 0x1c63c8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1c63c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1c63cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c63ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c63d0: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x1c63d0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
    // 0x1c63d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c63d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c63d8: 0x0  nop
    ctx->pc = 0x1c63d8u;
    // NOP
    // 0x1c63dc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C63DCu;
    {
        const bool branch_taken_0x1c63dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C63E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63DCu;
            // 0x1c63e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63dc) {
            ctx->pc = 0x1C63FCu;
            goto label_1c63fc;
        }
    }
    ctx->pc = 0x1C63E4u;
    // 0x1c63e4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c63e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c63e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c63e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c63ec:
    // 0x1c63ec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c63ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c63f0: 0x0  nop
    ctx->pc = 0x1c63f0u;
    // NOP
    // 0x1c63f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C63F4u;
    {
        const bool branch_taken_0x1c63f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c63f4) {
            ctx->pc = 0x1C63F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63F4u;
            // 0x1c63f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C63FCu;
            goto label_1c63fc;
        }
    }
    ctx->pc = 0x1C63FCu;
label_1c63fc:
    // 0x1c63fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C63FCu;
    {
        const bool branch_taken_0x1c63fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63FCu;
            // 0x1c6400: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63fc) {
            ctx->pc = 0x1C641Cu;
            goto label_1c641c;
        }
    }
    ctx->pc = 0x1C6404u;
    // 0x1c6404: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c6404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c6408: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c6408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c640c: 0x3463bfff  ori         $v1, $v1, 0xBFFF
    ctx->pc = 0x1c640cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49151);
    // 0x1c6410: 0xae64cd38  sw          $a0, -0x32C8($s3)
    ctx->pc = 0x1c6410u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294954296), GPR_U32(ctx, 4));
    // 0x1c6414: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1C6414u;
    {
        const bool branch_taken_0x1c6414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6414u;
            // 0x1c6418: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6414) {
            ctx->pc = 0x1C65A4u;
            goto label_1c65a4;
        }
    }
    ctx->pc = 0x1C641Cu;
label_1c641c:
    // 0x1c641c: 0xda410020  lqc2        $vf1, 0x20($s2)
    ctx->pc = 0x1c641cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1c6420: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1c6420u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c6424: 0xfba20210  sqc2        $vf2, 0x210($sp)
    ctx->pc = 0x1c6424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c6428: 0xda0200e0  lqc2        $vf2, 0xE0($s0)
    ctx->pc = 0x1c6428u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c642c: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x1c642cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6430: 0xdba30210  lqc2        $vf3, 0x210($sp)
    ctx->pc = 0x1c6430u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1c6434: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1c6434u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6438: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1c6438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c643c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c643cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6440: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c6440u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6444: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6448: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c6448u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c644c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c644cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6450: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c6450u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6454: 0x0  nop
    ctx->pc = 0x1c6454u;
    // NOP
    // 0x1c6458: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6458u;
    {
        const bool branch_taken_0x1c6458 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C645Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6458u;
            // 0x1c645c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6458) {
            ctx->pc = 0x1C6468u;
            goto label_1c6468;
        }
    }
    ctx->pc = 0x1C6460u;
    // 0x1c6460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6464: 0x0  nop
    ctx->pc = 0x1c6464u;
    // NOP
label_1c6468:
    // 0x1c6468: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6468u;
    {
        const bool branch_taken_0x1c6468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6468) {
            ctx->pc = 0x1C6488u;
            goto label_1c6488;
        }
    }
    ctx->pc = 0x1C6470u;
    // 0x1c6470: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1c6470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6474: 0x0  nop
    ctx->pc = 0x1c6474u;
    // NOP
    // 0x1c6478: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6478u;
    {
        const bool branch_taken_0x1c6478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C647Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6478u;
            // 0x1c647c: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6478) {
            ctx->pc = 0x1C649Cu;
            goto label_1c649c;
        }
    }
    ctx->pc = 0x1C6480u;
    // 0x1c6480: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6480u;
    {
        const bool branch_taken_0x1c6480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6480u;
            // 0x1c6484: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6480) {
            ctx->pc = 0x1C649Cu;
            goto label_1c649c;
        }
    }
    ctx->pc = 0x1C6488u;
label_1c6488:
    // 0x1c6488: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1c6488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c648c: 0x0  nop
    ctx->pc = 0x1c648cu;
    // NOP
    // 0x1c6490: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6490u;
    {
        const bool branch_taken_0x1c6490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6490u;
            // 0x1c6494: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6490) {
            ctx->pc = 0x1C649Cu;
            goto label_1c649c;
        }
    }
    ctx->pc = 0x1C6498u;
    // 0x1c6498: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1c6498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c649c:
    // 0x1c649c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1c649cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1c64a0: 0x8c83cd3c  lw          $v1, -0x32C4($a0)
    ctx->pc = 0x1c64a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954300)));
    // 0x1c64a4: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x1c64a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c64a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C64A8u;
    {
        const bool branch_taken_0x1c64a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C64ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64A8u;
            // 0x1c64ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64a8) {
            ctx->pc = 0x1C64C0u;
            goto label_1c64c0;
        }
    }
    ctx->pc = 0x1C64B0u;
    // 0x1c64b0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C64B0u;
    {
        const bool branch_taken_0x1c64b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c64b0) {
            ctx->pc = 0x1C64B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64B0u;
            // 0x1c64b4: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C64C0u;
            goto label_1c64c0;
        }
    }
    ctx->pc = 0x1C64B8u;
    // 0x1c64b8: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C64B8u;
    {
        const bool branch_taken_0x1c64b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c64b8) {
            ctx->pc = 0x1C64BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64B8u;
            // 0x1c64bc: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C64C0u;
            goto label_1c64c0;
        }
    }
    ctx->pc = 0x1C64C0u;
label_1c64c0:
    // 0x1c64c0: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C64C0u;
    {
        const bool branch_taken_0x1c64c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C64C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64C0u;
            // 0x1c64c4: 0x8c83cd3c  lw          $v1, -0x32C4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64c0) {
            ctx->pc = 0x1C6510u;
            goto label_1c6510;
        }
    }
    ctx->pc = 0x1C64C8u;
    // 0x1c64c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c64cc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C64CCu;
    {
        const bool branch_taken_0x1c64cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C64D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64CCu;
            // 0x1c64d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64cc) {
            ctx->pc = 0x1C64E0u;
            goto label_1c64e0;
        }
    }
    ctx->pc = 0x1C64D4u;
    // 0x1c64d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c64d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c64d8: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C64D8u;
    {
        const bool branch_taken_0x1c64d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C64DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64D8u;
            // 0x1c64dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64d8) {
            ctx->pc = 0x1C64F0u;
            goto label_1c64f0;
        }
    }
    ctx->pc = 0x1C64E0u;
label_1c64e0:
    // 0x1c64e0: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C64E0u;
    {
        const bool branch_taken_0x1c64e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c64e0) {
            ctx->pc = 0x1C64E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64E0u;
            // 0x1c64e4: 0x8e0202d8  lw          $v0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6514u;
            goto label_1c6514;
        }
    }
    ctx->pc = 0x1C64E8u;
    // 0x1c64e8: 0x5620000a  bnel        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C64E8u;
    {
        const bool branch_taken_0x1c64e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c64e8) {
            ctx->pc = 0x1C64ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64E8u;
            // 0x1c64ec: 0x8e0202d8  lw          $v0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6514u;
            goto label_1c6514;
        }
    }
    ctx->pc = 0x1C64F0u;
label_1c64f0:
    // 0x1c64f0: 0x8e840388  lw          $a0, 0x388($s4)
    ctx->pc = 0x1c64f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 904)));
    // 0x1c64f4: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1C64F4u;
    SET_GPR_U32(ctx, 31, 0x1C64FCu);
    ctx->pc = 0x1C64F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64F4u;
            // 0x1c64f8: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C64FCu; }
        if (ctx->pc != 0x1C64FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C64FCu; }
        if (ctx->pc != 0x1C64FCu) { return; }
    }
    ctx->pc = 0x1C64FCu;
    // 0x1c64fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C64FCu;
    {
        const bool branch_taken_0x1c64fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c64fc) {
            ctx->pc = 0x1C6500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64FCu;
            // 0x1c6500: 0x8e0202d8  lw          $v0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6514u;
            goto label_1c6514;
        }
    }
    ctx->pc = 0x1C6504u;
    // 0x1c6504: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x1c6504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x1c6508: 0xc05c294  jal         func_170A50
    ctx->pc = 0x1C6508u;
    SET_GPR_U32(ctx, 31, 0x1C6510u);
    ctx->pc = 0x1C650Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6508u;
            // 0x1c650c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6510u; }
        if (ctx->pc != 0x1C6510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6510u; }
        if (ctx->pc != 0x1C6510u) { return; }
    }
    ctx->pc = 0x1C6510u;
label_1c6510:
    // 0x1c6510: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c6510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_1c6514:
    // 0x1c6514: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1c6514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1c6518: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1c6518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1c651c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C651Cu;
    {
        const bool branch_taken_0x1c651c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C651Cu;
            // 0x1c6520: 0xac71cd3c  sw          $s1, -0x32C4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954300), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c651c) {
            ctx->pc = 0x1C653Cu;
            goto label_1c653c;
        }
    }
    ctx->pc = 0x1C6524u;
    // 0x1c6524: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6524u;
    {
        const bool branch_taken_0x1c6524 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6524u;
            // 0x1c6528: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6524) {
            ctx->pc = 0x1C6534u;
            goto label_1c6534;
        }
    }
    ctx->pc = 0x1C652Cu;
    // 0x1c652c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1C652Cu;
    {
        const bool branch_taken_0x1c652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C652Cu;
            // 0x1c6530: 0xae71cd38  sw          $s1, -0x32C8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294954296), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c652c) {
            ctx->pc = 0x1C65A8u;
            goto label_1c65a8;
        }
    }
    ctx->pc = 0x1C6534u;
label_1c6534:
    // 0x1c6534: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C6534u;
    {
        const bool branch_taken_0x1c6534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6534u;
            // 0x1c6538: 0xae62cd38  sw          $v0, -0x32C8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294954296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6534) {
            ctx->pc = 0x1C65A8u;
            goto label_1c65a8;
        }
    }
    ctx->pc = 0x1C653Cu;
label_1c653c:
    // 0x1c653c: 0x12a00016  beqz        $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C653Cu;
    {
        const bool branch_taken_0x1c653c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C653Cu;
            // 0x1c6540: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c653c) {
            ctx->pc = 0x1C6598u;
            goto label_1c6598;
        }
    }
    ctx->pc = 0x1C6544u;
    // 0x1c6544: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6548: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1c6548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c654c: 0x0  nop
    ctx->pc = 0x1c654cu;
    // NOP
    // 0x1c6550: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1C6550u;
    {
        const bool branch_taken_0x1c6550 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6550) {
            ctx->pc = 0x1C6554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6550u;
            // 0x1c6554: 0xae62cd38  sw          $v0, -0x32C8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294954296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C659Cu;
            goto label_1c659c;
        }
    }
    ctx->pc = 0x1C6558u;
    // 0x1c6558: 0xda410020  lqc2        $vf1, 0x20($s2)
    ctx->pc = 0x1c6558u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1c655c: 0xda0200e0  lqc2        $vf2, 0xE0($s0)
    ctx->pc = 0x1c655cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c6560: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x1c6560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6564: 0xdba30210  lqc2        $vf3, 0x210($sp)
    ctx->pc = 0x1c6564u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1c6568: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1c6568u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c656c: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1c656cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c6570: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c6570u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6574: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c6574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6578: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c6578u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c657c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c657cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6580: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c6580u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6584: 0x0  nop
    ctx->pc = 0x1c6584u;
    // NOP
    // 0x1c6588: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6588u;
    {
        const bool branch_taken_0x1c6588 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C658Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6588u;
            // 0x1c658c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6588) {
            ctx->pc = 0x1C6598u;
            goto label_1c6598;
        }
    }
    ctx->pc = 0x1C6590u;
    // 0x1c6590: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1c6590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1c6594: 0x0  nop
    ctx->pc = 0x1c6594u;
    // NOP
label_1c6598:
    // 0x1c6598: 0xae62cd38  sw          $v0, -0x32C8($s3)
    ctx->pc = 0x1c6598u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294954296), GPR_U32(ctx, 2));
label_1c659c:
    // 0x1c659c: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c659cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c65a0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1c65a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1c65a4:
    // 0x1c65a4: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c65a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
label_1c65a8:
    // 0x1c65a8: 0xc6010298  lwc1        $f1, 0x298($s0)
    ctx->pc = 0x1c65a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c65ac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c65acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c65b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c65b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c65b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c65b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c65b8: 0x4601b801  sub.s       $f0, $f23, $f1
    ctx->pc = 0x1c65b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
    // 0x1c65bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c65bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c65c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c65c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c65c4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1c65c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c65c8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1c65c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1c65cc: 0xe6010298  swc1        $f1, 0x298($s0)
    ctx->pc = 0x1c65ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
    // 0x1c65d0: 0xdba101a0  lqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x1c65d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1c65d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c65d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c65d8: 0x4be208d8  vmulx.xyzw  $vf3, $vf1, $vf2x
    ctx->pc = 0x1c65d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c65dc: 0x8e05029c  lw          $a1, 0x29C($s0)
    ctx->pc = 0x1c65dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x1c65e0: 0xc085e34  jal         func_2178D0
    ctx->pc = 0x1C65E0u;
    SET_GPR_U32(ctx, 31, 0x1C65E8u);
    ctx->pc = 0x1C65E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65E0u;
            // 0x1c65e4: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2178D0u;
    if (runtime->hasFunction(0x2178D0u)) {
        auto targetFn = runtime->lookupFunction(0x2178D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65E8u; }
        if (ctx->pc != 0x1C65E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2178d0_0x2178e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65E8u; }
        if (ctx->pc != 0x1C65E8u) { return; }
    }
    ctx->pc = 0x1C65E8u;
    // 0x1c65e8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1C65E8u;
    {
        const bool branch_taken_0x1c65e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C65ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65E8u;
            // 0x1c65ec: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65e8) {
            ctx->pc = 0x1C666Cu;
            goto label_1c666c;
        }
    }
    ctx->pc = 0x1C65F0u;
label_1c65f0:
    // 0x1c65f0: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c65f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_1c65f4:
    // 0x1c65f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c65f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c65f8: 0x3442bfff  ori         $v0, $v0, 0xBFFF
    ctx->pc = 0x1c65f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49151);
    // 0x1c65fc: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1c65fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1c6600: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c6600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6604: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c6604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6608: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c6608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
    // 0x1c660c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C660Cu;
    {
        const bool branch_taken_0x1c660c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C660Cu;
            // 0x1c6610: 0xac82cd38  sw          $v0, -0x32C8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294954296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c660c) {
            ctx->pc = 0x1C6668u;
            goto label_1c6668;
        }
    }
    ctx->pc = 0x1C6614u;
label_1c6614:
    // 0x1c6614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6618: 0xc07110c  jal         func_1C4430
    ctx->pc = 0x1C6618u;
    SET_GPR_U32(ctx, 31, 0x1C6620u);
    ctx->pc = 0x1C661Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6618u;
            // 0x1c661c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4430u;
    if (runtime->hasFunction(0x1C4430u)) {
        auto targetFn = runtime->lookupFunction(0x1C4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6620u; }
        if (ctx->pc != 0x1C6620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4430_0x1c4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6620u; }
        if (ctx->pc != 0x1C6620u) { return; }
    }
    ctx->pc = 0x1C6620u;
    // 0x1c6620: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x1c6620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c6624: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c6624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c6628: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c6628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c662c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1c662cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1c6630: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c6630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c6634: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c6634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c6638: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c663c: 0x3442bfff  ori         $v0, $v0, 0xBFFF
    ctx->pc = 0x1c663cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49151);
    // 0x1c6640: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1c6640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1c6644: 0x342138da  ori         $at, $at, 0x38DA
    ctx->pc = 0x1c6644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14554);
    // 0x1c6648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c664c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1c664cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1c6650: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c6650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6654: 0xe6010150  swc1        $f1, 0x150($s0)
    ctx->pc = 0x1c6654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x1c6658: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x1c6658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x1c665c: 0xae040174  sw          $a0, 0x174($s0)
    ctx->pc = 0x1c665cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 4));
    // 0x1c6660: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c6660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
    // 0x1c6664: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1c6664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
label_1c6668:
    // 0x1c6668: 0x8e0402d8  lw          $a0, 0x2D8($s0)
    ctx->pc = 0x1c6668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_1c666c:
    // 0x1c666c: 0x3c03efff  lui         $v1, 0xEFFF
    ctx->pc = 0x1c666cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61439 << 16));
    // 0x1c6670: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c6670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c6674: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x1c6674u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c6678: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1c6678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c667c: 0xae0402d8  sw          $a0, 0x2D8($s0)
    ctx->pc = 0x1c667cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 4));
label_1c6680:
    // 0x1c6680: 0x7bb00280  lq          $s0, 0x280($sp)
    ctx->pc = 0x1c6680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1c6684: 0x7bb10270  lq          $s1, 0x270($sp)
    ctx->pc = 0x1c6684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1c6688: 0x7bb20260  lq          $s2, 0x260($sp)
    ctx->pc = 0x1c6688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1c668c: 0x7bb30250  lq          $s3, 0x250($sp)
    ctx->pc = 0x1c668cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1c6690: 0x7bb40240  lq          $s4, 0x240($sp)
    ctx->pc = 0x1c6690u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c6694: 0x7bb50230  lq          $s5, 0x230($sp)
    ctx->pc = 0x1c6694u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c6698: 0xdfbf0220  ld          $ra, 0x220($sp)
    ctx->pc = 0x1c6698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c669c: 0xc7b702a8  lwc1        $f23, 0x2A8($sp)
    ctx->pc = 0x1c669cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1c66a0: 0xc7b602a0  lwc1        $f22, 0x2A0($sp)
    ctx->pc = 0x1c66a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c66a4: 0xc7b50298  lwc1        $f21, 0x298($sp)
    ctx->pc = 0x1c66a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c66a8: 0xc7b40290  lwc1        $f20, 0x290($sp)
    ctx->pc = 0x1c66a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c66ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C66ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C66B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C66ACu;
            // 0x1c66b0: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C54C0u: goto label_1c54c0;
            case 0x1C55D0u: goto label_1c55d0;
            case 0x1C55E8u: goto label_1c55e8;
            case 0x1C5640u: goto label_1c5640;
            case 0x1C5670u: goto label_1c5670;
            case 0x1C567Cu: goto label_1c567c;
            case 0x1C5760u: goto label_1c5760;
            case 0x1C5798u: goto label_1c5798;
            case 0x1C5808u: goto label_1c5808;
            case 0x1C5870u: goto label_1c5870;
            case 0x1C58D0u: goto label_1c58d0;
            case 0x1C58E0u: goto label_1c58e0;
            case 0x1C5940u: goto label_1c5940;
            case 0x1C5990u: goto label_1c5990;
            case 0x1C59A0u: goto label_1c59a0;
            case 0x1C59D8u: goto label_1c59d8;
            case 0x1C59FCu: goto label_1c59fc;
            case 0x1C5A40u: goto label_1c5a40;
            case 0x1C5B00u: goto label_1c5b00;
            case 0x1C5B70u: goto label_1c5b70;
            case 0x1C5BB0u: goto label_1c5bb0;
            case 0x1C5BD8u: goto label_1c5bd8;
            case 0x1C5C50u: goto label_1c5c50;
            case 0x1C5C90u: goto label_1c5c90;
            case 0x1C5CB8u: goto label_1c5cb8;
            case 0x1C5D48u: goto label_1c5d48;
            case 0x1C5D4Cu: goto label_1c5d4c;
            case 0x1C5D50u: goto label_1c5d50;
            case 0x1C5D80u: goto label_1c5d80;
            case 0x1C5DB0u: goto label_1c5db0;
            case 0x1C5DC4u: goto label_1c5dc4;
            case 0x1C5E38u: goto label_1c5e38;
            case 0x1C5E68u: goto label_1c5e68;
            case 0x1C5E7Cu: goto label_1c5e7c;
            case 0x1C5EB4u: goto label_1c5eb4;
            case 0x1C5EE0u: goto label_1c5ee0;
            case 0x1C5EF8u: goto label_1c5ef8;
            case 0x1C5F28u: goto label_1c5f28;
            case 0x1C5F2Cu: goto label_1c5f2c;
            case 0x1C5F30u: goto label_1c5f30;
            case 0x1C5F54u: goto label_1c5f54;
            case 0x1C5F58u: goto label_1c5f58;
            case 0x1C5F80u: goto label_1c5f80;
            case 0x1C5FC8u: goto label_1c5fc8;
            case 0x1C6158u: goto label_1c6158;
            case 0x1C61B8u: goto label_1c61b8;
            case 0x1C61BCu: goto label_1c61bc;
            case 0x1C61C8u: goto label_1c61c8;
            case 0x1C62B8u: goto label_1c62b8;
            case 0x1C6318u: goto label_1c6318;
            case 0x1C631Cu: goto label_1c631c;
            case 0x1C63C8u: goto label_1c63c8;
            case 0x1C63ECu: goto label_1c63ec;
            case 0x1C63FCu: goto label_1c63fc;
            case 0x1C641Cu: goto label_1c641c;
            case 0x1C6468u: goto label_1c6468;
            case 0x1C6488u: goto label_1c6488;
            case 0x1C649Cu: goto label_1c649c;
            case 0x1C64C0u: goto label_1c64c0;
            case 0x1C64E0u: goto label_1c64e0;
            case 0x1C64F0u: goto label_1c64f0;
            case 0x1C6510u: goto label_1c6510;
            case 0x1C6514u: goto label_1c6514;
            case 0x1C6534u: goto label_1c6534;
            case 0x1C653Cu: goto label_1c653c;
            case 0x1C6598u: goto label_1c6598;
            case 0x1C659Cu: goto label_1c659c;
            case 0x1C65A4u: goto label_1c65a4;
            case 0x1C65A8u: goto label_1c65a8;
            case 0x1C65F0u: goto label_1c65f0;
            case 0x1C65F4u: goto label_1c65f4;
            case 0x1C6614u: goto label_1c6614;
            case 0x1C6668u: goto label_1c6668;
            case 0x1C666Cu: goto label_1c666c;
            case 0x1C6680u: goto label_1c6680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C66B4u;
    // 0x1c66b4: 0x0  nop
    ctx->pc = 0x1c66b4u;
    // NOP
}
