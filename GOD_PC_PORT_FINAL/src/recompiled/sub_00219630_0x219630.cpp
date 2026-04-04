#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00219630
// Address: 0x219630 - 0x219a68
void sub_00219630_0x219630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219630_0x219630");
#endif

    ctx->pc = 0x219630u;

    // 0x219630: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x219630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x219634: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x219634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x219638: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x219638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x21963c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21963cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219640: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x219640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x219644: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x219644u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219648: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x219648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x21964c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x21964cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219650: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x219650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x219654: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x219654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x219658: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x219658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x21965c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x21965cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x219660: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x219660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x219664: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x219664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x219668: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x219668u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x21966c: 0x8ec2001c  lw          $v0, 0x1C($s6)
    ctx->pc = 0x21966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x219670: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x219670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x219674: 0x8c550030  lw          $s5, 0x30($v0)
    ctx->pc = 0x219674u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x219678: 0x8c530034  lw          $s3, 0x34($v0)
    ctx->pc = 0x219678u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x21967c: 0x2477ffff  addiu       $s7, $v1, -0x1
    ctx->pc = 0x21967cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x219680: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x219680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x219684: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x219684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x219688: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x219688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x21968c: 0x0  nop
    ctx->pc = 0x21968cu;
    // NOP
label_219690:
    // 0x219690: 0x1a60001f  blez        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x219690u;
    {
        const bool branch_taken_0x219690 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x219694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219690u;
            // 0x219694: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219690) {
            ctx->pc = 0x219710u;
            goto label_219710;
        }
    }
    ctx->pc = 0x219698u;
    // 0x219698: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x219698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21969c: 0x0  nop
    ctx->pc = 0x21969cu;
    // NOP
label_2196a0:
    // 0x2196a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2196a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2196a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2196a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196ac: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x2196ACu;
    SET_GPR_U32(ctx, 31, 0x2196B4u);
    ctx->pc = 0x2196B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2196ACu;
            // 0x2196b0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2196B4u; }
        if (ctx->pc != 0x2196B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2196B4u; }
        if (ctx->pc != 0x2196B4u) { return; }
    }
    ctx->pc = 0x2196B4u;
    // 0x2196b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2196b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2196b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2196bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2196c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2196c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2196c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196c8: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x2196C8u;
    SET_GPR_U32(ctx, 31, 0x2196D0u);
    ctx->pc = 0x2196CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2196C8u;
            // 0x2196cc: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2196D0u; }
        if (ctx->pc != 0x2196D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2196D0u; }
        if (ctx->pc != 0x2196D0u) { return; }
    }
    ctx->pc = 0x2196D0u;
    // 0x2196d0: 0x1aa0000b  blez        $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x2196D0u;
    {
        const bool branch_taken_0x2196d0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2196D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2196D0u;
            // 0x2196d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2196d0) {
            ctx->pc = 0x219700u;
            goto label_219700;
        }
    }
    ctx->pc = 0x2196D8u;
    // 0x2196d8: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x2196d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196dc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2196dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2196e0:
    // 0x2196e0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2196e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2196e4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2196e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2196e8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x2196e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2196ec: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2196ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2196f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2196f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2196f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2196F4u;
    {
        const bool branch_taken_0x2196f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2196F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2196F4u;
            // 0x2196f8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2196f4) {
            ctx->pc = 0x2196E0u;
            runtime->cooperativeGuestYield();
            goto label_2196e0;
        }
    }
    ctx->pc = 0x2196FCu;
    // 0x2196fc: 0x0  nop
    ctx->pc = 0x2196fcu;
    // NOP
label_219700:
    // 0x219700: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x219700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x219704: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x219704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x219708: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x219708u;
    {
        const bool branch_taken_0x219708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219708) {
            ctx->pc = 0x21970Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x219708u;
            // 0x21970c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2196A0u;
            runtime->cooperativeGuestYield();
            goto label_2196a0;
        }
    }
    ctx->pc = 0x219710u;
label_219710:
    // 0x219710: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x219710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x219714: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x219714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x219718: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x219718u;
    {
        const bool branch_taken_0x219718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219718) {
            ctx->pc = 0x219690u;
            runtime->cooperativeGuestYield();
            goto label_219690;
        }
    }
    ctx->pc = 0x219720u;
    // 0x219720: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x219720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219724: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x219724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219728: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x219728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x21972c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21972cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219730: 0x8e950010  lw          $s5, 0x10($s4)
    ctx->pc = 0x219730u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x219734: 0x1ae000be  blez        $s7, . + 4 + (0xBE << 2)
    ctx->pc = 0x219734u;
    {
        const bool branch_taken_0x219734 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x219738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219734u;
            // 0x219738: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219734) {
            ctx->pc = 0x219A30u;
            goto label_219a30;
        }
    }
    ctx->pc = 0x21973Cu;
    // 0x21973c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x21973cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219740:
    // 0x219740: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x219740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_219744:
    // 0x219744: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x219744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219748: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x219748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21974c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21974cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219750: 0x262001a  div         $zero, $s3, $v0
    ctx->pc = 0x219750u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x219754: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x219754u;
    {
        const bool branch_taken_0x219754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219754) {
            ctx->pc = 0x219758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x219754u;
            // 0x219758: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x21975Cu;
            goto label_21975c;
        }
    }
    ctx->pc = 0x21975Cu;
