#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC160
// Address: 0x1dc160 - 0x1dc240
void sub_001DC160_0x1dc160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC160_0x1dc160");
#endif

    ctx->pc = 0x1dc160u;

    // 0x1dc160: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1dc160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1dc164: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1dc164u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1dc168: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1dc168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1dc16c: 0x24c6d230  addiu       $a2, $a2, -0x2DD0
    ctx->pc = 0x1dc16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955568));
    // 0x1dc170: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1dc170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1dc174: 0xc05edf0  jal         func_17B7C0
    ctx->pc = 0x1DC174u;
    SET_GPR_U32(ctx, 31, 0x1DC17Cu);
    ctx->pc = 0x1DC178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC174u;
            // 0x1dc178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B7C0u;
    if (runtime->hasFunction(0x17B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x17B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC17Cu; }
        if (ctx->pc != 0x1DC17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B7C0_0x17b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC17Cu; }
        if (ctx->pc != 0x1DC17Cu) { return; }
    }
    ctx->pc = 0x1DC17Cu;
    // 0x1dc17c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1dc17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1dc180: 0x2442a508  addiu       $v0, $v0, -0x5AF8
    ctx->pc = 0x1dc180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944008));
    // 0x1dc184: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1dc184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1dc188: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dc188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc18c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dc18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dc190: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dc190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dc194: 0x0  nop
    ctx->pc = 0x1dc194u;
    // NOP
label_1dc198:
    // 0x1dc198: 0x0  nop
    ctx->pc = 0x1dc198u;
    // NOP
    // 0x1dc19c: 0x0  nop
    ctx->pc = 0x1dc19cu;
    // NOP
    // 0x1dc1a0: 0x0  nop
    ctx->pc = 0x1dc1a0u;
    // NOP
    // 0x1dc1a4: 0x0  nop
    ctx->pc = 0x1dc1a4u;
    // NOP
    // 0x1dc1a8: 0x0  nop
    ctx->pc = 0x1dc1a8u;
    // NOP
    // 0x1dc1ac: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DC1ACu;
    {
        const bool branch_taken_0x1dc1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC1ACu;
            // 0x1dc1b0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1ac) {
            ctx->pc = 0x1DC198u;
            runtime->cooperativeGuestYield();
            goto label_1dc198;
        }
    }
    ctx->pc = 0x1DC1B4u;
    // 0x1dc1b4: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1dc1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1dc1b8: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1dc1b8u;
    ctx->vu0_vf[4] = ctx->vu0_vf[0];
    // 0x1dc1bc: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1dc1bcu;
    ctx->vu0_vf[5] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x1dc1c0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1dc1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1dc1c4: 0x4be32b3d  vmr32.xyzw  $vf3, $vf5
    ctx->pc = 0x1dc1c4u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,1));
    // 0x1dc1c8: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x1dc1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1dc1cc: 0x4be21b3d  vmr32.xyzw  $vf2, $vf3
    ctx->pc = 0x1dc1ccu;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1dc1d0: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1dc1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1dc1d4: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1dc1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc1d8: 0x26030060  addiu       $v1, $s0, 0x60
    ctx->pc = 0x1dc1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1dc1dc: 0xfa020020  sqc2        $vf2, 0x20($s0)
    ctx->pc = 0x1dc1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc1e0: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1dc1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1dc1e4: 0xf8430010  sqc2        $vf3, 0x10($v0)
    ctx->pc = 0x1dc1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1dc1e8: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x1dc1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1dc1ec: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1dc1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1dc1f0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1dc1f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc1f4: 0xfa020060  sqc2        $vf2, 0x60($s0)
    ctx->pc = 0x1dc1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc1f8: 0xfba50050  sqc2        $vf5, 0x50($sp)
    ctx->pc = 0x1dc1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1dc1fc: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1dc1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1dc200: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1dc200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc204: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x1dc204u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1dc208: 0xf8630010  sqc2        $vf3, 0x10($v1)
    ctx->pc = 0x1dc208u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1dc20c: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x1dc20cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1dc210: 0xfa0100c0  sqc2        $vf1, 0xC0($s0)
    ctx->pc = 0x1dc210u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc214: 0xfa0100d0  sqc2        $vf1, 0xD0($s0)
    ctx->pc = 0x1dc214u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc218: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1dc218u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc21c: 0xfa0100f0  sqc2        $vf1, 0xF0($s0)
    ctx->pc = 0x1dc21cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc220: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dc220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc224: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1dc224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1dc228: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x1dc228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x1dc22c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1dc22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dc230: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1dc230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dc234: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC234u;
            // 0x1dc238: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC198u: goto label_1dc198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC23Cu;
    // 0x1dc23c: 0x0  nop
    ctx->pc = 0x1dc23cu;
    // NOP
}
