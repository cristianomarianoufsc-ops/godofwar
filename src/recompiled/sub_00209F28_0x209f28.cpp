#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00209F28
// Address: 0x209f28 - 0x209fc0
void sub_00209F28_0x209f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209F28_0x209f28");
#endif

    ctx->pc = 0x209f28u;

    // 0x209f28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x209f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x209f2c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x209f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x209f30: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x209f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x209f34: 0x2442a4f0  addiu       $v0, $v0, -0x5B10
    ctx->pc = 0x209f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943984));
    // 0x209f38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x209f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x209f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f40: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x209f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x209f44: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x209f44u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x209f48: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x209f48u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x209f4c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x209f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x209f50: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x209f50u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x209f54: 0xfa030020  sqc2        $vf3, 0x20($s0)
    ctx->pc = 0x209f54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x209f58: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x209f58u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x209f5c: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x209f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x209f60: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x209f60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x209f64: 0xfa020030  sqc2        $vf2, 0x30($s0)
    ctx->pc = 0x209f64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x209f68: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x209f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x209f6c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x209f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x209f70: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x209f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x209f74: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x209f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x209f78: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x209f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x209f7c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x209f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x209f80: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x209f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x209f84: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x209f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x209f88: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x209f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x209f8c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x209f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x209f90: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x209f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x209f94: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x209f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x209f98: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x209f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x209f9c: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x209f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x209fa0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x209fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x209fa4: 0xc082804  jal         func_20A010
    ctx->pc = 0x209FA4u;
    SET_GPR_U32(ctx, 31, 0x209FACu);
    ctx->pc = 0x209FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209FA4u;
            // 0x209fa8: 0xfba40030  sqc2        $vf4, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A010u;
    if (runtime->hasFunction(0x20A010u)) {
        auto targetFn = runtime->lookupFunction(0x20A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209FACu; }
        if (ctx->pc != 0x209FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A010_0x20a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209FACu; }
        if (ctx->pc != 0x209FACu) { return; }
    }
    ctx->pc = 0x209FACu;
    // 0x209fac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x209facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209fb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x209fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x209fb4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x209fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x209fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x209FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209FB8u;
            // 0x209fbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209FC0u;
}
