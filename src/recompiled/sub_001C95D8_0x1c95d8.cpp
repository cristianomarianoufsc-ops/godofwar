#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C95D8
// Address: 0x1c95d8 - 0x1c9758
void sub_001C95D8_0x1c95d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C95D8_0x1c95d8");
#endif

    ctx->pc = 0x1c95d8u;

    // 0x1c95d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c95d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c95dc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c95dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1c95e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1c95e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1c95e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c95e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c95e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c95e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c95ec: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x1c95ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x1c95f0: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c95f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c95f4: 0x30420380  andi        $v0, $v0, 0x380
    ctx->pc = 0x1c95f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)896);
    // 0x1c95f8: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1C95F8u;
    {
        const bool branch_taken_0x1c95f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C95FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95F8u;
            // 0x1c95fc: 0x48a51800  qmtc2.ni    $a1, $vf3 (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c95f8) {
            ctx->pc = 0x1C973Cu;
            goto label_1c973c;
        }
    }
    ctx->pc = 0x1C9600u;
    // 0x1c9600: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x1c9600u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c9604: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c9604u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c9608: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1c9608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c960c: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1c960cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c9610: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1c9610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1c9614: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c9614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9618: 0x3c070802  lui         $a3, 0x802
    ctx->pc = 0x1c9618u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2050 << 16));
    // 0x1c961c: 0xc0789b8  jal         func_1E26E0
    ctx->pc = 0x1C961Cu;
    SET_GPR_U32(ctx, 31, 0x1C9624u);
    ctx->pc = 0x1C9620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C961Cu;
            // 0x1c9620: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E26E0u;
    if (runtime->hasFunction(0x1E26E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E26E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9624u; }
        if (ctx->pc != 0x1C9624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E26E0_0x1e26e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9624u; }
        if (ctx->pc != 0x1C9624u) { return; }
    }
    ctx->pc = 0x1C9624u;
    // 0x1c9624: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C9624u;
    {
        const bool branch_taken_0x1c9624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9624u;
            // 0x1c9628: 0xdba30030  lqc2        $vf3, 0x30($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9624) {
            ctx->pc = 0x1C96ECu;
            goto label_1c96ec;
        }
    }
    ctx->pc = 0x1C962Cu;
    // 0x1c962c: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c962cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c9630: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9634: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9638: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c9638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c963c: 0xda010120  lqc2        $vf1, 0x120($s0)
    ctx->pc = 0x1c963cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1c9640: 0xc44101ec  lwc1        $f1, 0x1EC($v0)
    ctx->pc = 0x1c9640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9644: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c9644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c9648: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c9648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c964c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c964cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c9650: 0x4a820858  vmulx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1c9650u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9654: 0xda020130  lqc2        $vf2, 0x130($s0)
    ctx->pc = 0x1c9654u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1c9658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c9658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c965c: 0x4a820845  vsuby.y     $vf1, $vf1, $vf2y
    ctx->pc = 0x1c965cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9660: 0xc6000230  lwc1        $f0, 0x230($s0)
    ctx->pc = 0x1c9660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9664: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c9664u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9668: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1c9668u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c966c: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x1c966cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c9670: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c9670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9674: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c9674u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c9678: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1c9678u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c967c: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x1c967cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c9680: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c9680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9684: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c9684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9688: 0x0  nop
    ctx->pc = 0x1c9688u;
    // NOP
    // 0x1c968c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1C968Cu;
    {
        const bool branch_taken_0x1c968c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c968c) {
            ctx->pc = 0x1C9690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C968Cu;
            // 0x1c9690: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9698u;
            goto label_1c9698;
        }
    }
    ctx->pc = 0x1C9694u;
    // 0x1c9694: 0x0  nop
    ctx->pc = 0x1c9694u;
    // NOP
label_1c9698:
    // 0x1c9698: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9698u;
    {
        const bool branch_taken_0x1c9698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C969Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9698u;
            // 0x1c969c: 0x48231800  qmfc2.ni    $v1, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9698) {
            ctx->pc = 0x1C96B0u;
            goto label_1c96b0;
        }
    }
    ctx->pc = 0x1C96A0u;
    // 0x1c96a0: 0xc07a22e  jal         func_1E88B8
    ctx->pc = 0x1C96A0u;
    SET_GPR_U32(ctx, 31, 0x1C96A8u);
    ctx->pc = 0x1C96A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96A0u;
            // 0x1c96a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E88B8u;
    if (runtime->hasFunction(0x1E88B8u)) {
        auto targetFn = runtime->lookupFunction(0x1E88B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96A8u; }
        if (ctx->pc != 0x1C96A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E88B8_0x1e88b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96A8u; }
        if (ctx->pc != 0x1C96A8u) { return; }
    }
    ctx->pc = 0x1C96A8u;
    // 0x1c96a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C96A8u;
    {
        const bool branch_taken_0x1c96a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C96ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96A8u;
            // 0x1c96ac: 0x7a060110  lq          $a2, 0x110($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c96a8) {
            ctx->pc = 0x1C96F0u;
            goto label_1c96f0;
        }
    }
    ctx->pc = 0x1C96B0u;
