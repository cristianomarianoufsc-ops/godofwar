#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7748
// Address: 0x1f7748 - 0x1f79f0
void sub_001F7748_0x1f7748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7748_0x1f7748");
#endif

    ctx->pc = 0x1f7748u;

    // 0x1f7748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f7748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f774c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7750: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f7750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f7754: 0xc31804  sllv        $v1, $v1, $a2
    ctx->pc = 0x1f7754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x1f7758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f7758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f775c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f775cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7764: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f7764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7768: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x1f7768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x1f776c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f776cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f7770: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1f7770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1f7774: 0x8223001f  lb          $v1, 0x1F($s1)
    ctx->pc = 0x1f7774u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
    // 0x1f7778: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x1f7778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1f777c: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1F777Cu;
    {
        const bool branch_taken_0x1f777c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F777Cu;
            // 0x1f7780: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f777c) {
            ctx->pc = 0x1F7930u;
            goto label_1f7930;
        }
    }
    ctx->pc = 0x1F7784u;
    // 0x1f7784: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f7784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f7788: 0x24427690  addiu       $v0, $v0, 0x7690
    ctx->pc = 0x1f7788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30352));
    // 0x1f778c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f778cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f7790: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f7790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f7794: 0x400008  jr          $v0
    ctx->pc = 0x1F7794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F779Cu: goto label_1f779c;
            case 0x1F77B4u: goto label_1f77b4;
            case 0x1F7830u: goto label_1f7830;
            case 0x1F7840u: goto label_1f7840;
            case 0x1F7854u: goto label_1f7854;
            case 0x1F7860u: goto label_1f7860;
            case 0x1F786Cu: goto label_1f786c;
            case 0x1F7884u: goto label_1f7884;
            case 0x1F7898u: goto label_1f7898;
            case 0x1F78E8u: goto label_1f78e8;
            case 0x1F7930u: goto label_1f7930;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F779Cu;
label_1f779c:
    // 0x1f779c: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x1f779cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1f77a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1f77a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f77a4: 0xc08847e  jal         func_2211F8
    ctx->pc = 0x1F77A4u;
    SET_GPR_U32(ctx, 31, 0x1F77ACu);
    ctx->pc = 0x1F77A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F77A4u;
            // 0x1f77a8: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2211F8u;
    if (runtime->hasFunction(0x2211F8u)) {
        auto targetFn = runtime->lookupFunction(0x2211F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F77ACu; }
        if (ctx->pc != 0x1F77ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002211F8_0x2211f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F77ACu; }
        if (ctx->pc != 0x1F77ACu) { return; }
    }
    ctx->pc = 0x1F77ACu;
    // 0x1f77ac: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1F77ACu;
    {
        const bool branch_taken_0x1f77ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F77B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F77ACu;
            // 0x1f77b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77ac) {
            ctx->pc = 0x1F7934u;
            goto label_1f7934;
        }
    }
    ctx->pc = 0x1F77B4u;
label_1f77b4:
    // 0x1f77b4: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1f77b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1f77b8: 0xd84100e0  lqc2        $vf1, 0xE0($v0)
    ctx->pc = 0x1f77b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x1f77bc: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1f77bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f77c0: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1f77c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f77c4: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1f77c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f77c8: 0xc4410164  lwc1        $f1, 0x164($v0)
    ctx->pc = 0x1f77c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f77cc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1f77ccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f77d0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1f77d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1f77d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f77d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f77d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f77d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f77dc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1f77dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1f77e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f77e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f77e4: 0x46000004  c1          0x4
    ctx->pc = 0x1f77e4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f77e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f77e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f77ec: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1f77ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1f77f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f77f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f77f4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f77f4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f77f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f77f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f77fc: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1f77fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1f7800: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f7800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7804: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x1f7804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1f7808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f780c: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x1f780cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x1f7810: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f7810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7814: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x1f7814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1f7818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f781c: 0xc07dd66  jal         func_1F7598
    ctx->pc = 0x1F781Cu;
    SET_GPR_U32(ctx, 31, 0x1F7824u);
    ctx->pc = 0x1F7820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F781Cu;
            // 0x1f7820: 0x62380b  movn        $a3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7598u;
    if (runtime->hasFunction(0x1F7598u)) {
        auto targetFn = runtime->lookupFunction(0x1F7598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7824u; }
        if (ctx->pc != 0x1F7824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7598_0x1f7598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7824u; }
        if (ctx->pc != 0x1F7824u) { return; }
    }
    ctx->pc = 0x1F7824u;
    // 0x1f7824: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1F7824u;
    {
        const bool branch_taken_0x1f7824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7824u;
            // 0x1f7828: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7824) {
            ctx->pc = 0x1F7934u;
            goto label_1f7934;
        }
    }
    ctx->pc = 0x1F782Cu;
    // 0x1f782c: 0x0  nop
    ctx->pc = 0x1f782cu;
    // NOP
