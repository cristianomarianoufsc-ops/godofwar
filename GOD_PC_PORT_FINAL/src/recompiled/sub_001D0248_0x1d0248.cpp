#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0248
// Address: 0x1d0248 - 0x1d0b10
void sub_001D0248_0x1d0248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0248_0x1d0248");
#endif

    ctx->pc = 0x1d0248u;

    // 0x1d0248: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1d0248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1d024c: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1d024cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1d0250: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x1d0250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x1d0254: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d0254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0258: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1d0258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x1d025c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1d025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1d0260: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1d0260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1d0264: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1d0264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1d0268: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x1d0268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x1d026c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1d026cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1d0270: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1d0270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x1d0274: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x1d0274u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d0278: 0x8e370024  lw          $s7, 0x24($s1)
    ctx->pc = 0x1d0278u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d027c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1d027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d0280: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d0280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1d0284: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1d0284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1d0288: 0x40f809  jalr        $v0
    ctx->pc = 0x1D0288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0290u);
        ctx->pc = 0x1D028Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0288u;
            // 0x1d028c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0290u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0350u: goto label_1d0350;
            case 0x1D0394u: goto label_1d0394;
            case 0x1D03ECu: goto label_1d03ec;
            case 0x1D0470u: goto label_1d0470;
            case 0x1D047Cu: goto label_1d047c;
            case 0x1D0498u: goto label_1d0498;
            case 0x1D04C8u: goto label_1d04c8;
            case 0x1D04F0u: goto label_1d04f0;
            case 0x1D0510u: goto label_1d0510;
            case 0x1D0514u: goto label_1d0514;
            case 0x1D0524u: goto label_1d0524;
            case 0x1D0530u: goto label_1d0530;
            case 0x1D0534u: goto label_1d0534;
            case 0x1D0550u: goto label_1d0550;
            case 0x1D0570u: goto label_1d0570;
            case 0x1D05BCu: goto label_1d05bc;
            case 0x1D05C0u: goto label_1d05c0;
            case 0x1D05DCu: goto label_1d05dc;
            case 0x1D0604u: goto label_1d0604;
            case 0x1D0640u: goto label_1d0640;
            case 0x1D0658u: goto label_1d0658;
            case 0x1D0668u: goto label_1d0668;
            case 0x1D066Cu: goto label_1d066c;
            case 0x1D0674u: goto label_1d0674;
            case 0x1D06D4u: goto label_1d06d4;
            case 0x1D0714u: goto label_1d0714;
            case 0x1D071Cu: goto label_1d071c;
            case 0x1D073Cu: goto label_1d073c;
            case 0x1D0740u: goto label_1d0740;
            case 0x1D0774u: goto label_1d0774;
            case 0x1D0790u: goto label_1d0790;
            case 0x1D07A8u: goto label_1d07a8;
            case 0x1D07C0u: goto label_1d07c0;
            case 0x1D07D8u: goto label_1d07d8;
            case 0x1D07F0u: goto label_1d07f0;
            case 0x1D082Cu: goto label_1d082c;
            case 0x1D0860u: goto label_1d0860;
            case 0x1D08A0u: goto label_1d08a0;
            case 0x1D08BCu: goto label_1d08bc;
            case 0x1D08D8u: goto label_1d08d8;
            case 0x1D08FCu: goto label_1d08fc;
            case 0x1D0918u: goto label_1d0918;
            case 0x1D0968u: goto label_1d0968;
            case 0x1D0974u: goto label_1d0974;
            case 0x1D099Cu: goto label_1d099c;
            case 0x1D09A0u: goto label_1d09a0;
            case 0x1D09B0u: goto label_1d09b0;
            case 0x1D09C0u: goto label_1d09c0;
            case 0x1D09C4u: goto label_1d09c4;
            case 0x1D09C8u: goto label_1d09c8;
            case 0x1D09CCu: goto label_1d09cc;
            case 0x1D09ECu: goto label_1d09ec;
            case 0x1D0A08u: goto label_1d0a08;
            case 0x1D0A50u: goto label_1d0a50;
            case 0x1D0AA8u: goto label_1d0aa8;
            case 0x1D0AE8u: goto label_1d0ae8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0290u; }
            if (ctx->pc != 0x1D0290u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0290u;
    // 0x1d0290: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1d0290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d0294: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d0294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d0298: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d0298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d029c: 0x40f809  jalr        $v0
    ctx->pc = 0x1D029Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D02A4u);
        ctx->pc = 0x1D02A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D029Cu;
            // 0x1d02a0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D02A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0350u: goto label_1d0350;
            case 0x1D0394u: goto label_1d0394;
            case 0x1D03ECu: goto label_1d03ec;
            case 0x1D0470u: goto label_1d0470;
            case 0x1D047Cu: goto label_1d047c;
            case 0x1D0498u: goto label_1d0498;
            case 0x1D04C8u: goto label_1d04c8;
            case 0x1D04F0u: goto label_1d04f0;
            case 0x1D0510u: goto label_1d0510;
            case 0x1D0514u: goto label_1d0514;
            case 0x1D0524u: goto label_1d0524;
            case 0x1D0530u: goto label_1d0530;
            case 0x1D0534u: goto label_1d0534;
            case 0x1D0550u: goto label_1d0550;
            case 0x1D0570u: goto label_1d0570;
            case 0x1D05BCu: goto label_1d05bc;
            case 0x1D05C0u: goto label_1d05c0;
            case 0x1D05DCu: goto label_1d05dc;
            case 0x1D0604u: goto label_1d0604;
            case 0x1D0640u: goto label_1d0640;
            case 0x1D0658u: goto label_1d0658;
            case 0x1D0668u: goto label_1d0668;
            case 0x1D066Cu: goto label_1d066c;
            case 0x1D0674u: goto label_1d0674;
            case 0x1D06D4u: goto label_1d06d4;
            case 0x1D0714u: goto label_1d0714;
            case 0x1D071Cu: goto label_1d071c;
            case 0x1D073Cu: goto label_1d073c;
            case 0x1D0740u: goto label_1d0740;
            case 0x1D0774u: goto label_1d0774;
            case 0x1D0790u: goto label_1d0790;
            case 0x1D07A8u: goto label_1d07a8;
            case 0x1D07C0u: goto label_1d07c0;
            case 0x1D07D8u: goto label_1d07d8;
            case 0x1D07F0u: goto label_1d07f0;
            case 0x1D082Cu: goto label_1d082c;
            case 0x1D0860u: goto label_1d0860;
            case 0x1D08A0u: goto label_1d08a0;
            case 0x1D08BCu: goto label_1d08bc;
            case 0x1D08D8u: goto label_1d08d8;
            case 0x1D08FCu: goto label_1d08fc;
            case 0x1D0918u: goto label_1d0918;
            case 0x1D0968u: goto label_1d0968;
            case 0x1D0974u: goto label_1d0974;
            case 0x1D099Cu: goto label_1d099c;
            case 0x1D09A0u: goto label_1d09a0;
            case 0x1D09B0u: goto label_1d09b0;
            case 0x1D09C0u: goto label_1d09c0;
            case 0x1D09C4u: goto label_1d09c4;
            case 0x1D09C8u: goto label_1d09c8;
            case 0x1D09CCu: goto label_1d09cc;
            case 0x1D09ECu: goto label_1d09ec;
            case 0x1D0A08u: goto label_1d0a08;
            case 0x1D0A50u: goto label_1d0a50;
            case 0x1D0AA8u: goto label_1d0aa8;
            case 0x1D0AE8u: goto label_1d0ae8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D02A4u; }
            if (ctx->pc != 0x1D02A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D02A4u;
    // 0x1d02a4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1d02a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d02a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1d02a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d02ac: 0x8e960000  lw          $s6, 0x0($s4)
    ctx->pc = 0x1d02acu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d02b0: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1d02b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1d02b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d02b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d02b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d02bc: 0x78420050  lq          $v0, 0x50($v0)
    ctx->pc = 0x1d02bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1d02c0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1d02c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1d02c4: 0x8e8202d8  lw          $v0, 0x2D8($s4)
    ctx->pc = 0x1d02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 728)));
    // 0x1d02c8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1d02c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d02cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d02ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d02d0: 0xae8202d8  sw          $v0, 0x2D8($s4)
    ctx->pc = 0x1d02d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 728), GPR_U32(ctx, 2));
    // 0x1d02d4: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x1d02d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1d02d8: 0x848400c0  lh          $a0, 0xC0($a0)
    ctx->pc = 0x1d02d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x1d02dc: 0x40f809  jalr        $v0
    ctx->pc = 0x1D02DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D02E4u);
        ctx->pc = 0x1D02E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D02DCu;
            // 0x1d02e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D02E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0350u: goto label_1d0350;
            case 0x1D0394u: goto label_1d0394;
            case 0x1D03ECu: goto label_1d03ec;
            case 0x1D0470u: goto label_1d0470;
            case 0x1D047Cu: goto label_1d047c;
            case 0x1D0498u: goto label_1d0498;
            case 0x1D04C8u: goto label_1d04c8;
            case 0x1D04F0u: goto label_1d04f0;
            case 0x1D0510u: goto label_1d0510;
            case 0x1D0514u: goto label_1d0514;
            case 0x1D0524u: goto label_1d0524;
            case 0x1D0530u: goto label_1d0530;
            case 0x1D0534u: goto label_1d0534;
            case 0x1D0550u: goto label_1d0550;
            case 0x1D0570u: goto label_1d0570;
            case 0x1D05BCu: goto label_1d05bc;
            case 0x1D05C0u: goto label_1d05c0;
            case 0x1D05DCu: goto label_1d05dc;
            case 0x1D0604u: goto label_1d0604;
            case 0x1D0640u: goto label_1d0640;
            case 0x1D0658u: goto label_1d0658;
            case 0x1D0668u: goto label_1d0668;
            case 0x1D066Cu: goto label_1d066c;
            case 0x1D0674u: goto label_1d0674;
            case 0x1D06D4u: goto label_1d06d4;
            case 0x1D0714u: goto label_1d0714;
            case 0x1D071Cu: goto label_1d071c;
            case 0x1D073Cu: goto label_1d073c;
            case 0x1D0740u: goto label_1d0740;
            case 0x1D0774u: goto label_1d0774;
            case 0x1D0790u: goto label_1d0790;
            case 0x1D07A8u: goto label_1d07a8;
            case 0x1D07C0u: goto label_1d07c0;
            case 0x1D07D8u: goto label_1d07d8;
            case 0x1D07F0u: goto label_1d07f0;
            case 0x1D082Cu: goto label_1d082c;
            case 0x1D0860u: goto label_1d0860;
            case 0x1D08A0u: goto label_1d08a0;
            case 0x1D08BCu: goto label_1d08bc;
            case 0x1D08D8u: goto label_1d08d8;
            case 0x1D08FCu: goto label_1d08fc;
            case 0x1D0918u: goto label_1d0918;
            case 0x1D0968u: goto label_1d0968;
            case 0x1D0974u: goto label_1d0974;
            case 0x1D099Cu: goto label_1d099c;
            case 0x1D09A0u: goto label_1d09a0;
            case 0x1D09B0u: goto label_1d09b0;
            case 0x1D09C0u: goto label_1d09c0;
            case 0x1D09C4u: goto label_1d09c4;
            case 0x1D09C8u: goto label_1d09c8;
            case 0x1D09CCu: goto label_1d09cc;
            case 0x1D09ECu: goto label_1d09ec;
            case 0x1D0A08u: goto label_1d0a08;
            case 0x1D0A50u: goto label_1d0a50;
            case 0x1D0AA8u: goto label_1d0aa8;
            case 0x1D0AE8u: goto label_1d0ae8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D02E4u; }
            if (ctx->pc != 0x1D02E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D02E4u;
    // 0x1d02e4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1d02e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1d02e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d02e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d02ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d02ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d02f0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1d02f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d02f4: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1d02f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d02f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d02f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d02fc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1d02fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1d0300: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1d0300u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d0304: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1d0304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1d0308: 0x8e820174  lw          $v0, 0x174($s4)
    ctx->pc = 0x1d0308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
    // 0x1d030c: 0xdba30080  lqc2        $vf3, 0x80($sp)
    ctx->pc = 0x1d030cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d0310: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x1d0310u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d0314: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d0314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d0318: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D0318u;
    {
        const bool branch_taken_0x1d0318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D031Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0318u;
            // 0x1d031c: 0xfba10060  sqc2        $vf1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0318) {
            ctx->pc = 0x1D0350u;
            goto label_1d0350;
        }
    }
    ctx->pc = 0x1D0320u;
    // 0x1d0320: 0x24020405  addiu       $v0, $zero, 0x405
    ctx->pc = 0x1d0320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    // 0x1d0324: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1d0324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1d0328: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x1d0328u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d032c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1d032cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1d0330: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1d0330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1d0334: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1d0334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1d0338: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d0338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d033c: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1d033cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1d0340: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1d0340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0344: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1D0344u;
    SET_GPR_U32(ctx, 31, 0x1D034Cu);
    ctx->pc = 0x1D0348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0344u;
            // 0x1d0348: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D034Cu; }
        if (ctx->pc != 0x1D034Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D034Cu; }
        if (ctx->pc != 0x1D034Cu) { return; }
    }
    ctx->pc = 0x1D034Cu;
    // 0x1d034c: 0x0  nop
    ctx->pc = 0x1d034cu;
    // NOP
