#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CC198
// Address: 0x1cc198 - 0x1cc6e0
void sub_001CC198_0x1cc198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC198_0x1cc198");
#endif

    ctx->pc = 0x1cc198u;

    // 0x1cc198: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1cc198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1cc19c: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1cc19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x1cc1a0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1cc1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1cc1a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cc1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1a8: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1cc1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1cc1ac: 0x30feffff  andi        $fp, $a3, 0xFFFF
    ctx->pc = 0x1cc1acu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1cc1b0: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1cc1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x1cc1b4: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1cc1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x1cc1b8: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1cc1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x1cc1bc: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1cc1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x1cc1c0: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1cc1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x1cc1c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1cc1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1cc1c8: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x1cc1c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1cc1cc: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x1cc1ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x1cc1d0: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x1cc1d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1cc1d4: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1cc1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1cc1d8: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1cc1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x1cc1dc: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x1cc1dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cc1e0: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x1cc1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x1cc1e4: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x1cc1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cc1e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cc1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc1ec: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1cc1ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cc1f0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC1F0u;
    {
        const bool branch_taken_0x1cc1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CC1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC1F0u;
            // 0x1cc1f4: 0x8e320030  lw          $s2, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1f0) {
            ctx->pc = 0x1CC200u;
            goto label_1cc200;
        }
    }
    ctx->pc = 0x1CC1F8u;
    // 0x1cc1f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC1F8u;
    {
        const bool branch_taken_0x1cc1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC1F8u;
            // 0x1cc1fc: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1f8) {
            ctx->pc = 0x1CC220u;
            goto label_1cc220;
        }
    }
    ctx->pc = 0x1CC200u;
label_1cc200:
    // 0x1cc200: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1cc200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1cc204: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1cc204u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cc208: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1cc208u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1cc20c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC20Cu;
    {
        const bool branch_taken_0x1cc20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CC210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC20Cu;
            // 0x1cc210: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc20c) {
            ctx->pc = 0x1CC220u;
            goto label_1cc220;
        }
    }
    ctx->pc = 0x1CC214u;
    // 0x1cc214: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CC214u;
    SET_GPR_U32(ctx, 31, 0x1CC21Cu);
    ctx->pc = 0x1CC218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC214u;
            // 0x1cc218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC21Cu; }
        if (ctx->pc != 0x1CC21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC21Cu; }
        if (ctx->pc != 0x1CC21Cu) { return; }
    }
    ctx->pc = 0x1CC21Cu;
    // 0x1cc21c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1cc21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1cc220:
    // 0x1cc220: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1cc220u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1cc224: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1cc224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1cc228: 0x8e830174  lw          $v1, 0x174($s4)
    ctx->pc = 0x1cc228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
    // 0x1cc22c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1cc22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1cc230: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC230u;
    {
        const bool branch_taken_0x1cc230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC230u;
            // 0x1cc234: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc230) {
            ctx->pc = 0x1CC244u;
            goto label_1cc244;
        }
    }
    ctx->pc = 0x1CC238u;
    // 0x1cc238: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1cc238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1cc23c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CC23Cu;
    {
        const bool branch_taken_0x1cc23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc23c) {
            ctx->pc = 0x1CC240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC23Cu;
            // 0x1cc240: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC288u;
            goto label_1cc288;
        }
    }
    ctx->pc = 0x1CC244u;