label_1f7830:
    // 0x1f7830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7834: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f7834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7838: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F7838u;
    {
        const bool branch_taken_0x1f7838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F783Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7838u;
            // 0x1f783c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7838) {
            ctx->pc = 0x1F78D8u;
            goto label_1f78d8;
        }
    }
    ctx->pc = 0x1F7840u;
label_1f7840:
    // 0x1f7840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7844: 0xc07dcf2  jal         func_1F73C8
    ctx->pc = 0x1F7844u;
    SET_GPR_U32(ctx, 31, 0x1F784Cu);
    ctx->pc = 0x1F7848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7844u;
            // 0x1f7848: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F73C8u;
    if (runtime->hasFunction(0x1F73C8u)) {
        auto targetFn = runtime->lookupFunction(0x1F73C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F784Cu; }
        if (ctx->pc != 0x1F784Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F73C8_0x1f73c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F784Cu; }
        if (ctx->pc != 0x1F784Cu) { return; }
    }
    ctx->pc = 0x1F784Cu;
    // 0x1f784c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1F784Cu;
    {
        const bool branch_taken_0x1f784c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F784Cu;
            // 0x1f7850: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f784c) {
            ctx->pc = 0x1F7934u;
            goto label_1f7934;
        }
    }
    ctx->pc = 0x1F7854u;
label_1f7854:
    // 0x1f7854: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x1f7854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1f7858: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7858u;
    {
        const bool branch_taken_0x1f7858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F785Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7858u;
            // 0x1f785c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7858) {
            ctx->pc = 0x1F7874u;
            goto label_1f7874;
        }
    }
    ctx->pc = 0x1F7860u;
label_1f7860:
    // 0x1f7860: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x1f7860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1f7864: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7864u;
    {
        const bool branch_taken_0x1f7864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7864u;
            // 0x1f7868: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7864) {
            ctx->pc = 0x1F7874u;
            goto label_1f7874;
        }
    }
    ctx->pc = 0x1F786Cu;
label_1f786c:
    // 0x1f786c: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x1f786cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1f7870: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1f7870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f7874:
    // 0x1f7874: 0xc088490  jal         func_221240
    ctx->pc = 0x1F7874u;
    SET_GPR_U32(ctx, 31, 0x1F787Cu);
    ctx->pc = 0x1F7878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7874u;
            // 0x1f7878: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221240u;
    if (runtime->hasFunction(0x221240u)) {
        auto targetFn = runtime->lookupFunction(0x221240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F787Cu; }
        if (ctx->pc != 0x1F787Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221240_0x221240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F787Cu; }
        if (ctx->pc != 0x1F787Cu) { return; }
    }
    ctx->pc = 0x1F787Cu;
    // 0x1f787c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1F787Cu;
    {
        const bool branch_taken_0x1f787c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F787Cu;
            // 0x1f7880: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f787c) {
            ctx->pc = 0x1F7934u;
            goto label_1f7934;
        }
    }
    ctx->pc = 0x1F7884u;
label_1f7884:
    // 0x1f7884: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x1f7884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1f7888: 0xc0884fc  jal         func_2213F0
    ctx->pc = 0x1F7888u;
    SET_GPR_U32(ctx, 31, 0x1F7890u);
    ctx->pc = 0x1F788Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7888u;
            // 0x1f788c: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2213F0u;
    if (runtime->hasFunction(0x2213F0u)) {
        auto targetFn = runtime->lookupFunction(0x2213F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7890u; }
        if (ctx->pc != 0x1F7890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002213F0_0x2213f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7890u; }
        if (ctx->pc != 0x1F7890u) { return; }
    }
    ctx->pc = 0x1F7890u;
    // 0x1f7890: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1F7890u;
    {
        const bool branch_taken_0x1f7890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7890u;
            // 0x1f7894: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7890) {
            ctx->pc = 0x1F7934u;
            goto label_1f7934;
        }
    }
    ctx->pc = 0x1F7898u;
