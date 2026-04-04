#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D78B0
// Address: 0x1d78b0 - 0x1d7e38
void sub_001D78B0_0x1d78b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D78B0_0x1d78b0");
#endif

    ctx->pc = 0x1d78b0u;

    // 0x1d78b0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1d78b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x1d78b4: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x1d78b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x1d78b8: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x1d78b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x1d78bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d78bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78c0: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x1d78c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x1d78c4: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x1d78c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x1d78c8: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x1d78c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x1d78cc: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x1d78ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x1d78d0: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x1d78d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x1d78d4: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x1d78d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x1d78d8: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1d78d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x1d78dc: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1D78DCu;
    SET_GPR_U32(ctx, 31, 0x1D78E4u);
    ctx->pc = 0x1D78E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78DCu;
            // 0x1d78e0: 0xe7b401b0  swc1        $f20, 0x1B0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D78E4u; }
        if (ctx->pc != 0x1D78E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D78E4u; }
        if (ctx->pc != 0x1D78E4u) { return; }
    }
    ctx->pc = 0x1D78E4u;
    // 0x1d78e4: 0x14400149  bnez        $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x1D78E4u;
    {
        const bool branch_taken_0x1d78e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D78E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78E4u;
            // 0x1d78e8: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78e4) {
            ctx->pc = 0x1D7E0Cu;
            goto label_1d7e0c;
        }
    }
    ctx->pc = 0x1D78ECu;
    // 0x1d78ec: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1d78ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1d78f0: 0x14400147  bnez        $v0, . + 4 + (0x147 << 2)
    ctx->pc = 0x1D78F0u;
    {
        const bool branch_taken_0x1d78f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D78F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78F0u;
            // 0x1d78f4: 0x7bb10190  lq          $s1, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78f0) {
            ctx->pc = 0x1D7E10u;
            goto label_1d7e10;
        }
    }
    ctx->pc = 0x1D78F8u;
    // 0x1d78f8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d78fc: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1d78fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1d7900: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d7900u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7904: 0xc0909c4  jal         func_242710
    ctx->pc = 0x1D7904u;
    SET_GPR_U32(ctx, 31, 0x1D790Cu);
    ctx->pc = 0x1D7908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7904u;
            // 0x1d7908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D790Cu; }
        if (ctx->pc != 0x1D790Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D790Cu; }
        if (ctx->pc != 0x1D790Cu) { return; }
    }
    ctx->pc = 0x1D790Cu;
    // 0x1d790c: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1d790cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d7910: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d7910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d7914: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1d7914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1d7918: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1d7918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1d791c: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x1d791cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x1d7920: 0x40f809  jalr        $v0
    ctx->pc = 0x1D7920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D7928u);
        ctx->pc = 0x1D7924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7920u;
            // 0x1d7924: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D7928u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7980u: goto label_1d7980;
            case 0x1D7A4Cu: goto label_1d7a4c;
            case 0x1D7AA8u: goto label_1d7aa8;
            case 0x1D7AB8u: goto label_1d7ab8;
            case 0x1D7AF0u: goto label_1d7af0;
            case 0x1D7B14u: goto label_1d7b14;
            case 0x1D7B34u: goto label_1d7b34;
            case 0x1D7B50u: goto label_1d7b50;
            case 0x1D7B54u: goto label_1d7b54;
            case 0x1D7B8Cu: goto label_1d7b8c;
            case 0x1D7B90u: goto label_1d7b90;
            case 0x1D7BACu: goto label_1d7bac;
            case 0x1D7CB0u: goto label_1d7cb0;
            case 0x1D7D28u: goto label_1d7d28;
            case 0x1D7D2Cu: goto label_1d7d2c;
            case 0x1D7D68u: goto label_1d7d68;
            case 0x1D7D74u: goto label_1d7d74;
            case 0x1D7DD0u: goto label_1d7dd0;
            case 0x1D7E08u: goto label_1d7e08;
            case 0x1D7E0Cu: goto label_1d7e0c;
            case 0x1D7E10u: goto label_1d7e10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D7928u; }
            if (ctx->pc != 0x1D7928u) { return; }
        }
        }
    }
    ctx->pc = 0x1D7928u;
    // 0x1d7928: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1d7928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1d792c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1d792cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1d7930: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d7930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7934: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1d7934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1d7938: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d7938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d793c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d793cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d7940: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d7940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1d7944: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d7944u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d7948: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1d7948u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1d794c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1d794cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d7950: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1d7950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d7954: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x1d7954u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d7958: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1d7958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d795c: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1d795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d7960: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d7960u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7964: 0x3c160030  lui         $s6, 0x30
    ctx->pc = 0x1d7964u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)48 << 16));
    // 0x1d7968: 0x8ec32878  lw          $v1, 0x2878($s6)
    ctx->pc = 0x1d7968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10360)));
    // 0x1d796c: 0x26c22878  addiu       $v0, $s6, 0x2878
    ctx->pc = 0x1d796cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 10360));
    // 0x1d7970: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d7970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1d7974: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1D7974u;
    {
        const bool branch_taken_0x1d7974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7974u;
            // 0x1d7978: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7974) {
            ctx->pc = 0x1D7AB8u;
            goto label_1d7ab8;
        }
    }
    ctx->pc = 0x1D797Cu;
    // 0x1d797c: 0x0  nop
    ctx->pc = 0x1d797cu;
    // NOP
