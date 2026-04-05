#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BF028
// Address: 0x1bf028 - 0x1bf6f0
void sub_001BF028_0x1bf028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF028_0x1bf028");
#endif

    ctx->pc = 0x1bf028u;

    // 0x1bf028: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1bf028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1bf02c: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1bf02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1bf030: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1bf030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bf034: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1bf034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1bf038: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf03c: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x1bf03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x1bf040: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x1bf040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x1bf044: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x1bf044u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bf048: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1bf048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1bf04c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bf04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf050: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x1bf050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x1bf054: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x1bf054u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1bf058: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x1bf058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1bf05c: 0xc0793ae  jal         func_1E4EB8
    ctx->pc = 0x1BF05Cu;
    SET_GPR_U32(ctx, 31, 0x1BF064u);
    ctx->pc = 0x1BF060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF05Cu;
            // 0x1bf060: 0x7a060110  lq          $a2, 0x110($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4EB8u;
    if (runtime->hasFunction(0x1E4EB8u)) {
        auto targetFn = runtime->lookupFunction(0x1E4EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF064u; }
        if (ctx->pc != 0x1BF064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4EB8_0x1e4eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF064u; }
        if (ctx->pc != 0x1BF064u) { return; }
    }
    ctx->pc = 0x1BF064u;
    // 0x1bf064: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bf064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf068: 0x1220009d  beqz        $s1, . + 4 + (0x9D << 2)
    ctx->pc = 0x1BF068u;
    {
        const bool branch_taken_0x1bf068 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF068u;
            // 0x1bf06c: 0x3c03002c  lui         $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf068) {
            ctx->pc = 0x1BF2E0u;
            goto label_1bf2e0;
        }
    }
    ctx->pc = 0x1BF070u;
    // 0x1bf070: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1bf070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1bf074: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1bf074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x1bf078: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1bf078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1bf07c: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x1BF07Cu;
    {
        const bool branch_taken_0x1bf07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF07Cu;
            // 0x1bf080: 0xac7174d8  sw          $s1, 0x74D8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 29912), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf07c) {
            ctx->pc = 0x1BF288u;
            goto label_1bf288;
        }
    }
    ctx->pc = 0x1BF084u;
    // 0x1bf084: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1bf084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bf088: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bf088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bf08c: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1bf08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bf090: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1bf090u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1bf094: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1bf094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1bf098: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1bf098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1bf09c: 0x40f809  jalr        $v0
    ctx->pc = 0x1BF09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF0A4u);
        ctx->pc = 0x1BF0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF09Cu;
            // 0x1bf0a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BF0A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF100u: goto label_1bf100;
            case 0x1BF11Cu: goto label_1bf11c;
            case 0x1BF160u: goto label_1bf160;
            case 0x1BF1A0u: goto label_1bf1a0;
            case 0x1BF1B8u: goto label_1bf1b8;
            case 0x1BF288u: goto label_1bf288;
            case 0x1BF2D0u: goto label_1bf2d0;
            case 0x1BF2E0u: goto label_1bf2e0;
            case 0x1BF318u: goto label_1bf318;
            case 0x1BF31Cu: goto label_1bf31c;
            case 0x1BF340u: goto label_1bf340;
            case 0x1BF358u: goto label_1bf358;
            case 0x1BF468u: goto label_1bf468;
            case 0x1BF508u: goto label_1bf508;
            case 0x1BF51Cu: goto label_1bf51c;
            case 0x1BF6C8u: goto label_1bf6c8;
            case 0x1BF6CCu: goto label_1bf6cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BF0A4u; }
            if (ctx->pc != 0x1BF0A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1BF0A4u;
    // 0x1bf0a4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1bf0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1bf0a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf0a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf0ac: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1bf0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1bf0b0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1bf0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1bf0b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bf0b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf0b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bf0b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bf0bc: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x1bf0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf0c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1bf0c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1bf0c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bf0c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bf0c8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BF0C8u;
    {
        const bool branch_taken_0x1bf0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF0C8u;
            // 0x1bf0cc: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0c8) {
            ctx->pc = 0x1BF11Cu;
            goto label_1bf11c;
        }
    }
    ctx->pc = 0x1BF0D0u;
    // 0x1bf0d0: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1bf0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1bf0d4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1bf0d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1bf0d8: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1bf0d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1bf0dc: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x1bf0dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf0e0: 0x32220006  andi        $v0, $s1, 0x6
    ctx->pc = 0x1bf0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)6);
    // 0x1bf0e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF0E4u;
    {
        const bool branch_taken_0x1bf0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF0E4u;
            // 0x1bf0e8: 0xfa010260  sqc2        $vf1, 0x260($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0e4) {
            ctx->pc = 0x1BF100u;
            goto label_1bf100;
        }
    }
    ctx->pc = 0x1BF0ECu;
    // 0x1bf0ec: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1bf0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1bf0f0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1bf0f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1bf0f4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1BF0F4u;
    {
        const bool branch_taken_0x1bf0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf0f4) {
            ctx->pc = 0x1BF1B8u;
            goto label_1bf1b8;
        }
    }
    ctx->pc = 0x1BF0FCu;
    // 0x1bf0fc: 0x0  nop
    ctx->pc = 0x1bf0fcu;
    // NOP