label_1d0350:
    // 0x1d0350: 0xc074012  jal         func_1D0048
    ctx->pc = 0x1D0350u;
    SET_GPR_U32(ctx, 31, 0x1D0358u);
    ctx->pc = 0x1D0354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0350u;
            // 0x1d0354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0048u;
    if (runtime->hasFunction(0x1D0048u)) {
        auto targetFn = runtime->lookupFunction(0x1D0048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0358u; }
        if (ctx->pc != 0x1D0358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0048_0x1d0048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0358u; }
        if (ctx->pc != 0x1D0358u) { return; }
    }
    ctx->pc = 0x1D0358u;
    // 0x1d0358: 0x96220078  lhu         $v0, 0x78($s1)
    ctx->pc = 0x1d0358u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1d035c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D035Cu;
    {
        const bool branch_taken_0x1d035c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D035Cu;
            // 0x1d0360: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d035c) {
            ctx->pc = 0x1D0394u;
            goto label_1d0394;
        }
    }
    ctx->pc = 0x1D0364u;
    // 0x1d0364: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1d0364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1d0368: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d0368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d036c: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x1d036cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0370: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d0370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0374: 0x96220078  lhu         $v0, 0x78($s1)
    ctx->pc = 0x1d0374u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1d0378: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d0378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d037c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d037cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d0380: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1d0380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d0384: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d0384u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d0388: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x1d0388u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d038c: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x1d038cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1d0390: 0xa6220078  sh          $v0, 0x78($s1)
    ctx->pc = 0x1d0390u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 2));
label_1d0394:
    // 0x1d0394: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1d0394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1d0398: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d0398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d039c: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1D039Cu;
    {
        const bool branch_taken_0x1d039c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D03A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D039Cu;
            // 0x1d03a0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d039c) {
            ctx->pc = 0x1D0530u;
            goto label_1d0530;
        }
    }
    ctx->pc = 0x1D03A4u;
    // 0x1d03a4: 0x8c42e560  lw          $v0, -0x1AA0($v0)
    ctx->pc = 0x1d03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x1d03a8: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x1d03a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x1d03ac: 0x54400061  bnel        $v0, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x1D03ACu;
    {
        const bool branch_taken_0x1d03ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d03ac) {
            ctx->pc = 0x1D03B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D03ACu;
            // 0x1d03b0: 0x8ea2004c  lw          $v0, 0x4C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0534u;
            goto label_1d0534;
        }
    }
    ctx->pc = 0x1D03B4u;
    // 0x1d03b4: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1D03B4u;
    SET_GPR_U32(ctx, 31, 0x1D03BCu);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03BCu; }
        if (ctx->pc != 0x1D03BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03BCu; }
        if (ctx->pc != 0x1D03BCu) { return; }
    }
    ctx->pc = 0x1D03BCu;
    // 0x1d03bc: 0x5440005d  bnel        $v0, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x1D03BCu;
    {
        const bool branch_taken_0x1d03bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d03bc) {
            ctx->pc = 0x1D03C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D03BCu;
            // 0x1d03c0: 0x8ea2004c  lw          $v0, 0x4C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0534u;
            goto label_1d0534;
        }
    }
    ctx->pc = 0x1D03C4u;
    // 0x1d03c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d03c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d03c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d03cc: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1d03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1d03d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d03d4: 0xc4400178  lwc1        $f0, 0x178($v0)
    ctx->pc = 0x1d03d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d03d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d03d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d03dc: 0x0  nop
    ctx->pc = 0x1d03dcu;
    // NOP
    // 0x1d03e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D03E0u;
    {
        const bool branch_taken_0x1d03e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D03E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D03E0u;
            // 0x1d03e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d03e0) {
            ctx->pc = 0x1D03ECu;
            goto label_1d03ec;
        }
    }
    ctx->pc = 0x1D03E8u;
    // 0x1d03e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d03e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d03ec:
    // 0x1d03ec: 0xc681017c  lwc1        $f1, 0x17C($s4)
    ctx->pc = 0x1d03ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d03f0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1d03f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1d03f4: 0xc6800178  lwc1        $f0, 0x178($s4)
    ctx->pc = 0x1d03f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d03f8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1d03f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1d03fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d03fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d0400: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d0400u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1d0404: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d0404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d0408: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x1d0408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x1d040c: 0x3421ffef  ori         $at, $at, 0xFFEF
    ctx->pc = 0x1d040cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65519);
    // 0x1d0410: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d0410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d0414: 0x8042009b  lb          $v0, 0x9B($v0)
    ctx->pc = 0x1d0414u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 155)));
    // 0x1d0418: 0x8c70cb94  lw          $s0, -0x346C($v1)
    ctx->pc = 0x1d0418u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953876)));
    // 0x1d041c: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x1d041cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d0420: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d0420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1d0424: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d0424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d0428: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0428u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d042c: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x1d042cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x1d0430: 0x8e0315ac  lw          $v1, 0x15AC($s0)
    ctx->pc = 0x1d0430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5548)));
    // 0x1d0434: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0438: 0x26051584  addiu       $a1, $s0, 0x1584
    ctx->pc = 0x1d0438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5508));
    // 0x1d043c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d043cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d0440: 0x3300b  movn        $a2, $zero, $v1
    ctx->pc = 0x1d0440u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x1d0444: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1d0444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d0448: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1d0448u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d044c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0450: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D0450u;
    {
        const bool branch_taken_0x1d0450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0450) {
            ctx->pc = 0x1D0498u;
            goto label_1d0498;
        }
    }
    ctx->pc = 0x1D0458u;
    // 0x1d0458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d045c: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D045Cu;
    {
        const bool branch_taken_0x1d045c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D045Cu;
            // 0x1d0460: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d045c) {
            ctx->pc = 0x1D0470u;
            goto label_1d0470;
        }
    }
    ctx->pc = 0x1D0464u;
    // 0x1d0464: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0464u;
    {
        const bool branch_taken_0x1d0464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0464u;
            // 0x1d0468: 0xae03022c  sw          $v1, 0x22C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0464) {
            ctx->pc = 0x1D047Cu;
            goto label_1d047c;
        }
    }
    ctx->pc = 0x1D046Cu;
    // 0x1d046c: 0x0  nop
    ctx->pc = 0x1d046cu;
    // NOP
label_1d0470:
    // 0x1d0470: 0x56420002  bnel        $s2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D0470u;
    {
        const bool branch_taken_0x1d0470 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0470) {
            ctx->pc = 0x1D0474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0470u;
            // 0x1d0474: 0xae030234  sw          $v1, 0x234($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D047Cu;
            goto label_1d047c;
        }
    }
    ctx->pc = 0x1D0478u;
    // 0x1d0478: 0xae030230  sw          $v1, 0x230($s0)
    ctx->pc = 0x1d0478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 3));
label_1d047c:
    // 0x1d047c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d047cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d0480: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1d0480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d0484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0488: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1D0488u;
    SET_GPR_U32(ctx, 31, 0x1D0490u);
    ctx->pc = 0x1D048Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0488u;
            // 0x1d048c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0490u; }
        if (ctx->pc != 0x1D0490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0490u; }
        if (ctx->pc != 0x1D0490u) { return; }
    }
    ctx->pc = 0x1D0490u;
    // 0x1d0490: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D0490u;
    {
        const bool branch_taken_0x1d0490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0490u;
            // 0x1d0494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0490) {
            ctx->pc = 0x1D0514u;
            goto label_1d0514;
        }
    }
    ctx->pc = 0x1D0498u;
label_1d0498:
    // 0x1d0498: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D0498u;
    {
        const bool branch_taken_0x1d0498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D049Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0498u;
            // 0x1d049c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0498) {
            ctx->pc = 0x1D0510u;
            goto label_1d0510;
        }
    }
    ctx->pc = 0x1D04A0u;
    // 0x1d04a0: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D04A0u;
    {
        const bool branch_taken_0x1d04a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D04A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04A0u;
            // 0x1d04a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04a0) {
            ctx->pc = 0x1D04C8u;
            goto label_1d04c8;
        }
    }
    ctx->pc = 0x1D04A8u;
    // 0x1d04a8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1d04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d04ac: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D04ACu;
    {
        const bool branch_taken_0x1d04ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1D04B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04ACu;
            // 0x1d04b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04ac) {
            ctx->pc = 0x1D04C8u;
            goto label_1d04c8;
        }
    }
    ctx->pc = 0x1D04B4u;
    // 0x1d04b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d04b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d04b8: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1D04B8u;
    SET_GPR_U32(ctx, 31, 0x1D04C0u);
    ctx->pc = 0x1D04BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04B8u;
            // 0x1d04bc: 0xae02022c  sw          $v0, 0x22C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04C0u; }
        if (ctx->pc != 0x1D04C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04C0u; }
        if (ctx->pc != 0x1D04C0u) { return; }
    }
    ctx->pc = 0x1D04C0u;
    // 0x1d04c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1D04C0u;
    {
        const bool branch_taken_0x1d04c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D04C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04C0u;
            // 0x1d04c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04c0) {
            ctx->pc = 0x1D0514u;
            goto label_1d0514;
        }
    }
    ctx->pc = 0x1D04C8u;