label_21975c:
    // 0x21975c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x21975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219760: 0x8812  mflo        $s1
    ctx->pc = 0x219760u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x219764: 0x8010  mfhi        $s0
    ctx->pc = 0x219764u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x219768: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x219768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21976c: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x21976cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x219770: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x219770u;
    SET_GPR_U32(ctx, 31, 0x219778u);
    ctx->pc = 0x219774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219770u;
            // 0x219774: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219778u; }
        if (ctx->pc != 0x219778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219778u; }
        if (ctx->pc != 0x219778u) { return; }
    }
    ctx->pc = 0x219778u;
    // 0x219778: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x219778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21977c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21977cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219780: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x219780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219784: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x219784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219788: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x219788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21978c: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x21978Cu;
    SET_GPR_U32(ctx, 31, 0x219794u);
    ctx->pc = 0x219790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21978Cu;
            // 0x219790: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219794u; }
        if (ctx->pc != 0x219794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219794u; }
        if (ctx->pc != 0x219794u) { return; }
    }
    ctx->pc = 0x219794u;
    // 0x219794: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x219794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219798: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x219798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x21979c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x21979cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2197a0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2197a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2197a4: 0x4b030040  vaddx.x     $vf1, $vf0, $vf3x
    ctx->pc = 0x2197a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2197a8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2197a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2197ac: 0x4a830040  vaddx.y     $vf1, $vf0, $vf3x
    ctx->pc = 0x2197acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2197b0: 0x44931000  mtc1        $s3, $f2
    ctx->pc = 0x2197b0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2197b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2197b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2197b8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2197b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2197bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2197bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2197c0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2197c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2197c4: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x2197c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2197c8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2197c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2197cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2197ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2197d0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2197d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2197d4: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x2197d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2197d8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2197d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2197dc: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x2197dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2197e0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2197e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2197e4: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2197e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2197e8: 0x4b030040  vaddx.x     $vf1, $vf0, $vf3x
    ctx->pc = 0x2197e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2197ec: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2197ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2197f0: 0x4a830040  vaddx.y     $vf1, $vf0, $vf3x
    ctx->pc = 0x2197f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2197f4: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x2197f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2197f8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2197f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2197fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2197fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x219800: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x219800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x219804: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x219804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x219808: 0x46140802  mul.s       $f0, $f1, $f20
    ctx->pc = 0x219808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x21980c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x21980cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x219810: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x219810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x219814: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x219814u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x219818: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x219818u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21981c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x21981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219820: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x219820u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219824: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x219824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219828: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x219828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x21982c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21982cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219830: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x219830u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x219834: 0x44971800  mtc1        $s7, $f3
    ctx->pc = 0x219834u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x219838: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x219838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x21983c: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x21983cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x219840: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x219840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x219844: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x219844u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x219848: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x219848u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21984c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21984cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x219850: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x219850u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219854: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x219854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219858: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x219858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21985c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x21985cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x219860: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x219860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x219864: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x219864u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x219868: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x219868u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21986c: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x21986cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219870: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x219870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219874: 0x1aa00066  blez        $s5, . + 4 + (0x66 << 2)
    ctx->pc = 0x219874u;
    {
        const bool branch_taken_0x219874 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x219878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219874u;
            // 0x219878: 0xfba10030  sqc2        $vf1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219874) {
            ctx->pc = 0x219A10u;
            goto label_219a10;
        }
    }
    ctx->pc = 0x21987Cu;
    // 0x21987c: 0x0  nop
    ctx->pc = 0x21987cu;
    // NOP
label_219880:
    // 0x219880: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x219880u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219884: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x219884u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219888: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x219888u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21988c: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x21988cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219890: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x219890u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219894: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x219894u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219898: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x219898u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21989c: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x21989cu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2198a0: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2198a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2198a4: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2198a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2198a8: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x2198a8u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2198ac: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2198ACu;
    {
        const bool branch_taken_0x2198ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2198B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2198ACu;
            // 0x2198b0: 0xf8a10010  sqc2        $vf1, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2198ac) {
            ctx->pc = 0x219948u;
            goto label_219948;
        }
    }
    ctx->pc = 0x2198B4u;
    // 0x2198b4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2198b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2198b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2198b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2198bc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2198bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2198c0: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2198C0u;
    {
        const bool branch_taken_0x2198c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2198C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2198C0u;
            // 0x2198c4: 0xdba20000  lqc2        $vf2, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2198c0) {
            ctx->pc = 0x219958u;
            goto label_219958;
        }
    }
    ctx->pc = 0x2198C8u;
    // 0x2198c8: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2198c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2198cc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2198ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2198d0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x2198d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2198d4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2198d4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2198d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2198d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2198dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2198dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2198e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2198e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2198e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2198e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2198e8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2198e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2198ec: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2198ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2198f0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2198f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2198f4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2198f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2198f8: 0x46021942  mul.s       $f5, $f3, $f2
    ctx->pc = 0x2198f8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2198fc: 0x46022182  mul.s       $f6, $f4, $f2
    ctx->pc = 0x2198fcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x219900: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x219900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x219904: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x219904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x219908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x219908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21990c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x21990cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x219910: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x219910u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x219914: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x219914u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x219918: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x219918u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x21991c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x21991cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x219920: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x219920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x219924: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x219924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x219928: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x219928u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x21992c: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x21992cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x219930: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x219930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x219934: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x219934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x219938: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x219938u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21993c: 0x46013834  c.lt.s      $f7, $f1
    ctx->pc = 0x21993cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219940: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x219940u;
    {
        const bool branch_taken_0x219940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219940) {
            ctx->pc = 0x219958u;
            goto label_219958;
        }
    }
    ctx->pc = 0x219948u;