label_1bf100:
    // 0x1bf100: 0x32220018  andi        $v0, $s1, 0x18
    ctx->pc = 0x1bf100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)24);
    // 0x1bf104: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1BF104u;
    {
        const bool branch_taken_0x1bf104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf104) {
            ctx->pc = 0x1BF1B8u;
            goto label_1bf1b8;
        }
    }
    ctx->pc = 0x1BF10Cu;
    // 0x1bf10c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bf10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bf110: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1bf110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1bf114: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1BF114u;
    {
        const bool branch_taken_0x1bf114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf114) {
            ctx->pc = 0x1BF1B8u;
            goto label_1bf1b8;
        }
    }
    ctx->pc = 0x1BF11Cu;
label_1bf11c:
    // 0x1bf11c: 0x32220006  andi        $v0, $s1, 0x6
    ctx->pc = 0x1bf11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)6);
    // 0x1bf120: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BF120u;
    {
        const bool branch_taken_0x1bf120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF120u;
            // 0x1bf124: 0x32220018  andi        $v0, $s1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf120) {
            ctx->pc = 0x1BF160u;
            goto label_1bf160;
        }
    }
    ctx->pc = 0x1BF128u;
    // 0x1bf128: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1bf128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1bf12c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bf12cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bf130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf134: 0xda020260  lqc2        $vf2, 0x260($s0)
    ctx->pc = 0x1bf134u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1bf138: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1bf138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1bf13c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1bf13cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1bf140: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1bf140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1bf144: 0x4b011040  vaddx.x     $vf1, $vf2, $vf1x
    ctx->pc = 0x1bf144u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf148: 0x4b010080  vaddx.x     $vf2, $vf0, $vf1x
    ctx->pc = 0x1bf148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf14c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1bf14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1bf150: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1bf150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1bf154: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1BF154u;
    {
        const bool branch_taken_0x1bf154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF154u;
            // 0x1bf158: 0xfa020260  sqc2        $vf2, 0x260($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf154) {
            ctx->pc = 0x1BF1B8u;
            goto label_1bf1b8;
        }
    }
    ctx->pc = 0x1BF15Cu;
    // 0x1bf15c: 0x0  nop
    ctx->pc = 0x1bf15cu;
    // NOP
label_1bf160:
    // 0x1bf160: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BF160u;
    {
        const bool branch_taken_0x1bf160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf160) {
            ctx->pc = 0x1BF1A0u;
            goto label_1bf1a0;
        }
    }
    ctx->pc = 0x1BF168u;
    // 0x1bf168: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1bf168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1bf16c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bf16cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bf170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf174: 0xda020260  lqc2        $vf2, 0x260($s0)
    ctx->pc = 0x1bf174u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1bf178: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1bf178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1bf17c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1bf17cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1bf180: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1bf180u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1bf184: 0x4b011044  vsubx.x     $vf1, $vf2, $vf1x
    ctx->pc = 0x1bf184u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf188: 0x4b010080  vaddx.x     $vf2, $vf0, $vf1x
    ctx->pc = 0x1bf188u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf18c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bf18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bf190: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1bf190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1bf194: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BF194u;
    {
        const bool branch_taken_0x1bf194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF194u;
            // 0x1bf198: 0xfa020260  sqc2        $vf2, 0x260($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf194) {
            ctx->pc = 0x1BF1B8u;
            goto label_1bf1b8;
        }
    }
    ctx->pc = 0x1BF19Cu;
    // 0x1bf19c: 0x0  nop
    ctx->pc = 0x1bf19cu;
    // NOP
label_1bf1a0:
    // 0x1bf1a0: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1bf1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1bf1a4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1bf1a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1bf1a8: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1bf1a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1bf1ac: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x1bf1acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf1b0: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1bf1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf1b4: 0x0  nop
    ctx->pc = 0x1bf1b4u;
    // NOP