label_1cc244:
    // 0x1cc244: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1cc244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1cc248: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1cc248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1cc24c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1cc24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1cc250: 0x40f809  jalr        $v0
    ctx->pc = 0x1CC250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC258u);
        ctx->pc = 0x1CC254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC250u;
            // 0x1cc254: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC258u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC200u: goto label_1cc200;
            case 0x1CC220u: goto label_1cc220;
            case 0x1CC244u: goto label_1cc244;
            case 0x1CC288u: goto label_1cc288;
            case 0x1CC3A0u: goto label_1cc3a0;
            case 0x1CC3B8u: goto label_1cc3b8;
            case 0x1CC428u: goto label_1cc428;
            case 0x1CC478u: goto label_1cc478;
            case 0x1CC484u: goto label_1cc484;
            case 0x1CC4E0u: goto label_1cc4e0;
            case 0x1CC5C8u: goto label_1cc5c8;
            case 0x1CC5FCu: goto label_1cc5fc;
            case 0x1CC61Cu: goto label_1cc61c;
            case 0x1CC63Cu: goto label_1cc63c;
            case 0x1CC660u: goto label_1cc660;
            case 0x1CC694u: goto label_1cc694;
            case 0x1CC6A4u: goto label_1cc6a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC258u; }
            if (ctx->pc != 0x1CC258u) { return; }
        }
        }
    }
    ctx->pc = 0x1CC258u;
    // 0x1cc258: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1cc258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1cc25c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc260: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cc260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cc264: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cc264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cc268: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1cc268u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1cc26c: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1cc26cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cc270: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x1cc270u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cc274: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1cc274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc278: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1cc278u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc27c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1cc27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cc280: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1cc280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1cc284: 0x0  nop
    ctx->pc = 0x1cc284u;
    // NOP
