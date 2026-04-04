#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002178e8
// Address: 0x2178e8 - 0x217948
void FUN_002178e8_0x2178e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002178e8_0x2178e8");
#endif

    ctx->pc = 0x2178e8u;

    // 0x2178e8: 0x8c830374  lw          $v1, 0x374($a0)
    ctx->pc = 0x2178e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 884)));
    // 0x2178ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2178ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2178f0: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x2178f0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x2178f4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2178f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2178f8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2178F8u;
    {
        const bool branch_taken_0x2178f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2178FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2178F8u;
            // 0x2178fc: 0x7fa50000  sq          $a1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2178f8) {
            ctx->pc = 0x217940u;
            goto label_217940;
        }
    }
    ctx->pc = 0x217900u;
    // 0x217900: 0xc481005c  lwc1        $f1, 0x5C($a0)
    ctx->pc = 0x217900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217904: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x217904u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x217908: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x217908u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x21790c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x21790cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x217910: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x217910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x217914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x217914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217918: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x217918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21791c: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x21791cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x217920: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x217920u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x217924: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x217924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x217928: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x217928u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x21792c: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x21792cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217930: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x217930u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x217934: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x217934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x217938: 0xac800378  sw          $zero, 0x378($a0)
    ctx->pc = 0x217938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 888), GPR_U32(ctx, 0));
    // 0x21793c: 0xac820374  sw          $v0, 0x374($a0)
    ctx->pc = 0x21793cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 884), GPR_U32(ctx, 2));
label_217940:
    // 0x217940: 0x3e00008  jr          $ra
    ctx->pc = 0x217940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217940u;
            // 0x217944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217940u: goto label_217940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217948u;
}