label_1bf1b8:
    // 0x1bf1b8: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1bf1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1bf1bc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bf1bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bf1c0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1bf1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bf1c4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1bf1c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1bf1c8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1bf1c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1bf1cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1d0: 0x460ea382  mul.s       $f14, $f20, $f14
    ctx->pc = 0x1bf1d0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[14]);
    // 0x1bf1d4: 0xc60d02bc  lwc1        $f13, 0x2BC($s0)
    ctx->pc = 0x1bf1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bf1d8: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x1bf1d8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x1bf1dc: 0xc07950a  jal         func_1E5428
    ctx->pc = 0x1BF1DCu;
    SET_GPR_U32(ctx, 31, 0x1BF1E4u);
    ctx->pc = 0x1BF1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF1DCu;
            // 0x1bf1e0: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5428u;
    if (runtime->hasFunction(0x1E5428u)) {
        auto targetFn = runtime->lookupFunction(0x1E5428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1E4u; }
        if (ctx->pc != 0x1BF1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5428_0x1e54c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1E4u; }
        if (ctx->pc != 0x1BF1E4u) { return; }
    }
    ctx->pc = 0x1BF1E4u;
    // 0x1bf1e4: 0x4614a080  add.s       $f2, $f20, $f20
    ctx->pc = 0x1bf1e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x1bf1e8: 0xc60102b8  lwc1        $f1, 0x2B8($s0)
    ctx->pc = 0x1bf1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf1ec: 0xe60002bc  swc1        $f0, 0x2BC($s0)
    ctx->pc = 0x1bf1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 700), bits); }
    // 0x1bf1f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1bf1f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1bf1f4: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1bf1f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1bf1f8: 0xc060e80  jal         func_183A00
    ctx->pc = 0x1BF1F8u;
    SET_GPR_U32(ctx, 31, 0x1BF200u);
    ctx->pc = 0x1BF1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF1F8u;
            // 0x1bf1fc: 0xe60102b8  swc1        $f1, 0x2B8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 696), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x183A00u;
    if (runtime->hasFunction(0x183A00u)) {
        auto targetFn = runtime->lookupFunction(0x183A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF200u; }
        if (ctx->pc != 0x1BF200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183a00_0x183ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF200u; }
        if (ctx->pc != 0x1BF200u) { return; }
    }
    ctx->pc = 0x1BF200u;
    // 0x1bf200: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1bf200u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1bf204: 0xc60c02b8  lwc1        $f12, 0x2B8($s0)
    ctx->pc = 0x1bf204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf208: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bf208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1bf20c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf210: 0x3c01402c  lui         $at, 0x402C
    ctx->pc = 0x1bf210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16428 << 16));
    // 0x1bf214: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bf214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bf218: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf21c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1bf21cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1bf220: 0xc060e80  jal         func_183A00
    ctx->pc = 0x1BF220u;
    SET_GPR_U32(ctx, 31, 0x1BF228u);
    ctx->pc = 0x1BF224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF220u;
            // 0x1bf224: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183A00u;
    if (runtime->hasFunction(0x183A00u)) {
        auto targetFn = runtime->lookupFunction(0x183A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF228u; }
        if (ctx->pc != 0x1BF228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183a00_0x183ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF228u; }
        if (ctx->pc != 0x1BF228u) { return; }
    }
    ctx->pc = 0x1BF228u;
    // 0x1bf228: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1bf228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1bf22c: 0xda020260  lqc2        $vf2, 0x260($s0)
    ctx->pc = 0x1bf22cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1bf230: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1bf230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bf234: 0xc4420218  lwc1        $f2, 0x218($v0)
    ctx->pc = 0x1bf234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bf238: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1bf238u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1bf23c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1bf23cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1bf240: 0x4b020845  vsuby.x     $vf1, $vf1, $vf2y
    ctx->pc = 0x1bf240u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf244: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1bf244u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf248: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bf248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bf24c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bf24cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bf250: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1bf250u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf254: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1bf254u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x1bf258: 0x46150868  max.s       $f1, $f1, $f21
    ctx->pc = 0x1bf258u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[21]);
    // 0x1bf25c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1bf25cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1bf260: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1bf260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1bf264: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bf264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bf268: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bf268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf26c: 0x46030869  min.s       $f1, $f1, $f3
    ctx->pc = 0x1bf26cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[3]);
    // 0x1bf270: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1bf270u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1bf274: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1bf274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1bf278: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1bf278u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1bf27c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1bf27cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1bf280: 0xe60102c0  swc1        $f1, 0x2C0($s0)
    ctx->pc = 0x1bf280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
    // 0x1bf284: 0x0  nop
    ctx->pc = 0x1bf284u;
    // NOP
