#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_11e8d0
// Address: 0x11e8d0 - 0x11ea98
void entry_11e8d0_0x11ea98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11e8d0_0x11ea98");
#endif

    ctx->pc = 0x11e8d0u;

    // 0x11e8d0: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x11e8d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x11e8d4: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x11e8d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11e8d8: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x11e8d8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x11e8dc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x11e8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x11e8e0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x11e8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x11e8e4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x11e8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x11e8e8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x11e8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x11e8ec: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x11e8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x11e8f0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x11e8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x11e8f4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x11e8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x11e8f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11e8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11e8fc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x11e8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e900: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11e900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x11e904: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x11e904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x11e908: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x11e908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x11e90c: 0xc4601448  lwc1        $f0, 0x1448($v1)
    ctx->pc = 0x11e90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e910: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x11e910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e914: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x11e914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x11e918: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x11e918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x11e91c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x11e91cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x11e920: 0xa4400034  sh          $zero, 0x34($v0)
    ctx->pc = 0x11e920u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x11e924: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x11e924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x11e928: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x11e928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x11e92c: 0xa4400036  sh          $zero, 0x36($v0)
    ctx->pc = 0x11e92cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x11e930: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x11e930u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e934: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x11e934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x11e938: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x11e938u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x11e93c: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x11e93cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11e940: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x11e940u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11e944: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x11e944u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e948: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x11e948u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x11e94c: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x11e94cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11e950: 0x26d0f170  addiu       $s0, $s6, -0xE90
    ctx->pc = 0x11e950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294963568));
    // 0x11e954: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x11e954u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e958: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x11e958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e95c: 0xc047824  jal         func_11E090
    ctx->pc = 0x11E95Cu;
    SET_GPR_U32(ctx, 31, 0x11E964u);
    ctx->pc = 0x11E960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E95Cu;
            // 0x11e960: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E090u;
    if (runtime->hasFunction(0x11E090u)) {
        auto targetFn = runtime->lookupFunction(0x11E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E964u; }
        if (ctx->pc != 0x11E964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E090_0x11e090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E964u; }
        if (ctx->pc != 0x11E964u) { return; }
    }
    ctx->pc = 0x11E964u;
    // 0x11e964: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x11e964u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e968: 0x1220003f  beqz        $s1, . + 4 + (0x3F << 2)
    ctx->pc = 0x11E968u;
    {
        const bool branch_taken_0x11e968 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E968u;
            // 0x11e96c: 0x8e150014  lw          $s5, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e968) {
            ctx->pc = 0x11EA68u;
            goto label_11ea68;
        }
    }
    ctx->pc = 0x11E970u;
    // 0x11e970: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11e970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e974: 0x0  nop
    ctx->pc = 0x11e974u;
    // NOP
label_11e978:
    // 0x11e978: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E978u;
    {
        const bool branch_taken_0x11e978 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E978u;
            // 0x11e97c: 0x8e330018  lw          $s3, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e978) {
            ctx->pc = 0x11E988u;
            goto label_11e988;
        }
    }
    ctx->pc = 0x11E980u;
    // 0x11e980: 0x52b30036  beql        $s5, $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x11E980u;
    {
        const bool branch_taken_0x11e980 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 19));
        if (branch_taken_0x11e980) {
            ctx->pc = 0x11E984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E980u;
            // 0x11e984: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11EA5Cu;
            goto label_11ea5c;
        }
    }
    ctx->pc = 0x11E988u;