label_1d04c8:
    // 0x1d04c8: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D04C8u;
    {
        const bool branch_taken_0x1d04c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D04CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04C8u;
            // 0x1d04cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04c8) {
            ctx->pc = 0x1D04F0u;
            goto label_1d04f0;
        }
    }
    ctx->pc = 0x1D04D0u;
    // 0x1d04d0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1d04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d04d4: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D04D4u;
    {
        const bool branch_taken_0x1d04d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1D04D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04D4u;
            // 0x1d04d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04d4) {
            ctx->pc = 0x1D04F0u;
            goto label_1d04f0;
        }
    }
    ctx->pc = 0x1D04DCu;
    // 0x1d04dc: 0xae120230  sw          $s2, 0x230($s0)
    ctx->pc = 0x1d04dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 18));
    // 0x1d04e0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1D04E0u;
    SET_GPR_U32(ctx, 31, 0x1D04E8u);
    ctx->pc = 0x1D04E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04E0u;
            // 0x1d04e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04E8u; }
        if (ctx->pc != 0x1D04E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04E8u; }
        if (ctx->pc != 0x1D04E8u) { return; }
    }
    ctx->pc = 0x1D04E8u;
    // 0x1d04e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D04E8u;
    {
        const bool branch_taken_0x1d04e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D04ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04E8u;
            // 0x1d04ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04e8) {
            ctx->pc = 0x1D0514u;
            goto label_1d0514;
        }
    }
    ctx->pc = 0x1D04F0u;
label_1d04f0:
    // 0x1d04f0: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D04F0u;
    {
        const bool branch_taken_0x1d04f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D04F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04F0u;
            // 0x1d04f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04f0) {
            ctx->pc = 0x1D0514u;
            goto label_1d0514;
        }
    }
    ctx->pc = 0x1D04F8u;
    // 0x1d04f8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d04fc: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D04FCu;
    {
        const bool branch_taken_0x1d04fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1D0500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04FCu;
            // 0x1d0500: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04fc) {
            ctx->pc = 0x1D0510u;
            goto label_1d0510;
        }
    }
    ctx->pc = 0x1D0504u;
    // 0x1d0504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0508: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1D0508u;
    SET_GPR_U32(ctx, 31, 0x1D0510u);
    ctx->pc = 0x1D050Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0508u;
            // 0x1d050c: 0xae020234  sw          $v0, 0x234($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0510u; }
        if (ctx->pc != 0x1D0510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0510u; }
        if (ctx->pc != 0x1D0510u) { return; }
    }
    ctx->pc = 0x1D0510u;
label_1d0510:
    // 0x1d0510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0514:
    // 0x1d0514: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0514u;
    {
        const bool branch_taken_0x1d0514 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0514u;
            // 0x1d0518: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0514) {
            ctx->pc = 0x1D0524u;
            goto label_1d0524;
        }
    }
    ctx->pc = 0x1D051Cu;
    // 0x1d051c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D051Cu;
    {
        const bool branch_taken_0x1d051c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D051Cu;
            // 0x1d0520: 0xae13001c  sw          $s3, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d051c) {
            ctx->pc = 0x1D0530u;
            goto label_1d0530;
        }
    }
    ctx->pc = 0x1D0524u;
label_1d0524:
    // 0x1d0524: 0x56420002  bnel        $s2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D0524u;
    {
        const bool branch_taken_0x1d0524 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0524) {
            ctx->pc = 0x1D0528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0524u;
            // 0x1d0528: 0xae130024  sw          $s3, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0530u;
            goto label_1d0530;
        }
    }
    ctx->pc = 0x1D052Cu;
    // 0x1d052c: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x1d052cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
label_1d0530:
    // 0x1d0530: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x1d0530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_1d0534:
    // 0x1d0534: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0534u;
    {
        const bool branch_taken_0x1d0534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0534) {
            ctx->pc = 0x1D0538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0534u;
            // 0x1d0538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0550u;
            goto label_1d0550;
        }
    }
    ctx->pc = 0x1D053Cu;
    // 0x1d053c: 0xc090d56  jal         func_243558
    ctx->pc = 0x1D053Cu;
    SET_GPR_U32(ctx, 31, 0x1D0544u);
    ctx->pc = 0x1D0540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D053Cu;
            // 0x1d0540: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0544u; }
        if (ctx->pc != 0x1D0544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0544u; }
        if (ctx->pc != 0x1D0544u) { return; }
    }
    ctx->pc = 0x1D0544u;
    // 0x1d0544: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1d0544u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1d0548: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1d0548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1d054c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d054cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1d0550:
    // 0x1d0550: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0550u;
    {
        const bool branch_taken_0x1d0550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0550) {
            ctx->pc = 0x1D0570u;
            goto label_1d0570;
        }
    }
    ctx->pc = 0x1D0558u;
    // 0x1d0558: 0xc07634a  jal         func_1D8D28
    ctx->pc = 0x1D0558u;
    SET_GPR_U32(ctx, 31, 0x1D0560u);
    ctx->pc = 0x1D055Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0558u;
            // 0x1d055c: 0x7ba40060  lq          $a0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D28u;
    if (runtime->hasFunction(0x1D8D28u)) {
        auto targetFn = runtime->lookupFunction(0x1D8D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0560u; }
        if (ctx->pc != 0x1D0560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8d28_0x1d8ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0560u; }
        if (ctx->pc != 0x1D0560u) { return; }
    }
    ctx->pc = 0x1D0560u;
    // 0x1d0560: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0560u;
    {
        const bool branch_taken_0x1d0560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0560) {
            ctx->pc = 0x1D0570u;
            goto label_1d0570;
        }
    }
    ctx->pc = 0x1D0568u;
    // 0x1d0568: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1D0568u;
    SET_GPR_U32(ctx, 31, 0x1D0570u);
    ctx->pc = 0x1D056Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0568u;
            // 0x1d056c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0570u; }
        if (ctx->pc != 0x1D0570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0570u; }
        if (ctx->pc != 0x1D0570u) { return; }
    }
    ctx->pc = 0x1D0570u;
label_1d0570:
    // 0x1d0570: 0xc073f62  jal         func_1CFD88
    ctx->pc = 0x1D0570u;
    SET_GPR_U32(ctx, 31, 0x1D0578u);
    ctx->pc = 0x1D0574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0570u;
            // 0x1d0574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD88u;
    if (runtime->hasFunction(0x1CFD88u)) {
        auto targetFn = runtime->lookupFunction(0x1CFD88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0578u; }
        if (ctx->pc != 0x1D0578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFD88_0x1cfd88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0578u; }
        if (ctx->pc != 0x1D0578u) { return; }
    }
    ctx->pc = 0x1D0578u;
    // 0x1d0578: 0x1440015b  bnez        $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x1D0578u;
    {
        const bool branch_taken_0x1d0578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D057Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0578u;
            // 0x1d057c: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0578) {
            ctx->pc = 0x1D0AE8u;
            goto label_1d0ae8;
        }
    }
    ctx->pc = 0x1D0580u;
    // 0x1d0580: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x1d0580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1d0584: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x1d0584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1d0588: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D0588u;
    {
        const bool branch_taken_0x1d0588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D058Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0588u;
            // 0x1d058c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0588) {
            ctx->pc = 0x1D05C0u;
            goto label_1d05c0;
        }
    }
    ctx->pc = 0x1D0590u;
    // 0x1d0590: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d0590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d0594: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x1d0594u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x1d0598: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d0598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d059c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d05a0: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1d05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1d05a4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d05a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d05a8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d05a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d05ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d05acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d05b0: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D05B0u;
    {
        const bool branch_taken_0x1d05b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D05B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D05B0u;
            // 0x1d05b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05b0) {
            ctx->pc = 0x1D05BCu;
            goto label_1d05bc;
        }
    }
    ctx->pc = 0x1D05B8u;
    // 0x1d05b8: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d05b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d05bc:
    // 0x1d05bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d05bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d05c0:
    // 0x1d05c0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d05c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d05c4: 0x8ee30080  lw          $v1, 0x80($s7)
    ctx->pc = 0x1d05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 128)));
    // 0x1d05c8: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x1d05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x1d05cc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D05CCu;
    {
        const bool branch_taken_0x1d05cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d05cc) {
            ctx->pc = 0x1D05DCu;
            goto label_1d05dc;
        }
    }
    ctx->pc = 0x1D05D4u;
    // 0x1d05d4: 0xc073f16  jal         func_1CFC58
    ctx->pc = 0x1D05D4u;
    SET_GPR_U32(ctx, 31, 0x1D05DCu);
    ctx->pc = 0x1D05D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D05D4u;
            // 0x1d05d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC58u;
    if (runtime->hasFunction(0x1CFC58u)) {
        auto targetFn = runtime->lookupFunction(0x1CFC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D05DCu; }
        if (ctx->pc != 0x1D05DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFC58_0x1cfc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D05DCu; }
        if (ctx->pc != 0x1D05DCu) { return; }
    }
    ctx->pc = 0x1D05DCu;
label_1d05dc:
    // 0x1d05dc: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1D05DCu;
    SET_GPR_U32(ctx, 31, 0x1D05E4u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D05E4u; }
        if (ctx->pc != 0x1D05E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D05E4u; }
        if (ctx->pc != 0x1D05E4u) { return; }
    }
    ctx->pc = 0x1D05E4u;
    // 0x1d05e4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D05E4u;
    {
        const bool branch_taken_0x1d05e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d05e4) {
            ctx->pc = 0x1D05E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D05E4u;
            // 0x1d05e8: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0604u;
            goto label_1d0604;
        }
    }
    ctx->pc = 0x1D05ECu;
    // 0x1d05ec: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x1d05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1d05f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d05f4: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1d05f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x1d05f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d05f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d05fc: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x1d05fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x1d0600: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d0600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d0604:
    // 0x1d0604: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0608: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x1d0608u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d060c: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D060Cu;
    {
        const bool branch_taken_0x1d060c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d060c) {
            ctx->pc = 0x1D0674u;
            goto label_1d0674;
        }
    }
    ctx->pc = 0x1D0614u;
    // 0x1d0614: 0x16400017  bnez        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D0614u;
    {
        const bool branch_taken_0x1d0614 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0614u;
            // 0x1d0618: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0614) {
            ctx->pc = 0x1D0674u;
            goto label_1d0674;
        }
    }
    ctx->pc = 0x1D061Cu;
    // 0x1d061c: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1d061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1d0620: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1d0620u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0624: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d0624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d0628: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1d0628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1d062c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D062Cu;
    {
        const bool branch_taken_0x1d062c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D062Cu;
            // 0x1d0630: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d062c) {
            ctx->pc = 0x1D0668u;
            goto label_1d0668;
        }
    }
    ctx->pc = 0x1D0634u;
    // 0x1d0634: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1d0634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x1d0638: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0638u;
    {
        const bool branch_taken_0x1d0638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D063Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0638u;
            // 0x1d063c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0638) {
            ctx->pc = 0x1D0658u;
            goto label_1d0658;
        }
    }
    ctx->pc = 0x1D0640u;