label_1f7898:
    // 0x1f7898: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1f7898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1f789c: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x1f789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
    // 0x1f78a0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1f78a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1f78a4: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F78A4u;
    {
        const bool branch_taken_0x1f78a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f78a4) {
            ctx->pc = 0x1F78A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F78A4u;
            // 0x1f78a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7934u;
            goto label_1f7934;
        }
    }
    ctx->pc = 0x1F78ACu;
    // 0x1f78ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f78acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f78b0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f78b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f78b4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1f78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1f78b8: 0x40f809  jalr        $v0
    ctx->pc = 0x1F78B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F78C0u);
        ctx->pc = 0x1F78BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F78B8u;
            // 0x1f78bc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F78C0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F779Cu: goto label_1f779c;
            case 0x1F77B4u: goto label_1f77b4;
            case 0x1F7830u: goto label_1f7830;
            case 0x1F7840u: goto label_1f7840;
            case 0x1F7854u: goto label_1f7854;
            case 0x1F7860u: goto label_1f7860;
            case 0x1F786Cu: goto label_1f786c;
            case 0x1F7874u: goto label_1f7874;
            case 0x1F7884u: goto label_1f7884;
            case 0x1F7898u: goto label_1f7898;
            case 0x1F78D8u: goto label_1f78d8;
            case 0x1F78E8u: goto label_1f78e8;
            case 0x1F7930u: goto label_1f7930;
            case 0x1F7934u: goto label_1f7934;
            case 0x1F796Cu: goto label_1f796c;
            case 0x1F79A8u: goto label_1f79a8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F78C0u; }
            if (ctx->pc != 0x1F78C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1F78C0u;
    // 0x1f78c0: 0x8c420388  lw          $v0, 0x388($v0)
    ctx->pc = 0x1f78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 904)));
    // 0x1f78c4: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x1f78c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1f78c8: 0x80420040  lb          $v0, 0x40($v0)
    ctx->pc = 0x1f78c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1f78cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F78CCu;
    {
        const bool branch_taken_0x1f78cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F78D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F78CCu;
            // 0x1f78d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78cc) {
            ctx->pc = 0x1F7930u;
            goto label_1f7930;
        }
    }
    ctx->pc = 0x1F78D4u;
    // 0x1f78d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f78d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f78d8:
    // 0x1f78d8: 0xc07dd66  jal         func_1F7598
    ctx->pc = 0x1F78D8u;
    SET_GPR_U32(ctx, 31, 0x1F78E0u);
    ctx->pc = 0x1F78DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F78D8u;
            // 0x1f78dc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7598u;
    if (runtime->hasFunction(0x1F7598u)) {
        auto targetFn = runtime->lookupFunction(0x1F7598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F78E0u; }
        if (ctx->pc != 0x1F78E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7598_0x1f7598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F78E0u; }
        if (ctx->pc != 0x1F78E0u) { return; }
    }
    ctx->pc = 0x1F78E0u;
    // 0x1f78e0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F78E0u;
    {
        const bool branch_taken_0x1f78e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F78E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F78E0u;
            // 0x1f78e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78e0) {
            ctx->pc = 0x1F7934u;
            goto label_1f7934;
        }
    }
    ctx->pc = 0x1F78E8u;
label_1f78e8:
    // 0x1f78e8: 0x3c020780  lui         $v0, 0x780
    ctx->pc = 0x1f78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1920 << 16));
    // 0x1f78ec: 0x96230016  lhu         $v1, 0x16($s1)
    ctx->pc = 0x1f78ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x1f78f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f78f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f78f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f78f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f78f8: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x1f78f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1f78fc: 0x8e0500e4  lw          $a1, 0xE4($s0)
    ctx->pc = 0x1f78fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x1f7900: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1f7900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1f7904: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x1f7904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x1f7908: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1f7908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1f790c: 0xc42004  sllv        $a0, $a0, $a2
    ctx->pc = 0x1f790cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x1f7910: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1f7910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f7914: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x1f7914u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x1f7918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f7918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f791c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x1f791cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1f7920: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1f7920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1f7924: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f7924u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f7928: 0xae0500e4  sw          $a1, 0xE4($s0)
    ctx->pc = 0x1f7928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 5));
    // 0x1f792c: 0xe4400358  swc1        $f0, 0x358($v0)
    ctx->pc = 0x1f792cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 856), bits); }