label_1cc288:
    // 0x1cc288: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1cc288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc28c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1cc28cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1cc290: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1cc290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1cc294: 0x40f809  jalr        $v0
    ctx->pc = 0x1CC294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC29Cu);
        ctx->pc = 0x1CC298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC294u;
            // 0x1cc298: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC29Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC200u: goto label_1cc200;
            case 0x1CC220u: goto label_1cc220;
            case 0x1CC244u: goto label_1cc244;
            case 0x1CC288u: goto label_1cc288;
            case 0x1CC3A0u: goto label_1cc3a0;
            case 0x1CC3B8u: goto label_1cc3b8;
            case 0x1CC428u: goto label_1cc428;
            case 0x1CC478u: goto label_1cc478;
            case 0x1CC484u: goto label_1cc484;
            case 0x1CC4E0u: goto label_1cc4e0;
            case 0x1CC5C8u: goto label_1cc5c8;
            case 0x1CC5FCu: goto label_1cc5fc;
            case 0x1CC61Cu: goto label_1cc61c;
            case 0x1CC63Cu: goto label_1cc63c;
            case 0x1CC660u: goto label_1cc660;
            case 0x1CC694u: goto label_1cc694;
            case 0x1CC6A4u: goto label_1cc6a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC29Cu; }
            if (ctx->pc != 0x1CC29Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1CC29Cu;
    // 0x1cc29c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1cc29cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1cc2a0: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1cc2a0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1cc2a4: 0xc074ce4  jal         func_1D3390
    ctx->pc = 0x1CC2A4u;
    SET_GPR_U32(ctx, 31, 0x1CC2ACu);
    ctx->pc = 0x1CC2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC2A4u;
            // 0x1cc2a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3390u;
    if (runtime->hasFunction(0x1D3390u)) {
        auto targetFn = runtime->lookupFunction(0x1D3390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2ACu; }
        if (ctx->pc != 0x1CC2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3390_0x1d3390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2ACu; }
        if (ctx->pc != 0x1CC2ACu) { return; }
    }
    ctx->pc = 0x1CC2ACu;
    // 0x1cc2ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cc2acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2b0: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1cc2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1cc2b4: 0xc061eee  jal         func_187BB8
    ctx->pc = 0x1CC2B4u;
    SET_GPR_U32(ctx, 31, 0x1CC2BCu);
    ctx->pc = 0x1CC2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC2B4u;
            // 0x1cc2b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187BB8u;
    if (runtime->hasFunction(0x187BB8u)) {
        auto targetFn = runtime->lookupFunction(0x187BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2BCu; }
        if (ctx->pc != 0x1CC2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187BB8_0x187bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2BCu; }
        if (ctx->pc != 0x1CC2BCu) { return; }
    }
    ctx->pc = 0x1CC2BCu;
    // 0x1cc2bc: 0x8fa80060  lw          $t0, 0x60($sp)
    ctx->pc = 0x1cc2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cc2c0: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x1cc2c0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1cc2c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2c8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1cc2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cc2cc: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1cc2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cc2d0: 0xc0739a6  jal         func_1CE698
    ctx->pc = 0x1CC2D0u;
    SET_GPR_U32(ctx, 31, 0x1CC2D8u);
    ctx->pc = 0x1CC2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC2D0u;
            // 0x1cc2d4: 0x27a90040  addiu       $t1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE698u;
    if (runtime->hasFunction(0x1CE698u)) {
        auto targetFn = runtime->lookupFunction(0x1CE698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2D8u; }
        if (ctx->pc != 0x1CC2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE698_0x1ce698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2D8u; }
        if (ctx->pc != 0x1CC2D8u) { return; }
    }
    ctx->pc = 0x1CC2D8u;
    // 0x1cc2d8: 0x127e0053  beq         $s3, $fp, . + 4 + (0x53 << 2)
    ctx->pc = 0x1CC2D8u;
    {
        const bool branch_taken_0x1cc2d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 30));
        ctx->pc = 0x1CC2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC2D8u;
            // 0x1cc2dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2d8) {
            ctx->pc = 0x1CC428u;
            goto label_1cc428;
        }
    }
    ctx->pc = 0x1CC2E0u;
    // 0x1cc2e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cc2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2e4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1cc2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2e8: 0xc074a7e  jal         func_1D29F8
    ctx->pc = 0x1CC2E8u;
    SET_GPR_U32(ctx, 31, 0x1CC2F0u);
    ctx->pc = 0x1CC2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC2E8u;
            // 0x1cc2ec: 0x24160014  addiu       $s6, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D29F8u;
    if (runtime->hasFunction(0x1D29F8u)) {
        auto targetFn = runtime->lookupFunction(0x1D29F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2F0u; }
        if (ctx->pc != 0x1CC2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D29F8_0x1d29f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2F0u; }
        if (ctx->pc != 0x1CC2F0u) { return; }
    }
    ctx->pc = 0x1CC2F0u;
    // 0x1cc2f0: 0xa2220089  sb          $v0, 0x89($s1)
    ctx->pc = 0x1cc2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cc2f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1cc2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cc2f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1cc2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1cc2fc: 0x24455ee0  addiu       $a1, $v0, 0x5EE0
    ctx->pc = 0x1cc2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24288));
    // 0x1cc300: 0x92220089  lbu         $v0, 0x89($s1)
    ctx->pc = 0x1cc300u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 137)));
    // 0x1cc304: 0x562018  mult        $a0, $v0, $s6
    ctx->pc = 0x1cc304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1cc308: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1cc308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1cc30c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1cc30cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc310: 0x10430045  beq         $v0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1CC310u;
    {
        const bool branch_taken_0x1cc310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CC314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC310u;
            // 0x1cc314: 0x7ba60040  lq          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc310) {
            ctx->pc = 0x1CC428u;
            goto label_1cc428;
        }
    }
    ctx->pc = 0x1CC318u;
    // 0x1cc318: 0x24b50002  addiu       $s5, $a1, 0x2
    ctx->pc = 0x1cc318u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1cc31c: 0x951021  addu        $v0, $a0, $s5
    ctx->pc = 0x1cc31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x1cc320: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x1cc320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x1cc324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cc324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc328: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x1cc328u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc32c: 0xc091064  jal         func_244190
    ctx->pc = 0x1CC32Cu;
    SET_GPR_U32(ctx, 31, 0x1CC334u);
    ctx->pc = 0x1CC330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC32Cu;
            // 0x1cc330: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244190u;
    if (runtime->hasFunction(0x244190u)) {
        auto targetFn = runtime->lookupFunction(0x244190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC334u; }
        if (ctx->pc != 0x1CC334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244190_0x244190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC334u; }
        if (ctx->pc != 0x1CC334u) { return; }
    }
    ctx->pc = 0x1CC334u;
    // 0x1cc334: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1cc334u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cc338: 0xdba30070  lqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1cc338u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cc33c: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1cc33cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cc340: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1cc340u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cc344: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cc344u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc348: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cc348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc34c: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1cc34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1cc350: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1cc350u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cc354: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x1cc354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1cc358: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cc358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc35c: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1cc35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1cc360: 0x46010044  c1          0x10044
    ctx->pc = 0x1cc360u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cc364: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x1cc364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1cc368: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1cc368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cc36c: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x1cc36cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1cc370: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cc370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cc374: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cc374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cc378: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1cc378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc37c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cc37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cc380: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1cc380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cc384: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1cc384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1cc388: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cc388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc38c: 0x0  nop
    ctx->pc = 0x1cc38cu;
    // NOP
    // 0x1cc390: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC390u;
    {
        const bool branch_taken_0x1cc390 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CC394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC390u;
            // 0x1cc394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc390) {
            ctx->pc = 0x1CC3A0u;
            goto label_1cc3a0;
        }
    }
    ctx->pc = 0x1CC398u;
    // 0x1cc398: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cc398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc39c: 0x0  nop
    ctx->pc = 0x1cc39cu;
    // NOP
