#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD8D8
// Address: 0x1fd8d8 - 0x1fe098
void sub_001FD8D8_0x1fd8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD8D8_0x1fd8d8");
#endif

    ctx->pc = 0x1fd8d8u;

label_1fd8d8:
    // 0x1fd8d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fd8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fd8dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fd8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fd8e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fd8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fd8e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fd8e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd8e8: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x1fd8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x1fd8ec: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FD8ECu;
    {
        const bool branch_taken_0x1fd8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD8ECu;
            // 0x1fd8f0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd8ec) {
            ctx->pc = 0x1FD950u;
            goto label_1fd950;
        }
    }
    ctx->pc = 0x1FD8F4u;
    // 0x1fd8f4: 0x8c425e7c  lw          $v0, 0x5E7C($v0)
    ctx->pc = 0x1fd8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24188)));
    // 0x1fd8f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fd8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fd8fc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1fd8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1fd900: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fd900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd904: 0x8c641184  lw          $a0, 0x1184($v1)
    ctx->pc = 0x1fd904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4484)));
    // 0x1fd908: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1FD908u;
    SET_GPR_U32(ctx, 31, 0x1FD910u);
    ctx->pc = 0x1FD90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD908u;
            // 0x1fd90c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD910u; }
        if (ctx->pc != 0x1FD910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD910u; }
        if (ctx->pc != 0x1FD910u) { return; }
    }
    ctx->pc = 0x1FD910u;
    // 0x1fd910: 0xda010080  lqc2        $vf1, 0x80($s0)
    ctx->pc = 0x1fd910u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1fd914: 0x8e040230  lw          $a0, 0x230($s0)
    ctx->pc = 0x1fd914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1fd918: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1fd918u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1fd91c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1fd91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fd920: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1fd920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fd924: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1fd924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fd928: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fd928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fd92c: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1fd92cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fd930: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1fd930u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fd934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd938: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd93c: 0x4a831080  vaddx.y     $vf2, $vf2, $vf3x
    ctx->pc = 0x1fd93cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fd940: 0x8ca60248  lw          $a2, 0x248($a1)
    ctx->pc = 0x1fd940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 584)));
    // 0x1fd944: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x1fd944u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fd948: 0xc0884b8  jal         func_2212E0
    ctx->pc = 0x1FD948u;
    SET_GPR_U32(ctx, 31, 0x1FD950u);
    ctx->pc = 0x1FD94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD948u;
            // 0x1fd94c: 0x48270800  qmfc2.ni    $a3, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2212E0u;
    if (runtime->hasFunction(0x2212E0u)) {
        auto targetFn = runtime->lookupFunction(0x2212E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD950u; }
        if (ctx->pc != 0x1FD950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002212E0_0x2212e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD950u; }
        if (ctx->pc != 0x1FD950u) { return; }
    }
    ctx->pc = 0x1FD950u;
label_1fd950:
    // 0x1fd950: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fd950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd958: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD958u;
            // 0x1fd95c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD8D8u: goto label_1fd8d8;
            case 0x1FD950u: goto label_1fd950;
            case 0x1FD9F0u: goto label_1fd9f0;
            case 0x1FDA14u: goto label_1fda14;
            case 0x1FDA3Cu: goto label_1fda3c;
            case 0x1FDA80u: goto label_1fda80;
            case 0x1FDA90u: goto label_1fda90;
            case 0x1FDABCu: goto label_1fdabc;
            case 0x1FDAC0u: goto label_1fdac0;
            case 0x1FDC00u: goto label_1fdc00;
            case 0x1FDC38u: goto label_1fdc38;
            case 0x1FDC40u: goto label_1fdc40;
            case 0x1FDC58u: goto label_1fdc58;
            case 0x1FDCF0u: goto label_1fdcf0;
            case 0x1FDD04u: goto label_1fdd04;
            case 0x1FDD38u: goto label_1fdd38;
            case 0x1FDD3Cu: goto label_1fdd3c;
            case 0x1FDD6Cu: goto label_1fdd6c;
            case 0x1FDD70u: goto label_1fdd70;
            case 0x1FDE10u: goto label_1fde10;
            case 0x1FDE18u: goto label_1fde18;
            case 0x1FDE3Cu: goto label_1fde3c;
            case 0x1FDE5Cu: goto label_1fde5c;
            case 0x1FDE60u: goto label_1fde60;
            case 0x1FDEE8u: goto label_1fdee8;
            case 0x1FDF38u: goto label_1fdf38;
            case 0x1FDF80u: goto label_1fdf80;
            case 0x1FDFA8u: goto label_1fdfa8;
            case 0x1FDFB0u: goto label_1fdfb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD960u;
    // 0x1fd960: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x1fd960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x1fd964: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x1fd964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x1fd968: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x1fd968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x1fd96c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fd96cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd970: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x1fd970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x1fd974: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fd974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd978: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x1fd978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x1fd97c: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x1fd97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x1fd980: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x1fd980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x1fd984: 0xe7b701e8  swc1        $f23, 0x1E8($sp)
    ctx->pc = 0x1fd984u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x1fd988: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x1fd988u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x1fd98c: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x1fd98cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x1fd990: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x1fd990u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x1fd994: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x1fd994u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fd998: 0x8e330174  lw          $s3, 0x174($s1)
    ctx->pc = 0x1fd998u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1fd99c: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x1fd99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x1fd9a0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FD9A0u;
    {
        const bool branch_taken_0x1fd9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD9A0u;
            // 0x1fd9a4: 0x8e3402d8  lw          $s4, 0x2D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9a0) {
            ctx->pc = 0x1FDA14u;
            goto label_1fda14;
        }
    }
    ctx->pc = 0x1FD9A8u;
    // 0x1fd9a8: 0x32620003  andi        $v0, $s3, 0x3
    ctx->pc = 0x1fd9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
    // 0x1fd9ac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FD9ACu;
    {
        const bool branch_taken_0x1fd9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD9ACu;
            // 0x1fd9b0: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9ac) {
            ctx->pc = 0x1FD9F0u;
            goto label_1fd9f0;
        }
    }
    ctx->pc = 0x1FD9B4u;
    // 0x1fd9b4: 0x8e220234  lw          $v0, 0x234($s1)
    ctx->pc = 0x1fd9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1fd9b8: 0x8c635e7c  lw          $v1, 0x5E7C($v1)
    ctx->pc = 0x1fd9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24188)));
    // 0x1fd9bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd9c0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1fd9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1fd9c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fd9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd9c8: 0x8c641184  lw          $a0, 0x1184($v1)
    ctx->pc = 0x1fd9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4484)));
    // 0x1fd9cc: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1FD9CCu;
    SET_GPR_U32(ctx, 31, 0x1FD9D4u);
    ctx->pc = 0x1FD9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD9CCu;
            // 0x1fd9d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD9D4u; }
        if (ctx->pc != 0x1FD9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD9D4u; }
        if (ctx->pc != 0x1FD9D4u) { return; }
    }
    ctx->pc = 0x1FD9D4u;
    // 0x1fd9d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fd9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fd9d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd9dc: 0x8e260240  lw          $a2, 0x240($s1)
    ctx->pc = 0x1fd9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
    // 0x1fd9e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fd9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd9e4: 0x78670050  lq          $a3, 0x50($v1)
    ctx->pc = 0x1fd9e4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1fd9e8: 0xc0884b8  jal         func_2212E0
    ctx->pc = 0x1FD9E8u;
    SET_GPR_U32(ctx, 31, 0x1FD9F0u);
    ctx->pc = 0x1FD9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD9E8u;
            // 0x1fd9ec: 0x7a280210  lq          $t0, 0x210($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 528)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2212E0u;
    if (runtime->hasFunction(0x2212E0u)) {
        auto targetFn = runtime->lookupFunction(0x2212E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD9F0u; }
        if (ctx->pc != 0x1FD9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002212E0_0x2212e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD9F0u; }
        if (ctx->pc != 0x1FD9F0u) { return; }
    }
    ctx->pc = 0x1FD9F0u;