label_1f7930:
    // 0x1f7930: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f7930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f7934:
    // 0x1f7934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f7934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f793c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F793Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F793Cu;
            // 0x1f7940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F779Cu: goto label_1f779c;
            case 0x1F77B4u: goto label_1f77b4;
            case 0x1F7830u: goto label_1f7830;
            case 0x1F7840u: goto label_1f7840;
            case 0x1F7854u: goto label_1f7854;
            case 0x1F7860u: goto label_1f7860;
            case 0x1F786Cu: goto label_1f786c;
            case 0x1F7874u: goto label_1f7874;
            case 0x1F7884u: goto label_1f7884;
            case 0x1F7898u: goto label_1f7898;
            case 0x1F78D8u: goto label_1f78d8;
            case 0x1F78E8u: goto label_1f78e8;
            case 0x1F7930u: goto label_1f7930;
            case 0x1F7934u: goto label_1f7934;
            case 0x1F796Cu: goto label_1f796c;
            case 0x1F79A8u: goto label_1f79a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F7944u;
    // 0x1f7944: 0x0  nop
    ctx->pc = 0x1f7944u;
    // NOP
    // 0x1f7948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f794c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1f794cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1f7950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7954: 0x24428968  addiu       $v0, $v0, -0x7698
    ctx->pc = 0x1f7954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936936));
    // 0x1f7958: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1f7958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1f795c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F795Cu;
    {
        const bool branch_taken_0x1f795c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F795Cu;
            // 0x1f7960: 0xac820734  sw          $v0, 0x734($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f795c) {
            ctx->pc = 0x1F796Cu;
            goto label_1f796c;
        }
    }
    ctx->pc = 0x1F7964u;
    // 0x1f7964: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x1F7964u;
    SET_GPR_U32(ctx, 31, 0x1F796Cu);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F796Cu; }
        if (ctx->pc != 0x1F796Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F796Cu; }
        if (ctx->pc != 0x1F796Cu) { return; }
    }
    ctx->pc = 0x1F796Cu;