label_1c96b0:
    // 0x1c96b0: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1c96b0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c96b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c96b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c96b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c96b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c96bc: 0x0  nop
    ctx->pc = 0x1c96bcu;
    // NOP
    // 0x1c96c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C96C0u;
    {
        const bool branch_taken_0x1c96c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C96C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96C0u;
            // 0x1c96c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c96c0) {
            ctx->pc = 0x1C96CCu;
            goto label_1c96cc;
        }
    }
    ctx->pc = 0x1C96C8u;
    // 0x1c96c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c96c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c96cc:
    // 0x1c96cc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C96CCu;
    {
        const bool branch_taken_0x1c96cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c96cc) {
            ctx->pc = 0x1C96D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96CCu;
            // 0x1c96d0: 0x7a060110  lq          $a2, 0x110($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C96F0u;
            goto label_1c96f0;
        }
    }
    ctx->pc = 0x1C96D4u;
    // 0x1c96d4: 0x4a830081  vaddy.y     $vf2, $vf0, $vf3y
    ctx->pc = 0x1c96d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c96d8: 0xda0100e0  lqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c96d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c96dc: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1c96dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c96e0: 0x4a830041  vaddy.y     $vf1, $vf0, $vf3y
    ctx->pc = 0x1c96e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c96e4: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1c96e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c96e8: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c96e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c96ec:
    // 0x1c96ec: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c96ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
label_1c96f0:
    // 0x1c96f0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1c96f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c96f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c96f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c96f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c96f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c96fc: 0xc078abe  jal         func_1E2AF8
    ctx->pc = 0x1C96FCu;
    SET_GPR_U32(ctx, 31, 0x1C9704u);
    ctx->pc = 0x1C9700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96FCu;
            // 0x1c9700: 0x3c070802  lui         $a3, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2050 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2AF8u;
    if (runtime->hasFunction(0x1E2AF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E2AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9704u; }
        if (ctx->pc != 0x1C9704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2AF8_0x1e2af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9704u; }
        if (ctx->pc != 0x1C9704u) { return; }
    }
    ctx->pc = 0x1C9704u;
    // 0x1c9704: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C9704u;
    {
        const bool branch_taken_0x1c9704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9704u;
            // 0x1c9708: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9704) {
            ctx->pc = 0x1C9740u;
            goto label_1c9740;
        }
    }
    ctx->pc = 0x1C970Cu;
    // 0x1c970c: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c970cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c9710: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1c9710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1c9714: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9714u;
    {
        const bool branch_taken_0x1c9714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9714) {
            ctx->pc = 0x1C9734u;
            goto label_1c9734;
        }
    }
    ctx->pc = 0x1C971Cu;
    // 0x1c971c: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1c971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1c9720: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1c9720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1c9724: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9724u;
    {
        const bool branch_taken_0x1c9724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9724u;
            // 0x1c9728: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9724) {
            ctx->pc = 0x1C973Cu;
            goto label_1c973c;
        }
    }
    ctx->pc = 0x1C972Cu;
    // 0x1c972c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C972Cu;
    {
        const bool branch_taken_0x1c972c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C972Cu;
            // 0x1c9730: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c972c) {
            ctx->pc = 0x1C9740u;
            goto label_1c9740;
        }
    }
    ctx->pc = 0x1C9734u;
label_1c9734:
    // 0x1c9734: 0xc07227c  jal         func_1C89F0
    ctx->pc = 0x1C9734u;
    SET_GPR_U32(ctx, 31, 0x1C973Cu);
    ctx->pc = 0x1C9738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9734u;
            // 0x1c9738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C89F0u;
    if (runtime->hasFunction(0x1C89F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C89F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C973Cu; }
        if (ctx->pc != 0x1C973Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C89F0_0x1c89f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C973Cu; }
        if (ctx->pc != 0x1C973Cu) { return; }
    }
    ctx->pc = 0x1C973Cu;
label_1c973c:
    // 0x1c973c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1c973cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9740:
    // 0x1c9740: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c9740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c9744: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1c9744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9748: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c9748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c974c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C974Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C974Cu;
            // 0x1c9750: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9698u: goto label_1c9698;
            case 0x1C96B0u: goto label_1c96b0;
            case 0x1C96CCu: goto label_1c96cc;
            case 0x1C96ECu: goto label_1c96ec;
            case 0x1C96F0u: goto label_1c96f0;
            case 0x1C9734u: goto label_1c9734;
            case 0x1C973Cu: goto label_1c973c;
            case 0x1C9740u: goto label_1c9740;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C9754u;
    // 0x1c9754: 0x0  nop
    ctx->pc = 0x1c9754u;
    // NOP
}