label_1fd9f0:
    // 0x1fd9f0: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x1fd9f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fd9f4: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x1fd9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x1fd9f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD9F8u;
    {
        const bool branch_taken_0x1fd9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD9F8u;
            // 0x1fd9fc: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9f8) {
            ctx->pc = 0x1FDA14u;
            goto label_1fda14;
        }
    }
    ctx->pc = 0x1FDA00u;
    // 0x1fda00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDA00u;
    {
        const bool branch_taken_0x1fda00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA00u;
            // 0x1fda04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda00) {
            ctx->pc = 0x1FDA14u;
            goto label_1fda14;
        }
    }
    ctx->pc = 0x1FDA08u;
    // 0x1fda08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fda08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fda0c: 0xc088490  jal         func_221240
    ctx->pc = 0x1FDA0Cu;
    SET_GPR_U32(ctx, 31, 0x1FDA14u);
    ctx->pc = 0x1FDA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA0Cu;
            // 0x1fda10: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221240u;
    if (runtime->hasFunction(0x221240u)) {
        auto targetFn = runtime->lookupFunction(0x221240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA14u; }
        if (ctx->pc != 0x1FDA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221240_0x221240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA14u; }
        if (ctx->pc != 0x1FDA14u) { return; }
    }
    ctx->pc = 0x1FDA14u;
label_1fda14:
    // 0x1fda14: 0x32620400  andi        $v0, $s3, 0x400
    ctx->pc = 0x1fda14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1024);
    // 0x1fda18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDA18u;
    {
        const bool branch_taken_0x1fda18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA18u;
            // 0x1fda1c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda18) {
            ctx->pc = 0x1FDA3Cu;
            goto label_1fda3c;
        }
    }
    ctx->pc = 0x1FDA20u;
    // 0x1fda20: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x1fda20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fda24: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1fda24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1fda28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDA28u;
    {
        const bool branch_taken_0x1fda28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA28u;
            // 0x1fda2c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda28) {
            ctx->pc = 0x1FDA3Cu;
            goto label_1fda3c;
        }
    }
    ctx->pc = 0x1FDA30u;
    // 0x1fda30: 0xc08857a  jal         func_2215E8
    ctx->pc = 0x1FDA30u;
    SET_GPR_U32(ctx, 31, 0x1FDA38u);
    ctx->pc = 0x1FDA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA30u;
            // 0x1fda34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2215E8u;
    if (runtime->hasFunction(0x2215E8u)) {
        auto targetFn = runtime->lookupFunction(0x2215E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA38u; }
        if (ctx->pc != 0x1FDA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002215E8_0x2215e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA38u; }
        if (ctx->pc != 0x1FDA38u) { return; }
    }
    ctx->pc = 0x1FDA38u;
    // 0x1fda38: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1fda38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1fda3c:
    // 0x1fda3c: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x1fda3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1fda40: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FDA40u;
    {
        const bool branch_taken_0x1fda40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA40u;
            // 0x1fda44: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda40) {
            ctx->pc = 0x1FDA80u;
            goto label_1fda80;
        }
    }
    ctx->pc = 0x1FDA48u;
    // 0x1fda48: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x1fda48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fda4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fda4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fda50: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FDA50u;
    {
        const bool branch_taken_0x1fda50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA50u;
            // 0x1fda54: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda50) {
            ctx->pc = 0x1FDA90u;
            goto label_1fda90;
        }
    }
    ctx->pc = 0x1FDA58u;
    // 0x1fda58: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1fda58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1fda5c: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1FDA5Cu;
    SET_GPR_U32(ctx, 31, 0x1FDA64u);
    ctx->pc = 0x1FDA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA5Cu;
            // 0x1fda60: 0x248478c8  addiu       $a0, $a0, 0x78C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA64u; }
        if (ctx->pc != 0x1FDA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA64u; }
        if (ctx->pc != 0x1FDA64u) { return; }
    }
    ctx->pc = 0x1FDA64u;
    // 0x1fda64: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FDA64u;
    {
        const bool branch_taken_0x1fda64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fda64) {
            ctx->pc = 0x1FDA68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA64u;
            // 0x1fda68: 0x32820008  andi        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDAC0u;
            goto label_1fdac0;
        }
    }
    ctx->pc = 0x1FDA6Cu;
    // 0x1fda6c: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x1fda6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1fda70: 0xc05c294  jal         func_170A50
    ctx->pc = 0x1FDA70u;
    SET_GPR_U32(ctx, 31, 0x1FDA78u);
    ctx->pc = 0x1FDA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA70u;
            // 0x1fda74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA78u; }
        if (ctx->pc != 0x1FDA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA78u; }
        if (ctx->pc != 0x1FDA78u) { return; }
    }
    ctx->pc = 0x1FDA78u;
    // 0x1fda78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FDA78u;
    {
        const bool branch_taken_0x1fda78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA78u;
            // 0x1fda7c: 0x32820008  andi        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda78) {
            ctx->pc = 0x1FDAC0u;
            goto label_1fdac0;
        }
    }
    ctx->pc = 0x1FDA80u;
label_1fda80:
    // 0x1fda80: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x1fda80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fda84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fda84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fda88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FDA88u;
    {
        const bool branch_taken_0x1fda88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA88u;
            // 0x1fda8c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda88) {
            ctx->pc = 0x1FDABCu;
            goto label_1fdabc;
        }
    }
    ctx->pc = 0x1FDA90u;
label_1fda90:
    // 0x1fda90: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x1fda90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1fda94: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FDA94u;
    {
        const bool branch_taken_0x1fda94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA94u;
            // 0x1fda98: 0x32820008  andi        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda94) {
            ctx->pc = 0x1FDAC0u;
            goto label_1fdac0;
        }
    }
    ctx->pc = 0x1FDA9Cu;
    // 0x1fda9c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1fda9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1fdaa0: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1FDAA0u;
    SET_GPR_U32(ctx, 31, 0x1FDAA8u);
    ctx->pc = 0x1FDAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDAA0u;
            // 0x1fdaa4: 0x248478c8  addiu       $a0, $a0, 0x78C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDAA8u; }
        if (ctx->pc != 0x1FDAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDAA8u; }
        if (ctx->pc != 0x1FDAA8u) { return; }
    }
    ctx->pc = 0x1FDAA8u;
    // 0x1fdaa8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDAA8u;
    {
        const bool branch_taken_0x1fdaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdaa8) {
            ctx->pc = 0x1FDAACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDAA8u;
            // 0x1fdaac: 0x32820008  andi        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDAC0u;
            goto label_1fdac0;
        }
    }
    ctx->pc = 0x1FDAB0u;
    // 0x1fdab0: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x1fdab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1fdab4: 0xc05c302  jal         func_170C08
    ctx->pc = 0x1FDAB4u;
    SET_GPR_U32(ctx, 31, 0x1FDABCu);
    ctx->pc = 0x1FDAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDAB4u;
            // 0x1fdab8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C08u;
    if (runtime->hasFunction(0x170C08u)) {
        auto targetFn = runtime->lookupFunction(0x170C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDABCu; }
        if (ctx->pc != 0x1FDABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C08_0x170c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDABCu; }
        if (ctx->pc != 0x1FDABCu) { return; }
    }
    ctx->pc = 0x1FDABCu;
