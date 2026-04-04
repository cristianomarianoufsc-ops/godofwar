#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CA550
// Address: 0x1ca550 - 0x1ca748
void sub_001CA550_0x1ca550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA550_0x1ca550");
#endif

    ctx->pc = 0x1ca550u;

    // 0x1ca550: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ca550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ca554: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1ca554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1ca558: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1ca558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1ca55c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ca55cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca560: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ca560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ca564: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x1ca564u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ca568: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x1ca568u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1ca56c: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x1ca56cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1ca570: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1ca570u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1ca574: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1ca574u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1ca578: 0xc6210178  lwc1        $f1, 0x178($s1)
    ctx->pc = 0x1ca578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca57c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca57cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca580: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca580u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca584: 0x0  nop
    ctx->pc = 0x1ca584u;
    // NOP
    // 0x1ca588: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA588u;
    {
        const bool branch_taken_0x1ca588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA588u;
            // 0x1ca58c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca588) {
            ctx->pc = 0x1CA598u;
            goto label_1ca598;
        }
    }
    ctx->pc = 0x1CA590u;
    // 0x1ca590: 0xc0756d4  jal         func_1D5B50
    ctx->pc = 0x1CA590u;
    SET_GPR_U32(ctx, 31, 0x1CA598u);
    ctx->pc = 0x1CA594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA590u;
            // 0x1ca594: 0x8c44cd58  lw          $a0, -0x32A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5B50u;
    if (runtime->hasFunction(0x1D5B50u)) {
        auto targetFn = runtime->lookupFunction(0x1D5B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA598u; }
        if (ctx->pc != 0x1CA598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5B50_0x1d5b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA598u; }
        if (ctx->pc != 0x1CA598u) { return; }
    }
    ctx->pc = 0x1CA598u;
label_1ca598:
    // 0x1ca598: 0xc62c017c  lwc1        $f12, 0x17C($s1)
    ctx->pc = 0x1ca598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca59c: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1CA59Cu;
    SET_GPR_U32(ctx, 31, 0x1CA5A4u);
    ctx->pc = 0x1CA5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA59Cu;
            // 0x1ca5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5A4u; }
        if (ctx->pc != 0x1CA5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5A4u; }
        if (ctx->pc != 0x1CA5A4u) { return; }
    }
    ctx->pc = 0x1CA5A4u;
    // 0x1ca5a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ca5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ca5a8: 0x7a270260  lq          $a3, 0x260($s1)
    ctx->pc = 0x1ca5a8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1ca5ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ca5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ca5b0: 0x8e240330  lw          $a0, 0x330($s1)
    ctx->pc = 0x1ca5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
    // 0x1ca5b4: 0x7a2602e0  lq          $a2, 0x2E0($s1)
    ctx->pc = 0x1ca5b4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x1ca5b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ca5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca5bc: 0xae20024c  sw          $zero, 0x24C($s1)
    ctx->pc = 0x1ca5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
    // 0x1ca5c0: 0xc07fefc  jal         func_1FFBF0
    ctx->pc = 0x1CA5C0u;
    SET_GPR_U32(ctx, 31, 0x1CA5C8u);
    ctx->pc = 0x1CA5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5C0u;
            // 0x1ca5c4: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBF0u;
    if (runtime->hasFunction(0x1FFBF0u)) {
        auto targetFn = runtime->lookupFunction(0x1FFBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5C8u; }
        if (ctx->pc != 0x1CA5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFBF0_0x1ffbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5C8u; }
        if (ctx->pc != 0x1CA5C8u) { return; }
    }
    ctx->pc = 0x1CA5C8u;
    // 0x1ca5c8: 0x8e240324  lw          $a0, 0x324($s1)
    ctx->pc = 0x1ca5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x1ca5cc: 0xc080944  jal         func_202510
    ctx->pc = 0x1CA5CCu;
    SET_GPR_U32(ctx, 31, 0x1CA5D4u);
    ctx->pc = 0x1CA5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5CCu;
            // 0x1ca5d0: 0x7e220260  sq          $v0, 0x260($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 608), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202510u;
    if (runtime->hasFunction(0x202510u)) {
        auto targetFn = runtime->lookupFunction(0x202510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5D4u; }
        if (ctx->pc != 0x1CA5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202510_0x202510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5D4u; }
        if (ctx->pc != 0x1CA5D4u) { return; }
    }
    ctx->pc = 0x1CA5D4u;
    // 0x1ca5d4: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1ca5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1ca5d8: 0x30420380  andi        $v0, $v0, 0x380
    ctx->pc = 0x1ca5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)896);
    // 0x1ca5dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA5DCu;
    {
        const bool branch_taken_0x1ca5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5DCu;
            // 0x1ca5e0: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca5dc) {
            ctx->pc = 0x1CA5F0u;
            goto label_1ca5f0;
        }
    }
    ctx->pc = 0x1CA5E4u;
    // 0x1ca5e4: 0x8e230328  lw          $v1, 0x328($s1)
    ctx->pc = 0x1ca5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x1ca5e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA5E8u;
    {
        const bool branch_taken_0x1ca5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5E8u;
            // 0x1ca5ec: 0xa46200e0  sh          $v0, 0xE0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 224), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca5e8) {
            ctx->pc = 0x1CA5F8u;
            goto label_1ca5f8;
        }
    }
    ctx->pc = 0x1CA5F0u;