label_1d7980:
    // 0x1d7980: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x1d7980u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d7984: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d7984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d7988: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1d7988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d798c: 0x8e550008  lw          $s5, 0x8($s2)
    ctx->pc = 0x1d798cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1d7990: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d7990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d7994: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x1d7994u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d7998: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1d7998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1d799c: 0xc660019c  lwc1        $f0, 0x19C($s3)
    ctx->pc = 0x1d799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d79a0: 0xc6740198  lwc1        $f20, 0x198($s3)
    ctx->pc = 0x1d79a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d79a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d79a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d79a8: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x1d79a8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x1d79ac: 0x16e0003e  bnez        $s7, . + 4 + (0x3E << 2)
    ctx->pc = 0x1D79ACu;
    {
        const bool branch_taken_0x1d79ac = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D79B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D79ACu;
            // 0x1d79b0: 0xe660019c  swc1        $f0, 0x19C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 412), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79ac) {
            ctx->pc = 0x1D7AA8u;
            goto label_1d7aa8;
        }
    }
    ctx->pc = 0x1D79B4u;
    // 0x1d79b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d79b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d79b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d79b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d79bc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1d79bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d79c0: 0x0  nop
    ctx->pc = 0x1d79c0u;
    // NOP
    // 0x1d79c4: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x1D79C4u;
    {
        const bool branch_taken_0x1d79c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D79C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D79C4u;
            // 0x1d79c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79c4) {
            ctx->pc = 0x1D7AA8u;
            goto label_1d7aa8;
        }
    }
    ctx->pc = 0x1D79CCu;
    // 0x1d79cc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1d79ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d79d0: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x1d79d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x1d79d4: 0x8c4200ec  lw          $v0, 0xEC($v0)
    ctx->pc = 0x1d79d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x1d79d8: 0x40f809  jalr        $v0
    ctx->pc = 0x1D79D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D79E0u);
        ctx->pc = 0x1D79DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D79D8u;
            // 0x1d79dc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D79E0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7980u: goto label_1d7980;
            case 0x1D7A4Cu: goto label_1d7a4c;
            case 0x1D7AA8u: goto label_1d7aa8;
            case 0x1D7AB8u: goto label_1d7ab8;
            case 0x1D7AF0u: goto label_1d7af0;
            case 0x1D7B14u: goto label_1d7b14;
            case 0x1D7B34u: goto label_1d7b34;
            case 0x1D7B50u: goto label_1d7b50;
            case 0x1D7B54u: goto label_1d7b54;
            case 0x1D7B8Cu: goto label_1d7b8c;
            case 0x1D7B90u: goto label_1d7b90;
            case 0x1D7BACu: goto label_1d7bac;
            case 0x1D7CB0u: goto label_1d7cb0;
            case 0x1D7D28u: goto label_1d7d28;
            case 0x1D7D2Cu: goto label_1d7d2c;
            case 0x1D7D68u: goto label_1d7d68;
            case 0x1D7D74u: goto label_1d7d74;
            case 0x1D7DD0u: goto label_1d7dd0;
            case 0x1D7E08u: goto label_1d7e08;
            case 0x1D7E0Cu: goto label_1d7e0c;
            case 0x1D7E10u: goto label_1d7e10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D79E0u; }
            if (ctx->pc != 0x1D79E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D79E0u;
    // 0x1d79e0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1d79e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1d79e4: 0x3c05ff94  lui         $a1, 0xFF94
    ctx->pc = 0x1d79e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65428 << 16));
    // 0x1d79e8: 0x8c64bcf8  lw          $a0, -0x4308($v1)
    ctx->pc = 0x1d79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950136)));
    // 0x1d79ec: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1d79ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x1d79f0: 0x34a5e00c  ori         $a1, $a1, 0xE00C
    ctx->pc = 0x1d79f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57356);
    // 0x1d79f4: 0x3c060d33  lui         $a2, 0xD33
    ctx->pc = 0x1d79f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3379 << 16));
    // 0x1d79f8: 0x2503f170  addiu       $v1, $t0, -0xE90
    ctx->pc = 0x1d79f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963568));
    // 0x1d79fc: 0xad05f170  sw          $a1, -0xE90($t0)
    ctx->pc = 0x1d79fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294963568), GPR_U32(ctx, 5));
    // 0x1d7a00: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x1d7a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x1d7a04: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1d7a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7a08: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1d7a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1d7a0c: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x1d7a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x1d7a10: 0x700234a9  por         $a2, $zero, $v0
    ctx->pc = 0x1d7a10u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1d7a14: 0x7ba50100  lq          $a1, 0x100($sp)
    ctx->pc = 0x1d7a14u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d7a18: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1d7a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1d7a1c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1d7a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1d7a20: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1d7a20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1d7a24: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1d7a24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1d7a28: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1d7a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1d7a2c: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1d7a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x1d7a30: 0xc047864  jal         func_11E190
    ctx->pc = 0x1D7A30u;
    SET_GPR_U32(ctx, 31, 0x1D7A38u);
    ctx->pc = 0x1D7A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A30u;
            // 0x1d7a34: 0xac600020  sw          $zero, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A38u; }
        if (ctx->pc != 0x1D7A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A38u; }
        if (ctx->pc != 0x1D7A38u) { return; }
    }
    ctx->pc = 0x1D7A38u;
    // 0x1d7a38: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7A38u;
    {
        const bool branch_taken_0x1d7a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7a38) {
            ctx->pc = 0x1D7A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A38u;
            // 0x1d7a3c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7A4Cu;
            goto label_1d7a4c;
        }
    }
    ctx->pc = 0x1D7A40u;
    // 0x1d7a40: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d7a40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d7a44: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D7A44u;
    {
        const bool branch_taken_0x1d7a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A44u;
            // 0x1d7a48: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7a44) {
            ctx->pc = 0x1D7AA8u;
            goto label_1d7aa8;
        }
    }
    ctx->pc = 0x1D7A4Cu;