label_1fdabc:
    // 0x1fdabc: 0x32820008  andi        $v0, $s4, 0x8
    ctx->pc = 0x1fdabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_1fdac0:
    // 0x1fdac0: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1FDAC0u;
    {
        const bool branch_taken_0x1fdac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDAC0u;
            // 0x1fdac4: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdac0) {
            ctx->pc = 0x1FDC00u;
            goto label_1fdc00;
        }
    }
    ctx->pc = 0x1FDAC8u;
    // 0x1fdac8: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x1fdac8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fdacc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1fdaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1fdad0: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1FDAD0u;
    {
        const bool branch_taken_0x1fdad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDAD0u;
            // 0x1fdad4: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdad0) {
            ctx->pc = 0x1FDC00u;
            goto label_1fdc00;
        }
    }
    ctx->pc = 0x1FDAD8u;
    // 0x1fdad8: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x1fdad8u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x1fdadc: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x1fdadcu;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1fdae0: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1fdae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fdae4: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x1fdae4u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1fdae8: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1fdae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fdaec: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x1fdaecu;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1fdaf0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1fdaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fdaf4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1fdaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fdaf8: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1fdaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fdafc: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1fdafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fdb00: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1fdb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fdb04: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1fdb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fdb08: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x1fdb08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
    // 0x1fdb0c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1fdb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1fdb10: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1fdb10u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1fdb14: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1fdb14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1fdb18: 0x3c05c100  lui         $a1, 0xC100
    ctx->pc = 0x1fdb18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49408 << 16));
    // 0x1fdb1c: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1fdb1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1fdb20: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1fdb20u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1fdb24: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1fdb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1fdb28: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1fdb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1fdb2c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1fdb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1fdb30: 0xc089990  jal         func_226640
    ctx->pc = 0x1FDB30u;
    SET_GPR_U32(ctx, 31, 0x1FDB38u);
    ctx->pc = 0x1FDB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDB30u;
            // 0x1fdb34: 0x7fa20150  sq          $v0, 0x150($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (runtime->hasFunction(0x226640u)) {
        auto targetFn = runtime->lookupFunction(0x226640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDB38u; }
        if (ctx->pc != 0x1FDB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226640_0x226680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDB38u; }
        if (ctx->pc != 0x1FDB38u) { return; }
    }
    ctx->pc = 0x1FDB38u;
    // 0x1fdb38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fdb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fdb3c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1fdb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1fdb40: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x1fdb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1fdb44: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1fdb44u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1fdb48: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x1fdb48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1fdb4c: 0xd8670010  lqc2        $vf7, 0x10($v1)
    ctx->pc = 0x1fdb4cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1fdb50: 0xd8680020  lqc2        $vf8, 0x20($v1)
    ctx->pc = 0x1fdb50u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fdb54: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1fdb54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdb58: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1fdb58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdb5c: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1fdb5cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fdb60: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1fdb60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fdb64: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1fdb64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1fdb68: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1fdb68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fdb6c: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1fdb6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fdb70: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1fdb70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fdb74: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1fdb74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1fdb78: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1fdb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fdb7c: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1fdb7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fdb80: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1fdb80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fdb84: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1fdb84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fdb88: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1fdb88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1fdb8c: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x1fdb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fdb90: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1fdb90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fdb94: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1fdb94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fdb98: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x1fdb98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fdb9c: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x1fdb9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1fdba0: 0xfba300f0  sqc2        $vf3, 0xF0($sp)
    ctx->pc = 0x1fdba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fdba4: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x1fdba4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fdba8: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x1fdba8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fdbac: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x1fdbacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fdbb0: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x1fdbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fdbb4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1fdbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fdbb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fdbb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdbbc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1fdbbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fdbc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fdbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdbc4: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x1fdbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fdbc8: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1fdbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fdbcc: 0x24a578e0  addiu       $a1, $a1, 0x78E0
    ctx->pc = 0x1fdbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30944));
    // 0x1fdbd0: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1fdbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fdbd4: 0xc089df8  jal         func_2277E0
    ctx->pc = 0x1FDBD4u;
    SET_GPR_U32(ctx, 31, 0x1FDBDCu);
    ctx->pc = 0x1FDBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDBD4u;
            // 0x1fdbd8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2277E0u;
    if (runtime->hasFunction(0x2277E0u)) {
        auto targetFn = runtime->lookupFunction(0x2277E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDBDCu; }
        if (ctx->pc != 0x1FDBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002277E0_0x2277e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDBDCu; }
        if (ctx->pc != 0x1FDBDCu) { return; }
    }
    ctx->pc = 0x1FDBDCu;
    // 0x1fdbdc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1fdbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1fdbe0: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1FDBE0u;
    SET_GPR_U32(ctx, 31, 0x1FDBE8u);
    ctx->pc = 0x1FDBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDBE0u;
            // 0x1fdbe4: 0x248478f0  addiu       $a0, $a0, 0x78F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDBE8u; }
        if (ctx->pc != 0x1FDBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDBE8u; }
        if (ctx->pc != 0x1FDBE8u) { return; }
    }
    ctx->pc = 0x1FDBE8u;
    // 0x1fdbe8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDBE8u;
    {
        const bool branch_taken_0x1fdbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdbe8) {
            ctx->pc = 0x1FDBECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDBE8u;
            // 0x1fdbec: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDC00u;
            goto label_1fdc00;
        }
    }
    ctx->pc = 0x1FDBF0u;
    // 0x1fdbf0: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x1fdbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1fdbf4: 0xc05c294  jal         func_170A50
    ctx->pc = 0x1FDBF4u;
    SET_GPR_U32(ctx, 31, 0x1FDBFCu);
    ctx->pc = 0x1FDBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDBF4u;
            // 0x1fdbf8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDBFCu; }
        if (ctx->pc != 0x1FDBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDBFCu; }
        if (ctx->pc != 0x1FDBFCu) { return; }
    }
    ctx->pc = 0x1FDBFCu;
    // 0x1fdbfc: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x1fdbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_1fdc00:
    // 0x1fdc00: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FDC00u;
    {
        const bool branch_taken_0x1fdc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc00) {
            ctx->pc = 0x1FDC04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC00u;
            // 0x1fdc04: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDC58u;
            goto label_1fdc58;
        }
    }
    ctx->pc = 0x1FDC08u;
    // 0x1fdc08: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x1fdc08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fdc0c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1fdc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1fdc10: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FDC10u;
    {
        const bool branch_taken_0x1fdc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc10) {
            ctx->pc = 0x1FDC14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC10u;
            // 0x1fdc14: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDC58u;
            goto label_1fdc58;
        }
    }
    ctx->pc = 0x1FDC18u;
    // 0x1fdc18: 0x30620380  andi        $v0, $v1, 0x380
    ctx->pc = 0x1fdc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)896);
    // 0x1fdc1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDC1Cu;
    {
        const bool branch_taken_0x1fdc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC1Cu;
            // 0x1fdc20: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc1c) {
            ctx->pc = 0x1FDC38u;
            goto label_1fdc38;
        }
    }
    ctx->pc = 0x1FDC24u;
    // 0x1fdc24: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1fdc24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1fdc28: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1FDC28u;
    SET_GPR_U32(ctx, 31, 0x1FDC30u);
    ctx->pc = 0x1FDC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC28u;
            // 0x1fdc2c: 0x24847908  addiu       $a0, $a0, 0x7908 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDC30u; }
        if (ctx->pc != 0x1FDC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDC30u; }
        if (ctx->pc != 0x1FDC30u) { return; }
    }
    ctx->pc = 0x1FDC30u;
    // 0x1fdc30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDC30u;
    {
        const bool branch_taken_0x1fdc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc30) {
            ctx->pc = 0x1FDC40u;
            goto label_1fdc40;
        }
    }
    ctx->pc = 0x1FDC38u;