label_1ca5f0:
    // 0x1ca5f0: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x1ca5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x1ca5f4: 0xa44000e0  sh          $zero, 0xE0($v0)
    ctx->pc = 0x1ca5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 224), (uint16_t)GPR_U32(ctx, 0));
label_1ca5f8:
    // 0x1ca5f8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ca5f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca5fc: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1ca5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ca600: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1ca600u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1ca604: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ca604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ca608: 0xc614c658  lwc1        $f20, -0x39A8($s0)
    ctx->pc = 0x1ca608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ca60c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1ca60cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x1ca610: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1ca610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1ca614: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1ca614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1ca618: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1ca618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1ca61c: 0x40f809  jalr        $v0
    ctx->pc = 0x1CA61Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CA624u);
        ctx->pc = 0x1CA620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA61Cu;
            // 0x1ca620: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CA624u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CA598u: goto label_1ca598;
            case 0x1CA5F0u: goto label_1ca5f0;
            case 0x1CA5F8u: goto label_1ca5f8;
            case 0x1CA720u: goto label_1ca720;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CA624u; }
            if (ctx->pc != 0x1CA624u) { return; }
        }
        }
    }
    ctx->pc = 0x1CA624u;
    // 0x1ca624: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1ca624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1ca628: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1ca628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1ca62c: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1ca62cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1ca630: 0xc621016c  lwc1        $f1, 0x16C($s1)
    ctx->pc = 0x1ca630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca634: 0x7ba50050  lq          $a1, 0x50($sp)
    ctx->pc = 0x1ca634u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ca638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca63c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1ca63cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1ca640: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x1ca640u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x1ca644: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ca644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ca648: 0xc0794f6  jal         func_1E53D8
    ctx->pc = 0x1CA648u;
    SET_GPR_U32(ctx, 31, 0x1CA650u);
    ctx->pc = 0x1CA64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA648u;
            // 0x1ca64c: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E53D8u;
    if (runtime->hasFunction(0x1E53D8u)) {
        auto targetFn = runtime->lookupFunction(0x1E53D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA650u; }
        if (ctx->pc != 0x1CA650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e53d8_0x1e5428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA650u; }
        if (ctx->pc != 0x1CA650u) { return; }
    }
    ctx->pc = 0x1CA650u;
    // 0x1ca650: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x1ca650u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ca654: 0x7a280050  lq          $t0, 0x50($s1)
    ctx->pc = 0x1ca654u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1ca658: 0x7a270060  lq          $a3, 0x60($s1)
    ctx->pc = 0x1ca658u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1ca65c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1ca65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ca660: 0x7a230070  lq          $v1, 0x70($s1)
    ctx->pc = 0x1ca660u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1ca664: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1ca664u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1ca668: 0x7a220080  lq          $v0, 0x80($s1)
    ctx->pc = 0x1ca668u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1ca66c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca670: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x1ca670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x1ca674: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1ca674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1ca678: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x1ca678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x1ca67c: 0xc077fda  jal         func_1DFF68
    ctx->pc = 0x1CA67Cu;
    SET_GPR_U32(ctx, 31, 0x1CA684u);
    ctx->pc = 0x1CA680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA67Cu;
            // 0x1ca680: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF68u;
    if (runtime->hasFunction(0x1DFF68u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA684u; }
        if (ctx->pc != 0x1CA684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF68_0x1dff68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA684u; }
        if (ctx->pc != 0x1CA684u) { return; }
    }
    ctx->pc = 0x1CA684u;
    // 0x1ca684: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ca684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ca688: 0xc6350168  lwc1        $f21, 0x168($s1)
    ctx->pc = 0x1ca688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ca68c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1ca68cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x1ca690: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1ca690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1ca694: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1ca694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1ca698: 0x40f809  jalr        $v0
    ctx->pc = 0x1CA698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CA6A0u);
        ctx->pc = 0x1CA69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA698u;
            // 0x1ca69c: 0xc614c658  lwc1        $f20, -0x39A8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CA6A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CA598u: goto label_1ca598;
            case 0x1CA5F0u: goto label_1ca5f0;
            case 0x1CA5F8u: goto label_1ca5f8;
            case 0x1CA720u: goto label_1ca720;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6A0u; }
            if (ctx->pc != 0x1CA6A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1CA6A0u;
    // 0x1ca6a0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1ca6a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1ca6a4: 0xc621016c  lwc1        $f1, 0x16C($s1)
    ctx->pc = 0x1ca6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca6a8: 0xc602c658  lwc1        $f2, -0x39A8($s0)
    ctx->pc = 0x1ca6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca6ac: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1ca6acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x1ca6b0: 0x8e240328  lw          $a0, 0x328($s1)
    ctx->pc = 0x1ca6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x1ca6b4: 0x4600acc6  mov.s       $f19, $f21
    ctx->pc = 0x1ca6b4u;
    ctx->f[19] = FPU_MOV_S(ctx->f[21]);
    // 0x1ca6b8: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x1ca6b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x1ca6bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1ca6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1ca6c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ca6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca6c4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1ca6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1ca6c8: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x1ca6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1ca6cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ca6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca6d0: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1ca6d0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1ca6d4: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1ca6d4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1ca6d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ca6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ca6dc: 0x46006c06  mov.s       $f16, $f13
    ctx->pc = 0x1ca6dcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
    // 0x1ca6e0: 0x46006c46  mov.s       $f17, $f13
    ctx->pc = 0x1ca6e0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[13]);
    // 0x1ca6e4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1ca6e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ca6e8: 0x4602a503  div.s       $f20, $f20, $f2
    ctx->pc = 0x1ca6e8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[2];
    // 0x1ca6ec: 0xc07da14  jal         func_1F6850
    ctx->pc = 0x1CA6ECu;
    SET_GPR_U32(ctx, 31, 0x1CA6F4u);
    ctx->pc = 0x1CA6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6ECu;
            // 0x1ca6f0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6850u;
    if (runtime->hasFunction(0x1F6850u)) {
        auto targetFn = runtime->lookupFunction(0x1F6850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6F4u; }
        if (ctx->pc != 0x1CA6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6850_0x1f6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6F4u; }
        if (ctx->pc != 0x1CA6F4u) { return; }
    }
    ctx->pc = 0x1CA6F4u;
    // 0x1ca6f4: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x1ca6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x1ca6f8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA6F8u;
    {
        const bool branch_taken_0x1ca6f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6F8u;
            // 0x1ca6fc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6f8) {
            ctx->pc = 0x1CA720u;
            goto label_1ca720;
        }
    }
    ctx->pc = 0x1CA700u;
    // 0x1ca700: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1ca700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1ca704: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ca704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ca708: 0xc080172  jal         func_2005C8
    ctx->pc = 0x1CA708u;
    SET_GPR_U32(ctx, 31, 0x1CA710u);
    ctx->pc = 0x1CA70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA708u;
            // 0x1ca70c: 0x84450082  lh          $a1, 0x82($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 130)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2005C8u;
    if (runtime->hasFunction(0x2005C8u)) {
        auto targetFn = runtime->lookupFunction(0x2005C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA710u; }
        if (ctx->pc != 0x1CA710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002005C8_0x2005c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA710u; }
        if (ctx->pc != 0x1CA710u) { return; }
    }
    ctx->pc = 0x1CA710u;
    // 0x1ca710: 0xc08014c  jal         func_200530
    ctx->pc = 0x1CA710u;
    SET_GPR_U32(ctx, 31, 0x1CA718u);
    ctx->pc = 0x1CA714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA710u;
            // 0x1ca714: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200530u;
    if (runtime->hasFunction(0x200530u)) {
        auto targetFn = runtime->lookupFunction(0x200530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA718u; }
        if (ctx->pc != 0x1CA718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200530_0x200530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA718u; }
        if (ctx->pc != 0x1CA718u) { return; }
    }
    ctx->pc = 0x1CA718u;
    // 0x1ca718: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1ca718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ca71c: 0x0  nop
    ctx->pc = 0x1ca71cu;
    // NOP
label_1ca720:
    // 0x1ca720: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1ca720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ca724: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ca724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ca728: 0xc7b800b0  lwc1        $f24, 0xB0($sp)
    ctx->pc = 0x1ca728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1ca72c: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x1ca72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ca730: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x1ca730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ca734: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1ca734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ca738: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1ca738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ca73c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA73Cu;
            // 0x1ca740: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CA598u: goto label_1ca598;
            case 0x1CA5F0u: goto label_1ca5f0;
            case 0x1CA5F8u: goto label_1ca5f8;
            case 0x1CA720u: goto label_1ca720;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CA744u;
    // 0x1ca744: 0x0  nop
    ctx->pc = 0x1ca744u;
    // NOP
}