label_219948:
    // 0x219948: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x219948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x21994c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x21994cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x219950: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x219950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x219954: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x219954u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_219958:
    // 0x219958: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x219958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x21995c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21995cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x219960: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x219960u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x219964: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x219964u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x219968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21996c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21996cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x219970: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x219970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x219974: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x219974u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x219978: 0x4b010080  vaddx.x     $vf2, $vf0, $vf1x
    ctx->pc = 0x219978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21997c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x21997cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219984: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x219984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x219988: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x219988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21998c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x21998cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x219990: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x219990u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x219994: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x219994u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x219998: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x219998u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21999c: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x21999cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x2199a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2199a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2199a4: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x2199a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2199a8: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2199a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2199ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2199acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2199b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2199b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2199b4: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x2199b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2199b8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2199b8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x2199bc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2199bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2199c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2199c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2199c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2199c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2199c8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2199c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2199cc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2199ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2199d0: 0x4b0100c0  vaddx.x     $vf3, $vf0, $vf1x
    ctx->pc = 0x2199d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2199d4: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x2199d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2199d8: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x2199d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2199dc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2199dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2199e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2199e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2199e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2199e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2199e8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2199e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2199ec: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2199ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2199f0: 0x4b010080  vaddx.x     $vf2, $vf0, $vf1x
    ctx->pc = 0x2199f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2199f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2199f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2199f8: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x2199f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2199fc: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x2199fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x219a00: 0x95102a  slt         $v0, $a0, $s5
    ctx->pc = 0x219a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x219a04: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x219A04u;
    {
        const bool branch_taken_0x219a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219A04u;
            // 0x219a08: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a04) {
            ctx->pc = 0x219880u;
            runtime->cooperativeGuestYield();
            goto label_219880;
        }
    }
    ctx->pc = 0x219A0Cu;
    // 0x219a0c: 0x0  nop
    ctx->pc = 0x219a0cu;
    // NOP
label_219a10:
    // 0x219a10: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x219a10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x219a14: 0x2bc20002  slti        $v0, $fp, 0x2
    ctx->pc = 0x219a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x219a18: 0x5440ff4a  bnel        $v0, $zero, . + 4 + (-0xB6 << 2)
    ctx->pc = 0x219A18u;
    {
        const bool branch_taken_0x219a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219a18) {
            ctx->pc = 0x219A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x219A18u;
            // 0x219a1c: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x219744u;
            runtime->cooperativeGuestYield();
            goto label_219744;
        }
    }
    ctx->pc = 0x219A20u;
    // 0x219a20: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x219a20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a24: 0x277102a  slt         $v0, $s3, $s7
    ctx->pc = 0x219a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x219a28: 0x1440ff45  bnez        $v0, . + 4 + (-0xBB << 2)
    ctx->pc = 0x219A28u;
    {
        const bool branch_taken_0x219a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219A28u;
            // 0x219a2c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a28) {
            ctx->pc = 0x219740u;
            runtime->cooperativeGuestYield();
            goto label_219740;
        }
    }
    ctx->pc = 0x219A30u;
label_219a30:
    // 0x219a30: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x219a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x219a34: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x219a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x219a38: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x219a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x219a3c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x219a3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x219a40: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x219a40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x219a44: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x219a44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x219a48: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x219a48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x219a4c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x219a4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x219a50: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x219a50u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x219a54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x219a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x219a58: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x219a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x219a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x219A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219A5Cu;
            // 0x219a60: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219690u: goto label_219690;
            case 0x2196A0u: goto label_2196a0;
            case 0x2196E0u: goto label_2196e0;
            case 0x219700u: goto label_219700;
            case 0x219710u: goto label_219710;
            case 0x219740u: goto label_219740;
            case 0x219744u: goto label_219744;
            case 0x21975Cu: goto label_21975c;
            case 0x219880u: goto label_219880;
            case 0x219948u: goto label_219948;
            case 0x219958u: goto label_219958;
            case 0x219A10u: goto label_219a10;
            case 0x219A30u: goto label_219a30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x219A64u;
    // 0x219a64: 0x0  nop
    ctx->pc = 0x219a64u;
    // NOP
}
