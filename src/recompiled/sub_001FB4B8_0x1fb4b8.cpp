#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FB4B8
// Address: 0x1fb4b8 - 0x1fbcb8
void sub_001FB4B8_0x1fb4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB4B8_0x1fb4b8");
#endif

    ctx->pc = 0x1fb4b8u;

    // 0x1fb4b8: 0x27bdfca0  addiu       $sp, $sp, -0x360
    ctx->pc = 0x1fb4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966432));
    // 0x1fb4bc: 0x7fb00340  sq          $s0, 0x340($sp)
    ctx->pc = 0x1fb4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 16));
    // 0x1fb4c0: 0x7fb10330  sq          $s1, 0x330($sp)
    ctx->pc = 0x1fb4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 17));
    // 0x1fb4c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fb4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb4c8: 0x7fb20320  sq          $s2, 0x320($sp)
    ctx->pc = 0x1fb4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 18));
    // 0x1fb4cc: 0xffbf0310  sd          $ra, 0x310($sp)
    ctx->pc = 0x1fb4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 31));
    // 0x1fb4d0: 0xe7b40350  swc1        $f20, 0x350($sp)
    ctx->pc = 0x1fb4d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 848), bits); }
    // 0x1fb4d4: 0x7fa50210  sq          $a1, 0x210($sp)
    ctx->pc = 0x1fb4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 5));
    // 0x1fb4d8: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x1fb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1fb4dc: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x1fb4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    // 0x1fb4e0: 0x7fa70230  sq          $a3, 0x230($sp)
    ctx->pc = 0x1fb4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    // 0x1fb4e4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fb4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fb4e8: 0x7fa80240  sq          $t0, 0x240($sp)
    ctx->pc = 0x1fb4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 8));
    // 0x1fb4ec: 0x144001ea  bnez        $v0, . + 4 + (0x1EA << 2)
    ctx->pc = 0x1FB4ECu;
    {
        const bool branch_taken_0x1fb4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB4ECu;
            // 0x1fb4f0: 0x7fa90200  sq          $t1, 0x200($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb4ec) {
            ctx->pc = 0x1FBC98u;
            goto label_1fbc98;
        }
    }
    ctx->pc = 0x1FB4F4u;
    // 0x1fb4f4: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x1fb4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1fb4f8: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x1fb4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x1fb4fc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FB4FCu;
    {
        const bool branch_taken_0x1fb4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb4fc) {
            ctx->pc = 0x1FB540u;
            goto label_1fb540;
        }
    }
    ctx->pc = 0x1FB504u;
    // 0x1fb504: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x1fb504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1fb508: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1fb508u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fb50c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fb50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fb510: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FB510u;
    {
        const bool branch_taken_0x1fb510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB510u;
            // 0x1fb514: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb510) {
            ctx->pc = 0x1FB540u;
            goto label_1fb540;
        }
    }
    ctx->pc = 0x1FB518u;
    // 0x1fb518: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1fb518u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb51c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1fb51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1fb520: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fb520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fb524: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fb524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fb528: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fb528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb52c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fb52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fb530: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fb530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fb534: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1fb534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1fb538: 0x40f809  jalr        $v0
    ctx->pc = 0x1FB538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FB540u);
        ctx->pc = 0x1FB53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB538u;
            // 0x1fb53c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FB540u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FB540u: goto label_1fb540;
            case 0x1FBA98u: goto label_1fba98;
            case 0x1FBC98u: goto label_1fbc98;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FB540u; }
            if (ctx->pc != 0x1FB540u) { return; }
        }
        }
    }
    ctx->pc = 0x1FB540u;