label_1fdc38:
    // 0x1fdc38: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1FDC38u;
    SET_GPR_U32(ctx, 31, 0x1FDC40u);
    ctx->pc = 0x1FDC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC38u;
            // 0x1fdc3c: 0x248478f0  addiu       $a0, $a0, 0x78F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDC40u; }
        if (ctx->pc != 0x1FDC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDC40u; }
        if (ctx->pc != 0x1FDC40u) { return; }
    }
    ctx->pc = 0x1FDC40u;
label_1fdc40:
    // 0x1fdc40: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDC40u;
    {
        const bool branch_taken_0x1fdc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc40) {
            ctx->pc = 0x1FDC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC40u;
            // 0x1fdc44: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDC58u;
            goto label_1fdc58;
        }
    }
    ctx->pc = 0x1FDC48u;
    // 0x1fdc48: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x1fdc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1fdc4c: 0xc05c294  jal         func_170A50
    ctx->pc = 0x1FDC4Cu;
    SET_GPR_U32(ctx, 31, 0x1FDC54u);
    ctx->pc = 0x1FDC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC4Cu;
            // 0x1fdc50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDC54u; }
        if (ctx->pc != 0x1FDC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDC54u; }
        if (ctx->pc != 0x1FDC54u) { return; }
    }
    ctx->pc = 0x1FDC54u;
    // 0x1fdc54: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x1fdc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1fdc58:
    // 0x1fdc58: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1fdc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1fdc5c: 0x8c42e2a8  lw          $v0, -0x1D58($v0)
    ctx->pc = 0x1fdc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959784)));
    // 0x1fdc60: 0x808300ce  lb          $v1, 0xCE($a0)
    ctx->pc = 0x1fdc60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 206)));
    // 0x1fdc64: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1fdc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1fdc68: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1FDC68u;
    {
        const bool branch_taken_0x1fdc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC68u;
            // 0x1fdc6c: 0x3182a  slt         $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc68) {
            ctx->pc = 0x1FDCF0u;
            goto label_1fdcf0;
        }
    }
    ctx->pc = 0x1FDC70u;
    // 0x1fdc70: 0x54600024  bnel        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1FDC70u;
    {
        const bool branch_taken_0x1fdc70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc70) {
            ctx->pc = 0x1FDC74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC70u;
            // 0x1fdc74: 0xde420000  ld          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDD04u;
            goto label_1fdd04;
        }
    }
    ctx->pc = 0x1FDC78u;
    // 0x1fdc78: 0xc07b60a  jal         func_1ED828
    ctx->pc = 0x1FDC78u;
    SET_GPR_U32(ctx, 31, 0x1FDC80u);
    ctx->pc = 0x1FDC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC78u;
            // 0x1fdc7c: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED828u;
    if (runtime->hasFunction(0x1ED828u)) {
        auto targetFn = runtime->lookupFunction(0x1ED828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDC80u; }
        if (ctx->pc != 0x1FDC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED828_0x1ed828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDC80u; }
        if (ctx->pc != 0x1FDC80u) { return; }
    }
    ctx->pc = 0x1FDC80u;
    // 0x1fdc80: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1fdc80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fdc84: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x1fdc84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1fdc88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fdc88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fdc8c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1fdc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1fdc90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fdc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdc94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fdc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fdc98: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fdc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fdc9c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1fdc9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1fdca0: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1fdca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1fdca4: 0x40f809  jalr        $v0
    ctx->pc = 0x1FDCA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FDCACu);
        ctx->pc = 0x1FDCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDCA4u;
            // 0x1fdca8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FDCACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD8D8u: goto label_1fd8d8;
            case 0x1FD950u: goto label_1fd950;
            case 0x1FD9F0u: goto label_1fd9f0;
            case 0x1FDA14u: goto label_1fda14;
            case 0x1FDA3Cu: goto label_1fda3c;
            case 0x1FDA80u: goto label_1fda80;
            case 0x1FDA90u: goto label_1fda90;
            case 0x1FDABCu: goto label_1fdabc;
            case 0x1FDAC0u: goto label_1fdac0;
            case 0x1FDC00u: goto label_1fdc00;
            case 0x1FDC38u: goto label_1fdc38;
            case 0x1FDC40u: goto label_1fdc40;
            case 0x1FDC58u: goto label_1fdc58;
            case 0x1FDCF0u: goto label_1fdcf0;
            case 0x1FDD04u: goto label_1fdd04;
            case 0x1FDD38u: goto label_1fdd38;
            case 0x1FDD3Cu: goto label_1fdd3c;
            case 0x1FDD6Cu: goto label_1fdd6c;
            case 0x1FDD70u: goto label_1fdd70;
            case 0x1FDE10u: goto label_1fde10;
            case 0x1FDE18u: goto label_1fde18;
            case 0x1FDE3Cu: goto label_1fde3c;
            case 0x1FDE5Cu: goto label_1fde5c;
            case 0x1FDE60u: goto label_1fde60;
            case 0x1FDEE8u: goto label_1fdee8;
            case 0x1FDF38u: goto label_1fdf38;
            case 0x1FDF80u: goto label_1fdf80;
            case 0x1FDFA8u: goto label_1fdfa8;
            case 0x1FDFB0u: goto label_1fdfb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCACu; }
            if (ctx->pc != 0x1FDCACu) { return; }
        }
        }
    }
    ctx->pc = 0x1FDCACu;
    // 0x1fdcac: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x1fdcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1fdcb0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1fdcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1fdcb4: 0xc05c2d8  jal         func_170B60
    ctx->pc = 0x1FDCB4u;
    SET_GPR_U32(ctx, 31, 0x1FDCBCu);
    ctx->pc = 0x1FDCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDCB4u;
            // 0x1fdcb8: 0x24a57920  addiu       $a1, $a1, 0x7920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B60u;
    if (runtime->hasFunction(0x170B60u)) {
        auto targetFn = runtime->lookupFunction(0x170B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCBCu; }
        if (ctx->pc != 0x1FDCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B60_0x170b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCBCu; }
        if (ctx->pc != 0x1FDCBCu) { return; }
    }
    ctx->pc = 0x1FDCBCu;
    // 0x1fdcbc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1fdcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1fdcc0: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x1fdcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1fdcc4: 0xc05c2d8  jal         func_170B60
    ctx->pc = 0x1FDCC4u;
    SET_GPR_U32(ctx, 31, 0x1FDCCCu);
    ctx->pc = 0x1FDCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDCC4u;
            // 0x1fdcc8: 0x24a57938  addiu       $a1, $a1, 0x7938 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B60u;
    if (runtime->hasFunction(0x170B60u)) {
        auto targetFn = runtime->lookupFunction(0x170B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCCCu; }
        if (ctx->pc != 0x1FDCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B60_0x170b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCCCu; }
        if (ctx->pc != 0x1FDCCCu) { return; }
    }
    ctx->pc = 0x1FDCCCu;
    // 0x1fdccc: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1fdcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1fdcd0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fdcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fdcd4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1fdcd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1fdcd8: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1fdcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1fdcdc: 0x40f809  jalr        $v0
    ctx->pc = 0x1FDCDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FDCE4u);
        ctx->pc = 0x1FDCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDCDCu;
            // 0x1fdce0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FDCE4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD8D8u: goto label_1fd8d8;
            case 0x1FD950u: goto label_1fd950;
            case 0x1FD9F0u: goto label_1fd9f0;
            case 0x1FDA14u: goto label_1fda14;
            case 0x1FDA3Cu: goto label_1fda3c;
            case 0x1FDA80u: goto label_1fda80;
            case 0x1FDA90u: goto label_1fda90;
            case 0x1FDABCu: goto label_1fdabc;
            case 0x1FDAC0u: goto label_1fdac0;
            case 0x1FDC00u: goto label_1fdc00;
            case 0x1FDC38u: goto label_1fdc38;
            case 0x1FDC40u: goto label_1fdc40;
            case 0x1FDC58u: goto label_1fdc58;
            case 0x1FDCF0u: goto label_1fdcf0;
            case 0x1FDD04u: goto label_1fdd04;
            case 0x1FDD38u: goto label_1fdd38;
            case 0x1FDD3Cu: goto label_1fdd3c;
            case 0x1FDD6Cu: goto label_1fdd6c;
            case 0x1FDD70u: goto label_1fdd70;
            case 0x1FDE10u: goto label_1fde10;
            case 0x1FDE18u: goto label_1fde18;
            case 0x1FDE3Cu: goto label_1fde3c;
            case 0x1FDE5Cu: goto label_1fde5c;
            case 0x1FDE60u: goto label_1fde60;
            case 0x1FDEE8u: goto label_1fdee8;
            case 0x1FDF38u: goto label_1fdf38;
            case 0x1FDF80u: goto label_1fdf80;
            case 0x1FDFA8u: goto label_1fdfa8;
            case 0x1FDFB0u: goto label_1fdfb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCE4u; }
            if (ctx->pc != 0x1FDCE4u) { return; }
        }
        }
    }
    ctx->pc = 0x1FDCE4u;
    // 0x1fdce4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FDCE4u;
    {
        const bool branch_taken_0x1fdce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDCE4u;
            // 0x1fdce8: 0xde420000  ld          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdce4) {
            ctx->pc = 0x1FDD04u;
            goto label_1fdd04;
        }
    }
    ctx->pc = 0x1FDCECu;
    // 0x1fdcec: 0x0  nop
    ctx->pc = 0x1fdcecu;
    // NOP