label_1cc3a0:
    // 0x1cc3a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC3A0u;
    {
        const bool branch_taken_0x1cc3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC3A0u;
            // 0x1cc3a4: 0x92220089  lbu         $v0, 0x89($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 137)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3a0) {
            ctx->pc = 0x1CC3B8u;
            goto label_1cc3b8;
        }
    }
    ctx->pc = 0x1CC3A8u;
    // 0x1cc3a8: 0x561818  mult        $v1, $v0, $s6
    ctx->pc = 0x1cc3a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cc3ac: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x1cc3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1cc3b0: 0x94530000  lhu         $s3, 0x0($v0)
    ctx->pc = 0x1cc3b0u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc3b4: 0x92220089  lbu         $v0, 0x89($s1)
    ctx->pc = 0x1cc3b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 137)));
label_1cc3b8:
    // 0x1cc3b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1cc3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3bc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1cc3bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3c0: 0x561818  mult        $v1, $v0, $s6
    ctx->pc = 0x1cc3c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cc3c4: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x1cc3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1cc3c8: 0xc061eee  jal         func_187BB8
    ctx->pc = 0x1CC3C8u;
    SET_GPR_U32(ctx, 31, 0x1CC3D0u);
    ctx->pc = 0x1CC3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC3C8u;
            // 0x1cc3cc: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187BB8u;
    if (runtime->hasFunction(0x187BB8u)) {
        auto targetFn = runtime->lookupFunction(0x187BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC3D0u; }
        if (ctx->pc != 0x1CC3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187BB8_0x187bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC3D0u; }
        if (ctx->pc != 0x1CC3D0u) { return; }
    }
    ctx->pc = 0x1CC3D0u;
    // 0x1cc3d0: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1cc3d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cc3d4: 0x92220089  lbu         $v0, 0x89($s1)
    ctx->pc = 0x1cc3d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 137)));
    // 0x1cc3d8: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1cc3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cc3dc: 0x561818  mult        $v1, $v0, $s6
    ctx->pc = 0x1cc3dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cc3e0: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1cc3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1cc3e4: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x1cc3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1cc3e8: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x1cc3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1cc3ec: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x1cc3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1cc3f0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x1cc3f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc3f4: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x1cc3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1cc3f8: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1cc3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1cc3fc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1cc3fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cc400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cc400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc404: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1cc404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1cc408: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cc408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc40c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1cc40cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1cc410: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1cc410u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cc414: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1cc414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1cc418: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1cc418u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1cc41c: 0x4a2110c0  vaddx.w     $vf3, $vf2, $vf1x
    ctx->pc = 0x1cc41cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cc420: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1cc420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cc424: 0x0  nop
    ctx->pc = 0x1cc424u;
    // NOP