label_1bf288:
    // 0x1bf288: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bf288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bf28c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1bf28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf290: 0xc4405ed8  lwc1        $f0, 0x5ED8($v0)
    ctx->pc = 0x1bf290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf294: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bf294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf298: 0x0  nop
    ctx->pc = 0x1bf298u;
    // NOP
    // 0x1bf29c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1BF29Cu;
    {
        const bool branch_taken_0x1bf29c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF29Cu;
            // 0x1bf2a0: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf29c) {
            ctx->pc = 0x1BF2D0u;
            goto label_1bf2d0;
        }
    }
    ctx->pc = 0x1BF2A4u;
    // 0x1bf2a4: 0x8e020234  lw          $v0, 0x234($s0)
    ctx->pc = 0x1bf2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x1bf2a8: 0x8c635e6c  lw          $v1, 0x5E6C($v1)
    ctx->pc = 0x1bf2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24172)));
    // 0x1bf2ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf2b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bf2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bf2b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1bf2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1bf2b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF2B8u;
    {
        const bool branch_taken_0x1bf2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf2b8) {
            ctx->pc = 0x1BF2D0u;
            goto label_1bf2d0;
        }
    }
    ctx->pc = 0x1BF2C0u;
    // 0x1bf2c0: 0xc07a22e  jal         func_1E88B8
    ctx->pc = 0x1BF2C0u;
    SET_GPR_U32(ctx, 31, 0x1BF2C8u);
    ctx->pc = 0x1BF2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF2C0u;
            // 0x1bf2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E88B8u;
    if (runtime->hasFunction(0x1E88B8u)) {
        auto targetFn = runtime->lookupFunction(0x1E88B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2C8u; }
        if (ctx->pc != 0x1BF2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E88B8_0x1e88b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2C8u; }
        if (ctx->pc != 0x1BF2C8u) { return; }
    }
    ctx->pc = 0x1BF2C8u;
    // 0x1bf2c8: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x1BF2C8u;
    {
        const bool branch_taken_0x1bf2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF2C8u;
            // 0x1bf2cc: 0x7ba20060  lq          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2c8) {
            ctx->pc = 0x1BF6CCu;
            goto label_1bf6cc;
        }
    }
    ctx->pc = 0x1BF2D0u;
label_1bf2d0:
    // 0x1bf2d0: 0xc07a2f6  jal         func_1E8BD8
    ctx->pc = 0x1BF2D0u;
    SET_GPR_U32(ctx, 31, 0x1BF2D8u);
    ctx->pc = 0x1BF2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF2D0u;
            // 0x1bf2d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8BD8u;
    if (runtime->hasFunction(0x1E8BD8u)) {
        auto targetFn = runtime->lookupFunction(0x1E8BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2D8u; }
        if (ctx->pc != 0x1BF2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8BD8_0x1e8bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2D8u; }
        if (ctx->pc != 0x1BF2D8u) { return; }
    }
    ctx->pc = 0x1BF2D8u;
    // 0x1bf2d8: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x1BF2D8u;
    {
        const bool branch_taken_0x1bf2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF2D8u;
            // 0x1bf2dc: 0x7ba20060  lq          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2d8) {
            ctx->pc = 0x1BF6CCu;
            goto label_1bf6cc;
        }
    }
    ctx->pc = 0x1BF2E0u;
label_1bf2e0:
    // 0x1bf2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2e4: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1BF2E4u;
    SET_GPR_U32(ctx, 31, 0x1BF2ECu);
    ctx->pc = 0x1BF2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF2E4u;
            // 0x1bf2e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2ECu; }
        if (ctx->pc != 0x1BF2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2ECu; }
        if (ctx->pc != 0x1BF2ECu) { return; }
    }
    ctx->pc = 0x1BF2ECu;
    // 0x1bf2ec: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1bf2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1bf2f0: 0x8c6274d8  lw          $v0, 0x74D8($v1)
    ctx->pc = 0x1bf2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29912)));
    // 0x1bf2f4: 0x30420012  andi        $v0, $v0, 0x12
    ctx->pc = 0x1bf2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)18);
    // 0x1bf2f8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF2F8u;
    {
        const bool branch_taken_0x1bf2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf2f8) {
            ctx->pc = 0x1BF2FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF2F8u;
            // 0x1bf2fc: 0x7a020070  lq          $v0, 0x70($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BF318u;
            goto label_1bf318;
        }
    }
    ctx->pc = 0x1BF300u;
    // 0x1bf300: 0xda020070  lqc2        $vf2, 0x70($s0)
    ctx->pc = 0x1bf300u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1bf304: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1bf304u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf308: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1bf308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1bf30c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1bf30cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf310: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF310u;
    {
        const bool branch_taken_0x1bf310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF310u;
            // 0x1bf314: 0xfba10090  sqc2        $vf1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf310) {
            ctx->pc = 0x1BF31Cu;
            goto label_1bf31c;
        }
    }
    ctx->pc = 0x1BF318u;
label_1bf318:
    // 0x1bf318: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1bf318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_1bf31c:
    // 0x1bf31c: 0x8c6274d8  lw          $v0, 0x74D8($v1)
    ctx->pc = 0x1bf31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29912)));
    // 0x1bf320: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x1bf320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x1bf324: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF324u;
    {
        const bool branch_taken_0x1bf324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF324u;
            // 0x1bf328: 0x8c6274d8  lw          $v0, 0x74D8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf324) {
            ctx->pc = 0x1BF340u;
            goto label_1bf340;
        }
    }
    ctx->pc = 0x1BF32Cu;
    // 0x1bf32c: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1bf32cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bf330: 0xda020050  lqc2        $vf2, 0x50($s0)
    ctx->pc = 0x1bf330u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1bf334: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1bf334u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf338: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1bf338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf33c: 0x8c6274d8  lw          $v0, 0x74D8($v1)
    ctx->pc = 0x1bf33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29912)));