label_1fdcf0:
    // 0x1fdcf0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDCF0u;
    {
        const bool branch_taken_0x1fdcf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdcf0) {
            ctx->pc = 0x1FDCF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDCF0u;
            // 0x1fdcf4: 0xde420000  ld          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDD04u;
            goto label_1fdd04;
        }
    }
    ctx->pc = 0x1FDCF8u;
    // 0x1fdcf8: 0xc05c2e6  jal         func_170B98
    ctx->pc = 0x1FDCF8u;
    SET_GPR_U32(ctx, 31, 0x1FDD00u);
    ctx->pc = 0x170B98u;
    if (runtime->hasFunction(0x170B98u)) {
        auto targetFn = runtime->lookupFunction(0x170B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD00u; }
        if (ctx->pc != 0x1FDD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B98_0x170b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD00u; }
        if (ctx->pc != 0x1FDD00u) { return; }
    }
    ctx->pc = 0x1FDD00u;
    // 0x1fdd00: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x1fdd00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_1fdd04:
    // 0x1fdd04: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1fdd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1fdd08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FDD08u;
    {
        const bool branch_taken_0x1fdd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD08u;
            // 0x1fdd0c: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd08) {
            ctx->pc = 0x1FDD38u;
            goto label_1fdd38;
        }
    }
    ctx->pc = 0x1FDD10u;
    // 0x1fdd10: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FDD10u;
    {
        const bool branch_taken_0x1fdd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD10u;
            // 0x1fdd14: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd10) {
            ctx->pc = 0x1FDD3Cu;
            goto label_1fdd3c;
        }
    }
    ctx->pc = 0x1FDD18u;
    // 0x1fdd18: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1fdd18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1fdd1c: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1FDD1Cu;
    SET_GPR_U32(ctx, 31, 0x1FDD24u);
    ctx->pc = 0x1FDD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD1Cu;
            // 0x1fdd20: 0x24847950  addiu       $a0, $a0, 0x7950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD24u; }
        if (ctx->pc != 0x1FDD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD24u; }
        if (ctx->pc != 0x1FDD24u) { return; }
    }
    ctx->pc = 0x1FDD24u;
    // 0x1fdd24: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDD24u;
    {
        const bool branch_taken_0x1fdd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd24) {
            ctx->pc = 0x1FDD28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD24u;
            // 0x1fdd28: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDD3Cu;
            goto label_1fdd3c;
        }
    }
    ctx->pc = 0x1FDD2Cu;
    // 0x1fdd2c: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x1fdd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1fdd30: 0xc05c294  jal         func_170A50
    ctx->pc = 0x1FDD30u;
    SET_GPR_U32(ctx, 31, 0x1FDD38u);
    ctx->pc = 0x1FDD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD30u;
            // 0x1fdd34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD38u; }
        if (ctx->pc != 0x1FDD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD38u; }
        if (ctx->pc != 0x1FDD38u) { return; }
    }
    ctx->pc = 0x1FDD38u;
label_1fdd38:
    // 0x1fdd38: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1fdd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1fdd3c:
    // 0x1fdd3c: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x1fdd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1fdd40: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FDD40u;
    {
        const bool branch_taken_0x1fdd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD40u;
            // 0x1fdd44: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd40) {
            ctx->pc = 0x1FDD6Cu;
            goto label_1fdd6c;
        }
    }
    ctx->pc = 0x1FDD48u;
    // 0x1fdd48: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x1fdd48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fdd4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fdd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fdd50: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FDD50u;
    {
        const bool branch_taken_0x1fdd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd50) {
            ctx->pc = 0x1FDD54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD50u;
            // 0x1fdd54: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDD70u;
            goto label_1fdd70;
        }
    }
    ctx->pc = 0x1FDD58u;
    // 0x1fdd58: 0x3262004c  andi        $v0, $s3, 0x4C
    ctx->pc = 0x1fdd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)76);
    // 0x1fdd5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDD5Cu;
    {
        const bool branch_taken_0x1fdd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD5Cu;
            // 0x1fdd60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd5c) {
            ctx->pc = 0x1FDD6Cu;
            goto label_1fdd6c;
        }
    }
    ctx->pc = 0x1FDD64u;
    // 0x1fdd64: 0xc07f636  jal         func_1FD8D8
    ctx->pc = 0x1FDD64u;
    SET_GPR_U32(ctx, 31, 0x1FDD6Cu);
    ctx->pc = 0x1FDD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD64u;
            // 0x1fdd68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8D8u;
    runtime->cooperativeGuestYield();
    goto label_1fd8d8;
    ctx->pc = 0x1FDD6Cu;