label_1cc428:
    // 0x1cc428: 0x8e820174  lw          $v0, 0x174($s4)
    ctx->pc = 0x1cc428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
    // 0x1cc42c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1cc42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1cc430: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CC430u;
    {
        const bool branch_taken_0x1cc430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc430) {
            ctx->pc = 0x1CC478u;
            goto label_1cc478;
        }
    }
    ctx->pc = 0x1CC438u;
    // 0x1cc438: 0x16e00012  bnez        $s7, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CC438u;
    {
        const bool branch_taken_0x1cc438 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC438u;
            // 0x1cc43c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc438) {
            ctx->pc = 0x1CC484u;
            goto label_1cc484;
        }
    }
    ctx->pc = 0x1CC440u;
    // 0x1cc440: 0xc061eee  jal         func_187BB8
    ctx->pc = 0x1CC440u;
    SET_GPR_U32(ctx, 31, 0x1CC448u);
    ctx->pc = 0x1CC444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC440u;
            // 0x1cc444: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187BB8u;
    if (runtime->hasFunction(0x187BB8u)) {
        auto targetFn = runtime->lookupFunction(0x187BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC448u; }
        if (ctx->pc != 0x1CC448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187BB8_0x187bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC448u; }
        if (ctx->pc != 0x1CC448u) { return; }
    }
    ctx->pc = 0x1CC448u;
    // 0x1cc448: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cc448u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cc44c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1cc44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1cc450: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc454: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1cc454u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc458: 0x4a811045  vsuby.y     $vf1, $vf2, $vf1y
    ctx->pc = 0x1cc458u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc45c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1cc45cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cc460: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1cc460u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1cc464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc468: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cc468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc46c: 0x0  nop
    ctx->pc = 0x1cc46cu;
    // NOP
    // 0x1cc470: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CC470u;
    {
        const bool branch_taken_0x1cc470 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc470) {
            ctx->pc = 0x1CC474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC470u;
            // 0x1cc474: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC478u;
            goto label_1cc478;
        }
    }
    ctx->pc = 0x1CC478u;
label_1cc478:
    // 0x1cc478: 0x12e00019  beqz        $s7, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CC478u;
    {
        const bool branch_taken_0x1cc478 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC478u;
            // 0x1cc47c: 0x7ba50040  lq          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc478) {
            ctx->pc = 0x1CC4E0u;
            goto label_1cc4e0;
        }
    }
    ctx->pc = 0x1CC480u;
    // 0x1cc480: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1cc480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1cc484:
    // 0x1cc484: 0xc061eee  jal         func_187BB8
    ctx->pc = 0x1CC484u;
    SET_GPR_U32(ctx, 31, 0x1CC48Cu);
    ctx->pc = 0x1CC488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC484u;
            // 0x1cc488: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187BB8u;
    if (runtime->hasFunction(0x187BB8u)) {
        auto targetFn = runtime->lookupFunction(0x187BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC48Cu; }
        if (ctx->pc != 0x1CC48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187BB8_0x187bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC48Cu; }
        if (ctx->pc != 0x1CC48Cu) { return; }
    }
    ctx->pc = 0x1CC48Cu;
    // 0x1cc48c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1cc48cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cc490: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1cc490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cc494: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1cc494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1cc498: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x1cc498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1cc49c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x1cc49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1cc4a0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1cc4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1cc4a4: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1cc4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1cc4a8: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x1cc4a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1cc4ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cc4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cc4b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1cc4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cc4b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1cc4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc4b8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cc4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cc4bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc4c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cc4c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cc4c4: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1cc4c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cc4c8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1cc4c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1cc4cc: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1cc4ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1cc4d0: 0x4a2110c0  vaddx.w     $vf3, $vf2, $vf1x
    ctx->pc = 0x1cc4d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cc4d4: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1cc4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cc4d8: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x1cc4d8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc4dc: 0x0  nop
    ctx->pc = 0x1cc4dcu;
    // NOP
