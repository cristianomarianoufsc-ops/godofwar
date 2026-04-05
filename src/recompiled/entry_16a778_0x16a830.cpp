#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16a778
// Address: 0x16a778 - 0x16a830
void entry_16a778_0x16a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16a778_0x16a830");
#endif

    ctx->pc = 0x16a778u;

    // 0x16a778: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x16a778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a77c: 0x700617c9  prot3w      $v0, $a2
    ctx->pc = 0x16a77cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x16a780: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16a780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16a784: 0x3c0144ff  lui         $at, 0x44FF
    ctx->pc = 0x16a784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17663 << 16));
    // 0x16a788: 0x3421f000  ori         $at, $at, 0xF000
    ctx->pc = 0x16a788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61440);
    // 0x16a78c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x16a78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x16a790: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x16a790u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a794: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x16a794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a79c: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x16a79cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x16a7a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16a7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16a7a4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x16a7a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x16a7a8: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x16a7a8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x16a7ac: 0x8caa000c  lw          $t2, 0xC($a1)
    ctx->pc = 0x16a7acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x16a7b0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x16a7b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x16a7b4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x16a7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x16a7b8: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x16a7b8u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[6];
    // 0x16a7bc: 0x460518c3  div.s       $f3, $f3, $f5
    ctx->pc = 0x16a7bcu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[5];
    // 0x16a7c0: 0x46022083  div.s       $f2, $f4, $f2
    ctx->pc = 0x16a7c0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[2] = ctx->f[4] / ctx->f[2];
    // 0x16a7c4: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x16a7c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[0];
    // 0x16a7c8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x16a7c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x16a7cc: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x16a7ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x16a7d0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x16a7d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x16a7d4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x16a7d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x16a7d8: 0x46020084  c1          0x20084
    ctx->pc = 0x16a7d8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x16a7dc: 0x46000004  c1          0x4
    ctx->pc = 0x16a7dcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x16a7e0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x16a7e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16a7e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16a7e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16a7e8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x16a7e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x16a7ec: 0x70433389  pcpyld      $a2, $v0, $v1
    ctx->pc = 0x16a7ecu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16a7f0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x16a7f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x16a7f4: 0x460300c4  c1          0x300C4
    ctx->pc = 0x16a7f4u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x16a7f8: 0x46010044  c1          0x10044
    ctx->pc = 0x16a7f8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x16a7fc: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x16a7fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16a800: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x16a800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x16a804: 0x71091b89  pcpyld      $v1, $t0, $t1
    ctx->pc = 0x16a804u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x16a808: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x16a808u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x16a80c: 0x71491389  pcpyld      $v0, $t2, $t1
    ctx->pc = 0x16a80cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x16a810: 0x70431cc8  ppacw       $v1, $v0, $v1
    ctx->pc = 0x16a810u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16a814: 0x704614c8  ppacw       $v0, $v0, $a2
    ctx->pc = 0x16a814u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x16a818: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x16a818u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
    // 0x16a81c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x16a81cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x16a820: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16a820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16a824: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x16a824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x16a828: 0x3e00008  jr          $ra
    ctx->pc = 0x16A828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A828u;
            // 0x16a82c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A830u;
}