label_1fdd6c:
    // 0x1fdd6c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x1fdd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1fdd70:
    // 0x1fdd70: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1FDD70u;
    {
        const bool branch_taken_0x1fdd70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD70u;
            // 0x1fdd74: 0x32620380  andi        $v0, $s3, 0x380 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd70) {
            ctx->pc = 0x1FDE18u;
            goto label_1fde18;
        }
    }
    ctx->pc = 0x1FDD78u;
    // 0x1fdd78: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FDD78u;
    {
        const bool branch_taken_0x1fdd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd78) {
            ctx->pc = 0x1FDE10u;
            goto label_1fde10;
        }
    }
    ctx->pc = 0x1FDD80u;
    // 0x1fdd80: 0xda2100e0  lqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x1fdd80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1fdd84: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1fdd84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fdd88: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1fdd88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fdd8c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1fdd8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fdd90: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fdd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fdd94: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fdd94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fdd98: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1fdd98u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fdd9c: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1fdd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1fdda0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1fdda0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1fdda4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fdda4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdda8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1fdda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1fddac: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1fddacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1fddb0: 0x46000004  c1          0x4
    ctx->pc = 0x1fddb0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fddb4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1fddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1fddb8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1fddb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1fddbc: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x1fddbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fddc0: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x1fddc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fddc4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1fddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1fddc8: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x1fddc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1fddcc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1fddccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1fddd0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1fddd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1fddd4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1fddd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1fddd8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1fddd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1fdddc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1fdddcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fdde0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FDDE0u;
    {
        const bool branch_taken_0x1fdde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDDE0u;
            // 0x1fdde4: 0xe4810020  swc1        $f1, 0x20($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdde0) {
            ctx->pc = 0x1FDE10u;
            goto label_1fde10;
        }
    }
    ctx->pc = 0x1FDDE8u;
    // 0x1fdde8: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x1fdde8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fddec: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1fddecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1fddf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fddf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fddf4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDDF4u;
    {
        const bool branch_taken_0x1fddf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fddf4) {
            ctx->pc = 0x1FDE10u;
            goto label_1fde10;
        }
    }
    ctx->pc = 0x1FDDFCu;
    // 0x1fddfc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1fddfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1fde00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fde00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fde04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fde04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fde08: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1fde08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1fde0c: 0x0  nop
    ctx->pc = 0x1fde0cu;
    // NOP
label_1fde10:
    // 0x1fde10: 0xc07f9d0  jal         func_1FE740
    ctx->pc = 0x1FDE10u;
    SET_GPR_U32(ctx, 31, 0x1FDE18u);
    ctx->pc = 0x1FDE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE10u;
            // 0x1fde14: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE740u;
    if (runtime->hasFunction(0x1FE740u)) {
        auto targetFn = runtime->lookupFunction(0x1FE740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDE18u; }
        if (ctx->pc != 0x1FDE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE740_0x1fe740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDE18u; }
        if (ctx->pc != 0x1FDE18u) { return; }
    }
    ctx->pc = 0x1FDE18u;
label_1fde18:
    // 0x1fde18: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1fde18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1fde1c: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x1FDE1Cu;
    {
        const bool branch_taken_0x1fde1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE1Cu;
            // 0x1fde20: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde1c) {
            ctx->pc = 0x1FDFB0u;
            goto label_1fdfb0;
        }
    }
    ctx->pc = 0x1FDE24u;
    // 0x1fde24: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x1fde24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1fde28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDE28u;
    {
        const bool branch_taken_0x1fde28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE28u;
            // 0x1fde2c: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde28) {
            ctx->pc = 0x1FDE3Cu;
            goto label_1fde3c;
        }
    }
    ctx->pc = 0x1FDE30u;
    // 0x1fde30: 0x32620380  andi        $v0, $s3, 0x380
    ctx->pc = 0x1fde30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)896);
    // 0x1fde34: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1FDE34u;
    {
        const bool branch_taken_0x1fde34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fde34) {
            ctx->pc = 0x1FDFA8u;
            goto label_1fdfa8;
        }
    }
    ctx->pc = 0x1FDE3Cu;
label_1fde3c:
    // 0x1fde3c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1fde3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fde40: 0xc601c658  lwc1        $f1, -0x39A8($s0)
    ctx->pc = 0x1fde40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fde44: 0x32620300  andi        $v0, $s3, 0x300
    ctx->pc = 0x1fde44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)768);
    // 0x1fde48: 0xc6350230  lwc1        $f21, 0x230($s1)
    ctx->pc = 0x1fde48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1fde4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDE4Cu;
    {
        const bool branch_taken_0x1fde4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE4Cu;
            // 0x1fde50: 0x460105c0  add.s       $f23, $f0, $f1 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde4c) {
            ctx->pc = 0x1FDE5Cu;
            goto label_1fde5c;
        }
    }
    ctx->pc = 0x1FDE54u;
    // 0x1fde54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FDE54u;
    {
        const bool branch_taken_0x1fde54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE54u;
            // 0x1fde58: 0xc4750014  lwc1        $f21, 0x14($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde54) {
            ctx->pc = 0x1FDE60u;
            goto label_1fde60;
        }
    }
    ctx->pc = 0x1FDE5Cu;
label_1fde5c:
    // 0x1fde5c: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1fde5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1fde60:
    // 0x1fde60: 0xe4770018  swc1        $f23, 0x18($v1)
    ctx->pc = 0x1fde60u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1fde64: 0xe4750014  swc1        $f21, 0x14($v1)
    ctx->pc = 0x1fde64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1fde68: 0xda2200e0  lqc2        $vf2, 0xE0($s1)
    ctx->pc = 0x1fde68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1fde6c: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1fde6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fde70: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1fde70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fde74: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1fde74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fde78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1fde78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fde7c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1fde7cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fde80: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1fde80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1fde84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fde84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fde88: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1fde88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1fde8c: 0x46000584  c1          0x584
    ctx->pc = 0x1fde8cu;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fde90: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1fde90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1fde94: 0x40f809  jalr        $v0
    ctx->pc = 0x1FDE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FDE9Cu);
        ctx->pc = 0x1FDE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE94u;
            // 0x1fde98: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FDE9Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD8D8u: goto label_1fd8d8;
            case 0x1FD950u: goto label_1fd950;
            case 0x1FD9F0u: goto label_1fd9f0;
            case 0x1FDA14u: goto label_1fda14;
            case 0x1FDA3Cu: goto label_1fda3c;
            case 0x1FDA80u: goto label_1fda80;
            case 0x1FDA90u: goto label_1fda90;
            case 0x1FDABCu: goto label_1fdabc;
            case 0x1FDAC0u: goto label_1fdac0;
            case 0x1FDC00u: goto label_1fdc00;
            case 0x1FDC38u: goto label_1fdc38;
            case 0x1FDC40u: goto label_1fdc40;
            case 0x1FDC58u: goto label_1fdc58;
            case 0x1FDCF0u: goto label_1fdcf0;
            case 0x1FDD04u: goto label_1fdd04;
            case 0x1FDD38u: goto label_1fdd38;
            case 0x1FDD3Cu: goto label_1fdd3c;
            case 0x1FDD6Cu: goto label_1fdd6c;
            case 0x1FDD70u: goto label_1fdd70;
            case 0x1FDE10u: goto label_1fde10;
            case 0x1FDE18u: goto label_1fde18;
            case 0x1FDE3Cu: goto label_1fde3c;
            case 0x1FDE5Cu: goto label_1fde5c;
            case 0x1FDE60u: goto label_1fde60;
            case 0x1FDEE8u: goto label_1fdee8;
            case 0x1FDF38u: goto label_1fdf38;
            case 0x1FDF80u: goto label_1fdf80;
            case 0x1FDFA8u: goto label_1fdfa8;
            case 0x1FDFB0u: goto label_1fdfb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FDE9Cu; }
            if (ctx->pc != 0x1FDE9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FDE9Cu;
    // 0x1fde9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fde9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdea0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FDEA0u;
    {
        const bool branch_taken_0x1fdea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdea0) {
            ctx->pc = 0x1FDEE8u;
            goto label_1fdee8;
        }
    }
    ctx->pc = 0x1FDEA8u;
    // 0x1fdea8: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x1fdea8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1fdeac: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1fdeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1fdeb0: 0x78620060  lq          $v0, 0x60($v1)
    ctx->pc = 0x1fdeb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1fdeb4: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1fdeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1fdeb8: 0x78620070  lq          $v0, 0x70($v1)
    ctx->pc = 0x1fdeb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1fdebc: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1fdebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x1fdec0: 0xd8610080  lqc2        $vf1, 0x80($v1)
    ctx->pc = 0x1fdec0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x1fdec4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1fdec4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fdec8: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x1fdec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fdecc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1fdeccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fded0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1fded0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fded4: 0xc601c658  lwc1        $f1, -0x39A8($s0)
    ctx->pc = 0x1fded4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fded8: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1fded8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fdedc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1fdedcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdee0: 0x46000004  c1          0x4
    ctx->pc = 0x1fdee0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fdee4: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1fdee4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