label_1d0640:
    // 0x1d0640: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d0640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d0644: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1d0644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1d0648: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0648u;
    {
        const bool branch_taken_0x1d0648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0648) {
            ctx->pc = 0x1D066Cu;
            goto label_1d066c;
        }
    }
    ctx->pc = 0x1D0650u;
    // 0x1d0650: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d0650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0654: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d0654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d0658:
    // 0x1d0658: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1d0658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1d065c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1d065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1d0660: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D0660u;
    {
        const bool branch_taken_0x1d0660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D0664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0660u;
            // 0x1d0664: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0660) {
            ctx->pc = 0x1D0640u;
            runtime->cooperativeGuestYield();
            goto label_1d0640;
        }
    }
    ctx->pc = 0x1D0668u;
label_1d0668:
    // 0x1d0668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d066c:
    // 0x1d066c: 0xc074944  jal         func_1D2510
    ctx->pc = 0x1D066Cu;
    SET_GPR_U32(ctx, 31, 0x1D0674u);
    ctx->pc = 0x1D0670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D066Cu;
            // 0x1d0670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2510u;
    if (runtime->hasFunction(0x1D2510u)) {
        auto targetFn = runtime->lookupFunction(0x1D2510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0674u; }
        if (ctx->pc != 0x1D0674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2510_0x1d2510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0674u; }
        if (ctx->pc != 0x1D0674u) { return; }
    }
    ctx->pc = 0x1D0674u;
label_1d0674:
    // 0x1d0674: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1D0674u;
    SET_GPR_U32(ctx, 31, 0x1D067Cu);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D067Cu; }
        if (ctx->pc != 0x1D067Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D067Cu; }
        if (ctx->pc != 0x1D067Cu) { return; }
    }
    ctx->pc = 0x1D067Cu;
    // 0x1d067c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D067Cu;
    {
        const bool branch_taken_0x1d067c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d067c) {
            ctx->pc = 0x1D0680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D067Cu;
            // 0x1d0680: 0xde220070  ld          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D06D4u;
            goto label_1d06d4;
        }
    }
    ctx->pc = 0x1D0684u;
    // 0x1d0684: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1d0684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d0688: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1d0688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1d068c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1d068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1d0690: 0x40f809  jalr        $v0
    ctx->pc = 0x1D0690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0698u);
        ctx->pc = 0x1D0694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0690u;
            // 0x1d0694: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0698u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0350u: goto label_1d0350;
            case 0x1D0394u: goto label_1d0394;
            case 0x1D03ECu: goto label_1d03ec;
            case 0x1D0470u: goto label_1d0470;
            case 0x1D047Cu: goto label_1d047c;
            case 0x1D0498u: goto label_1d0498;
            case 0x1D04C8u: goto label_1d04c8;
            case 0x1D04F0u: goto label_1d04f0;
            case 0x1D0510u: goto label_1d0510;
            case 0x1D0514u: goto label_1d0514;
            case 0x1D0524u: goto label_1d0524;
            case 0x1D0530u: goto label_1d0530;
            case 0x1D0534u: goto label_1d0534;
            case 0x1D0550u: goto label_1d0550;
            case 0x1D0570u: goto label_1d0570;
            case 0x1D05BCu: goto label_1d05bc;
            case 0x1D05C0u: goto label_1d05c0;
            case 0x1D05DCu: goto label_1d05dc;
            case 0x1D0604u: goto label_1d0604;
            case 0x1D0640u: goto label_1d0640;
            case 0x1D0658u: goto label_1d0658;
            case 0x1D0668u: goto label_1d0668;
            case 0x1D066Cu: goto label_1d066c;
            case 0x1D0674u: goto label_1d0674;
            case 0x1D06D4u: goto label_1d06d4;
            case 0x1D0714u: goto label_1d0714;
            case 0x1D071Cu: goto label_1d071c;
            case 0x1D073Cu: goto label_1d073c;
            case 0x1D0740u: goto label_1d0740;
            case 0x1D0774u: goto label_1d0774;
            case 0x1D0790u: goto label_1d0790;
            case 0x1D07A8u: goto label_1d07a8;
            case 0x1D07C0u: goto label_1d07c0;
            case 0x1D07D8u: goto label_1d07d8;
            case 0x1D07F0u: goto label_1d07f0;
            case 0x1D082Cu: goto label_1d082c;
            case 0x1D0860u: goto label_1d0860;
            case 0x1D08A0u: goto label_1d08a0;
            case 0x1D08BCu: goto label_1d08bc;
            case 0x1D08D8u: goto label_1d08d8;
            case 0x1D08FCu: goto label_1d08fc;
            case 0x1D0918u: goto label_1d0918;
            case 0x1D0968u: goto label_1d0968;
            case 0x1D0974u: goto label_1d0974;
            case 0x1D099Cu: goto label_1d099c;
            case 0x1D09A0u: goto label_1d09a0;
            case 0x1D09B0u: goto label_1d09b0;
            case 0x1D09C0u: goto label_1d09c0;
            case 0x1D09C4u: goto label_1d09c4;
            case 0x1D09C8u: goto label_1d09c8;
            case 0x1D09CCu: goto label_1d09cc;
            case 0x1D09ECu: goto label_1d09ec;
            case 0x1D0A08u: goto label_1d0a08;
            case 0x1D0A50u: goto label_1d0a50;
            case 0x1D0AA8u: goto label_1d0aa8;
            case 0x1D0AE8u: goto label_1d0ae8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0698u; }
            if (ctx->pc != 0x1D0698u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0698u;
    // 0x1d0698: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1d0698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d069c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d069cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d06a0: 0x3463e008  ori         $v1, $v1, 0xE008
    ctx->pc = 0x1d06a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57352);
    // 0x1d06a4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1d06a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d06a8: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x1d06a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
    // 0x1d06ac: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x1d06acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1d06b0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d06b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d06b4: 0x544000c4  bnel        $v0, $zero, . + 4 + (0xC4 << 2)
    ctx->pc = 0x1D06B4u;
    {
        const bool branch_taken_0x1d06b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d06b4) {
            ctx->pc = 0x1D06B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D06B4u;
            // 0x1d06b8: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D06BCu;
    // 0x1d06bc: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x1d06bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1d06c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d06c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d06c4: 0xc074bec  jal         func_1D2FB0
    ctx->pc = 0x1D06C4u;
    SET_GPR_U32(ctx, 31, 0x1D06CCu);
    ctx->pc = 0x1D06C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D06C4u;
            // 0x1d06c8: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2FB0u;
    if (runtime->hasFunction(0x1D2FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D2FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D06CCu; }
        if (ctx->pc != 0x1D06CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d2fb0_0x1d3050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D06CCu; }
        if (ctx->pc != 0x1D06CCu) { return; }
    }
    ctx->pc = 0x1D06CCu;
    // 0x1d06cc: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x1D06CCu;
    {
        const bool branch_taken_0x1d06cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D06D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D06CCu;
            // 0x1d06d0: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d06cc) {
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D06D4u;
label_1d06d4:
    // 0x1d06d4: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x1d06d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
    // 0x1d06d8: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1d06d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x1d06dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d06dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d06e0: 0x5444000e  bnel        $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D06E0u;
    {
        const bool branch_taken_0x1d06e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d06e0) {
            ctx->pc = 0x1D06E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D06E0u;
            // 0x1d06e4: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D071Cu;
            goto label_1d071c;
        }
    }
    ctx->pc = 0x1D06E8u;
    // 0x1d06e8: 0x92230083  lbu         $v1, 0x83($s1)
    ctx->pc = 0x1d06e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 131)));
    // 0x1d06ec: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x1d06ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d06f0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D06F0u;
    {
        const bool branch_taken_0x1d06f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D06F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D06F0u;
            // 0x1d06f4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d06f0) {
            ctx->pc = 0x1D0714u;
            goto label_1d0714;
        }
    }
    ctx->pc = 0x1D06F8u;
    // 0x1d06f8: 0xc073fd8  jal         func_1CFF60
    ctx->pc = 0x1D06F8u;
    SET_GPR_U32(ctx, 31, 0x1D0700u);
    ctx->pc = 0x1D06FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D06F8u;
            // 0x1d06fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF60u;
    if (runtime->hasFunction(0x1CFF60u)) {
        auto targetFn = runtime->lookupFunction(0x1CFF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0700u; }
        if (ctx->pc != 0x1D0700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFF60_0x1cff60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0700u; }
        if (ctx->pc != 0x1D0700u) { return; }
    }
    ctx->pc = 0x1D0700u;
    // 0x1d0700: 0x504000b1  beql        $v0, $zero, . + 4 + (0xB1 << 2)
    ctx->pc = 0x1D0700u;
    {
        const bool branch_taken_0x1d0700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0700) {
            ctx->pc = 0x1D0704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0700u;
            // 0x1d0704: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D0708u;
    // 0x1d0708: 0x96220072  lhu         $v0, 0x72($s1)
    ctx->pc = 0x1d0708u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 114)));
    // 0x1d070c: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x1D070Cu;
    {
        const bool branch_taken_0x1d070c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D070Cu;
            // 0x1d0710: 0x3042fbff  andi        $v0, $v0, 0xFBFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64511);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d070c) {
            ctx->pc = 0x1D09C0u;
            goto label_1d09c0;
        }
    }
    ctx->pc = 0x1D0714u;
label_1d0714:
    // 0x1d0714: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x1D0714u;
    {
        const bool branch_taken_0x1d0714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0714u;
            // 0x1d0718: 0xa2220083  sb          $v0, 0x83($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 131), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0714) {
            ctx->pc = 0x1D09C4u;
            goto label_1d09c4;
        }
    }
    ctx->pc = 0x1D071Cu;
label_1d071c:
    // 0x1d071c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D071Cu;
    {
        const bool branch_taken_0x1d071c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D071Cu;
            // 0x1d0720: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d071c) {
            ctx->pc = 0x1D0740u;
            goto label_1d0740;
        }
    }
    ctx->pc = 0x1D0724u;
    // 0x1d0724: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0728: 0x84440044  lh          $a0, 0x44($v0)
    ctx->pc = 0x1d0728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d072c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D072Cu;
    {
        const bool branch_taken_0x1d072c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D072Cu;
            // 0x1d0730: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d072c) {
            ctx->pc = 0x1D073Cu;
            goto label_1d073c;
        }
    }
    ctx->pc = 0x1D0734u;
    // 0x1d0734: 0x548200a5  bnel        $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1D0734u;
    {
        const bool branch_taken_0x1d0734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0734) {
            ctx->pc = 0x1D0738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0734u;
            // 0x1d0738: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D09CCu;
            goto label_1d09cc;
        }
    }
    ctx->pc = 0x1D073Cu;
