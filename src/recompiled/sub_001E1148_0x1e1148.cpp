#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1148
// Address: 0x1e1148 - 0x1e11c0
void sub_001E1148_0x1e1148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1148_0x1e1148");
#endif

    ctx->pc = 0x1e1148u;

    // 0x1e1148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e114c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e114cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e1150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1154: 0xc0779c6  jal         func_1DE718
    ctx->pc = 0x1E1154u;
    SET_GPR_U32(ctx, 31, 0x1E115Cu);
    ctx->pc = 0x1E1158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1154u;
            // 0x1e1158: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE718u;
    if (runtime->hasFunction(0x1DE718u)) {
        auto targetFn = runtime->lookupFunction(0x1DE718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E115Cu; }
        if (ctx->pc != 0x1E115Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE718_0x1de718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E115Cu; }
        if (ctx->pc != 0x1E115Cu) { return; }
    }
    ctx->pc = 0x1E115Cu;
    // 0x1e115c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e115cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e1160: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e1160u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1164: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e1164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e1168: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x1e1168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x1e116c: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x1e116cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x1e1170: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x1e1170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x1e1174: 0xfa010220  sqc2        $vf1, 0x220($s0)
    ctx->pc = 0x1e1174u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1178: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x1e1178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x1e117c: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x1e117cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x1e1180: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e1184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1188: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x1e1188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x1e118c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e118cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1190: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x1E1190u;
    SET_GPR_U32(ctx, 31, 0x1E1198u);
    ctx->pc = 0x1E1194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1190u;
            // 0x1e1194: 0xfa010210  sqc2        $vf1, 0x210($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 528), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (runtime->hasFunction(0x242A88u)) {
        auto targetFn = runtime->lookupFunction(0x242A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1198u; }
        if (ctx->pc != 0x1E1198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a88_0x242a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1198u; }
        if (ctx->pc != 0x1E1198u) { return; }
    }
    ctx->pc = 0x1E1198u;
    // 0x1e1198: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1e1198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1e119c: 0xae00023c  sw          $zero, 0x23C($s0)
    ctx->pc = 0x1e119cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 0));
    // 0x1e11a0: 0xc4406f64  lwc1        $f0, 0x6F64($v0)
    ctx->pc = 0x1e11a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e11a4: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x1e11a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x1e11a8: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x1e11a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
    // 0x1e11ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e11acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e11b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e11b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e11b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E11B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E11B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E11B4u;
            // 0x1e11b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E11BCu;
    // 0x1e11bc: 0x0  nop
    ctx->pc = 0x1e11bcu;
    // NOP
}