label_1d7a4c:
    // 0x1d7a4c: 0x3c11002c  lui         $s1, 0x2C
    ctx->pc = 0x1d7a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)44 << 16));
    // 0x1d7a50: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d7a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d7a54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d7a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a58: 0x8e247910  lw          $a0, 0x7910($s1)
    ctx->pc = 0x1d7a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30992)));
    // 0x1d7a5c: 0x26d02878  addiu       $s0, $s6, 0x2878
    ctx->pc = 0x1d7a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 10360));
    // 0x1d7a60: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d7a60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1d7a64: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d7a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d7a68: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d7a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d7a6c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1d7a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1d7a70: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1d7a70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1d7a74: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1D7A74u;
    SET_GPR_U32(ctx, 31, 0x1D7A7Cu);
    ctx->pc = 0x1D7A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A74u;
            // 0x1d7a78: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A7Cu; }
        if (ctx->pc != 0x1D7A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A7Cu; }
        if (ctx->pc != 0x1D7A7Cu) { return; }
    }
    ctx->pc = 0x1D7A7Cu;
    // 0x1d7a7c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1D7A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D7A84u);
    ctx->pc = 0x1D7A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A7Cu;
            // 0x1d7a80: 0x8e247910  lw          $a0, 0x7910($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A84u; }
        if (ctx->pc != 0x1D7A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A84u; }
        if (ctx->pc != 0x1D7A84u) { return; }
    }
    ctx->pc = 0x1D7A84u;
    // 0x1d7a84: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d7a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d7a88: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d7a88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d7a8c: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x1d7a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x1d7a90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d7a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d7a94: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1d7a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1d7a98: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1d7a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1d7a9c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1d7a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1d7aa0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d7aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1d7aa4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1d7aa4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1d7aa8:
    // 0x1d7aa8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1d7aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d7aac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7ab0: 0x1462ffb3  bne         $v1, $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x1D7AB0u;
    {
        const bool branch_taken_0x1d7ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D7AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7AB0u;
            // 0x1d7ab4: 0xe6740198  swc1        $f20, 0x198($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 408), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ab0) {
            ctx->pc = 0x1D7980u;
            runtime->cooperativeGuestYield();
            goto label_1d7980;
        }
    }
    ctx->pc = 0x1D7AB8u;