label_1cc4e0:
    // 0x1cc4e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4e4: 0xc072cb8  jal         func_1CB2E0
    ctx->pc = 0x1CC4E4u;
    SET_GPR_U32(ctx, 31, 0x1CC4ECu);
    ctx->pc = 0x1CC4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC4E4u;
            // 0x1cc4e8: 0x7ba60030  lq          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB2E0u;
    if (runtime->hasFunction(0x1CB2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CB2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC4ECu; }
        if (ctx->pc != 0x1CC4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB2E0_0x1cb2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC4ECu; }
        if (ctx->pc != 0x1CC4ECu) { return; }
    }
    ctx->pc = 0x1CC4ECu;
    // 0x1cc4ec: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1CC4ECu;
    {
        const bool branch_taken_0x1cc4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc4ec) {
            ctx->pc = 0x1CC4F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC4ECu;
            // 0x1cc4f0: 0x8e830174  lw          $v1, 0x174($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC5C8u;
            goto label_1cc5c8;
        }
    }
    ctx->pc = 0x1CC4F4u;
    // 0x1cc4f4: 0x3c10002d  lui         $s0, 0x2D
    ctx->pc = 0x1cc4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)45 << 16));
    // 0x1cc4f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cc4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1cc4fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1cc4fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cc500: 0x2610b950  addiu       $s0, $s0, -0x46B0
    ctx->pc = 0x1cc500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949200));
    // 0x1cc504: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1CC504u;
    SET_GPR_U32(ctx, 31, 0x1CC50Cu);
    ctx->pc = 0x1CC508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC504u;
            // 0x1cc508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC50Cu; }
        if (ctx->pc != 0x1CC50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC50Cu; }
        if (ctx->pc != 0x1CC50Cu) { return; }
    }
    ctx->pc = 0x1CC50Cu;
    // 0x1cc50c: 0x4600a581  sub.s       $f22, $f20, $f0
    ctx->pc = 0x1cc50cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1cc510: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1CC510u;
    SET_GPR_U32(ctx, 31, 0x1CC518u);
    ctx->pc = 0x1CC514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC510u;
            // 0x1cc514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC518u; }
        if (ctx->pc != 0x1CC518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC518u; }
        if (ctx->pc != 0x1CC518u) { return; }
    }
    ctx->pc = 0x1CC518u;
    // 0x1cc518: 0x4600a541  sub.s       $f21, $f20, $f0
    ctx->pc = 0x1cc518u;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1cc51c: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1CC51Cu;
    SET_GPR_U32(ctx, 31, 0x1CC524u);
    ctx->pc = 0x1CC520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC51Cu;
            // 0x1cc520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC524u; }
        if (ctx->pc != 0x1CC524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC524u; }
        if (ctx->pc != 0x1CC524u) { return; }
    }
    ctx->pc = 0x1CC524u;
    // 0x1cc524: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1cc524u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1cc528: 0x4407a800  mfc1        $a3, $f21
    ctx->pc = 0x1cc528u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1cc52c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc530: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x1cc530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1cc534: 0x70e21b89  pcpyld      $v1, $a3, $v0
    ctx->pc = 0x1cc534u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1cc538: 0x4407a000  mfc1        $a3, $f20
    ctx->pc = 0x1cc538u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1cc53c: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x1cc53cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1cc540: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1cc540u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1cc544: 0x3c043ccc  lui         $a0, 0x3CCC
    ctx->pc = 0x1cc544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15564 << 16));
    // 0x1cc548: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x1cc548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1cc54c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1cc54cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1cc550: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1cc550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1cc554: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1cc554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1cc558: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1cc558u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cc55c: 0x4be20898  vmulx.xyzw  $vf2, $vf1, $vf2x
    ctx->pc = 0x1cc55cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cc560: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1cc560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1cc564: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1cc564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cc568: 0xfa230010  sqc2        $vf3, 0x10($s1)
    ctx->pc = 0x1cc568u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cc56c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1cc56cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cc570: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cc570u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc574: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cc574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc578: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cc578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cc57c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc580: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1cc580u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cc584: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cc584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc588: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cc588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc58c: 0x0  nop
    ctx->pc = 0x1cc58cu;
    // NOP
    // 0x1cc590: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x1CC590u;
    {
        const bool branch_taken_0x1cc590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc590) {
            ctx->pc = 0x1CC594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC590u;
            // 0x1cc594: 0x8e830174  lw          $v1, 0x174($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC5C8u;
            goto label_1cc5c8;
        }
    }
    ctx->pc = 0x1CC598u;
    // 0x1cc598: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cc598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc59c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cc59cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc5a0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1cc5a0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cc5a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cc5a4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cc5a8: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1cc5a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cc5ac: 0x4a0002ff  vnop
    ctx->pc = 0x1cc5acu;
    // NOP operation, no action needed for VU0
    // 0x1cc5b0: 0x4a0002ff  vnop
    ctx->pc = 0x1cc5b0u;
    // NOP operation, no action needed for VU0
    // 0x1cc5b4: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1cc5b4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1cc5b8: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1cc5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cc5bc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1cc5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cc5c0: 0x8e830174  lw          $v1, 0x174($s4)
    ctx->pc = 0x1cc5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
    // 0x1cc5c4: 0x0  nop
    ctx->pc = 0x1cc5c4u;
    // NOP