label_1d073c:
    // 0x1d073c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d0740:
    // 0x1d0740: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d0740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d0744: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x1d0744u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d0748: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D0748u;
    {
        const bool branch_taken_0x1d0748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0748) {
            ctx->pc = 0x1D074Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0748u;
            // 0x1d074c: 0x96230072  lhu         $v1, 0x72($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 114)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0774u;
            goto label_1d0774;
        }
    }
    ctx->pc = 0x1D0750u;
    // 0x1d0750: 0x96220072  lhu         $v0, 0x72($s1)
    ctx->pc = 0x1d0750u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 114)));
    // 0x1d0754: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1d0754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1d0758: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0758u;
    {
        const bool branch_taken_0x1d0758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0758) {
            ctx->pc = 0x1D075Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0758u;
            // 0x1d075c: 0x96230072  lhu         $v1, 0x72($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 114)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0774u;
            goto label_1d0774;
        }
    }
    ctx->pc = 0x1D0760u;
    // 0x1d0760: 0x96260072  lhu         $a2, 0x72($s1)
    ctx->pc = 0x1d0760u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 114)));
    // 0x1d0764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0768: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x1D0768u;
    SET_GPR_U32(ctx, 31, 0x1D0770u);
    ctx->pc = 0x1D076Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0768u;
            // 0x1d076c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (runtime->hasFunction(0x1D15B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D15B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0770u; }
        if (ctx->pc != 0x1D0770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D15B0_0x1d15b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0770u; }
        if (ctx->pc != 0x1D0770u) { return; }
    }
    ctx->pc = 0x1D0770u;
    // 0x1d0770: 0x96230072  lhu         $v1, 0x72($s1)
    ctx->pc = 0x1d0770u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 114)));
label_1d0774:
    // 0x1d0774: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d0774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d0778: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0778u;
    {
        const bool branch_taken_0x1d0778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D077Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0778u;
            // 0x1d077c: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0778) {
            ctx->pc = 0x1D0790u;
            goto label_1d0790;
        }
    }
    ctx->pc = 0x1D0780u;
    // 0x1d0780: 0xc0738ea  jal         func_1CE3A8
    ctx->pc = 0x1D0780u;
    SET_GPR_U32(ctx, 31, 0x1D0788u);
    ctx->pc = 0x1D0784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0780u;
            // 0x1d0784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3A8u;
    if (runtime->hasFunction(0x1CE3A8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0788u; }
        if (ctx->pc != 0x1D0788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3A8_0x1ce3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0788u; }
        if (ctx->pc != 0x1D0788u) { return; }
    }
    ctx->pc = 0x1D0788u;
    // 0x1d0788: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1D0788u;
    {
        const bool branch_taken_0x1d0788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D078Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0788u;
            // 0x1d078c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0788) {
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D0790u;
label_1d0790:
    // 0x1d0790: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0790u;
    {
        const bool branch_taken_0x1d0790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0790u;
            // 0x1d0794: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0790) {
            ctx->pc = 0x1D07A8u;
            goto label_1d07a8;
        }
    }
    ctx->pc = 0x1D0798u;
    // 0x1d0798: 0xc073918  jal         func_1CE460
    ctx->pc = 0x1D0798u;
    SET_GPR_U32(ctx, 31, 0x1D07A0u);
    ctx->pc = 0x1D079Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0798u;
            // 0x1d079c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE460u;
    if (runtime->hasFunction(0x1CE460u)) {
        auto targetFn = runtime->lookupFunction(0x1CE460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07A0u; }
        if (ctx->pc != 0x1D07A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE460_0x1ce460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07A0u; }
        if (ctx->pc != 0x1D07A0u) { return; }
    }
    ctx->pc = 0x1D07A0u;
    // 0x1d07a0: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1D07A0u;
    {
        const bool branch_taken_0x1d07a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07A0u;
            // 0x1d07a4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07a0) {
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D07A8u;
label_1d07a8:
    // 0x1d07a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D07A8u;
    {
        const bool branch_taken_0x1d07a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07A8u;
            // 0x1d07ac: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07a8) {
            ctx->pc = 0x1D07C0u;
            goto label_1d07c0;
        }
    }
    ctx->pc = 0x1D07B0u;
    // 0x1d07b0: 0xc073900  jal         func_1CE400
    ctx->pc = 0x1D07B0u;
    SET_GPR_U32(ctx, 31, 0x1D07B8u);
    ctx->pc = 0x1D07B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07B0u;
            // 0x1d07b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE400u;
    if (runtime->hasFunction(0x1CE400u)) {
        auto targetFn = runtime->lookupFunction(0x1CE400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07B8u; }
        if (ctx->pc != 0x1D07B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE400_0x1ce400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07B8u; }
        if (ctx->pc != 0x1D07B8u) { return; }
    }
    ctx->pc = 0x1D07B8u;
    // 0x1d07b8: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1D07B8u;
    {
        const bool branch_taken_0x1d07b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07B8u;
            // 0x1d07bc: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07b8) {
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D07C0u;
label_1d07c0:
    // 0x1d07c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D07C0u;
    {
        const bool branch_taken_0x1d07c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07C0u;
            // 0x1d07c4: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07c0) {
            ctx->pc = 0x1D07D8u;
            goto label_1d07d8;
        }
    }
    ctx->pc = 0x1D07C8u;
    // 0x1d07c8: 0xc073de2  jal         func_1CF788
    ctx->pc = 0x1D07C8u;
    SET_GPR_U32(ctx, 31, 0x1D07D0u);
    ctx->pc = 0x1D07CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07C8u;
            // 0x1d07cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF788u;
    if (runtime->hasFunction(0x1CF788u)) {
        auto targetFn = runtime->lookupFunction(0x1CF788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07D0u; }
        if (ctx->pc != 0x1D07D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF788_0x1cf788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07D0u; }
        if (ctx->pc != 0x1D07D0u) { return; }
    }
    ctx->pc = 0x1D07D0u;
    // 0x1d07d0: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1D07D0u;
    {
        const bool branch_taken_0x1d07d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07D0u;
            // 0x1d07d4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07d0) {
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D07D8u;
label_1d07d8:
    // 0x1d07d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D07D8u;
    {
        const bool branch_taken_0x1d07d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07D8u;
            // 0x1d07dc: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07d8) {
            ctx->pc = 0x1D07F0u;
            goto label_1d07f0;
        }
    }
    ctx->pc = 0x1D07E0u;
    // 0x1d07e0: 0xc073de0  jal         func_1CF780
    ctx->pc = 0x1D07E0u;
    SET_GPR_U32(ctx, 31, 0x1D07E8u);
    ctx->pc = 0x1D07E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07E0u;
            // 0x1d07e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF780u;
    if (runtime->hasFunction(0x1CF780u)) {
        auto targetFn = runtime->lookupFunction(0x1CF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07E8u; }
        if (ctx->pc != 0x1D07E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1cf780_0x1cf788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07E8u; }
        if (ctx->pc != 0x1D07E8u) { return; }
    }
    ctx->pc = 0x1D07E8u;
    // 0x1d07e8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1D07E8u;
    {
        const bool branch_taken_0x1d07e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07E8u;
            // 0x1d07ec: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07e8) {
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D07F0u;
label_1d07f0:
    // 0x1d07f0: 0x54400075  bnel        $v0, $zero, . + 4 + (0x75 << 2)
    ctx->pc = 0x1D07F0u;
    {
        const bool branch_taken_0x1d07f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d07f0) {
            ctx->pc = 0x1D07F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07F0u;
            // 0x1d07f4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D07F8u;
    // 0x1d07f8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1d07f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1d07fc: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1D07FCu;
    {
        const bool branch_taken_0x1d07fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07FCu;
            // 0x1d0800: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07fc) {
            ctx->pc = 0x1D09B0u;
            goto label_1d09b0;
        }
    }
    ctx->pc = 0x1D0804u;
    // 0x1d0804: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D0804u;
    {
        const bool branch_taken_0x1d0804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0804) {
            ctx->pc = 0x1D0808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0804u;
            // 0x1d0808: 0x8ea2004c  lw          $v0, 0x4C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0860u;
            goto label_1d0860;
        }
    }
    ctx->pc = 0x1D080Cu;
    // 0x1d080c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d080cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d0810: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x1d0810u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d0814: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0814u;
    {
        const bool branch_taken_0x1d0814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0814u;
            // 0x1d0818: 0x24020406  addiu       $v0, $zero, 0x406 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0814) {
            ctx->pc = 0x1D082Cu;
            goto label_1d082c;
        }
    }
    ctx->pc = 0x1D081Cu;
    // 0x1d081c: 0xc073ef4  jal         func_1CFBD0
    ctx->pc = 0x1D081Cu;
    SET_GPR_U32(ctx, 31, 0x1D0824u);
    ctx->pc = 0x1D0820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D081Cu;
            // 0x1d0820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBD0u;
    if (runtime->hasFunction(0x1CFBD0u)) {
        auto targetFn = runtime->lookupFunction(0x1CFBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0824u; }
        if (ctx->pc != 0x1D0824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFBD0_0x1cfbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0824u; }
        if (ctx->pc != 0x1D0824u) { return; }
    }
    ctx->pc = 0x1D0824u;
    // 0x1d0824: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1D0824u;
    {
        const bool branch_taken_0x1d0824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0824u;
            // 0x1d0828: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0824) {
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D082Cu;
label_1d082c:
    // 0x1d082c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1d082cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1d0830: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x1d0830u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d0834: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1d0834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1d0838: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1d0838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1d083c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1d083cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1d0840: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d0840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d0844: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1d0844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1d0848: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1d0848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d084c: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1D084Cu;
    SET_GPR_U32(ctx, 31, 0x1D0854u);
    ctx->pc = 0x1D0850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D084Cu;
            // 0x1d0850: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0854u; }
        if (ctx->pc != 0x1D0854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0854u; }
        if (ctx->pc != 0x1D0854u) { return; }
    }
    ctx->pc = 0x1D0854u;
    // 0x1d0854: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1D0854u;
    {
        const bool branch_taken_0x1d0854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0854u;
            // 0x1d0858: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0854) {
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D085Cu;
    // 0x1d085c: 0x0  nop
    ctx->pc = 0x1d085cu;
    // NOP
label_1d0860:
    // 0x1d0860: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1D0860u;
    {
        const bool branch_taken_0x1d0860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0860) {
            ctx->pc = 0x1D0864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0860u;
            // 0x1d0864: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D08A0u;
            goto label_1d08a0;
        }
    }
    ctx->pc = 0x1D0868u;
    // 0x1d0868: 0xc0748fc  jal         func_1D23F0
    ctx->pc = 0x1D0868u;
    SET_GPR_U32(ctx, 31, 0x1D0870u);
    ctx->pc = 0x1D086Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0868u;
            // 0x1d086c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D23F0u;
    if (runtime->hasFunction(0x1D23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0870u; }
        if (ctx->pc != 0x1D0870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D23F0_0x1d23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0870u; }
        if (ctx->pc != 0x1D0870u) { return; }
    }
    ctx->pc = 0x1D0870u;
    // 0x1d0870: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d0870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d0874: 0x84430044  lh          $v1, 0x44($v0)
    ctx->pc = 0x1d0874u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d0878: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1D0878u;
    {
        const bool branch_taken_0x1d0878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D087Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0878u;
            // 0x1d087c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0878) {
            ctx->pc = 0x1D099Cu;
            goto label_1d099c;
        }
    }
    ctx->pc = 0x1D0880u;
    // 0x1d0880: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1D0880u;
    {
        const bool branch_taken_0x1d0880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D0884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0880u;
            // 0x1d0884: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0880) {
            ctx->pc = 0x1D099Cu;
            goto label_1d099c;
        }
    }
    ctx->pc = 0x1D0888u;
    // 0x1d0888: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1D0888u;
    {
        const bool branch_taken_0x1d0888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D088Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0888u;
            // 0x1d088c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0888) {
            ctx->pc = 0x1D09A0u;
            goto label_1d09a0;
        }
    }
    ctx->pc = 0x1D0890u;
    // 0x1d0890: 0xc072f70  jal         func_1CBDC0
    ctx->pc = 0x1D0890u;
    SET_GPR_U32(ctx, 31, 0x1D0898u);
    ctx->pc = 0x1D0894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0890u;
            // 0x1d0894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBDC0u;
    if (runtime->hasFunction(0x1CBDC0u)) {
        auto targetFn = runtime->lookupFunction(0x1CBDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0898u; }
        if (ctx->pc != 0x1D0898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBDC0_0x1cbdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0898u; }
        if (ctx->pc != 0x1D0898u) { return; }
    }
    ctx->pc = 0x1D0898u;
    // 0x1d0898: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1D0898u;
    {
        const bool branch_taken_0x1d0898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D089Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0898u;
            // 0x1d089c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0898) {
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D08A0u;
label_1d08a0:
    // 0x1d08a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d08a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d08a4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d08a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d08a8: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1d08a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d08ac: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D08ACu;
    {
        const bool branch_taken_0x1d08ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D08B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D08ACu;
            // 0x1d08b0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08ac) {
            ctx->pc = 0x1D08BCu;
            goto label_1d08bc;
        }
    }
    ctx->pc = 0x1D08B4u;
    // 0x1d08b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D08B4u;
    {
        const bool branch_taken_0x1d08b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D08B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D08B4u;
            // 0x1d08b8: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08b4) {
            ctx->pc = 0x1D08D8u;
            goto label_1d08d8;
        }
    }
    ctx->pc = 0x1D08BCu;