label_1d7ab8:
    // 0x1d7ab8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1d7ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d7abc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d7ac0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d7ac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d7ac4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d7ac8: 0x40f809  jalr        $v0
    ctx->pc = 0x1D7AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D7AD0u);
        ctx->pc = 0x1D7ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7AC8u;
            // 0x1d7acc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D7AD0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7980u: goto label_1d7980;
            case 0x1D7A4Cu: goto label_1d7a4c;
            case 0x1D7AA8u: goto label_1d7aa8;
            case 0x1D7AB8u: goto label_1d7ab8;
            case 0x1D7AF0u: goto label_1d7af0;
            case 0x1D7B14u: goto label_1d7b14;
            case 0x1D7B34u: goto label_1d7b34;
            case 0x1D7B50u: goto label_1d7b50;
            case 0x1D7B54u: goto label_1d7b54;
            case 0x1D7B8Cu: goto label_1d7b8c;
            case 0x1D7B90u: goto label_1d7b90;
            case 0x1D7BACu: goto label_1d7bac;
            case 0x1D7CB0u: goto label_1d7cb0;
            case 0x1D7D28u: goto label_1d7d28;
            case 0x1D7D2Cu: goto label_1d7d2c;
            case 0x1D7D68u: goto label_1d7d68;
            case 0x1D7D74u: goto label_1d7d74;
            case 0x1D7DD0u: goto label_1d7dd0;
            case 0x1D7E08u: goto label_1d7e08;
            case 0x1D7E0Cu: goto label_1d7e0c;
            case 0x1D7E10u: goto label_1d7e10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D7AD0u; }
            if (ctx->pc != 0x1D7AD0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D7AD0u;
    // 0x1d7ad0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d7ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ad4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1d7ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d7ad8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7AD8u;
    {
        const bool branch_taken_0x1d7ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7ad8) {
            ctx->pc = 0x1D7ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7AD8u;
            // 0x1d7adc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7AF0u;
            goto label_1d7af0;
        }
    }
    ctx->pc = 0x1D7AE0u;
    // 0x1d7ae0: 0xc090d56  jal         func_243558
    ctx->pc = 0x1D7AE0u;
    SET_GPR_U32(ctx, 31, 0x1D7AE8u);
    ctx->pc = 0x1D7AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7AE0u;
            // 0x1d7ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7AE8u; }
        if (ctx->pc != 0x1D7AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7AE8u; }
        if (ctx->pc != 0x1D7AE8u) { return; }
    }
    ctx->pc = 0x1D7AE8u;
    // 0x1d7ae8: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1d7ae8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1d7aec: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1d7aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1d7af0:
    // 0x1d7af0: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D7AF0u;
    {
        const bool branch_taken_0x1d7af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7af0) {
            ctx->pc = 0x1D7AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7AF0u;
            // 0x1d7af4: 0x8e050080  lw          $a1, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7B54u;
            goto label_1d7b54;
        }
    }
    ctx->pc = 0x1D7AF8u;
    // 0x1d7af8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1d7af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d7afc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7AFCu;
    {
        const bool branch_taken_0x1d7afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7afc) {
            ctx->pc = 0x1D7B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7AFCu;
            // 0x1d7b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7B14u;
            goto label_1d7b14;
        }
    }
    ctx->pc = 0x1D7B04u;
    // 0x1d7b04: 0xc090d56  jal         func_243558
    ctx->pc = 0x1D7B04u;
    SET_GPR_U32(ctx, 31, 0x1D7B0Cu);
    ctx->pc = 0x1D7B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B04u;
            // 0x1d7b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B0Cu; }
        if (ctx->pc != 0x1D7B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B0Cu; }
        if (ctx->pc != 0x1D7B0Cu) { return; }
    }
    ctx->pc = 0x1D7B0Cu;
    // 0x1d7b0c: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1d7b0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1d7b10: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1d7b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1d7b14:
    // 0x1d7b14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7B14u;
    {
        const bool branch_taken_0x1d7b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B14u;
            // 0x1d7b18: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b14) {
            ctx->pc = 0x1D7B34u;
            goto label_1d7b34;
        }
    }
    ctx->pc = 0x1D7B1Cu;
    // 0x1d7b1c: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x1d7b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1d7b20: 0xc44c2910  lwc1        $f12, 0x2910($v0)
    ctx->pc = 0x1d7b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7b24: 0xc0765d4  jal         func_1D9750
    ctx->pc = 0x1D7B24u;
    SET_GPR_U32(ctx, 31, 0x1D7B2Cu);
    ctx->pc = 0x1D7B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B24u;
            // 0x1d7b28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9750u;
    if (runtime->hasFunction(0x1D9750u)) {
        auto targetFn = runtime->lookupFunction(0x1D9750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B2Cu; }
        if (ctx->pc != 0x1D7B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9750_0x1d9750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B2Cu; }
        if (ctx->pc != 0x1D7B2Cu) { return; }
    }
    ctx->pc = 0x1D7B2Cu;
    // 0x1d7b2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7B2Cu;
    {
        const bool branch_taken_0x1d7b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B2Cu;
            // 0x1d7b30: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b2c) {
            ctx->pc = 0x1D7B50u;
            goto label_1d7b50;
        }
    }
    ctx->pc = 0x1D7B34u;