label_1cc5c8:
    // 0x1cc5c8: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1cc5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1cc5cc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CC5CCu;
    {
        const bool branch_taken_0x1cc5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC5CCu;
            // 0x1cc5d0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5cc) {
            ctx->pc = 0x1CC63Cu;
            goto label_1cc63c;
        }
    }
    ctx->pc = 0x1CC5D4u;
    // 0x1cc5d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1cc5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1cc5d8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CC5D8u;
    {
        const bool branch_taken_0x1cc5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC5D8u;
            // 0x1cc5dc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5d8) {
            ctx->pc = 0x1CC63Cu;
            goto label_1cc63c;
        }
    }
    ctx->pc = 0x1CC5E0u;
    // 0x1cc5e0: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x1cc5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cc5e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1cc5e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc5e8: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1cc5e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cc5ec: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC5ECu;
    {
        const bool branch_taken_0x1cc5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CC5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC5ECu;
            // 0x1cc5f0: 0x7bb20030  lq          $s2, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5ec) {
            ctx->pc = 0x1CC5FCu;
            goto label_1cc5fc;
        }
    }
    ctx->pc = 0x1CC5F4u;
    // 0x1cc5f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC5F4u;
    {
        const bool branch_taken_0x1cc5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC5F4u;
            // 0x1cc5f8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5f4) {
            ctx->pc = 0x1CC61Cu;
            goto label_1cc61c;
        }
    }
    ctx->pc = 0x1CC5FCu;
label_1cc5fc:
    // 0x1cc5fc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1cc5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1cc600: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1cc600u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cc604: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1cc604u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1cc608: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC608u;
    {
        const bool branch_taken_0x1cc608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CC60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC608u;
            // 0x1cc60c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc608) {
            ctx->pc = 0x1CC61Cu;
            goto label_1cc61c;
        }
    }
    ctx->pc = 0x1CC610u;
    // 0x1cc610: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CC610u;
    SET_GPR_U32(ctx, 31, 0x1CC618u);
    ctx->pc = 0x1CC614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC610u;
            // 0x1cc614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC618u; }
        if (ctx->pc != 0x1CC618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC618u; }
        if (ctx->pc != 0x1CC618u) { return; }
    }
    ctx->pc = 0x1CC618u;
    // 0x1cc618: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1cc618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1cc61c:
    // 0x1cc61c: 0x78880030  lq          $t0, 0x30($a0)
    ctx->pc = 0x1cc61cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1cc620: 0x70123ca9  por         $a3, $zero, $s2
    ctx->pc = 0x1cc620u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x1cc624: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1cc624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cc628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc62c: 0xc07340c  jal         func_1CD030
    ctx->pc = 0x1CC62Cu;
    SET_GPR_U32(ctx, 31, 0x1CC634u);
    ctx->pc = 0x1CC630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC62Cu;
            // 0x1cc630: 0x8fa60064  lw          $a2, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD030u;
    if (runtime->hasFunction(0x1CD030u)) {
        auto targetFn = runtime->lookupFunction(0x1CD030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC634u; }
        if (ctx->pc != 0x1CC634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD030_0x1cd030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC634u; }
        if (ctx->pc != 0x1CC634u) { return; }
    }
    ctx->pc = 0x1CC634u;
    // 0x1cc634: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CC634u;
    {
        const bool branch_taken_0x1cc634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC634u;
            // 0x1cc638: 0x92220089  lbu         $v0, 0x89($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 137)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc634) {
            ctx->pc = 0x1CC660u;
            goto label_1cc660;
        }
    }
    ctx->pc = 0x1CC63Cu;