label_1d08bc:
    // 0x1d08bc: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1d08bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1d08c0: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1d08c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1d08c4: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D08C4u;
    {
        const bool branch_taken_0x1d08c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D08C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D08C4u;
            // 0x1d08c8: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08c4) {
            ctx->pc = 0x1D08D8u;
            goto label_1d08d8;
        }
    }
    ctx->pc = 0x1D08CCu;
    // 0x1d08cc: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1D08CCu;
    SET_GPR_U32(ctx, 31, 0x1D08D4u);
    ctx->pc = 0x1D08D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D08CCu;
            // 0x1d08d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D08D4u; }
        if (ctx->pc != 0x1D08D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D08D4u; }
        if (ctx->pc != 0x1D08D4u) { return; }
    }
    ctx->pc = 0x1D08D4u;
    // 0x1d08d4: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x1d08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1d08d8:
    // 0x1d08d8: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1d08d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d08dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d08dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d08e0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1d08e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d08e4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1d08e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x1d08e8: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1d08e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d08ec: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D08ECu;
    {
        const bool branch_taken_0x1d08ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D08F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D08ECu;
            // 0x1d08f0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08ec) {
            ctx->pc = 0x1D08FCu;
            goto label_1d08fc;
        }
    }
    ctx->pc = 0x1D08F4u;
    // 0x1d08f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D08F4u;
    {
        const bool branch_taken_0x1d08f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D08F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D08F4u;
            // 0x1d08f8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08f4) {
            ctx->pc = 0x1D0918u;
            goto label_1d0918;
        }
    }
    ctx->pc = 0x1D08FCu;
label_1d08fc:
    // 0x1d08fc: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1d08fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1d0900: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1d0900u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1d0904: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0904u;
    {
        const bool branch_taken_0x1d0904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D0908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0904u;
            // 0x1d0908: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0904) {
            ctx->pc = 0x1D0918u;
            goto label_1d0918;
        }
    }
    ctx->pc = 0x1D090Cu;
    // 0x1d090c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1D090Cu;
    SET_GPR_U32(ctx, 31, 0x1D0914u);
    ctx->pc = 0x1D0910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D090Cu;
            // 0x1d0910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0914u; }
        if (ctx->pc != 0x1D0914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0914u; }
        if (ctx->pc != 0x1D0914u) { return; }
    }
    ctx->pc = 0x1D0914u;
    // 0x1d0914: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1d0914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1d0918:
    // 0x1d0918: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x1d0918u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1d091c: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1d091cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d0920: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1d0920u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d0924: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1d0924u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d0928: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1d0928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d092c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1d092cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d0930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0934: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1d0934u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d0938: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d0938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d093c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d093cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0940: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1d0940u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1d0944: 0xc0734c2  jal         func_1CD308
    ctx->pc = 0x1D0944u;
    SET_GPR_U32(ctx, 31, 0x1D094Cu);
    ctx->pc = 0x1CD308u;
    if (runtime->hasFunction(0x1CD308u)) {
        auto targetFn = runtime->lookupFunction(0x1CD308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D094Cu; }
        if (ctx->pc != 0x1D094Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD308_0x1cd308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D094Cu; }
        if (ctx->pc != 0x1D094Cu) { return; }
    }
    ctx->pc = 0x1D094Cu;
    // 0x1d094c: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x1d094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x1d0950: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0950u;
    {
        const bool branch_taken_0x1d0950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0950) {
            ctx->pc = 0x1D0968u;
            goto label_1d0968;
        }
    }
    ctx->pc = 0x1D0958u;
    // 0x1d0958: 0xc090d56  jal         func_243558
    ctx->pc = 0x1D0958u;
    SET_GPR_U32(ctx, 31, 0x1D0960u);
    ctx->pc = 0x1D095Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0958u;
            // 0x1d095c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0960u; }
        if (ctx->pc != 0x1D0960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0960u; }
        if (ctx->pc != 0x1D0960u) { return; }
    }
    ctx->pc = 0x1D0960u;
    // 0x1d0960: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0960u;
    {
        const bool branch_taken_0x1d0960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0960u;
            // 0x1d0964: 0x90420012  lbu         $v0, 0x12($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0960) {
            ctx->pc = 0x1D0974u;
            goto label_1d0974;
        }
    }
    ctx->pc = 0x1D0968u;
label_1d0968:
    // 0x1d0968: 0xc090d54  jal         func_243550
    ctx->pc = 0x1D0968u;
    SET_GPR_U32(ctx, 31, 0x1D0970u);
    ctx->pc = 0x1D096Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0968u;
            // 0x1d096c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243550u;
    if (runtime->hasFunction(0x243550u)) {
        auto targetFn = runtime->lookupFunction(0x243550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0970u; }
        if (ctx->pc != 0x1D0970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243550_0x243558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0970u; }
        if (ctx->pc != 0x1D0970u) { return; }
    }
    ctx->pc = 0x1D0970u;
    // 0x1d0970: 0x94420038  lhu         $v0, 0x38($v0)
    ctx->pc = 0x1d0970u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1d0974:
    // 0x1d0974: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1d0974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1d0978: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D0978u;
    {
        const bool branch_taken_0x1d0978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D097Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0978u;
            // 0x1d097c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0978) {
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D0980u;
    // 0x1d0980: 0x84430044  lh          $v1, 0x44($v0)
    ctx->pc = 0x1d0980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d0984: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0984u;
    {
        const bool branch_taken_0x1d0984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0984u;
            // 0x1d0988: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0984) {
            ctx->pc = 0x1D099Cu;
            goto label_1d099c;
        }
    }
    ctx->pc = 0x1D098Cu;
    // 0x1d098c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D098Cu;
    {
        const bool branch_taken_0x1d098c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D0990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D098Cu;
            // 0x1d0990: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d098c) {
            ctx->pc = 0x1D099Cu;
            goto label_1d099c;
        }
    }
    ctx->pc = 0x1D0994u;
    // 0x1d0994: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0994u;
    {
        const bool branch_taken_0x1d0994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0994) {
            ctx->pc = 0x1D0998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0994u;
            // 0x1d0998: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D099Cu;
label_1d099c:
    // 0x1d099c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d099cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d09a0:
    // 0x1d09a0: 0xc0735c8  jal         func_1CD720
    ctx->pc = 0x1D09A0u;
    SET_GPR_U32(ctx, 31, 0x1D09A8u);
    ctx->pc = 0x1D09A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09A0u;
            // 0x1d09a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD720u;
    if (runtime->hasFunction(0x1CD720u)) {
        auto targetFn = runtime->lookupFunction(0x1CD720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D09A8u; }
        if (ctx->pc != 0x1D09A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD720_0x1cd720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D09A8u; }
        if (ctx->pc != 0x1D09A8u) { return; }
    }
    ctx->pc = 0x1D09A8u;
    // 0x1d09a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D09A8u;
    {
        const bool branch_taken_0x1d09a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D09ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09A8u;
            // 0x1d09ac: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09a8) {
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D09B0u;
label_1d09b0:
    // 0x1d09b0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1d09b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d09b4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D09B4u;
    {
        const bool branch_taken_0x1d09b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d09b4) {
            ctx->pc = 0x1D09B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09B4u;
            // 0x1d09b8: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D09BCu;
    // 0x1d09bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d09c0:
    // 0x1d09c0: 0xa6220072  sh          $v0, 0x72($s1)
    ctx->pc = 0x1d09c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 114), (uint16_t)GPR_U32(ctx, 2));
label_1d09c4:
    // 0x1d09c4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d09c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d09c8:
    // 0x1d09c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d09c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d09cc:
    // 0x1d09cc: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x1d09ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d09d0: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D09D0u;
    {
        const bool branch_taken_0x1d09d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D09D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09D0u;
            // 0x1d09d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09d0) {
            ctx->pc = 0x1D0A50u;
            goto label_1d0a50;
        }
    }
    ctx->pc = 0x1D09D8u;
    // 0x1d09d8: 0x86c30060  lh          $v1, 0x60($s6)
    ctx->pc = 0x1d09d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x1d09dc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D09DCu;
    {
        const bool branch_taken_0x1d09dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D09E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09DCu;
            // 0x1d09e0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09dc) {
            ctx->pc = 0x1D09ECu;
            goto label_1d09ec;
        }
    }
    ctx->pc = 0x1D09E4u;
    // 0x1d09e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D09E4u;
    {
        const bool branch_taken_0x1d09e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D09E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09E4u;
            // 0x1d09e8: 0x26c40020  addiu       $a0, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09e4) {
            ctx->pc = 0x1D0A08u;
            goto label_1d0a08;
        }
    }
    ctx->pc = 0x1D09ECu;