label_1d7b34:
    // 0x1d7b34: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d7b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d7b38: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x1d7b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1d7b3c: 0xc44c290c  lwc1        $f12, 0x290C($v0)
    ctx->pc = 0x1d7b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7b40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b44: 0xc07643c  jal         func_1D90F0
    ctx->pc = 0x1D7B44u;
    SET_GPR_U32(ctx, 31, 0x1D7B4Cu);
    ctx->pc = 0x1D7B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B44u;
            // 0x1d7b48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D90F0u;
    if (runtime->hasFunction(0x1D90F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D90F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B4Cu; }
        if (ctx->pc != 0x1D7B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D90F0_0x1d90f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B4Cu; }
        if (ctx->pc != 0x1D7B4Cu) { return; }
    }
    ctx->pc = 0x1D7B4Cu;
    // 0x1d7b4c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1d7b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_1d7b50:
    // 0x1d7b50: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x1d7b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1d7b54:
    // 0x1d7b54: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1d7b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1d7b58: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D7B58u;
    {
        const bool branch_taken_0x1d7b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B58u;
            // 0x1d7b5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b58) {
            ctx->pc = 0x1D7B90u;
            goto label_1d7b90;
        }
    }
    ctx->pc = 0x1D7B60u;
    // 0x1d7b60: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d7b64: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1d7b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1d7b68: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d7b68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d7b6c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d7b70: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1d7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1d7b74: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d7b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d7b78: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d7b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7b7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7b80: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7B80u;
    {
        const bool branch_taken_0x1d7b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D7B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B80u;
            // 0x1d7b84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b80) {
            ctx->pc = 0x1D7B8Cu;
            goto label_1d7b8c;
        }
    }
    ctx->pc = 0x1D7B88u;
    // 0x1d7b88: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d7b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d7b8c:
    // 0x1d7b8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d7b90:
    // 0x1d7b90: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1d7b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d7b94: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7B94u;
    {
        const bool branch_taken_0x1d7b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b94) {
            ctx->pc = 0x1D7B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B94u;
            // 0x1d7b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7BACu;
            goto label_1d7bac;
        }
    }
    ctx->pc = 0x1D7B9Cu;
    // 0x1d7b9c: 0xc090d56  jal         func_243558
    ctx->pc = 0x1D7B9Cu;
    SET_GPR_U32(ctx, 31, 0x1D7BA4u);
    ctx->pc = 0x1D7BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B9Cu;
            // 0x1d7ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BA4u; }
        if (ctx->pc != 0x1D7BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BA4u; }
        if (ctx->pc != 0x1D7BA4u) { return; }
    }
    ctx->pc = 0x1D7BA4u;
    // 0x1d7ba4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1d7ba4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1d7ba8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1d7ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1d7bac:
    // 0x1d7bac: 0x50400088  beql        $v0, $zero, . + 4 + (0x88 << 2)
    ctx->pc = 0x1D7BACu;
    {
        const bool branch_taken_0x1d7bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7bac) {
            ctx->pc = 0x1D7BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7BACu;
            // 0x1d7bb0: 0x8e850080  lw          $a1, 0x80($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7DD0u;
            goto label_1d7dd0;
        }
    }
    ctx->pc = 0x1D7BB4u;
    // 0x1d7bb4: 0x52200086  beql        $s1, $zero, . + 4 + (0x86 << 2)
    ctx->pc = 0x1D7BB4u;
    {
        const bool branch_taken_0x1d7bb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7bb4) {
            ctx->pc = 0x1D7BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7BB4u;
            // 0x1d7bb8: 0x8e850080  lw          $a1, 0x80($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7DD0u;
            goto label_1d7dd0;
        }
    }
    ctx->pc = 0x1D7BBCu;
    // 0x1d7bbc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d7bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7bc0: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x1d7bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d7bc4: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1d7bc4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1d7bc8: 0x4be20b3d  vmr32.xyzw  $vf2, $vf1
    ctx->pc = 0x1d7bc8u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1d7bcc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1d7bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d7bd0: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x1d7bd0u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1d7bd4: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1d7bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d7bd8: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x1d7bd8u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1d7bdc: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1d7bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1d7be0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1d7be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1d7be4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1d7be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d7be8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d7be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d7bec: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x1d7becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d7bf0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d7bf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d7bf4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d7bf8: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1d7bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1d7bfc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1d7bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d7c00: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1d7c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1d7c04: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x1d7c04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d7c08: 0x40f809  jalr        $v0
    ctx->pc = 0x1D7C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D7C10u);
        ctx->pc = 0x1D7C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C08u;
            // 0x1d7c0c: 0x7fa30110  sq          $v1, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D7C10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7980u: goto label_1d7980;
            case 0x1D7A4Cu: goto label_1d7a4c;
            case 0x1D7AA8u: goto label_1d7aa8;
            case 0x1D7AB8u: goto label_1d7ab8;
            case 0x1D7AF0u: goto label_1d7af0;
            case 0x1D7B14u: goto label_1d7b14;
            case 0x1D7B34u: goto label_1d7b34;
            case 0x1D7B50u: goto label_1d7b50;
            case 0x1D7B54u: goto label_1d7b54;
            case 0x1D7B8Cu: goto label_1d7b8c;
            case 0x1D7B90u: goto label_1d7b90;
            case 0x1D7BACu: goto label_1d7bac;
            case 0x1D7CB0u: goto label_1d7cb0;
            case 0x1D7D28u: goto label_1d7d28;
            case 0x1D7D2Cu: goto label_1d7d2c;
            case 0x1D7D68u: goto label_1d7d68;
            case 0x1D7D74u: goto label_1d7d74;
            case 0x1D7DD0u: goto label_1d7dd0;
            case 0x1D7E08u: goto label_1d7e08;
            case 0x1D7E0Cu: goto label_1d7e0c;
            case 0x1D7E10u: goto label_1d7e10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C10u; }
            if (ctx->pc != 0x1D7C10u) { return; }
        }
        }
    }
    ctx->pc = 0x1D7C10u;
    // 0x1d7c10: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D7C10u;
    {
        const bool branch_taken_0x1d7c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C10u;
            // 0x1d7c14: 0x7ba60110  lq          $a2, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c10) {
            ctx->pc = 0x1D7CB0u;
            goto label_1d7cb0;
        }
    }
    ctx->pc = 0x1D7C18u;
    // 0x1d7c18: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1d7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d7c1c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1d7c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1d7c20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d7c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7c24: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1d7c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7c28: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1d7c28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d7c2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d7c2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d7c30: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d7c30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d7c34: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1d7c34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1d7c38: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1d7c38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d7c3c: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x1d7c3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d7c40: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1d7c40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d7c44: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x1d7c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d7c48: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1d7c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1d7c4c: 0x70421b89  pcpyld      $v1, $v0, $v0
    ctx->pc = 0x1d7c4cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1d7c50: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1d7c50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1d7c54: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1d7c54u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1d7c58: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x1d7c58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7c5c: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1d7c5cu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1d7c60: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1d7c60u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7c64: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1d7c64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1d7c68: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1d7c68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7c6c: 0x4be1296a  vmul.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x1d7c6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1d7c70: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1d7c70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7c74: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1d7c74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d7c78: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1d7c78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d7c7c: 0x4be1212a  vmul.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1d7c7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1d7c80: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x1d7c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1d7c84: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1d7c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1d7c88: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1d7c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1d7c8c: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1d7c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d7c90: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1d7c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d7c94: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1d7c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d7c98: 0xfba500a0  sqc2        $vf5, 0xA0($sp)
    ctx->pc = 0x1d7c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1d7c9c: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1d7c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1d7ca0: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1d7ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1d7ca4: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1d7ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d7ca8: 0x7ba60110  lq          $a2, 0x110($sp)
    ctx->pc = 0x1d7ca8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d7cac: 0x0  nop
    ctx->pc = 0x1d7cacu;
    // NOP