label_1bf340:
    // 0x1bf340: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x1bf340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x1bf344: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF344u;
    {
        const bool branch_taken_0x1bf344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF344u;
            // 0x1bf348: 0xdba10090  lqc2        $vf1, 0x90($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf344) {
            ctx->pc = 0x1BF358u;
            goto label_1bf358;
        }
    }
    ctx->pc = 0x1BF34Cu;
    // 0x1bf34c: 0xda020050  lqc2        $vf2, 0x50($s0)
    ctx->pc = 0x1bf34cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1bf350: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1bf350u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf354: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1bf354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bf358:
    // 0x1bf358: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1bf358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1bf35c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1bf35cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1bf360: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1bf360u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bf364: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1bf364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf368: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1bf368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1bf36c: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1bf36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1bf370: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1bf370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf374: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1bf374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf378: 0x26110050  addiu       $s1, $s0, 0x50
    ctx->pc = 0x1bf378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1bf37c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1bf37cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1bf380: 0x4a0003bf  vwaitq
    ctx->pc = 0x1bf380u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1bf384: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1bf384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf388: 0x4a0002ff  vnop
    ctx->pc = 0x1bf388u;
    // NOP operation, no action needed for VU0
    // 0x1bf38c: 0x4a0002ff  vnop
    ctx->pc = 0x1bf38cu;
    // NOP operation, no action needed for VU0
    // 0x1bf390: 0xda030130  lqc2        $vf3, 0x130($s0)
    ctx->pc = 0x1bf390u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1bf394: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1bf394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1bf398: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1bf398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x1bf39c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1bf39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1bf3a0: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1bf3a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1bf3a4: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1bf3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1bf3a8: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1bf3a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1bf3ac: 0x4a8418c0  vaddx.y     $vf3, $vf3, $vf4x
    ctx->pc = 0x1bf3acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1bf3b0: 0x4be30859  vmuly.xyzw  $vf1, $vf1, $vf3y
    ctx->pc = 0x1bf3b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf3b4: 0xda030110  lqc2        $vf3, 0x110($s0)
    ctx->pc = 0x1bf3b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1bf3b8: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1bf3b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1bf3bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bf3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bf3c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1bf3c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1bf3c4: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1bf3c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf3c8: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x1bf3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1bf3cc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1bf3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1bf3d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1bf3d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1bf3d4: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1bf3d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf3d8: 0x8e070258  lw          $a3, 0x258($s0)
    ctx->pc = 0x1bf3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1bf3dc: 0x3c020903  lui         $v0, 0x903
    ctx->pc = 0x1bf3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2307 << 16));
    // 0x1bf3e0: 0x3c03ff94  lui         $v1, 0xFF94
    ctx->pc = 0x1bf3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65428 << 16));
    // 0x1bf3e4: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x1bf3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x1bf3e8: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1bf3e8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1bf3ec: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1bf3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1bf3f0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1bf3f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1bf3f4: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x1bf3f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bf3f8: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1bf3f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x1bf3fc: 0x3463e00c  ori         $v1, $v1, 0xE00C
    ctx->pc = 0x1bf3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57356);
    // 0x1bf400: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1bf400u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1bf404: 0x24c2f170  addiu       $v0, $a2, -0xE90
    ctx->pc = 0x1bf404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963568));
    // 0x1bf408: 0x8e44bcf8  lw          $a0, -0x4308($s2)
    ctx->pc = 0x1bf408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950136)));
    // 0x1bf40c: 0xacc3f170  sw          $v1, -0xE90($a2)
    ctx->pc = 0x1bf40cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963568), GPR_U32(ctx, 3));
    // 0x1bf410: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1bf410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf414: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1bf414u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf418: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x1bf418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x1bf41c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1bf41cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf420: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1bf420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x1bf424: 0xac490014  sw          $t1, 0x14($v0)
    ctx->pc = 0x1bf424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
    // 0x1bf428: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1bf428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1bf42c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1bf42cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1bf430: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1bf430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1bf434: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1bf434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1bf438: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1bf438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1bf43c: 0xc047864  jal         func_11E190
    ctx->pc = 0x1BF43Cu;
    SET_GPR_U32(ctx, 31, 0x1BF444u);
    ctx->pc = 0x1BF440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF43Cu;
            // 0x1bf440: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF444u; }
        if (ctx->pc != 0x1BF444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF444u; }
        if (ctx->pc != 0x1BF444u) { return; }
    }
    ctx->pc = 0x1BF444u;
    // 0x1bf444: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1BF444u;
    {
        const bool branch_taken_0x1bf444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF444u;
            // 0x1bf448: 0x7ba20060  lq          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf444) {
            ctx->pc = 0x1BF6CCu;
            goto label_1bf6cc;
        }
    }
    ctx->pc = 0x1BF44Cu;
    // 0x1bf44c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1bf44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1bf450: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF450u;
    {
        const bool branch_taken_0x1bf450 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BF454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF450u;
            // 0x1bf454: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf450) {
            ctx->pc = 0x1BF468u;
            goto label_1bf468;
        }
    }
    ctx->pc = 0x1BF458u;
    // 0x1bf458: 0xc079868  jal         func_1E61A0
    ctx->pc = 0x1BF458u;
    SET_GPR_U32(ctx, 31, 0x1BF460u);
    ctx->pc = 0x1BF45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF458u;
            // 0x1bf45c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E61A0u;
    if (runtime->hasFunction(0x1E61A0u)) {
        auto targetFn = runtime->lookupFunction(0x1E61A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF460u; }
        if (ctx->pc != 0x1BF460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e61a0_0x1e6238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF460u; }
        if (ctx->pc != 0x1BF460u) { return; }
    }
    ctx->pc = 0x1BF460u;
    // 0x1bf460: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1bf460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1bf464: 0x0  nop
    ctx->pc = 0x1bf464u;
    // NOP