label_1d09ec:
    // 0x1d09ec: 0xdec30068  ld          $v1, 0x68($s6)
    ctx->pc = 0x1d09ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 104)));
    // 0x1d09f0: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1d09f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1d09f4: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D09F4u;
    {
        const bool branch_taken_0x1d09f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d09f4) {
            ctx->pc = 0x1D09F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09F4u;
            // 0x1d09f8: 0x26c40070  addiu       $a0, $s6, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0A08u;
            goto label_1d0a08;
        }
    }
    ctx->pc = 0x1D09FCu;
    // 0x1d09fc: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1D09FCu;
    SET_GPR_U32(ctx, 31, 0x1D0A04u);
    ctx->pc = 0x1D0A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09FCu;
            // 0x1d0a00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A04u; }
        if (ctx->pc != 0x1D0A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A04u; }
        if (ctx->pc != 0x1D0A04u) { return; }
    }
    ctx->pc = 0x1D0A04u;
    // 0x1d0a04: 0x26c40070  addiu       $a0, $s6, 0x70
    ctx->pc = 0x1d0a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
label_1d0a08:
    // 0x1d0a08: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x1d0a08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1d0a0c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1d0a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d0a10: 0xdba20080  lqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1d0a10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d0a14: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1d0a14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d0a18: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1d0a18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d0a1c: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1d0a1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d0a20: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1d0a20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d0a24: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1d0a24u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1d0a28: 0x4a0003bf  vwaitq
    ctx->pc = 0x1d0a28u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1d0a2c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1d0a2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d0a30: 0x4a0002ff  vnop
    ctx->pc = 0x1d0a30u;
    // NOP operation, no action needed for VU0
    // 0x1d0a34: 0x4a0002ff  vnop
    ctx->pc = 0x1d0a34u;
    // NOP operation, no action needed for VU0
    // 0x1d0a38: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1d0a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d0a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0a40: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1d0a40u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d0a44: 0x7ba60080  lq          $a2, 0x80($sp)
    ctx->pc = 0x1d0a44u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d0a48: 0xc0735a0  jal         func_1CD680
    ctx->pc = 0x1D0A48u;
    SET_GPR_U32(ctx, 31, 0x1D0A50u);
    ctx->pc = 0x1D0A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A48u;
            // 0x1d0a4c: 0x70053ca9  por         $a3, $zero, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD680u;
    if (runtime->hasFunction(0x1CD680u)) {
        auto targetFn = runtime->lookupFunction(0x1CD680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A50u; }
        if (ctx->pc != 0x1D0A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD680_0x1cd680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A50u; }
        if (ctx->pc != 0x1D0A50u) { return; }
    }
    ctx->pc = 0x1D0A50u;