label_1d7cb0:
    // 0x1d7cb0: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1d7cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1d7cb4: 0x8e850080  lw          $a1, 0x80($s4)
    ctx->pc = 0x1d7cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x1d7cb8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1d7cb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7cbc: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x1d7cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x1d7cc0: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x1d7cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x1d7cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d7cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7cc8: 0xdce4bdf8  ld          $a0, -0x4208($a3)
    ctx->pc = 0x1d7cc8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 4294950392)));
    // 0x1d7ccc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1d7cccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7cd0: 0x84a30060  lh          $v1, 0x60($a1)
    ctx->pc = 0x1d7cd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1d7cd4: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x1d7cd4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x1d7cd8: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x1d7cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x1d7cdc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1d7cdcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1d7ce0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1d7ce0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7ce4: 0x83300a  movz        $a2, $a0, $v1
    ctx->pc = 0x1d7ce4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x1d7ce8: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x1d7ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
    // 0x1d7cec: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1d7cecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7cf0: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x1d7cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x1d7cf4: 0xfce4bdf8  sd          $a0, -0x4208($a3)
    ctx->pc = 0x1d7cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294950392), GPR_U64(ctx, 4));
    // 0x1d7cf8: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x1d7cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x1d7cfc: 0xfca60068  sd          $a2, 0x68($a1)
    ctx->pc = 0x1d7cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 6));
    // 0x1d7d00: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d7d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d7d04: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1d7d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1d7d08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7d0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7d10: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1d7d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1d7d14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7D14u;
    {
        const bool branch_taken_0x1d7d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7D14u;
            // 0x1d7d18: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d14) {
            ctx->pc = 0x1D7D28u;
            goto label_1d7d28;
        }
    }
    ctx->pc = 0x1D7D1Cu;
    // 0x1d7d1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d7d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7D20u;
    {
        const bool branch_taken_0x1d7d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7D20u;
            // 0x1d7d24: 0x44300b  movn        $a2, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d20) {
            ctx->pc = 0x1D7D2Cu;
            goto label_1d7d2c;
        }
    }
    ctx->pc = 0x1D7D28u;
