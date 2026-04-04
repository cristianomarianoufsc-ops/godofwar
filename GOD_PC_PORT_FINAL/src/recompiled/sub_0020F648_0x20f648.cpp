#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020F648
// Address: 0x20f648 - 0x20f7e0
void sub_0020F648_0x20f648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F648_0x20f648");
#endif

    ctx->pc = 0x20f648u;

    // 0x20f648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20f648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20f64c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x20f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x20f650: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20f650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x20f654: 0x8c627518  lw          $v0, 0x7518($v1)
    ctx->pc = 0x20f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29976)));
    // 0x20f658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f65c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20f65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20f660: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20f660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x20f664: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20F664u;
    {
        const bool branch_taken_0x20f664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F664u;
            // 0x20f668: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f664) {
            ctx->pc = 0x20F674u;
            goto label_20f674;
        }
    }
    ctx->pc = 0x20F66Cu;
    // 0x20f66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f670: 0xac627518  sw          $v0, 0x7518($v1)
    ctx->pc = 0x20f670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29976), GPR_U32(ctx, 2));
label_20f674:
    // 0x20f674: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f678: 0x3c12002c  lui         $s2, 0x2C
    ctx->pc = 0x20f678u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)44 << 16));
    // 0x20f67c: 0x26517508  addiu       $s1, $s2, 0x7508
    ctx->pc = 0x20f67cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 29960));
    // 0x20f680: 0xe6407508  swc1        $f0, 0x7508($s2)
    ctx->pc = 0x20f680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 29960), bits); }
    // 0x20f684: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x20f684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x20f688: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x20f688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x20f68c: 0xa620000c  sh          $zero, 0xC($s1)
    ctx->pc = 0x20f68cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f690: 0x86030264  lh          $v1, 0x264($s0)
    ctx->pc = 0x20f690u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x20f694: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x20f694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x20f698: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x20F698u;
    {
        const bool branch_taken_0x20f698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F698u;
            // 0x20f69c: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f698) {
            ctx->pc = 0x20F7C0u;
            goto label_20f7c0;
        }
    }
    ctx->pc = 0x20F6A0u;
    // 0x20f6a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20f6a4: 0x24427d20  addiu       $v0, $v0, 0x7D20
    ctx->pc = 0x20f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32032));
    // 0x20f6a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f6ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f6b0: 0x400008  jr          $v0
    ctx->pc = 0x20F6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F6B8u: goto label_20f6b8;
            case 0x20F730u: goto label_20f730;
            case 0x20F750u: goto label_20f750;
            case 0x20F770u: goto label_20f770;
            case 0x20F7ACu: goto label_20f7ac;
            case 0x20F7C0u: goto label_20f7c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F6B8u;
label_20f6b8:
    // 0x20f6b8: 0x7a020110  lq          $v0, 0x110($s0)
    ctx->pc = 0x20f6b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x20f6bc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20f6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x20f6c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20f6c4: 0x7a020110  lq          $v0, 0x110($s0)
    ctx->pc = 0x20f6c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x20f6c8: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x20f6c8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x20f6cc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x20f6d0: 0x7a020110  lq          $v0, 0x110($s0)
    ctx->pc = 0x20f6d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x20f6d4: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x20f6d4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x20f6d8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x20f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x20f6dc: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x20f6dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20f6e0: 0x4b010086  vsubz.x     $vf2, $vf0, $vf1z
    ctx->pc = 0x20f6e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20f6e4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x20f6e4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20f6e8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x20f6e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20f6ec: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x20f6ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20f6f0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20f6f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f6f4: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x20F6F4u;
    SET_GPR_U32(ctx, 31, 0x20F6FCu);
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F6FCu; }
        if (ctx->pc != 0x20F6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F6FCu; }
        if (ctx->pc != 0x20F6FCu) { return; }
    }
    ctx->pc = 0x20F6FCu;
    // 0x20f6fc: 0x3c0146ff  lui         $at, 0x46FF
    ctx->pc = 0x20f6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18175 << 16));
    // 0x20f700: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x20f700u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x20f704: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20f704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f708: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x20f708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x20f70c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20f70cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x20f710: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20f710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20f714: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20f714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20f718: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x20f718u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x20f71c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20f71cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20f720: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x20f720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20f724: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x20F724u;
    {
        const bool branch_taken_0x20f724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F724u;
            // 0x20f728: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f724) {
            ctx->pc = 0x20F7C0u;
            goto label_20f7c0;
        }
    }
    ctx->pc = 0x20F72Cu;
    // 0x20f72c: 0x0  nop
    ctx->pc = 0x20f72cu;
    // NOP