label_1d0a50:
    // 0x1d0a50: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1D0A50u;
    SET_GPR_U32(ctx, 31, 0x1D0A58u);
    ctx->pc = 0x1D0A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A50u;
            // 0x1d0a54: 0x8e840320  lw          $a0, 0x320($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A58u; }
        if (ctx->pc != 0x1D0A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A58u; }
        if (ctx->pc != 0x1D0A58u) { return; }
    }
    ctx->pc = 0x1D0A58u;
    // 0x1d0a58: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1d0a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d0a5c: 0x94500270  lhu         $s0, 0x270($v0)
    ctx->pc = 0x1d0a5cu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x1d0a60: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x1d0a60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1d0a64: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1d0a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1d0a68: 0x40f809  jalr        $v0
    ctx->pc = 0x1D0A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0A70u);
        ctx->pc = 0x1D0A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A68u;
            // 0x1d0a6c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0A70u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0350u: goto label_1d0350;
            case 0x1D0394u: goto label_1d0394;
            case 0x1D03ECu: goto label_1d03ec;
            case 0x1D0470u: goto label_1d0470;
            case 0x1D047Cu: goto label_1d047c;
            case 0x1D0498u: goto label_1d0498;
            case 0x1D04C8u: goto label_1d04c8;
            case 0x1D04F0u: goto label_1d04f0;
            case 0x1D0510u: goto label_1d0510;
            case 0x1D0514u: goto label_1d0514;
            case 0x1D0524u: goto label_1d0524;
            case 0x1D0530u: goto label_1d0530;
            case 0x1D0534u: goto label_1d0534;
            case 0x1D0550u: goto label_1d0550;
            case 0x1D0570u: goto label_1d0570;
            case 0x1D05BCu: goto label_1d05bc;
            case 0x1D05C0u: goto label_1d05c0;
            case 0x1D05DCu: goto label_1d05dc;
            case 0x1D0604u: goto label_1d0604;
            case 0x1D0640u: goto label_1d0640;
            case 0x1D0658u: goto label_1d0658;
            case 0x1D0668u: goto label_1d0668;
            case 0x1D066Cu: goto label_1d066c;
            case 0x1D0674u: goto label_1d0674;
            case 0x1D06D4u: goto label_1d06d4;
            case 0x1D0714u: goto label_1d0714;
            case 0x1D071Cu: goto label_1d071c;
            case 0x1D073Cu: goto label_1d073c;
            case 0x1D0740u: goto label_1d0740;
            case 0x1D0774u: goto label_1d0774;
            case 0x1D0790u: goto label_1d0790;
            case 0x1D07A8u: goto label_1d07a8;
            case 0x1D07C0u: goto label_1d07c0;
            case 0x1D07D8u: goto label_1d07d8;
            case 0x1D07F0u: goto label_1d07f0;
            case 0x1D082Cu: goto label_1d082c;
            case 0x1D0860u: goto label_1d0860;
            case 0x1D08A0u: goto label_1d08a0;
            case 0x1D08BCu: goto label_1d08bc;
            case 0x1D08D8u: goto label_1d08d8;
            case 0x1D08FCu: goto label_1d08fc;
            case 0x1D0918u: goto label_1d0918;
            case 0x1D0968u: goto label_1d0968;
            case 0x1D0974u: goto label_1d0974;
            case 0x1D099Cu: goto label_1d099c;
            case 0x1D09A0u: goto label_1d09a0;
            case 0x1D09B0u: goto label_1d09b0;
            case 0x1D09C0u: goto label_1d09c0;
            case 0x1D09C4u: goto label_1d09c4;
            case 0x1D09C8u: goto label_1d09c8;
            case 0x1D09CCu: goto label_1d09cc;
            case 0x1D09ECu: goto label_1d09ec;
            case 0x1D0A08u: goto label_1d0a08;
            case 0x1D0A50u: goto label_1d0a50;
            case 0x1D0AA8u: goto label_1d0aa8;
            case 0x1D0AE8u: goto label_1d0ae8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A70u; }
            if (ctx->pc != 0x1D0A70u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0A70u;
    // 0x1d0a70: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1d0a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1d0a74: 0x5602000c  bnel        $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0A74u;
    {
        const bool branch_taken_0x1d0a74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0a74) {
            ctx->pc = 0x1D0A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A74u;
            // 0x1d0a78: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0AA8u;
            goto label_1d0aa8;
        }
    }
    ctx->pc = 0x1D0A7Cu;
    // 0x1d0a7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0a80: 0xc074b42  jal         func_1D2D08
    ctx->pc = 0x1D0A80u;
    SET_GPR_U32(ctx, 31, 0x1D0A88u);
    ctx->pc = 0x1D0A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A80u;
            // 0x1d0a84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2D08u;
    if (runtime->hasFunction(0x1D2D08u)) {
        auto targetFn = runtime->lookupFunction(0x1D2D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A88u; }
        if (ctx->pc != 0x1D0A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2D08_0x1d2d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A88u; }
        if (ctx->pc != 0x1D0A88u) { return; }
    }
    ctx->pc = 0x1D0A88u;
    // 0x1d0a88: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1d0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d0a8c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d0a8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d0a90: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d0a94: 0x40f809  jalr        $v0
    ctx->pc = 0x1D0A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0A9Cu);
        ctx->pc = 0x1D0A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A94u;
            // 0x1d0a98: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0A9Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0350u: goto label_1d0350;
            case 0x1D0394u: goto label_1d0394;
            case 0x1D03ECu: goto label_1d03ec;
            case 0x1D0470u: goto label_1d0470;
            case 0x1D047Cu: goto label_1d047c;
            case 0x1D0498u: goto label_1d0498;
            case 0x1D04C8u: goto label_1d04c8;
            case 0x1D04F0u: goto label_1d04f0;
            case 0x1D0510u: goto label_1d0510;
            case 0x1D0514u: goto label_1d0514;
            case 0x1D0524u: goto label_1d0524;
            case 0x1D0530u: goto label_1d0530;
            case 0x1D0534u: goto label_1d0534;
            case 0x1D0550u: goto label_1d0550;
            case 0x1D0570u: goto label_1d0570;
            case 0x1D05BCu: goto label_1d05bc;
            case 0x1D05C0u: goto label_1d05c0;
            case 0x1D05DCu: goto label_1d05dc;
            case 0x1D0604u: goto label_1d0604;
            case 0x1D0640u: goto label_1d0640;
            case 0x1D0658u: goto label_1d0658;
            case 0x1D0668u: goto label_1d0668;
            case 0x1D066Cu: goto label_1d066c;
            case 0x1D0674u: goto label_1d0674;
            case 0x1D06D4u: goto label_1d06d4;
            case 0x1D0714u: goto label_1d0714;
            case 0x1D071Cu: goto label_1d071c;
            case 0x1D073Cu: goto label_1d073c;
            case 0x1D0740u: goto label_1d0740;
            case 0x1D0774u: goto label_1d0774;
            case 0x1D0790u: goto label_1d0790;
            case 0x1D07A8u: goto label_1d07a8;
            case 0x1D07C0u: goto label_1d07c0;
            case 0x1D07D8u: goto label_1d07d8;
            case 0x1D07F0u: goto label_1d07f0;
            case 0x1D082Cu: goto label_1d082c;
            case 0x1D0860u: goto label_1d0860;
            case 0x1D08A0u: goto label_1d08a0;
            case 0x1D08BCu: goto label_1d08bc;
            case 0x1D08D8u: goto label_1d08d8;
            case 0x1D08FCu: goto label_1d08fc;
            case 0x1D0918u: goto label_1d0918;
            case 0x1D0968u: goto label_1d0968;
            case 0x1D0974u: goto label_1d0974;
            case 0x1D099Cu: goto label_1d099c;
            case 0x1D09A0u: goto label_1d09a0;
            case 0x1D09B0u: goto label_1d09b0;
            case 0x1D09C0u: goto label_1d09c0;
            case 0x1D09C4u: goto label_1d09c4;
            case 0x1D09C8u: goto label_1d09c8;
            case 0x1D09CCu: goto label_1d09cc;
            case 0x1D09ECu: goto label_1d09ec;
            case 0x1D0A08u: goto label_1d0a08;
            case 0x1D0A50u: goto label_1d0a50;
            case 0x1D0AA8u: goto label_1d0aa8;
            case 0x1D0AE8u: goto label_1d0ae8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A9Cu; }
            if (ctx->pc != 0x1D0A9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D0A9Cu;
    // 0x1d0a9c: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1D0A9Cu;
    SET_GPR_U32(ctx, 31, 0x1D0AA4u);
    ctx->pc = 0x1D0AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A9Cu;
            // 0x1d0aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AA4u; }
        if (ctx->pc != 0x1D0AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AA4u; }
        if (ctx->pc != 0x1D0AA4u) { return; }
    }
    ctx->pc = 0x1D0AA4u;
    // 0x1d0aa4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1d0aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1d0aa8:
    // 0x1d0aa8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d0aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0aac: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1d0aacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d0ab0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1d0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d0ab4: 0x40f809  jalr        $v0
    ctx->pc = 0x1D0AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0ABCu);
        ctx->pc = 0x1D0AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0AB4u;
            // 0x1d0ab8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0ABCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0350u: goto label_1d0350;
            case 0x1D0394u: goto label_1d0394;
            case 0x1D03ECu: goto label_1d03ec;
            case 0x1D0470u: goto label_1d0470;
            case 0x1D047Cu: goto label_1d047c;
            case 0x1D0498u: goto label_1d0498;
            case 0x1D04C8u: goto label_1d04c8;
            case 0x1D04F0u: goto label_1d04f0;
            case 0x1D0510u: goto label_1d0510;
            case 0x1D0514u: goto label_1d0514;
            case 0x1D0524u: goto label_1d0524;
            case 0x1D0530u: goto label_1d0530;
            case 0x1D0534u: goto label_1d0534;
            case 0x1D0550u: goto label_1d0550;
            case 0x1D0570u: goto label_1d0570;
            case 0x1D05BCu: goto label_1d05bc;
            case 0x1D05C0u: goto label_1d05c0;
            case 0x1D05DCu: goto label_1d05dc;
            case 0x1D0604u: goto label_1d0604;
            case 0x1D0640u: goto label_1d0640;
            case 0x1D0658u: goto label_1d0658;
            case 0x1D0668u: goto label_1d0668;
            case 0x1D066Cu: goto label_1d066c;
            case 0x1D0674u: goto label_1d0674;
            case 0x1D06D4u: goto label_1d06d4;
            case 0x1D0714u: goto label_1d0714;
            case 0x1D071Cu: goto label_1d071c;
            case 0x1D073Cu: goto label_1d073c;
            case 0x1D0740u: goto label_1d0740;
            case 0x1D0774u: goto label_1d0774;
            case 0x1D0790u: goto label_1d0790;
            case 0x1D07A8u: goto label_1d07a8;
            case 0x1D07C0u: goto label_1d07c0;
            case 0x1D07D8u: goto label_1d07d8;
            case 0x1D07F0u: goto label_1d07f0;
            case 0x1D082Cu: goto label_1d082c;
            case 0x1D0860u: goto label_1d0860;
            case 0x1D08A0u: goto label_1d08a0;
            case 0x1D08BCu: goto label_1d08bc;
            case 0x1D08D8u: goto label_1d08d8;
            case 0x1D08FCu: goto label_1d08fc;
            case 0x1D0918u: goto label_1d0918;
            case 0x1D0968u: goto label_1d0968;
            case 0x1D0974u: goto label_1d0974;
            case 0x1D099Cu: goto label_1d099c;
            case 0x1D09A0u: goto label_1d09a0;
            case 0x1D09B0u: goto label_1d09b0;
            case 0x1D09C0u: goto label_1d09c0;
            case 0x1D09C4u: goto label_1d09c4;
            case 0x1D09C8u: goto label_1d09c8;
            case 0x1D09CCu: goto label_1d09cc;
            case 0x1D09ECu: goto label_1d09ec;
            case 0x1D0A08u: goto label_1d0a08;
            case 0x1D0A50u: goto label_1d0a50;
            case 0x1D0AA8u: goto label_1d0aa8;
            case 0x1D0AE8u: goto label_1d0ae8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0ABCu; }
            if (ctx->pc != 0x1D0ABCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D0ABCu;
    // 0x1d0abc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1d0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d0ac0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1d0ac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1d0ac4: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1d0ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1d0ac8: 0x40f809  jalr        $v0
    ctx->pc = 0x1D0AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0AD0u);
        ctx->pc = 0x1D0ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0AC8u;
            // 0x1d0acc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0AD0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0350u: goto label_1d0350;
            case 0x1D0394u: goto label_1d0394;
            case 0x1D03ECu: goto label_1d03ec;
            case 0x1D0470u: goto label_1d0470;
            case 0x1D047Cu: goto label_1d047c;
            case 0x1D0498u: goto label_1d0498;
            case 0x1D04C8u: goto label_1d04c8;
            case 0x1D04F0u: goto label_1d04f0;
            case 0x1D0510u: goto label_1d0510;
            case 0x1D0514u: goto label_1d0514;
            case 0x1D0524u: goto label_1d0524;
            case 0x1D0530u: goto label_1d0530;
            case 0x1D0534u: goto label_1d0534;
            case 0x1D0550u: goto label_1d0550;
            case 0x1D0570u: goto label_1d0570;
            case 0x1D05BCu: goto label_1d05bc;
            case 0x1D05C0u: goto label_1d05c0;
            case 0x1D05DCu: goto label_1d05dc;
            case 0x1D0604u: goto label_1d0604;
            case 0x1D0640u: goto label_1d0640;
            case 0x1D0658u: goto label_1d0658;
            case 0x1D0668u: goto label_1d0668;
            case 0x1D066Cu: goto label_1d066c;
            case 0x1D0674u: goto label_1d0674;
            case 0x1D06D4u: goto label_1d06d4;
            case 0x1D0714u: goto label_1d0714;
            case 0x1D071Cu: goto label_1d071c;
            case 0x1D073Cu: goto label_1d073c;
            case 0x1D0740u: goto label_1d0740;
            case 0x1D0774u: goto label_1d0774;
            case 0x1D0790u: goto label_1d0790;
            case 0x1D07A8u: goto label_1d07a8;
            case 0x1D07C0u: goto label_1d07c0;
            case 0x1D07D8u: goto label_1d07d8;
            case 0x1D07F0u: goto label_1d07f0;
            case 0x1D082Cu: goto label_1d082c;
            case 0x1D0860u: goto label_1d0860;
            case 0x1D08A0u: goto label_1d08a0;
            case 0x1D08BCu: goto label_1d08bc;
            case 0x1D08D8u: goto label_1d08d8;
            case 0x1D08FCu: goto label_1d08fc;
            case 0x1D0918u: goto label_1d0918;
            case 0x1D0968u: goto label_1d0968;
            case 0x1D0974u: goto label_1d0974;
            case 0x1D099Cu: goto label_1d099c;
            case 0x1D09A0u: goto label_1d09a0;
            case 0x1D09B0u: goto label_1d09b0;
            case 0x1D09C0u: goto label_1d09c0;
            case 0x1D09C4u: goto label_1d09c4;
            case 0x1D09C8u: goto label_1d09c8;
            case 0x1D09CCu: goto label_1d09cc;
            case 0x1D09ECu: goto label_1d09ec;
            case 0x1D0A08u: goto label_1d0a08;
            case 0x1D0A50u: goto label_1d0a50;
            case 0x1D0AA8u: goto label_1d0aa8;
            case 0x1D0AE8u: goto label_1d0ae8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AD0u; }
            if (ctx->pc != 0x1D0AD0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0AD0u;
    // 0x1d0ad0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1d0ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d0ad4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d0ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d0ad8: 0x3463e008  ori         $v1, $v1, 0xE008
    ctx->pc = 0x1d0ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57352);
    // 0x1d0adc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1d0adcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d0ae0: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x1d0ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
    // 0x1d0ae4: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1d0ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1d0ae8:
    // 0x1d0ae8: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1d0ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d0aec: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1d0aecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d0af0: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1d0af0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d0af4: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1d0af4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d0af8: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x1d0af8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d0afc: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x1d0afcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d0b00: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x1d0b00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d0b04: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1d0b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d0b08: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B08u;
            // 0x1d0b0c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0350u: goto label_1d0350;
            case 0x1D0394u: goto label_1d0394;
            case 0x1D03ECu: goto label_1d03ec;
            case 0x1D0470u: goto label_1d0470;
            case 0x1D047Cu: goto label_1d047c;
            case 0x1D0498u: goto label_1d0498;
            case 0x1D04C8u: goto label_1d04c8;
            case 0x1D04F0u: goto label_1d04f0;
            case 0x1D0510u: goto label_1d0510;
            case 0x1D0514u: goto label_1d0514;
            case 0x1D0524u: goto label_1d0524;
            case 0x1D0530u: goto label_1d0530;
            case 0x1D0534u: goto label_1d0534;
            case 0x1D0550u: goto label_1d0550;
            case 0x1D0570u: goto label_1d0570;
            case 0x1D05BCu: goto label_1d05bc;
            case 0x1D05C0u: goto label_1d05c0;
            case 0x1D05DCu: goto label_1d05dc;
            case 0x1D0604u: goto label_1d0604;
            case 0x1D0640u: goto label_1d0640;
            case 0x1D0658u: goto label_1d0658;
            case 0x1D0668u: goto label_1d0668;
            case 0x1D066Cu: goto label_1d066c;
            case 0x1D0674u: goto label_1d0674;
            case 0x1D06D4u: goto label_1d06d4;
            case 0x1D0714u: goto label_1d0714;
            case 0x1D071Cu: goto label_1d071c;
            case 0x1D073Cu: goto label_1d073c;
            case 0x1D0740u: goto label_1d0740;
            case 0x1D0774u: goto label_1d0774;
            case 0x1D0790u: goto label_1d0790;
            case 0x1D07A8u: goto label_1d07a8;
            case 0x1D07C0u: goto label_1d07c0;
            case 0x1D07D8u: goto label_1d07d8;
            case 0x1D07F0u: goto label_1d07f0;
            case 0x1D082Cu: goto label_1d082c;
            case 0x1D0860u: goto label_1d0860;
            case 0x1D08A0u: goto label_1d08a0;
            case 0x1D08BCu: goto label_1d08bc;
            case 0x1D08D8u: goto label_1d08d8;
            case 0x1D08FCu: goto label_1d08fc;
            case 0x1D0918u: goto label_1d0918;
            case 0x1D0968u: goto label_1d0968;
            case 0x1D0974u: goto label_1d0974;
            case 0x1D099Cu: goto label_1d099c;
            case 0x1D09A0u: goto label_1d09a0;
            case 0x1D09B0u: goto label_1d09b0;
            case 0x1D09C0u: goto label_1d09c0;
            case 0x1D09C4u: goto label_1d09c4;
            case 0x1D09C8u: goto label_1d09c8;
            case 0x1D09CCu: goto label_1d09cc;
            case 0x1D09ECu: goto label_1d09ec;
            case 0x1D0A08u: goto label_1d0a08;
            case 0x1D0A50u: goto label_1d0a50;
            case 0x1D0AA8u: goto label_1d0aa8;
            case 0x1D0AE8u: goto label_1d0ae8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D0B10u;
}