label_1d7d28:
    // 0x1d7d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d7d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7d2c:
    // 0x1d7d2c: 0xdcc200c0  ld          $v0, 0xC0($a2)
    ctx->pc = 0x1d7d2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x1d7d30: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x1d7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1d7d34: 0x24c400c0  addiu       $a0, $a2, 0xC0
    ctx->pc = 0x1d7d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x1d7d38: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x1d7d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x1d7d3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d7d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d7d40: 0xfcc200c0  sd          $v0, 0xC0($a2)
    ctx->pc = 0x1d7d40u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 192), GPR_U64(ctx, 2));
    // 0x1d7d44: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x1d7d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x1d7d48: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x1d7d48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d7d4c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1d7d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1d7d50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7D50u;
    {
        const bool branch_taken_0x1d7d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7D50u;
            // 0x1d7d54: 0xfc820008  sd          $v0, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d50) {
            ctx->pc = 0x1D7D68u;
            goto label_1d7d68;
        }
    }
    ctx->pc = 0x1D7D58u;
    // 0x1d7d58: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d7d5c: 0xd8c200b0  lqc2        $vf2, 0xB0($a2)
    ctx->pc = 0x1d7d5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x1d7d60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7D60u;
    {
        const bool branch_taken_0x1d7d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7D60u;
            // 0x1d7d64: 0x24422c90  addiu       $v0, $v0, 0x2C90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d60) {
            ctx->pc = 0x1D7D74u;
            goto label_1d7d74;
        }
    }
    ctx->pc = 0x1D7D68u;
label_1d7d68:
    // 0x1d7d68: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d7d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d7d6c: 0xd8c200b0  lqc2        $vf2, 0xB0($a2)
    ctx->pc = 0x1d7d6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x1d7d70: 0x24422ca0  addiu       $v0, $v0, 0x2CA0
    ctx->pc = 0x1d7d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11424));
label_1d7d74:
    // 0x1d7d74: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d7d74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7d78: 0x4a21133c  vmove.w     $vf1, $vf2
    ctx->pc = 0x1d7d78u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1d7d7c: 0xf8c100b0  sqc2        $vf1, 0xB0($a2)
    ctx->pc = 0x1d7d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d7d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7d84: 0x8e850080  lw          $a1, 0x80($s4)
    ctx->pc = 0x1d7d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x1d7d88: 0xae820084  sw          $v0, 0x84($s4)
    ctx->pc = 0x1d7d88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
    // 0x1d7d8c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1d7d8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d7d90: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d7d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d7d94: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D7D94u;
    {
        const bool branch_taken_0x1d7d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7D94u;
            // 0x1d7d98: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d94) {
            ctx->pc = 0x1D7E0Cu;
            goto label_1d7e0c;
        }
    }
    ctx->pc = 0x1D7D9Cu;
    // 0x1d7d9c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1d7d9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d7da0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d7da4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1d7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1d7da8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d7da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d7dac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d7dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d7db0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d7db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7db4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d7db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d7db8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1d7db8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d7dbc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1d7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1d7dc0: 0x40f809  jalr        $v0
    ctx->pc = 0x1D7DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D7DC8u);
        ctx->pc = 0x1D7DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7DC0u;
            // 0x1d7dc4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D7DC8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7980u: goto label_1d7980;
            case 0x1D7A4Cu: goto label_1d7a4c;
            case 0x1D7AA8u: goto label_1d7aa8;
            case 0x1D7AB8u: goto label_1d7ab8;
            case 0x1D7AF0u: goto label_1d7af0;
            case 0x1D7B14u: goto label_1d7b14;
            case 0x1D7B34u: goto label_1d7b34;
            case 0x1D7B50u: goto label_1d7b50;
            case 0x1D7B54u: goto label_1d7b54;
            case 0x1D7B8Cu: goto label_1d7b8c;
            case 0x1D7B90u: goto label_1d7b90;
            case 0x1D7BACu: goto label_1d7bac;
            case 0x1D7CB0u: goto label_1d7cb0;
            case 0x1D7D28u: goto label_1d7d28;
            case 0x1D7D2Cu: goto label_1d7d2c;
            case 0x1D7D68u: goto label_1d7d68;
            case 0x1D7D74u: goto label_1d7d74;
            case 0x1D7DD0u: goto label_1d7dd0;
            case 0x1D7E08u: goto label_1d7e08;
            case 0x1D7E0Cu: goto label_1d7e0c;
            case 0x1D7E10u: goto label_1d7e10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D7DC8u; }
            if (ctx->pc != 0x1D7DC8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D7DC8u;
    // 0x1d7dc8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D7DC8u;
    {
        const bool branch_taken_0x1d7dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7DC8u;
            // 0x1d7dcc: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7dc8) {
            ctx->pc = 0x1D7E0Cu;
            goto label_1d7e0c;
        }
    }
    ctx->pc = 0x1D7DD0u;