label_1fb540:
    // 0x1fb540: 0x3c023f03  lui         $v0, 0x3F03
    ctx->pc = 0x1fb540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16131 << 16));
    // 0x1fb544: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1fb544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x1fb548: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1fb548u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb54c: 0xdba10210  lqc2        $vf1, 0x210($sp)
    ctx->pc = 0x1fb54cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1fb550: 0x4be20898  vmulx.xyzw  $vf2, $vf1, $vf2x
    ctx->pc = 0x1fb550u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb554: 0x3c023ec4  lui         $v0, 0x3EC4
    ctx->pc = 0x1fb554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16068 << 16));
    // 0x1fb558: 0x34429ba7  ori         $v0, $v0, 0x9BA7
    ctx->pc = 0x1fb558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39847);
    // 0x1fb55c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb55cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb560: 0xdba30220  lqc2        $vf3, 0x220($sp)
    ctx->pc = 0x1fb560u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1fb564: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x1fb564u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb568: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb568u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb56c: 0x3c023dc4  lui         $v0, 0x3DC4
    ctx->pc = 0x1fb56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15812 << 16));
    // 0x1fb570: 0x34429ba7  ori         $v0, $v0, 0x9BA7
    ctx->pc = 0x1fb570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39847);
    // 0x1fb574: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb574u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb578: 0xdba40230  lqc2        $vf4, 0x230($sp)
    ctx->pc = 0x1fb578u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1fb57c: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1fb57cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb580: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb580u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb584: 0x3c023c03  lui         $v0, 0x3C03
    ctx->pc = 0x1fb584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
    // 0x1fb588: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1fb588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x1fb58c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb58cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb590: 0xdba50240  lqc2        $vf5, 0x240($sp)
    ctx->pc = 0x1fb590u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1fb594: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x1fb594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb598: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb59c: 0xfba200b0  sqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x1fb59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb5a0: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1fb5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1fb5a4: 0x48a23800  qmtc2.ni    $v0, $vf7
    ctx->pc = 0x1fb5a4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb5a8: 0x4be71098  vmulx.xyzw  $vf2, $vf2, $vf7x
    ctx->pc = 0x1fb5a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb5ac: 0x3c023e9d  lui         $v0, 0x3E9D
    ctx->pc = 0x1fb5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16029 << 16));
    // 0x1fb5b0: 0x344276ca  ori         $v0, $v0, 0x76CA
    ctx->pc = 0x1fb5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30410);
    // 0x1fb5b4: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x1fb5b4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb5b8: 0xdba80210  lqc2        $vf8, 0x210($sp)
    ctx->pc = 0x1fb5b8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1fb5bc: 0x4be64198  vmulx.xyzw  $vf6, $vf8, $vf6x
    ctx->pc = 0x1fb5bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1fb5c0: 0x3c023ee3  lui         $v0, 0x3EE3
    ctx->pc = 0x1fb5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16099 << 16));
    // 0x1fb5c4: 0x344272b0  ori         $v0, $v0, 0x72B0
    ctx->pc = 0x1fb5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29360);
    // 0x1fb5c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb5c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb5cc: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x1fb5ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb5d0: 0x4be131a8  vadd.xyzw   $vf6, $vf6, $vf1
    ctx->pc = 0x1fb5d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1fb5d4: 0x3c023e5b  lui         $v0, 0x3E5B
    ctx->pc = 0x1fb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15963 << 16));
    // 0x1fb5d8: 0x34420624  ori         $v0, $v0, 0x624
    ctx->pc = 0x1fb5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1572);
    // 0x1fb5dc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb5dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb5e0: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1fb5e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb5e4: 0x4be131a8  vadd.xyzw   $vf6, $vf6, $vf1
    ctx->pc = 0x1fb5e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1fb5e8: 0x3c023d0c  lui         $v0, 0x3D0C
    ctx->pc = 0x1fb5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15628 << 16));
    // 0x1fb5ec: 0x34429ba5  ori         $v0, $v0, 0x9BA5
    ctx->pc = 0x1fb5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39845);
    // 0x1fb5f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb5f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb5f4: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x1fb5f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb5f8: 0x4be131a8  vadd.xyzw   $vf6, $vf6, $vf1
    ctx->pc = 0x1fb5f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1fb5fc: 0xfba600c0  sqc2        $vf6, 0xC0($sp)
    ctx->pc = 0x1fb5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1fb600: 0x4be73198  vmulx.xyzw  $vf6, $vf6, $vf7x
    ctx->pc = 0x1fb600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1fb604: 0x3c023e2a  lui         $v0, 0x3E2A
    ctx->pc = 0x1fb604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15914 << 16));
    // 0x1fb608: 0x34425e36  ori         $v0, $v0, 0x5E36
    ctx->pc = 0x1fb608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24118);
    // 0x1fb60c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1fb60cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb610: 0x4be44118  vmulx.xyzw  $vf4, $vf8, $vf4x
    ctx->pc = 0x1fb610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fb614: 0x3c023ed1  lui         $v0, 0x3ED1
    ctx->pc = 0x1fb614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16081 << 16));
    // 0x1fb618: 0x34421688  ori         $v0, $v0, 0x1688
    ctx->pc = 0x1fb618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5768);
    // 0x1fb61c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb61cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb620: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x1fb620u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb624: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1fb624u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fb628: 0x3c023eab  lui         $v0, 0x3EAB
    ctx->pc = 0x1fb628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16043 << 16));
    // 0x1fb62c: 0x3442126e  ori         $v0, $v0, 0x126E
    ctx->pc = 0x1fb62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4718);
    // 0x1fb630: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb630u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb634: 0xdba30230  lqc2        $vf3, 0x230($sp)
    ctx->pc = 0x1fb634u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1fb638: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x1fb638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb63c: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1fb63cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fb640: 0x3c023dba  lui         $v0, 0x3DBA
    ctx->pc = 0x1fb640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15802 << 16));
    // 0x1fb644: 0x34429fbd  ori         $v0, $v0, 0x9FBD
    ctx->pc = 0x1fb644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40893);
    // 0x1fb648: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb648u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb64c: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x1fb64cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb650: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1fb650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fb654: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1fb654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fb658: 0x4be72118  vmulx.xyzw  $vf4, $vf4, $vf7x
    ctx->pc = 0x1fb658u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fb65c: 0x3c023d9d  lui         $v0, 0x3D9D
    ctx->pc = 0x1fb65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15773 << 16));
    // 0x1fb660: 0x3442374c  ori         $v0, $v0, 0x374C
    ctx->pc = 0x1fb660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14156);
    // 0x1fb664: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1fb664u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb668: 0x4be340d8  vmulx.xyzw  $vf3, $vf8, $vf3x
    ctx->pc = 0x1fb668u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fb66c: 0x3c023e9f  lui         $v0, 0x3E9F
    ctx->pc = 0x1fb66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16031 << 16));
    // 0x1fb670: 0x3442872c  ori         $v0, $v0, 0x872C
    ctx->pc = 0x1fb670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34604);
    // 0x1fb674: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb674u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb678: 0xdba50220  lqc2        $vf5, 0x220($sp)
    ctx->pc = 0x1fb678u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1fb67c: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x1fb67cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb680: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1fb680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fb684: 0x3c023ed7  lui         $v0, 0x3ED7
    ctx->pc = 0x1fb684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16087 << 16));
    // 0x1fb688: 0x3442d4fe  ori         $v0, $v0, 0xD4FE
    ctx->pc = 0x1fb688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54526);
    // 0x1fb68c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb68cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb690: 0xdba80230  lqc2        $vf8, 0x230($sp)
    ctx->pc = 0x1fb690u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1fb694: 0x4be14058  vmulx.xyzw  $vf1, $vf8, $vf1x
    ctx->pc = 0x1fb694u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb698: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1fb698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fb69c: 0x3c023e42  lui         $v0, 0x3E42
    ctx->pc = 0x1fb69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15938 << 16));
    // 0x1fb6a0: 0x3442ac08  ori         $v0, $v0, 0xAC08
    ctx->pc = 0x1fb6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44040);
    // 0x1fb6a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb6a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb6a8: 0xdba50240  lqc2        $vf5, 0x240($sp)
    ctx->pc = 0x1fb6a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1fb6ac: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x1fb6acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb6b0: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1fb6b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fb6b4: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x1fb6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fb6b8: 0x4be718d8  vmulx.xyzw  $vf3, $vf3, $vf7x
    ctx->pc = 0x1fb6b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fb6bc: 0x3c023cdd  lui         $v0, 0x3CDD
    ctx->pc = 0x1fb6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15581 << 16));
    // 0x1fb6c0: 0x34422f1c  ori         $v0, $v0, 0x2F1C
    ctx->pc = 0x1fb6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12060);
    // 0x1fb6c4: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x1fb6c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb6c8: 0xdba80210  lqc2        $vf8, 0x210($sp)
    ctx->pc = 0x1fb6c8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1fb6cc: 0x4be54158  vmulx.xyzw  $vf5, $vf8, $vf5x
    ctx->pc = 0x1fb6ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fb6d0: 0x3c023e41  lui         $v0, 0x3E41
    ctx->pc = 0x1fb6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15937 << 16));
    // 0x1fb6d4: 0x34428938  ori         $v0, $v0, 0x8938
    ctx->pc = 0x1fb6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35128);
    // 0x1fb6d8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb6d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb6dc: 0xdba80220  lqc2        $vf8, 0x220($sp)
    ctx->pc = 0x1fb6dcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1fb6e0: 0x4be14058  vmulx.xyzw  $vf1, $vf8, $vf1x
    ctx->pc = 0x1fb6e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb6e4: 0x4be12968  vadd.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x1fb6e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fb6e8: 0x3c023ee1  lui         $v0, 0x3EE1
    ctx->pc = 0x1fb6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16097 << 16));
    // 0x1fb6ec: 0x3442cac0  ori         $v0, $v0, 0xCAC0
    ctx->pc = 0x1fb6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51904);
    // 0x1fb6f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb6f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb6f4: 0xdba80230  lqc2        $vf8, 0x230($sp)
    ctx->pc = 0x1fb6f4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1fb6f8: 0x4be14058  vmulx.xyzw  $vf1, $vf8, $vf1x
    ctx->pc = 0x1fb6f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb6fc: 0x4be12968  vadd.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x1fb6fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fb700: 0x3c023eaf  lui         $v0, 0x3EAF
    ctx->pc = 0x1fb700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16047 << 16));
    // 0x1fb704: 0x34429db2  ori         $v0, $v0, 0x9DB2
    ctx->pc = 0x1fb704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40370);
    // 0x1fb708: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb708u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb70c: 0xdba80240  lqc2        $vf8, 0x240($sp)
    ctx->pc = 0x1fb70cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1fb710: 0x4be14058  vmulx.xyzw  $vf1, $vf8, $vf1x
    ctx->pc = 0x1fb710u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb714: 0x4be12968  vadd.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x1fb714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fb718: 0xfba500f0  sqc2        $vf5, 0xF0($sp)
    ctx->pc = 0x1fb718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1fb71c: 0x4be72858  vmulx.xyzw  $vf1, $vf5, $vf7x
    ctx->pc = 0x1fb71cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb720: 0xfba10250  sqc2        $vf1, 0x250($sp)
    ctx->pc = 0x1fb720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb724: 0x3c044580  lui         $a0, 0x4580
    ctx->pc = 0x1fb724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17792 << 16));
    // 0x1fb728: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1fb728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1fb72c: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1fb72cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1fb730: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1fb730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1fb734: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1fb734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1fb738: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1fb738u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1fb73c: 0x706214c8  ppacw       $v0, $v1, $v0
    ctx->pc = 0x1fb73cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1fb740: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1fb740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1fb744: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1fb744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1fb748: 0x3c054580  lui         $a1, 0x4580
    ctx->pc = 0x1fb748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17792 << 16));
    // 0x1fb74c: 0x3c044400  lui         $a0, 0x4400
    ctx->pc = 0x1fb74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17408 << 16));
    // 0x1fb750: 0x70a41389  pcpyld      $v0, $a1, $a0
    ctx->pc = 0x1fb750u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1fb754: 0x706214c8  ppacw       $v0, $v1, $v0
    ctx->pc = 0x1fb754u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1fb758: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1fb758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1fb75c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1fb75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1fb760: 0x3c054580  lui         $a1, 0x4580
    ctx->pc = 0x1fb760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17792 << 16));
    // 0x1fb764: 0x3c044480  lui         $a0, 0x4480
    ctx->pc = 0x1fb764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17536 << 16));
    // 0x1fb768: 0x70a41389  pcpyld      $v0, $a1, $a0
    ctx->pc = 0x1fb768u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1fb76c: 0x706214c8  ppacw       $v0, $v1, $v0
    ctx->pc = 0x1fb76cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1fb770: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1fb770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1fb774: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1fb774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1fb778: 0x3c054580  lui         $a1, 0x4580
    ctx->pc = 0x1fb778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17792 << 16));
    // 0x1fb77c: 0x3c0444c0  lui         $a0, 0x44C0
    ctx->pc = 0x1fb77cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17600 << 16));
    // 0x1fb780: 0x70a41389  pcpyld      $v0, $a1, $a0
    ctx->pc = 0x1fb780u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1fb784: 0x706214c8  ppacw       $v0, $v1, $v0
    ctx->pc = 0x1fb784u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1fb788: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1fb788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x1fb78c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1fb78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1fb790: 0x3c054580  lui         $a1, 0x4580
    ctx->pc = 0x1fb790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17792 << 16));
    // 0x1fb794: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x1fb794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x1fb798: 0x70a41389  pcpyld      $v0, $a1, $a0
    ctx->pc = 0x1fb798u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1fb79c: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x1fb79cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1fb7a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fb7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fb7a4: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x1fb7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1fb7a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fb7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb7ac: 0x7fa30140  sq          $v1, 0x140($sp)
    ctx->pc = 0x1fb7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 3));
    // 0x1fb7b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fb7b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb7b4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1fb7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x1fb7b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fb7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb7bc: 0x80480147  lb          $t0, 0x147($v0)
    ctx->pc = 0x1fb7bcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 327)));
    // 0x1fb7c0: 0xfba202b0  sqc2        $vf2, 0x2B0($sp)
    ctx->pc = 0x1fb7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb7c4: 0x2d080001  sltiu       $t0, $t0, 0x1
    ctx->pc = 0x1fb7c4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fb7c8: 0xfba302c0  sqc2        $vf3, 0x2C0($sp)
    ctx->pc = 0x1fb7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fb7cc: 0xfba402d0  sqc2        $vf4, 0x2D0($sp)
    ctx->pc = 0x1fb7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fb7d0: 0xfba502e0  sqc2        $vf5, 0x2E0($sp)
    ctx->pc = 0x1fb7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1fb7d4: 0xfba602f0  sqc2        $vf6, 0x2F0($sp)
    ctx->pc = 0x1fb7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1fb7d8: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FB7D8u;
    SET_GPR_U32(ctx, 31, 0x1FB7E0u);
    ctx->pc = 0x1FB7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB7D8u;
            // 0x1fb7dc: 0xfba70300  sqc2        $vf7, 0x300($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 768), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB7E0u; }
        if (ctx->pc != 0x1FB7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB7E0u; }
        if (ctx->pc != 0x1FB7E0u) { return; }
    }
    ctx->pc = 0x1FB7E0u;
    // 0x1fb7e0: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x1fb7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1fb7e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fb7e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb7e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fb7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb7ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fb7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb7f0: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x1fb7f0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x1fb7f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fb7f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb7f8: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1FB7F8u;
    SET_GPR_U32(ctx, 31, 0x1FB800u);
    ctx->pc = 0x1FB7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB7F8u;
            // 0x1fb7fc: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB800u; }
        if (ctx->pc != 0x1FB800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB800u; }
        if (ctx->pc != 0x1FB800u) { return; }
    }
    ctx->pc = 0x1FB800u;
    // 0x1fb800: 0xdba10100  lqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1fb800u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1fb804: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fb804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb808: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x1fb808u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb80c: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1fb80cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb810: 0xdba10110  lqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1fb810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1fb814: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x1fb814u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb818: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x1fb818u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb81c: 0xdba10120  lqc2        $vf1, 0x120($sp)
    ctx->pc = 0x1fb81cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1fb820: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x1fb820u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb824: 0xfa410020  sqc2        $vf1, 0x20($s2)
    ctx->pc = 0x1fb824u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb828: 0xdba10100  lqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1fb828u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1fb82c: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x1fb82cu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb830: 0xfa410030  sqc2        $vf1, 0x30($s2)
    ctx->pc = 0x1fb830u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb834: 0xdba10130  lqc2        $vf1, 0x130($sp)
    ctx->pc = 0x1fb834u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1fb838: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x1fb838u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb83c: 0xfa410040  sqc2        $vf1, 0x40($s2)
    ctx->pc = 0x1fb83cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb840: 0xdba10100  lqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1fb840u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1fb844: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x1fb844u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb848: 0xfa410050  sqc2        $vf1, 0x50($s2)
    ctx->pc = 0x1fb848u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb84c: 0xdba10140  lqc2        $vf1, 0x140($sp)
    ctx->pc = 0x1fb84cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1fb850: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x1fb850u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb854: 0xfa410060  sqc2        $vf1, 0x60($s2)
    ctx->pc = 0x1fb854u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb858: 0xdba202b0  lqc2        $vf2, 0x2B0($sp)
    ctx->pc = 0x1fb858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1fb85c: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x1fb85cu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb860: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1fb860u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb864: 0xdba602f0  lqc2        $vf6, 0x2F0($sp)
    ctx->pc = 0x1fb864u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1fb868: 0x4be6317c  vftoi0.xyzw $vf6, $vf6
    ctx->pc = 0x1fb868u;
    { __m128 src = ctx->vu0_vf[6]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1fb86c: 0xfa260010  sqc2        $vf6, 0x10($s1)
    ctx->pc = 0x1fb86cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1fb870: 0xdba402d0  lqc2        $vf4, 0x2D0($sp)
    ctx->pc = 0x1fb870u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1fb874: 0x4be4217c  vftoi0.xyzw $vf4, $vf4
    ctx->pc = 0x1fb874u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fb878: 0xfa240020  sqc2        $vf4, 0x20($s1)
    ctx->pc = 0x1fb878u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fb87c: 0xfa220030  sqc2        $vf2, 0x30($s1)
    ctx->pc = 0x1fb87cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb880: 0xdba302c0  lqc2        $vf3, 0x2C0($sp)
    ctx->pc = 0x1fb880u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x1fb884: 0x4be3197c  vftoi0.xyzw $vf3, $vf3
    ctx->pc = 0x1fb884u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fb888: 0xfa230040  sqc2        $vf3, 0x40($s1)
    ctx->pc = 0x1fb888u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fb88c: 0xfa220050  sqc2        $vf2, 0x50($s1)
    ctx->pc = 0x1fb88cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb890: 0xdba20250  lqc2        $vf2, 0x250($sp)
    ctx->pc = 0x1fb890u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1fb894: 0x4be1117c  vftoi0.xyzw $vf1, $vf2
    ctx->pc = 0x1fb894u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb898: 0xfa210060  sqc2        $vf1, 0x60($s1)
    ctx->pc = 0x1fb898u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb89c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fb89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fb8a0: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1fb8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1fb8a4: 0x26520070  addiu       $s2, $s2, 0x70
    ctx->pc = 0x1fb8a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x1fb8a8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1fb8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1fb8ac: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x1fb8acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1fb8b0: 0xdba502e0  lqc2        $vf5, 0x2E0($sp)
    ctx->pc = 0x1fb8b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1fb8b4: 0xfba50150  sqc2        $vf5, 0x150($sp)
    ctx->pc = 0x1fb8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1fb8b8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1fb8b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb8bc: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x1fb8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
    // 0x1fb8c0: 0x3c023c3a  lui         $v0, 0x3C3A
    ctx->pc = 0x1fb8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15418 << 16));
    // 0x1fb8c4: 0x34429fc2  ori         $v0, $v0, 0x9FC2
    ctx->pc = 0x1fb8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40898);
    // 0x1fb8c8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1fb8c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb8cc: 0xdba10210  lqc2        $vf1, 0x210($sp)
    ctx->pc = 0x1fb8ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1fb8d0: 0x4be20898  vmulx.xyzw  $vf2, $vf1, $vf2x
    ctx->pc = 0x1fb8d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb8d4: 0x3c023df1  lui         $v0, 0x3DF1
    ctx->pc = 0x1fb8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15857 << 16));
    // 0x1fb8d8: 0x34420e59  ori         $v0, $v0, 0xE59
    ctx->pc = 0x1fb8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3673);
    // 0x1fb8dc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb8dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb8e0: 0xdba30220  lqc2        $vf3, 0x220($sp)
    ctx->pc = 0x1fb8e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1fb8e4: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x1fb8e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb8e8: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb8e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb8ec: 0x3c023ecf  lui         $v0, 0x3ECF
    ctx->pc = 0x1fb8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16079 << 16));
    // 0x1fb8f0: 0x34429376  ori         $v0, $v0, 0x9376
    ctx->pc = 0x1fb8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37750);
    // 0x1fb8f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb8f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb8f8: 0xdba40230  lqc2        $vf4, 0x230($sp)
    ctx->pc = 0x1fb8f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1fb8fc: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1fb8fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb900: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb904: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x1fb904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x1fb908: 0x344253f7  ori         $v0, $v0, 0x53F7
    ctx->pc = 0x1fb908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21495);
    // 0x1fb90c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb90cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb910: 0xdba50240  lqc2        $vf5, 0x240($sp)
    ctx->pc = 0x1fb910u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1fb914: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x1fb914u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb918: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb91c: 0xfba20160  sqc2        $vf2, 0x160($sp)
    ctx->pc = 0x1fb91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb920: 0xdba70300  lqc2        $vf7, 0x300($sp)
    ctx->pc = 0x1fb920u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1fb924: 0x4be71218  vmulx.xyzw  $vf8, $vf2, $vf7x
    ctx->pc = 0x1fb924u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1fb928: 0x3c023b5d  lui         $v0, 0x3B5D
    ctx->pc = 0x1fb928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15197 << 16));
    // 0x1fb92c: 0x34422f14  ori         $v0, $v0, 0x2F14
    ctx->pc = 0x1fb92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12052);
    // 0x1fb930: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1fb930u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb934: 0xfba80270  sqc2        $vf8, 0x270($sp)
    ctx->pc = 0x1fb934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1fb938: 0xdba10210  lqc2        $vf1, 0x210($sp)
    ctx->pc = 0x1fb938u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1fb93c: 0x4be20898  vmulx.xyzw  $vf2, $vf1, $vf2x
    ctx->pc = 0x1fb93cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb940: 0x3c023d6b  lui         $v0, 0x3D6B
    ctx->pc = 0x1fb940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15723 << 16));
    // 0x1fb944: 0x34420208  ori         $v0, $v0, 0x208
    ctx->pc = 0x1fb944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)520);
    // 0x1fb948: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb948u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb94c: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x1fb94cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb950: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb954: 0x3c023ea6  lui         $v0, 0x3EA6
    ctx->pc = 0x1fb954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16038 << 16));
    // 0x1fb958: 0x344276c8  ori         $v0, $v0, 0x76C8
    ctx->pc = 0x1fb958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30408);
    // 0x1fb95c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb95cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb960: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1fb960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb964: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb968: 0x3c023f1d  lui         $v0, 0x3F1D
    ctx->pc = 0x1fb968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16157 << 16));
    // 0x1fb96c: 0x3442374c  ori         $v0, $v0, 0x374C
    ctx->pc = 0x1fb96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14156);
    // 0x1fb970: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb970u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb974: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x1fb974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb978: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb97c: 0xfba20170  sqc2        $vf2, 0x170($sp)
    ctx->pc = 0x1fb97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb980: 0x4be710d8  vmulx.xyzw  $vf3, $vf2, $vf7x
    ctx->pc = 0x1fb980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fb984: 0x3c0239dd  lui         $v0, 0x39DD
    ctx->pc = 0x1fb984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14813 << 16));
    // 0x1fb988: 0x34422f14  ori         $v0, $v0, 0x2F14
    ctx->pc = 0x1fb988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12052);
    // 0x1fb98c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1fb98cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb990: 0xfba30280  sqc2        $vf3, 0x280($sp)
    ctx->pc = 0x1fb990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fb994: 0xdba40210  lqc2        $vf4, 0x210($sp)
    ctx->pc = 0x1fb994u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1fb998: 0x4be22098  vmulx.xyzw  $vf2, $vf4, $vf2x
    ctx->pc = 0x1fb998u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb99c: 0x3c023c7f  lui         $v0, 0x3C7F
    ctx->pc = 0x1fb99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15487 << 16));
    // 0x1fb9a0: 0x3442be72  ori         $v0, $v0, 0xBE72
    ctx->pc = 0x1fb9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48754);
    // 0x1fb9a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb9a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb9a8: 0xdba50220  lqc2        $vf5, 0x220($sp)
    ctx->pc = 0x1fb9a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1fb9ac: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x1fb9acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb9b0: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb9b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb9b4: 0x3c023e45  lui         $v0, 0x3E45
    ctx->pc = 0x1fb9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15941 << 16));
    // 0x1fb9b8: 0x344222cf  ori         $v0, $v0, 0x22CF
    ctx->pc = 0x1fb9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8911);
    // 0x1fb9bc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb9bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb9c0: 0xdba80230  lqc2        $vf8, 0x230($sp)
    ctx->pc = 0x1fb9c0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1fb9c4: 0x4be14058  vmulx.xyzw  $vf1, $vf8, $vf1x
    ctx->pc = 0x1fb9c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb9c8: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb9c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb9cc: 0x3c023f4a  lui         $v0, 0x3F4A
    ctx->pc = 0x1fb9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16202 << 16));
    // 0x1fb9d0: 0x34429cad  ori         $v0, $v0, 0x9CAD
    ctx->pc = 0x1fb9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40109);
    // 0x1fb9d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fb9d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb9d8: 0xdba30240  lqc2        $vf3, 0x240($sp)
    ctx->pc = 0x1fb9d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1fb9dc: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x1fb9dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb9e0: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb9e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb9e4: 0xfba20180  sqc2        $vf2, 0x180($sp)
    ctx->pc = 0x1fb9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb9e8: 0x4be71118  vmulx.xyzw  $vf4, $vf2, $vf7x
    ctx->pc = 0x1fb9e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fb9ec: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1fb9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1fb9f0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1fb9f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb9f4: 0xfba40290  sqc2        $vf4, 0x290($sp)
    ctx->pc = 0x1fb9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fb9f8: 0xdba50210  lqc2        $vf5, 0x210($sp)
    ctx->pc = 0x1fb9f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1fb9fc: 0x4be22898  vmulx.xyzw  $vf2, $vf5, $vf2x
    ctx->pc = 0x1fb9fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fba00: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1fba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1fba04: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fba04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fba08: 0xdba80220  lqc2        $vf8, 0x220($sp)
    ctx->pc = 0x1fba08u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1fba0c: 0x4be140d8  vmulx.xyzw  $vf3, $vf8, $vf1x
    ctx->pc = 0x1fba0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fba10: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1fba10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fba14: 0xdba30230  lqc2        $vf3, 0x230($sp)
    ctx->pc = 0x1fba14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1fba18: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x1fba18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fba1c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fba1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fba20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fba20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fba24: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fba24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fba28: 0xdba40240  lqc2        $vf4, 0x240($sp)
    ctx->pc = 0x1fba28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1fba2c: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1fba2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fba30: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fba30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fba34: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x1fba34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fba38: 0x4be71158  vmulx.xyzw  $vf5, $vf2, $vf7x
    ctx->pc = 0x1fba38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fba3c: 0xdba80260  lqc2        $vf8, 0x260($sp)
    ctx->pc = 0x1fba3cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1fba40: 0xfba502a0  sqc2        $vf5, 0x2A0($sp)
    ctx->pc = 0x1fba40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1fba44: 0x4be8286c  vsub.xyzw   $vf1, $vf5, $vf8
    ctx->pc = 0x1fba44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fba48: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1fba48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fba4c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1fba4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fba50: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1fba50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fba54: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1fba54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1fba58: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1fba58u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fba5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fba5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fba60: 0x46000504  c1          0x504
    ctx->pc = 0x1fba60u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fba64: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1fba64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1fba68: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x1fba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1fba6c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1fba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1fba70: 0x24632b20  addiu       $v1, $v1, 0x2B20
    ctx->pc = 0x1fba70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11040));
    // 0x1fba74: 0x8c84cd58  lw          $a0, -0x32A8($a0)
    ctx->pc = 0x1fba74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954328)));
    // 0x1fba78: 0x8c4201c4  lw          $v0, 0x1C4($v0)
    ctx->pc = 0x1fba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x1fba7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fba80: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1fba80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1fba84: 0xc090c5c  jal         func_243170
    ctx->pc = 0x1FBA84u;
    SET_GPR_U32(ctx, 31, 0x1FBA8Cu);
    ctx->pc = 0x1FBA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBA84u;
            // 0x1fba88: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243170u;
    if (runtime->hasFunction(0x243170u)) {
        auto targetFn = runtime->lookupFunction(0x243170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA8Cu; }
        if (ctx->pc != 0x1FBA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243170_0x243188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA8Cu; }
        if (ctx->pc != 0x1FBA8Cu) { return; }
    }
    ctx->pc = 0x1FBA8Cu;
    // 0x1fba8c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FBA8Cu;
    {
        const bool branch_taken_0x1fba8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fba8c) {
            ctx->pc = 0x1FBA90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBA8Cu;
            // 0x1fba90: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FBA98u;
            goto label_1fba98;
        }
    }
    ctx->pc = 0x1FBA94u;
    // 0x1fba94: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1fba94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fba98:
    // 0x1fba98: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1fba98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1fba9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fba9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbaa0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fbaa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbaa4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fbaa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbaa8: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x1fbaa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x1fbaac: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x1fbaacu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[1];
    // 0x1fbab0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fbab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbab4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fbab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fbab8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fbab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fbabc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fbabcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbac0: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x1fbac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x1fbac4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fbac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fbac8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1fbac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1fbacc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1fbaccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1fbad0: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x1fbad0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1fbad4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1fbad4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1fbad8: 0x70c72389  pcpyld      $a0, $a2, $a3
    ctx->pc = 0x1fbad8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1fbadc: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x1fbadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x1fbae0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fbae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbae4: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1fbae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1fbae8: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1fbae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1fbaec: 0x70451b89  pcpyld      $v1, $v0, $a1
    ctx->pc = 0x1fbaecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x1fbaf0: 0x706424c8  ppacw       $a0, $v1, $a0
    ctx->pc = 0x1fbaf0u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1fbaf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fbaf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbaf8: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x1fbaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x1fbafc: 0x7fa401a0  sq          $a0, 0x1A0($sp)
    ctx->pc = 0x1fbafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 4));
    // 0x1fbb00: 0x7fa40100  sq          $a0, 0x100($sp)
    ctx->pc = 0x1fbb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 4));
    // 0x1fbb04: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1fbb04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1fbb08: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1fbb08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1fbb0c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1fbb0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb10: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1fbb10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1fbb14: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x1fbb14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x1fbb18: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1fbb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1fbb1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fbb1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbb20: 0x706214c8  ppacw       $v0, $v1, $v0
    ctx->pc = 0x1fbb20u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1fbb24: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1fbb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1fbb28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fbb28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbb2c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1fbb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1fbb30: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x1fbb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x1fbb34: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1fbb34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1fbb38: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1fbb38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1fbb3c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1fbb3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1fbb40: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x1fbb40u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x1fbb44: 0x3c013ec0  lui         $at, 0x3EC0
    ctx->pc = 0x1fbb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16064 << 16));
    // 0x1fbb48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fbb48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbb4c: 0x706214c8  ppacw       $v0, $v1, $v0
    ctx->pc = 0x1fbb4cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1fbb50: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1fbb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1fbb54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fbb54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbb58: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1fbb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1fbb5c: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x1fbb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x1fbb60: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1fbb60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1fbb64: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1fbb64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1fbb68: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1fbb68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1fbb6c: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x1fbb6cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x1fbb70: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1fbb70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1fbb74: 0x706214c8  ppacw       $v0, $v1, $v0
    ctx->pc = 0x1fbb74u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1fbb78: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1fbb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x1fbb7c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1fbb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1fbb80: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1fbb80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1fbb84: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x1fbb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x1fbb88: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1fbb88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1fbb8c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1fbb8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1fbb90: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x1fbb90u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x1fbb94: 0x706214c8  ppacw       $v0, $v1, $v0
    ctx->pc = 0x1fbb94u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1fbb98: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1fbb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x1fbb9c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1fbb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x1fbba0: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x1fbba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x1fbba4: 0x3c064580  lui         $a2, 0x4580
    ctx->pc = 0x1fbba4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17792 << 16));
    // 0x1fbba8: 0x3c054580  lui         $a1, 0x4580
    ctx->pc = 0x1fbba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17792 << 16));
    // 0x1fbbac: 0x70c51389  pcpyld      $v0, $a2, $a1
    ctx->pc = 0x1fbbacu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x1fbbb0: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x1fbbb0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1fbbb4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1fbbb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1fbbb8: 0x4be1117c  vftoi0.xyzw $vf1, $vf2
    ctx->pc = 0x1fbbb8u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbbbc: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x1fbbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x1fbbc0: 0x7fa301f0  sq          $v1, 0x1F0($sp)
    ctx->pc = 0x1fbbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 3));
    // 0x1fbbc4: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1fbbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbbc8: 0xdba10110  lqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1fbbc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1fbbcc: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x1fbbccu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbbd0: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x1fbbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbbd4: 0xdba10120  lqc2        $vf1, 0x120($sp)
    ctx->pc = 0x1fbbd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1fbbd8: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x1fbbd8u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbbdc: 0xfa410020  sqc2        $vf1, 0x20($s2)
    ctx->pc = 0x1fbbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbbe0: 0xdba10100  lqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1fbbe0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1fbbe4: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x1fbbe4u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbbe8: 0xfa410030  sqc2        $vf1, 0x30($s2)
    ctx->pc = 0x1fbbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbbec: 0xdba10130  lqc2        $vf1, 0x130($sp)
    ctx->pc = 0x1fbbecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1fbbf0: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x1fbbf0u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbbf4: 0xfa410040  sqc2        $vf1, 0x40($s2)
    ctx->pc = 0x1fbbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbbf8: 0xdba10100  lqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1fbbf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1fbbfc: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x1fbbfcu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbc00: 0xfa410050  sqc2        $vf1, 0x50($s2)
    ctx->pc = 0x1fbc00u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbc04: 0xdba10140  lqc2        $vf1, 0x140($sp)
    ctx->pc = 0x1fbc04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1fbc08: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x1fbc08u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbc0c: 0xfa410060  sqc2        $vf1, 0x60($s2)
    ctx->pc = 0x1fbc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbc10: 0xdba10100  lqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1fbc10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1fbc14: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x1fbc14u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbc18: 0xfa410070  sqc2        $vf1, 0x70($s2)
    ctx->pc = 0x1fbc18u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbc1c: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1fbc1cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fbc20: 0x4be1197c  vftoi0.xyzw $vf1, $vf3
    ctx->pc = 0x1fbc20u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbc24: 0xfa410080  sqc2        $vf1, 0x80($s2)
    ctx->pc = 0x1fbc24u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbc28: 0xdba40260  lqc2        $vf4, 0x260($sp)
    ctx->pc = 0x1fbc28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1fbc2c: 0x4be2217c  vftoi0.xyzw $vf2, $vf4
    ctx->pc = 0x1fbc2cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fbc30: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1fbc30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fbc34: 0xdba50270  lqc2        $vf5, 0x270($sp)
    ctx->pc = 0x1fbc34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1fbc38: 0x4be1297c  vftoi0.xyzw $vf1, $vf5
    ctx->pc = 0x1fbc38u;
    { __m128 src = ctx->vu0_vf[5]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbc3c: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1fbc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbc40: 0xdba80280  lqc2        $vf8, 0x280($sp)
    ctx->pc = 0x1fbc40u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1fbc44: 0x4be1417c  vftoi0.xyzw $vf1, $vf8
    ctx->pc = 0x1fbc44u;
    { __m128 src = ctx->vu0_vf[8]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbc48: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x1fbc48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbc4c: 0xfa220030  sqc2        $vf2, 0x30($s1)
    ctx->pc = 0x1fbc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fbc50: 0xdba30290  lqc2        $vf3, 0x290($sp)
    ctx->pc = 0x1fbc50u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1fbc54: 0x4be1197c  vftoi0.xyzw $vf1, $vf3
    ctx->pc = 0x1fbc54u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbc58: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x1fbc58u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbc5c: 0xfa220050  sqc2        $vf2, 0x50($s1)
    ctx->pc = 0x1fbc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fbc60: 0xdba402a0  lqc2        $vf4, 0x2A0($sp)
    ctx->pc = 0x1fbc60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1fbc64: 0x4be1217c  vftoi0.xyzw $vf1, $vf4
    ctx->pc = 0x1fbc64u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbc68: 0xfa210060  sqc2        $vf1, 0x60($s1)
    ctx->pc = 0x1fbc68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbc6c: 0xfa220070  sqc2        $vf2, 0x70($s1)
    ctx->pc = 0x1fbc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fbc70: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1fbc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1fbc74: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1fbc74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fbc78: 0xdba10200  lqc2        $vf1, 0x200($sp)
    ctx->pc = 0x1fbc78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1fbc7c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1fbc7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbc80: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x1fbc80u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fbc84: 0xfa210080  sqc2        $vf1, 0x80($s1)
    ctx->pc = 0x1fbc84u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbc88: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fbc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fbc8c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1fbc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1fbc90: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1fbc90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1fbc94: 0x0  nop
    ctx->pc = 0x1fbc94u;
    // NOP
label_1fbc98:
    // 0x1fbc98: 0x7bb00340  lq          $s0, 0x340($sp)
    ctx->pc = 0x1fbc98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1fbc9c: 0x7bb10330  lq          $s1, 0x330($sp)
    ctx->pc = 0x1fbc9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1fbca0: 0x7bb20320  lq          $s2, 0x320($sp)
    ctx->pc = 0x1fbca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1fbca4: 0xdfbf0310  ld          $ra, 0x310($sp)
    ctx->pc = 0x1fbca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1fbca8: 0xc7b40350  lwc1        $f20, 0x350($sp)
    ctx->pc = 0x1fbca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fbcac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBCACu;
            // 0x1fbcb0: 0x27bd0360  addiu       $sp, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FB540u: goto label_1fb540;
            case 0x1FBA98u: goto label_1fba98;
            case 0x1FBC98u: goto label_1fbc98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FBCB4u;
    // 0x1fbcb4: 0x0  nop
    ctx->pc = 0x1fbcb4u;
    // NOP
}
