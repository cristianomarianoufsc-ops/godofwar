#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011E5E8
// Address: 0x11e5e8 - 0x11e7b0
void sub_0011E5E8_0x11e5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E5E8_0x11e5e8");
#endif

    ctx->pc = 0x11e5e8u;

    // 0x11e5e8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x11e5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x11e5ec: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x11e5ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x11e5f0: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x11e5f0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x11e5f4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x11e5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x11e5f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11e5f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e5fc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x11e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x11e600: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x11e600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x11e604: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x11e604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x11e608: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x11e608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x11e60c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x11e60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x11e610: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11e610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11e614: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x11e614u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x11e618: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x11e618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e61c: 0x3c15002c  lui         $s5, 0x2C
    ctx->pc = 0x11e61cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)44 << 16));
    // 0x11e620: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x11e620u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x11e624: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x11e624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x11e628: 0x2610f170  addiu       $s0, $s0, -0xE90
    ctx->pc = 0x11e628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963568));
    // 0x11e62c: 0xc4541440  lwc1        $f20, 0x1440($v0)
    ctx->pc = 0x11e62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11e630: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x11e630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11e634: 0x26a27790  addiu       $v0, $s5, 0x7790
    ctx->pc = 0x11e634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 30608));
    // 0x11e638: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x11e638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x11e63c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e640: 0x30740002  andi        $s4, $v1, 0x2
    ctx->pc = 0x11e640u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x11e644: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x11e644u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x11e648: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x11e648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x11e64c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11e64cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e650: 0xa4400034  sh          $zero, 0x34($v0)
    ctx->pc = 0x11e650u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x11e654: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x11e654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x11e658: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x11e658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x11e65c: 0xc08f42a  jal         func_23D0A8
    ctx->pc = 0x11E65Cu;
    SET_GPR_U32(ctx, 31, 0x11E664u);
    ctx->pc = 0x11E660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E65Cu;
            // 0x11e660: 0xa4400036  sh          $zero, 0x36($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D0A8u;
    if (runtime->hasFunction(0x23D0A8u)) {
        auto targetFn = runtime->lookupFunction(0x23D0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E664u; }
        if (ctx->pc != 0x11E664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23d0a8_0x23d0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E664u; }
        if (ctx->pc != 0x11E664u) { return; }
    }
    ctx->pc = 0x11E664u;
    // 0x11e664: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x11e664u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e668: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x11e668u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x11e66c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x11e66cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11e670: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x11e670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x11e674: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x11e674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x11e678: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x11e678u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x11e67c: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x11e67cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e680: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x11e680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11e684: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x11e684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e68c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x11e68cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e690: 0xc047824  jal         func_11E090
    ctx->pc = 0x11E690u;
    SET_GPR_U32(ctx, 31, 0x11E698u);
    ctx->pc = 0x11E694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E690u;
            // 0x11e694: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E090u;
    if (runtime->hasFunction(0x11E090u)) {
        auto targetFn = runtime->lookupFunction(0x11E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E698u; }
        if (ctx->pc != 0x11E698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E090_0x11e090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E698u; }
        if (ctx->pc != 0x11E698u) { return; }
    }
    ctx->pc = 0x11E698u;
    // 0x11e698: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11e698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e69c: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x11E69Cu;
    {
        const bool branch_taken_0x11e69c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E69Cu;
            // 0x11e6a0: 0x8e130014  lw          $s3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e69c) {
            ctx->pc = 0x11E74Cu;
            goto label_11e74c;
        }
    }
    ctx->pc = 0x11E6A4u;
    // 0x11e6a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11e6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e6a8:
    // 0x11e6a8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E6A8u;
    {
        const bool branch_taken_0x11e6a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6A8u;
            // 0x11e6ac: 0x8c860018  lw          $a2, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6a8) {
            ctx->pc = 0x11E6B8u;
            goto label_11e6b8;
        }
    }
    ctx->pc = 0x11E6B0u;
    // 0x11e6b0: 0x52660023  beql        $s3, $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x11E6B0u;
    {
        const bool branch_taken_0x11e6b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 6));
        if (branch_taken_0x11e6b0) {
            ctx->pc = 0x11E6B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6B0u;
            // 0x11e6b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E740u;
            goto label_11e740;
        }
    }
    ctx->pc = 0x11E6B8u;