label_1f796c:
    // 0x1f796c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f796cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7970: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7970u;
            // 0x1f7974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F779Cu: goto label_1f779c;
            case 0x1F77B4u: goto label_1f77b4;
            case 0x1F7830u: goto label_1f7830;
            case 0x1F7840u: goto label_1f7840;
            case 0x1F7854u: goto label_1f7854;
            case 0x1F7860u: goto label_1f7860;
            case 0x1F786Cu: goto label_1f786c;
            case 0x1F7874u: goto label_1f7874;
            case 0x1F7884u: goto label_1f7884;
            case 0x1F7898u: goto label_1f7898;
            case 0x1F78D8u: goto label_1f78d8;
            case 0x1F78E8u: goto label_1f78e8;
            case 0x1F7930u: goto label_1f7930;
            case 0x1F7934u: goto label_1f7934;
            case 0x1F796Cu: goto label_1f796c;
            case 0x1F79A8u: goto label_1f79a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F7978u;
    // 0x1f7978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f797c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f797cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f7980: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1f7980u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1f7984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7988: 0x8e03e3c8  lw          $v1, -0x1C38($s0)
    ctx->pc = 0x1f7988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960072)));
    // 0x1f798c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F798Cu;
    {
        const bool branch_taken_0x1f798c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F798Cu;
            // 0x1f7990: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f798c) {
            ctx->pc = 0x1F79A8u;
            goto label_1f79a8;
        }
    }
    ctx->pc = 0x1F7994u;
    // 0x1f7994: 0x8c620734  lw          $v0, 0x734($v1)
    ctx->pc = 0x1f7994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1844)));
    // 0x1f7998: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1f7998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f799c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1f799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1f79a0: 0x40f809  jalr        $v0
    ctx->pc = 0x1F79A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F79A8u);
        ctx->pc = 0x1F79A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F79A0u;
            // 0x1f79a4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F79A8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F779Cu: goto label_1f779c;
            case 0x1F77B4u: goto label_1f77b4;
            case 0x1F7830u: goto label_1f7830;
            case 0x1F7840u: goto label_1f7840;
            case 0x1F7854u: goto label_1f7854;
            case 0x1F7860u: goto label_1f7860;
            case 0x1F786Cu: goto label_1f786c;
            case 0x1F7874u: goto label_1f7874;
            case 0x1F7884u: goto label_1f7884;
            case 0x1F7898u: goto label_1f7898;
            case 0x1F78D8u: goto label_1f78d8;
            case 0x1F78E8u: goto label_1f78e8;
            case 0x1F7930u: goto label_1f7930;
            case 0x1F7934u: goto label_1f7934;
            case 0x1F796Cu: goto label_1f796c;
            case 0x1F79A8u: goto label_1f79a8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F79A8u; }
            if (ctx->pc != 0x1F79A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1F79A8u;
label_1f79a8:
    // 0x1f79a8: 0xae00e3c8  sw          $zero, -0x1C38($s0)
    ctx->pc = 0x1f79a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960072), GPR_U32(ctx, 0));
    // 0x1f79ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f79acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f79b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f79b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f79b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F79B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F79B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F79B4u;
            // 0x1f79b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F779Cu: goto label_1f779c;
            case 0x1F77B4u: goto label_1f77b4;
            case 0x1F7830u: goto label_1f7830;
            case 0x1F7840u: goto label_1f7840;
            case 0x1F7854u: goto label_1f7854;
            case 0x1F7860u: goto label_1f7860;
            case 0x1F786Cu: goto label_1f786c;
            case 0x1F7874u: goto label_1f7874;
            case 0x1F7884u: goto label_1f7884;
            case 0x1F7898u: goto label_1f7898;
            case 0x1F78D8u: goto label_1f78d8;
            case 0x1F78E8u: goto label_1f78e8;
            case 0x1F7930u: goto label_1f7930;
            case 0x1F7934u: goto label_1f7934;
            case 0x1F796Cu: goto label_1f796c;
            case 0x1F79A8u: goto label_1f79a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F79BCu;
    // 0x1f79bc: 0x0  nop
    ctx->pc = 0x1f79bcu;
    // NOP
    // 0x1f79c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f79c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f79c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f79c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f79c8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1f79c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1f79cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f79ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f79d0: 0xc07deea  jal         func_1F7BA8
    ctx->pc = 0x1F79D0u;
    SET_GPR_U32(ctx, 31, 0x1F79D8u);
    ctx->pc = 0x1F79D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F79D0u;
            // 0x1f79d4: 0x8e04e3c8  lw          $a0, -0x1C38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BA8u;
    if (runtime->hasFunction(0x1F7BA8u)) {
        auto targetFn = runtime->lookupFunction(0x1F7BA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F79D8u; }
        if (ctx->pc != 0x1F79D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7BA8_0x1f7ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F79D8u; }
        if (ctx->pc != 0x1F79D8u) { return; }
    }
    ctx->pc = 0x1F79D8u;
    // 0x1f79d8: 0xc07df76  jal         func_1F7DD8
    ctx->pc = 0x1F79D8u;
    SET_GPR_U32(ctx, 31, 0x1F79E0u);
    ctx->pc = 0x1F79DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F79D8u;
            // 0x1f79dc: 0x8e04e3c8  lw          $a0, -0x1C38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DD8u;
    if (runtime->hasFunction(0x1F7DD8u)) {
        auto targetFn = runtime->lookupFunction(0x1F7DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F79E0u; }
        if (ctx->pc != 0x1F79E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7DD8_0x1f7dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F79E0u; }
        if (ctx->pc != 0x1F79E0u) { return; }
    }
    ctx->pc = 0x1F79E0u;
    // 0x1f79e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f79e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f79e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f79e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f79e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F79E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F79ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F79E8u;
            // 0x1f79ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F779Cu: goto label_1f779c;
            case 0x1F77B4u: goto label_1f77b4;
            case 0x1F7830u: goto label_1f7830;
            case 0x1F7840u: goto label_1f7840;
            case 0x1F7854u: goto label_1f7854;
            case 0x1F7860u: goto label_1f7860;
            case 0x1F786Cu: goto label_1f786c;
            case 0x1F7874u: goto label_1f7874;
            case 0x1F7884u: goto label_1f7884;
            case 0x1F7898u: goto label_1f7898;
            case 0x1F78D8u: goto label_1f78d8;
            case 0x1F78E8u: goto label_1f78e8;
            case 0x1F7930u: goto label_1f7930;
            case 0x1F7934u: goto label_1f7934;
            case 0x1F796Cu: goto label_1f796c;
            case 0x1F79A8u: goto label_1f79a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F79F0u;
}