label_20f730:
    // 0x20f730: 0x9202029a  lbu         $v0, 0x29A($s0)
    ctx->pc = 0x20f730u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
    // 0x20f734: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x20f734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x20f738: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20F738u;
    {
        const bool branch_taken_0x20f738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f738) {
            ctx->pc = 0x20F79Cu;
            goto label_20f79c;
        }
    }
    ctx->pc = 0x20F740u;
    // 0x20f740: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20f744: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x20f744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x20f748: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20F748u;
    {
        const bool branch_taken_0x20f748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F748u;
            // 0x20f74c: 0x30421000  andi        $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f748) {
            ctx->pc = 0x20F794u;
            goto label_20f794;
        }
    }
    ctx->pc = 0x20F750u;
label_20f750:
    // 0x20f750: 0xc6010268  lwc1        $f1, 0x268($s0)
    ctx->pc = 0x20f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f754: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f758: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20f758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f75c: 0x0  nop
    ctx->pc = 0x20f75cu;
    // NOP
    // 0x20f760: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x20F760u;
    {
        const bool branch_taken_0x20f760 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F760u;
            // 0x20f764: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f760) {
            ctx->pc = 0x20F79Cu;
            goto label_20f79c;
        }
    }
    ctx->pc = 0x20F768u;
    // 0x20f768: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20F768u;
    {
        const bool branch_taken_0x20f768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F768u;
            // 0x20f76c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f768) {
            ctx->pc = 0x20F78Cu;
            goto label_20f78c;
        }
    }
    ctx->pc = 0x20F770u;
label_20f770:
    // 0x20f770: 0xc6010268  lwc1        $f1, 0x268($s0)
    ctx->pc = 0x20f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f774: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f778: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20f778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f77c: 0x0  nop
    ctx->pc = 0x20f77cu;
    // NOP
    // 0x20f780: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x20F780u;
    {
        const bool branch_taken_0x20f780 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F780u;
            // 0x20f784: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f780) {
            ctx->pc = 0x20F79Cu;
            goto label_20f79c;
        }
    }
    ctx->pc = 0x20F788u;
    // 0x20f788: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f78c:
    // 0x20f78c: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x20f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x20f790: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20f790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20f794:
    // 0x20f794: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20F794u;
    {
        const bool branch_taken_0x20f794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F794u;
            // 0x20f798: 0x26427508  addiu       $v0, $s2, 0x7508 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f794) {
            ctx->pc = 0x20F7C4u;
            goto label_20f7c4;
        }
    }
    ctx->pc = 0x20F79Cu;
label_20f79c:
    // 0x20f79c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20f79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20f7a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f7a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20F7A4u;
    {
        const bool branch_taken_0x20f7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F7A4u;
            // 0x20f7a8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7a4) {
            ctx->pc = 0x20F7C0u;
            goto label_20f7c0;
        }
    }
    ctx->pc = 0x20F7ACu;
label_20f7ac:
    // 0x20f7ac: 0xc040314  jal         func_100C50
    ctx->pc = 0x20F7ACu;
    SET_GPR_U32(ctx, 31, 0x20F7B4u);
    ctx->pc = 0x20F7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F7ACu;
            // 0x20f7b0: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100C50u;
    if (runtime->hasFunction(0x100C50u)) {
        auto targetFn = runtime->lookupFunction(0x100C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F7B4u; }
        if (ctx->pc != 0x20F7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100C50_0x100c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F7B4u; }
        if (ctx->pc != 0x20F7B4u) { return; }
    }
    ctx->pc = 0x20F7B4u;
    // 0x20f7b4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x20f7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x20f7b8: 0xc6000278  lwc1        $f0, 0x278($s0)
    ctx->pc = 0x20f7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f7bc: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x20f7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_20f7c0:
    // 0x20f7c0: 0x26427508  addiu       $v0, $s2, 0x7508
    ctx->pc = 0x20f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29960));
label_20f7c4:
    // 0x20f7c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20f7c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f7c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20f7c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f7cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20f7ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x20F7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F7D4u;
            // 0x20f7d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F674u: goto label_20f674;
            case 0x20F6B8u: goto label_20f6b8;
            case 0x20F730u: goto label_20f730;
            case 0x20F750u: goto label_20f750;
            case 0x20F770u: goto label_20f770;
            case 0x20F78Cu: goto label_20f78c;
            case 0x20F794u: goto label_20f794;
            case 0x20F79Cu: goto label_20f79c;
            case 0x20F7ACu: goto label_20f7ac;
            case 0x20F7C0u: goto label_20f7c0;
            case 0x20F7C4u: goto label_20f7c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F7DCu;
    // 0x20f7dc: 0x0  nop
    ctx->pc = 0x20f7dcu;
    // NOP
}