label_1fdee8:
    // 0x1fdee8: 0x3c013b4c  lui         $at, 0x3B4C
    ctx->pc = 0x1fdee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15180 << 16));
    // 0x1fdeec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1fdeecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1fdef0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fdef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fdef4: 0x4614b028  max.s       $f0, $f22, $f20
    ctx->pc = 0x1fdef4u;
    ctx->f[0] = std::max(ctx->f[22], ctx->f[20]);
    // 0x1fdef8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1fdef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1fdefc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1fdefcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1fdf00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fdf00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fdf04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fdf04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fdf08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fdf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fdf0c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1fdf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1fdf10: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x1fdf10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1fdf14: 0x46020500  add.s       $f20, $f0, $f2
    ctx->pc = 0x1fdf14u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1fdf18: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1fdf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1fdf1c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1fdf1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1fdf20: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1fdf20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1fdf24: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDF24u;
    {
        const bool branch_taken_0x1fdf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FDF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF24u;
            // 0x1fdf28: 0x8c71000c  lw          $s1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf24) {
            ctx->pc = 0x1FDF38u;
            goto label_1fdf38;
        }
    }
    ctx->pc = 0x1FDF2Cu;
    // 0x1fdf2c: 0xc04da64  jal         func_136990
    ctx->pc = 0x1FDF2Cu;
    SET_GPR_U32(ctx, 31, 0x1FDF34u);
    ctx->pc = 0x1FDF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF2Cu;
            // 0x1fdf30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF34u; }
        if (ctx->pc != 0x1FDF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF34u; }
        if (ctx->pc != 0x1FDF34u) { return; }
    }
    ctx->pc = 0x1FDF34u;
    // 0x1fdf34: 0x0  nop
    ctx->pc = 0x1fdf34u;
    // NOP
label_1fdf38:
    // 0x1fdf38: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1fdf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1fdf3c: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1fdf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1fdf40: 0x4405a800  mfc1        $a1, $f21
    ctx->pc = 0x1fdf40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1fdf44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdf48: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1fdf48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1fdf4c: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1fdf4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fdf50: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x1fdf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fdf54: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1fdf54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fdf58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fdf58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fdf5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fdf5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdf60: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1fdf60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fdf64: 0x46170041  sub.s       $f1, $f0, $f23
    ctx->pc = 0x1fdf64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x1fdf68: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1fdf68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fdf6c: 0x0  nop
    ctx->pc = 0x1fdf6cu;
    // NOP
    // 0x1fdf70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDF70u;
    {
        const bool branch_taken_0x1fdf70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FDF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF70u;
            // 0x1fdf74: 0xfba10160  sqc2        $vf1, 0x160($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf70) {
            ctx->pc = 0x1FDF80u;
            goto label_1fdf80;
        }
    }
    ctx->pc = 0x1FDF78u;
    // 0x1fdf78: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x1fdf78u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x1fdf7c: 0x0  nop
    ctx->pc = 0x1fdf7cu;
    // NOP
label_1fdf80:
    // 0x1fdf80: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1fdf80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1fdf84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1fdf84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fdf88: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1fdf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1fdf8c: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x1fdf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdf90: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1fdf90u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fdf94: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x1fdf94u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1fdf98: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1fdf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1fdf9c: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x1fdf9cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x1fdfa0: 0xc07fc56  jal         func_1FF158
    ctx->pc = 0x1FDFA0u;
    SET_GPR_U32(ctx, 31, 0x1FDFA8u);
    ctx->pc = 0x1FDFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDFA0u;
            // 0x1fdfa4: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF158u;
    if (runtime->hasFunction(0x1FF158u)) {
        auto targetFn = runtime->lookupFunction(0x1FF158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDFA8u; }
        if (ctx->pc != 0x1FDFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF158_0x1ff158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDFA8u; }
        if (ctx->pc != 0x1FDFA8u) { return; }
    }
    ctx->pc = 0x1FDFA8u;
label_1fdfa8:
    // 0x1fdfa8: 0xc07fc24  jal         func_1FF090
    ctx->pc = 0x1FDFA8u;
    SET_GPR_U32(ctx, 31, 0x1FDFB0u);
    ctx->pc = 0x1FDFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDFA8u;
            // 0x1fdfac: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF090u;
    if (runtime->hasFunction(0x1FF090u)) {
        auto targetFn = runtime->lookupFunction(0x1FF090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDFB0u; }
        if (ctx->pc != 0x1FDFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF090_0x1ff090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDFB0u; }
        if (ctx->pc != 0x1FDFB0u) { return; }
    }
    ctx->pc = 0x1FDFB0u;