label_11e6b8:
    // 0x11e6b8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x11e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x11e6bc: 0x26b07790  addiu       $s0, $s5, 0x7790
    ctx->pc = 0x11e6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 30608));
    // 0x11e6c0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x11e6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x11e6c4: 0x7ba50050  lq          $a1, 0x50($sp)
    ctx->pc = 0x11e6c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e6c8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x11e6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x11e6cc: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x11e6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x11e6d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11e6d4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x11e6d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11e6d8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x11e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x11e6dc: 0x40f809  jalr        $v0
    ctx->pc = 0x11E6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E6E4u);
        ctx->pc = 0x11E6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6DCu;
            // 0x11e6e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11E6E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E6A8u: goto label_11e6a8;
            case 0x11E6B8u: goto label_11e6b8;
            case 0x11E72Cu: goto label_11e72c;
            case 0x11E730u: goto label_11e730;
            case 0x11E740u: goto label_11e740;
            case 0x11E74Cu: goto label_11e74c;
            case 0x11E784u: goto label_11e784;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11E6E4u; }
            if (ctx->pc != 0x11E6E4u) { return; }
        }
        }
    }
    ctx->pc = 0x11E6E4u;
    // 0x11e6e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11e6e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6e8: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x11E6E8u;
    {
        const bool branch_taken_0x11e6e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6E8u;
            // 0x11e6ec: 0x2469025  or          $s2, $s2, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6e8) {
            ctx->pc = 0x11E72Cu;
            goto label_11e72c;
        }
    }
    ctx->pc = 0x11E6F0u;
    // 0x11e6f0: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x11E6F0u;
    {
        const bool branch_taken_0x11e6f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6F0u;
            // 0x11e6f4: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6f0) {
            ctx->pc = 0x11E72Cu;
            goto label_11e72c;
        }
    }
    ctx->pc = 0x11E6F8u;
    // 0x11e6f8: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x11e6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e6fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11e6fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e700: 0x0  nop
    ctx->pc = 0x11e700u;
    // NOP
    // 0x11e704: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x11E704u;
    {
        const bool branch_taken_0x11e704 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11E708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E704u;
            // 0x11e708: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e704) {
            ctx->pc = 0x11E730u;
            goto label_11e730;
        }
    }
    ctx->pc = 0x11E70Cu;
    // 0x11e70c: 0x7a050030  lq          $a1, 0x30($s0)
    ctx->pc = 0x11e70cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x11e710: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x11e710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11e714: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x11e714u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11e718: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x11e718u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x11e71c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x11e71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x11e720: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x11e720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x11e724: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x11e724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x11e728: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x11e728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_11e72c:
    // 0x11e72c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_11e730:
    // 0x11e730: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E730u;
    {
        const bool branch_taken_0x11e730 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e730) {
            ctx->pc = 0x11E734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E730u;
            // 0x11e734: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E740u;
            goto label_11e740;
        }
    }
    ctx->pc = 0x11E738u;
    // 0x11e738: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11E738u;
    {
        const bool branch_taken_0x11e738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E738u;
            // 0x11e73c: 0x2412000c  addiu       $s2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e738) {
            ctx->pc = 0x11E74Cu;
            goto label_11e74c;
        }
    }
    ctx->pc = 0x11E740u;
label_11e740:
    // 0x11e740: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x11e740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11e744: 0x1480ffd8  bnez        $a0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x11E744u;
    {
        const bool branch_taken_0x11e744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e744) {
            ctx->pc = 0x11E6A8u;
            runtime->cooperativeGuestYield();
            goto label_11e6a8;
        }
    }
    ctx->pc = 0x11E74Cu;
label_11e74c:
    // 0x11e74c: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x11E74Cu;
    {
        const bool branch_taken_0x11e74c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E74Cu;
            // 0x11e750: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e74c) {
            ctx->pc = 0x11E784u;
            goto label_11e784;
        }
    }
    ctx->pc = 0x11E754u;
    // 0x11e754: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x11E754u;
    {
        const bool branch_taken_0x11e754 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E754u;
            // 0x11e758: 0x7ba40000  lq          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e754) {
            ctx->pc = 0x11E784u;
            goto label_11e784;
        }
    }
    ctx->pc = 0x11E75Cu;
    // 0x11e75c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x11e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x11e760: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x11e760u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e764: 0x24637790  addiu       $v1, $v1, 0x7790
    ctx->pc = 0x11e764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30608));
    // 0x11e768: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x11e768u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e76c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x11e76cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e770: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x11e770u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x11e774: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x11e774u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x11e778: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x11e778u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x11e77c: 0x7c650020  sq          $a1, 0x20($v1)
    ctx->pc = 0x11e77cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 5));
    // 0x11e780: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11e780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11e784:
    // 0x11e784: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x11e784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11e788: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x11e788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11e78c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x11e78cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11e790: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x11e790u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11e794: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x11e794u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11e798: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x11e798u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11e79c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11e79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11e7a0: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x11e7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11e7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x11E7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7A4u;
            // 0x11e7a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E6A8u: goto label_11e6a8;
            case 0x11E6B8u: goto label_11e6b8;
            case 0x11E72Cu: goto label_11e72c;
            case 0x11E730u: goto label_11e730;
            case 0x11E740u: goto label_11e740;
            case 0x11E74Cu: goto label_11e74c;
            case 0x11E784u: goto label_11e784;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E7ACu;
    // 0x11e7ac: 0x0  nop
    ctx->pc = 0x11e7acu;
    // NOP
}