label_1bf468:
    // 0x1bf468: 0xda030120  lqc2        $vf3, 0x120($s0)
    ctx->pc = 0x1bf468u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1bf46c: 0x244277a0  addiu       $v0, $v0, 0x77A0
    ctx->pc = 0x1bf46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30624));
    // 0x1bf470: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1bf470u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bf474: 0x4be3205a  vmulz.xyzw  $vf1, $vf4, $vf3z
    ctx->pc = 0x1bf474u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf478: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1bf478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf47c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1bf47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1bf480: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1bf480u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1bf484: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1bf484u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf488: 0xd842fff0  lqc2        $vf2, -0x10($v0)
    ctx->pc = 0x1bf488u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x1bf48c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1bf48cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf490: 0xda010110  lqc2        $vf1, 0x110($s0)
    ctx->pc = 0x1bf490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1bf494: 0x4a830845  vsuby.y     $vf1, $vf1, $vf3y
    ctx->pc = 0x1bf494u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf498: 0x4a810081  vaddy.y     $vf2, $vf0, $vf1y
    ctx->pc = 0x1bf498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf49c: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1bf49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1bf4a0: 0x8e44bcf8  lw          $a0, -0x4308($s2)
    ctx->pc = 0x1bf4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950136)));
    // 0x1bf4a4: 0x7ba50060  lq          $a1, 0x60($sp)
    ctx->pc = 0x1bf4a4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bf4a8: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x1bf4a8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bf4ac: 0xc047864  jal         func_11E190
    ctx->pc = 0x1BF4ACu;
    SET_GPR_U32(ctx, 31, 0x1BF4B4u);
    ctx->pc = 0x1BF4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF4ACu;
            // 0x1bf4b0: 0xfba400e0  sqc2        $vf4, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF4B4u; }
        if (ctx->pc != 0x1BF4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF4B4u; }
        if (ctx->pc != 0x1BF4B4u) { return; }
    }
    ctx->pc = 0x1BF4B4u;
    // 0x1bf4b4: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x1BF4B4u;
    {
        const bool branch_taken_0x1bf4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF4B4u;
            // 0x1bf4b8: 0xdba400e0  lqc2        $vf4, 0xE0($sp) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4b4) {
            ctx->pc = 0x1BF6C8u;
            goto label_1bf6c8;
        }
    }
    ctx->pc = 0x1BF4BCu;
    // 0x1bf4bc: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1bf4bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bf4c0: 0xda020050  lqc2        $vf2, 0x50($s0)
    ctx->pc = 0x1bf4c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1bf4c4: 0x7e020110  sq          $v0, 0x110($s0)
    ctx->pc = 0x1bf4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 272), GPR_VEC(ctx, 2));
    // 0x1bf4c8: 0x4be220aa  vmul.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x1bf4c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf4cc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1bf4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1bf4d0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1bf4d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf4d4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1bf4d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf4d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1bf4d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf4dc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1bf4dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf4e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf4e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf4e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bf4e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf4e8: 0x0  nop
    ctx->pc = 0x1bf4e8u;
    // NOP
    // 0x1bf4ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF4ECu;
    {
        const bool branch_taken_0x1bf4ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF4ECu;
            // 0x1bf4f0: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4ec) {
            ctx->pc = 0x1BF508u;
            goto label_1bf508;
        }
    }
    ctx->pc = 0x1BF4F4u;
    // 0x1bf4f4: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1bf4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1bf4f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bf4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bf4fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF4FCu;
    {
        const bool branch_taken_0x1bf4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF4FCu;
            // 0x1bf500: 0xae0202d8  sw          $v0, 0x2D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4fc) {
            ctx->pc = 0x1BF51Cu;
            goto label_1bf51c;
        }
    }
    ctx->pc = 0x1BF504u;
    // 0x1bf504: 0x0  nop
    ctx->pc = 0x1bf504u;
    // NOP