label_11e988:
    // 0x11e988: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x11e988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x11e98c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x11e98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11e990: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11e990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11e994: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x11e994u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11e998: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x11e998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x11e99c: 0x40f809  jalr        $v0
    ctx->pc = 0x11E99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E9A4u);
        ctx->pc = 0x11E9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E99Cu;
            // 0x11e9a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11E9A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E978u: goto label_11e978;
            case 0x11E988u: goto label_11e988;
            case 0x11EA58u: goto label_11ea58;
            case 0x11EA5Cu: goto label_11ea5c;
            case 0x11EA68u: goto label_11ea68;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11E9A4u; }
            if (ctx->pc != 0x11E9A4u) { return; }
        }
        }
    }
    ctx->pc = 0x11E9A4u;
    // 0x11e9a4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11E9A4u;
    {
        const bool branch_taken_0x11e9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9A4u;
            // 0x11e9a8: 0xdba40020  lqc2        $vf4, 0x20($sp) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9a4) {
            ctx->pc = 0x11EA58u;
            goto label_11ea58;
        }
    }
    ctx->pc = 0x11E9ACu;
    // 0x11e9ac: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x11e9acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x11e9b0: 0x26107790  addiu       $s0, $s0, 0x7790
    ctx->pc = 0x11e9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30608));
    // 0x11e9b4: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x11e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x11e9b8: 0xae130024  sw          $s3, 0x24($s0)
    ctx->pc = 0x11e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
    // 0x11e9bc: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x11e9bcu;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x11e9c0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x11e9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x11e9c4: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x11e9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11e9c8: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x11e9c8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x11e9cc: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x11e9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e9d0: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x11e9d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e9d4: 0x4be408ac  vsub.xyzw   $vf2, $vf1, $vf4
    ctx->pc = 0x11e9d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x11e9d8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x11e9d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x11e9dc: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x11e9dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11e9e0: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x11e9e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11e9e4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x11e9e4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x11e9e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x11e9e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x11e9ec: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x11e9ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x11e9f0: 0x4a0002ff  vnop
    ctx->pc = 0x11e9f0u;
    // NOP operation, no action needed for VU0
    // 0x11e9f4: 0x4a0002ff  vnop
    ctx->pc = 0x11e9f4u;
    // NOP operation, no action needed for VU0
    // 0x11e9f8: 0xfa020010  sqc2        $vf2, 0x10($s0)
    ctx->pc = 0x11e9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11e9fc: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x11e9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11ea00: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x11ea00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x11ea04: 0xfa020010  sqc2        $vf2, 0x10($s0)
    ctx->pc = 0x11ea04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11ea08: 0x4b040103  vaddw.x     $vf4, $vf0, $vf4w
    ctx->pc = 0x11ea08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11ea0c: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x11ea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x11ea10: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x11ea10u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11ea14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11ea14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ea18: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11ea1c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x11ea1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x11ea20: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x11ea20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x11ea24: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x11ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x11ea28: 0x40f809  jalr        $v0
    ctx->pc = 0x11EA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11EA30u);
        ctx->pc = 0x11EA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA28u;
            // 0x11ea2c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11EA30u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E978u: goto label_11e978;
            case 0x11E988u: goto label_11e988;
            case 0x11EA58u: goto label_11ea58;
            case 0x11EA5Cu: goto label_11ea5c;
            case 0x11EA68u: goto label_11ea68;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11EA30u; }
            if (ctx->pc != 0x11EA30u) { return; }
        }
        }
    }
    ctx->pc = 0x11EA30u;
    // 0x11ea30: 0x26c3f170  addiu       $v1, $s6, -0xE90
    ctx->pc = 0x11ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294963568));
    // 0x11ea34: 0xa6020034  sh          $v0, 0x34($s0)
    ctx->pc = 0x11ea34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x11ea38: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x11ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11ea3c: 0x40f809  jalr        $v0
    ctx->pc = 0x11EA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11EA44u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x11EA44u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E978u: goto label_11e978;
            case 0x11E988u: goto label_11e988;
            case 0x11EA58u: goto label_11ea58;
            case 0x11EA5Cu: goto label_11ea5c;
            case 0x11EA68u: goto label_11ea68;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11EA44u; }
            if (ctx->pc != 0x11EA44u) { return; }
        }
        }
    }
    ctx->pc = 0x11EA44u;
    // 0x11ea44: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x11ea44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x11ea48: 0x3843000b  xori        $v1, $v0, 0xB
    ctx->pc = 0x11ea48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x11ea4c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x11ea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11ea50: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EA50u;
    {
        const bool branch_taken_0x11ea50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x11EA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA50u;
            // 0x11ea54: 0xa3a00b  movn        $s4, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea50) {
            ctx->pc = 0x11EA68u;
            goto label_11ea68;
        }
    }
    ctx->pc = 0x11EA58u;
label_11ea58:
    // 0x11ea58: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x11ea58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_11ea5c:
    // 0x11ea5c: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x11ea5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11ea60: 0x1620ffc5  bnez        $s1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x11EA60u;
    {
        const bool branch_taken_0x11ea60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ea60) {
            ctx->pc = 0x11E978u;
            runtime->cooperativeGuestYield();
            goto label_11e978;
        }
    }
    ctx->pc = 0x11EA68u;
label_11ea68:
    // 0x11ea68: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x11ea68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea6c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x11ea6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11ea70: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x11ea70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11ea74: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x11ea74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11ea78: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x11ea78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11ea7c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x11ea7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11ea80: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x11ea80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11ea84: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x11ea84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ea88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11ea88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ea8c: 0x3e00008  jr          $ra
    ctx->pc = 0x11EA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA8Cu;
            // 0x11ea90: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E978u: goto label_11e978;
            case 0x11E988u: goto label_11e988;
            case 0x11EA58u: goto label_11ea58;
            case 0x11EA5Cu: goto label_11ea5c;
            case 0x11EA68u: goto label_11ea68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EA94u;
    // 0x11ea94: 0x0  nop
    ctx->pc = 0x11ea94u;
    // NOP
}