label_1fdfb0:
    // 0x1fdfb0: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1fdfb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1fdfb4: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1fdfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1fdfb8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1fdfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1fdfbc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1fdfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1fdfc0: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x1fdfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x1fdfc4: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x1fdfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x1fdfc8: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x1fdfc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1fdfcc: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x1fdfccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1fdfd0: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x1fdfd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1fdfd4: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x1fdfd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1fdfd8: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x1fdfd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1fdfdc: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x1fdfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1fdfe0: 0xc7b701e8  lwc1        $f23, 0x1E8($sp)
    ctx->pc = 0x1fdfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1fdfe4: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x1fdfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1fdfe8: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x1fdfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1fdfec: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x1fdfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fdff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDFF0u;
            // 0x1fdff4: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD8D8u: goto label_1fd8d8;
            case 0x1FD950u: goto label_1fd950;
            case 0x1FD9F0u: goto label_1fd9f0;
            case 0x1FDA14u: goto label_1fda14;
            case 0x1FDA3Cu: goto label_1fda3c;
            case 0x1FDA80u: goto label_1fda80;
            case 0x1FDA90u: goto label_1fda90;
            case 0x1FDABCu: goto label_1fdabc;
            case 0x1FDAC0u: goto label_1fdac0;
            case 0x1FDC00u: goto label_1fdc00;
            case 0x1FDC38u: goto label_1fdc38;
            case 0x1FDC40u: goto label_1fdc40;
            case 0x1FDC58u: goto label_1fdc58;
            case 0x1FDCF0u: goto label_1fdcf0;
            case 0x1FDD04u: goto label_1fdd04;
            case 0x1FDD38u: goto label_1fdd38;
            case 0x1FDD3Cu: goto label_1fdd3c;
            case 0x1FDD6Cu: goto label_1fdd6c;
            case 0x1FDD70u: goto label_1fdd70;
            case 0x1FDE10u: goto label_1fde10;
            case 0x1FDE18u: goto label_1fde18;
            case 0x1FDE3Cu: goto label_1fde3c;
            case 0x1FDE5Cu: goto label_1fde5c;
            case 0x1FDE60u: goto label_1fde60;
            case 0x1FDEE8u: goto label_1fdee8;
            case 0x1FDF38u: goto label_1fdf38;
            case 0x1FDF80u: goto label_1fdf80;
            case 0x1FDFA8u: goto label_1fdfa8;
            case 0x1FDFB0u: goto label_1fdfb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FDFF8u;
    // 0x1fdff8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fdff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fdffc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fdffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fe000: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe00c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fe00cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe010: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1fe010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1fe014: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1FE014u;
    SET_GPR_U32(ctx, 31, 0x1FE01Cu);
    ctx->pc = 0x1FE018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE014u;
            // 0x1fe018: 0x8e240320  lw          $a0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE01Cu; }
        if (ctx->pc != 0x1FE01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE01Cu; }
        if (ctx->pc != 0x1FE01Cu) { return; }
    }
    ctx->pc = 0x1FE01Cu;
    // 0x1fe01c: 0xc440024c  lwc1        $f0, 0x24C($v0)
    ctx->pc = 0x1fe01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe020: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x1fe020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1fe024: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1FE024u;
    SET_GPR_U32(ctx, 31, 0x1FE02Cu);
    ctx->pc = 0x1FE028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE024u;
            // 0x1fe028: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE02Cu; }
        if (ctx->pc != 0x1FE02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE02Cu; }
        if (ctx->pc != 0x1FE02Cu) { return; }
    }
    ctx->pc = 0x1FE02Cu;
    // 0x1fe02c: 0xc4400250  lwc1        $f0, 0x250($v0)
    ctx->pc = 0x1fe02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe034: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1fe034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1fe038: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fe038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe03c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe040: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE040u;
            // 0x1fe044: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD8D8u: goto label_1fd8d8;
            case 0x1FD950u: goto label_1fd950;
            case 0x1FD9F0u: goto label_1fd9f0;
            case 0x1FDA14u: goto label_1fda14;
            case 0x1FDA3Cu: goto label_1fda3c;
            case 0x1FDA80u: goto label_1fda80;
            case 0x1FDA90u: goto label_1fda90;
            case 0x1FDABCu: goto label_1fdabc;
            case 0x1FDAC0u: goto label_1fdac0;
            case 0x1FDC00u: goto label_1fdc00;
            case 0x1FDC38u: goto label_1fdc38;
            case 0x1FDC40u: goto label_1fdc40;
            case 0x1FDC58u: goto label_1fdc58;
            case 0x1FDCF0u: goto label_1fdcf0;
            case 0x1FDD04u: goto label_1fdd04;
            case 0x1FDD38u: goto label_1fdd38;
            case 0x1FDD3Cu: goto label_1fdd3c;
            case 0x1FDD6Cu: goto label_1fdd6c;
            case 0x1FDD70u: goto label_1fdd70;
            case 0x1FDE10u: goto label_1fde10;
            case 0x1FDE18u: goto label_1fde18;
            case 0x1FDE3Cu: goto label_1fde3c;
            case 0x1FDE5Cu: goto label_1fde5c;
            case 0x1FDE60u: goto label_1fde60;
            case 0x1FDEE8u: goto label_1fdee8;
            case 0x1FDF38u: goto label_1fdf38;
            case 0x1FDF80u: goto label_1fdf80;
            case 0x1FDFA8u: goto label_1fdfa8;
            case 0x1FDFB0u: goto label_1fdfb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FE048u;
    // 0x1fe048: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fe04c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1fe04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe050: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fe050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1fe054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe058: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe05c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fe05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fe060: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fe060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1fe064: 0x9c520174  lwu         $s2, 0x174($v0)
    ctx->pc = 0x1fe064u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x1fe068: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x1fe068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fe06c: 0xc60d002c  lwc1        $f13, 0x2C($s0)
    ctx->pc = 0x1fe06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fe070: 0xc07f4d0  jal         func_1FD340
    ctx->pc = 0x1FE070u;
    SET_GPR_U32(ctx, 31, 0x1FE078u);
    ctx->pc = 0x1FE074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE070u;
            // 0x1fe074: 0x9c5102d8  lwu         $s1, 0x2D8($v0) (Delay Slot)
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD340u;
    if (runtime->hasFunction(0x1FD340u)) {
        auto targetFn = runtime->lookupFunction(0x1FD340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE078u; }
        if (ctx->pc != 0x1FE078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD340_0x1fd340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE078u; }
        if (ctx->pc != 0x1FE078u) { return; }
    }
    ctx->pc = 0x1FE078u;
    // 0x1fe078: 0xfe110008  sd          $s1, 0x8($s0)
    ctx->pc = 0x1fe078u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 17));
    // 0x1fe07c: 0xfe120000  sd          $s2, 0x0($s0)
    ctx->pc = 0x1fe07cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 18));
    // 0x1fe080: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fe080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe084: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fe084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe088: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fe088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe090: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE090u;
            // 0x1fe094: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD8D8u: goto label_1fd8d8;
            case 0x1FD950u: goto label_1fd950;
            case 0x1FD9F0u: goto label_1fd9f0;
            case 0x1FDA14u: goto label_1fda14;
            case 0x1FDA3Cu: goto label_1fda3c;
            case 0x1FDA80u: goto label_1fda80;
            case 0x1FDA90u: goto label_1fda90;
            case 0x1FDABCu: goto label_1fdabc;
            case 0x1FDAC0u: goto label_1fdac0;
            case 0x1FDC00u: goto label_1fdc00;
            case 0x1FDC38u: goto label_1fdc38;
            case 0x1FDC40u: goto label_1fdc40;
            case 0x1FDC58u: goto label_1fdc58;
            case 0x1FDCF0u: goto label_1fdcf0;
            case 0x1FDD04u: goto label_1fdd04;
            case 0x1FDD38u: goto label_1fdd38;
            case 0x1FDD3Cu: goto label_1fdd3c;
            case 0x1FDD6Cu: goto label_1fdd6c;
            case 0x1FDD70u: goto label_1fdd70;
            case 0x1FDE10u: goto label_1fde10;
            case 0x1FDE18u: goto label_1fde18;
            case 0x1FDE3Cu: goto label_1fde3c;
            case 0x1FDE5Cu: goto label_1fde5c;
            case 0x1FDE60u: goto label_1fde60;
            case 0x1FDEE8u: goto label_1fdee8;
            case 0x1FDF38u: goto label_1fdf38;
            case 0x1FDF80u: goto label_1fdf80;
            case 0x1FDFA8u: goto label_1fdfa8;
            case 0x1FDFB0u: goto label_1fdfb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FE098u;
}