label_1bf508:
    // 0x1bf508: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1bf508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1bf50c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x1bf50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x1bf510: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1bf510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1bf514: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1bf514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1bf518: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1bf518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
label_1bf51c:
    // 0x1bf51c: 0x4b040042  vaddz.x     $vf1, $vf0, $vf4z
    ctx->pc = 0x1bf51cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf520: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1bf520u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf524: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bf524u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf528: 0x48242000  qmfc2.ni    $a0, $vf4
    ctx->pc = 0x1bf528u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1bf52c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bf52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf530: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf534: 0x70e22389  pcpyld      $a0, $a3, $v0
    ctx->pc = 0x1bf534u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1bf538: 0x70e31389  pcpyld      $v0, $a3, $v1
    ctx->pc = 0x1bf538u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x1bf53c: 0x70441cc8  ppacw       $v1, $v0, $a0
    ctx->pc = 0x1bf53cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1bf540: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1bf540u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1bf544: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1bf544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1bf548: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1bf548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf54c: 0xfba300c0  sqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x1bf54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1bf550: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1bf550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf554: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1bf554u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf558: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1bf558u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1bf55c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1bf55cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1bf560: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1bf560u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1bf564: 0x4a0002ff  vnop
    ctx->pc = 0x1bf564u;
    // NOP operation, no action needed for VU0
    // 0x1bf568: 0x4a0002ff  vnop
    ctx->pc = 0x1bf568u;
    // NOP operation, no action needed for VU0
    // 0x1bf56c: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1bf56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1bf570: 0xfba300c0  sqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x1bf570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1bf574: 0xfa230020  sqc2        $vf3, 0x20($s1)
    ctx->pc = 0x1bf574u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1bf578: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bf578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bf57c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1bf57cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1bf580: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1bf580u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf584: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1bf584u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf588: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x1bf588u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]);
    // 0x1bf58c: 0x4bc3086e  vopmsub.xyz $vf1, $vf1, $vf3
    ctx->pc = 0x1bf58cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1bf590: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1bf590u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf594: 0x4be1092a  vmul.xyzw   $vf4, $vf1, $vf1
    ctx->pc = 0x1bf594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1bf598: 0x4b042081  vaddy.x     $vf2, $vf4, $vf4y
    ctx->pc = 0x1bf598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf59c: 0x4b041082  vaddz.x     $vf2, $vf2, $vf4z
    ctx->pc = 0x1bf59cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf5a0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1bf5a0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1bf5a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1bf5a4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1bf5a8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1bf5a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf5ac: 0x4a0002ff  vnop
    ctx->pc = 0x1bf5acu;
    // NOP operation, no action needed for VU0
    // 0x1bf5b0: 0x4a0002ff  vnop
    ctx->pc = 0x1bf5b0u;
    // NOP operation, no action needed for VU0
    // 0x1bf5b4: 0x4bc30afe  vopmula.xyz $ACC, $vf1, $vf3
    ctx->pc = 0x1bf5b4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]);
    // 0x1bf5b8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1bf5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf5bc: 0x4bc1186e  vopmsub.xyz $vf1, $vf3, $vf1
    ctx->pc = 0x1bf5bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1bf5c0: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1bf5c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf5c4: 0x4be1092a  vmul.xyzw   $vf4, $vf1, $vf1
    ctx->pc = 0x1bf5c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1bf5c8: 0x4b042081  vaddy.x     $vf2, $vf4, $vf4y
    ctx->pc = 0x1bf5c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf5cc: 0x4b041082  vaddz.x     $vf2, $vf2, $vf4z
    ctx->pc = 0x1bf5ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf5d0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1bf5d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1bf5d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1bf5d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1bf5d8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1bf5d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf5dc: 0x4a0002ff  vnop
    ctx->pc = 0x1bf5dcu;
    // NOP operation, no action needed for VU0
    // 0x1bf5e0: 0x4a0002ff  vnop
    ctx->pc = 0x1bf5e0u;
    // NOP operation, no action needed for VU0
    // 0x1bf5e4: 0x4bc30afe  vopmula.xyz $ACC, $vf1, $vf3
    ctx->pc = 0x1bf5e4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]);
    // 0x1bf5e8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1bf5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf5ec: 0x4bc118ee  vopmsub.xyz $vf3, $vf3, $vf1
    ctx->pc = 0x1bf5ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1bf5f0: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1bf5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf5f4: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1bf5f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1bf5f8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1bf5f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf5fc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1bf5fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf600: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1bf600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf604: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x1bf604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1bf608: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1bf608u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1bf60c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1bf60cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1bf610: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1bf610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1bf614: 0x4a0002ff  vnop
    ctx->pc = 0x1bf614u;
    // NOP operation, no action needed for VU0
    // 0x1bf618: 0x4a0002ff  vnop
    ctx->pc = 0x1bf618u;
    // NOP operation, no action needed for VU0
    // 0x1bf61c: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1bf61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1bf620: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bf620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bf624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf628: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x1bf628u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1bf62c: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1bf62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1bf630: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1bf630u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1bf634: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1bf634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1bf638: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1bf638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x1bf63c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1bf63cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1bf640: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x1bf640u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x1bf644: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1bf644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1bf648: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bf648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bf64c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf650: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x1bf650u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x1bf654: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1bf654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1bf658: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1bf658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1bf65c: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1bf65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1bf660: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1bf660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1bf664: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1bf664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1bf668: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1bf668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1bf66c: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1bf66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x1bf670: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1bf670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1bf674: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf678: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1bf678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1bf67c: 0xe6010150  swc1        $f1, 0x150($s0)
    ctx->pc = 0x1bf67cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x1bf680: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1bf680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1bf684: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1bf684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1bf688: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1bf688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
    // 0x1bf68c: 0xda0100e0  lqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1bf68cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1bf690: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x1bf690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf694: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1bf694u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf698: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x1bf698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf69c: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1bf69cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1bf6a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bf6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf6a4: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1bf6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf6a8: 0xc078bb2  jal         func_1E2EC8
    ctx->pc = 0x1BF6A8u;
    SET_GPR_U32(ctx, 31, 0x1BF6B0u);
    ctx->pc = 0x1BF6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF6A8u;
            // 0x1bf6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EC8u;
    if (runtime->hasFunction(0x1E2EC8u)) {
        auto targetFn = runtime->lookupFunction(0x1E2EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6B0u; }
        if (ctx->pc != 0x1BF6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2EC8_0x1e2ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6B0u; }
        if (ctx->pc != 0x1BF6B0u) { return; }
    }
    ctx->pc = 0x1BF6B0u;
    // 0x1bf6b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bf6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bf6b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF6B4u;
    {
        const bool branch_taken_0x1bf6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF6B4u;
            // 0x1bf6b8: 0x7ba20060  lq          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf6b4) {
            ctx->pc = 0x1BF6CCu;
            goto label_1bf6cc;
        }
    }
    ctx->pc = 0x1BF6BCu;
    // 0x1bf6bc: 0xc071a8c  jal         func_1C6A30
    ctx->pc = 0x1BF6BCu;
    SET_GPR_U32(ctx, 31, 0x1BF6C4u);
    ctx->pc = 0x1BF6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF6BCu;
            // 0x1bf6c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A30u;
    if (runtime->hasFunction(0x1C6A30u)) {
        auto targetFn = runtime->lookupFunction(0x1C6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6C4u; }
        if (ctx->pc != 0x1BF6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c6a30_0x1c6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6C4u; }
        if (ctx->pc != 0x1BF6C4u) { return; }
    }
    ctx->pc = 0x1BF6C4u;
    // 0x1bf6c4: 0x0  nop
    ctx->pc = 0x1bf6c4u;
    // NOP
