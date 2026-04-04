#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1078
// Address: 0x1e1078 - 0x1e1148
void sub_001E1078_0x1e1078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1078_0x1e1078");
#endif

    ctx->pc = 0x1e1078u;

    // 0x1e1078: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e1078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e107c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1e107cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1e1080: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e1080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e1084: 0xc077952  jal         func_1DE548
    ctx->pc = 0x1E1084u;
    SET_GPR_U32(ctx, 31, 0x1E108Cu);
    ctx->pc = 0x1E1088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1084u;
            // 0x1e1088: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE548u;
    if (runtime->hasFunction(0x1DE548u)) {
        auto targetFn = runtime->lookupFunction(0x1DE548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E108Cu; }
        if (ctx->pc != 0x1E108Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE548_0x1de548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E108Cu; }
        if (ctx->pc != 0x1E108Cu) { return; }
    }
    ctx->pc = 0x1E108Cu;
    // 0x1e108c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1e108cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1e1090: 0x2442a670  addiu       $v0, $v0, -0x5990
    ctx->pc = 0x1e1090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944368));
    // 0x1e1094: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e1094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1e1098: 0xae000254  sw          $zero, 0x254($s0)
    ctx->pc = 0x1e1098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 0));
    // 0x1e109c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e109cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e10a0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e10a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e10a4: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x1e10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
    // 0x1e10a8: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x1e10a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x1e10ac: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e10acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e10b0: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x1e10b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x1e10b4: 0x7e020220  sq          $v0, 0x220($s0)
    ctx->pc = 0x1e10b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 544), GPR_VEC(ctx, 2));
    // 0x1e10b8: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x1e10b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x1e10bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e10bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e10c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10c4: 0x7e020210  sq          $v0, 0x210($s0)
    ctx->pc = 0x1e10c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 528), GPR_VEC(ctx, 2));
    // 0x1e10c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e10c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10cc: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x1E10CCu;
    SET_GPR_U32(ctx, 31, 0x1E10D4u);
    ctx->pc = 0x1E10D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E10CCu;
            // 0x1e10d0: 0xae000240  sw          $zero, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (runtime->hasFunction(0x242A88u)) {
        auto targetFn = runtime->lookupFunction(0x242A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E10D4u; }
        if (ctx->pc != 0x1E10D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a88_0x242a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E10D4u; }
        if (ctx->pc != 0x1E10D4u) { return; }
    }
    ctx->pc = 0x1E10D4u;
    // 0x1e10d4: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1e10d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1e10d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e10dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e10dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e10e0: 0xc4606f60  lwc1        $f0, 0x6F60($v1)
    ctx->pc = 0x1e10e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e10e4: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x1e10e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x1e10e8: 0x260201c0  addiu       $v0, $s0, 0x1C0
    ctx->pc = 0x1e10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x1e10ec: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x1e10ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
    // 0x1e10f0: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x1e10f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x1e10f4: 0xae00023c  sw          $zero, 0x23C($s0)
    ctx->pc = 0x1e10f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 0));
    // 0x1e10f8: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x1e10f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x1e10fc: 0x4be3033c  vmove.xyzw  $vf3, $vf0
    ctx->pc = 0x1e10fcu;
    ctx->vu0_vf[3] = ctx->vu0_vf[0];
    // 0x1e1100: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x1e1100u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1e1104: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1e1104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e1108: 0x4be1233d  vmr32.xyzw  $vf1, $vf4
    ctx->pc = 0x1e1108u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x1e110c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1e110cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e1110: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e1110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1114: 0x4be20b3d  vmr32.xyzw  $vf2, $vf1
    ctx->pc = 0x1e1114u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1e1118: 0xfa0201c0  sqc2        $vf2, 0x1C0($s0)
    ctx->pc = 0x1e1118u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 448), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e111c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1e111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e1120: 0xf8430030  sqc2        $vf3, 0x30($v0)
    ctx->pc = 0x1e1120u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e1124: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1e1124u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1128: 0xf8440020  sqc2        $vf4, 0x20($v0)
    ctx->pc = 0x1e1128u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e112c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1e112cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1130: 0x7e020200  sq          $v0, 0x200($s0)
    ctx->pc = 0x1e1130u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 512), GPR_VEC(ctx, 2));
    // 0x1e1134: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e1134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e1138: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e113c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1e113cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e1140: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1140u;
            // 0x1e1144: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1148u;
}