label_1cc63c:
    // 0x1cc63c: 0x27e4026  xor         $t0, $s3, $fp
    ctx->pc = 0x1cc63cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 30));
    // 0x1cc640: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x1cc640u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc644: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1cc644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cc648: 0x2d080001  sltiu       $t0, $t0, 0x1
    ctx->pc = 0x1cc648u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1cc64c: 0x8fa70064  lw          $a3, 0x64($sp)
    ctx->pc = 0x1cc64cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1cc650: 0xc073b84  jal         func_1CEE10
    ctx->pc = 0x1CC650u;
    SET_GPR_U32(ctx, 31, 0x1CC658u);
    ctx->pc = 0x1CC654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC650u;
            // 0x1cc654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CEE10u;
    if (runtime->hasFunction(0x1CEE10u)) {
        auto targetFn = runtime->lookupFunction(0x1CEE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC658u; }
        if (ctx->pc != 0x1CC658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CEE10_0x1cee10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC658u; }
        if (ctx->pc != 0x1CC658u) { return; }
    }
    ctx->pc = 0x1CC658u;
    // 0x1cc658: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1cc658u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc65c: 0x92220089  lbu         $v0, 0x89($s1)
    ctx->pc = 0x1cc65cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 137)));
label_1cc660:
    // 0x1cc660: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x1cc660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1cc664: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CC664u;
    {
        const bool branch_taken_0x1cc664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC664u;
            // 0x1cc668: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc664) {
            ctx->pc = 0x1CC694u;
            goto label_1cc694;
        }
    }
    ctx->pc = 0x1CC66Cu;
    // 0x1cc66c: 0x92230089  lbu         $v1, 0x89($s1)
    ctx->pc = 0x1cc66cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 137)));
    // 0x1cc670: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1cc670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1cc674: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cc674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cc678: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1cc678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cc67c: 0x24425ee0  addiu       $v0, $v0, 0x5EE0
    ctx->pc = 0x1cc67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24288));
    // 0x1cc680: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1cc680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cc684: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cc684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cc688: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x1cc688u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1cc68c: 0xa2240089  sb          $a0, 0x89($s1)
    ctx->pc = 0x1cc68cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cc690: 0xa220008a  sb          $zero, 0x8A($s1)
    ctx->pc = 0x1cc690u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 0));
label_1cc694:
    // 0x1cc694: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC694u;
    {
        const bool branch_taken_0x1cc694 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC694u;
            // 0x1cc698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc694) {
            ctx->pc = 0x1CC6A4u;
            goto label_1cc6a4;
        }
    }
    ctx->pc = 0x1CC69Cu;
    // 0x1cc69c: 0x27e1026  xor         $v0, $s3, $fp
    ctx->pc = 0x1cc69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 30));
    // 0x1cc6a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1cc6a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1cc6a4:
    // 0x1cc6a4: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1cc6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1cc6a8: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1cc6a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1cc6ac: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1cc6acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1cc6b0: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1cc6b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cc6b4: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1cc6b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cc6b8: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1cc6b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cc6bc: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1cc6bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cc6c0: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1cc6c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cc6c4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1cc6c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cc6c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1cc6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cc6cc: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x1cc6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1cc6d0: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x1cc6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cc6d4: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1cc6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cc6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC6D8u;
            // 0x1cc6dc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC200u: goto label_1cc200;
            case 0x1CC220u: goto label_1cc220;
            case 0x1CC244u: goto label_1cc244;
            case 0x1CC288u: goto label_1cc288;
            case 0x1CC3A0u: goto label_1cc3a0;
            case 0x1CC3B8u: goto label_1cc3b8;
            case 0x1CC428u: goto label_1cc428;
            case 0x1CC478u: goto label_1cc478;
            case 0x1CC484u: goto label_1cc484;
            case 0x1CC4E0u: goto label_1cc4e0;
            case 0x1CC5C8u: goto label_1cc5c8;
            case 0x1CC5FCu: goto label_1cc5fc;
            case 0x1CC61Cu: goto label_1cc61c;
            case 0x1CC63Cu: goto label_1cc63c;
            case 0x1CC660u: goto label_1cc660;
            case 0x1CC694u: goto label_1cc694;
            case 0x1CC6A4u: goto label_1cc6a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC6E0u;
}