label_1bf6c8:
    // 0x1bf6c8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1bf6c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bf6cc:
    // 0x1bf6cc: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1bf6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1bf6d0: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1bf6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1bf6d4: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1bf6d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1bf6d8: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x1bf6d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1bf6dc: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1bf6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1bf6e0: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x1bf6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bf6e4: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x1bf6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bf6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF6E8u;
            // 0x1bf6ec: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF100u: goto label_1bf100;
            case 0x1BF11Cu: goto label_1bf11c;
            case 0x1BF160u: goto label_1bf160;
            case 0x1BF1A0u: goto label_1bf1a0;
            case 0x1BF1B8u: goto label_1bf1b8;
            case 0x1BF288u: goto label_1bf288;
            case 0x1BF2D0u: goto label_1bf2d0;
            case 0x1BF2E0u: goto label_1bf2e0;
            case 0x1BF318u: goto label_1bf318;
            case 0x1BF31Cu: goto label_1bf31c;
            case 0x1BF340u: goto label_1bf340;
            case 0x1BF358u: goto label_1bf358;
            case 0x1BF468u: goto label_1bf468;
            case 0x1BF508u: goto label_1bf508;
            case 0x1BF51Cu: goto label_1bf51c;
            case 0x1BF6C8u: goto label_1bf6c8;
            case 0x1BF6CCu: goto label_1bf6cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BF6F0u;
}