label_1d7dd0:
    // 0x1d7dd0: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1d7dd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d7dd4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d7dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d7dd8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D7DD8u;
    {
        const bool branch_taken_0x1d7dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7DD8u;
            // 0x1d7ddc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7dd8) {
            ctx->pc = 0x1D7E08u;
            goto label_1d7e08;
        }
    }
    ctx->pc = 0x1D7DE0u;
    // 0x1d7de0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1d7de0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d7de4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1d7de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1d7de8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d7de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d7dec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d7decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d7df0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d7df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7df4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d7df8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1d7df8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d7dfc: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1d7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d7e00: 0x40f809  jalr        $v0
    ctx->pc = 0x1D7E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D7E08u);
        ctx->pc = 0x1D7E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E00u;
            // 0x1d7e04: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D7E08u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7980u: goto label_1d7980;
            case 0x1D7A4Cu: goto label_1d7a4c;
            case 0x1D7AA8u: goto label_1d7aa8;
            case 0x1D7AB8u: goto label_1d7ab8;
            case 0x1D7AF0u: goto label_1d7af0;
            case 0x1D7B14u: goto label_1d7b14;
            case 0x1D7B34u: goto label_1d7b34;
            case 0x1D7B50u: goto label_1d7b50;
            case 0x1D7B54u: goto label_1d7b54;
            case 0x1D7B8Cu: goto label_1d7b8c;
            case 0x1D7B90u: goto label_1d7b90;
            case 0x1D7BACu: goto label_1d7bac;
            case 0x1D7CB0u: goto label_1d7cb0;
            case 0x1D7D28u: goto label_1d7d28;
            case 0x1D7D2Cu: goto label_1d7d2c;
            case 0x1D7D68u: goto label_1d7d68;
            case 0x1D7D74u: goto label_1d7d74;
            case 0x1D7DD0u: goto label_1d7dd0;
            case 0x1D7E08u: goto label_1d7e08;
            case 0x1D7E0Cu: goto label_1d7e0c;
            case 0x1D7E10u: goto label_1d7e10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E08u; }
            if (ctx->pc != 0x1D7E08u) { return; }
        }
        }
    }
    ctx->pc = 0x1D7E08u;
label_1d7e08:
    // 0x1d7e08: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x1d7e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_1d7e0c:
    // 0x1d7e0c: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x1d7e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1d7e10:
    // 0x1d7e10: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x1d7e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d7e14: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x1d7e14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d7e18: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x1d7e18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d7e1c: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x1d7e1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d7e20: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x1d7e20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1d7e24: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x1d7e24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1d7e28: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1d7e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d7e2c: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x1d7e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d7e30: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E30u;
            // 0x1d7e34: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7980u: goto label_1d7980;
            case 0x1D7A4Cu: goto label_1d7a4c;
            case 0x1D7AA8u: goto label_1d7aa8;
            case 0x1D7AB8u: goto label_1d7ab8;
            case 0x1D7AF0u: goto label_1d7af0;
            case 0x1D7B14u: goto label_1d7b14;
            case 0x1D7B34u: goto label_1d7b34;
            case 0x1D7B50u: goto label_1d7b50;
            case 0x1D7B54u: goto label_1d7b54;
            case 0x1D7B8Cu: goto label_1d7b8c;
            case 0x1D7B90u: goto label_1d7b90;
            case 0x1D7BACu: goto label_1d7bac;
            case 0x1D7CB0u: goto label_1d7cb0;
            case 0x1D7D28u: goto label_1d7d28;
            case 0x1D7D2Cu: goto label_1d7d2c;
            case 0x1D7D68u: goto label_1d7d68;
            case 0x1D7D74u: goto label_1d7d74;
            case 0x1D7DD0u: goto label_1d7dd0;
            case 0x1D7E08u: goto label_1d7e08;
            case 0x1D7E0Cu: goto label_1d7e0c;
            case 0x1D7E10u: goto label_1d7e10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D7E38u;
}
