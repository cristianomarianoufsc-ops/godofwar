#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184920
// Address: 0x184920 - 0x1849a8
void sub_00184920_0x184920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184920_0x184920");
#endif

    ctx->pc = 0x184920u;

    // 0x184920: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x184920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x184924: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x184924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x184928: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x184928u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x18492c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18492cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184930: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x184930u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x184934: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x184934u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x184938: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x184938u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x18493c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18493cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x184940: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x184940u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x184944: 0x4be30b3d  vmr32.xyzw  $vf3, $vf1
    ctx->pc = 0x184944u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x184948: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x184948u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18494c: 0x4be21b3d  vmr32.xyzw  $vf2, $vf3
    ctx->pc = 0x18494cu;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x184950: 0xfa030020  sqc2        $vf3, 0x20($s0)
    ctx->pc = 0x184950u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x184954: 0x4be4133d  vmr32.xyzw  $vf4, $vf2
    ctx->pc = 0x184954u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x184958: 0xfa020010  sqc2        $vf2, 0x10($s0)
    ctx->pc = 0x184958u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18495c: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18495cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x184960: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x184960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x184964: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x184964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x184968: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x184968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18496c: 0xc061122  jal         func_184488
    ctx->pc = 0x18496Cu;
    SET_GPR_U32(ctx, 31, 0x184974u);
    ctx->pc = 0x184970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18496Cu;
            // 0x184970: 0xfba40030  sqc2        $vf4, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184488u;
    if (runtime->hasFunction(0x184488u)) {
        auto targetFn = runtime->lookupFunction(0x184488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184974u; }
        if (ctx->pc != 0x184974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184488_0x184488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184974u; }
        if (ctx->pc != 0x184974u) { return; }
    }
    ctx->pc = 0x184974u;
    // 0x184974: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184974u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x184978: 0xc06115e  jal         func_184578
    ctx->pc = 0x184978u;
    SET_GPR_U32(ctx, 31, 0x184980u);
    ctx->pc = 0x18497Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184978u;
            // 0x18497c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184578u;
    if (runtime->hasFunction(0x184578u)) {
        auto targetFn = runtime->lookupFunction(0x184578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184980u; }
        if (ctx->pc != 0x184980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184578_0x184578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184980u; }
        if (ctx->pc != 0x184980u) { return; }
    }
    ctx->pc = 0x184980u;
    // 0x184980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184984: 0xc06119a  jal         func_184668
    ctx->pc = 0x184984u;
    SET_GPR_U32(ctx, 31, 0x18498Cu);
    ctx->pc = 0x184988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184984u;
            // 0x184988: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184668u;
    if (runtime->hasFunction(0x184668u)) {
        auto targetFn = runtime->lookupFunction(0x184668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18498Cu; }
        if (ctx->pc != 0x18498Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184668_0x184668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18498Cu; }
        if (ctx->pc != 0x18498Cu) { return; }
    }
    ctx->pc = 0x18498Cu;
    // 0x18498c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18498cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184990: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x184990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184994: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x184994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x184998: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x184998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18499c: 0x3e00008  jr          $ra
    ctx->pc = 0x18499Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1849A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18499Cu;
            // 0x1849a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1849A4u;
    // 0x1849a4: 0x0  nop
    ctx->pc = 0x1849a4u;
    // NOP
}
